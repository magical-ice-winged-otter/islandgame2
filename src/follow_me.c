#include "global.h"
#include "follow_me.h"
#include "event_object_movement.h"
#include "field_door.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff_misc.h"
#include "item.h"
#include "task.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "script.h"
#include "event_data.h"
#include "sound.h"
#include "trig.h"
#include "metatile_behavior.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/songs.h"
#include "constants/map_types.h"
#include "constants/field_effects.h"

// Defines
#define PLAYER_AVATAR_FLAG_BIKE    PLAYER_AVATAR_FLAG_MACH_BIKE | PLAYER_AVATAR_FLAG_ACRO_BIKE

enum FollowerSpriteTypes
{
    FOLLOWER_SPRITE_INDEX_NORMAL,
    FOLLOWER_SPRITE_INDEX_MACH_BIKE,
    FOLLOWER_SPRITE_INDEX_ACRO_BIKE,
    FOLLOWER_SPRITE_INDEX_SURF,
    FOLLOWER_SPRITE_INDEX_UNDERWATER,
};

struct FollowerSpriteGraphics
{
    u16 normalId;
    u16 machBikeId;
    u16 acroBikeId;
    u16 surfId;
    u16 underwaterId;
};

struct FollowerMapData
{
    /*0x0*/ u8 id;
    /*0x1*/ u8 number;
    /*0x2*/ u8 group;
}; /* size = 0x4 */

struct Follower
{
    /*0x00*/ u8 inProgress:1;
             u8 warpEnd:1;
             u8 createSurfBlob:3;
             u8 comeOutDoorStairs:3;
    /*0x01*/ u8 objId;
    /*0x02*/ u8 currentSprite;
    /*0x03*/ u8 delayedState;
    /*0x04*/ struct FollowerMapData map;
    /*0x08*/ struct Coords16 log;
    /*0x0C*/ const u8* script;
    /*0x10*/ u16 flag;
    /*0x12*/ u16 graphicsId;
    /*0x14*/ u8 flags;
    /*0x15*/ u8 locked;
}; /* size = 0x18 */

// EWRAM
EWRAM_DATA struct Follower sFollowerState = {0};

// Function Declarations
static u8 GetFollowerMapObjId(void);
static u16 GetFollowerSprite(void);
static void TryUpdateFollowerSpriteUnderwater(void);
static void Task_ReallowPlayerMovement(u8 taskId);
static u8 DetermineFollowerDirection(struct ObjectEvent* player, struct ObjectEvent* follower);
static void PlayerLogCoordinates(struct ObjectEvent* player);
static u8 DetermineFollowerState(struct ObjectEvent* follower, u8 state, u8 direction);
static bool8 IsStateMovement(u8 state);
static u8 ReturnFollowerDelayedState(u8 direction);
static void SetSurfJump(void);
static void Task_BindSurfBlobToFollower(u8 taskId);
static void SetUpSurfBlobFieldEffect(struct ObjectEvent* npc);
static void SetSurfDismount(void);
static void Task_FinishSurfDismount(u8 taskId);
static void Task_FollowerOutOfDoor(u8 taskId);
static void Task_FollowerHandleIndoorStairs(u8 taskId);
static void Task_FollowerHandleEscalator(u8 taskId);
static void Task_FollowerHandleEscalatorFinish(u8 taskId);
static void CalculateFollowerEscalatorTrajectoryUp(struct Task *task);
static void CalculateFollowerEscalatorTrajectoryDown(struct Task *task);
static void SetFollowerSprite(u8 spriteIndex);
static void TurnNPCIntoFollower(u8 localId, u8 followerFlags);
static void FollowMe_HandleSprite(void);

// Const Data
static const struct FollowerSpriteGraphics gFollowerAlternateSprites[] =
{
    //FORMAT:
    //{WALKING/RUNNING SPRITE ID, MACH BIKE SPRITE ID, ACRO BIKE SPRITE ID, SURFING SPRITE ID},
    {OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL, OBJ_EVENT_GFX_RIVAL_BRENDAN_MACH_BIKE, OBJ_EVENT_GFX_RIVAL_BRENDAN_ACRO_BIKE, OBJ_EVENT_GFX_RIVAL_BRENDAN_SURFING},
    
};

// Functions
static u8 GetFollowerObjectId(void)
{
    if (!sFollowerState.inProgress)
        return OBJECT_EVENTS_COUNT;

    return sFollowerState.objId;
}

static u8 GetFollowerLocalId(void)
{
    if (!sFollowerState.inProgress)
        return 0;

    return gObjectEvents[sFollowerState.objId].localId;
}

static const u8* GetFollowerScriptPointer(void)
{
    if (!sFollowerState.inProgress)
        return NULL;

    return sFollowerState.script;
}

static void HideFollower(void)
{
    if (!sFollowerState.inProgress)
        return;

    if (sFollowerState.createSurfBlob == 2 || sFollowerState.createSurfBlob == 3)
    {
        BindFieldEffectToSprite(gObjectEvents[GetFollowerMapObjId()].fieldEffectSpriteId, 2);   //sub_81555AC in pokeem
        DestroySprite(&gSprites[gObjectEvents[GetFollowerMapObjId()].fieldEffectSpriteId]);
        gObjectEvents[GetFollowerMapObjId()].fieldEffectSpriteId = 0; //Unbind
    }

    gObjectEvents[GetFollowerMapObjId()].invisible = TRUE;
}

void IsFollowerStoppingRockClimb(void)
{
    gSpecialVar_Result = FALSE;
    if (!sFollowerState.inProgress)
        return;

    gSpecialVar_Result = (sFollowerState.flags & FOLLOWER_FLAG_CAN_ROCK_CLIMB) == 0;
}

void FollowMe_SetIndicatorToComeOutDoor(void)
{
    if (sFollowerState.inProgress)
        sFollowerState.comeOutDoorStairs = 1;
}

void FollowMe_SetIndicatorToRecreateSurfBlob(void)
{
    if (sFollowerState.inProgress)
        sFollowerState.createSurfBlob = 2;
}

void FollowMe_TryRemoveFollowerOnWhiteOut(void)
{
    if (sFollowerState.inProgress)
    {
        if (sFollowerState.flags & FOLLOWER_FLAG_CLEAR_ON_WHITE_OUT)
            sFollowerState.inProgress = FALSE;
    }
}

static u8 GetFollowerMapObjId(void)
{
    return sFollowerState.objId;
}

static u16 GetFollowerSprite(void)
{
    u32 i;
    
    switch (sFollowerState.currentSprite)
    {
    case FOLLOWER_SPRITE_INDEX_MACH_BIKE:
        for (i = 0; i < NELEMS(gFollowerAlternateSprites); i++)
        {
            if (gFollowerAlternateSprites[i].normalId == sFollowerState.graphicsId)
                return gFollowerAlternateSprites[i].machBikeId;
        }
        break;
    case FOLLOWER_SPRITE_INDEX_ACRO_BIKE:
        for (i = 0; i < NELEMS(gFollowerAlternateSprites); i++)
        {
            if (gFollowerAlternateSprites[i].normalId == sFollowerState.graphicsId)
                return gFollowerAlternateSprites[i].acroBikeId;
        }
        break;
    case FOLLOWER_SPRITE_INDEX_SURF:
        for (i = 0; i < NELEMS(gFollowerAlternateSprites); i++)
        {
            if (gFollowerAlternateSprites[i].normalId == sFollowerState.graphicsId)
                return gFollowerAlternateSprites[i].surfId;
        }
        break;
    case FOLLOWER_SPRITE_INDEX_UNDERWATER:
        for (i = 0; i < NELEMS(gFollowerAlternateSprites); i++)
        {
            if (gFollowerAlternateSprites[i].normalId == sFollowerState.graphicsId)
                return gFollowerAlternateSprites[i].underwaterId;
        }
        break;
    }

    return sFollowerState.graphicsId;
}

static void TryUpdateFollowerSpriteUnderwater(void)
{
    if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
    {
        struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
        SetFollowerSprite(FOLLOWER_SPRITE_INDEX_UNDERWATER);

        follower = &gObjectEvents[GetFollowerMapObjId()]; //Can change on reload sprite
        follower->fieldEffectSpriteId = DoBobbingFieldEffect(follower->spriteId);
    }
}

//Actual Follow Me
void FollowMe(struct ObjectEvent* npc, u8 state, bool8 ignoreScriptActive)
{
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    u8 dir;
    u8 newState;
    u8 taskId;

    if (player != npc) //Only when the player moves
        return;

    if (!sFollowerState.inProgress)
        return;

    if (ScriptContext2_IsEnabled() && !ignoreScriptActive)
        return; //Don't follow during a script

    //Check if state would cause hidden follower to reappear
    if (IsStateMovement(state) && sFollowerState.warpEnd)
    {
        sFollowerState.warpEnd = 0;

        if (sFollowerState.comeOutDoorStairs == 1)
        {
            gPlayerAvatar.preventStep = TRUE;
            taskId = CreateTask(Task_FollowerOutOfDoor, 1);
            gTasks[taskId].data[0] = 0;
            gTasks[taskId].data[2] = follower->currentCoords.x;
            gTasks[taskId].data[3] = follower->currentCoords.y;
            goto RESET;
        }
        else if (sFollowerState.comeOutDoorStairs == 2)
            sFollowerState.comeOutDoorStairs = 0;

        follower->invisible = FALSE;
        MoveObjectEventToMapCoords(follower, player->currentCoords.x, player->currentCoords.y);
        ObjectEventTurn(follower, player->facingDirection); //The follower should be facing the same direction as the player when it comes out of hiding

        if (sFollowerState.createSurfBlob == 2) //Recreate surf blob
        {
            SetUpSurfBlobFieldEffect(follower);
            follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
            BindFieldEffectToSprite(follower->fieldEffectSpriteId, 1);
        }
        else
            TryUpdateFollowerSpriteUnderwater();
    }

    dir = DetermineFollowerDirection(player, follower);

    if (dir == DIR_NONE)
        goto RESET;

    newState = DetermineFollowerState(follower, state, dir);

    if (newState == MOVEMENT_INVALID)
        goto RESET;

    if (sFollowerState.createSurfBlob == 1) //Get on Surf Blob
    {
        sFollowerState.createSurfBlob = 2;
        gPlayerAvatar.preventStep = TRUE; //Wait for finish
        SetSurfJump();
        goto RESET;
    }
    else if (sFollowerState.createSurfBlob == 3) //Get off Surf Blob
    {
        sFollowerState.createSurfBlob = 0;
        gPlayerAvatar.preventStep = TRUE; //Wait for finish
        SetSurfDismount();
        goto RESET;
    }

    ObjectEventClearHeldMovementIfActive(follower);
    ObjectEventSetHeldMovement(follower, newState);
    PlayerLogCoordinates(player);

    //*((u8*) 0x2023D6C) = newState;

    switch (newState) 
    {
    case MOVEMENT_ACTION_JUMP_2_DOWN ... MOVEMENT_ACTION_JUMP_2_RIGHT:
    //case 0x84 ... 0x87:
    //case MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT_UP_FACE_RIGHT:
    //case MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_RUN_RIGHT_UP_FACE_RIGHT:
    //case MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT:
        CreateTask(Task_ReallowPlayerMovement, 1); //Synchronize movements on stairs and ledges
        gPlayerAvatar.preventStep = TRUE;
    }

RESET:
    ObjectEventClearHeldMovementIfFinished(follower);
}

static void Task_ReallowPlayerMovement(u8 taskId)
{
    bool8 animStatus = ObjectEventClearHeldMovementIfFinished(&gObjectEvents[GetFollowerMapObjId()]);
    if (animStatus == 0)
    {
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH)
        && ObjectEventClearHeldMovementIfFinished(&gObjectEvents[gPlayerAvatar.objectEventId]))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Temporarily stop running
        return;
    }

    gPlayerAvatar.preventStep = FALSE;
    DestroyTask(taskId);
}

static u8 DetermineFollowerDirection(struct ObjectEvent* player, struct ObjectEvent* follower)
{
    //Move the follower towards the player
    s8 delta_x = follower->currentCoords.x - player->currentCoords.x;
    s8 delta_y = follower->currentCoords.y - player->currentCoords.y;

    if (delta_x < 0)
        return DIR_EAST;
    else if (delta_x > 0)
        return DIR_WEST;

    if (delta_y < 0)
        return DIR_SOUTH;
    else if (delta_y > 0)
        return DIR_NORTH;

    return DIR_NONE;
}

static void PlayerLogCoordinates(struct ObjectEvent* player)
{
    sFollowerState.log.x = player->currentCoords.x;
    sFollowerState.log.y = player->currentCoords.y;
}

#define RETURN_STATE(state, dir) return newState == MOVEMENT_INVALID ? state + (dir - 1) : ReturnFollowerDelayedState(dir - 1);
static u8 DetermineFollowerState(struct ObjectEvent* follower, u8 state, u8 direction)
{
    u8 newState = MOVEMENT_INVALID;

    if (IsStateMovement(state) && sFollowerState.delayedState)
        newState = sFollowerState.delayedState + direction;

    //*((u8*) 0x2023D6B) = state; //For Debug

    //Clear ice tile stuff
    follower->disableAnim = FALSE; //follower->field1 &= 0xFB;

    switch (state) 
    {
    case MOVEMENT_ACTION_WALK_SLOW_DOWN ... MOVEMENT_ACTION_WALK_SLOW_RIGHT:
        // Slow walk
        RETURN_STATE(MOVEMENT_ACTION_WALK_SLOW_DOWN, direction);

    case MOVEMENT_ACTION_WALK_NORMAL_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT:
        // Slow slow
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_JUMP_2_DOWN ... MOVEMENT_ACTION_JUMP_2_RIGHT:
        // Ledge jump
        if (((newState - direction) >= MOVEMENT_ACTION_JUMP_2_DOWN && (newState - direction) <= MOVEMENT_ACTION_JUMP_2_RIGHT)
        ||  ((newState - direction) >= 0x84 && (newState - direction) <= 0x87)) //Previously jumped
        {
            newState = MOVEMENT_INVALID;
            RETURN_STATE(MOVEMENT_ACTION_JUMP_2_DOWN, direction); //Jump right away
        }

        sFollowerState.delayedState = MOVEMENT_ACTION_JUMP_2_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_WALK_FAST_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT:
         //Handle ice tile (some walking animation)
         //Set a bit to freeze the follower's animation
        if (MetatileBehavior_IsIce(follower->currentMetatileBehavior) || MetatileBehavior_IsTrickHouseSlipperyFloor(follower->currentMetatileBehavior))
            follower->disableAnim = TRUE;
        
        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
    /*
    case MOVEMENT_ACTION_SLIDE_SLOW_DOWN ... MOVEMENT_ACTION_SLIDE_SLOW_RIGHT:
        //Slow slide or Bike Speed
        RETURN_STATE(MOVEMENT_ACTION_SLIDE_SLOW_DOWN, direction);
    */
    case MOVEMENT_ACTION_SLIDE_DOWN ... MOVEMENT_ACTION_SLIDE_RIGHT:
        //Slide
        RETURN_STATE(MOVEMENT_ACTION_SLIDE_DOWN, direction);
    /*
    case MOVEMENT_ACTION_SLIDE_FAST_DOWN ... MOVEMENT_ACTION_SLIDE_FAST_DOWN:
        //Slide Fast
        RETURN_STATE(MOVEMENT_ACTION_SLIDE_FAST_DOWN, direction);
    */
    /*
    case MOVEMENT_ACTION_SLIDE_RIGHT_FOOT_DOWN ... MOVEMENT_ACTION_SLIDE_RIGHT_FOOT_RIGHT:
        //Running frames
        if (sFollowerState.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
            RETURN_STATE(MOVEMENT_ACTION_SLIDE_RIGHT_FOOT_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
    
    case MOVEMENT_ACTION_SLIDE_LEFT_FOOT_DOWN ... MOVEMENT_ACTION_SLIDE_LEFT_FOOT_RIGHT:
        //Stairs (slow walking)
        if (sFollowerState.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
        {
            //Running sideways on stairs does not use the slow
            //frames, so split this into two.
            if (direction <= DIR_NORTH)
            {
                RETURN_STATE(MOVEMENT_ACTION_SLIDE_LEFT_FOOT_DOWN, direction);
            }
            else
            {
                RETURN_STATE(MOVEMENT_ACTION_SLIDE_RIGHT_FOOT_DOWN, direction);
            }
        }
        else
        {
            RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
        }
    */

    case MOVEMENT_ACTION_JUMP_SPECIAL_DOWN ... MOVEMENT_ACTION_JUMP_SPECIAL_RIGHT:
        sFollowerState.delayedState = MOVEMENT_ACTION_JUMP_SPECIAL_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_JUMP_DOWN ... MOVEMENT_ACTION_JUMP_RIGHT:
        sFollowerState.delayedState = MOVEMENT_ACTION_JUMP_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);
        
    /*
    case 0x84 ... 0x87:
        //Ledge run
        if (((newState - direction) >= MOVEMENT_ACTION_JUMP_2_DOWN && (newState - direction) <= MOVEMENT_ACTION_JUMP_2_RIGHT)
        ||  ((newState - direction) >= 0x84 && (newState - direction) <= 0x87)) //Previously jumped
        {
            newState = MOVEMENT_INVALID;
            if (sFollowerState.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
            {
                RETURN_STATE(0x84, direction); //Jump right away
            }
            else
            {
                RETURN_STATE(MOVEMENT_ACTION_JUMP_2_DOWN, direction); //Jump right away
            }
        }

        if (sFollowerState.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
            sFollowerState.delayedState = 0x84;
        else
            sFollowerState.delayedState = MOVEMENT_ACTION_JUMP_2_DOWN;

        if (sFollowerState.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
            RETURN_STATE(MOVEMENT_ACTION_SLIDE_RIGHT_FOOT_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
    */
    
    /*
    case MOVEMENT_ACTION_SPIN_PAD_DOWN ... MOVEMENT_ACTION_SPIN_PAD_RIGHT:
        //Warp pad spinning movement
        if (newState == state + direction)
        {
            newState = MOVEMENT_INVALID;
            RETURN_STATE(MOVEMENT_ACTION_SPIN_PAD_DOWN, direction);
        }

        sFollowerState.delayedState = MOVEMENT_ACTION_SPIN_PAD_DOWN;
        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);
    */
    
    /* From FR expanded movement actions
    case MOVEMENT_ACTION_WALK_SLOWEST_UP_BACKWARDS ... MOVEMENT_ACTION_WALK_SLOWEST_LEFT_BACKWARDS:
        RETURN_STATE(MOVEMENT_ACTION_WALK_SLOWEST_UP_BACKWARDS, direction);

    case MOVEMENT_ACTION_WALK_SLOW_UP_BACKWARDS ... MOVEMENT_ACTION_WALK_SLOW_LEFT_BACKWARDS:
        RETURN_STATE(MOVEMENT_ACTION_WALK_SLOW_UP_BACKWARDS, direction);

    case MOVEMENT_ACTION_WALK_NORMAL_UP_BACKWARDS ... MOVEMENT_ACTION_WALK_NORMAL_LEFT_BACKWARDS:
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_UP_BACKWARDS, direction);

    case MOVEMENT_ACTION_WALK_FAST_UP_BACKWARDS ... MOVEMENT_ACTION_WALK_FAST_LEFT_BACKWARDS:
        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_UP_BACKWARDS, direction);

    case MOVEMENT_ACTION_JUMP_2_UP_BACKWARDS ... MOVEMENT_ACTION_JUMP_2_LEFT_BACKWARDS:
        RETURN_STATE(MOVEMENT_ACTION_JUMP_2_UP_BACKWARDS, direction);

    case MOVEMENT_ACTION_JUMP_UP_BACKWARDS ... MOVEMENT_ACTION_JUMP_LEFT_BACKWARDS:
        RETURN_STATE(MOVEMENT_ACTION_JUMP_UP_BACKWARDS, direction);

    case MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT_UP_FACE_RIGHT:
        //Walk up/down side stairs
        if (newState == state + direction) //Still walking up/down stairs same direction
        {
            newState = MOVEMENT_INVALID;
            RETURN_STATE(state, 1); //Each is its own movement
        }
        else if (newState - direction >= MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN && newState - direction <= MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT) //Change direction on stairs
        {
            sFollowerState.delayedState = state;

            //Get new state but at different speed
            newState -= direction;
            u8 simpleState = MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN;
            switch (newState) {
                case MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT_UP_FACE_RIGHT:
                    state = (newState - MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN) + simpleState;
                    break;
                case MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_RUN_RIGHT_UP_FACE_RIGHT:
                    state = (newState - MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN) + simpleState;
                    break;
                case MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT:
                    state = (newState - MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN) + simpleState;
                    break;
            }

            newState = MOVEMENT_INVALID;
            RETURN_STATE(state, 1); //Each is its own movement
        }

        //Beginning on stairs
        sFollowerState.delayedState = state;
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction); //Each is its own movement

    case MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_RUN_RIGHT_UP_FACE_RIGHT:
    {
        //Run up/down side stairs
        u8 delayState;
        u8 simpleState;
        u8 action;

        if (sFollowerState.flags & FOLLOWER_FLAG_HAS_RUNNING_FRAMES)
        {
            delayState = state;
            simpleState = MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN;
            action = MOVEMENT_ACTION_SLIDE_RIGHT_FOOT_DOWN;
        }
        else
        {
            delayState = (state - MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN) + MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN;
            simpleState = MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN;
            action = MOVEMENT_ACTION_WALK_FAST_DOWN;
        }

        if (newState == state + direction)
        {
            newState = MOVEMENT_INVALID;
            RETURN_STATE(delayState, 1); //Each is its own movement
        }
        
        else if (newState - direction >= MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN && newState - direction <= MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT)
        {
            newState -= direction;
            switch (newState)
            {
            case MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT_UP_FACE_RIGHT:
                state = (newState - MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN) + simpleState;
                break;
            case MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_RUN_RIGHT_UP_FACE_RIGHT:
                state = (newState - MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN) + simpleState;
                break;
            case MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT:
                state = (newState - MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN) + simpleState;
                break;
            }

            sFollowerState.delayedState = delayState;
            newState = MOVEMENT_INVALID;
            RETURN_STATE(state, 1); //Each is its own movement
        }
        
        sFollowerState.delayedState = delayState;
        RETURN_STATE(action, direction); //Each is its own movement
    }
    case MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT: ;
        //Bike up/down side stairs
        if (newState == state + direction)
        {
            newState = MOVEMENT_INVALID;
            RETURN_STATE(state, 1); //Each is its own movement
        }
        else if (newState - direction >= MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN && newState - direction <= MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT)
        {
            u8 simpleState = MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN;
            sFollowerState.delayedState = state;
            newState -= direction;
            switch (newState) 
            {
            case MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT_UP_FACE_RIGHT:
                state = (newState - MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN) + simpleState;
                break;
            case MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_RUN_RIGHT_UP_FACE_RIGHT:
                state = (newState - MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN) + simpleState;
                break;
            case MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT:
                state = (newState - MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN) + simpleState;
                break;
            }

            newState = MOVEMENT_INVALID;
            RETURN_STATE(state, 1); //Each is its own movement
        }

        sFollowerState.delayedState = state;
        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction); //Each is its own movement
    */
    default:
        return MOVEMENT_INVALID;
    }

    return newState;
}

static bool8 IsStateMovement(u8 state)
{
    switch (state) 
    {
    case MOVEMENT_ACTION_FACE_DOWN:
    case MOVEMENT_ACTION_FACE_UP:
    case MOVEMENT_ACTION_FACE_LEFT:
    case MOVEMENT_ACTION_FACE_RIGHT:
    //case MOVEMENT_ACTION_FACE_DOWN_FAST:
    //case MOVEMENT_ACTION_FACE_UP_FAST:
    //case MOVEMENT_ACTION_FACE_LEFT_FAST:
    //case MOVEMENT_ACTION_FACE_RIGHT_FAST:
    case MOVEMENT_ACTION_DELAY_1:
    case MOVEMENT_ACTION_DELAY_2:
    case MOVEMENT_ACTION_DELAY_4:
    case MOVEMENT_ACTION_DELAY_8:
    case MOVEMENT_ACTION_DELAY_16:
    case MOVEMENT_ACTION_FACE_PLAYER:
    case MOVEMENT_ACTION_FACE_AWAY_PLAYER:
    case MOVEMENT_ACTION_LOCK_FACING_DIRECTION:
    case MOVEMENT_ACTION_UNLOCK_FACING_DIRECTION:
    case MOVEMENT_ACTION_SET_INVISIBLE:
    case MOVEMENT_ACTION_SET_VISIBLE:
    case MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK:
    case MOVEMENT_ACTION_EMOTE_QUESTION_MARK:
    case MOVEMENT_ACTION_EMOTE_HEART:
    //case MOVEMENT_ACTION_EMOTE_CROSS:
    //case MOVEMENT_ACTION_EMOTE_DOUBLE_EXCLAMATION_MARK:
    //case MOVEMENT_ACTION_EMOTE_HAPPY:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_UP:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN_UP:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT_LEFT:
        return FALSE;
    }

    return TRUE;
}

static u8 ReturnFollowerDelayedState(u8 direction)
{
    u8 newState = sFollowerState.delayedState;
    sFollowerState.delayedState = 0;

    /*
    switch (newState) 
    {
    case MOVEMENT_ACTION_WALK_NORMAL_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT_UP_FACE_RIGHT:
    case MOVEMENT_ACTION_RUN_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_RUN_RIGHT_UP_FACE_RIGHT:
    case MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT:
        return newState; //Each its own movement, so don't modify direction
    }
    */

    return newState + direction;
}

#define LEDGE_FRAMES_MULTIPLIER 2

//extern void (**stepspeeds[5])(struct Sprite*, u8);
//extern const u16 stepspeed_seq_length[5];
void FollowMe_Ledges(struct ObjectEvent* npc, struct Sprite* sprite, u16* ledgeFramesTbl)
{
    u8 speed;
    u16 frameCount;
    u8 currentFrame;
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    
    if (!sFollowerState.inProgress)
        return;

    if (follower == npc)
        speed = gPlayerAvatar.runningState ? 3 : 1;
    else
        speed = 0;

    //Calculate the frames for the jump
    frameCount = GetMiniStepCount(speed) * LEDGE_FRAMES_MULTIPLIER;   //in event_object_movement.c
    ledgeFramesTbl[sprite->data[4]] = frameCount;

    //Call the step shifter
    currentFrame = sprite->data[6] / LEDGE_FRAMES_MULTIPLIER;
    //stepspeeds[speed][currentFrame](sprite, sprite->data[3]);
    RunMiniStep(sprite, speed, currentFrame);   //in event_object_movement.c
}

bool8 FollowMe_IsCollisionExempt(struct ObjectEvent* obstacle, struct ObjectEvent* collider)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    
    if (!sFollowerState.inProgress)
        return FALSE;

    if (obstacle == follower && collider == player)
        return TRUE;

    return FALSE;
}

void FollowMe_FollowerToWater(void)
{
    if (!sFollowerState.inProgress)
        return;

    //Prepare for making the follower do the jump and spawn the surf head
    //right in front of the follower's location.
    FollowMe(&gObjectEvents[gPlayerAvatar.objectEventId], MOVEMENT_ACTION_JUMP_DOWN, TRUE);
    sFollowerState.createSurfBlob = 1;
}

void FollowMe_BindToSurbBlobOnReloadScreen(void)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    
    if (!sFollowerState.inProgress)
        return;

    TryUpdateFollowerSpriteUnderwater();

    if (sFollowerState.createSurfBlob != 2 && sFollowerState.createSurfBlob != 3)
        return;

    //Spawn surfhead under follower
    SetUpSurfBlobFieldEffect(follower);
    follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
    BindFieldEffectToSprite(follower->fieldEffectSpriteId, 1);
}

static void SetSurfJump(void)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    u8 direction;
    u8 jumpState;

    //Reset NPC movement bits
    ObjectEventClearHeldMovement(follower);

    //Jump animation according to direction
    direction = DetermineFollowerDirection(&gObjectEvents[gPlayerAvatar.objectEventId], follower);
    jumpState = GetJumpMovementAction(direction);
    SetUpSurfBlobFieldEffect(follower);

    //Adjust surf head spawn location infront of follower
    switch (direction) 
    {
    case DIR_SOUTH:
        gFieldEffectArguments[1]++; //effect_y
        break;
    case DIR_NORTH:
        gFieldEffectArguments[1]--;
        break;
    case DIR_WEST:
        gFieldEffectArguments[0]--; //effect_x
        break;
    default: //DIR_EAST
        gFieldEffectArguments[0]++;
    };

    //Execute, store sprite ID in fieldEffectSpriteId and bind surf blob
    follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
    CreateTask(Task_BindSurfBlobToFollower, 0x1);
    SetFollowerSprite(FOLLOWER_SPRITE_INDEX_SURF);

    follower = &gObjectEvents[GetFollowerMapObjId()];
    ObjectEventSetHeldMovement(follower, jumpState);
}

static void Task_BindSurfBlobToFollower(u8 taskId)
{
    struct ObjectEvent* npc = &gObjectEvents[GetFollowerMapObjId()];
    bool8 animStatus = ObjectEventClearHeldMovementIfFinished(npc); //Wait jump animation
    if (animStatus == 0)
        return;

    //Bind objs
    BindFieldEffectToSprite(npc->fieldEffectSpriteId, 0x1);
    UnfreezeObjectEvents();
    DestroyTask(taskId);
    gPlayerAvatar.preventStep = FALSE; //Player can move again
    return;
}

static void SetUpSurfBlobFieldEffect(struct ObjectEvent* npc)
{
    //Set up gFieldEffectArguments for execution
    gFieldEffectArguments[0] = npc->currentCoords.x;     //effect_x
    gFieldEffectArguments[1] = npc->currentCoords.y;    //effect_y
    gFieldEffectArguments[2] = sFollowerState.objId;    //objId
}

void PrepareFollowerDismountSurf(void)
{
    if (!sFollowerState.inProgress)
        return;

    FollowMe(&gObjectEvents[gPlayerAvatar.objectEventId], MOVEMENT_ACTION_WALK_NORMAL_DOWN, TRUE);
    sFollowerState.createSurfBlob = 3;
}

static void SetSurfDismount(void)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    u8 direction;
    u8 jumpState;
    u8 task;
    
    ObjectEventClearHeldMovement(follower);

    //Jump animation according to direction
    direction = DetermineFollowerDirection(&gObjectEvents[gPlayerAvatar.objectEventId], follower);
    jumpState = GetJumpMovementAction(direction);

    //Unbind and destroy Surf Blob
    task = CreateTask(Task_FinishSurfDismount, 1);
    gTasks[task].data[0] = follower->fieldEffectSpriteId;
    BindFieldEffectToSprite(follower->fieldEffectSpriteId, 2);
    follower->fieldEffectSpriteId = 0; //Unbind
    FollowMe_HandleSprite();

    follower = &gObjectEvents[GetFollowerMapObjId()]; //Can change after sprite reload
    ObjectEventSetHeldMovement(follower, jumpState);
}

static void Task_FinishSurfDismount(u8 taskId)
{
    struct ObjectEvent* npc = &gObjectEvents[GetFollowerMapObjId()];
    bool8 animStatus = ObjectEventClearHeldMovementIfFinished(npc); //Wait animation
    if (animStatus == 0)
    {
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH)
        && ObjectEventClearHeldMovementIfFinished(&gObjectEvents[gPlayerAvatar.objectEventId]))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Temporarily stop running
        return;
    }

    DestroySprite(&gSprites[gTasks[taskId].data[0]]);
    UnfreezeObjectEvents();
    DestroyTask(taskId);
    gPlayerAvatar.preventStep = FALSE;
}

void PlayerGoThroughDoor(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    s16 *x = &task->data[2];
    s16 *y = &task->data[3];
    u8 playerObjId = gPlayerAvatar.objectEventId;
    u8 followerObjId = GetFollowerObjectId();

    switch (task->data[0])
    {
    case 0:
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Stop running

        sFollowerState.comeOutDoorStairs = 0; //Just in case came out and when right back in
        FreezeObjectEvents();
        PlayerGetDestCoords(x, y);
        PlaySE(GetDoorSoundEffect(*x, *y - 1));
        task->data[1] = FieldAnimateDoorOpen(*x, *y - 1);
        task->data[0] = 1;
        break;
    case 1:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE)
        {
            ObjectEventClearHeldMovementIfActive(&gObjectEvents[playerObjId]);
            ObjectEventSetHeldMovement(&gObjectEvents[playerObjId], MOVEMENT_ACTION_WALK_NORMAL_UP);

            if (sFollowerState.inProgress && !gObjectEvents[followerObjId].invisible)
            {
                u8 newState = DetermineFollowerState(&gObjectEvents[followerObjId], MOVEMENT_ACTION_WALK_NORMAL_UP,
                                                    DetermineFollowerDirection(&gObjectEvents[playerObjId], &gObjectEvents[followerObjId]));
                ObjectEventClearHeldMovementIfActive(&gObjectEvents[followerObjId]);
                ObjectEventSetHeldMovement(&gObjectEvents[followerObjId], newState);
            }

            task->data[0] = 2;
        }
        break;
    case 2:
        if (IsPlayerStandingStill())
        {
            if (!sFollowerState.inProgress || gObjectEvents[followerObjId].invisible) //Don't close door on follower
                task->data[1] = FieldAnimateDoorClose(*x, *y - 1);
            ObjectEventClearHeldMovementIfFinished(&gObjectEvents[playerObjId]);
            SetPlayerVisibility(0);
            task->data[0] = 3;
        }
        break;
    case 3:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE)
        {
            task->data[0] = 4;
        }
        break;
    case 4:
        if (sFollowerState.inProgress)
        {
            ObjectEventClearHeldMovementIfActive(&gObjectEvents[followerObjId]);
            ObjectEventSetHeldMovement(&gObjectEvents[followerObjId], MOVEMENT_ACTION_WALK_NORMAL_UP);
        }

        TryFadeOutOldMapMusic();
        WarpFadeOutScreen();
        PlayRainStoppingSoundEffect();
        task->data[0] = 0;
        task->func = (void*) 0x807E719;
        break;
    case 5:
        TryFadeOutOldMapMusic();
        PlayRainStoppingSoundEffect();
        task->data[0] = 0;
        task->func = (void*) 0x807E719;
        break;
    }
}

static u8 GetPlayerFaceToDoorDirection(struct ObjectEvent* player, struct ObjectEvent* follower)
{
    s16 delta_x = player->currentCoords.x - follower->currentCoords.x;

    if (delta_x < 0)
        return DIR_EAST;
    else if (delta_x > 0)
        return DIR_WEST;

    return DIR_NORTH;
}

static void Task_FollowerOutOfDoor(u8 taskId)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Task *task = &gTasks[taskId];
    s16 x = task->data[2];
    s16 y = task->data[3];

    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH)
    && ObjectEventClearHeldMovementIfFinished(player))
        SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Temporarily stop running

    if (ObjectEventClearHeldMovementIfFinished(player))
        ObjectEventTurn(player, GetPlayerFaceToDoorDirection(player, follower)); //The player should face towards the follow as the exit the door

    switch (task->data[0])
    {
    case 0:
        FreezeObjectEvents();
        PlaySE(GetDoorSoundEffect(x, y));
        gTasks[taskId].data[1] = FieldAnimateDoorOpen(follower->currentCoords.x, follower->currentCoords.y);
        task->data[0] = 1;
        break;
    case 1:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE) //Door isn't still opening
        {
            follower->invisible = FALSE;
            ObjectEventTurn(follower, DIR_SOUTH); //The follower should be facing down when it comes out the door
            ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN);
            task->data[0] = 2;
        }
        break;
    case 2:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            task->data[1] = FieldAnimateDoorClose(x, y);
            task->data[0] = 3;
        }
        break;
    case 3:
        if (task->data[1] < 0 || gTasks[task->data[1]].isActive != TRUE) //Door is closed
        {
            UnfreezeObjectEvents();
            task->data[0] = 4;
        }
        break;
    case 4:
        FollowMe_HandleSprite();
        sFollowerState.comeOutDoorStairs = 0;
        gPlayerAvatar.preventStep = FALSE; //Player can move again
        DestroyTask(taskId);
    break;
    }
}

void StairsMoveFollower(void)
{
    if (!sFollowerState.inProgress)
        return;

    if (!FuncIsActiveTask(Task_FollowerHandleIndoorStairs) && sFollowerState.comeOutDoorStairs != 2)
        CreateTask(Task_FollowerHandleIndoorStairs, 1);
}

static void Task_FollowerHandleIndoorStairs(u8 taskId)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
    case 0:
        sFollowerState.comeOutDoorStairs = 2; //So the task doesn't get created more than once
        ObjectEventClearHeldMovementIfActive(follower);
        ObjectEventSetHeldMovement(follower, DetermineFollowerState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, DetermineFollowerDirection(player, follower)));
        task->data[0]++;
        break;
    case 1:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            ObjectEventSetHeldMovement(follower, DetermineFollowerState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, player->movementDirection));
            DestroyTask(taskId);
        }
        break;
    }
}

void EscalatorMoveFollower(u8 movementType)
{
    u8 taskId;
    
    if (!sFollowerState.inProgress)
        return;

    taskId = CreateTask(Task_FollowerHandleEscalator, 1);
    gTasks[taskId].data[1] = movementType;
}

static void Task_FollowerHandleEscalator(u8 taskId)
{
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    
    ObjectEventClearHeldMovementIfActive(follower);
    ObjectEventSetHeldMovement(follower, DetermineFollowerState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, DetermineFollowerDirection(player, follower)));
    DestroyTask(taskId);
}

void EscalatorMoveFollowerFinish(void)
{
    if (!sFollowerState.inProgress)
        return;

    CreateTask(Task_FollowerHandleEscalatorFinish, 1);
}

static void Task_FollowerHandleEscalatorFinish(u8 taskId)
{
    s16 x, y;
    struct ObjectEvent* follower = &gObjectEvents[GetFollowerMapObjId()];
    struct ObjectEvent* player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Sprite* sprite = &gSprites[follower->spriteId];
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
    case 0:
        MoveObjectEventToMapCoords(follower, player->currentCoords.x, player->currentCoords.y);
        PlayerGetDestCoords(&x, &y);
        task->data[2] = MapGridGetMetatileBehaviorAt(x, y);
        task->data[7] = 0;
        task->data[0]++;
        break;
    case 1:
        if (task->data[7]++ < 0x20) //Wait half a second before revealing the follower
            break;

        task->data[0]++;
        task->data[1] = 16;
        CalculateFollowerEscalatorTrajectoryUp(task);
        sFollowerState.warpEnd = 0;
        gPlayerAvatar.preventStep = TRUE;
        ObjectEventSetHeldMovement(follower, GetFaceDirectionMovementAction(DIR_EAST));
        if (task->data[2] == 0x6b)
            task->data[0] = 4;
        break;
    case 2:
        follower->invisible = FALSE;
        CalculateFollowerEscalatorTrajectoryDown(task);
        task->data[0]++;
        break;
    case 3:
        CalculateFollowerEscalatorTrajectoryDown(task);
        task->data[2]++;
        if (task->data[2] & 1)
        {
            task->data[1]--;
        }

        if (task->data[1] == 0)
        {
            sprite->pos2.x = 0;
            sprite->pos2.y = 0;
            task->data[0] = 6;
        }
        break;
    case 4:
        follower->invisible = FALSE;
        CalculateFollowerEscalatorTrajectoryUp(task);
        task->data[0]++;
        break;
    case 5:
        CalculateFollowerEscalatorTrajectoryUp(task);
        task->data[2]++;
        if (task->data[2] & 1)
        {
            task->data[1]--;
        }

        if (task->data[1] == 0)
        {
            sprite->pos2.x = 0;
            sprite->pos2.y = 0;
            task->data[0]++;
        }
        break;
    case 6:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            gPlayerAvatar.preventStep = FALSE;
            DestroyTask(taskId);
        }
    }
}

static void CalculateFollowerEscalatorTrajectoryDown(struct Task *task)
{
    struct Sprite* sprite = &gSprites[gObjectEvents[GetFollowerMapObjId()].spriteId];
    
    sprite->pos2.x = Cos(0x84, task->data[1]);
    sprite->pos2.y = Sin(0x94, task->data[1]);
}

static void CalculateFollowerEscalatorTrajectoryUp(struct Task *task)
{
    struct Sprite* sprite = &gSprites[gObjectEvents[GetFollowerMapObjId()].spriteId];
    
    sprite->pos2.x = Cos(0x7c, task->data[1]);
    sprite->pos2.y = Sin(0x76, task->data[1]);
}

void FollowMe_HandleBike(void)
{
    if (sFollowerState.currentSprite == FOLLOWER_SPRITE_INDEX_SURF) //Follower is surfing
        return; //Sprite will automatically be adjusted when they finish surfing

    if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_MACH_BIKE
      && sFollowerState.flags & FOLLOWER_FLAG_CAN_BIKE
      && sFollowerState.comeOutDoorStairs != 1) //Coming out door
        SetFollowerSprite(FOLLOWER_SPRITE_INDEX_MACH_BIKE); //Bike on
    else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ACRO_BIKE
      && sFollowerState.flags & FOLLOWER_FLAG_CAN_BIKE
      && sFollowerState.comeOutDoorStairs != 1) //Coming out door
        SetFollowerSprite(FOLLOWER_SPRITE_INDEX_ACRO_BIKE); //Bike on
    else
        SetFollowerSprite(FOLLOWER_SPRITE_INDEX_NORMAL);
}

static void FollowMe_HandleSprite(void)
{
    if (sFollowerState.flags & FOLLOWER_FLAG_CAN_BIKE)
    {
        if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_MACH_BIKE)
            SetFollowerSprite(FOLLOWER_SPRITE_INDEX_MACH_BIKE);
        else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ACRO_BIKE)
            SetFollowerSprite(FOLLOWER_SPRITE_INDEX_ACRO_BIKE);
    }
    else if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
    {
        TryUpdateFollowerSpriteUnderwater();
    }
    else
    {
        SetFollowerSprite(FOLLOWER_SPRITE_INDEX_NORMAL);
    }
}

static void SetFollowerSprite(u8 spriteIndex)
{
    u8 oldSpriteId;
    u8 newSpriteId;
    u16 newGraphicsId;
    struct ObjectEventTemplate clone;
    struct ObjectEvent backupFollower;
    struct ObjectEvent *follower;
    
    if (!sFollowerState.inProgress)
        return;

    if (sFollowerState.currentSprite == spriteIndex)
        return;

    //Save sprite
    follower = &gObjectEvents[GetFollowerMapObjId()];
    sFollowerState.currentSprite = spriteIndex;
    oldSpriteId = follower->spriteId;
    newGraphicsId = GetFollowerSprite();

    //Reload the entire event object.
    //It would usually be enough just to change the sprite Id, but if the original
    //sprite and the new sprite have different palettes, the palette would need to
    //be reloaded.
    backupFollower = *follower;
    backupFollower.graphicsId = newGraphicsId;
    //backupFollower.graphicsIdUpperByte = newGraphicsId >> 8;
    DestroySprite(&gSprites[oldSpriteId]);
    RemoveObjectEvent(&gObjectEvents[GetFollowerMapObjId()]);

    clone = *GetObjectEventTemplateByLocalIdAndMap(sFollowerState.map.id, sFollowerState.map.number, sFollowerState.map.group);
    clone.graphicsId = newGraphicsId;
    //clone.graphicsIdUpperByte = newGraphicsId >> 8;
    sFollowerState.objId = TrySpawnObjectEventTemplate(&clone, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, clone.x, clone.y);

    follower = &gObjectEvents[GetFollowerMapObjId()];
    newSpriteId = follower->spriteId;
    *follower = backupFollower;
    follower->spriteId = newSpriteId;
    MoveObjectEventToMapCoords(follower, follower->currentCoords.x, follower->currentCoords.y);
    ObjectEventTurn(follower, follower->facingDirection);
}

void FollowMe_WarpSetEnd(void)
{
    struct ObjectEvent *player;
    struct ObjectEvent *follower;
    u8 toY;
    
    if (!sFollowerState.inProgress)
        return;

    player = &gObjectEvents[gPlayerAvatar.objectEventId];
    follower = &gObjectEvents[GetFollowerMapObjId()];

    sFollowerState.warpEnd = 1;
    PlayerLogCoordinates(player);

    toY = sFollowerState.comeOutDoorStairs == 1 ? player->currentCoords.y - 1 : player->currentCoords.y;
    MoveObjectEventToMapCoords(follower, player->currentCoords.x, toY);

    follower->facingDirection = player->facingDirection;
    follower->movementDirection = player->movementDirection;
}

void CreateFollowerAvatar(void)
{
    struct ObjectEvent* player;
    struct ObjectEventTemplate clone;

    if (!sFollowerState.inProgress)
        return;

    player = &gObjectEvents[gPlayerAvatar.objectEventId];
    clone = *GetObjectEventTemplateByLocalIdAndMap(sFollowerState.map.id, sFollowerState.map.number, sFollowerState.map.group);

    clone.graphicsId = GetFollowerSprite();
    //clone.graphicsIdUpperByte = GetFollowerSprite() >> 8;
    clone.x = player->currentCoords.x - 7;
    clone.y = player->currentCoords.y - 7;
    clone.movementType = 0; //Doesn't get to move on its own

    switch (GetPlayerFacingDirection())
    {
    case DIR_NORTH:
        clone.movementType = MOVEMENT_TYPE_FACE_UP;
        break;
    case DIR_WEST:
        clone.movementType = MOVEMENT_TYPE_FACE_LEFT;
        break;
    case DIR_EAST:
        clone.movementType = MOVEMENT_TYPE_FACE_RIGHT;
        break;
    }

    // Create NPC and store ID
    sFollowerState.objId = TrySpawnObjectEventTemplate(&clone, sFollowerState.map.number, sFollowerState.map.group, clone.x, clone.y);
    if (sFollowerState.objId == OBJECT_EVENTS_COUNT)
        sFollowerState.inProgress = FALSE; //Cancel the following because couldn't load sprite

    if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
        sFollowerState.createSurfBlob = 0;

    gObjectEvents[sFollowerState.objId].invisible = TRUE;
}

static void TurnNPCIntoFollower(u8 localId, u8 followerFlags)
{
    struct ObjectEvent* follower;
    u8 eventObjId;
    const u8 *script;
    u16 flag;
    
    if (sFollowerState.inProgress)
        return; //Only 1 NPC following at a time

    for (eventObjId = 0; eventObjId < OBJECT_EVENTS_COUNT; eventObjId++) //For each NPC on the map
    {
        if (!gObjectEvents[eventObjId].active || gObjectEvents[eventObjId].isPlayer)
            continue;

        if (gObjectEvents[eventObjId].localId == localId)
        {
            follower = &gObjectEvents[eventObjId];
            follower->movementType = 0; //Doesn't get to move on its own anymore
            gSprites[follower->spriteId].callback = (void*) 0x805FFB5; //MovementType_None
            Overworld_SetObjEventTemplateMovementType(localId, 0);
            script = GetObjectEventScriptPointerByObjectEventId(eventObjId);
            flag = GetObjectEventTemplateByLocalIdAndMap(follower->localId, follower->mapNum, follower->mapGroup)->flagId;
            //gObjectEvents[eventObjId].localId = gObjectEvents[eventObjId].localId;

            sFollowerState.inProgress = TRUE;
            sFollowerState.objId = eventObjId;
            sFollowerState.graphicsId = follower->graphicsId;;
            sFollowerState.map.id = follower->localId;
            sFollowerState.map.number = gSaveBlock1Ptr->location.mapNum;
            sFollowerState.map.group = gSaveBlock1Ptr->location.mapGroup;
            sFollowerState.script = script;
            sFollowerState.flag = flag;
            sFollowerState.flags = followerFlags;
            sFollowerState.createSurfBlob = 0;
            sFollowerState.comeOutDoorStairs = 0;

            if (!(sFollowerState.flags & FOLLOWER_FLAG_CAN_BIKE) //Follower can't bike
            &&  TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE)) //Player on bike
                SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT); //Dismmount Bike
        }
    }
}

//@Details: Sets up the follow me feature.
//@Input:    local id - NPC to start following player.
//            flags - Follower flags.
void SetUpFollowerSprite(u8 localId, u8 flags)
{
    TurnNPCIntoFollower(localId, flags);
}

//@Details: Ends the follow me feature.
void DestroyFollower(void)
{
    if (sFollowerState.inProgress)
    {
        RemoveObjectEvent(&gObjectEvents[sFollowerState.objId]);
        FlagSet(sFollowerState.flag);
        sFollowerState.inProgress = FALSE;
    }
}

//@Details: Faces the player and the follower sprite towards each other.
void PlayerFaceFollowerSprite(void)
{
    if (sFollowerState.inProgress)
    {
        u8 playerDirection, followerDirection;
        struct ObjectEvent* player, *follower;
    
        player = &gObjectEvents[gPlayerAvatar.objectEventId];
        follower = &gObjectEvents[sFollowerState.objId];
        playerDirection = DetermineFollowerDirection(player, follower);
        followerDirection = playerDirection;
        
        //Flip direction
        switch (playerDirection) 
        {
        case DIR_NORTH:
            playerDirection = DIR_SOUTH;
            followerDirection = DIR_NORTH;
            break;
        case DIR_SOUTH:
            playerDirection = DIR_NORTH;
            followerDirection = DIR_SOUTH;
            break;
        case DIR_WEST:
            playerDirection = DIR_EAST;
            followerDirection = DIR_WEST;
            break;
        case DIR_EAST:
            playerDirection = DIR_WEST;
            followerDirection = DIR_EAST;
            break;
        }

        ObjectEventTurn(player, playerDirection);
        ObjectEventTurn(follower, followerDirection);
    }
}

//@Details: Checks if the player is being followed.
//@Returns: LastResult: 0 if the Player isn't being followed. 1 otherwise.
void CheckPlayerHasFollower(void)
{
    gSpecialVar_Result = sFollowerState.inProgress;
}


