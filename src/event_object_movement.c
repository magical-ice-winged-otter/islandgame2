#include "global.h"
#include "malloc.h"
#include "battle_pyramid.h"
#include "berry.h"
#include "debug.h"
#include "decoration.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "faraway_island.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "mauville_old_man.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "palette.h"
#include "random.h"
#include "sprite.h"
#include "task.h"
#include "trainer_see.h"
#include "trainer_hill.h"
#include "util.h"
#include "follow_me.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/items.h"
#include "constants/mauville_old_man.h"
#include "constants/metatile_behaviors.h"
#include "constants/trainer_types.h"
#include "constants/union_room.h"
#include "dynamic_objects.h"
#include "day_night.h"
#include "constants/metatile_behaviors.h"

// this file was known as evobjmv.c in Game Freak's original source

enum {
    MOVE_SPEED_NORMAL, // walking
    MOVE_SPEED_FAST_1, // running / surfing / sliding (ice tile)
    MOVE_SPEED_FAST_2, // water current / acro bike
    MOVE_SPEED_FASTER, // mach bike's max speed
    MOVE_SPEED_FASTEST,
};

enum {
    JUMP_DISTANCE_IN_PLACE,
    JUMP_DISTANCE_NORMAL,
    JUMP_DISTANCE_FAR,
};

// Sprite data used throughout
#define sObjEventId   data[0]
#define sTypeFuncId   data[1] // Index into corresponding gMovementTypeFuncs_* table
#define sActionFuncId data[2] // Index into corresponding gMovementActionFuncs_* table
#define sDirection    data[3]


#define movement_type_def(setup, table) \
static u8 setup##_callback(struct ObjectEvent *, struct Sprite *);\
void setup(struct Sprite *sprite)\
{\
    UpdateObjectEventCurrentMovement(&gObjectEvents[sprite->sObjEventId], sprite, setup##_callback);\
}\
static u8 setup##_callback(struct ObjectEvent *objectEvent, struct Sprite *sprite)\
{\
    return table[sprite->sTypeFuncId](objectEvent, sprite);\
}

#define movement_type_empty_callback(setup) \
static u8 setup##_callback(struct ObjectEvent *, struct Sprite *);\
void setup(struct Sprite *sprite)\
{\
    UpdateObjectEventCurrentMovement(&gObjectEvents[sprite->sObjEventId], sprite, setup##_callback);\
}\
static u8 setup##_callback(struct ObjectEvent *objectEvent, struct Sprite *sprite)\
{\
    return 0;\
}

static EWRAM_DATA struct LockedAnimObjectEvents *sLockedAnimObjectEvents = {0};

static void MoveCoordsInDirection(u32, s16 *, s16 *, s16, s16);
static bool8 ObjectEventExecSingleMovementAction(struct ObjectEvent *, struct Sprite *);
static void SetMovementDelay(struct Sprite *, s16);
static bool8 WaitForMovementDelay(struct Sprite *);
static u8 GetCollisionInDirection(struct ObjectEvent *, u8);
static u32 GetCopyDirection(u8, u32, u32);
static void TryEnableObjectEventAnim(struct ObjectEvent *, struct Sprite *);
static void ObjectEventExecHeldMovementAction(struct ObjectEvent *, struct Sprite *);
static void UpdateObjectEventSpriteAnimPause(struct ObjectEvent *, struct Sprite *);
static bool8 IsCoordOutsideObjectEventMovementRange(struct ObjectEvent *, s16, s16);
static bool8 IsMetatileDirectionallyImpassable(struct ObjectEvent *, s16, s16, u8);
static bool8 DoesObjectCollideWithObjectAt(struct ObjectEvent *, s16, s16);
static void UpdateObjectEventOffscreen(struct ObjectEvent *, struct Sprite *);
static void UpdateObjectEventSpriteVisibility(struct ObjectEvent *, struct Sprite *);
static void ObjectEventUpdateMetatileBehaviors(struct ObjectEvent *);
static void GetGroundEffectFlags_Reflection(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_TallGrassOnSpawn(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_LongGrassOnSpawn(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_SandHeap(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_ShallowFlowingWater(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_ShortGrass(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_HotSprings(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_TallGrassOnBeginStep(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_LongGrassOnBeginStep(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_Tracks(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_Puddle(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_Ripple(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_Seaweed(struct ObjectEvent *, u32 *);
static void GetGroundEffectFlags_JumpLanding(struct ObjectEvent *, u32 *);
static u8 ObjectEventGetNearbyReflectionType(struct ObjectEvent *);
static u8 GetReflectionTypeByMetatileBehavior(u32);
static void InitObjectPriorityByElevation(struct Sprite *, u8);
static void ObjectEventUpdateSubpriority(struct ObjectEvent *, struct Sprite *);
static void DoTracksGroundEffect_None(struct ObjectEvent *, struct Sprite *, u8);
static void DoTracksGroundEffect_Footprints(struct ObjectEvent *, struct Sprite *, u8);
static void DoTracksGroundEffect_BikeTireTracks(struct ObjectEvent *, struct Sprite *, u8);
static void DoRippleFieldEffect(struct ObjectEvent *, struct Sprite *);
static void DoGroundEffects_OnSpawn(struct ObjectEvent *, struct Sprite *);
static void DoGroundEffects_OnBeginStep(struct ObjectEvent *, struct Sprite *);
static void DoGroundEffects_OnFinishStep(struct ObjectEvent *, struct Sprite *);
static void VirtualObject_UpdateAnim(struct Sprite *);
static void ApplyLevitateMovement(u8);
static bool8 MovementType_Disguise_Callback(struct ObjectEvent *, struct Sprite *);
static bool8 MovementType_Buried_Callback(struct ObjectEvent *, struct Sprite *);
static void CreateReflectionEffectSprites(void);
static u8 GetObjectEventIdByLocalIdAndMapInternal(u8, u8, u8);
static bool8 GetAvailableObjectEventId(u16, u8, u8, u8 *);
static void SetObjectEventDynamicGraphicsId(struct ObjectEvent *);
static void RemoveObjectEventInternal(struct ObjectEvent *);
static u16 GetObjectEventFlagIdByObjectEventId(u8);
static void UpdateObjectEventVisibility(struct ObjectEvent *, struct Sprite *);
static void MakeSpriteTemplateFromObjectEventTemplate(const struct ObjectEventTemplate *, struct SpriteTemplate *, const struct SubspriteTable **);
static void GetObjectEventMovingCameraOffset(s16 *, s16 *);
void LoadObjectEventPalette(u16);
static void RemoveObjectEventIfOutsideView(struct ObjectEvent *);
static void SpawnObjectEventOnReturnToField(u8, s16, s16);
static void SetPlayerAvatarObjectEventIdAndObjectId(u8, u8);
static void ResetObjectEventFldEffData(struct ObjectEvent *);
static u8 LoadSpritePaletteIfTagExists(const struct SpritePalette *);
static u32 FindObjectEventPaletteIndexByTag(u16);
static void UNUSED _PatchObjectPalette(u16, u8);
static bool8 ObjectEventDoesElevationMatch(struct ObjectEvent *, u8);
static void SpriteCB_CameraObject(struct Sprite *);
static void CameraObject_Init(struct Sprite *);
static void CameraObject_UpdateMove(struct Sprite *);
static void CameraObject_UpdateFrozen(struct Sprite *);
static const struct ObjectEventTemplate *FindObjectEventTemplateByLocalId(u8, const struct ObjectEventTemplate *, u8);
static void ClearObjectEventMovement(struct ObjectEvent *, struct Sprite *);
static void ObjectEventSetSingleMovement(struct ObjectEvent *, struct Sprite *, u8);
static void SetSpriteDataForNormalStep(struct Sprite *, u8, u8);
static void InitSpriteForFigure8Anim(struct Sprite *);
static bool8 AnimateSpriteInFigure8(struct Sprite *);
static void SpriteCB_VirtualObject(struct Sprite *);
static void DoShadowFieldEffect(struct ObjectEvent *);
static void SetJumpSpriteData(struct Sprite *, u8, u8, u8);
static void SetWalkSlowSpriteData(struct Sprite *, u8);
static bool8 UpdateWalkSlowAnim(struct Sprite *);
static u8 DoJumpSpriteMovement(struct Sprite *);
static u8 DoJumpSpecialSpriteMovement(struct Sprite *);
static void CreateLevitateMovementTask(struct ObjectEvent *);
static void DestroyLevitateMovementTask(u8);
static bool8 NpcTakeStep(struct Sprite *);
static bool8 IsElevationMismatchAt(u8, s16, s16);
static bool8 AreElevationsCompatible(u8, u8);

static const struct SpriteFrameImage sPicTable_PechaBerryTree[];

static void StartSlowRunningAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction);

const u8 gReflectionEffectPaletteMap[16] = {
        [PALSLOT_PLAYER]                 = PALSLOT_PLAYER_REFLECTION,
        [PALSLOT_PLAYER_REFLECTION]      = PALSLOT_PLAYER_REFLECTION,
        [PALSLOT_NPC_1]                  = PALSLOT_NPC_1_REFLECTION,
        [PALSLOT_NPC_2]                  = PALSLOT_NPC_2_REFLECTION,
        [PALSLOT_NPC_3]                  = PALSLOT_NPC_3_REFLECTION,
        [PALSLOT_NPC_4]                  = PALSLOT_NPC_4_REFLECTION,
        [PALSLOT_NPC_1_REFLECTION]       = PALSLOT_NPC_1_REFLECTION,
        [PALSLOT_NPC_2_REFLECTION]       = PALSLOT_NPC_2_REFLECTION,
        [PALSLOT_NPC_3_REFLECTION]       = PALSLOT_NPC_3_REFLECTION,
        [PALSLOT_NPC_4_REFLECTION]       = PALSLOT_NPC_4_REFLECTION,
        [PALSLOT_NPC_SPECIAL]            = PALSLOT_NPC_SPECIAL_REFLECTION,
        [PALSLOT_NPC_SPECIAL_REFLECTION] = PALSLOT_NPC_SPECIAL_REFLECTION
};

static const struct SpriteTemplate sCameraSpriteTemplate = {
    .tileTag = 0,
    .paletteTag = TAG_NONE,
    .oam = &gDummyOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CameraObject
};

enum {
    CAMERA_STATE_INIT,
    CAMERA_STATE_MOVE,
    CAMERA_STATE_FROZEN,
};

static void (*const sCameraObjectFuncs[])(struct Sprite *) = {
    [CAMERA_STATE_INIT]   = CameraObject_Init,
    [CAMERA_STATE_MOVE]   = CameraObject_UpdateMove,
    [CAMERA_STATE_FROZEN] = CameraObject_UpdateFrozen,
};

#include "data/object_events/object_event_graphics.h"

// movement type callbacks
static void (*const sMovementTypeCallbacks[])(struct Sprite *) =
{
    [MOVEMENT_TYPE_NONE] = MovementType_None,
    [MOVEMENT_TYPE_LOOK_AROUND] = MovementType_LookAround,
    [MOVEMENT_TYPE_WANDER_AROUND] = MovementType_WanderAround,
    [MOVEMENT_TYPE_WANDER_UP_AND_DOWN] = MovementType_WanderUpAndDown,
    [MOVEMENT_TYPE_WANDER_DOWN_AND_UP] = MovementType_WanderUpAndDown,
    [MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT] = MovementType_WanderLeftAndRight,
    [MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT] = MovementType_WanderLeftAndRight,
    [MOVEMENT_TYPE_FACE_UP] = MovementType_FaceDirection,
    [MOVEMENT_TYPE_FACE_DOWN] = MovementType_FaceDirection,
    [MOVEMENT_TYPE_FACE_LEFT] = MovementType_FaceDirection,
    [MOVEMENT_TYPE_FACE_RIGHT] = MovementType_FaceDirection,
    [MOVEMENT_TYPE_PLAYER] = MovementType_Player,
    [MOVEMENT_TYPE_BERRY_TREE_GROWTH] = MovementType_BerryTreeGrowth,
    [MOVEMENT_TYPE_FACE_DOWN_AND_UP] = MovementType_FaceDownAndUp,
    [MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT] = MovementType_FaceLeftAndRight,
    [MOVEMENT_TYPE_FACE_UP_AND_LEFT] = MovementType_FaceUpAndLeft,
    [MOVEMENT_TYPE_FACE_UP_AND_RIGHT] = MovementType_FaceUpAndRight,
    [MOVEMENT_TYPE_FACE_DOWN_AND_LEFT] = MovementType_FaceDownAndLeft,
    [MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT] = MovementType_FaceDownAndRight,
    [MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT] = MovementType_FaceDownUpAndLeft,
    [MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT] = MovementType_FaceDownUpAndRight,
    [MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT] = MovementType_FaceUpRightAndLeft,
    [MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT] = MovementType_FaceDownRightAndLeft,
    [MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE] = MovementType_RotateCounterclockwise,
    [MOVEMENT_TYPE_ROTATE_CLOCKWISE] = MovementType_RotateClockwise,
    [MOVEMENT_TYPE_WALK_UP_AND_DOWN] = MovementType_WalkBackAndForth,
    [MOVEMENT_TYPE_WALK_DOWN_AND_UP] = MovementType_WalkBackAndForth,
    [MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT] = MovementType_WalkBackAndForth,
    [MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT] = MovementType_WalkBackAndForth,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN] = MovementType_WalkSequenceUpRightLeftDown,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_DOWN_UP] = MovementType_WalkSequenceRightLeftDownUp,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_RIGHT_LEFT] = MovementType_WalkSequenceDownUpRightLeft,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_UP_RIGHT] = MovementType_WalkSequenceLeftDownUpRight,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_RIGHT_DOWN] = MovementType_WalkSequenceUpLeftRightDown,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_DOWN_UP] = MovementType_WalkSequenceLeftRightDownUp,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_LEFT_RIGHT] = MovementType_WalkSequenceDownUpLeftRight,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_UP_LEFT] = MovementType_WalkSequenceRightDownUpLeft,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_DOWN_RIGHT] = MovementType_WalkSequenceLeftUpDownRight,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_RIGHT_LEFT] = MovementType_WalkSequenceUpDownRightLeft,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_UP_DOWN] = MovementType_WalkSequenceRightLeftUpDown,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP] = MovementType_WalkSequenceDownRightLeftUp,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_DOWN_LEFT] = MovementType_WalkSequenceRightUpDownLeft,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_LEFT_RIGHT] = MovementType_WalkSequenceUpDownLeftRight,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_UP_DOWN] = MovementType_WalkSequenceLeftRightUpDown,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP] = MovementType_WalkSequenceDownLeftRightUp,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT] = MovementType_WalkSequenceUpLeftDownRight,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT] = MovementType_WalkSequenceDownRightUpLeft,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP] = MovementType_WalkSequenceLeftDownRightUp,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_LEFT_DOWN] = MovementType_WalkSequenceRightUpLeftDown,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT] = MovementType_WalkSequenceUpRightDownLeft,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT] = MovementType_WalkSequenceDownLeftUpRight,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN] = MovementType_WalkSequenceLeftUpRightDown,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP] = MovementType_WalkSequenceRightDownLeftUp,
    [MOVEMENT_TYPE_COPY_PLAYER] = MovementType_CopyPlayer,
    [MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE] = MovementType_CopyPlayer,
    [MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE] = MovementType_CopyPlayer,
    [MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE] = MovementType_CopyPlayer,
    [MOVEMENT_TYPE_TREE_DISGUISE] = MovementType_TreeDisguise,
    [MOVEMENT_TYPE_MOUNTAIN_DISGUISE] = MovementType_MountainDisguise,
    [MOVEMENT_TYPE_COPY_PLAYER_IN_GRASS] = MovementType_CopyPlayerInGrass,
    [MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE_IN_GRASS] = MovementType_CopyPlayerInGrass,
    [MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE_IN_GRASS] = MovementType_CopyPlayerInGrass,
    [MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE_IN_GRASS] = MovementType_CopyPlayerInGrass,
    [MOVEMENT_TYPE_BURIED] = MovementType_Buried,
    [MOVEMENT_TYPE_WALK_IN_PLACE_DOWN] = MovementType_WalkInPlace,
    [MOVEMENT_TYPE_WALK_IN_PLACE_UP] = MovementType_WalkInPlace,
    [MOVEMENT_TYPE_WALK_IN_PLACE_LEFT] = MovementType_WalkInPlace,
    [MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT] = MovementType_WalkInPlace,
    [MOVEMENT_TYPE_JOG_IN_PLACE_DOWN] = MovementType_JogInPlace,
    [MOVEMENT_TYPE_JOG_IN_PLACE_UP] = MovementType_JogInPlace,
    [MOVEMENT_TYPE_JOG_IN_PLACE_LEFT] = MovementType_JogInPlace,
    [MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT] = MovementType_JogInPlace,
    [MOVEMENT_TYPE_RUN_IN_PLACE_DOWN] = MovementType_RunInPlace,
    [MOVEMENT_TYPE_RUN_IN_PLACE_UP] = MovementType_RunInPlace,
    [MOVEMENT_TYPE_RUN_IN_PLACE_LEFT] = MovementType_RunInPlace,
    [MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT] = MovementType_RunInPlace,
    [MOVEMENT_TYPE_INVISIBLE] = MovementType_Invisible,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_DOWN] = MovementType_WalkSlowlyInPlace,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_UP] = MovementType_WalkSlowlyInPlace,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_LEFT] = MovementType_WalkSlowlyInPlace,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_RIGHT] = MovementType_WalkSlowlyInPlace,
};

static const bool8 sMovementTypeHasRange[NUM_MOVEMENT_TYPES] = {
    [MOVEMENT_TYPE_WANDER_AROUND] = TRUE,
    [MOVEMENT_TYPE_WANDER_UP_AND_DOWN] = TRUE,
    [MOVEMENT_TYPE_WANDER_DOWN_AND_UP] = TRUE,
    [MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_UP_AND_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_DOWN_AND_UP] = TRUE,
    [MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_DOWN_UP] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_RIGHT_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_UP_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_RIGHT_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_DOWN_UP] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_LEFT_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_UP_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_DOWN_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_RIGHT_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_UP_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_DOWN_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_LEFT_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_UP_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_LEFT_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN] = TRUE,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_IN_GRASS] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE_IN_GRASS] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE_IN_GRASS] = TRUE,
    [MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE_IN_GRASS] = TRUE,
};

const u8 gInitialMovementTypeFacingDirections[] = {
    [MOVEMENT_TYPE_NONE] = DIR_SOUTH,
    [MOVEMENT_TYPE_LOOK_AROUND] = DIR_SOUTH,
    [MOVEMENT_TYPE_WANDER_AROUND] = DIR_SOUTH,
    [MOVEMENT_TYPE_WANDER_UP_AND_DOWN] = DIR_NORTH,
    [MOVEMENT_TYPE_WANDER_DOWN_AND_UP] = DIR_SOUTH,
    [MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT] = DIR_WEST,
    [MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT] = DIR_EAST,
    [MOVEMENT_TYPE_FACE_UP] = DIR_NORTH,
    [MOVEMENT_TYPE_FACE_DOWN] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_LEFT] = DIR_WEST,
    [MOVEMENT_TYPE_FACE_RIGHT] = DIR_EAST,
    [MOVEMENT_TYPE_PLAYER] = DIR_SOUTH,
    [MOVEMENT_TYPE_BERRY_TREE_GROWTH] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_DOWN_AND_UP] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT] = DIR_WEST,
    [MOVEMENT_TYPE_FACE_UP_AND_LEFT] = DIR_NORTH,
    [MOVEMENT_TYPE_FACE_UP_AND_RIGHT] = DIR_NORTH,
    [MOVEMENT_TYPE_FACE_DOWN_AND_LEFT] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT] = DIR_SOUTH,
    [MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT] = DIR_NORTH,
    [MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT] = DIR_SOUTH,
    [MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE] = DIR_SOUTH,
    [MOVEMENT_TYPE_ROTATE_CLOCKWISE] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_UP_AND_DOWN] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_DOWN_AND_UP] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT] = DIR_EAST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_DOWN_UP] = DIR_EAST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_RIGHT_LEFT] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_UP_RIGHT] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_RIGHT_DOWN] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_DOWN_UP] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_LEFT_RIGHT] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_UP_LEFT] = DIR_EAST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_DOWN_RIGHT] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_RIGHT_LEFT] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_UP_DOWN] = DIR_EAST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_DOWN_LEFT] = DIR_EAST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_LEFT_RIGHT] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_UP_DOWN] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_LEFT_DOWN] = DIR_EAST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP] = DIR_EAST,
    [MOVEMENT_TYPE_COPY_PLAYER] = DIR_NORTH,
    [MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE] = DIR_SOUTH,
    [MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE] = DIR_WEST,
    [MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE] = DIR_EAST,
    [MOVEMENT_TYPE_TREE_DISGUISE] = DIR_SOUTH,
    [MOVEMENT_TYPE_MOUNTAIN_DISGUISE] = DIR_SOUTH,
    [MOVEMENT_TYPE_COPY_PLAYER_IN_GRASS] = DIR_NORTH,
    [MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE_IN_GRASS] = DIR_SOUTH,
    [MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE_IN_GRASS] = DIR_WEST,
    [MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE_IN_GRASS] = DIR_EAST,
    [MOVEMENT_TYPE_BURIED] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_IN_PLACE_DOWN] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_IN_PLACE_UP] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_IN_PLACE_LEFT] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT] = DIR_EAST,
    [MOVEMENT_TYPE_JOG_IN_PLACE_DOWN] = DIR_SOUTH,
    [MOVEMENT_TYPE_JOG_IN_PLACE_UP] = DIR_NORTH,
    [MOVEMENT_TYPE_JOG_IN_PLACE_LEFT] = DIR_WEST,
    [MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT] = DIR_EAST,
    [MOVEMENT_TYPE_RUN_IN_PLACE_DOWN] = DIR_SOUTH,
    [MOVEMENT_TYPE_RUN_IN_PLACE_UP] = DIR_NORTH,
    [MOVEMENT_TYPE_RUN_IN_PLACE_LEFT] = DIR_WEST,
    [MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT] = DIR_EAST,
    [MOVEMENT_TYPE_INVISIBLE] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_DOWN] = DIR_SOUTH,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_UP] = DIR_NORTH,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_LEFT] = DIR_WEST,
    [MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_RIGHT] = DIR_EAST,
};

#define OBJ_EVENT_PAL_TAG_BRENDAN                 0x1100
#define OBJ_EVENT_PAL_TAG_BRENDAN_REFLECTION      0x1101
#define OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION       0x1102
#define OBJ_EVENT_PAL_TAG_NPC_1                   0x1103
#define OBJ_EVENT_PAL_TAG_NPC_2                   0x1104
#define OBJ_EVENT_PAL_TAG_NPC_3                   0x1105
#define OBJ_EVENT_PAL_TAG_NPC_4                   0x1106
#define OBJ_EVENT_PAL_TAG_NPC_1_REFLECTION        0x1107
#define OBJ_EVENT_PAL_TAG_NPC_2_REFLECTION        0x1108
#define OBJ_EVENT_PAL_TAG_NPC_3_REFLECTION        0x1109
#define OBJ_EVENT_PAL_TAG_NPC_4_REFLECTION        0x110A
#define OBJ_EVENT_PAL_TAG_QUINTY_PLUMP            0x110B
#define OBJ_EVENT_PAL_TAG_QUINTY_PLUMP_REFLECTION 0x110C
#define OBJ_EVENT_PAL_TAG_TRUCK                   0x110D
#define OBJ_EVENT_PAL_TAG_VIGOROTH                0x110E
#define OBJ_EVENT_PAL_TAG_ZIGZAGOON               0x110F
#define OBJ_EVENT_PAL_TAG_MAY                     0x1110
#define OBJ_EVENT_PAL_TAG_MAY_REFLECTION          0x1111
#define OBJ_EVENT_PAL_TAG_MOVING_BOX              0x1112
#define OBJ_EVENT_PAL_TAG_CABLE_CAR               0x1113
#define OBJ_EVENT_PAL_TAG_SSTIDAL                 0x1114
#define OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER       0x1115
#define OBJ_EVENT_PAL_TAG_KYOGRE                  0x1116
#define OBJ_EVENT_PAL_TAG_KYOGRE_REFLECTION       0x1117
#define OBJ_EVENT_PAL_TAG_GROUDON                 0x1118
#define OBJ_EVENT_PAL_TAG_GROUDON_REFLECTION      0x1119
#define OBJ_EVENT_PAL_TAG_UNUSED                  0x111A
#define OBJ_EVENT_PAL_TAG_SUBMARINE_SHADOW        0x111B
#define OBJ_EVENT_PAL_TAG_POOCHYENA               0x111C
#define OBJ_EVENT_PAL_TAG_RED_LEAF                0x111D
#define OBJ_EVENT_PAL_TAG_DEOXYS                  0x111E
#define OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE      0x111F
#define OBJ_EVENT_PAL_TAG_HO_OH                   0x1120
#define OBJ_EVENT_PAL_TAG_LUGIA                   0x1121
#define OBJ_EVENT_PAL_TAG_RS_BRENDAN              0x1122
#define OBJ_EVENT_PAL_TAG_RS_MAY                  0x1123
#define OBJ_EVENT_PAL_TAG_NPC_10                  0x1124
#define OBJ_EVENT_PAL_TAG_NPC_11                  0x1125
#define OBJ_EVENT_PAL_TAG_NPC_12                  0x1126
#define OBJ_EVENT_PAL_TAG_NPC_13                  0x1127
#define OBJ_EVENT_PAL_TAG_NPC_14                  0x1128
#define OBJ_EVENT_PAL_TAG_NPC_15                  0x1129
#define OBJ_EVENT_PAL_TAG_NPC_16                  0x1130
#define OBJ_EVENT_PAL_TAG_NPC_17                  0x1131
#define OBJ_EVENT_PAL_TAG_NPC_18                  0x1132
#define OBJ_EVENT_PAL_TAG_NPC_19                  0x1133
#define OBJ_EVENT_PAL_TAG_NPC_20                  0x1134
#define OBJ_EVENT_PAL_TAG_NPC_21                  0x1135
#define OBJ_EVENT_PAL_TAG_NPC_22                  0x1136
#define OBJ_EVENT_PAL_TAG_NPC_23                  0x1137
#define OBJ_EVENT_PAL_TAG_NPC_24                  0x1138 // worker
#define OBJ_EVENT_PAL_TAG_NPC_25                  0x1139
#define OBJ_EVENT_PAL_TAG_NPC_26                  0x1140
#define OBJ_EVENT_PAL_TAG_NPC_27                  0x1141
#define OBJ_EVENT_PAL_TAG_NPC_28                  0x1142
#define OBJ_EVENT_PAL_TAG_NPC_29                  0x1143
#define OBJ_EVENT_PAL_TAG_NPC_30                  0x1144
#define OBJ_EVENT_PAL_TAG_NPC_31                  0x1145
#define OBJ_EVENT_PAL_TAG_NPC_32                  0x1146
#define OBJ_EVENT_PAL_TAG_NPC_33                  0x1147
#define OBJ_EVENT_PAL_TAG_NPC_34                  0x1148
#define OBJ_EVENT_PAL_TAG_NPC_35                  0x1149
#define OBJ_EVENT_PAL_TAG_NPC_36                  0x1150
#define OBJ_EVENT_PAL_TAG_NPC_37                  0x1151
#define OBJ_EVENT_PAL_TAG_NPC_38                  0x1152
#define OBJ_EVENT_PAL_TAG_NPC_39                  0x1153
#define OBJ_EVENT_PAL_TAG_NPC_40                  0x1154
#define OBJ_EVENT_PAL_TAG_NPC_41                  0x1155
#define OBJ_EVENT_PAL_TAG_NPC_42                  0x1156
#define OBJ_EVENT_PAL_TAG_NPC_43                  0x1157
#define OBJ_EVENT_PAL_TAG_NPC_44                  0x1158
#define OBJ_EVENT_PAL_TAG_NPC_45                  0x1159
#define OBJ_EVENT_PAL_TAG_NPC_46                  0x1160
#define OBJ_EVENT_PAL_TAG_NPC_47                  0x1161
#define OBJ_EVENT_PAL_TAG_NPC_48                  0x1162
#define OBJ_EVENT_PAL_TAG_NPC_49                  0x1163
#define OBJ_EVENT_PAL_TAG_NPC_50                  0x1164
#define OBJ_EVENT_PAL_TAG_NPC_51                  0x1165
#define OBJ_EVENT_PAL_TAG_NPC_52                  0x1166
#define OBJ_EVENT_PAL_TAG_NPC_53                  0x1167
#define OBJ_EVENT_PAL_TAG_NPC_54                  0x1168
#define OBJ_EVENT_PAL_TAG_NPC_55                  0x1169
#define OBJ_EVENT_PAL_TAG_NPC_56                  0x1170
#define OBJ_EVENT_PAL_TAG_NPC_57                  0x1171
#define OBJ_EVENT_PAL_TAG_NPC_58                  0x1172
#define OBJ_EVENT_PAL_TAG_NPC_59                  0x1173
#define OBJ_EVENT_PAL_TAG_NPC_60                  0x1174
#define OBJ_EVENT_PAL_TAG_NPC_61                  0x1175
#define OBJ_EVENT_PAL_TAG_NPC_62                  0x1176
#define OBJ_EVENT_PAL_TAG_NPC_63                  0x1177
#define OBJ_EVENT_PAL_TAG_NPC_64                  0x1178
#define OBJ_EVENT_PAL_TAG_NPC_65                  0x1179
#define OBJ_EVENT_PAL_TAG_NPC_66                  0x1180
#define OBJ_EVENT_PAL_TAG_NPC_67                  0x1181
#define OBJ_EVENT_PAL_TAG_NPC_68                  0x1182
#define OBJ_EVENT_PAL_TAG_NPC_69                  0x1183
#define OBJ_EVENT_PAL_TAG_NPC_70                  0x1184
#define OBJ_EVENT_PAL_TAG_OLIVIA_FISHING          0x1185
#define OBJ_EVENT_PAL_TAG_OLIVIA_BIKE             0x1186
#define OBJ_EVENT_PAL_TAG_OLIVIA_FIELD_MOVE       0x1187
#define OBJ_EVENT_PAL_TAG_OLIVIA_NORMAL           0x1188
#define OBJ_EVENT_PAL_TAG_RUKA                    0x1189
#define OBJ_EVENT_PAL_TAG_OLIVER_FISHING          0x1190
#define OBJ_EVENT_PAL_TAG_OLIVER_BIKE             0x1191
#define OBJ_EVENT_PAL_TAG_OLIVER_FIELD_MOVE       0x1192
#define OBJ_EVENT_PAL_TAG_OLIVER_NORMAL           0x1193
#define OBJ_EVENT_PAL_TAG_OLIVIA_WATERING         0x1194
#define OBJ_EVENT_PAL_TAG_OLIVER_WATERING         0x1195
#define OBJ_EVENT_PAL_TAG_OLIVIA_SURFING          0x1196
#define OBJ_EVENT_PAL_TAG_MELISSA                 0x1197
#define OBJ_EVENT_PAL_TAG_FIELD_EFFECTS           0x1198
#define OBJ_EVENT_PAL_TAG_ACE_TRAINER_F           0x1199
#define OBJ_EVENT_PAL_TAG_ACE_TRAINER_M           0x1200
#define OBJ_EVENT_PAL_TAG_JONAS                   0x1201
#define OBJ_EVENT_PAL_TAG_PALM                    0x1202
#define OBJ_EVENT_PAL_TAG_ARTHUR                  0x1203
#define OBJ_EVENT_PAL_TAG_COCO                    0x1204
#define OBJ_EVENT_PAL_TAG_PRIMROSE                0x1205
#define OBJ_EVENT_PAL_TAG_EDEA                    0x1206
#define OBJ_EVENT_PAL_TAG_BEAUTY_MASTERS          0x1207 
#define OBJ_EVENT_PAL_TAG_COWGIRL                 0x1208
#define OBJ_EVENT_PAL_TAG_GIRL_5                  0x1209
#define OBJ_EVENT_PAL_TAG_GIRL_6                  0x1210
#define OBJ_EVENT_PAL_TAG_GIRL_7                  0x1211
#define OBJ_EVENT_PAL_TAG_JUGGLER                 0x1212
#define OBJ_EVENT_PAL_TAG_MAN_7                   0x1213
#define OBJ_EVENT_PAL_TAG_BIKER                   0x1214
#define OBJ_EVENT_PAL_TAG_CHANNELER               0x1215
#define OBJ_EVENT_PAL_TAG_NERD                    0x1216
#define OBJ_EVENT_PAL_TAG_RANCHER                 0x1217
#define OBJ_EVENT_PAL_TAG_SCHOOL_KID_M_2          0x1218
#define OBJ_EVENT_PAL_TAG_SCOUT_M                 0x1219
#define OBJ_EVENT_PAL_TAG_SCOUT_F                 0x1220
#define OBJ_EVENT_PAL_TAG_SILVERWING_M            0x1221
#define OBJ_EVENT_PAL_TAG_SILVERWING_F            0x1222
#define OBJ_EVENT_PAL_TAG_WOMAN_6                 0x1223
#define OBJ_EVENT_PAL_TAG_WOMAN_7                 0x1224
#define OBJ_EVENT_PAL_TAG_WOMAN_8                 0x1225
#define OBJ_EVENT_PAL_TAG_SCHOOL_KID_F            0x1226
#define OBJ_EVENT_PAL_TAG_APPLE                   0x1227
#define OBJ_EVENT_PAL_TAG_SHINY_AZURILL           0x1228
#define OBJ_EVENT_PAL_TAG_HEX_MANIAC              0x1229



#define OBJ_EVENT_PAL_TAG_NONE                    0x11FF

//Pokemon overworlds
#define OBJ_EVENT_PAL_TAG_POKEMON_START 0x1800
#define OBJ_EVENT_PAL_TAG_POKEMON_001 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 1)
#define OBJ_EVENT_PAL_TAG_POKEMON_002 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 2)
#define OBJ_EVENT_PAL_TAG_POKEMON_003 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 3)
#define OBJ_EVENT_PAL_TAG_POKEMON_004 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 4)
#define OBJ_EVENT_PAL_TAG_POKEMON_005 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 5)
#define OBJ_EVENT_PAL_TAG_POKEMON_006 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 6)
#define OBJ_EVENT_PAL_TAG_POKEMON_007 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 7)
#define OBJ_EVENT_PAL_TAG_POKEMON_008 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 8)
#define OBJ_EVENT_PAL_TAG_POKEMON_009 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 9)
#define OBJ_EVENT_PAL_TAG_POKEMON_010 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 10)
#define OBJ_EVENT_PAL_TAG_POKEMON_011 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 11)
#define OBJ_EVENT_PAL_TAG_POKEMON_012 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 12)
#define OBJ_EVENT_PAL_TAG_POKEMON_013 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 13)
#define OBJ_EVENT_PAL_TAG_POKEMON_014 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 14)
#define OBJ_EVENT_PAL_TAG_POKEMON_015 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 15)
#define OBJ_EVENT_PAL_TAG_POKEMON_016 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 16)
#define OBJ_EVENT_PAL_TAG_POKEMON_017 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 17)
#define OBJ_EVENT_PAL_TAG_POKEMON_018 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 18)
#define OBJ_EVENT_PAL_TAG_POKEMON_019 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 19)
#define OBJ_EVENT_PAL_TAG_POKEMON_020 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 20)
#define OBJ_EVENT_PAL_TAG_POKEMON_021 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 21)
#define OBJ_EVENT_PAL_TAG_POKEMON_022 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 22)
#define OBJ_EVENT_PAL_TAG_POKEMON_023 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 23)
#define OBJ_EVENT_PAL_TAG_POKEMON_024 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 24)
#define OBJ_EVENT_PAL_TAG_POKEMON_025 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 25)
#define OBJ_EVENT_PAL_TAG_POKEMON_026 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 26)
#define OBJ_EVENT_PAL_TAG_POKEMON_027 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 27)
#define OBJ_EVENT_PAL_TAG_POKEMON_028 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 28)
#define OBJ_EVENT_PAL_TAG_POKEMON_029 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 29)
#define OBJ_EVENT_PAL_TAG_POKEMON_030 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 30)
#define OBJ_EVENT_PAL_TAG_POKEMON_031 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 31)
#define OBJ_EVENT_PAL_TAG_POKEMON_032 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 32)
#define OBJ_EVENT_PAL_TAG_POKEMON_033 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 33)
#define OBJ_EVENT_PAL_TAG_POKEMON_034 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 34)
#define OBJ_EVENT_PAL_TAG_POKEMON_035 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 35)
#define OBJ_EVENT_PAL_TAG_POKEMON_036 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 36)
#define OBJ_EVENT_PAL_TAG_POKEMON_037 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 37)
#define OBJ_EVENT_PAL_TAG_POKEMON_038 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 38)
#define OBJ_EVENT_PAL_TAG_POKEMON_039 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 39)
#define OBJ_EVENT_PAL_TAG_POKEMON_040 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 40)
#define OBJ_EVENT_PAL_TAG_POKEMON_041 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 41)
#define OBJ_EVENT_PAL_TAG_POKEMON_042 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 42)
#define OBJ_EVENT_PAL_TAG_POKEMON_043 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 43)
#define OBJ_EVENT_PAL_TAG_POKEMON_044 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 44)
#define OBJ_EVENT_PAL_TAG_POKEMON_045 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 45)
#define OBJ_EVENT_PAL_TAG_POKEMON_046 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 46)
#define OBJ_EVENT_PAL_TAG_POKEMON_047 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 47)
#define OBJ_EVENT_PAL_TAG_POKEMON_048 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 48)
#define OBJ_EVENT_PAL_TAG_POKEMON_049 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 49)
#define OBJ_EVENT_PAL_TAG_POKEMON_050 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 50)
#define OBJ_EVENT_PAL_TAG_POKEMON_051 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 51)
#define OBJ_EVENT_PAL_TAG_POKEMON_052 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 52)
#define OBJ_EVENT_PAL_TAG_POKEMON_053 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 53)
#define OBJ_EVENT_PAL_TAG_POKEMON_054 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 54)
#define OBJ_EVENT_PAL_TAG_POKEMON_055 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 55)
#define OBJ_EVENT_PAL_TAG_POKEMON_056 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 56)
#define OBJ_EVENT_PAL_TAG_POKEMON_057 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 57)
#define OBJ_EVENT_PAL_TAG_POKEMON_058 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 58)
#define OBJ_EVENT_PAL_TAG_POKEMON_059 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 59)
#define OBJ_EVENT_PAL_TAG_POKEMON_060 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 60)
#define OBJ_EVENT_PAL_TAG_POKEMON_061 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 61)
#define OBJ_EVENT_PAL_TAG_POKEMON_062 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 62)
#define OBJ_EVENT_PAL_TAG_POKEMON_063 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 63)
#define OBJ_EVENT_PAL_TAG_POKEMON_064 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 64)
#define OBJ_EVENT_PAL_TAG_POKEMON_065 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 65)
#define OBJ_EVENT_PAL_TAG_POKEMON_066 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 66)
#define OBJ_EVENT_PAL_TAG_POKEMON_067 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 67)
#define OBJ_EVENT_PAL_TAG_POKEMON_068 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 68)
#define OBJ_EVENT_PAL_TAG_POKEMON_069 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 69)
#define OBJ_EVENT_PAL_TAG_POKEMON_070 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 70)
#define OBJ_EVENT_PAL_TAG_POKEMON_071 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 71)
#define OBJ_EVENT_PAL_TAG_POKEMON_072 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 72)
#define OBJ_EVENT_PAL_TAG_POKEMON_073 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 73)
#define OBJ_EVENT_PAL_TAG_POKEMON_074 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 74)
#define OBJ_EVENT_PAL_TAG_POKEMON_075 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 75)
#define OBJ_EVENT_PAL_TAG_POKEMON_076 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 76)
#define OBJ_EVENT_PAL_TAG_POKEMON_077 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 77)
#define OBJ_EVENT_PAL_TAG_POKEMON_078 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 78)
#define OBJ_EVENT_PAL_TAG_POKEMON_079 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 79)
#define OBJ_EVENT_PAL_TAG_POKEMON_080 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 80)
#define OBJ_EVENT_PAL_TAG_POKEMON_081 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 81)
#define OBJ_EVENT_PAL_TAG_POKEMON_082 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 82)
#define OBJ_EVENT_PAL_TAG_POKEMON_083 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 83)
#define OBJ_EVENT_PAL_TAG_POKEMON_084 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 84)
#define OBJ_EVENT_PAL_TAG_POKEMON_085 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 85)
#define OBJ_EVENT_PAL_TAG_POKEMON_086 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 86)
#define OBJ_EVENT_PAL_TAG_POKEMON_087 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 87)
#define OBJ_EVENT_PAL_TAG_POKEMON_088 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 88)
#define OBJ_EVENT_PAL_TAG_POKEMON_089 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 89)
#define OBJ_EVENT_PAL_TAG_POKEMON_090 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 90)
#define OBJ_EVENT_PAL_TAG_POKEMON_091 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 91)
#define OBJ_EVENT_PAL_TAG_POKEMON_092 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 92)
#define OBJ_EVENT_PAL_TAG_POKEMON_093 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 93)
#define OBJ_EVENT_PAL_TAG_POKEMON_094 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 94)
#define OBJ_EVENT_PAL_TAG_POKEMON_095 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 95)
#define OBJ_EVENT_PAL_TAG_POKEMON_096 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 96)
#define OBJ_EVENT_PAL_TAG_POKEMON_097 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 97)
#define OBJ_EVENT_PAL_TAG_POKEMON_098 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 98)
#define OBJ_EVENT_PAL_TAG_POKEMON_099 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 99)
#define OBJ_EVENT_PAL_TAG_POKEMON_100 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 100)
#define OBJ_EVENT_PAL_TAG_POKEMON_101 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 101)
#define OBJ_EVENT_PAL_TAG_POKEMON_102 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 102)
#define OBJ_EVENT_PAL_TAG_POKEMON_103 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 103)
#define OBJ_EVENT_PAL_TAG_POKEMON_104 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 104)
#define OBJ_EVENT_PAL_TAG_POKEMON_105 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 105)
#define OBJ_EVENT_PAL_TAG_POKEMON_106 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 106)
#define OBJ_EVENT_PAL_TAG_POKEMON_107 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 107)
#define OBJ_EVENT_PAL_TAG_POKEMON_108 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 108)
#define OBJ_EVENT_PAL_TAG_POKEMON_109 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 109)
#define OBJ_EVENT_PAL_TAG_POKEMON_110 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 110)
#define OBJ_EVENT_PAL_TAG_POKEMON_111 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 111)
#define OBJ_EVENT_PAL_TAG_POKEMON_112 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 112)
#define OBJ_EVENT_PAL_TAG_POKEMON_113 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 113)
#define OBJ_EVENT_PAL_TAG_POKEMON_114 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 114)
#define OBJ_EVENT_PAL_TAG_POKEMON_115 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 115)
#define OBJ_EVENT_PAL_TAG_POKEMON_116 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 116)
#define OBJ_EVENT_PAL_TAG_POKEMON_117 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 117)
#define OBJ_EVENT_PAL_TAG_POKEMON_118 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 118)
#define OBJ_EVENT_PAL_TAG_POKEMON_119 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 119)
#define OBJ_EVENT_PAL_TAG_POKEMON_120 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 120)
#define OBJ_EVENT_PAL_TAG_POKEMON_121 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 121)
#define OBJ_EVENT_PAL_TAG_POKEMON_122 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 122)
#define OBJ_EVENT_PAL_TAG_POKEMON_123 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 123)
#define OBJ_EVENT_PAL_TAG_POKEMON_124 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 124)
#define OBJ_EVENT_PAL_TAG_POKEMON_125 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 125)
#define OBJ_EVENT_PAL_TAG_POKEMON_126 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 126)
#define OBJ_EVENT_PAL_TAG_POKEMON_127 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 127)
#define OBJ_EVENT_PAL_TAG_POKEMON_128 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 128)
#define OBJ_EVENT_PAL_TAG_POKEMON_129 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 129)
#define OBJ_EVENT_PAL_TAG_POKEMON_130 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 130)
#define OBJ_EVENT_PAL_TAG_POKEMON_131 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 131)
#define OBJ_EVENT_PAL_TAG_POKEMON_132 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 132)
#define OBJ_EVENT_PAL_TAG_POKEMON_133 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 133)
#define OBJ_EVENT_PAL_TAG_POKEMON_134 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 134)
#define OBJ_EVENT_PAL_TAG_POKEMON_135 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 135)
#define OBJ_EVENT_PAL_TAG_POKEMON_136 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 136)
#define OBJ_EVENT_PAL_TAG_POKEMON_137 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 137)
#define OBJ_EVENT_PAL_TAG_POKEMON_138 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 138)
#define OBJ_EVENT_PAL_TAG_POKEMON_139 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 139)
#define OBJ_EVENT_PAL_TAG_POKEMON_140 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 140)
#define OBJ_EVENT_PAL_TAG_POKEMON_141 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 141)
#define OBJ_EVENT_PAL_TAG_POKEMON_142 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 142)
#define OBJ_EVENT_PAL_TAG_POKEMON_143 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 143)
#define OBJ_EVENT_PAL_TAG_POKEMON_144 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 144)
#define OBJ_EVENT_PAL_TAG_POKEMON_145 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 145)
#define OBJ_EVENT_PAL_TAG_POKEMON_146 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 146)
#define OBJ_EVENT_PAL_TAG_POKEMON_147 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 147)
#define OBJ_EVENT_PAL_TAG_POKEMON_148 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 148)
#define OBJ_EVENT_PAL_TAG_POKEMON_149 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 149)
#define OBJ_EVENT_PAL_TAG_POKEMON_150 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 150)
#define OBJ_EVENT_PAL_TAG_POKEMON_151 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 151)
#define OBJ_EVENT_PAL_TAG_POKEMON_152 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 152)
#define OBJ_EVENT_PAL_TAG_POKEMON_153 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 153)
#define OBJ_EVENT_PAL_TAG_POKEMON_154 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 154)
#define OBJ_EVENT_PAL_TAG_POKEMON_155 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 155)
#define OBJ_EVENT_PAL_TAG_POKEMON_156 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 156)
#define OBJ_EVENT_PAL_TAG_POKEMON_157 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 157)
#define OBJ_EVENT_PAL_TAG_POKEMON_158 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 158)
#define OBJ_EVENT_PAL_TAG_POKEMON_159 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 159)
#define OBJ_EVENT_PAL_TAG_POKEMON_160 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 160)
#define OBJ_EVENT_PAL_TAG_POKEMON_161 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 161)
#define OBJ_EVENT_PAL_TAG_POKEMON_162 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 162)
#define OBJ_EVENT_PAL_TAG_POKEMON_163 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 163)
#define OBJ_EVENT_PAL_TAG_POKEMON_164 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 164)
#define OBJ_EVENT_PAL_TAG_POKEMON_165 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 165)
#define OBJ_EVENT_PAL_TAG_POKEMON_166 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 166)
#define OBJ_EVENT_PAL_TAG_POKEMON_167 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 167)
#define OBJ_EVENT_PAL_TAG_POKEMON_168 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 168)
#define OBJ_EVENT_PAL_TAG_POKEMON_169 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 169)
#define OBJ_EVENT_PAL_TAG_POKEMON_170 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 170)
#define OBJ_EVENT_PAL_TAG_POKEMON_171 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 171)
#define OBJ_EVENT_PAL_TAG_POKEMON_172 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 172)
#define OBJ_EVENT_PAL_TAG_POKEMON_173 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 173)
#define OBJ_EVENT_PAL_TAG_POKEMON_174 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 174)
#define OBJ_EVENT_PAL_TAG_POKEMON_175 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 175)
#define OBJ_EVENT_PAL_TAG_POKEMON_176 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 176)
#define OBJ_EVENT_PAL_TAG_POKEMON_177 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 177)
#define OBJ_EVENT_PAL_TAG_POKEMON_178 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 178)
#define OBJ_EVENT_PAL_TAG_POKEMON_179 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 179)
#define OBJ_EVENT_PAL_TAG_POKEMON_180 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 180)
#define OBJ_EVENT_PAL_TAG_POKEMON_181 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 181)
#define OBJ_EVENT_PAL_TAG_POKEMON_182 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 182)
#define OBJ_EVENT_PAL_TAG_POKEMON_183 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 183)
#define OBJ_EVENT_PAL_TAG_POKEMON_184 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 184)
#define OBJ_EVENT_PAL_TAG_POKEMON_185 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 185)
#define OBJ_EVENT_PAL_TAG_POKEMON_186 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 186)
#define OBJ_EVENT_PAL_TAG_POKEMON_187 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 187)
#define OBJ_EVENT_PAL_TAG_POKEMON_188 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 188)
#define OBJ_EVENT_PAL_TAG_POKEMON_189 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 189)
#define OBJ_EVENT_PAL_TAG_POKEMON_190 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 190)
#define OBJ_EVENT_PAL_TAG_POKEMON_191 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 191)
#define OBJ_EVENT_PAL_TAG_POKEMON_192 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 192)
#define OBJ_EVENT_PAL_TAG_POKEMON_193 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 193)
#define OBJ_EVENT_PAL_TAG_POKEMON_194 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 194)
#define OBJ_EVENT_PAL_TAG_POKEMON_195 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 195)
#define OBJ_EVENT_PAL_TAG_POKEMON_196 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 196)
#define OBJ_EVENT_PAL_TAG_POKEMON_197 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 197)
#define OBJ_EVENT_PAL_TAG_POKEMON_198 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 198)
#define OBJ_EVENT_PAL_TAG_POKEMON_199 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 199)
#define OBJ_EVENT_PAL_TAG_POKEMON_200 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 200)
#define OBJ_EVENT_PAL_TAG_POKEMON_201 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 201)
#define OBJ_EVENT_PAL_TAG_POKEMON_202 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 202)
#define OBJ_EVENT_PAL_TAG_POKEMON_203 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 203)
#define OBJ_EVENT_PAL_TAG_POKEMON_204 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 204)
#define OBJ_EVENT_PAL_TAG_POKEMON_205 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 205)
#define OBJ_EVENT_PAL_TAG_POKEMON_206 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 206)
#define OBJ_EVENT_PAL_TAG_POKEMON_207 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 207)
#define OBJ_EVENT_PAL_TAG_POKEMON_208 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 208)
#define OBJ_EVENT_PAL_TAG_POKEMON_209 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 209)
#define OBJ_EVENT_PAL_TAG_POKEMON_210 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 210)
#define OBJ_EVENT_PAL_TAG_POKEMON_211 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 211)
#define OBJ_EVENT_PAL_TAG_POKEMON_212 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 212)
#define OBJ_EVENT_PAL_TAG_POKEMON_213 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 213)
#define OBJ_EVENT_PAL_TAG_POKEMON_214 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 214)
#define OBJ_EVENT_PAL_TAG_POKEMON_215 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 215)
#define OBJ_EVENT_PAL_TAG_POKEMON_216 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 216)
#define OBJ_EVENT_PAL_TAG_POKEMON_217 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 217)
#define OBJ_EVENT_PAL_TAG_POKEMON_218 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 218)
#define OBJ_EVENT_PAL_TAG_POKEMON_219 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 219)
#define OBJ_EVENT_PAL_TAG_POKEMON_220 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 220)
#define OBJ_EVENT_PAL_TAG_POKEMON_221 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 221)
#define OBJ_EVENT_PAL_TAG_POKEMON_222 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 222)
#define OBJ_EVENT_PAL_TAG_POKEMON_223 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 223)
#define OBJ_EVENT_PAL_TAG_POKEMON_224 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 224)
#define OBJ_EVENT_PAL_TAG_POKEMON_225 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 225)
#define OBJ_EVENT_PAL_TAG_POKEMON_226 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 226)
#define OBJ_EVENT_PAL_TAG_POKEMON_227 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 227)
#define OBJ_EVENT_PAL_TAG_POKEMON_228 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 228)
#define OBJ_EVENT_PAL_TAG_POKEMON_229 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 229)
#define OBJ_EVENT_PAL_TAG_POKEMON_230 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 230)
#define OBJ_EVENT_PAL_TAG_POKEMON_231 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 231)
#define OBJ_EVENT_PAL_TAG_POKEMON_232 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 232)
#define OBJ_EVENT_PAL_TAG_POKEMON_233 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 233)
#define OBJ_EVENT_PAL_TAG_POKEMON_234 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 234)
#define OBJ_EVENT_PAL_TAG_POKEMON_235 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 235)
#define OBJ_EVENT_PAL_TAG_POKEMON_236 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 236)
#define OBJ_EVENT_PAL_TAG_POKEMON_237 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 237)
#define OBJ_EVENT_PAL_TAG_POKEMON_238 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 238)
#define OBJ_EVENT_PAL_TAG_POKEMON_239 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 239)
#define OBJ_EVENT_PAL_TAG_POKEMON_240 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 240)
#define OBJ_EVENT_PAL_TAG_POKEMON_241 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 241)
#define OBJ_EVENT_PAL_TAG_POKEMON_242 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 242)
#define OBJ_EVENT_PAL_TAG_POKEMON_243 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 243)
#define OBJ_EVENT_PAL_TAG_POKEMON_244 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 244)
#define OBJ_EVENT_PAL_TAG_POKEMON_245 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 245)
#define OBJ_EVENT_PAL_TAG_POKEMON_246 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 246)
#define OBJ_EVENT_PAL_TAG_POKEMON_247 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 247)
#define OBJ_EVENT_PAL_TAG_POKEMON_248 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 248)
#define OBJ_EVENT_PAL_TAG_POKEMON_249 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 249)
#define OBJ_EVENT_PAL_TAG_POKEMON_250 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 250)
#define OBJ_EVENT_PAL_TAG_POKEMON_251 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 251)
#define OBJ_EVENT_PAL_TAG_POKEMON_252 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 252)
#define OBJ_EVENT_PAL_TAG_POKEMON_253 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 253)
#define OBJ_EVENT_PAL_TAG_POKEMON_254 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 254)
#define OBJ_EVENT_PAL_TAG_POKEMON_255 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 255)
#define OBJ_EVENT_PAL_TAG_POKEMON_256 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 256)
#define OBJ_EVENT_PAL_TAG_POKEMON_257 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 257)
#define OBJ_EVENT_PAL_TAG_POKEMON_258 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 258)
#define OBJ_EVENT_PAL_TAG_POKEMON_259 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 259)
#define OBJ_EVENT_PAL_TAG_POKEMON_260 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 260)
#define OBJ_EVENT_PAL_TAG_POKEMON_261 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 261)
#define OBJ_EVENT_PAL_TAG_POKEMON_262 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 262)
#define OBJ_EVENT_PAL_TAG_POKEMON_263 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 263)
#define OBJ_EVENT_PAL_TAG_POKEMON_264 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 264)
#define OBJ_EVENT_PAL_TAG_POKEMON_265 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 265)
#define OBJ_EVENT_PAL_TAG_POKEMON_266 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 266)
#define OBJ_EVENT_PAL_TAG_POKEMON_267 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 267)
#define OBJ_EVENT_PAL_TAG_POKEMON_268 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 268)
#define OBJ_EVENT_PAL_TAG_POKEMON_269 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 269)
#define OBJ_EVENT_PAL_TAG_POKEMON_270 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 270)
#define OBJ_EVENT_PAL_TAG_POKEMON_271 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 271)
#define OBJ_EVENT_PAL_TAG_POKEMON_272 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 272)
#define OBJ_EVENT_PAL_TAG_POKEMON_273 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 273)
#define OBJ_EVENT_PAL_TAG_POKEMON_274 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 274)
#define OBJ_EVENT_PAL_TAG_POKEMON_275 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 275)
#define OBJ_EVENT_PAL_TAG_POKEMON_276 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 276)
#define OBJ_EVENT_PAL_TAG_POKEMON_277 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 277)
#define OBJ_EVENT_PAL_TAG_POKEMON_278 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 278)
#define OBJ_EVENT_PAL_TAG_POKEMON_279 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 279)
#define OBJ_EVENT_PAL_TAG_POKEMON_280 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 280)
#define OBJ_EVENT_PAL_TAG_POKEMON_281 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 281)
#define OBJ_EVENT_PAL_TAG_POKEMON_282 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 282)
#define OBJ_EVENT_PAL_TAG_POKEMON_283 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 283)
#define OBJ_EVENT_PAL_TAG_POKEMON_284 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 284)
#define OBJ_EVENT_PAL_TAG_POKEMON_285 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 285)
#define OBJ_EVENT_PAL_TAG_POKEMON_286 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 286)
#define OBJ_EVENT_PAL_TAG_POKEMON_287 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 287)
#define OBJ_EVENT_PAL_TAG_POKEMON_288 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 288)
#define OBJ_EVENT_PAL_TAG_POKEMON_289 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 289)
#define OBJ_EVENT_PAL_TAG_POKEMON_290 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 290)
#define OBJ_EVENT_PAL_TAG_POKEMON_291 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 291)
#define OBJ_EVENT_PAL_TAG_POKEMON_292 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 292)
#define OBJ_EVENT_PAL_TAG_POKEMON_293 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 293)
#define OBJ_EVENT_PAL_TAG_POKEMON_294 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 294)
#define OBJ_EVENT_PAL_TAG_POKEMON_295 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 295)
#define OBJ_EVENT_PAL_TAG_POKEMON_296 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 296)
#define OBJ_EVENT_PAL_TAG_POKEMON_297 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 297)
#define OBJ_EVENT_PAL_TAG_POKEMON_298 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 298)
#define OBJ_EVENT_PAL_TAG_POKEMON_299 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 299)
#define OBJ_EVENT_PAL_TAG_POKEMON_300 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 300)
#define OBJ_EVENT_PAL_TAG_POKEMON_301 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 301)
#define OBJ_EVENT_PAL_TAG_POKEMON_302 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 302)
#define OBJ_EVENT_PAL_TAG_POKEMON_303 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 303)
#define OBJ_EVENT_PAL_TAG_POKEMON_304 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 304)
#define OBJ_EVENT_PAL_TAG_POKEMON_305 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 305)
#define OBJ_EVENT_PAL_TAG_POKEMON_306 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 306)
#define OBJ_EVENT_PAL_TAG_POKEMON_307 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 307)
#define OBJ_EVENT_PAL_TAG_POKEMON_308 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 308)
#define OBJ_EVENT_PAL_TAG_POKEMON_309 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 309)
#define OBJ_EVENT_PAL_TAG_POKEMON_310 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 310)
#define OBJ_EVENT_PAL_TAG_POKEMON_311 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 311)
#define OBJ_EVENT_PAL_TAG_POKEMON_312 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 312)
#define OBJ_EVENT_PAL_TAG_POKEMON_313 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 313)
#define OBJ_EVENT_PAL_TAG_POKEMON_314 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 314)
#define OBJ_EVENT_PAL_TAG_POKEMON_315 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 315)
#define OBJ_EVENT_PAL_TAG_POKEMON_316 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 316)
#define OBJ_EVENT_PAL_TAG_POKEMON_317 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 317)
#define OBJ_EVENT_PAL_TAG_POKEMON_318 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 318)
#define OBJ_EVENT_PAL_TAG_POKEMON_319 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 319)
#define OBJ_EVENT_PAL_TAG_POKEMON_320 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 320)
#define OBJ_EVENT_PAL_TAG_POKEMON_321 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 321)
#define OBJ_EVENT_PAL_TAG_POKEMON_322 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 322)
#define OBJ_EVENT_PAL_TAG_POKEMON_323 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 323)
#define OBJ_EVENT_PAL_TAG_POKEMON_324 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 324)
#define OBJ_EVENT_PAL_TAG_POKEMON_325 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 325)
#define OBJ_EVENT_PAL_TAG_POKEMON_326 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 326)
#define OBJ_EVENT_PAL_TAG_POKEMON_327 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 327)
#define OBJ_EVENT_PAL_TAG_POKEMON_328 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 328)
#define OBJ_EVENT_PAL_TAG_POKEMON_329 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 329)
#define OBJ_EVENT_PAL_TAG_POKEMON_330 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 330)
#define OBJ_EVENT_PAL_TAG_POKEMON_331 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 331)
#define OBJ_EVENT_PAL_TAG_POKEMON_332 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 332)
#define OBJ_EVENT_PAL_TAG_POKEMON_333 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 333)
#define OBJ_EVENT_PAL_TAG_POKEMON_334 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 334)
#define OBJ_EVENT_PAL_TAG_POKEMON_335 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 335)
#define OBJ_EVENT_PAL_TAG_POKEMON_336 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 336)
#define OBJ_EVENT_PAL_TAG_POKEMON_337 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 337)
#define OBJ_EVENT_PAL_TAG_POKEMON_338 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 338)
#define OBJ_EVENT_PAL_TAG_POKEMON_339 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 339)
#define OBJ_EVENT_PAL_TAG_POKEMON_340 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 340)
#define OBJ_EVENT_PAL_TAG_POKEMON_341 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 341)
#define OBJ_EVENT_PAL_TAG_POKEMON_342 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 342)
#define OBJ_EVENT_PAL_TAG_POKEMON_343 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 343)
#define OBJ_EVENT_PAL_TAG_POKEMON_344 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 344)
#define OBJ_EVENT_PAL_TAG_POKEMON_345 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 345)
#define OBJ_EVENT_PAL_TAG_POKEMON_346 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 346)
#define OBJ_EVENT_PAL_TAG_POKEMON_347 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 347)
#define OBJ_EVENT_PAL_TAG_POKEMON_348 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 348)
#define OBJ_EVENT_PAL_TAG_POKEMON_349 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 349)
#define OBJ_EVENT_PAL_TAG_POKEMON_350 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 350)
#define OBJ_EVENT_PAL_TAG_POKEMON_351 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 351)
#define OBJ_EVENT_PAL_TAG_POKEMON_352 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 352)
#define OBJ_EVENT_PAL_TAG_POKEMON_353 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 353)
#define OBJ_EVENT_PAL_TAG_POKEMON_354 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 354)
#define OBJ_EVENT_PAL_TAG_POKEMON_355 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 355)
#define OBJ_EVENT_PAL_TAG_POKEMON_356 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 356)
#define OBJ_EVENT_PAL_TAG_POKEMON_357 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 357)
#define OBJ_EVENT_PAL_TAG_POKEMON_358 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 358)
#define OBJ_EVENT_PAL_TAG_POKEMON_359 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 359)
#define OBJ_EVENT_PAL_TAG_POKEMON_360 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 360)
#define OBJ_EVENT_PAL_TAG_POKEMON_361 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 361)
#define OBJ_EVENT_PAL_TAG_POKEMON_362 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 362)
#define OBJ_EVENT_PAL_TAG_POKEMON_363 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 363)
#define OBJ_EVENT_PAL_TAG_POKEMON_364 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 364)
#define OBJ_EVENT_PAL_TAG_POKEMON_365 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 365)
#define OBJ_EVENT_PAL_TAG_POKEMON_366 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 366)
#define OBJ_EVENT_PAL_TAG_POKEMON_367 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 367)
#define OBJ_EVENT_PAL_TAG_POKEMON_368 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 368)
#define OBJ_EVENT_PAL_TAG_POKEMON_369 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 369)
#define OBJ_EVENT_PAL_TAG_POKEMON_370 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 370)
#define OBJ_EVENT_PAL_TAG_POKEMON_371 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 371)
#define OBJ_EVENT_PAL_TAG_POKEMON_372 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 372)
#define OBJ_EVENT_PAL_TAG_POKEMON_373 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 373)
#define OBJ_EVENT_PAL_TAG_POKEMON_374 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 374)
#define OBJ_EVENT_PAL_TAG_POKEMON_375 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 375)
#define OBJ_EVENT_PAL_TAG_POKEMON_376 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 376)
#define OBJ_EVENT_PAL_TAG_POKEMON_377 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 377)
#define OBJ_EVENT_PAL_TAG_POKEMON_378 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 378)
#define OBJ_EVENT_PAL_TAG_POKEMON_379 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 379)
#define OBJ_EVENT_PAL_TAG_POKEMON_380 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 380)
#define OBJ_EVENT_PAL_TAG_POKEMON_381 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 381)
#define OBJ_EVENT_PAL_TAG_POKEMON_382 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 382)
#define OBJ_EVENT_PAL_TAG_POKEMON_383 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 383)
#define OBJ_EVENT_PAL_TAG_POKEMON_384 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 384)
#define OBJ_EVENT_PAL_TAG_POKEMON_385 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 385)
#define OBJ_EVENT_PAL_TAG_POKEMON_386 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 386)
#define OBJ_EVENT_PAL_TAG_POKEMON_387 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 387)
#define OBJ_EVENT_PAL_TAG_POKEMON_388 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 388)
#define OBJ_EVENT_PAL_TAG_POKEMON_389 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 389)
#define OBJ_EVENT_PAL_TAG_POKEMON_390 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 390)
#define OBJ_EVENT_PAL_TAG_POKEMON_391 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 391)
#define OBJ_EVENT_PAL_TAG_POKEMON_392 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 392)
#define OBJ_EVENT_PAL_TAG_POKEMON_393 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 393)
#define OBJ_EVENT_PAL_TAG_POKEMON_394 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 394)
#define OBJ_EVENT_PAL_TAG_POKEMON_395 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 395)
#define OBJ_EVENT_PAL_TAG_POKEMON_396 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 396)
#define OBJ_EVENT_PAL_TAG_POKEMON_397 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 397)
#define OBJ_EVENT_PAL_TAG_POKEMON_398 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 398)
#define OBJ_EVENT_PAL_TAG_POKEMON_399 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 399)
#define OBJ_EVENT_PAL_TAG_POKEMON_400 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 400)
#define OBJ_EVENT_PAL_TAG_POKEMON_401 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 401)
#define OBJ_EVENT_PAL_TAG_POKEMON_402 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 402)
#define OBJ_EVENT_PAL_TAG_POKEMON_403 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 403)
#define OBJ_EVENT_PAL_TAG_POKEMON_404 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 404)
#define OBJ_EVENT_PAL_TAG_POKEMON_405 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 405)
#define OBJ_EVENT_PAL_TAG_POKEMON_406 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 406)
#define OBJ_EVENT_PAL_TAG_POKEMON_407 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 407)
#define OBJ_EVENT_PAL_TAG_POKEMON_408 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 408)
#define OBJ_EVENT_PAL_TAG_POKEMON_409 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 409)
#define OBJ_EVENT_PAL_TAG_POKEMON_410 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 410)
#define OBJ_EVENT_PAL_TAG_POKEMON_411 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 411)
#define OBJ_EVENT_PAL_TAG_POKEMON_412 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 412)
#define OBJ_EVENT_PAL_TAG_POKEMON_413 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 413)
#define OBJ_EVENT_PAL_TAG_POKEMON_414 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 414)
#define OBJ_EVENT_PAL_TAG_POKEMON_415 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 415)
#define OBJ_EVENT_PAL_TAG_POKEMON_416 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 416)
#define OBJ_EVENT_PAL_TAG_POKEMON_417 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 417)
#define OBJ_EVENT_PAL_TAG_POKEMON_418 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 418)
#define OBJ_EVENT_PAL_TAG_POKEMON_419 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 419)
#define OBJ_EVENT_PAL_TAG_POKEMON_420 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 420)
#define OBJ_EVENT_PAL_TAG_POKEMON_421 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 421)
#define OBJ_EVENT_PAL_TAG_POKEMON_422 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 422)
#define OBJ_EVENT_PAL_TAG_POKEMON_423 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 423)
#define OBJ_EVENT_PAL_TAG_POKEMON_424 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 424)
#define OBJ_EVENT_PAL_TAG_POKEMON_425 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 425)
#define OBJ_EVENT_PAL_TAG_POKEMON_426 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 426)
#define OBJ_EVENT_PAL_TAG_POKEMON_427 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 427)
#define OBJ_EVENT_PAL_TAG_POKEMON_428 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 428)
#define OBJ_EVENT_PAL_TAG_POKEMON_429 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 429)
#define OBJ_EVENT_PAL_TAG_POKEMON_430 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 430)
#define OBJ_EVENT_PAL_TAG_POKEMON_431 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 431)
#define OBJ_EVENT_PAL_TAG_POKEMON_432 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 432)
#define OBJ_EVENT_PAL_TAG_POKEMON_433 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 433)
#define OBJ_EVENT_PAL_TAG_POKEMON_434 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 434)
#define OBJ_EVENT_PAL_TAG_POKEMON_435 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 435)
#define OBJ_EVENT_PAL_TAG_POKEMON_436 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 436)
#define OBJ_EVENT_PAL_TAG_POKEMON_437 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 437)
#define OBJ_EVENT_PAL_TAG_POKEMON_438 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 438)
#define OBJ_EVENT_PAL_TAG_POKEMON_439 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 439)
#define OBJ_EVENT_PAL_TAG_POKEMON_440 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 440)
#define OBJ_EVENT_PAL_TAG_POKEMON_441 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 441)
#define OBJ_EVENT_PAL_TAG_POKEMON_442 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 442)
#define OBJ_EVENT_PAL_TAG_POKEMON_443 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 443)
#define OBJ_EVENT_PAL_TAG_POKEMON_444 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 444)
#define OBJ_EVENT_PAL_TAG_POKEMON_445 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 445)
#define OBJ_EVENT_PAL_TAG_POKEMON_446 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 446)
#define OBJ_EVENT_PAL_TAG_POKEMON_447 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 447)
#define OBJ_EVENT_PAL_TAG_POKEMON_448 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 448)
#define OBJ_EVENT_PAL_TAG_POKEMON_449 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 449)
#define OBJ_EVENT_PAL_TAG_POKEMON_450 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 450)
#define OBJ_EVENT_PAL_TAG_POKEMON_451 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 451)
#define OBJ_EVENT_PAL_TAG_POKEMON_452 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 452)
#define OBJ_EVENT_PAL_TAG_POKEMON_453 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 453)
#define OBJ_EVENT_PAL_TAG_POKEMON_454 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 454)
#define OBJ_EVENT_PAL_TAG_POKEMON_455 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 455)
#define OBJ_EVENT_PAL_TAG_POKEMON_456 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 456)
#define OBJ_EVENT_PAL_TAG_POKEMON_457 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 457)
#define OBJ_EVENT_PAL_TAG_POKEMON_458 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 458)
#define OBJ_EVENT_PAL_TAG_POKEMON_459 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 459)
#define OBJ_EVENT_PAL_TAG_POKEMON_460 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 460)
#define OBJ_EVENT_PAL_TAG_POKEMON_461 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 461)
#define OBJ_EVENT_PAL_TAG_POKEMON_462 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 462)
#define OBJ_EVENT_PAL_TAG_POKEMON_463 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 463)
#define OBJ_EVENT_PAL_TAG_POKEMON_464 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 464)
#define OBJ_EVENT_PAL_TAG_POKEMON_465 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 465)
#define OBJ_EVENT_PAL_TAG_POKEMON_466 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 466)
#define OBJ_EVENT_PAL_TAG_POKEMON_467 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 467)
#define OBJ_EVENT_PAL_TAG_POKEMON_468 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 468)
#define OBJ_EVENT_PAL_TAG_POKEMON_469 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 469)
#define OBJ_EVENT_PAL_TAG_POKEMON_470 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 470)
#define OBJ_EVENT_PAL_TAG_POKEMON_471 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 471)
#define OBJ_EVENT_PAL_TAG_POKEMON_472 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 472)
#define OBJ_EVENT_PAL_TAG_POKEMON_473 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 473)
#define OBJ_EVENT_PAL_TAG_POKEMON_474 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 474)
#define OBJ_EVENT_PAL_TAG_POKEMON_475 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 475)
#define OBJ_EVENT_PAL_TAG_POKEMON_476 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 476)
#define OBJ_EVENT_PAL_TAG_POKEMON_477 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 477)
#define OBJ_EVENT_PAL_TAG_POKEMON_478 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 478)
#define OBJ_EVENT_PAL_TAG_POKEMON_479 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 479)
#define OBJ_EVENT_PAL_TAG_POKEMON_480 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 480)
#define OBJ_EVENT_PAL_TAG_POKEMON_481 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 481)
#define OBJ_EVENT_PAL_TAG_POKEMON_482 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 482)
#define OBJ_EVENT_PAL_TAG_POKEMON_483 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 483)
#define OBJ_EVENT_PAL_TAG_POKEMON_484 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 484)
#define OBJ_EVENT_PAL_TAG_POKEMON_485 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 485)
#define OBJ_EVENT_PAL_TAG_POKEMON_486 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 486)
#define OBJ_EVENT_PAL_TAG_POKEMON_487 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 487)
#define OBJ_EVENT_PAL_TAG_POKEMON_488 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 488)
#define OBJ_EVENT_PAL_TAG_POKEMON_489 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 489)
#define OBJ_EVENT_PAL_TAG_POKEMON_490 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 490)
#define OBJ_EVENT_PAL_TAG_POKEMON_491 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 491)
#define OBJ_EVENT_PAL_TAG_POKEMON_492 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 492)
#define OBJ_EVENT_PAL_TAG_POKEMON_493 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 493)
#define OBJ_EVENT_PAL_TAG_POKEMON_494 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 494)
#define OBJ_EVENT_PAL_TAG_POKEMON_495 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 495)
#define OBJ_EVENT_PAL_TAG_POKEMON_496 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 496)
#define OBJ_EVENT_PAL_TAG_POKEMON_497 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 497)
#define OBJ_EVENT_PAL_TAG_POKEMON_498 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 498)
#define OBJ_EVENT_PAL_TAG_POKEMON_499 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 499)
#define OBJ_EVENT_PAL_TAG_POKEMON_500 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 500)
#define OBJ_EVENT_PAL_TAG_POKEMON_501 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 501)
#define OBJ_EVENT_PAL_TAG_POKEMON_502 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 502)
#define OBJ_EVENT_PAL_TAG_POKEMON_503 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 503)
#define OBJ_EVENT_PAL_TAG_POKEMON_504 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 504)
#define OBJ_EVENT_PAL_TAG_POKEMON_505 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 505)
#define OBJ_EVENT_PAL_TAG_POKEMON_506 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 506)
#define OBJ_EVENT_PAL_TAG_POKEMON_507 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 507)
#define OBJ_EVENT_PAL_TAG_POKEMON_508 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 508)
#define OBJ_EVENT_PAL_TAG_POKEMON_509 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 509)
#define OBJ_EVENT_PAL_TAG_POKEMON_510 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 510)
#define OBJ_EVENT_PAL_TAG_POKEMON_511 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 511)
#define OBJ_EVENT_PAL_TAG_POKEMON_512 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 512)
#define OBJ_EVENT_PAL_TAG_POKEMON_513 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 513)
#define OBJ_EVENT_PAL_TAG_POKEMON_514 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 514)
#define OBJ_EVENT_PAL_TAG_POKEMON_515 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 515)
#define OBJ_EVENT_PAL_TAG_POKEMON_516 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 516)
#define OBJ_EVENT_PAL_TAG_POKEMON_517 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 517)
#define OBJ_EVENT_PAL_TAG_POKEMON_518 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 518)
#define OBJ_EVENT_PAL_TAG_POKEMON_519 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 519)
#define OBJ_EVENT_PAL_TAG_POKEMON_520 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 520)
#define OBJ_EVENT_PAL_TAG_POKEMON_521 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 521)
#define OBJ_EVENT_PAL_TAG_POKEMON_522 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 522)
#define OBJ_EVENT_PAL_TAG_POKEMON_523 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 523)
#define OBJ_EVENT_PAL_TAG_POKEMON_524 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 524)
#define OBJ_EVENT_PAL_TAG_POKEMON_525 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 525)
#define OBJ_EVENT_PAL_TAG_POKEMON_526 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 526)
#define OBJ_EVENT_PAL_TAG_POKEMON_527 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 527)
#define OBJ_EVENT_PAL_TAG_POKEMON_528 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 528)
#define OBJ_EVENT_PAL_TAG_POKEMON_529 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 529)
#define OBJ_EVENT_PAL_TAG_POKEMON_530 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 530)
#define OBJ_EVENT_PAL_TAG_POKEMON_531 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 531)
#define OBJ_EVENT_PAL_TAG_POKEMON_532 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 532)
#define OBJ_EVENT_PAL_TAG_POKEMON_533 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 533)
#define OBJ_EVENT_PAL_TAG_POKEMON_534 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 534)
#define OBJ_EVENT_PAL_TAG_POKEMON_535 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 535)
#define OBJ_EVENT_PAL_TAG_POKEMON_536 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 536)
#define OBJ_EVENT_PAL_TAG_POKEMON_537 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 537)
#define OBJ_EVENT_PAL_TAG_POKEMON_538 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 538)
#define OBJ_EVENT_PAL_TAG_POKEMON_539 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 539)
#define OBJ_EVENT_PAL_TAG_POKEMON_540 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 540)
#define OBJ_EVENT_PAL_TAG_POKEMON_541 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 541)
#define OBJ_EVENT_PAL_TAG_POKEMON_542 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 542)
#define OBJ_EVENT_PAL_TAG_POKEMON_543 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 543)
#define OBJ_EVENT_PAL_TAG_POKEMON_544 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 544)
#define OBJ_EVENT_PAL_TAG_POKEMON_545 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 545)
#define OBJ_EVENT_PAL_TAG_POKEMON_546 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 546)
#define OBJ_EVENT_PAL_TAG_POKEMON_547 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 547)
#define OBJ_EVENT_PAL_TAG_POKEMON_548 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 548)
#define OBJ_EVENT_PAL_TAG_POKEMON_549 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 549)
#define OBJ_EVENT_PAL_TAG_POKEMON_550 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 550)
#define OBJ_EVENT_PAL_TAG_POKEMON_551 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 551)
#define OBJ_EVENT_PAL_TAG_POKEMON_552 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 552)
#define OBJ_EVENT_PAL_TAG_POKEMON_553 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 553)
#define OBJ_EVENT_PAL_TAG_POKEMON_554 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 554)
#define OBJ_EVENT_PAL_TAG_POKEMON_555 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 555)
#define OBJ_EVENT_PAL_TAG_POKEMON_556 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 556)
#define OBJ_EVENT_PAL_TAG_POKEMON_557 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 557)
#define OBJ_EVENT_PAL_TAG_POKEMON_558 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 558)
#define OBJ_EVENT_PAL_TAG_POKEMON_559 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 559)
#define OBJ_EVENT_PAL_TAG_POKEMON_560 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 560)
#define OBJ_EVENT_PAL_TAG_POKEMON_561 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 561)
#define OBJ_EVENT_PAL_TAG_POKEMON_562 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 562)
#define OBJ_EVENT_PAL_TAG_POKEMON_563 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 563)
#define OBJ_EVENT_PAL_TAG_POKEMON_564 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 564)
#define OBJ_EVENT_PAL_TAG_POKEMON_565 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 565)
#define OBJ_EVENT_PAL_TAG_POKEMON_566 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 566)
#define OBJ_EVENT_PAL_TAG_POKEMON_567 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 567)
#define OBJ_EVENT_PAL_TAG_POKEMON_568 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 568)
#define OBJ_EVENT_PAL_TAG_POKEMON_569 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 569)
#define OBJ_EVENT_PAL_TAG_POKEMON_570 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 570)
#define OBJ_EVENT_PAL_TAG_POKEMON_571 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 571)
#define OBJ_EVENT_PAL_TAG_POKEMON_572 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 572)
#define OBJ_EVENT_PAL_TAG_POKEMON_573 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 573)
#define OBJ_EVENT_PAL_TAG_POKEMON_574 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 574)
#define OBJ_EVENT_PAL_TAG_POKEMON_575 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 575)
#define OBJ_EVENT_PAL_TAG_POKEMON_576 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 576)
#define OBJ_EVENT_PAL_TAG_POKEMON_577 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 577)
#define OBJ_EVENT_PAL_TAG_POKEMON_578 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 578)
#define OBJ_EVENT_PAL_TAG_POKEMON_579 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 579)
#define OBJ_EVENT_PAL_TAG_POKEMON_580 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 580)
#define OBJ_EVENT_PAL_TAG_POKEMON_581 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 581)
#define OBJ_EVENT_PAL_TAG_POKEMON_582 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 582)
#define OBJ_EVENT_PAL_TAG_POKEMON_583 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 583)
#define OBJ_EVENT_PAL_TAG_POKEMON_584 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 584)
#define OBJ_EVENT_PAL_TAG_POKEMON_585 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 585)
#define OBJ_EVENT_PAL_TAG_POKEMON_586 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 586)
#define OBJ_EVENT_PAL_TAG_POKEMON_587 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 587)
#define OBJ_EVENT_PAL_TAG_POKEMON_588 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 588)
#define OBJ_EVENT_PAL_TAG_POKEMON_589 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 589)
#define OBJ_EVENT_PAL_TAG_POKEMON_590 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 590)
#define OBJ_EVENT_PAL_TAG_POKEMON_591 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 591)
#define OBJ_EVENT_PAL_TAG_POKEMON_592 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 592)
#define OBJ_EVENT_PAL_TAG_POKEMON_593 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 593)
#define OBJ_EVENT_PAL_TAG_POKEMON_594 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 594)
#define OBJ_EVENT_PAL_TAG_POKEMON_595 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 595)
#define OBJ_EVENT_PAL_TAG_POKEMON_596 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 596)
#define OBJ_EVENT_PAL_TAG_POKEMON_597 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 597)
#define OBJ_EVENT_PAL_TAG_POKEMON_598 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 598)
#define OBJ_EVENT_PAL_TAG_POKEMON_599 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 599)
#define OBJ_EVENT_PAL_TAG_POKEMON_600 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 600)
#define OBJ_EVENT_PAL_TAG_POKEMON_601 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 601)
#define OBJ_EVENT_PAL_TAG_POKEMON_602 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 602)
#define OBJ_EVENT_PAL_TAG_POKEMON_603 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 603)
#define OBJ_EVENT_PAL_TAG_POKEMON_604 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 604)
#define OBJ_EVENT_PAL_TAG_POKEMON_605 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 605)
#define OBJ_EVENT_PAL_TAG_POKEMON_606 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 606)
#define OBJ_EVENT_PAL_TAG_POKEMON_607 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 607)
#define OBJ_EVENT_PAL_TAG_POKEMON_608 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 608)
#define OBJ_EVENT_PAL_TAG_POKEMON_609 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 609)
#define OBJ_EVENT_PAL_TAG_POKEMON_610 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 610)
#define OBJ_EVENT_PAL_TAG_POKEMON_611 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 611)
#define OBJ_EVENT_PAL_TAG_POKEMON_612 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 612)
#define OBJ_EVENT_PAL_TAG_POKEMON_613 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 613)
#define OBJ_EVENT_PAL_TAG_POKEMON_614 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 614)
#define OBJ_EVENT_PAL_TAG_POKEMON_615 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 615)
#define OBJ_EVENT_PAL_TAG_POKEMON_616 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 616)
#define OBJ_EVENT_PAL_TAG_POKEMON_617 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 617)
#define OBJ_EVENT_PAL_TAG_POKEMON_618 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 618)
#define OBJ_EVENT_PAL_TAG_POKEMON_619 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 619)
#define OBJ_EVENT_PAL_TAG_POKEMON_620 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 620)
#define OBJ_EVENT_PAL_TAG_POKEMON_621 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 621)
#define OBJ_EVENT_PAL_TAG_POKEMON_622 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 622)
#define OBJ_EVENT_PAL_TAG_POKEMON_623 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 623)
#define OBJ_EVENT_PAL_TAG_POKEMON_624 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 624)
#define OBJ_EVENT_PAL_TAG_POKEMON_625 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 625)
#define OBJ_EVENT_PAL_TAG_POKEMON_626 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 626)
#define OBJ_EVENT_PAL_TAG_POKEMON_627 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 627)
#define OBJ_EVENT_PAL_TAG_POKEMON_628 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 628)
#define OBJ_EVENT_PAL_TAG_POKEMON_629 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 629)
#define OBJ_EVENT_PAL_TAG_POKEMON_630 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 630)
#define OBJ_EVENT_PAL_TAG_POKEMON_631 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 631)
#define OBJ_EVENT_PAL_TAG_POKEMON_632 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 632)
#define OBJ_EVENT_PAL_TAG_POKEMON_633 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 633)
#define OBJ_EVENT_PAL_TAG_POKEMON_634 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 634)
#define OBJ_EVENT_PAL_TAG_POKEMON_635 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 635)
#define OBJ_EVENT_PAL_TAG_POKEMON_636 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 636)
#define OBJ_EVENT_PAL_TAG_POKEMON_637 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 637)
#define OBJ_EVENT_PAL_TAG_POKEMON_638 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 638)
#define OBJ_EVENT_PAL_TAG_POKEMON_639 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 639)
#define OBJ_EVENT_PAL_TAG_POKEMON_640 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 640)
#define OBJ_EVENT_PAL_TAG_POKEMON_641 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 641)
#define OBJ_EVENT_PAL_TAG_POKEMON_642 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 642)
#define OBJ_EVENT_PAL_TAG_POKEMON_643 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 643)
#define OBJ_EVENT_PAL_TAG_POKEMON_644 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 644)
#define OBJ_EVENT_PAL_TAG_POKEMON_645 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 645)
#define OBJ_EVENT_PAL_TAG_POKEMON_646 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 646)
#define OBJ_EVENT_PAL_TAG_POKEMON_647 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 647)
#define OBJ_EVENT_PAL_TAG_POKEMON_648 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 648)
#define OBJ_EVENT_PAL_TAG_POKEMON_649 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 649)
#define OBJ_EVENT_PAL_TAG_POKEMON_650 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 650)
#define OBJ_EVENT_PAL_TAG_POKEMON_651 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 651)
#define OBJ_EVENT_PAL_TAG_POKEMON_652 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 652)
#define OBJ_EVENT_PAL_TAG_POKEMON_653 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 653)
#define OBJ_EVENT_PAL_TAG_POKEMON_654 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 654)
#define OBJ_EVENT_PAL_TAG_POKEMON_655 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 655)
#define OBJ_EVENT_PAL_TAG_POKEMON_656 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 656)
#define OBJ_EVENT_PAL_TAG_POKEMON_657 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 657)
#define OBJ_EVENT_PAL_TAG_POKEMON_658 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 658)
#define OBJ_EVENT_PAL_TAG_POKEMON_659 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 659)
#define OBJ_EVENT_PAL_TAG_POKEMON_660 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 660)
#define OBJ_EVENT_PAL_TAG_POKEMON_661 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 661)
#define OBJ_EVENT_PAL_TAG_POKEMON_662 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 662)
#define OBJ_EVENT_PAL_TAG_POKEMON_663 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 663)
#define OBJ_EVENT_PAL_TAG_POKEMON_664 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 664)
#define OBJ_EVENT_PAL_TAG_POKEMON_665 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 665)
#define OBJ_EVENT_PAL_TAG_POKEMON_666 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 666)
#define OBJ_EVENT_PAL_TAG_POKEMON_667 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 667)
#define OBJ_EVENT_PAL_TAG_POKEMON_668 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 668)
#define OBJ_EVENT_PAL_TAG_POKEMON_669 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 669)
#define OBJ_EVENT_PAL_TAG_POKEMON_670 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 670)
#define OBJ_EVENT_PAL_TAG_POKEMON_671 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 671)
#define OBJ_EVENT_PAL_TAG_POKEMON_672 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 672)
#define OBJ_EVENT_PAL_TAG_POKEMON_673 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 673)
#define OBJ_EVENT_PAL_TAG_POKEMON_674 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 674)
#define OBJ_EVENT_PAL_TAG_POKEMON_675 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 675)
#define OBJ_EVENT_PAL_TAG_POKEMON_676 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 676)
#define OBJ_EVENT_PAL_TAG_POKEMON_677 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 677)
#define OBJ_EVENT_PAL_TAG_POKEMON_678 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 678)
#define OBJ_EVENT_PAL_TAG_POKEMON_679 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 679)
#define OBJ_EVENT_PAL_TAG_POKEMON_680 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 680)
#define OBJ_EVENT_PAL_TAG_POKEMON_681 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 681)
#define OBJ_EVENT_PAL_TAG_POKEMON_682 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 682)
#define OBJ_EVENT_PAL_TAG_POKEMON_683 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 683)
#define OBJ_EVENT_PAL_TAG_POKEMON_684 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 684)
#define OBJ_EVENT_PAL_TAG_POKEMON_685 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 685)
#define OBJ_EVENT_PAL_TAG_POKEMON_686 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 686)
#define OBJ_EVENT_PAL_TAG_POKEMON_687 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 687)
#define OBJ_EVENT_PAL_TAG_POKEMON_688 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 688)
#define OBJ_EVENT_PAL_TAG_POKEMON_689 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 689)
#define OBJ_EVENT_PAL_TAG_POKEMON_690 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 690)
#define OBJ_EVENT_PAL_TAG_POKEMON_691 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 691)
#define OBJ_EVENT_PAL_TAG_POKEMON_692 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 692)
#define OBJ_EVENT_PAL_TAG_POKEMON_693 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 693)
#define OBJ_EVENT_PAL_TAG_POKEMON_694 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 694)
#define OBJ_EVENT_PAL_TAG_POKEMON_695 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 695)
#define OBJ_EVENT_PAL_TAG_POKEMON_696 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 696)
#define OBJ_EVENT_PAL_TAG_POKEMON_697 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 697)
#define OBJ_EVENT_PAL_TAG_POKEMON_698 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 698)
#define OBJ_EVENT_PAL_TAG_POKEMON_699 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 699)
#define OBJ_EVENT_PAL_TAG_POKEMON_700 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 700)
#define OBJ_EVENT_PAL_TAG_POKEMON_701 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 701)
#define OBJ_EVENT_PAL_TAG_POKEMON_702 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 702)
#define OBJ_EVENT_PAL_TAG_POKEMON_703 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 703)
#define OBJ_EVENT_PAL_TAG_POKEMON_704 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 704)
#define OBJ_EVENT_PAL_TAG_POKEMON_705 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 705)
#define OBJ_EVENT_PAL_TAG_POKEMON_706 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 706)
#define OBJ_EVENT_PAL_TAG_POKEMON_707 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 707)
#define OBJ_EVENT_PAL_TAG_POKEMON_708 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 708)
#define OBJ_EVENT_PAL_TAG_POKEMON_709 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 709)
#define OBJ_EVENT_PAL_TAG_POKEMON_710 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 710)
#define OBJ_EVENT_PAL_TAG_POKEMON_711 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 711)
#define OBJ_EVENT_PAL_TAG_POKEMON_712 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 712)
#define OBJ_EVENT_PAL_TAG_POKEMON_713 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 713)
#define OBJ_EVENT_PAL_TAG_POKEMON_714 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 714)
#define OBJ_EVENT_PAL_TAG_POKEMON_715 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 715)
#define OBJ_EVENT_PAL_TAG_POKEMON_716 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 716)
#define OBJ_EVENT_PAL_TAG_POKEMON_717 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 717)
#define OBJ_EVENT_PAL_TAG_POKEMON_718 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 718)
#define OBJ_EVENT_PAL_TAG_POKEMON_719 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 719)
#define OBJ_EVENT_PAL_TAG_POKEMON_720 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 720)
#define OBJ_EVENT_PAL_TAG_POKEMON_721 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 721)
#define OBJ_EVENT_PAL_TAG_POKEMON_722 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 722)
#define OBJ_EVENT_PAL_TAG_POKEMON_723 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 723)
#define OBJ_EVENT_PAL_TAG_POKEMON_724 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 724)
#define OBJ_EVENT_PAL_TAG_POKEMON_725 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 725)
#define OBJ_EVENT_PAL_TAG_POKEMON_726 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 726)
#define OBJ_EVENT_PAL_TAG_POKEMON_727 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 727)
#define OBJ_EVENT_PAL_TAG_POKEMON_728 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 728)
#define OBJ_EVENT_PAL_TAG_POKEMON_729 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 729)
#define OBJ_EVENT_PAL_TAG_POKEMON_730 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 730)
#define OBJ_EVENT_PAL_TAG_POKEMON_731 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 731)
#define OBJ_EVENT_PAL_TAG_POKEMON_732 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 732)
#define OBJ_EVENT_PAL_TAG_POKEMON_733 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 733)
#define OBJ_EVENT_PAL_TAG_POKEMON_734 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 734)
#define OBJ_EVENT_PAL_TAG_POKEMON_735 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 735)
#define OBJ_EVENT_PAL_TAG_POKEMON_736 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 736)
#define OBJ_EVENT_PAL_TAG_POKEMON_737 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 737)
#define OBJ_EVENT_PAL_TAG_POKEMON_738 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 738)
#define OBJ_EVENT_PAL_TAG_POKEMON_739 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 739)
#define OBJ_EVENT_PAL_TAG_POKEMON_740 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 740)
#define OBJ_EVENT_PAL_TAG_POKEMON_741 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 741)
#define OBJ_EVENT_PAL_TAG_POKEMON_742 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 742)
#define OBJ_EVENT_PAL_TAG_POKEMON_743 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 743)
#define OBJ_EVENT_PAL_TAG_POKEMON_744 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 744)
#define OBJ_EVENT_PAL_TAG_POKEMON_745 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 745)
#define OBJ_EVENT_PAL_TAG_POKEMON_746 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 746)
#define OBJ_EVENT_PAL_TAG_POKEMON_747 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 747)
#define OBJ_EVENT_PAL_TAG_POKEMON_748 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 748)
#define OBJ_EVENT_PAL_TAG_POKEMON_749 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 749)
#define OBJ_EVENT_PAL_TAG_POKEMON_750 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 750)
#define OBJ_EVENT_PAL_TAG_POKEMON_751 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 751)
#define OBJ_EVENT_PAL_TAG_POKEMON_752 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 752)
#define OBJ_EVENT_PAL_TAG_POKEMON_753 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 753)
#define OBJ_EVENT_PAL_TAG_POKEMON_754 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 754)
#define OBJ_EVENT_PAL_TAG_POKEMON_755 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 755)
#define OBJ_EVENT_PAL_TAG_POKEMON_756 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 756)
#define OBJ_EVENT_PAL_TAG_POKEMON_757 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 757)
#define OBJ_EVENT_PAL_TAG_POKEMON_758 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 758)
#define OBJ_EVENT_PAL_TAG_POKEMON_759 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 759)
#define OBJ_EVENT_PAL_TAG_POKEMON_760 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 760)
#define OBJ_EVENT_PAL_TAG_POKEMON_761 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 761)
#define OBJ_EVENT_PAL_TAG_POKEMON_762 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 762)
#define OBJ_EVENT_PAL_TAG_POKEMON_763 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 763)
#define OBJ_EVENT_PAL_TAG_POKEMON_764 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 764)
#define OBJ_EVENT_PAL_TAG_POKEMON_765 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 765)
#define OBJ_EVENT_PAL_TAG_POKEMON_766 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 766)
#define OBJ_EVENT_PAL_TAG_POKEMON_767 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 767)
#define OBJ_EVENT_PAL_TAG_POKEMON_768 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 768)
#define OBJ_EVENT_PAL_TAG_POKEMON_769 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 769)
#define OBJ_EVENT_PAL_TAG_POKEMON_770 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 770)
#define OBJ_EVENT_PAL_TAG_POKEMON_771 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 771)
#define OBJ_EVENT_PAL_TAG_POKEMON_772 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 772)
#define OBJ_EVENT_PAL_TAG_POKEMON_773 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 773)
#define OBJ_EVENT_PAL_TAG_POKEMON_774 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 774)
#define OBJ_EVENT_PAL_TAG_POKEMON_775 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 775)
#define OBJ_EVENT_PAL_TAG_POKEMON_776 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 776)
#define OBJ_EVENT_PAL_TAG_POKEMON_777 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 777)
#define OBJ_EVENT_PAL_TAG_POKEMON_778 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 778)
#define OBJ_EVENT_PAL_TAG_POKEMON_779 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 779)
#define OBJ_EVENT_PAL_TAG_POKEMON_780 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 780)
#define OBJ_EVENT_PAL_TAG_POKEMON_781 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 781)
#define OBJ_EVENT_PAL_TAG_POKEMON_782 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 782)
#define OBJ_EVENT_PAL_TAG_POKEMON_783 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 783)
#define OBJ_EVENT_PAL_TAG_POKEMON_784 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 784)
#define OBJ_EVENT_PAL_TAG_POKEMON_785 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 785)
#define OBJ_EVENT_PAL_TAG_POKEMON_786 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 786)
#define OBJ_EVENT_PAL_TAG_POKEMON_787 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 787)
#define OBJ_EVENT_PAL_TAG_POKEMON_788 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 788)
#define OBJ_EVENT_PAL_TAG_POKEMON_789 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 789)
#define OBJ_EVENT_PAL_TAG_POKEMON_790 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 790)
#define OBJ_EVENT_PAL_TAG_POKEMON_791 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 791)
#define OBJ_EVENT_PAL_TAG_POKEMON_792 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 792)
#define OBJ_EVENT_PAL_TAG_POKEMON_793 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 793)
#define OBJ_EVENT_PAL_TAG_POKEMON_794 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 794)
#define OBJ_EVENT_PAL_TAG_POKEMON_795 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 795)
#define OBJ_EVENT_PAL_TAG_POKEMON_796 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 796)
#define OBJ_EVENT_PAL_TAG_POKEMON_797 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 797)
#define OBJ_EVENT_PAL_TAG_POKEMON_798 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 798)
#define OBJ_EVENT_PAL_TAG_POKEMON_799 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 799)
#define OBJ_EVENT_PAL_TAG_POKEMON_800 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 800)
#define OBJ_EVENT_PAL_TAG_POKEMON_801 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 801)
#define OBJ_EVENT_PAL_TAG_POKEMON_802 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 802)
#define OBJ_EVENT_PAL_TAG_POKEMON_803 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 803)
#define OBJ_EVENT_PAL_TAG_POKEMON_804 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 804)
#define OBJ_EVENT_PAL_TAG_POKEMON_805 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 805)
#define OBJ_EVENT_PAL_TAG_POKEMON_806 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 806)
#define OBJ_EVENT_PAL_TAG_POKEMON_807 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 807)
#define OBJ_EVENT_PAL_TAG_POKEMON_808 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 808)
#define OBJ_EVENT_PAL_TAG_POKEMON_809 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 809)
#define OBJ_EVENT_PAL_TAG_POKEMON_849 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 849)
#define OBJ_EVENT_PAL_TAG_POKEMON_858 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 858)
#define OBJ_EVENT_PAL_TAG_POKEMON_859 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 859)
#define OBJ_EVENT_PAL_TAG_POKEMON_860 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 860)
#define OBJ_EVENT_PAL_TAG_POKEMON_861 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 861)
#define OBJ_EVENT_PAL_TAG_POKEMON_862 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 862)
#define OBJ_EVENT_PAL_TAG_POKEMON_863 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 863)
#define OBJ_EVENT_PAL_TAG_POKEMON_864 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 864)
#define OBJ_EVENT_PAL_TAG_POKEMON_865 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 865)
#define OBJ_EVENT_PAL_TAG_POKEMON_866 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 866)
#define OBJ_EVENT_PAL_TAG_POKEMON_869 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 869)
#define OBJ_EVENT_PAL_TAG_POKEMON_870 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 870)
#define OBJ_EVENT_PAL_TAG_POKEMON_871 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 871)
#define OBJ_EVENT_PAL_TAG_POKEMON_872 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 872)
#define OBJ_EVENT_PAL_TAG_POKEMON_873 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 873)
#define OBJ_EVENT_PAL_TAG_POKEMON_874 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 874)
#define OBJ_EVENT_PAL_TAG_POKEMON_875 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 875)
#define OBJ_EVENT_PAL_TAG_POKEMON_876 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 876)
#define OBJ_EVENT_PAL_TAG_POKEMON_877 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 877)
#define OBJ_EVENT_PAL_TAG_POKEMON_878 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 878)
#define OBJ_EVENT_PAL_TAG_POKEMON_879 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 879)
#define OBJ_EVENT_PAL_TAG_POKEMON_880 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 880)
#define OBJ_EVENT_PAL_TAG_POKEMON_881 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 881)
#define OBJ_EVENT_PAL_TAG_POKEMON_882 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 882)
#define OBJ_EVENT_PAL_TAG_POKEMON_883 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 883)
#define OBJ_EVENT_PAL_TAG_POKEMON_884 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 884)
#define OBJ_EVENT_PAL_TAG_POKEMON_885 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 885)
#define OBJ_EVENT_PAL_TAG_POKEMON_887 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 887)
#define OBJ_EVENT_PAL_TAG_POKEMON_896 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 896)
#define OBJ_EVENT_PAL_TAG_POKEMON_897 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 897)
#define OBJ_EVENT_PAL_TAG_POKEMON_898 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 898)
#define OBJ_EVENT_PAL_TAG_POKEMON_899 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 899)
#define OBJ_EVENT_PAL_TAG_POKEMON_900 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 900)
#define OBJ_EVENT_PAL_TAG_POKEMON_901 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 901)
#define OBJ_EVENT_PAL_TAG_POKEMON_902 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 902)
#define OBJ_EVENT_PAL_TAG_POKEMON_903 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 903)
#define OBJ_EVENT_PAL_TAG_POKEMON_904 (OBJ_EVENT_PAL_TAG_POKEMON_START  + 904)


#include "data/object_events/object_event_graphics_info_pointers.h"
#include "data/field_effects/field_effect_object_template_pointers.h"
#include "data/object_events/object_event_pic_tables.h"
#include "data/object_events/object_event_anims.h"
#include "data/object_events/base_oam.h"
#include "data/object_events/object_event_subsprites.h"
#include "data/object_events/object_event_graphics_info.h"

static const struct SpritePalette sObjectEventSpritePalettes[] = {

    // island-game
    {gObjectEventPal_Ruka,                  OBJ_EVENT_PAL_TAG_RUKA},
    {gObjectEventPal_OliviaNormal,          OBJ_EVENT_PAL_TAG_OLIVIA_NORMAL},
    {gObjectEventPal_OliviaBike,            OBJ_EVENT_PAL_TAG_OLIVIA_BIKE},
    {gObjectEventPal_OliviaFieldMove,       OBJ_EVENT_PAL_TAG_OLIVIA_FIELD_MOVE},
    {gObjectEventPal_OliviaFishing,         OBJ_EVENT_PAL_TAG_OLIVIA_FISHING},
    {gObjectEventPal_OliverNormal,          OBJ_EVENT_PAL_TAG_OLIVER_NORMAL},
    {gObjectEventPal_OliverBike,            OBJ_EVENT_PAL_TAG_OLIVER_BIKE},
    {gObjectEventPal_OliverFieldMove,       OBJ_EVENT_PAL_TAG_OLIVER_FIELD_MOVE},
    {gObjectEventPal_OliverFishing,         OBJ_EVENT_PAL_TAG_OLIVER_FISHING},
    {gObjectEventPal_OliviaWatering,        OBJ_EVENT_PAL_TAG_OLIVIA_WATERING},
    {gObjectEventPal_OliverWatering,        OBJ_EVENT_PAL_TAG_OLIVER_WATERING},
    {gObjectEventPal_OliviaSurfing,         OBJ_EVENT_PAL_TAG_OLIVIA_SURFING},
    {gObjectEventPal_Melissa,               OBJ_EVENT_PAL_TAG_MELISSA},
    {gObjectEventPal_FieldEffects,          OBJ_EVENT_PAL_TAG_FIELD_EFFECTS},
    {gObjectEventPal_AceTrainerF,           OBJ_EVENT_PAL_TAG_ACE_TRAINER_F},
    {gObjectEventPal_AceTrainerM,           OBJ_EVENT_PAL_TAG_ACE_TRAINER_M},
    {gObjectEventPal_Jonas,                 OBJ_EVENT_PAL_TAG_JONAS},
    {gObjectEventPal_Palm,                  OBJ_EVENT_PAL_TAG_PALM},
    {gObjectEventPal_Arthur,                OBJ_EVENT_PAL_TAG_ARTHUR},
    {gObjectEventPal_Coco,                  OBJ_EVENT_PAL_TAG_COCO},
    {gObjectEventPal_Primrose,              OBJ_EVENT_PAL_TAG_PRIMROSE},
    {gObjectEventPal_Edea,                  OBJ_EVENT_PAL_TAG_EDEA},
    {gObjectEventPal_BeautyMasters,         OBJ_EVENT_PAL_TAG_BEAUTY_MASTERS},
    {gObjectEventPal_Cowgirl,               OBJ_EVENT_PAL_TAG_COWGIRL},
    {gObjectEventPal_Girl5,                 OBJ_EVENT_PAL_TAG_GIRL_5},
    {gObjectEventPal_Girl6,                 OBJ_EVENT_PAL_TAG_GIRL_6},
    {gObjectEventPal_Girl7,                 OBJ_EVENT_PAL_TAG_GIRL_7},
    {gObjectEventPal_Juggler,               OBJ_EVENT_PAL_TAG_JUGGLER},
    {gObjectEventPal_Man7,                  OBJ_EVENT_PAL_TAG_MAN_7},
    {gObjectEventPal_Biker,                 OBJ_EVENT_PAL_TAG_BIKER},
    {gObjectEventPal_Channeler,             OBJ_EVENT_PAL_TAG_CHANNELER},
    {gObjectEventPal_Nerd,                  OBJ_EVENT_PAL_TAG_NERD},
    {gObjectEventPal_Rancher,               OBJ_EVENT_PAL_TAG_RANCHER},
    {gObjectEventPal_SchoolKidM2,           OBJ_EVENT_PAL_TAG_SCHOOL_KID_M_2},
    {gObjectEventPal_ScoutM,                OBJ_EVENT_PAL_TAG_SCOUT_M},
    {gObjectEventPal_ScoutF,                OBJ_EVENT_PAL_TAG_SCOUT_F},
    {gObjectEventPal_SilverwingM,           OBJ_EVENT_PAL_TAG_SILVERWING_M},
    {gObjectEventPal_SilverwingF,           OBJ_EVENT_PAL_TAG_SILVERWING_F},
    {gObjectEventPal_Woman6,                OBJ_EVENT_PAL_TAG_WOMAN_6},
    {gObjectEventPal_Woman7,                OBJ_EVENT_PAL_TAG_WOMAN_7},
    {gObjectEventPal_Woman8,                OBJ_EVENT_PAL_TAG_WOMAN_8},
    {gObjectEventPal_SchoolKidF,            OBJ_EVENT_PAL_TAG_SCHOOL_KID_F},
    {gObjectEventPal_Apple,                 OBJ_EVENT_PAL_TAG_APPLE},
    {gObjectEventPalette_IslandgamePKMN_ShinyAzurill,       OBJ_EVENT_PAL_TAG_SHINY_AZURILL},
    {gObjectEventPal_HexManiac,            OBJ_EVENT_PAL_TAG_HEX_MANIAC},

    {gObjectEventPal_Npc1,                  OBJ_EVENT_PAL_TAG_NPC_1},
    {gObjectEventPal_Npc2,                  OBJ_EVENT_PAL_TAG_NPC_2},
    {gObjectEventPal_Npc3,                  OBJ_EVENT_PAL_TAG_NPC_3},
    {gObjectEventPal_Npc4,                  OBJ_EVENT_PAL_TAG_NPC_4},
    {gObjectEventPal_Npc1Reflection,        OBJ_EVENT_PAL_TAG_NPC_1_REFLECTION},
    {gObjectEventPal_Npc2Reflection,        OBJ_EVENT_PAL_TAG_NPC_2_REFLECTION},
    {gObjectEventPal_Npc3Reflection,        OBJ_EVENT_PAL_TAG_NPC_3_REFLECTION},
    {gObjectEventPal_Npc4Reflection,        OBJ_EVENT_PAL_TAG_NPC_4_REFLECTION},
    {gObjectEventPal_Brendan,               OBJ_EVENT_PAL_TAG_BRENDAN},
    {gObjectEventPal_BrendanReflection,     OBJ_EVENT_PAL_TAG_BRENDAN_REFLECTION},
    {gObjectEventPal_BridgeReflection,      OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION},
    {gObjectEventPal_PlayerUnderwater,      OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER},
    {gObjectEventPal_QuintyPlump,           OBJ_EVENT_PAL_TAG_QUINTY_PLUMP},
    {gObjectEventPal_QuintyPlumpReflection, OBJ_EVENT_PAL_TAG_QUINTY_PLUMP_REFLECTION},
    {gObjectEventPal_Truck,                 OBJ_EVENT_PAL_TAG_TRUCK},
    {gObjectEventPal_Vigoroth,              OBJ_EVENT_PAL_TAG_VIGOROTH},
    {gObjectEventPal_EnemyZigzagoon,        OBJ_EVENT_PAL_TAG_ZIGZAGOON},
    {gObjectEventPal_May,                   OBJ_EVENT_PAL_TAG_MAY},
    {gObjectEventPal_MayReflection,         OBJ_EVENT_PAL_TAG_MAY_REFLECTION},
    {gObjectEventPal_MovingBox,             OBJ_EVENT_PAL_TAG_MOVING_BOX},
    {gObjectEventPal_CableCar,              OBJ_EVENT_PAL_TAG_CABLE_CAR},
    {gObjectEventPal_SSTidal,               OBJ_EVENT_PAL_TAG_SSTIDAL},
    {gObjectEventPal_Kyogre,                OBJ_EVENT_PAL_TAG_KYOGRE},
    {gObjectEventPal_KyogreReflection,      OBJ_EVENT_PAL_TAG_KYOGRE_REFLECTION},
    {gObjectEventPal_Groudon,               OBJ_EVENT_PAL_TAG_GROUDON},
    {gObjectEventPal_GroudonReflection,     OBJ_EVENT_PAL_TAG_GROUDON_REFLECTION},
    {gObjectEventPal_SubmarineShadow,       OBJ_EVENT_PAL_TAG_SUBMARINE_SHADOW},
    {gObjectEventPal_Poochyena,             OBJ_EVENT_PAL_TAG_POOCHYENA},
    {gObjectEventPal_RedLeaf,               OBJ_EVENT_PAL_TAG_RED_LEAF},
    {gObjectEventPal_Deoxys,                OBJ_EVENT_PAL_TAG_DEOXYS},
    {gObjectEventPal_BirthIslandStone,      OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE},
    {gObjectEventPal_HoOh,                  OBJ_EVENT_PAL_TAG_HO_OH},
    {gObjectEventPal_Lugia,                 OBJ_EVENT_PAL_TAG_LUGIA},
    {gObjectEventPal_RubySapphireBrendan,   OBJ_EVENT_PAL_TAG_RS_BRENDAN},
    {gObjectEventPal_RubySapphireMay,       OBJ_EVENT_PAL_TAG_RS_MAY},
    {gObjectEventPal_Boy4,                  OBJ_EVENT_PAL_TAG_NPC_10},
    {gObjectEventPal_Boy5,                  OBJ_EVENT_PAL_TAG_NPC_11},
    {gObjectEventPal_Girl4,                 OBJ_EVENT_PAL_TAG_NPC_12},
    {gObjectEventPal_GroundSwimmerF,        OBJ_EVENT_PAL_TAG_NPC_13},
    {gObjectEventPal_GroundSwimmerM,        OBJ_EVENT_PAL_TAG_NPC_14},
    {gObjectEventPal_Man6,                  OBJ_EVENT_PAL_TAG_NPC_15},
    {gObjectEventPal_Police,                OBJ_EVENT_PAL_TAG_NPC_16},
    {gObjectEventPal_PsychicF,              OBJ_EVENT_PAL_TAG_NPC_17},
    {gObjectEventPal_RangerF,               OBJ_EVENT_PAL_TAG_NPC_18},
    {gObjectEventPal_RangerM,               OBJ_EVENT_PAL_TAG_NPC_19},
    {gObjectEventPal_Roughneck,             OBJ_EVENT_PAL_TAG_NPC_20},
    {gObjectEventPal_RuinManiac,            OBJ_EVENT_PAL_TAG_NPC_21},
    {gObjectEventPal_Scientist3,            OBJ_EVENT_PAL_TAG_NPC_22},
    {gObjectEventPal_TuberFSwimming,        OBJ_EVENT_PAL_TAG_NPC_23},
    {gObjectEventPal_Worker,                OBJ_EVENT_PAL_TAG_NPC_24},
    {gObjectEventPal_BlackBelt,             OBJ_EVENT_PAL_TAG_NPC_25},
    {gObjectEventPal_BugCatcher,            OBJ_EVENT_PAL_TAG_NPC_26},
    {gObjectEventPal_Camper,                OBJ_EVENT_PAL_TAG_NPC_27},
    {gObjectEventPal_ExpertM,               OBJ_EVENT_PAL_TAG_NPC_28},
    {gObjectEventPal_FatMan,                OBJ_EVENT_PAL_TAG_NPC_29},
    {gObjectEventPal_Fisherman,             OBJ_EVENT_PAL_TAG_NPC_30},
    {gObjectEventPal_Gentleman,             OBJ_EVENT_PAL_TAG_NPC_31},
    {gObjectEventPal_Girl3,                 OBJ_EVENT_PAL_TAG_NPC_32},
    {gObjectEventPal_Hiker,                 OBJ_EVENT_PAL_TAG_NPC_33},
    {gObjectEventPal_Lass,                  OBJ_EVENT_PAL_TAG_NPC_34},
    {gObjectEventPal_LittleBoy,             OBJ_EVENT_PAL_TAG_NPC_35},
    {gObjectEventPal_LittleGirl,            OBJ_EVENT_PAL_TAG_NPC_36},
    {gObjectEventPal_Picnicker,             OBJ_EVENT_PAL_TAG_NPC_37},
    {gObjectEventPal_PsychicM,              OBJ_EVENT_PAL_TAG_NPC_38},
    {gObjectEventPal_Sailor,                OBJ_EVENT_PAL_TAG_NPC_39},
    {gObjectEventPal_SwimmerF,              OBJ_EVENT_PAL_TAG_NPC_40},
    {gObjectEventPal_SwimmerM,              OBJ_EVENT_PAL_TAG_NPC_41},
    {gObjectEventPal_TuberF,                OBJ_EVENT_PAL_TAG_NPC_42},
    {gObjectEventPal_TuberM,                OBJ_EVENT_PAL_TAG_NPC_43},
    {gObjectEventPal_TuberMSwimming,        OBJ_EVENT_PAL_TAG_NPC_44},
    {gObjectEventPal_Youngster,             OBJ_EVENT_PAL_TAG_NPC_45},
    {gObjectEventPal_Man1,                  OBJ_EVENT_PAL_TAG_NPC_47},
    {gObjectEventPal_MartEmployee,          OBJ_EVENT_PAL_TAG_NPC_48},
    {gObjectEventPal_ExpertF,               OBJ_EVENT_PAL_TAG_NPC_49},



    //Pokemon overworlds
    {gObjectEventPalette_Pokemon_Species_001, OBJ_EVENT_PAL_TAG_POKEMON_001},
	{gObjectEventPalette_Pokemon_Species_002, OBJ_EVENT_PAL_TAG_POKEMON_002},
	{gObjectEventPalette_Pokemon_Species_003, OBJ_EVENT_PAL_TAG_POKEMON_003},
	{gObjectEventPalette_Pokemon_Species_004, OBJ_EVENT_PAL_TAG_POKEMON_004},
	{gObjectEventPalette_Pokemon_Species_005, OBJ_EVENT_PAL_TAG_POKEMON_005},
	{gObjectEventPalette_Pokemon_Species_006, OBJ_EVENT_PAL_TAG_POKEMON_006},
	{gObjectEventPalette_Pokemon_Species_007, OBJ_EVENT_PAL_TAG_POKEMON_007},
	{gObjectEventPalette_Pokemon_Species_008, OBJ_EVENT_PAL_TAG_POKEMON_008},
	{gObjectEventPalette_Pokemon_Species_009, OBJ_EVENT_PAL_TAG_POKEMON_009},
	{gObjectEventPalette_Pokemon_Species_010, OBJ_EVENT_PAL_TAG_POKEMON_010},
	{gObjectEventPalette_Pokemon_Species_011, OBJ_EVENT_PAL_TAG_POKEMON_011},
	{gObjectEventPalette_Pokemon_Species_012, OBJ_EVENT_PAL_TAG_POKEMON_012},
	{gObjectEventPalette_Pokemon_Species_013, OBJ_EVENT_PAL_TAG_POKEMON_013},
	{gObjectEventPalette_Pokemon_Species_014, OBJ_EVENT_PAL_TAG_POKEMON_014},
	{gObjectEventPalette_Pokemon_Species_015, OBJ_EVENT_PAL_TAG_POKEMON_015},
	{gObjectEventPalette_Pokemon_Species_016, OBJ_EVENT_PAL_TAG_POKEMON_016},
	{gObjectEventPalette_Pokemon_Species_017, OBJ_EVENT_PAL_TAG_POKEMON_017},
	{gObjectEventPalette_Pokemon_Species_018, OBJ_EVENT_PAL_TAG_POKEMON_018},
	{gObjectEventPalette_Pokemon_Species_019, OBJ_EVENT_PAL_TAG_POKEMON_019},
	{gObjectEventPalette_Pokemon_Species_020, OBJ_EVENT_PAL_TAG_POKEMON_020},
	{gObjectEventPalette_Pokemon_Species_021, OBJ_EVENT_PAL_TAG_POKEMON_021},
	{gObjectEventPalette_Pokemon_Species_022, OBJ_EVENT_PAL_TAG_POKEMON_022},
	{gObjectEventPalette_Pokemon_Species_023, OBJ_EVENT_PAL_TAG_POKEMON_023},
	{gObjectEventPalette_Pokemon_Species_024, OBJ_EVENT_PAL_TAG_POKEMON_024},
	{gObjectEventPalette_Pokemon_Species_025, OBJ_EVENT_PAL_TAG_POKEMON_025},
	{gObjectEventPalette_Pokemon_Species_026, OBJ_EVENT_PAL_TAG_POKEMON_026},
	{gObjectEventPalette_Pokemon_Species_027, OBJ_EVENT_PAL_TAG_POKEMON_027},
	{gObjectEventPalette_Pokemon_Species_028, OBJ_EVENT_PAL_TAG_POKEMON_028},
	{gObjectEventPalette_Pokemon_Species_029, OBJ_EVENT_PAL_TAG_POKEMON_029},
	{gObjectEventPalette_Pokemon_Species_030, OBJ_EVENT_PAL_TAG_POKEMON_030},
	{gObjectEventPalette_Pokemon_Species_031, OBJ_EVENT_PAL_TAG_POKEMON_031},
	{gObjectEventPalette_Pokemon_Species_032, OBJ_EVENT_PAL_TAG_POKEMON_032},
	{gObjectEventPalette_Pokemon_Species_033, OBJ_EVENT_PAL_TAG_POKEMON_033},
	{gObjectEventPalette_Pokemon_Species_034, OBJ_EVENT_PAL_TAG_POKEMON_034},
	{gObjectEventPalette_Pokemon_Species_035, OBJ_EVENT_PAL_TAG_POKEMON_035},
	{gObjectEventPalette_Pokemon_Species_036, OBJ_EVENT_PAL_TAG_POKEMON_036},
	{gObjectEventPalette_Pokemon_Species_037, OBJ_EVENT_PAL_TAG_POKEMON_037},
	{gObjectEventPalette_Pokemon_Species_038, OBJ_EVENT_PAL_TAG_POKEMON_038},
	{gObjectEventPalette_Pokemon_Species_039, OBJ_EVENT_PAL_TAG_POKEMON_039},
	{gObjectEventPalette_Pokemon_Species_040, OBJ_EVENT_PAL_TAG_POKEMON_040},
	{gObjectEventPalette_Pokemon_Species_041, OBJ_EVENT_PAL_TAG_POKEMON_041},
	{gObjectEventPalette_Pokemon_Species_042, OBJ_EVENT_PAL_TAG_POKEMON_042},
	{gObjectEventPalette_Pokemon_Species_043, OBJ_EVENT_PAL_TAG_POKEMON_043},
	{gObjectEventPalette_Pokemon_Species_044, OBJ_EVENT_PAL_TAG_POKEMON_044},
	{gObjectEventPalette_Pokemon_Species_045, OBJ_EVENT_PAL_TAG_POKEMON_045},
	{gObjectEventPalette_Pokemon_Species_046, OBJ_EVENT_PAL_TAG_POKEMON_046},
	{gObjectEventPalette_Pokemon_Species_047, OBJ_EVENT_PAL_TAG_POKEMON_047},
	{gObjectEventPalette_Pokemon_Species_048, OBJ_EVENT_PAL_TAG_POKEMON_048},
	{gObjectEventPalette_Pokemon_Species_049, OBJ_EVENT_PAL_TAG_POKEMON_049},
	{gObjectEventPalette_Pokemon_Species_050, OBJ_EVENT_PAL_TAG_POKEMON_050},
	{gObjectEventPalette_Pokemon_Species_051, OBJ_EVENT_PAL_TAG_POKEMON_051},
	{gObjectEventPalette_Pokemon_Species_052, OBJ_EVENT_PAL_TAG_POKEMON_052},
	{gObjectEventPalette_Pokemon_Species_053, OBJ_EVENT_PAL_TAG_POKEMON_053},
	{gObjectEventPalette_Pokemon_Species_054, OBJ_EVENT_PAL_TAG_POKEMON_054},
	{gObjectEventPalette_Pokemon_Species_055, OBJ_EVENT_PAL_TAG_POKEMON_055},
	{gObjectEventPalette_Pokemon_Species_056, OBJ_EVENT_PAL_TAG_POKEMON_056},
	{gObjectEventPalette_Pokemon_Species_057, OBJ_EVENT_PAL_TAG_POKEMON_057},
	{gObjectEventPalette_Pokemon_Species_058, OBJ_EVENT_PAL_TAG_POKEMON_058},
	{gObjectEventPalette_Pokemon_Species_059, OBJ_EVENT_PAL_TAG_POKEMON_059},
	{gObjectEventPalette_Pokemon_Species_060, OBJ_EVENT_PAL_TAG_POKEMON_060},
	{gObjectEventPalette_Pokemon_Species_061, OBJ_EVENT_PAL_TAG_POKEMON_061},
	{gObjectEventPalette_Pokemon_Species_062, OBJ_EVENT_PAL_TAG_POKEMON_062},
	{gObjectEventPalette_Pokemon_Species_063, OBJ_EVENT_PAL_TAG_POKEMON_063},
	{gObjectEventPalette_Pokemon_Species_064, OBJ_EVENT_PAL_TAG_POKEMON_064},
	{gObjectEventPalette_Pokemon_Species_065, OBJ_EVENT_PAL_TAG_POKEMON_065},
	{gObjectEventPalette_Pokemon_Species_066, OBJ_EVENT_PAL_TAG_POKEMON_066},
	{gObjectEventPalette_Pokemon_Species_067, OBJ_EVENT_PAL_TAG_POKEMON_067},
	{gObjectEventPalette_Pokemon_Species_068, OBJ_EVENT_PAL_TAG_POKEMON_068},
	{gObjectEventPalette_Pokemon_Species_069, OBJ_EVENT_PAL_TAG_POKEMON_069},
	{gObjectEventPalette_Pokemon_Species_070, OBJ_EVENT_PAL_TAG_POKEMON_070},
	{gObjectEventPalette_Pokemon_Species_071, OBJ_EVENT_PAL_TAG_POKEMON_071},
	{gObjectEventPalette_Pokemon_Species_072, OBJ_EVENT_PAL_TAG_POKEMON_072},
	{gObjectEventPalette_Pokemon_Species_073, OBJ_EVENT_PAL_TAG_POKEMON_073},
	{gObjectEventPalette_Pokemon_Species_074, OBJ_EVENT_PAL_TAG_POKEMON_074},
	{gObjectEventPalette_Pokemon_Species_075, OBJ_EVENT_PAL_TAG_POKEMON_075},
	{gObjectEventPalette_Pokemon_Species_076, OBJ_EVENT_PAL_TAG_POKEMON_076},
	{gObjectEventPalette_Pokemon_Species_077, OBJ_EVENT_PAL_TAG_POKEMON_077},
	{gObjectEventPalette_Pokemon_Species_078, OBJ_EVENT_PAL_TAG_POKEMON_078},
	{gObjectEventPalette_Pokemon_Species_079, OBJ_EVENT_PAL_TAG_POKEMON_079},
	{gObjectEventPalette_Pokemon_Species_080, OBJ_EVENT_PAL_TAG_POKEMON_080},
	{gObjectEventPalette_Pokemon_Species_081, OBJ_EVENT_PAL_TAG_POKEMON_081},
	{gObjectEventPalette_Pokemon_Species_082, OBJ_EVENT_PAL_TAG_POKEMON_082},
	{gObjectEventPalette_Pokemon_Species_083, OBJ_EVENT_PAL_TAG_POKEMON_083},
	{gObjectEventPalette_Pokemon_Species_084, OBJ_EVENT_PAL_TAG_POKEMON_084},
	{gObjectEventPalette_Pokemon_Species_085, OBJ_EVENT_PAL_TAG_POKEMON_085},
	{gObjectEventPalette_Pokemon_Species_086, OBJ_EVENT_PAL_TAG_POKEMON_086},
	{gObjectEventPalette_Pokemon_Species_087, OBJ_EVENT_PAL_TAG_POKEMON_087},
	{gObjectEventPalette_Pokemon_Species_088, OBJ_EVENT_PAL_TAG_POKEMON_088},
	{gObjectEventPalette_Pokemon_Species_089, OBJ_EVENT_PAL_TAG_POKEMON_089},
	{gObjectEventPalette_Pokemon_Species_090, OBJ_EVENT_PAL_TAG_POKEMON_090},
	{gObjectEventPalette_Pokemon_Species_091, OBJ_EVENT_PAL_TAG_POKEMON_091},
	{gObjectEventPalette_Pokemon_Species_092, OBJ_EVENT_PAL_TAG_POKEMON_092},
	{gObjectEventPalette_Pokemon_Species_093, OBJ_EVENT_PAL_TAG_POKEMON_093},
	{gObjectEventPalette_Pokemon_Species_094, OBJ_EVENT_PAL_TAG_POKEMON_094},
	{gObjectEventPalette_Pokemon_Species_095, OBJ_EVENT_PAL_TAG_POKEMON_095},
	{gObjectEventPalette_Pokemon_Species_096, OBJ_EVENT_PAL_TAG_POKEMON_096},
	{gObjectEventPalette_Pokemon_Species_097, OBJ_EVENT_PAL_TAG_POKEMON_097},
	{gObjectEventPalette_Pokemon_Species_098, OBJ_EVENT_PAL_TAG_POKEMON_098},
	{gObjectEventPalette_Pokemon_Species_099, OBJ_EVENT_PAL_TAG_POKEMON_099},
	{gObjectEventPalette_Pokemon_Species_100, OBJ_EVENT_PAL_TAG_POKEMON_100},
	{gObjectEventPalette_Pokemon_Species_101, OBJ_EVENT_PAL_TAG_POKEMON_101},
	{gObjectEventPalette_Pokemon_Species_102, OBJ_EVENT_PAL_TAG_POKEMON_102},
	{gObjectEventPalette_Pokemon_Species_103, OBJ_EVENT_PAL_TAG_POKEMON_103},
	{gObjectEventPalette_Pokemon_Species_104, OBJ_EVENT_PAL_TAG_POKEMON_104},
	{gObjectEventPalette_Pokemon_Species_105, OBJ_EVENT_PAL_TAG_POKEMON_105},
	{gObjectEventPalette_Pokemon_Species_106, OBJ_EVENT_PAL_TAG_POKEMON_106},
	{gObjectEventPalette_Pokemon_Species_107, OBJ_EVENT_PAL_TAG_POKEMON_107},
	{gObjectEventPalette_Pokemon_Species_108, OBJ_EVENT_PAL_TAG_POKEMON_108},
	{gObjectEventPalette_Pokemon_Species_109, OBJ_EVENT_PAL_TAG_POKEMON_109},
	{gObjectEventPalette_Pokemon_Species_110, OBJ_EVENT_PAL_TAG_POKEMON_110},
	{gObjectEventPalette_Pokemon_Species_111, OBJ_EVENT_PAL_TAG_POKEMON_111},
	{gObjectEventPalette_Pokemon_Species_112, OBJ_EVENT_PAL_TAG_POKEMON_112},
	{gObjectEventPalette_Pokemon_Species_113, OBJ_EVENT_PAL_TAG_POKEMON_113},
	{gObjectEventPalette_Pokemon_Species_114, OBJ_EVENT_PAL_TAG_POKEMON_114},
	{gObjectEventPalette_Pokemon_Species_115, OBJ_EVENT_PAL_TAG_POKEMON_115},
	{gObjectEventPalette_Pokemon_Species_116, OBJ_EVENT_PAL_TAG_POKEMON_116},
	{gObjectEventPalette_Pokemon_Species_117, OBJ_EVENT_PAL_TAG_POKEMON_117},
	{gObjectEventPalette_Pokemon_Species_118, OBJ_EVENT_PAL_TAG_POKEMON_118},
	{gObjectEventPalette_Pokemon_Species_119, OBJ_EVENT_PAL_TAG_POKEMON_119},
	{gObjectEventPalette_Pokemon_Species_120, OBJ_EVENT_PAL_TAG_POKEMON_120},
	{gObjectEventPalette_Pokemon_Species_121, OBJ_EVENT_PAL_TAG_POKEMON_121},
	{gObjectEventPalette_Pokemon_Species_122, OBJ_EVENT_PAL_TAG_POKEMON_122},
	{gObjectEventPalette_Pokemon_Species_123, OBJ_EVENT_PAL_TAG_POKEMON_123},
	{gObjectEventPalette_Pokemon_Species_124, OBJ_EVENT_PAL_TAG_POKEMON_124},
	{gObjectEventPalette_Pokemon_Species_125, OBJ_EVENT_PAL_TAG_POKEMON_125},
	{gObjectEventPalette_Pokemon_Species_126, OBJ_EVENT_PAL_TAG_POKEMON_126},
	{gObjectEventPalette_Pokemon_Species_127, OBJ_EVENT_PAL_TAG_POKEMON_127},
	{gObjectEventPalette_Pokemon_Species_128, OBJ_EVENT_PAL_TAG_POKEMON_128},
	{gObjectEventPalette_Pokemon_Species_129, OBJ_EVENT_PAL_TAG_POKEMON_129},
	{gObjectEventPalette_Pokemon_Species_130, OBJ_EVENT_PAL_TAG_POKEMON_130},
	{gObjectEventPalette_Pokemon_Species_131, OBJ_EVENT_PAL_TAG_POKEMON_131},
	{gObjectEventPalette_Pokemon_Species_132, OBJ_EVENT_PAL_TAG_POKEMON_132},
	{gObjectEventPalette_Pokemon_Species_133, OBJ_EVENT_PAL_TAG_POKEMON_133},
	{gObjectEventPalette_Pokemon_Species_134, OBJ_EVENT_PAL_TAG_POKEMON_134},
	{gObjectEventPalette_Pokemon_Species_135, OBJ_EVENT_PAL_TAG_POKEMON_135},
	{gObjectEventPalette_Pokemon_Species_136, OBJ_EVENT_PAL_TAG_POKEMON_136},
	{gObjectEventPalette_Pokemon_Species_137, OBJ_EVENT_PAL_TAG_POKEMON_137},
	{gObjectEventPalette_Pokemon_Species_138, OBJ_EVENT_PAL_TAG_POKEMON_138},
	{gObjectEventPalette_Pokemon_Species_139, OBJ_EVENT_PAL_TAG_POKEMON_139},
	{gObjectEventPalette_Pokemon_Species_140, OBJ_EVENT_PAL_TAG_POKEMON_140},
	{gObjectEventPalette_Pokemon_Species_141, OBJ_EVENT_PAL_TAG_POKEMON_141},
	{gObjectEventPalette_Pokemon_Species_142, OBJ_EVENT_PAL_TAG_POKEMON_142},
	{gObjectEventPalette_Pokemon_Species_143, OBJ_EVENT_PAL_TAG_POKEMON_143},
	{gObjectEventPalette_Pokemon_Species_144, OBJ_EVENT_PAL_TAG_POKEMON_144},
	{gObjectEventPalette_Pokemon_Species_145, OBJ_EVENT_PAL_TAG_POKEMON_145},
	{gObjectEventPalette_Pokemon_Species_146, OBJ_EVENT_PAL_TAG_POKEMON_146},
	{gObjectEventPalette_Pokemon_Species_147, OBJ_EVENT_PAL_TAG_POKEMON_147},
	{gObjectEventPalette_Pokemon_Species_148, OBJ_EVENT_PAL_TAG_POKEMON_148},
	{gObjectEventPalette_Pokemon_Species_149, OBJ_EVENT_PAL_TAG_POKEMON_149},
	{gObjectEventPalette_Pokemon_Species_150, OBJ_EVENT_PAL_TAG_POKEMON_150},
	{gObjectEventPalette_Pokemon_Species_151, OBJ_EVENT_PAL_TAG_POKEMON_151},
	{gObjectEventPalette_Pokemon_Species_152, OBJ_EVENT_PAL_TAG_POKEMON_152},
	{gObjectEventPalette_Pokemon_Species_153, OBJ_EVENT_PAL_TAG_POKEMON_153},
	{gObjectEventPalette_Pokemon_Species_154, OBJ_EVENT_PAL_TAG_POKEMON_154},
	{gObjectEventPalette_Pokemon_Species_155, OBJ_EVENT_PAL_TAG_POKEMON_155},
	{gObjectEventPalette_Pokemon_Species_156, OBJ_EVENT_PAL_TAG_POKEMON_156},
	{gObjectEventPalette_Pokemon_Species_157, OBJ_EVENT_PAL_TAG_POKEMON_157},
	{gObjectEventPalette_Pokemon_Species_158, OBJ_EVENT_PAL_TAG_POKEMON_158},
	{gObjectEventPalette_Pokemon_Species_159, OBJ_EVENT_PAL_TAG_POKEMON_159},
	{gObjectEventPalette_Pokemon_Species_160, OBJ_EVENT_PAL_TAG_POKEMON_160},
	{gObjectEventPalette_Pokemon_Species_161, OBJ_EVENT_PAL_TAG_POKEMON_161},
	{gObjectEventPalette_Pokemon_Species_162, OBJ_EVENT_PAL_TAG_POKEMON_162},
	{gObjectEventPalette_Pokemon_Species_163, OBJ_EVENT_PAL_TAG_POKEMON_163},
	{gObjectEventPalette_Pokemon_Species_164, OBJ_EVENT_PAL_TAG_POKEMON_164},
	{gObjectEventPalette_Pokemon_Species_165, OBJ_EVENT_PAL_TAG_POKEMON_165},
	{gObjectEventPalette_Pokemon_Species_166, OBJ_EVENT_PAL_TAG_POKEMON_166},
	{gObjectEventPalette_Pokemon_Species_167, OBJ_EVENT_PAL_TAG_POKEMON_167},
	{gObjectEventPalette_Pokemon_Species_168, OBJ_EVENT_PAL_TAG_POKEMON_168},
	{gObjectEventPalette_Pokemon_Species_169, OBJ_EVENT_PAL_TAG_POKEMON_169},
	{gObjectEventPalette_Pokemon_Species_170, OBJ_EVENT_PAL_TAG_POKEMON_170},
	{gObjectEventPalette_Pokemon_Species_171, OBJ_EVENT_PAL_TAG_POKEMON_171},
	{gObjectEventPalette_Pokemon_Species_172, OBJ_EVENT_PAL_TAG_POKEMON_172},
	{gObjectEventPalette_Pokemon_Species_173, OBJ_EVENT_PAL_TAG_POKEMON_173},
	{gObjectEventPalette_Pokemon_Species_174, OBJ_EVENT_PAL_TAG_POKEMON_174},
	{gObjectEventPalette_Pokemon_Species_175, OBJ_EVENT_PAL_TAG_POKEMON_175},
	{gObjectEventPalette_Pokemon_Species_176, OBJ_EVENT_PAL_TAG_POKEMON_176},
	{gObjectEventPalette_Pokemon_Species_177, OBJ_EVENT_PAL_TAG_POKEMON_177},
	{gObjectEventPalette_Pokemon_Species_178, OBJ_EVENT_PAL_TAG_POKEMON_178},
	{gObjectEventPalette_Pokemon_Species_179, OBJ_EVENT_PAL_TAG_POKEMON_179},
	{gObjectEventPalette_Pokemon_Species_180, OBJ_EVENT_PAL_TAG_POKEMON_180},
	{gObjectEventPalette_Pokemon_Species_181, OBJ_EVENT_PAL_TAG_POKEMON_181},
	{gObjectEventPalette_Pokemon_Species_182, OBJ_EVENT_PAL_TAG_POKEMON_182},
	{gObjectEventPalette_Pokemon_Species_183, OBJ_EVENT_PAL_TAG_POKEMON_183},
	{gObjectEventPalette_Pokemon_Species_184, OBJ_EVENT_PAL_TAG_POKEMON_184},
	{gObjectEventPalette_Pokemon_Species_185, OBJ_EVENT_PAL_TAG_POKEMON_185},
	{gObjectEventPalette_Pokemon_Species_186, OBJ_EVENT_PAL_TAG_POKEMON_186},
	{gObjectEventPalette_Pokemon_Species_187, OBJ_EVENT_PAL_TAG_POKEMON_187},
	{gObjectEventPalette_Pokemon_Species_188, OBJ_EVENT_PAL_TAG_POKEMON_188},
	{gObjectEventPalette_Pokemon_Species_189, OBJ_EVENT_PAL_TAG_POKEMON_189},
	{gObjectEventPalette_Pokemon_Species_190, OBJ_EVENT_PAL_TAG_POKEMON_190},
	{gObjectEventPalette_Pokemon_Species_191, OBJ_EVENT_PAL_TAG_POKEMON_191},
	{gObjectEventPalette_Pokemon_Species_192, OBJ_EVENT_PAL_TAG_POKEMON_192},
	{gObjectEventPalette_Pokemon_Species_193, OBJ_EVENT_PAL_TAG_POKEMON_193},
	{gObjectEventPalette_Pokemon_Species_194, OBJ_EVENT_PAL_TAG_POKEMON_194},
	{gObjectEventPalette_Pokemon_Species_195, OBJ_EVENT_PAL_TAG_POKEMON_195},
	{gObjectEventPalette_Pokemon_Species_196, OBJ_EVENT_PAL_TAG_POKEMON_196},
	{gObjectEventPalette_Pokemon_Species_197, OBJ_EVENT_PAL_TAG_POKEMON_197},
	{gObjectEventPalette_Pokemon_Species_198, OBJ_EVENT_PAL_TAG_POKEMON_198},
	{gObjectEventPalette_Pokemon_Species_199, OBJ_EVENT_PAL_TAG_POKEMON_199},
	{gObjectEventPalette_Pokemon_Species_200, OBJ_EVENT_PAL_TAG_POKEMON_200},
	{gObjectEventPalette_Pokemon_Species_201, OBJ_EVENT_PAL_TAG_POKEMON_201},
	{gObjectEventPalette_Pokemon_Species_202, OBJ_EVENT_PAL_TAG_POKEMON_202},
	{gObjectEventPalette_Pokemon_Species_203, OBJ_EVENT_PAL_TAG_POKEMON_203},
	{gObjectEventPalette_Pokemon_Species_204, OBJ_EVENT_PAL_TAG_POKEMON_204},
	{gObjectEventPalette_Pokemon_Species_205, OBJ_EVENT_PAL_TAG_POKEMON_205},
	{gObjectEventPalette_Pokemon_Species_206, OBJ_EVENT_PAL_TAG_POKEMON_206},
	{gObjectEventPalette_Pokemon_Species_207, OBJ_EVENT_PAL_TAG_POKEMON_207},
	{gObjectEventPalette_Pokemon_Species_208, OBJ_EVENT_PAL_TAG_POKEMON_208},
	{gObjectEventPalette_Pokemon_Species_209, OBJ_EVENT_PAL_TAG_POKEMON_209},
	{gObjectEventPalette_Pokemon_Species_210, OBJ_EVENT_PAL_TAG_POKEMON_210},
	{gObjectEventPalette_Pokemon_Species_211, OBJ_EVENT_PAL_TAG_POKEMON_211},
	{gObjectEventPalette_Pokemon_Species_212, OBJ_EVENT_PAL_TAG_POKEMON_212},
	{gObjectEventPalette_Pokemon_Species_213, OBJ_EVENT_PAL_TAG_POKEMON_213},
	{gObjectEventPalette_Pokemon_Species_214, OBJ_EVENT_PAL_TAG_POKEMON_214},
	{gObjectEventPalette_Pokemon_Species_215, OBJ_EVENT_PAL_TAG_POKEMON_215},
	{gObjectEventPalette_Pokemon_Species_216, OBJ_EVENT_PAL_TAG_POKEMON_216},
	{gObjectEventPalette_Pokemon_Species_217, OBJ_EVENT_PAL_TAG_POKEMON_217},
	{gObjectEventPalette_Pokemon_Species_218, OBJ_EVENT_PAL_TAG_POKEMON_218},
	{gObjectEventPalette_Pokemon_Species_219, OBJ_EVENT_PAL_TAG_POKEMON_219},
	{gObjectEventPalette_Pokemon_Species_220, OBJ_EVENT_PAL_TAG_POKEMON_220},
	{gObjectEventPalette_Pokemon_Species_221, OBJ_EVENT_PAL_TAG_POKEMON_221},
	{gObjectEventPalette_Pokemon_Species_222, OBJ_EVENT_PAL_TAG_POKEMON_222},
	{gObjectEventPalette_Pokemon_Species_223, OBJ_EVENT_PAL_TAG_POKEMON_223},
	{gObjectEventPalette_Pokemon_Species_224, OBJ_EVENT_PAL_TAG_POKEMON_224},
	{gObjectEventPalette_Pokemon_Species_225, OBJ_EVENT_PAL_TAG_POKEMON_225},
	{gObjectEventPalette_Pokemon_Species_226, OBJ_EVENT_PAL_TAG_POKEMON_226},
	{gObjectEventPalette_Pokemon_Species_227, OBJ_EVENT_PAL_TAG_POKEMON_227},
	{gObjectEventPalette_Pokemon_Species_228, OBJ_EVENT_PAL_TAG_POKEMON_228},
	{gObjectEventPalette_Pokemon_Species_229, OBJ_EVENT_PAL_TAG_POKEMON_229},
	{gObjectEventPalette_Pokemon_Species_230, OBJ_EVENT_PAL_TAG_POKEMON_230},
	{gObjectEventPalette_Pokemon_Species_231, OBJ_EVENT_PAL_TAG_POKEMON_231},
	{gObjectEventPalette_Pokemon_Species_232, OBJ_EVENT_PAL_TAG_POKEMON_232},
	{gObjectEventPalette_Pokemon_Species_233, OBJ_EVENT_PAL_TAG_POKEMON_233},
	{gObjectEventPalette_Pokemon_Species_234, OBJ_EVENT_PAL_TAG_POKEMON_234},
	{gObjectEventPalette_Pokemon_Species_235, OBJ_EVENT_PAL_TAG_POKEMON_235},
	{gObjectEventPalette_Pokemon_Species_236, OBJ_EVENT_PAL_TAG_POKEMON_236},
	{gObjectEventPalette_Pokemon_Species_237, OBJ_EVENT_PAL_TAG_POKEMON_237},
	{gObjectEventPalette_Pokemon_Species_238, OBJ_EVENT_PAL_TAG_POKEMON_238},
	{gObjectEventPalette_Pokemon_Species_239, OBJ_EVENT_PAL_TAG_POKEMON_239},
	{gObjectEventPalette_Pokemon_Species_240, OBJ_EVENT_PAL_TAG_POKEMON_240},
	{gObjectEventPalette_Pokemon_Species_241, OBJ_EVENT_PAL_TAG_POKEMON_241},
	{gObjectEventPalette_Pokemon_Species_242, OBJ_EVENT_PAL_TAG_POKEMON_242},
	{gObjectEventPalette_Pokemon_Species_243, OBJ_EVENT_PAL_TAG_POKEMON_243},
	{gObjectEventPalette_Pokemon_Species_244, OBJ_EVENT_PAL_TAG_POKEMON_244},
	{gObjectEventPalette_Pokemon_Species_245, OBJ_EVENT_PAL_TAG_POKEMON_245},
	{gObjectEventPalette_Pokemon_Species_246, OBJ_EVENT_PAL_TAG_POKEMON_246},
	{gObjectEventPalette_Pokemon_Species_247, OBJ_EVENT_PAL_TAG_POKEMON_247},
	{gObjectEventPalette_Pokemon_Species_248, OBJ_EVENT_PAL_TAG_POKEMON_248},
	{gObjectEventPalette_Pokemon_Species_249, OBJ_EVENT_PAL_TAG_POKEMON_249},
	{gObjectEventPalette_Pokemon_Species_250, OBJ_EVENT_PAL_TAG_POKEMON_250},
	{gObjectEventPalette_Pokemon_Species_251, OBJ_EVENT_PAL_TAG_POKEMON_251},
	{gObjectEventPalette_Pokemon_Species_252, OBJ_EVENT_PAL_TAG_POKEMON_252},
	{gObjectEventPalette_Pokemon_Species_253, OBJ_EVENT_PAL_TAG_POKEMON_253},
	{gObjectEventPalette_Pokemon_Species_254, OBJ_EVENT_PAL_TAG_POKEMON_254},
	{gObjectEventPalette_Pokemon_Species_255, OBJ_EVENT_PAL_TAG_POKEMON_255},
	{gObjectEventPalette_Pokemon_Species_256, OBJ_EVENT_PAL_TAG_POKEMON_256},
	{gObjectEventPalette_Pokemon_Species_257, OBJ_EVENT_PAL_TAG_POKEMON_257},
	{gObjectEventPalette_Pokemon_Species_258, OBJ_EVENT_PAL_TAG_POKEMON_258},
	{gObjectEventPalette_Pokemon_Species_259, OBJ_EVENT_PAL_TAG_POKEMON_259},
	{gObjectEventPalette_Pokemon_Species_260, OBJ_EVENT_PAL_TAG_POKEMON_260},
	{gObjectEventPalette_Pokemon_Species_261, OBJ_EVENT_PAL_TAG_POKEMON_261},
	{gObjectEventPalette_Pokemon_Species_262, OBJ_EVENT_PAL_TAG_POKEMON_262},
	{gObjectEventPalette_Pokemon_Species_263, OBJ_EVENT_PAL_TAG_POKEMON_263},
	{gObjectEventPalette_Pokemon_Species_264, OBJ_EVENT_PAL_TAG_POKEMON_264},
	{gObjectEventPalette_Pokemon_Species_265, OBJ_EVENT_PAL_TAG_POKEMON_265},
	{gObjectEventPalette_Pokemon_Species_266, OBJ_EVENT_PAL_TAG_POKEMON_266},
	{gObjectEventPalette_Pokemon_Species_267, OBJ_EVENT_PAL_TAG_POKEMON_267},
	{gObjectEventPalette_Pokemon_Species_268, OBJ_EVENT_PAL_TAG_POKEMON_268},
	{gObjectEventPalette_Pokemon_Species_269, OBJ_EVENT_PAL_TAG_POKEMON_269},
	{gObjectEventPalette_Pokemon_Species_270, OBJ_EVENT_PAL_TAG_POKEMON_270},
	{gObjectEventPalette_Pokemon_Species_271, OBJ_EVENT_PAL_TAG_POKEMON_271},
	{gObjectEventPalette_Pokemon_Species_272, OBJ_EVENT_PAL_TAG_POKEMON_272},
	{gObjectEventPalette_Pokemon_Species_273, OBJ_EVENT_PAL_TAG_POKEMON_273},
	{gObjectEventPalette_Pokemon_Species_274, OBJ_EVENT_PAL_TAG_POKEMON_274},
	{gObjectEventPalette_Pokemon_Species_275, OBJ_EVENT_PAL_TAG_POKEMON_275},
	{gObjectEventPalette_Pokemon_Species_276, OBJ_EVENT_PAL_TAG_POKEMON_276},
	{gObjectEventPalette_Pokemon_Species_277, OBJ_EVENT_PAL_TAG_POKEMON_277},
	{gObjectEventPalette_Pokemon_Species_278, OBJ_EVENT_PAL_TAG_POKEMON_278},
	{gObjectEventPalette_Pokemon_Species_279, OBJ_EVENT_PAL_TAG_POKEMON_279},
	{gObjectEventPalette_Pokemon_Species_280, OBJ_EVENT_PAL_TAG_POKEMON_280},
	{gObjectEventPalette_Pokemon_Species_281, OBJ_EVENT_PAL_TAG_POKEMON_281},
	{gObjectEventPalette_Pokemon_Species_282, OBJ_EVENT_PAL_TAG_POKEMON_282},
	{gObjectEventPalette_Pokemon_Species_283, OBJ_EVENT_PAL_TAG_POKEMON_283},
	{gObjectEventPalette_Pokemon_Species_284, OBJ_EVENT_PAL_TAG_POKEMON_284},
	{gObjectEventPalette_Pokemon_Species_285, OBJ_EVENT_PAL_TAG_POKEMON_285},
	{gObjectEventPalette_Pokemon_Species_286, OBJ_EVENT_PAL_TAG_POKEMON_286},
	{gObjectEventPalette_Pokemon_Species_287, OBJ_EVENT_PAL_TAG_POKEMON_287},
	{gObjectEventPalette_Pokemon_Species_288, OBJ_EVENT_PAL_TAG_POKEMON_288},
	{gObjectEventPalette_Pokemon_Species_289, OBJ_EVENT_PAL_TAG_POKEMON_289},
	{gObjectEventPalette_Pokemon_Species_290, OBJ_EVENT_PAL_TAG_POKEMON_290},
	{gObjectEventPalette_Pokemon_Species_291, OBJ_EVENT_PAL_TAG_POKEMON_291},
	{gObjectEventPalette_Pokemon_Species_292, OBJ_EVENT_PAL_TAG_POKEMON_292},
	{gObjectEventPalette_Pokemon_Species_293, OBJ_EVENT_PAL_TAG_POKEMON_293},
	{gObjectEventPalette_Pokemon_Species_294, OBJ_EVENT_PAL_TAG_POKEMON_294},
	{gObjectEventPalette_Pokemon_Species_295, OBJ_EVENT_PAL_TAG_POKEMON_295},
	{gObjectEventPalette_Pokemon_Species_296, OBJ_EVENT_PAL_TAG_POKEMON_296},
	{gObjectEventPalette_Pokemon_Species_297, OBJ_EVENT_PAL_TAG_POKEMON_297},
	{gObjectEventPalette_Pokemon_Species_298, OBJ_EVENT_PAL_TAG_POKEMON_298},
	{gObjectEventPalette_Pokemon_Species_299, OBJ_EVENT_PAL_TAG_POKEMON_299},
	{gObjectEventPalette_Pokemon_Species_300, OBJ_EVENT_PAL_TAG_POKEMON_300},
	{gObjectEventPalette_Pokemon_Species_301, OBJ_EVENT_PAL_TAG_POKEMON_301},
	{gObjectEventPalette_Pokemon_Species_302, OBJ_EVENT_PAL_TAG_POKEMON_302},
	{gObjectEventPalette_Pokemon_Species_303, OBJ_EVENT_PAL_TAG_POKEMON_303},
	{gObjectEventPalette_Pokemon_Species_304, OBJ_EVENT_PAL_TAG_POKEMON_304},
	{gObjectEventPalette_Pokemon_Species_305, OBJ_EVENT_PAL_TAG_POKEMON_305},
	{gObjectEventPalette_Pokemon_Species_306, OBJ_EVENT_PAL_TAG_POKEMON_306},
	{gObjectEventPalette_Pokemon_Species_307, OBJ_EVENT_PAL_TAG_POKEMON_307},
	{gObjectEventPalette_Pokemon_Species_308, OBJ_EVENT_PAL_TAG_POKEMON_308},
	{gObjectEventPalette_Pokemon_Species_309, OBJ_EVENT_PAL_TAG_POKEMON_309},
	{gObjectEventPalette_Pokemon_Species_310, OBJ_EVENT_PAL_TAG_POKEMON_310},
	{gObjectEventPalette_Pokemon_Species_311, OBJ_EVENT_PAL_TAG_POKEMON_311},
	{gObjectEventPalette_Pokemon_Species_312, OBJ_EVENT_PAL_TAG_POKEMON_312},
	{gObjectEventPalette_Pokemon_Species_313, OBJ_EVENT_PAL_TAG_POKEMON_313},
	{gObjectEventPalette_Pokemon_Species_314, OBJ_EVENT_PAL_TAG_POKEMON_314},
	{gObjectEventPalette_Pokemon_Species_315, OBJ_EVENT_PAL_TAG_POKEMON_315},
	{gObjectEventPalette_Pokemon_Species_316, OBJ_EVENT_PAL_TAG_POKEMON_316},
	{gObjectEventPalette_Pokemon_Species_317, OBJ_EVENT_PAL_TAG_POKEMON_317},
	{gObjectEventPalette_Pokemon_Species_318, OBJ_EVENT_PAL_TAG_POKEMON_318},
	{gObjectEventPalette_Pokemon_Species_319, OBJ_EVENT_PAL_TAG_POKEMON_319},
	{gObjectEventPalette_Pokemon_Species_320, OBJ_EVENT_PAL_TAG_POKEMON_320},
	{gObjectEventPalette_Pokemon_Species_321, OBJ_EVENT_PAL_TAG_POKEMON_321},
	{gObjectEventPalette_Pokemon_Species_322, OBJ_EVENT_PAL_TAG_POKEMON_322},
	{gObjectEventPalette_Pokemon_Species_323, OBJ_EVENT_PAL_TAG_POKEMON_323},
	{gObjectEventPalette_Pokemon_Species_324, OBJ_EVENT_PAL_TAG_POKEMON_324},
	{gObjectEventPalette_Pokemon_Species_325, OBJ_EVENT_PAL_TAG_POKEMON_325},
	{gObjectEventPalette_Pokemon_Species_326, OBJ_EVENT_PAL_TAG_POKEMON_326},
	{gObjectEventPalette_Pokemon_Species_327, OBJ_EVENT_PAL_TAG_POKEMON_327},
	{gObjectEventPalette_Pokemon_Species_328, OBJ_EVENT_PAL_TAG_POKEMON_328},
	{gObjectEventPalette_Pokemon_Species_329, OBJ_EVENT_PAL_TAG_POKEMON_329},
	{gObjectEventPalette_Pokemon_Species_330, OBJ_EVENT_PAL_TAG_POKEMON_330},
	{gObjectEventPalette_Pokemon_Species_331, OBJ_EVENT_PAL_TAG_POKEMON_331},
	{gObjectEventPalette_Pokemon_Species_332, OBJ_EVENT_PAL_TAG_POKEMON_332},
	{gObjectEventPalette_Pokemon_Species_333, OBJ_EVENT_PAL_TAG_POKEMON_333},
	{gObjectEventPalette_Pokemon_Species_334, OBJ_EVENT_PAL_TAG_POKEMON_334},
	{gObjectEventPalette_Pokemon_Species_335, OBJ_EVENT_PAL_TAG_POKEMON_335},
	{gObjectEventPalette_Pokemon_Species_336, OBJ_EVENT_PAL_TAG_POKEMON_336},
	{gObjectEventPalette_Pokemon_Species_337, OBJ_EVENT_PAL_TAG_POKEMON_337},
	{gObjectEventPalette_Pokemon_Species_338, OBJ_EVENT_PAL_TAG_POKEMON_338},
	{gObjectEventPalette_Pokemon_Species_339, OBJ_EVENT_PAL_TAG_POKEMON_339},
	{gObjectEventPalette_Pokemon_Species_340, OBJ_EVENT_PAL_TAG_POKEMON_340},
	{gObjectEventPalette_Pokemon_Species_341, OBJ_EVENT_PAL_TAG_POKEMON_341},
	{gObjectEventPalette_Pokemon_Species_342, OBJ_EVENT_PAL_TAG_POKEMON_342},
	{gObjectEventPalette_Pokemon_Species_343, OBJ_EVENT_PAL_TAG_POKEMON_343},
	{gObjectEventPalette_Pokemon_Species_344, OBJ_EVENT_PAL_TAG_POKEMON_344},
	{gObjectEventPalette_Pokemon_Species_345, OBJ_EVENT_PAL_TAG_POKEMON_345},
	{gObjectEventPalette_Pokemon_Species_346, OBJ_EVENT_PAL_TAG_POKEMON_346},
	{gObjectEventPalette_Pokemon_Species_347, OBJ_EVENT_PAL_TAG_POKEMON_347},
	{gObjectEventPalette_Pokemon_Species_348, OBJ_EVENT_PAL_TAG_POKEMON_348},
	{gObjectEventPalette_Pokemon_Species_349, OBJ_EVENT_PAL_TAG_POKEMON_349},
	{gObjectEventPalette_Pokemon_Species_350, OBJ_EVENT_PAL_TAG_POKEMON_350},
	{gObjectEventPalette_Pokemon_Species_351, OBJ_EVENT_PAL_TAG_POKEMON_351},
	{gObjectEventPalette_Pokemon_Species_352, OBJ_EVENT_PAL_TAG_POKEMON_352},
	{gObjectEventPalette_Pokemon_Species_353, OBJ_EVENT_PAL_TAG_POKEMON_353},
	{gObjectEventPalette_Pokemon_Species_354, OBJ_EVENT_PAL_TAG_POKEMON_354},
	{gObjectEventPalette_Pokemon_Species_355, OBJ_EVENT_PAL_TAG_POKEMON_355},
	{gObjectEventPalette_Pokemon_Species_356, OBJ_EVENT_PAL_TAG_POKEMON_356},
	{gObjectEventPalette_Pokemon_Species_357, OBJ_EVENT_PAL_TAG_POKEMON_357},
	{gObjectEventPalette_Pokemon_Species_358, OBJ_EVENT_PAL_TAG_POKEMON_358},
	{gObjectEventPalette_Pokemon_Species_359, OBJ_EVENT_PAL_TAG_POKEMON_359},
	{gObjectEventPalette_Pokemon_Species_360, OBJ_EVENT_PAL_TAG_POKEMON_360},
	{gObjectEventPalette_Pokemon_Species_361, OBJ_EVENT_PAL_TAG_POKEMON_361},
	{gObjectEventPalette_Pokemon_Species_362, OBJ_EVENT_PAL_TAG_POKEMON_362},
	{gObjectEventPalette_Pokemon_Species_363, OBJ_EVENT_PAL_TAG_POKEMON_363},
	{gObjectEventPalette_Pokemon_Species_364, OBJ_EVENT_PAL_TAG_POKEMON_364},
	{gObjectEventPalette_Pokemon_Species_365, OBJ_EVENT_PAL_TAG_POKEMON_365},
	{gObjectEventPalette_Pokemon_Species_366, OBJ_EVENT_PAL_TAG_POKEMON_366},
	{gObjectEventPalette_Pokemon_Species_367, OBJ_EVENT_PAL_TAG_POKEMON_367},
	{gObjectEventPalette_Pokemon_Species_368, OBJ_EVENT_PAL_TAG_POKEMON_368},
	{gObjectEventPalette_Pokemon_Species_369, OBJ_EVENT_PAL_TAG_POKEMON_369},
	{gObjectEventPalette_Pokemon_Species_370, OBJ_EVENT_PAL_TAG_POKEMON_370},
	{gObjectEventPalette_Pokemon_Species_371, OBJ_EVENT_PAL_TAG_POKEMON_371},
	{gObjectEventPalette_Pokemon_Species_372, OBJ_EVENT_PAL_TAG_POKEMON_372},
	{gObjectEventPalette_Pokemon_Species_373, OBJ_EVENT_PAL_TAG_POKEMON_373},
	{gObjectEventPalette_Pokemon_Species_374, OBJ_EVENT_PAL_TAG_POKEMON_374},
	{gObjectEventPalette_Pokemon_Species_375, OBJ_EVENT_PAL_TAG_POKEMON_375},
	{gObjectEventPalette_Pokemon_Species_376, OBJ_EVENT_PAL_TAG_POKEMON_376},
	{gObjectEventPalette_Pokemon_Species_377, OBJ_EVENT_PAL_TAG_POKEMON_377},
	{gObjectEventPalette_Pokemon_Species_378, OBJ_EVENT_PAL_TAG_POKEMON_378},
	{gObjectEventPalette_Pokemon_Species_379, OBJ_EVENT_PAL_TAG_POKEMON_379},
	{gObjectEventPalette_Pokemon_Species_380, OBJ_EVENT_PAL_TAG_POKEMON_380},
	{gObjectEventPalette_Pokemon_Species_381, OBJ_EVENT_PAL_TAG_POKEMON_381},
	{gObjectEventPalette_Pokemon_Species_382, OBJ_EVENT_PAL_TAG_POKEMON_382},
	{gObjectEventPalette_Pokemon_Species_383, OBJ_EVENT_PAL_TAG_POKEMON_383},
	{gObjectEventPalette_Pokemon_Species_384, OBJ_EVENT_PAL_TAG_POKEMON_384},
	{gObjectEventPalette_Pokemon_Species_385, OBJ_EVENT_PAL_TAG_POKEMON_385},
	{gObjectEventPalette_Pokemon_Species_386, OBJ_EVENT_PAL_TAG_POKEMON_386},
	{gObjectEventPalette_Pokemon_Species_387, OBJ_EVENT_PAL_TAG_POKEMON_387},
	{gObjectEventPalette_Pokemon_Species_388, OBJ_EVENT_PAL_TAG_POKEMON_388},
	{gObjectEventPalette_Pokemon_Species_389, OBJ_EVENT_PAL_TAG_POKEMON_389},
	{gObjectEventPalette_Pokemon_Species_390, OBJ_EVENT_PAL_TAG_POKEMON_390},
	{gObjectEventPalette_Pokemon_Species_391, OBJ_EVENT_PAL_TAG_POKEMON_391},
	{gObjectEventPalette_Pokemon_Species_392, OBJ_EVENT_PAL_TAG_POKEMON_392},
	{gObjectEventPalette_Pokemon_Species_393, OBJ_EVENT_PAL_TAG_POKEMON_393},
	{gObjectEventPalette_Pokemon_Species_394, OBJ_EVENT_PAL_TAG_POKEMON_394},
	{gObjectEventPalette_Pokemon_Species_395, OBJ_EVENT_PAL_TAG_POKEMON_395},
	{gObjectEventPalette_Pokemon_Species_396, OBJ_EVENT_PAL_TAG_POKEMON_396},
	{gObjectEventPalette_Pokemon_Species_397, OBJ_EVENT_PAL_TAG_POKEMON_397},
	{gObjectEventPalette_Pokemon_Species_398, OBJ_EVENT_PAL_TAG_POKEMON_398},
	{gObjectEventPalette_Pokemon_Species_399, OBJ_EVENT_PAL_TAG_POKEMON_399},
	{gObjectEventPalette_Pokemon_Species_400, OBJ_EVENT_PAL_TAG_POKEMON_400},
	{gObjectEventPalette_Pokemon_Species_401, OBJ_EVENT_PAL_TAG_POKEMON_401},
	{gObjectEventPalette_Pokemon_Species_402, OBJ_EVENT_PAL_TAG_POKEMON_402},
	{gObjectEventPalette_Pokemon_Species_403, OBJ_EVENT_PAL_TAG_POKEMON_403},
	{gObjectEventPalette_Pokemon_Species_404, OBJ_EVENT_PAL_TAG_POKEMON_404},
	{gObjectEventPalette_Pokemon_Species_405, OBJ_EVENT_PAL_TAG_POKEMON_405},
	{gObjectEventPalette_Pokemon_Species_406, OBJ_EVENT_PAL_TAG_POKEMON_406},
	{gObjectEventPalette_Pokemon_Species_407, OBJ_EVENT_PAL_TAG_POKEMON_407},
	{gObjectEventPalette_Pokemon_Species_408, OBJ_EVENT_PAL_TAG_POKEMON_408},
	{gObjectEventPalette_Pokemon_Species_409, OBJ_EVENT_PAL_TAG_POKEMON_409},
	{gObjectEventPalette_Pokemon_Species_410, OBJ_EVENT_PAL_TAG_POKEMON_410},
	{gObjectEventPalette_Pokemon_Species_411, OBJ_EVENT_PAL_TAG_POKEMON_411},
	{gObjectEventPalette_Pokemon_Species_412, OBJ_EVENT_PAL_TAG_POKEMON_412},
	{gObjectEventPalette_Pokemon_Species_413, OBJ_EVENT_PAL_TAG_POKEMON_413},
	{gObjectEventPalette_Pokemon_Species_414, OBJ_EVENT_PAL_TAG_POKEMON_414},
	{gObjectEventPalette_Pokemon_Species_415, OBJ_EVENT_PAL_TAG_POKEMON_415},
	{gObjectEventPalette_Pokemon_Species_416, OBJ_EVENT_PAL_TAG_POKEMON_416},
	{gObjectEventPalette_Pokemon_Species_417, OBJ_EVENT_PAL_TAG_POKEMON_417},
	{gObjectEventPalette_Pokemon_Species_418, OBJ_EVENT_PAL_TAG_POKEMON_418},
	{gObjectEventPalette_Pokemon_Species_419, OBJ_EVENT_PAL_TAG_POKEMON_419},
	{gObjectEventPalette_Pokemon_Species_420, OBJ_EVENT_PAL_TAG_POKEMON_420},
	{gObjectEventPalette_Pokemon_Species_421, OBJ_EVENT_PAL_TAG_POKEMON_421},
	{gObjectEventPalette_Pokemon_Species_422, OBJ_EVENT_PAL_TAG_POKEMON_422},
	{gObjectEventPalette_Pokemon_Species_423, OBJ_EVENT_PAL_TAG_POKEMON_423},
	{gObjectEventPalette_Pokemon_Species_424, OBJ_EVENT_PAL_TAG_POKEMON_424},
	{gObjectEventPalette_Pokemon_Species_425, OBJ_EVENT_PAL_TAG_POKEMON_425},
	{gObjectEventPalette_Pokemon_Species_426, OBJ_EVENT_PAL_TAG_POKEMON_426},
	{gObjectEventPalette_Pokemon_Species_427, OBJ_EVENT_PAL_TAG_POKEMON_427},
	{gObjectEventPalette_Pokemon_Species_428, OBJ_EVENT_PAL_TAG_POKEMON_428},
	{gObjectEventPalette_Pokemon_Species_429, OBJ_EVENT_PAL_TAG_POKEMON_429},
	{gObjectEventPalette_Pokemon_Species_430, OBJ_EVENT_PAL_TAG_POKEMON_430},
	{gObjectEventPalette_Pokemon_Species_431, OBJ_EVENT_PAL_TAG_POKEMON_431},
	{gObjectEventPalette_Pokemon_Species_432, OBJ_EVENT_PAL_TAG_POKEMON_432},
	{gObjectEventPalette_Pokemon_Species_433, OBJ_EVENT_PAL_TAG_POKEMON_433},
	{gObjectEventPalette_Pokemon_Species_434, OBJ_EVENT_PAL_TAG_POKEMON_434},
	{gObjectEventPalette_Pokemon_Species_435, OBJ_EVENT_PAL_TAG_POKEMON_435},
	{gObjectEventPalette_Pokemon_Species_436, OBJ_EVENT_PAL_TAG_POKEMON_436},
	{gObjectEventPalette_Pokemon_Species_437, OBJ_EVENT_PAL_TAG_POKEMON_437},
	{gObjectEventPalette_Pokemon_Species_438, OBJ_EVENT_PAL_TAG_POKEMON_438},
	{gObjectEventPalette_Pokemon_Species_439, OBJ_EVENT_PAL_TAG_POKEMON_439},
	{gObjectEventPalette_Pokemon_Species_440, OBJ_EVENT_PAL_TAG_POKEMON_440},
	{gObjectEventPalette_Pokemon_Species_441, OBJ_EVENT_PAL_TAG_POKEMON_441},
	{gObjectEventPalette_Pokemon_Species_442, OBJ_EVENT_PAL_TAG_POKEMON_442},
	{gObjectEventPalette_Pokemon_Species_443, OBJ_EVENT_PAL_TAG_POKEMON_443},
	{gObjectEventPalette_Pokemon_Species_444, OBJ_EVENT_PAL_TAG_POKEMON_444},
	{gObjectEventPalette_Pokemon_Species_445, OBJ_EVENT_PAL_TAG_POKEMON_445},
	{gObjectEventPalette_Pokemon_Species_446, OBJ_EVENT_PAL_TAG_POKEMON_446},
	{gObjectEventPalette_Pokemon_Species_447, OBJ_EVENT_PAL_TAG_POKEMON_447},
	{gObjectEventPalette_Pokemon_Species_448, OBJ_EVENT_PAL_TAG_POKEMON_448},
	{gObjectEventPalette_Pokemon_Species_449, OBJ_EVENT_PAL_TAG_POKEMON_449},
	{gObjectEventPalette_Pokemon_Species_450, OBJ_EVENT_PAL_TAG_POKEMON_450},
	{gObjectEventPalette_Pokemon_Species_451, OBJ_EVENT_PAL_TAG_POKEMON_451},
	{gObjectEventPalette_Pokemon_Species_452, OBJ_EVENT_PAL_TAG_POKEMON_452},
	{gObjectEventPalette_Pokemon_Species_453, OBJ_EVENT_PAL_TAG_POKEMON_453},
	{gObjectEventPalette_Pokemon_Species_454, OBJ_EVENT_PAL_TAG_POKEMON_454},
	{gObjectEventPalette_Pokemon_Species_455, OBJ_EVENT_PAL_TAG_POKEMON_455},
	{gObjectEventPalette_Pokemon_Species_456, OBJ_EVENT_PAL_TAG_POKEMON_456},
	{gObjectEventPalette_Pokemon_Species_457, OBJ_EVENT_PAL_TAG_POKEMON_457},
	{gObjectEventPalette_Pokemon_Species_458, OBJ_EVENT_PAL_TAG_POKEMON_458},
	{gObjectEventPalette_Pokemon_Species_459, OBJ_EVENT_PAL_TAG_POKEMON_459},
	{gObjectEventPalette_Pokemon_Species_460, OBJ_EVENT_PAL_TAG_POKEMON_460},
	{gObjectEventPalette_Pokemon_Species_461, OBJ_EVENT_PAL_TAG_POKEMON_461},
	{gObjectEventPalette_Pokemon_Species_462, OBJ_EVENT_PAL_TAG_POKEMON_462},
	{gObjectEventPalette_Pokemon_Species_463, OBJ_EVENT_PAL_TAG_POKEMON_463},
	{gObjectEventPalette_Pokemon_Species_464, OBJ_EVENT_PAL_TAG_POKEMON_464},
	{gObjectEventPalette_Pokemon_Species_465, OBJ_EVENT_PAL_TAG_POKEMON_465},
	{gObjectEventPalette_Pokemon_Species_466, OBJ_EVENT_PAL_TAG_POKEMON_466},
	{gObjectEventPalette_Pokemon_Species_467, OBJ_EVENT_PAL_TAG_POKEMON_467},
	{gObjectEventPalette_Pokemon_Species_468, OBJ_EVENT_PAL_TAG_POKEMON_468},
	{gObjectEventPalette_Pokemon_Species_469, OBJ_EVENT_PAL_TAG_POKEMON_469},
	{gObjectEventPalette_Pokemon_Species_470, OBJ_EVENT_PAL_TAG_POKEMON_470},
	{gObjectEventPalette_Pokemon_Species_471, OBJ_EVENT_PAL_TAG_POKEMON_471},
	{gObjectEventPalette_Pokemon_Species_472, OBJ_EVENT_PAL_TAG_POKEMON_472},
	{gObjectEventPalette_Pokemon_Species_473, OBJ_EVENT_PAL_TAG_POKEMON_473},
	{gObjectEventPalette_Pokemon_Species_474, OBJ_EVENT_PAL_TAG_POKEMON_474},
	{gObjectEventPalette_Pokemon_Species_475, OBJ_EVENT_PAL_TAG_POKEMON_475},
	{gObjectEventPalette_Pokemon_Species_476, OBJ_EVENT_PAL_TAG_POKEMON_476},
	{gObjectEventPalette_Pokemon_Species_477, OBJ_EVENT_PAL_TAG_POKEMON_477},
	{gObjectEventPalette_Pokemon_Species_478, OBJ_EVENT_PAL_TAG_POKEMON_478},
	{gObjectEventPalette_Pokemon_Species_479, OBJ_EVENT_PAL_TAG_POKEMON_479},
	{gObjectEventPalette_Pokemon_Species_480, OBJ_EVENT_PAL_TAG_POKEMON_480},
	{gObjectEventPalette_Pokemon_Species_481, OBJ_EVENT_PAL_TAG_POKEMON_481},
	{gObjectEventPalette_Pokemon_Species_482, OBJ_EVENT_PAL_TAG_POKEMON_482},
	{gObjectEventPalette_Pokemon_Species_483, OBJ_EVENT_PAL_TAG_POKEMON_483},
	{gObjectEventPalette_Pokemon_Species_484, OBJ_EVENT_PAL_TAG_POKEMON_484},
	{gObjectEventPalette_Pokemon_Species_485, OBJ_EVENT_PAL_TAG_POKEMON_485},
	{gObjectEventPalette_Pokemon_Species_486, OBJ_EVENT_PAL_TAG_POKEMON_486},
	{gObjectEventPalette_Pokemon_Species_487, OBJ_EVENT_PAL_TAG_POKEMON_487},
	{gObjectEventPalette_Pokemon_Species_488, OBJ_EVENT_PAL_TAG_POKEMON_488},
	{gObjectEventPalette_Pokemon_Species_489, OBJ_EVENT_PAL_TAG_POKEMON_489},
	{gObjectEventPalette_Pokemon_Species_490, OBJ_EVENT_PAL_TAG_POKEMON_490},
	{gObjectEventPalette_Pokemon_Species_491, OBJ_EVENT_PAL_TAG_POKEMON_491},
	{gObjectEventPalette_Pokemon_Species_492, OBJ_EVENT_PAL_TAG_POKEMON_492},
	{gObjectEventPalette_Pokemon_Species_493, OBJ_EVENT_PAL_TAG_POKEMON_493},
	{gObjectEventPalette_Pokemon_Species_494, OBJ_EVENT_PAL_TAG_POKEMON_494},
	{gObjectEventPalette_Pokemon_Species_495, OBJ_EVENT_PAL_TAG_POKEMON_495},
	{gObjectEventPalette_Pokemon_Species_496, OBJ_EVENT_PAL_TAG_POKEMON_496},
	{gObjectEventPalette_Pokemon_Species_497, OBJ_EVENT_PAL_TAG_POKEMON_497},
	{gObjectEventPalette_Pokemon_Species_498, OBJ_EVENT_PAL_TAG_POKEMON_498},
	{gObjectEventPalette_Pokemon_Species_499, OBJ_EVENT_PAL_TAG_POKEMON_499},
	{gObjectEventPalette_Pokemon_Species_500, OBJ_EVENT_PAL_TAG_POKEMON_500},
	{gObjectEventPalette_Pokemon_Species_501, OBJ_EVENT_PAL_TAG_POKEMON_501},
	{gObjectEventPalette_Pokemon_Species_502, OBJ_EVENT_PAL_TAG_POKEMON_502},
	{gObjectEventPalette_Pokemon_Species_503, OBJ_EVENT_PAL_TAG_POKEMON_503},
	{gObjectEventPalette_Pokemon_Species_504, OBJ_EVENT_PAL_TAG_POKEMON_504},
	{gObjectEventPalette_Pokemon_Species_505, OBJ_EVENT_PAL_TAG_POKEMON_505},
	{gObjectEventPalette_Pokemon_Species_506, OBJ_EVENT_PAL_TAG_POKEMON_506},
	{gObjectEventPalette_Pokemon_Species_507, OBJ_EVENT_PAL_TAG_POKEMON_507},
	{gObjectEventPalette_Pokemon_Species_508, OBJ_EVENT_PAL_TAG_POKEMON_508},
	{gObjectEventPalette_Pokemon_Species_509, OBJ_EVENT_PAL_TAG_POKEMON_509},
	{gObjectEventPalette_Pokemon_Species_510, OBJ_EVENT_PAL_TAG_POKEMON_510},
	{gObjectEventPalette_Pokemon_Species_511, OBJ_EVENT_PAL_TAG_POKEMON_511},
	{gObjectEventPalette_Pokemon_Species_512, OBJ_EVENT_PAL_TAG_POKEMON_512},
	{gObjectEventPalette_Pokemon_Species_513, OBJ_EVENT_PAL_TAG_POKEMON_513},
	{gObjectEventPalette_Pokemon_Species_514, OBJ_EVENT_PAL_TAG_POKEMON_514},
	{gObjectEventPalette_Pokemon_Species_515, OBJ_EVENT_PAL_TAG_POKEMON_515},
	{gObjectEventPalette_Pokemon_Species_516, OBJ_EVENT_PAL_TAG_POKEMON_516},
	{gObjectEventPalette_Pokemon_Species_517, OBJ_EVENT_PAL_TAG_POKEMON_517},
	{gObjectEventPalette_Pokemon_Species_518, OBJ_EVENT_PAL_TAG_POKEMON_518},
	{gObjectEventPalette_Pokemon_Species_519, OBJ_EVENT_PAL_TAG_POKEMON_519},
	{gObjectEventPalette_Pokemon_Species_520, OBJ_EVENT_PAL_TAG_POKEMON_520},
	{gObjectEventPalette_Pokemon_Species_521, OBJ_EVENT_PAL_TAG_POKEMON_521},
	{gObjectEventPalette_Pokemon_Species_522, OBJ_EVENT_PAL_TAG_POKEMON_522},
	{gObjectEventPalette_Pokemon_Species_523, OBJ_EVENT_PAL_TAG_POKEMON_523},
	{gObjectEventPalette_Pokemon_Species_524, OBJ_EVENT_PAL_TAG_POKEMON_524},
	{gObjectEventPalette_Pokemon_Species_525, OBJ_EVENT_PAL_TAG_POKEMON_525},
	{gObjectEventPalette_Pokemon_Species_526, OBJ_EVENT_PAL_TAG_POKEMON_526},
	{gObjectEventPalette_Pokemon_Species_527, OBJ_EVENT_PAL_TAG_POKEMON_527},
	{gObjectEventPalette_Pokemon_Species_528, OBJ_EVENT_PAL_TAG_POKEMON_528},
	{gObjectEventPalette_Pokemon_Species_529, OBJ_EVENT_PAL_TAG_POKEMON_529},
	{gObjectEventPalette_Pokemon_Species_530, OBJ_EVENT_PAL_TAG_POKEMON_530},
	{gObjectEventPalette_Pokemon_Species_531, OBJ_EVENT_PAL_TAG_POKEMON_531},
	{gObjectEventPalette_Pokemon_Species_532, OBJ_EVENT_PAL_TAG_POKEMON_532},
	{gObjectEventPalette_Pokemon_Species_533, OBJ_EVENT_PAL_TAG_POKEMON_533},
	{gObjectEventPalette_Pokemon_Species_534, OBJ_EVENT_PAL_TAG_POKEMON_534},
	{gObjectEventPalette_Pokemon_Species_535, OBJ_EVENT_PAL_TAG_POKEMON_535},
	{gObjectEventPalette_Pokemon_Species_536, OBJ_EVENT_PAL_TAG_POKEMON_536},
	{gObjectEventPalette_Pokemon_Species_537, OBJ_EVENT_PAL_TAG_POKEMON_537},
	{gObjectEventPalette_Pokemon_Species_538, OBJ_EVENT_PAL_TAG_POKEMON_538},
	{gObjectEventPalette_Pokemon_Species_539, OBJ_EVENT_PAL_TAG_POKEMON_539},
	{gObjectEventPalette_Pokemon_Species_540, OBJ_EVENT_PAL_TAG_POKEMON_540},
	{gObjectEventPalette_Pokemon_Species_541, OBJ_EVENT_PAL_TAG_POKEMON_541},
	{gObjectEventPalette_Pokemon_Species_542, OBJ_EVENT_PAL_TAG_POKEMON_542},
	{gObjectEventPalette_Pokemon_Species_543, OBJ_EVENT_PAL_TAG_POKEMON_543},
	{gObjectEventPalette_Pokemon_Species_544, OBJ_EVENT_PAL_TAG_POKEMON_544},
	{gObjectEventPalette_Pokemon_Species_545, OBJ_EVENT_PAL_TAG_POKEMON_545},
	{gObjectEventPalette_Pokemon_Species_546, OBJ_EVENT_PAL_TAG_POKEMON_546},
	{gObjectEventPalette_Pokemon_Species_547, OBJ_EVENT_PAL_TAG_POKEMON_547},
	{gObjectEventPalette_Pokemon_Species_548, OBJ_EVENT_PAL_TAG_POKEMON_548},
	{gObjectEventPalette_Pokemon_Species_549, OBJ_EVENT_PAL_TAG_POKEMON_549},
	{gObjectEventPalette_Pokemon_Species_550, OBJ_EVENT_PAL_TAG_POKEMON_550},
	{gObjectEventPalette_Pokemon_Species_551, OBJ_EVENT_PAL_TAG_POKEMON_551},
	{gObjectEventPalette_Pokemon_Species_552, OBJ_EVENT_PAL_TAG_POKEMON_552},
	{gObjectEventPalette_Pokemon_Species_553, OBJ_EVENT_PAL_TAG_POKEMON_553},
	{gObjectEventPalette_Pokemon_Species_554, OBJ_EVENT_PAL_TAG_POKEMON_554},
	{gObjectEventPalette_Pokemon_Species_555, OBJ_EVENT_PAL_TAG_POKEMON_555},
	{gObjectEventPalette_Pokemon_Species_556, OBJ_EVENT_PAL_TAG_POKEMON_556},
	{gObjectEventPalette_Pokemon_Species_557, OBJ_EVENT_PAL_TAG_POKEMON_557},
	{gObjectEventPalette_Pokemon_Species_558, OBJ_EVENT_PAL_TAG_POKEMON_558},
	{gObjectEventPalette_Pokemon_Species_559, OBJ_EVENT_PAL_TAG_POKEMON_559},
	{gObjectEventPalette_Pokemon_Species_560, OBJ_EVENT_PAL_TAG_POKEMON_560},
	{gObjectEventPalette_Pokemon_Species_561, OBJ_EVENT_PAL_TAG_POKEMON_561},
	{gObjectEventPalette_Pokemon_Species_562, OBJ_EVENT_PAL_TAG_POKEMON_562},
	{gObjectEventPalette_Pokemon_Species_563, OBJ_EVENT_PAL_TAG_POKEMON_563},
	{gObjectEventPalette_Pokemon_Species_564, OBJ_EVENT_PAL_TAG_POKEMON_564},
	{gObjectEventPalette_Pokemon_Species_565, OBJ_EVENT_PAL_TAG_POKEMON_565},
	{gObjectEventPalette_Pokemon_Species_566, OBJ_EVENT_PAL_TAG_POKEMON_566},
	{gObjectEventPalette_Pokemon_Species_567, OBJ_EVENT_PAL_TAG_POKEMON_567},
	{gObjectEventPalette_Pokemon_Species_568, OBJ_EVENT_PAL_TAG_POKEMON_568},
	{gObjectEventPalette_Pokemon_Species_569, OBJ_EVENT_PAL_TAG_POKEMON_569},
	{gObjectEventPalette_Pokemon_Species_570, OBJ_EVENT_PAL_TAG_POKEMON_570},
	{gObjectEventPalette_Pokemon_Species_571, OBJ_EVENT_PAL_TAG_POKEMON_571},
	{gObjectEventPalette_Pokemon_Species_572, OBJ_EVENT_PAL_TAG_POKEMON_572},
	{gObjectEventPalette_Pokemon_Species_573, OBJ_EVENT_PAL_TAG_POKEMON_573},
	{gObjectEventPalette_Pokemon_Species_574, OBJ_EVENT_PAL_TAG_POKEMON_574},
	{gObjectEventPalette_Pokemon_Species_575, OBJ_EVENT_PAL_TAG_POKEMON_575},
	{gObjectEventPalette_Pokemon_Species_576, OBJ_EVENT_PAL_TAG_POKEMON_576},
	{gObjectEventPalette_Pokemon_Species_577, OBJ_EVENT_PAL_TAG_POKEMON_577},
	{gObjectEventPalette_Pokemon_Species_578, OBJ_EVENT_PAL_TAG_POKEMON_578},
	{gObjectEventPalette_Pokemon_Species_579, OBJ_EVENT_PAL_TAG_POKEMON_579},
	{gObjectEventPalette_Pokemon_Species_580, OBJ_EVENT_PAL_TAG_POKEMON_580},
	{gObjectEventPalette_Pokemon_Species_581, OBJ_EVENT_PAL_TAG_POKEMON_581},
	{gObjectEventPalette_Pokemon_Species_582, OBJ_EVENT_PAL_TAG_POKEMON_582},
	{gObjectEventPalette_Pokemon_Species_583, OBJ_EVENT_PAL_TAG_POKEMON_583},
	{gObjectEventPalette_Pokemon_Species_584, OBJ_EVENT_PAL_TAG_POKEMON_584},
	{gObjectEventPalette_Pokemon_Species_585, OBJ_EVENT_PAL_TAG_POKEMON_585},
	{gObjectEventPalette_Pokemon_Species_586, OBJ_EVENT_PAL_TAG_POKEMON_586},
	{gObjectEventPalette_Pokemon_Species_587, OBJ_EVENT_PAL_TAG_POKEMON_587},
	{gObjectEventPalette_Pokemon_Species_588, OBJ_EVENT_PAL_TAG_POKEMON_588},
	{gObjectEventPalette_Pokemon_Species_589, OBJ_EVENT_PAL_TAG_POKEMON_589},
	{gObjectEventPalette_Pokemon_Species_590, OBJ_EVENT_PAL_TAG_POKEMON_590},
	{gObjectEventPalette_Pokemon_Species_591, OBJ_EVENT_PAL_TAG_POKEMON_591},
	{gObjectEventPalette_Pokemon_Species_592, OBJ_EVENT_PAL_TAG_POKEMON_592},
	{gObjectEventPalette_Pokemon_Species_593, OBJ_EVENT_PAL_TAG_POKEMON_593},
	{gObjectEventPalette_Pokemon_Species_594, OBJ_EVENT_PAL_TAG_POKEMON_594},
	{gObjectEventPalette_Pokemon_Species_595, OBJ_EVENT_PAL_TAG_POKEMON_595},
	{gObjectEventPalette_Pokemon_Species_596, OBJ_EVENT_PAL_TAG_POKEMON_596},
	{gObjectEventPalette_Pokemon_Species_597, OBJ_EVENT_PAL_TAG_POKEMON_597},
	{gObjectEventPalette_Pokemon_Species_598, OBJ_EVENT_PAL_TAG_POKEMON_598},
	{gObjectEventPalette_Pokemon_Species_599, OBJ_EVENT_PAL_TAG_POKEMON_599},
	{gObjectEventPalette_Pokemon_Species_600, OBJ_EVENT_PAL_TAG_POKEMON_600},
	{gObjectEventPalette_Pokemon_Species_601, OBJ_EVENT_PAL_TAG_POKEMON_601},
	{gObjectEventPalette_Pokemon_Species_602, OBJ_EVENT_PAL_TAG_POKEMON_602},
	{gObjectEventPalette_Pokemon_Species_603, OBJ_EVENT_PAL_TAG_POKEMON_603},
	{gObjectEventPalette_Pokemon_Species_604, OBJ_EVENT_PAL_TAG_POKEMON_604},
	{gObjectEventPalette_Pokemon_Species_605, OBJ_EVENT_PAL_TAG_POKEMON_605},
	{gObjectEventPalette_Pokemon_Species_606, OBJ_EVENT_PAL_TAG_POKEMON_606},
	{gObjectEventPalette_Pokemon_Species_607, OBJ_EVENT_PAL_TAG_POKEMON_607},
	{gObjectEventPalette_Pokemon_Species_608, OBJ_EVENT_PAL_TAG_POKEMON_608},
	{gObjectEventPalette_Pokemon_Species_609, OBJ_EVENT_PAL_TAG_POKEMON_609},
	{gObjectEventPalette_Pokemon_Species_610, OBJ_EVENT_PAL_TAG_POKEMON_610},
	{gObjectEventPalette_Pokemon_Species_611, OBJ_EVENT_PAL_TAG_POKEMON_611},
	{gObjectEventPalette_Pokemon_Species_612, OBJ_EVENT_PAL_TAG_POKEMON_612},
	{gObjectEventPalette_Pokemon_Species_613, OBJ_EVENT_PAL_TAG_POKEMON_613},
	{gObjectEventPalette_Pokemon_Species_614, OBJ_EVENT_PAL_TAG_POKEMON_614},
	{gObjectEventPalette_Pokemon_Species_615, OBJ_EVENT_PAL_TAG_POKEMON_615},
	{gObjectEventPalette_Pokemon_Species_616, OBJ_EVENT_PAL_TAG_POKEMON_616},
	{gObjectEventPalette_Pokemon_Species_617, OBJ_EVENT_PAL_TAG_POKEMON_617},
	{gObjectEventPalette_Pokemon_Species_618, OBJ_EVENT_PAL_TAG_POKEMON_618},
	{gObjectEventPalette_Pokemon_Species_619, OBJ_EVENT_PAL_TAG_POKEMON_619},
	{gObjectEventPalette_Pokemon_Species_620, OBJ_EVENT_PAL_TAG_POKEMON_620},
	{gObjectEventPalette_Pokemon_Species_621, OBJ_EVENT_PAL_TAG_POKEMON_621},
	{gObjectEventPalette_Pokemon_Species_622, OBJ_EVENT_PAL_TAG_POKEMON_622},
	{gObjectEventPalette_Pokemon_Species_623, OBJ_EVENT_PAL_TAG_POKEMON_623},
	{gObjectEventPalette_Pokemon_Species_624, OBJ_EVENT_PAL_TAG_POKEMON_624},
	{gObjectEventPalette_Pokemon_Species_625, OBJ_EVENT_PAL_TAG_POKEMON_625},
	{gObjectEventPalette_Pokemon_Species_626, OBJ_EVENT_PAL_TAG_POKEMON_626},
	{gObjectEventPalette_Pokemon_Species_627, OBJ_EVENT_PAL_TAG_POKEMON_627},
	{gObjectEventPalette_Pokemon_Species_628, OBJ_EVENT_PAL_TAG_POKEMON_628},
	{gObjectEventPalette_Pokemon_Species_629, OBJ_EVENT_PAL_TAG_POKEMON_629},
	{gObjectEventPalette_Pokemon_Species_630, OBJ_EVENT_PAL_TAG_POKEMON_630},
	{gObjectEventPalette_Pokemon_Species_631, OBJ_EVENT_PAL_TAG_POKEMON_631},
	{gObjectEventPalette_Pokemon_Species_632, OBJ_EVENT_PAL_TAG_POKEMON_632},
	{gObjectEventPalette_Pokemon_Species_633, OBJ_EVENT_PAL_TAG_POKEMON_633},
	{gObjectEventPalette_Pokemon_Species_634, OBJ_EVENT_PAL_TAG_POKEMON_634},
	{gObjectEventPalette_Pokemon_Species_635, OBJ_EVENT_PAL_TAG_POKEMON_635},
	{gObjectEventPalette_Pokemon_Species_636, OBJ_EVENT_PAL_TAG_POKEMON_636},
	{gObjectEventPalette_Pokemon_Species_637, OBJ_EVENT_PAL_TAG_POKEMON_637},
	{gObjectEventPalette_Pokemon_Species_638, OBJ_EVENT_PAL_TAG_POKEMON_638},
	{gObjectEventPalette_Pokemon_Species_639, OBJ_EVENT_PAL_TAG_POKEMON_639},
	{gObjectEventPalette_Pokemon_Species_640, OBJ_EVENT_PAL_TAG_POKEMON_640},
	{gObjectEventPalette_Pokemon_Species_641, OBJ_EVENT_PAL_TAG_POKEMON_641},
	{gObjectEventPalette_Pokemon_Species_642, OBJ_EVENT_PAL_TAG_POKEMON_642},
	{gObjectEventPalette_Pokemon_Species_643, OBJ_EVENT_PAL_TAG_POKEMON_643},
	{gObjectEventPalette_Pokemon_Species_644, OBJ_EVENT_PAL_TAG_POKEMON_644},
	{gObjectEventPalette_Pokemon_Species_645, OBJ_EVENT_PAL_TAG_POKEMON_645},
	{gObjectEventPalette_Pokemon_Species_646, OBJ_EVENT_PAL_TAG_POKEMON_646},
	{gObjectEventPalette_Pokemon_Species_647, OBJ_EVENT_PAL_TAG_POKEMON_647},
	{gObjectEventPalette_Pokemon_Species_648, OBJ_EVENT_PAL_TAG_POKEMON_648},
	{gObjectEventPalette_Pokemon_Species_649, OBJ_EVENT_PAL_TAG_POKEMON_649},
	{gObjectEventPalette_Pokemon_Species_650, OBJ_EVENT_PAL_TAG_POKEMON_650},
	{gObjectEventPalette_Pokemon_Species_651, OBJ_EVENT_PAL_TAG_POKEMON_651},
	{gObjectEventPalette_Pokemon_Species_652, OBJ_EVENT_PAL_TAG_POKEMON_652},
	{gObjectEventPalette_Pokemon_Species_653, OBJ_EVENT_PAL_TAG_POKEMON_653},
	{gObjectEventPalette_Pokemon_Species_654, OBJ_EVENT_PAL_TAG_POKEMON_654},
	{gObjectEventPalette_Pokemon_Species_655, OBJ_EVENT_PAL_TAG_POKEMON_655},
	{gObjectEventPalette_Pokemon_Species_656, OBJ_EVENT_PAL_TAG_POKEMON_656},
	{gObjectEventPalette_Pokemon_Species_657, OBJ_EVENT_PAL_TAG_POKEMON_657},
	{gObjectEventPalette_Pokemon_Species_658, OBJ_EVENT_PAL_TAG_POKEMON_658},
	{gObjectEventPalette_Pokemon_Species_659, OBJ_EVENT_PAL_TAG_POKEMON_659},
	{gObjectEventPalette_Pokemon_Species_660, OBJ_EVENT_PAL_TAG_POKEMON_660},
	{gObjectEventPalette_Pokemon_Species_661, OBJ_EVENT_PAL_TAG_POKEMON_661},
	{gObjectEventPalette_Pokemon_Species_662, OBJ_EVENT_PAL_TAG_POKEMON_662},
	{gObjectEventPalette_Pokemon_Species_663, OBJ_EVENT_PAL_TAG_POKEMON_663},
	{gObjectEventPalette_Pokemon_Species_664, OBJ_EVENT_PAL_TAG_POKEMON_664},
	{gObjectEventPalette_Pokemon_Species_665, OBJ_EVENT_PAL_TAG_POKEMON_665},
	{gObjectEventPalette_Pokemon_Species_666, OBJ_EVENT_PAL_TAG_POKEMON_666},
	{gObjectEventPalette_Pokemon_Species_667, OBJ_EVENT_PAL_TAG_POKEMON_667},
	{gObjectEventPalette_Pokemon_Species_668, OBJ_EVENT_PAL_TAG_POKEMON_668},
	{gObjectEventPalette_Pokemon_Species_669, OBJ_EVENT_PAL_TAG_POKEMON_669},
	{gObjectEventPalette_Pokemon_Species_670, OBJ_EVENT_PAL_TAG_POKEMON_670},
	{gObjectEventPalette_Pokemon_Species_671, OBJ_EVENT_PAL_TAG_POKEMON_671},
	{gObjectEventPalette_Pokemon_Species_672, OBJ_EVENT_PAL_TAG_POKEMON_672},
	{gObjectEventPalette_Pokemon_Species_673, OBJ_EVENT_PAL_TAG_POKEMON_673},
	{gObjectEventPalette_Pokemon_Species_674, OBJ_EVENT_PAL_TAG_POKEMON_674},
	{gObjectEventPalette_Pokemon_Species_675, OBJ_EVENT_PAL_TAG_POKEMON_675},
	{gObjectEventPalette_Pokemon_Species_676, OBJ_EVENT_PAL_TAG_POKEMON_676},
	{gObjectEventPalette_Pokemon_Species_677, OBJ_EVENT_PAL_TAG_POKEMON_677},
	{gObjectEventPalette_Pokemon_Species_678, OBJ_EVENT_PAL_TAG_POKEMON_678},
	{gObjectEventPalette_Pokemon_Species_679, OBJ_EVENT_PAL_TAG_POKEMON_679},
	{gObjectEventPalette_Pokemon_Species_680, OBJ_EVENT_PAL_TAG_POKEMON_680},
	{gObjectEventPalette_Pokemon_Species_681, OBJ_EVENT_PAL_TAG_POKEMON_681},
	{gObjectEventPalette_Pokemon_Species_682, OBJ_EVENT_PAL_TAG_POKEMON_682},
	{gObjectEventPalette_Pokemon_Species_683, OBJ_EVENT_PAL_TAG_POKEMON_683},
	{gObjectEventPalette_Pokemon_Species_684, OBJ_EVENT_PAL_TAG_POKEMON_684},
	{gObjectEventPalette_Pokemon_Species_685, OBJ_EVENT_PAL_TAG_POKEMON_685},
	{gObjectEventPalette_Pokemon_Species_686, OBJ_EVENT_PAL_TAG_POKEMON_686},
	{gObjectEventPalette_Pokemon_Species_687, OBJ_EVENT_PAL_TAG_POKEMON_687},
	{gObjectEventPalette_Pokemon_Species_688, OBJ_EVENT_PAL_TAG_POKEMON_688},
	{gObjectEventPalette_Pokemon_Species_689, OBJ_EVENT_PAL_TAG_POKEMON_689},
	{gObjectEventPalette_Pokemon_Species_690, OBJ_EVENT_PAL_TAG_POKEMON_690},
	{gObjectEventPalette_Pokemon_Species_691, OBJ_EVENT_PAL_TAG_POKEMON_691},
	{gObjectEventPalette_Pokemon_Species_692, OBJ_EVENT_PAL_TAG_POKEMON_692},
	{gObjectEventPalette_Pokemon_Species_693, OBJ_EVENT_PAL_TAG_POKEMON_693},
	{gObjectEventPalette_Pokemon_Species_694, OBJ_EVENT_PAL_TAG_POKEMON_694},
	{gObjectEventPalette_Pokemon_Species_695, OBJ_EVENT_PAL_TAG_POKEMON_695},
	{gObjectEventPalette_Pokemon_Species_696, OBJ_EVENT_PAL_TAG_POKEMON_696},
	{gObjectEventPalette_Pokemon_Species_697, OBJ_EVENT_PAL_TAG_POKEMON_697},
	{gObjectEventPalette_Pokemon_Species_698, OBJ_EVENT_PAL_TAG_POKEMON_698},
	{gObjectEventPalette_Pokemon_Species_699, OBJ_EVENT_PAL_TAG_POKEMON_699},
	{gObjectEventPalette_Pokemon_Species_700, OBJ_EVENT_PAL_TAG_POKEMON_700},
	{gObjectEventPalette_Pokemon_Species_701, OBJ_EVENT_PAL_TAG_POKEMON_701},
	{gObjectEventPalette_Pokemon_Species_702, OBJ_EVENT_PAL_TAG_POKEMON_702},
	{gObjectEventPalette_Pokemon_Species_703, OBJ_EVENT_PAL_TAG_POKEMON_703},
	{gObjectEventPalette_Pokemon_Species_704, OBJ_EVENT_PAL_TAG_POKEMON_704},
	{gObjectEventPalette_Pokemon_Species_705, OBJ_EVENT_PAL_TAG_POKEMON_705},
	{gObjectEventPalette_Pokemon_Species_706, OBJ_EVENT_PAL_TAG_POKEMON_706},
	{gObjectEventPalette_Pokemon_Species_707, OBJ_EVENT_PAL_TAG_POKEMON_707},
	{gObjectEventPalette_Pokemon_Species_708, OBJ_EVENT_PAL_TAG_POKEMON_708},
	{gObjectEventPalette_Pokemon_Species_709, OBJ_EVENT_PAL_TAG_POKEMON_709},
	{gObjectEventPalette_Pokemon_Species_710, OBJ_EVENT_PAL_TAG_POKEMON_710},
	{gObjectEventPalette_Pokemon_Species_711, OBJ_EVENT_PAL_TAG_POKEMON_711},
	{gObjectEventPalette_Pokemon_Species_712, OBJ_EVENT_PAL_TAG_POKEMON_712},
	{gObjectEventPalette_Pokemon_Species_713, OBJ_EVENT_PAL_TAG_POKEMON_713},
	{gObjectEventPalette_Pokemon_Species_714, OBJ_EVENT_PAL_TAG_POKEMON_714},
	{gObjectEventPalette_Pokemon_Species_715, OBJ_EVENT_PAL_TAG_POKEMON_715},
	{gObjectEventPalette_Pokemon_Species_716, OBJ_EVENT_PAL_TAG_POKEMON_716},
	{gObjectEventPalette_Pokemon_Species_717, OBJ_EVENT_PAL_TAG_POKEMON_717},
	{gObjectEventPalette_Pokemon_Species_718, OBJ_EVENT_PAL_TAG_POKEMON_718},
	{gObjectEventPalette_Pokemon_Species_719, OBJ_EVENT_PAL_TAG_POKEMON_719},
	{gObjectEventPalette_Pokemon_Species_720, OBJ_EVENT_PAL_TAG_POKEMON_720},
	{gObjectEventPalette_Pokemon_Species_721, OBJ_EVENT_PAL_TAG_POKEMON_721},
	{gObjectEventPalette_Pokemon_Species_722, OBJ_EVENT_PAL_TAG_POKEMON_722},
	{gObjectEventPalette_Pokemon_Species_723, OBJ_EVENT_PAL_TAG_POKEMON_723},
	{gObjectEventPalette_Pokemon_Species_724, OBJ_EVENT_PAL_TAG_POKEMON_724},
	{gObjectEventPalette_Pokemon_Species_725, OBJ_EVENT_PAL_TAG_POKEMON_725},
	{gObjectEventPalette_Pokemon_Species_726, OBJ_EVENT_PAL_TAG_POKEMON_726},
	{gObjectEventPalette_Pokemon_Species_727, OBJ_EVENT_PAL_TAG_POKEMON_727},
	{gObjectEventPalette_Pokemon_Species_728, OBJ_EVENT_PAL_TAG_POKEMON_728},
	{gObjectEventPalette_Pokemon_Species_729, OBJ_EVENT_PAL_TAG_POKEMON_729},
	{gObjectEventPalette_Pokemon_Species_730, OBJ_EVENT_PAL_TAG_POKEMON_730},
	{gObjectEventPalette_Pokemon_Species_731, OBJ_EVENT_PAL_TAG_POKEMON_731},
	{gObjectEventPalette_Pokemon_Species_732, OBJ_EVENT_PAL_TAG_POKEMON_732},
	{gObjectEventPalette_Pokemon_Species_733, OBJ_EVENT_PAL_TAG_POKEMON_733},
	{gObjectEventPalette_Pokemon_Species_734, OBJ_EVENT_PAL_TAG_POKEMON_734},
	{gObjectEventPalette_Pokemon_Species_735, OBJ_EVENT_PAL_TAG_POKEMON_735},
	{gObjectEventPalette_Pokemon_Species_736, OBJ_EVENT_PAL_TAG_POKEMON_736},
	{gObjectEventPalette_Pokemon_Species_737, OBJ_EVENT_PAL_TAG_POKEMON_737},
	{gObjectEventPalette_Pokemon_Species_738, OBJ_EVENT_PAL_TAG_POKEMON_738},
	{gObjectEventPalette_Pokemon_Species_739, OBJ_EVENT_PAL_TAG_POKEMON_739},
	{gObjectEventPalette_Pokemon_Species_740, OBJ_EVENT_PAL_TAG_POKEMON_740},
	{gObjectEventPalette_Pokemon_Species_741, OBJ_EVENT_PAL_TAG_POKEMON_741},
	{gObjectEventPalette_Pokemon_Species_742, OBJ_EVENT_PAL_TAG_POKEMON_742},
	{gObjectEventPalette_Pokemon_Species_743, OBJ_EVENT_PAL_TAG_POKEMON_743},
	{gObjectEventPalette_Pokemon_Species_744, OBJ_EVENT_PAL_TAG_POKEMON_744},
	{gObjectEventPalette_Pokemon_Species_745, OBJ_EVENT_PAL_TAG_POKEMON_745},
	{gObjectEventPalette_Pokemon_Species_746, OBJ_EVENT_PAL_TAG_POKEMON_746},
	{gObjectEventPalette_Pokemon_Species_747, OBJ_EVENT_PAL_TAG_POKEMON_747},
	{gObjectEventPalette_Pokemon_Species_748, OBJ_EVENT_PAL_TAG_POKEMON_748},
	{gObjectEventPalette_Pokemon_Species_749, OBJ_EVENT_PAL_TAG_POKEMON_749},
	{gObjectEventPalette_Pokemon_Species_750, OBJ_EVENT_PAL_TAG_POKEMON_750},
	{gObjectEventPalette_Pokemon_Species_751, OBJ_EVENT_PAL_TAG_POKEMON_751},
	{gObjectEventPalette_Pokemon_Species_752, OBJ_EVENT_PAL_TAG_POKEMON_752},
	{gObjectEventPalette_Pokemon_Species_753, OBJ_EVENT_PAL_TAG_POKEMON_753},
	{gObjectEventPalette_Pokemon_Species_754, OBJ_EVENT_PAL_TAG_POKEMON_754},
	{gObjectEventPalette_Pokemon_Species_755, OBJ_EVENT_PAL_TAG_POKEMON_755},
	{gObjectEventPalette_Pokemon_Species_756, OBJ_EVENT_PAL_TAG_POKEMON_756},
	{gObjectEventPalette_Pokemon_Species_757, OBJ_EVENT_PAL_TAG_POKEMON_757},
	{gObjectEventPalette_Pokemon_Species_758, OBJ_EVENT_PAL_TAG_POKEMON_758},
	{gObjectEventPalette_Pokemon_Species_759, OBJ_EVENT_PAL_TAG_POKEMON_759},
	{gObjectEventPalette_Pokemon_Species_760, OBJ_EVENT_PAL_TAG_POKEMON_760},
	{gObjectEventPalette_Pokemon_Species_761, OBJ_EVENT_PAL_TAG_POKEMON_761},
	{gObjectEventPalette_Pokemon_Species_762, OBJ_EVENT_PAL_TAG_POKEMON_762},
	{gObjectEventPalette_Pokemon_Species_763, OBJ_EVENT_PAL_TAG_POKEMON_763},
	{gObjectEventPalette_Pokemon_Species_764, OBJ_EVENT_PAL_TAG_POKEMON_764},
	{gObjectEventPalette_Pokemon_Species_765, OBJ_EVENT_PAL_TAG_POKEMON_765},
	{gObjectEventPalette_Pokemon_Species_766, OBJ_EVENT_PAL_TAG_POKEMON_766},
	{gObjectEventPalette_Pokemon_Species_767, OBJ_EVENT_PAL_TAG_POKEMON_767},
	{gObjectEventPalette_Pokemon_Species_768, OBJ_EVENT_PAL_TAG_POKEMON_768},
	{gObjectEventPalette_Pokemon_Species_769, OBJ_EVENT_PAL_TAG_POKEMON_769},
	{gObjectEventPalette_Pokemon_Species_770, OBJ_EVENT_PAL_TAG_POKEMON_770},
	{gObjectEventPalette_Pokemon_Species_771, OBJ_EVENT_PAL_TAG_POKEMON_771},
	{gObjectEventPalette_Pokemon_Species_772, OBJ_EVENT_PAL_TAG_POKEMON_772},
	{gObjectEventPalette_Pokemon_Species_773, OBJ_EVENT_PAL_TAG_POKEMON_773},
	{gObjectEventPalette_Pokemon_Species_774, OBJ_EVENT_PAL_TAG_POKEMON_774},
	{gObjectEventPalette_Pokemon_Species_775, OBJ_EVENT_PAL_TAG_POKEMON_775},
	{gObjectEventPalette_Pokemon_Species_776, OBJ_EVENT_PAL_TAG_POKEMON_776},
	{gObjectEventPalette_Pokemon_Species_777, OBJ_EVENT_PAL_TAG_POKEMON_777},
	{gObjectEventPalette_Pokemon_Species_778, OBJ_EVENT_PAL_TAG_POKEMON_778},
	{gObjectEventPalette_Pokemon_Species_779, OBJ_EVENT_PAL_TAG_POKEMON_779},
	{gObjectEventPalette_Pokemon_Species_780, OBJ_EVENT_PAL_TAG_POKEMON_780},
	{gObjectEventPalette_Pokemon_Species_781, OBJ_EVENT_PAL_TAG_POKEMON_781},
	{gObjectEventPalette_Pokemon_Species_782, OBJ_EVENT_PAL_TAG_POKEMON_782},
	{gObjectEventPalette_Pokemon_Species_783, OBJ_EVENT_PAL_TAG_POKEMON_783},
	{gObjectEventPalette_Pokemon_Species_784, OBJ_EVENT_PAL_TAG_POKEMON_784},
	{gObjectEventPalette_Pokemon_Species_785, OBJ_EVENT_PAL_TAG_POKEMON_785},
	{gObjectEventPalette_Pokemon_Species_786, OBJ_EVENT_PAL_TAG_POKEMON_786},
	{gObjectEventPalette_Pokemon_Species_787, OBJ_EVENT_PAL_TAG_POKEMON_787},
	{gObjectEventPalette_Pokemon_Species_788, OBJ_EVENT_PAL_TAG_POKEMON_788},
	{gObjectEventPalette_Pokemon_Species_789, OBJ_EVENT_PAL_TAG_POKEMON_789},
	{gObjectEventPalette_Pokemon_Species_790, OBJ_EVENT_PAL_TAG_POKEMON_790},
	{gObjectEventPalette_Pokemon_Species_791, OBJ_EVENT_PAL_TAG_POKEMON_791},
	{gObjectEventPalette_Pokemon_Species_792, OBJ_EVENT_PAL_TAG_POKEMON_792},
	{gObjectEventPalette_Pokemon_Species_793, OBJ_EVENT_PAL_TAG_POKEMON_793},
	{gObjectEventPalette_Pokemon_Species_794, OBJ_EVENT_PAL_TAG_POKEMON_794},
	{gObjectEventPalette_Pokemon_Species_795, OBJ_EVENT_PAL_TAG_POKEMON_795},
	{gObjectEventPalette_Pokemon_Species_796, OBJ_EVENT_PAL_TAG_POKEMON_796},
	{gObjectEventPalette_Pokemon_Species_797, OBJ_EVENT_PAL_TAG_POKEMON_797},
	{gObjectEventPalette_Pokemon_Species_798, OBJ_EVENT_PAL_TAG_POKEMON_798},
	{gObjectEventPalette_Pokemon_Species_799, OBJ_EVENT_PAL_TAG_POKEMON_799},
	{gObjectEventPalette_Pokemon_Species_800, OBJ_EVENT_PAL_TAG_POKEMON_800},
	{gObjectEventPalette_Pokemon_Species_801, OBJ_EVENT_PAL_TAG_POKEMON_801},
	{gObjectEventPalette_Pokemon_Species_802, OBJ_EVENT_PAL_TAG_POKEMON_802},
	{gObjectEventPalette_Pokemon_Species_803, OBJ_EVENT_PAL_TAG_POKEMON_803},
	{gObjectEventPalette_Pokemon_Species_804, OBJ_EVENT_PAL_TAG_POKEMON_804},
	{gObjectEventPalette_Pokemon_Species_805, OBJ_EVENT_PAL_TAG_POKEMON_805},
	{gObjectEventPalette_Pokemon_Species_806, OBJ_EVENT_PAL_TAG_POKEMON_806},
	{gObjectEventPalette_Pokemon_Species_807, OBJ_EVENT_PAL_TAG_POKEMON_807},
	{gObjectEventPalette_Pokemon_Species_808, OBJ_EVENT_PAL_TAG_POKEMON_808},
	{gObjectEventPalette_Pokemon_Species_809, OBJ_EVENT_PAL_TAG_POKEMON_809},
	{gObjectEventPalette_Pokemon_Species_849, OBJ_EVENT_PAL_TAG_POKEMON_849},
	{gObjectEventPalette_Pokemon_Species_858, OBJ_EVENT_PAL_TAG_POKEMON_858},
	{gObjectEventPalette_Pokemon_Species_859, OBJ_EVENT_PAL_TAG_POKEMON_859},
	{gObjectEventPalette_Pokemon_Species_860, OBJ_EVENT_PAL_TAG_POKEMON_860},
	{gObjectEventPalette_Pokemon_Species_861, OBJ_EVENT_PAL_TAG_POKEMON_861},
	{gObjectEventPalette_Pokemon_Species_862, OBJ_EVENT_PAL_TAG_POKEMON_862},
	{gObjectEventPalette_Pokemon_Species_863, OBJ_EVENT_PAL_TAG_POKEMON_863},
	{gObjectEventPalette_Pokemon_Species_864, OBJ_EVENT_PAL_TAG_POKEMON_864},
	{gObjectEventPalette_Pokemon_Species_865, OBJ_EVENT_PAL_TAG_POKEMON_865},
	{gObjectEventPalette_Pokemon_Species_866, OBJ_EVENT_PAL_TAG_POKEMON_866},
	{gObjectEventPalette_Pokemon_Species_869, OBJ_EVENT_PAL_TAG_POKEMON_869},
	{gObjectEventPalette_Pokemon_Species_870, OBJ_EVENT_PAL_TAG_POKEMON_870},
	{gObjectEventPalette_Pokemon_Species_871, OBJ_EVENT_PAL_TAG_POKEMON_871},
	{gObjectEventPalette_Pokemon_Species_872, OBJ_EVENT_PAL_TAG_POKEMON_872},
	{gObjectEventPalette_Pokemon_Species_873, OBJ_EVENT_PAL_TAG_POKEMON_873},
	{gObjectEventPalette_Pokemon_Species_874, OBJ_EVENT_PAL_TAG_POKEMON_874},
	{gObjectEventPalette_Pokemon_Species_875, OBJ_EVENT_PAL_TAG_POKEMON_875},
	{gObjectEventPalette_Pokemon_Species_876, OBJ_EVENT_PAL_TAG_POKEMON_876},
	{gObjectEventPalette_Pokemon_Species_877, OBJ_EVENT_PAL_TAG_POKEMON_877},
	{gObjectEventPalette_Pokemon_Species_878, OBJ_EVENT_PAL_TAG_POKEMON_878},
	{gObjectEventPalette_Pokemon_Species_879, OBJ_EVENT_PAL_TAG_POKEMON_879},
	{gObjectEventPalette_Pokemon_Species_880, OBJ_EVENT_PAL_TAG_POKEMON_880},
	{gObjectEventPalette_Pokemon_Species_881, OBJ_EVENT_PAL_TAG_POKEMON_881},
	{gObjectEventPalette_Pokemon_Species_882, OBJ_EVENT_PAL_TAG_POKEMON_882},
	{gObjectEventPalette_Pokemon_Species_883, OBJ_EVENT_PAL_TAG_POKEMON_883},
	{gObjectEventPalette_Pokemon_Species_884, OBJ_EVENT_PAL_TAG_POKEMON_884},
	{gObjectEventPalette_Pokemon_Species_885, OBJ_EVENT_PAL_TAG_POKEMON_885},
	{gObjectEventPalette_Pokemon_Species_887, OBJ_EVENT_PAL_TAG_POKEMON_887},
	{gObjectEventPalette_Pokemon_Species_896, OBJ_EVENT_PAL_TAG_POKEMON_896},
	{gObjectEventPalette_Pokemon_Species_897, OBJ_EVENT_PAL_TAG_POKEMON_897},
	{gObjectEventPalette_Pokemon_Species_898, OBJ_EVENT_PAL_TAG_POKEMON_898},
	{gObjectEventPalette_Pokemon_Species_899, OBJ_EVENT_PAL_TAG_POKEMON_899},
	{gObjectEventPalette_Pokemon_Species_900, OBJ_EVENT_PAL_TAG_POKEMON_900},
	{gObjectEventPalette_Pokemon_Species_901, OBJ_EVENT_PAL_TAG_POKEMON_901},
	{gObjectEventPalette_Pokemon_Species_902, OBJ_EVENT_PAL_TAG_POKEMON_902},
	{gObjectEventPalette_Pokemon_Species_903, OBJ_EVENT_PAL_TAG_POKEMON_903},
	{gObjectEventPalette_Pokemon_Species_904, OBJ_EVENT_PAL_TAG_POKEMON_904},
    #ifdef BUGFIX
    {NULL,                                  OBJ_EVENT_PAL_TAG_NONE},
    #else
    {}, // BUG: FindObjectEventPaletteIndexByTag looks for OBJ_EVENT_PAL_TAG_NONE and not 0x0.
        // If it's looking for a tag that isn't in this table, the game locks in an infinite loop.
    #endif
};

#include "data/object_events/berry_tree_graphics_tables.h"
#include "data/field_effects/field_effect_objects.h"

static const s16 sMovementDelaysMedium[] = {32, 64,  96, 128};
static const s16 sMovementDelaysLong[] =   {32, 64, 128, 192}; // Unused
static const s16 sMovementDelaysShort[] =  {32, 48,  64,  80};

#include "data/object_events/movement_type_func_tables.h"

static const u8 sFaceDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_STD_FACE_SOUTH,
    [DIR_SOUTH] = ANIM_STD_FACE_SOUTH,
    [DIR_NORTH] = ANIM_STD_FACE_NORTH,
    [DIR_WEST] = ANIM_STD_FACE_WEST,
    [DIR_EAST] = ANIM_STD_FACE_EAST,
    [DIR_SOUTHWEST] = ANIM_STD_FACE_WEST,
    [DIR_SOUTHEAST] = ANIM_STD_FACE_EAST,
    [DIR_NORTHWEST] = ANIM_STD_FACE_WEST,
    [DIR_NORTHEAST] = ANIM_STD_FACE_EAST,
};
static const u8 sMoveDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_STD_GO_SOUTH,
    [DIR_SOUTH] = ANIM_STD_GO_SOUTH,
    [DIR_NORTH] = ANIM_STD_GO_NORTH,
    [DIR_WEST] = ANIM_STD_GO_WEST,
    [DIR_EAST] = ANIM_STD_GO_EAST,
    [DIR_SOUTHWEST] = ANIM_STD_GO_WEST,
    [DIR_SOUTHEAST] = ANIM_STD_GO_EAST,
    [DIR_NORTHWEST] = ANIM_STD_GO_WEST,
    [DIR_NORTHEAST] = ANIM_STD_GO_EAST,
};
static const u8 sMoveDirectionFastAnimNums[] = {
    [DIR_NONE] = ANIM_STD_GO_FAST_SOUTH,
    [DIR_SOUTH] = ANIM_STD_GO_FAST_SOUTH,
    [DIR_NORTH] = ANIM_STD_GO_FAST_NORTH,
    [DIR_WEST] = ANIM_STD_GO_FAST_WEST,
    [DIR_EAST] = ANIM_STD_GO_FAST_EAST,
    [DIR_SOUTHWEST] = ANIM_STD_GO_FAST_WEST,
    [DIR_SOUTHEAST] = ANIM_STD_GO_FAST_EAST,
    [DIR_NORTHWEST] = ANIM_STD_GO_FAST_WEST,
    [DIR_NORTHEAST] = ANIM_STD_GO_FAST_EAST,
};
static const u8 sMoveDirectionFasterAnimNums[] = {
    [DIR_NONE] = ANIM_STD_GO_FASTER_SOUTH,
    [DIR_SOUTH] = ANIM_STD_GO_FASTER_SOUTH,
    [DIR_NORTH] = ANIM_STD_GO_FASTER_NORTH,
    [DIR_WEST] = ANIM_STD_GO_FASTER_WEST,
    [DIR_EAST] = ANIM_STD_GO_FASTER_EAST,
    [DIR_SOUTHWEST] = ANIM_STD_GO_FASTER_WEST,
    [DIR_SOUTHEAST] = ANIM_STD_GO_FASTER_EAST,
    [DIR_NORTHWEST] = ANIM_STD_GO_FASTER_WEST,
    [DIR_NORTHEAST] = ANIM_STD_GO_FASTER_EAST,
};
static const u8 sMoveDirectionFastestAnimNums[] = {
    [DIR_NONE] = ANIM_STD_GO_FASTEST_SOUTH,
    [DIR_SOUTH] = ANIM_STD_GO_FASTEST_SOUTH,
    [DIR_NORTH] = ANIM_STD_GO_FASTEST_NORTH,
    [DIR_WEST] = ANIM_STD_GO_FASTEST_WEST,
    [DIR_EAST] = ANIM_STD_GO_FASTEST_EAST,
    [DIR_SOUTHWEST] = ANIM_STD_GO_FASTEST_WEST,
    [DIR_SOUTHEAST] = ANIM_STD_GO_FASTEST_EAST,
    [DIR_NORTHWEST] = ANIM_STD_GO_FASTEST_WEST,
    [DIR_NORTHEAST] = ANIM_STD_GO_FASTEST_EAST,
};
static const u8 sJumpSpecialDirectionAnimNums[] = { // used for jumping onto surf mon
    [DIR_NONE] = ANIM_GET_ON_OFF_POKEMON_SOUTH,
    [DIR_SOUTH] = ANIM_GET_ON_OFF_POKEMON_SOUTH,
    [DIR_NORTH] = ANIM_GET_ON_OFF_POKEMON_NORTH,
    [DIR_WEST] = ANIM_GET_ON_OFF_POKEMON_WEST,
    [DIR_EAST] = ANIM_GET_ON_OFF_POKEMON_EAST,
    [DIR_SOUTHWEST] = ANIM_GET_ON_OFF_POKEMON_SOUTH,
    [DIR_SOUTHEAST] = ANIM_GET_ON_OFF_POKEMON_SOUTH,
    [DIR_NORTHWEST] = ANIM_GET_ON_OFF_POKEMON_NORTH,
    [DIR_NORTHEAST] = ANIM_GET_ON_OFF_POKEMON_NORTH,
};
static const u8 sAcroWheelieDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_BUNNY_HOP_BACK_WHEEL_SOUTH,
    [DIR_SOUTH] = ANIM_BUNNY_HOP_BACK_WHEEL_SOUTH,
    [DIR_NORTH] = ANIM_BUNNY_HOP_BACK_WHEEL_NORTH,
    [DIR_WEST] = ANIM_BUNNY_HOP_BACK_WHEEL_WEST,
    [DIR_EAST] = ANIM_BUNNY_HOP_BACK_WHEEL_EAST,
    [DIR_SOUTHWEST] = ANIM_BUNNY_HOP_BACK_WHEEL_WEST,
    [DIR_SOUTHEAST] = ANIM_BUNNY_HOP_BACK_WHEEL_EAST,
    [DIR_NORTHWEST] = ANIM_BUNNY_HOP_BACK_WHEEL_WEST,
    [DIR_NORTHEAST] = ANIM_BUNNY_HOP_BACK_WHEEL_EAST,
};
static const u8 sAcroUnusedDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH,
    [DIR_SOUTH] = ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH,
    [DIR_NORTH] = ANIM_BUNNY_HOP_FRONT_WHEEL_NORTH,
    [DIR_WEST] = ANIM_BUNNY_HOP_FRONT_WHEEL_WEST,
    [DIR_EAST] = ANIM_BUNNY_HOP_FRONT_WHEEL_EAST,
    [DIR_SOUTHWEST] = ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH,
    [DIR_SOUTHEAST] = ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH,
    [DIR_NORTHWEST] = ANIM_BUNNY_HOP_FRONT_WHEEL_NORTH,
    [DIR_NORTHEAST] = ANIM_BUNNY_HOP_FRONT_WHEEL_NORTH,
};
static const u8 sAcroEndWheelieDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTH,
    [DIR_SOUTH] = ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTH,
    [DIR_NORTH] = ANIM_STANDING_WHEELIE_BACK_WHEEL_NORTH,
    [DIR_WEST] = ANIM_STANDING_WHEELIE_BACK_WHEEL_WEST,
    [DIR_EAST] = ANIM_STANDING_WHEELIE_BACK_WHEEL_EAST,
    [DIR_SOUTHWEST] = ANIM_STANDING_WHEELIE_BACK_WHEEL_WEST,
    [DIR_SOUTHEAST] = ANIM_STANDING_WHEELIE_BACK_WHEEL_EAST,
    [DIR_NORTHWEST] = ANIM_STANDING_WHEELIE_BACK_WHEEL_WEST,
    [DIR_NORTHEAST] = ANIM_STANDING_WHEELIE_BACK_WHEEL_EAST,
};
static const u8 sAcroUnusedActionDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH,
    [DIR_SOUTH] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH,
    [DIR_NORTH] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_NORTH,
    [DIR_WEST] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_WEST,
    [DIR_EAST] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_EAST,
    [DIR_SOUTHWEST] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH,
    [DIR_SOUTHEAST] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH,
    [DIR_NORTHWEST] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_NORTH,
    [DIR_NORTHEAST] = ANIM_STANDING_WHEELIE_FRONT_WHEEL_NORTH,
};
static const u8 sAcroWheeliePedalDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_MOVING_WHEELIE_SOUTH,
    [DIR_SOUTH] = ANIM_MOVING_WHEELIE_SOUTH,
    [DIR_NORTH] = ANIM_MOVING_WHEELIE_NORTH,
    [DIR_WEST] = ANIM_MOVING_WHEELIE_WEST,
    [DIR_EAST] = ANIM_MOVING_WHEELIE_EAST,
    [DIR_SOUTHWEST] = ANIM_MOVING_WHEELIE_WEST,
    [DIR_SOUTHEAST] = ANIM_MOVING_WHEELIE_EAST,
    [DIR_NORTHWEST] = ANIM_MOVING_WHEELIE_WEST,
    [DIR_NORTHEAST] = ANIM_MOVING_WHEELIE_EAST,
};
static const u8 sFishingDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_TAKE_OUT_ROD_SOUTH,
    [DIR_SOUTH] = ANIM_TAKE_OUT_ROD_SOUTH,
    [DIR_NORTH] = ANIM_TAKE_OUT_ROD_NORTH,
    [DIR_WEST] = ANIM_TAKE_OUT_ROD_WEST,
    [DIR_EAST] = ANIM_TAKE_OUT_ROD_EAST,
    [DIR_SOUTHWEST] = ANIM_TAKE_OUT_ROD_SOUTH,
    [DIR_SOUTHEAST] = ANIM_TAKE_OUT_ROD_SOUTH,
    [DIR_NORTHWEST] = ANIM_TAKE_OUT_ROD_NORTH,
    [DIR_NORTHEAST] = ANIM_TAKE_OUT_ROD_NORTH,
};
static const u8 sFishingNoCatchDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_PUT_AWAY_ROD_SOUTH,
    [DIR_SOUTH] = ANIM_PUT_AWAY_ROD_SOUTH,
    [DIR_NORTH] = ANIM_PUT_AWAY_ROD_NORTH,
    [DIR_WEST] = ANIM_PUT_AWAY_ROD_WEST,
    [DIR_EAST] = ANIM_PUT_AWAY_ROD_EAST,
    [DIR_SOUTHWEST] = ANIM_PUT_AWAY_ROD_SOUTH,
    [DIR_SOUTHEAST] = ANIM_PUT_AWAY_ROD_SOUTH,
    [DIR_NORTHWEST] = ANIM_PUT_AWAY_ROD_NORTH,
    [DIR_NORTHEAST] = ANIM_PUT_AWAY_ROD_NORTH,
};
static const u8 sFishingBiteDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_HOOKED_POKEMON_SOUTH,
    [DIR_SOUTH] = ANIM_HOOKED_POKEMON_SOUTH,
    [DIR_NORTH] = ANIM_HOOKED_POKEMON_NORTH,
    [DIR_WEST] = ANIM_HOOKED_POKEMON_WEST,
    [DIR_EAST] = ANIM_HOOKED_POKEMON_EAST,
    [DIR_SOUTHWEST] = ANIM_HOOKED_POKEMON_SOUTH,
    [DIR_SOUTHEAST] = ANIM_HOOKED_POKEMON_SOUTH,
    [DIR_NORTHWEST] = ANIM_HOOKED_POKEMON_NORTH,
    [DIR_NORTHEAST] = ANIM_HOOKED_POKEMON_NORTH,
};
static const u8 sRunningDirectionAnimNums[] = {
    [DIR_NONE] = ANIM_RUN_SOUTH,
    [DIR_SOUTH] = ANIM_RUN_SOUTH,
    [DIR_NORTH] = ANIM_RUN_NORTH,
    [DIR_WEST] = ANIM_RUN_WEST,
    [DIR_EAST] = ANIM_RUN_EAST,
    [DIR_SOUTHWEST] = ANIM_RUN_WEST,
    [DIR_SOUTHEAST] = ANIM_RUN_EAST,
    [DIR_NORTHWEST] = ANIM_RUN_WEST,
    [DIR_NORTHEAST] = ANIM_RUN_EAST,
};

const u8 gTrainerFacingDirectionMovementTypes[] = {
    [DIR_NONE] = MOVEMENT_TYPE_FACE_DOWN,
    [DIR_SOUTH] = MOVEMENT_TYPE_FACE_DOWN,
    [DIR_NORTH] = MOVEMENT_TYPE_FACE_UP,
    [DIR_WEST] = MOVEMENT_TYPE_FACE_LEFT,
    [DIR_EAST] = MOVEMENT_TYPE_FACE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_TYPE_FACE_DOWN,
    [DIR_SOUTHEAST] = MOVEMENT_TYPE_FACE_DOWN,
    [DIR_NORTHWEST] = MOVEMENT_TYPE_FACE_UP,
    [DIR_NORTHEAST] = MOVEMENT_TYPE_FACE_UP,
};

bool8 (*const gOppositeDirectionBlockedMetatileFuncs[])(u8) = {
    MetatileBehavior_IsSouthBlocked,
    MetatileBehavior_IsNorthBlocked,
    MetatileBehavior_IsWestBlocked,
    MetatileBehavior_IsEastBlocked
};

bool8 (*const gDirectionBlockedMetatileFuncs[])(u8) = {
    MetatileBehavior_IsNorthBlocked,
    MetatileBehavior_IsSouthBlocked,
    MetatileBehavior_IsEastBlocked,
    MetatileBehavior_IsWestBlocked
};

static const struct Coords16 sDirectionToVectors[] = {
    { 0,  0},
    { 0,  1},
    { 0, -1},
    {-1,  0},
    { 1,  0},
    {-1,  1},
    { 1,  1},
    {-1, -1},
    { 1, -1},
    {-2,  1},
    { 2,  1},
    {-2, -1},
    { 2, -1}
};

const u8 gFaceDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_FACE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_FACE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_FACE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_FACE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_FACE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_FACE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_FACE_RIGHT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_FACE_LEFT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_FACE_RIGHT
};
const u8 gWalkSlowMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_SLOW_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_SLOW_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_SLOW_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_SLOW_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_SLOW_RIGHT,
};
const u8 gWalkNormalMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_NORMAL_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_NORMAL_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_NORMAL_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_NORMAL_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_NORMAL_RIGHT,
};
const u8 gWalkFastMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_FAST_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_FAST_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_FAST_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_FAST_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_FAST_RIGHT,
};
const u8 gRideWaterCurrentMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_RIDE_WATER_CURRENT_UP,
    [DIR_WEST] = MOVEMENT_ACTION_RIDE_WATER_CURRENT_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_RIDE_WATER_CURRENT_RIGHT,
};
const u8 gWalkFasterMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_FASTER_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_FASTER_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_FASTER_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_FASTER_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_FASTER_RIGHT,
};
const u8 gSlideMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_SLIDE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_SLIDE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_SLIDE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_SLIDE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_SLIDE_RIGHT,
};
const u8 gPlayerRunMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_PLAYER_RUN_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_PLAYER_RUN_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_PLAYER_RUN_UP,
    [DIR_WEST] = MOVEMENT_ACTION_PLAYER_RUN_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_PLAYER_RUN_RIGHT,
};
const u8 gJump2MovementActions[] = {
    MOVEMENT_ACTION_JUMP_2_DOWN,
    MOVEMENT_ACTION_JUMP_2_DOWN,
    MOVEMENT_ACTION_JUMP_2_UP,
    MOVEMENT_ACTION_JUMP_2_LEFT,
    MOVEMENT_ACTION_JUMP_2_RIGHT,
};
const u8 gJumpInPlaceMovementActions[] = {
    MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN,
    MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN,
    MOVEMENT_ACTION_JUMP_IN_PLACE_UP,
    MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT,
    MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT,
};
const u8 gJumpInPlaceTurnAroundMovementActions[] = {
    MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN,
    MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN,
    MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN_UP,
    MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT_LEFT,
    MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT_RIGHT,
};
const u8 gJumpMovementActions[] = {
    MOVEMENT_ACTION_JUMP_DOWN,
    MOVEMENT_ACTION_JUMP_DOWN,
    MOVEMENT_ACTION_JUMP_UP,
    MOVEMENT_ACTION_JUMP_LEFT,
    MOVEMENT_ACTION_JUMP_RIGHT,
};
const u8 gJumpSpecialMovementActions[] = {
    MOVEMENT_ACTION_JUMP_SPECIAL_DOWN,
    MOVEMENT_ACTION_JUMP_SPECIAL_DOWN,
    MOVEMENT_ACTION_JUMP_SPECIAL_UP,
    MOVEMENT_ACTION_JUMP_SPECIAL_LEFT,
    MOVEMENT_ACTION_JUMP_SPECIAL_RIGHT,
};
const u8 gWalkInPlaceSlowMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_LEFT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_RIGHT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_RIGHT
};
const u8 gWalkInPlaceNormalMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT
};
const u8 gWalkInPlaceFastMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT
};
const u8 gWalkInPlaceFasterMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_UP,
    [DIR_WEST] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_LEFT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_RIGHT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_RIGHT
};
const u8 gAcroWheelieFaceDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_LEFT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT
};
const u8 gAcroPopWheelieFaceDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT,
};
const u8 gAcroEndWheelieFaceDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT,
};
const u8 gAcroWheelieHopFaceDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT,
};
const u8 gAcroWheelieHopDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT,
};
const u8 gAcroWheelieJumpDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT,
};
const u8 gAcroWheelieInPlaceDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT,
};
const u8 gAcroPopWheelieMoveDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT,
};
const u8 gAcroWheelieMoveDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT,
};
const u8 gAcroEndWheelieMoveDirectionMovementActions[] = {
    [DIR_NONE] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN,
    [DIR_SOUTH] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN,
    [DIR_NORTH] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_UP,
    [DIR_WEST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_LEFT,
    [DIR_EAST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT,
    [DIR_SOUTHWEST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_LEFT,
    [DIR_NORTHWEST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_LEFT,
    [DIR_SOUTHEAST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT,
    [DIR_NORTHEAST] = MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT,
};
// run slow
const u8 gRunSlowMovementActions[] = {
    [DIR_NONE]  = MOVEMENT_ACTION_RUN_DOWN_SLOW,
    [DIR_SOUTH] = MOVEMENT_ACTION_RUN_DOWN_SLOW,
    [DIR_NORTH] = MOVEMENT_ACTION_RUN_UP_SLOW,
    [DIR_WEST]  = MOVEMENT_ACTION_RUN_LEFT_SLOW,
    [DIR_EAST]  = MOVEMENT_ACTION_RUN_RIGHT_SLOW,
    [DIR_SOUTHWEST]  = MOVEMENT_ACTION_RUN_LEFT_SLOW,
    [DIR_SOUTHEAST]  = MOVEMENT_ACTION_RUN_RIGHT_SLOW,
    [DIR_NORTHWEST]  = MOVEMENT_ACTION_RUN_LEFT_SLOW,
    [DIR_NORTHEAST]  = MOVEMENT_ACTION_RUN_RIGHT_SLOW,
};

static const u8 sOppositeDirections[] = {
    DIR_NORTH,
    DIR_SOUTH,
    DIR_EAST,
    DIR_WEST,
    DIR_NORTHEAST,
    DIR_NORTHWEST,
    DIR_SOUTHEAST,
    DIR_SOUTHWEST,
};

// Takes the player's original and current facing direction to get the direction that should be considered to copy.
// Note that this means an NPC who copies the player's movement changes how they copy them based on how
// the player entered the area. For instance an NPC who does the same movements as the player when they
// entered the area facing South will do the opposite movements as the player if they enter facing North.
static const u8 sPlayerDirectionsForCopy[][4] = {
    [DIR_SOUTH - 1] = {
        [DIR_SOUTH - 1] = DIR_NORTH,
        [DIR_NORTH - 1] = DIR_SOUTH,
        [DIR_WEST - 1]  = DIR_EAST,
        [DIR_EAST - 1]  = DIR_WEST
    },
    [DIR_NORTH - 1] = {
        [DIR_SOUTH - 1] = DIR_SOUTH,
        [DIR_NORTH - 1] = DIR_NORTH,
        [DIR_WEST - 1]  = DIR_WEST,
        [DIR_EAST - 1]  = DIR_EAST
    },
    [DIR_WEST - 1] = {
        [DIR_SOUTH - 1] = DIR_WEST,
        [DIR_NORTH - 1] = DIR_EAST,
        [DIR_WEST - 1]  = DIR_NORTH,
        [DIR_EAST - 1]  = DIR_SOUTH
    },
    [DIR_EAST - 1] = {
        [DIR_SOUTH - 1] = DIR_EAST,
        [DIR_NORTH - 1] = DIR_WEST,
        [DIR_WEST - 1]  = DIR_SOUTH,
        [DIR_EAST - 1]  = DIR_NORTH
    }
};

// Indexed first with the NPC's initial facing direction based on movement type, and secondly with the player direction to copy.
// Returns the direction the copy NPC should travel in.
static const u8 sPlayerDirectionToCopyDirection[][4] = {
    [DIR_SOUTH - 1] = { // MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE(_IN_GRASS)
        [DIR_SOUTH - 1] = DIR_NORTH,
        [DIR_NORTH - 1] = DIR_SOUTH,
        [DIR_WEST - 1]  = DIR_EAST,
        [DIR_EAST - 1]  = DIR_WEST
    },
    [DIR_NORTH - 1] = { // MOVEMENT_TYPE_COPY_PLAYER(_IN_GRASS)
        [DIR_SOUTH - 1] = DIR_SOUTH,
        [DIR_NORTH - 1] = DIR_NORTH,
        [DIR_WEST - 1]  = DIR_WEST,
        [DIR_EAST - 1]  = DIR_EAST
    },
    [DIR_WEST - 1] = { // MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE(_IN_GRASS)
        [DIR_SOUTH - 1] = DIR_EAST,
        [DIR_NORTH - 1] = DIR_WEST,
        [DIR_WEST - 1]  = DIR_SOUTH,
        [DIR_EAST - 1]  = DIR_NORTH
    },
    [DIR_EAST - 1] = { // MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE(_IN_GRASS)
        [DIR_SOUTH - 1] = DIR_WEST,
        [DIR_NORTH - 1] = DIR_EAST,
        [DIR_WEST - 1]  = DIR_NORTH,
        [DIR_EAST - 1]  = DIR_SOUTH
    }
};

#include "data/object_events/movement_action_func_tables.h"

static void ClearObjectEvent(struct ObjectEvent *objectEvent)
{
    *objectEvent = (struct ObjectEvent){};
    objectEvent->localId = OBJ_EVENT_ID_PLAYER;
    objectEvent->mapNum = MAP_NUM(UNDEFINED);
    objectEvent->mapGroup = MAP_GROUP(UNDEFINED);
    objectEvent->movementActionId = MOVEMENT_ACTION_NONE;
}

static void ClearAllObjectEvents(void)
{
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
        ClearObjectEvent(&gObjectEvents[i]);
}

void ResetObjectEvents(void)
{
    ClearLinkPlayerObjectEvents();
    ClearAllObjectEvents();
    ClearPlayerAvatarInfo();
    CreateReflectionEffectSprites();
}

static void CreateReflectionEffectSprites(void)
{
    u8 spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_REFLECTION_DISTORTION], 0, 0, 31);
    gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
    InitSpriteAffineAnim(&gSprites[spriteId]);
    StartSpriteAffineAnim(&gSprites[spriteId], 0);
    gSprites[spriteId].invisible = TRUE;

    spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_REFLECTION_DISTORTION], 0, 0, 31);
    gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
    InitSpriteAffineAnim(&gSprites[spriteId]);
    StartSpriteAffineAnim(&gSprites[spriteId], 1);
    gSprites[spriteId].invisible = TRUE;
}

u8 GetFirstInactiveObjectEventId(void)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (!gObjectEvents[i].active)
            break;
    }

    return i;
}

u8 GetObjectEventIdByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroupId)
{
    if (localId == OBJ_EVENT_ID_FOLLOWER)
        return GetFollowerObjectId();
    else if (localId < OBJ_EVENT_ID_PLAYER)
        return GetObjectEventIdByLocalIdAndMapInternal(localId, mapNum, mapGroupId);

    return GetObjectEventIdByLocalId(localId);
}

bool8 TryGetObjectEventIdByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroupId, u8 *objectEventId)
{
    *objectEventId = GetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroupId);
    if (*objectEventId == OBJECT_EVENTS_COUNT)
        return TRUE;
    else
        return FALSE;
}

u8 GetObjectEventIdByXY(s16 x, s16 y)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active && gObjectEvents[i].currentCoords.x == x && gObjectEvents[i].currentCoords.y == y)
            break;
    }

    return i;
}

static u8 GetObjectEventIdByLocalIdAndMapInternal(u8 localId, u8 mapNum, u8 mapGroupId)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active && gObjectEvents[i].localId == localId && gObjectEvents[i].mapNum == mapNum && gObjectEvents[i].mapGroup == mapGroupId)
            return i;
    }

    return OBJECT_EVENTS_COUNT;
}

u8 GetObjectEventIdByLocalId(u8 localId)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active && gObjectEvents[i].localId == localId)
            return i;
    }

    return OBJECT_EVENTS_COUNT;
}

static u8 InitObjectEventStateFromTemplate(const struct ObjectEventTemplate *template, u8 mapNum, u8 mapGroup)
{
    struct ObjectEvent *objectEvent;
    u8 objectEventId;
    s16 x;
    s16 y;

    if (GetAvailableObjectEventId(template->localId, mapNum, mapGroup, &objectEventId))
        return OBJECT_EVENTS_COUNT;
    objectEvent = &gObjectEvents[objectEventId];
    ClearObjectEvent(objectEvent);
    x = template->x + MAP_OFFSET;
    y = template->y + MAP_OFFSET;
    objectEvent->active = TRUE;
    objectEvent->triggerGroundEffectsOnMove = TRUE;
    objectEvent->graphicsId = template->graphicsId;
    objectEvent->movementType = template->movementType;
    objectEvent->localId = template->localId;
    objectEvent->mapNum = mapNum;
    objectEvent->mapGroup = mapGroup;
    objectEvent->initialCoords.x = x;
    objectEvent->initialCoords.y = y;
    objectEvent->currentCoords.x = x;
    objectEvent->currentCoords.y = y;
    objectEvent->previousCoords.x = x;
    objectEvent->previousCoords.y = y;
    objectEvent->currentElevation = template->elevation;
    objectEvent->previousElevation = template->elevation;
    objectEvent->rangeX = template->movementRangeX;
    objectEvent->rangeY = template->movementRangeY;
    objectEvent->trainerType = template->trainerType;
    objectEvent->mapNum = mapNum;
    objectEvent->trainerRange_berryTreeId = template->trainerRange_berryTreeId;
    objectEvent->previousMovementDirection = gInitialMovementTypeFacingDirections[template->movementType];
    SetObjectEventDirection(objectEvent, objectEvent->previousMovementDirection);
    SetObjectEventDynamicGraphicsId(objectEvent);
    if (sMovementTypeHasRange[objectEvent->movementType])
    {
        if (objectEvent->rangeX == 0)
            objectEvent->rangeX++;
        if (objectEvent->rangeY == 0)
            objectEvent->rangeY++;
    }
    return objectEventId;
}

u8 Unref_TryInitLocalObjectEvent(u8 localId)
{
    u8 i;
    u8 objectEventCount;
    struct ObjectEventTemplate *template;

    if (gMapHeader.events != NULL)
    {
        if (InBattlePyramid())
            objectEventCount = GetNumBattlePyramidObjectEvents();
        else if (InTrainerHill())
            objectEventCount = HILL_TRAINERS_PER_FLOOR;
        else
            objectEventCount = gMapHeader.events->objectEventCount;

        for (i = 0; i < objectEventCount; i++)
        {
            template = &gSaveBlock1Ptr->objectEventTemplates[i];
            if (template->localId == localId && !FlagGet(template->flagId))
                return InitObjectEventStateFromTemplate(template, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
        }
    }
    return OBJECT_EVENTS_COUNT;
}

static bool8 GetAvailableObjectEventId(u16 localId, u8 mapNum, u8 mapGroup, u8 *objectEventId)
// Looks for an empty slot.
// Returns FALSE and the location of the available slot
// in *objectEventId.
// If no slots are available, or if the object is already
// loaded, returns TRUE.
{
    u8 i = 0;

    for (i = 0; i < OBJECT_EVENTS_COUNT && gObjectEvents[i].active; i++)
    {
        if (gObjectEvents[i].localId == localId && gObjectEvents[i].mapNum == mapNum && gObjectEvents[i].mapGroup == mapGroup)
            return TRUE;
    }
    if (i >= OBJECT_EVENTS_COUNT)
        return TRUE;
    *objectEventId = i;
    for (; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active && gObjectEvents[i].localId == localId && gObjectEvents[i].mapNum == mapNum && gObjectEvents[i].mapGroup == mapGroup)
            return TRUE;
    }
    return FALSE;
}

void RemoveObjectEvent(struct ObjectEvent *objectEvent)
{
    objectEvent->active = FALSE;
    RemoveObjectEventInternal(objectEvent);
}

void RemoveObjectEventByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;
    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        FlagSet(GetObjectEventFlagIdByObjectEventId(objectEventId));
        RemoveObjectEvent(&gObjectEvents[objectEventId]);
    }
}

static void RemoveObjectEventInternal(struct ObjectEvent *objectEvent)
{
    u8 paletteNum;

    struct SpriteFrameImage image;
    image.size = GetObjectEventGraphicsInfo(objectEvent->graphicsId)->size;
    gSprites[objectEvent->spriteId].images = &image;
    paletteNum = gSprites[objectEvent->spriteId].oam.paletteNum;
    DestroySprite(&gSprites[objectEvent->spriteId]);
    FieldEffectFreePaletteIfUnused(paletteNum);
}

void RemoveAllObjectEventsExceptPlayer(void)
{
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (i != gPlayerAvatar.objectEventId)
            RemoveObjectEvent(&gObjectEvents[i]);
    }
}

static u8 TrySetupObjectEventSprite(const struct ObjectEventTemplate *objectEventTemplate, struct SpriteTemplate *spriteTemplate, u8 mapNum, u8 mapGroup, s16 cameraX, s16 cameraY)
{
    u8 spriteId;
    //u8 paletteSlot;
    u8 objectEventId;
    struct Sprite *sprite;
    struct ObjectEvent *objectEvent;
    const struct ObjectEventGraphicsInfo *graphicsInfo;

    objectEventId = InitObjectEventStateFromTemplate(objectEventTemplate, mapNum, mapGroup);
    if (objectEventId == OBJECT_EVENTS_COUNT)
        return OBJECT_EVENTS_COUNT;

    objectEvent = &gObjectEvents[objectEventId];
    graphicsInfo = GetObjectEventGraphicsInfo(objectEvent->graphicsId);
    if (spriteTemplate->paletteTag != TAG_NONE)
    {
        LoadObjectEventPalette(spriteTemplate->paletteTag);
        UpdatePaletteGammaType(IndexOfSpritePaletteTag(spriteTemplate->paletteTag), GAMMA_ALT);
    }

    if (objectEvent->movementType == MOVEMENT_TYPE_INVISIBLE)
        objectEvent->invisible = TRUE;

    spriteId = CreateSprite(spriteTemplate, 0, 0, 0);
    if (spriteId == MAX_SPRITES)
    {
        gObjectEvents[objectEventId].active = FALSE;
        return OBJECT_EVENTS_COUNT;
    }

    sprite = &gSprites[spriteId];
    GetMapCoordsFromSpritePos(objectEvent->currentCoords.x + cameraX, objectEvent->currentCoords.y + cameraY, &sprite->x, &sprite->y);
    sprite->centerToCornerVecX = -(graphicsInfo->width >> 1);
    sprite->centerToCornerVecY = -(graphicsInfo->height >> 1);
    sprite->x += 8;
    sprite->y += 16 + sprite->centerToCornerVecY;
    sprite->oam.paletteNum = IndexOfSpritePaletteTag(spriteTemplate->paletteTag);
    sprite->coordOffsetEnabled = TRUE;
    sprite->sObjEventId = objectEventId;
    objectEvent->spriteId = spriteId;
    objectEvent->inanimate = graphicsInfo->inanimate;
    if (!objectEvent->inanimate)
        StartSpriteAnim(sprite, GetFaceDirectionAnimNum(objectEvent->facingDirection));

    SetObjectSubpriorityByElevation(objectEvent->previousElevation, sprite, 1);
    UpdateObjectEventVisibility(objectEvent, sprite);
    return objectEventId;
}

u8 TrySpawnObjectEventTemplate(const struct ObjectEventTemplate *objectEventTemplate, u8 mapNum, u8 mapGroup, s16 cameraX, s16 cameraY)
{
    u8 objectEventId;
    struct SpriteTemplate spriteTemplate;
    struct SpriteFrameImage spriteFrameImage;
    const struct ObjectEventGraphicsInfo *graphicsInfo;
    const struct SubspriteTable *subspriteTables = NULL;

    graphicsInfo = GetObjectEventGraphicsInfo(objectEventTemplate->graphicsId);
    MakeSpriteTemplateFromObjectEventTemplate(objectEventTemplate, &spriteTemplate, &subspriteTables);
    spriteFrameImage.size = graphicsInfo->size;
    spriteTemplate.images = &spriteFrameImage;
    objectEventId = TrySetupObjectEventSprite(objectEventTemplate, &spriteTemplate, mapNum, mapGroup, cameraX, cameraY);
    if (objectEventId == OBJECT_EVENTS_COUNT)
        return OBJECT_EVENTS_COUNT;

    gSprites[gObjectEvents[objectEventId].spriteId].images = graphicsInfo->images;
    if (subspriteTables)
        SetSubspriteTables(&gSprites[gObjectEvents[objectEventId].spriteId], subspriteTables);

    return objectEventId;
}

u8 SpawnSpecialObjectEvent(struct ObjectEventTemplate *objectEventTemplate)
{
    s16 cameraX;
    s16 cameraY;

    GetObjectEventMovingCameraOffset(&cameraX, &cameraY);
    return TrySpawnObjectEventTemplate(objectEventTemplate, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, cameraX, cameraY);
}

u8 SpawnSpecialObjectEventParameterized(u16 graphicsId, u8 movementBehavior, u8 localId, s16 x, s16 y, u8 elevation)
{
    struct ObjectEventTemplate objectEventTemplate;

    x -= MAP_OFFSET;
    y -= MAP_OFFSET;
    objectEventTemplate.localId = localId;
    objectEventTemplate.graphicsId = graphicsId;
    objectEventTemplate.kind = OBJ_KIND_NORMAL;
    objectEventTemplate.x = x;
    objectEventTemplate.y = y;
    objectEventTemplate.elevation = elevation;
    objectEventTemplate.movementType = movementBehavior;
    objectEventTemplate.movementRangeX = 0;
    objectEventTemplate.movementRangeY = 0;
    objectEventTemplate.trainerType = TRAINER_TYPE_NONE;
    objectEventTemplate.trainerRange_berryTreeId = 0;
    return SpawnSpecialObjectEvent(&objectEventTemplate);
}

u8 TrySpawnObjectEvent(u8 localId, u8 mapNum, u8 mapGroup)
{
    const struct ObjectEventTemplate *objectEventTemplate;
    s16 cameraX, cameraY;

    objectEventTemplate = GetObjectEventTemplateByLocalIdAndMap(localId, mapNum, mapGroup);
    if (!objectEventTemplate)
        return OBJECT_EVENTS_COUNT;

    GetObjectEventMovingCameraOffset(&cameraX, &cameraY);
    return TrySpawnObjectEventTemplate(objectEventTemplate, mapNum, mapGroup, cameraX, cameraY);
}

static void CopyObjectGraphicsInfoToSpriteTemplate(u16 graphicsId, void (*callback)(struct Sprite *), struct SpriteTemplate *spriteTemplate, const struct SubspriteTable **subspriteTables)
{
    const struct ObjectEventGraphicsInfo *graphicsInfo = GetObjectEventGraphicsInfo(graphicsId);

    spriteTemplate->tileTag = graphicsInfo->tileTag;
    spriteTemplate->paletteTag = graphicsInfo->paletteTag;
    spriteTemplate->oam = graphicsInfo->oam;
    spriteTemplate->anims = graphicsInfo->anims;
    spriteTemplate->images = graphicsInfo->images;
    spriteTemplate->affineAnims = graphicsInfo->affineAnims;
    spriteTemplate->callback = callback;
    *subspriteTables = graphicsInfo->subspriteTables;
}

static void CopyObjectGraphicsInfoToSpriteTemplate_WithMovementType(u16 graphicsId, u16 movementType, struct SpriteTemplate *spriteTemplate, const struct SubspriteTable **subspriteTables)
{
    CopyObjectGraphicsInfoToSpriteTemplate(graphicsId, sMovementTypeCallbacks[movementType], spriteTemplate, subspriteTables);
}

static void MakeSpriteTemplateFromObjectEventTemplate(const struct ObjectEventTemplate *objectEventTemplate, struct SpriteTemplate *spriteTemplate, const struct SubspriteTable **subspriteTables)
{
    CopyObjectGraphicsInfoToSpriteTemplate_WithMovementType(objectEventTemplate->graphicsId, objectEventTemplate->movementType, spriteTemplate, subspriteTables);
}

// Used to create a sprite using a graphicsId associated with object events.
u8 CreateObjectGraphicsSprite(u16 graphicsId, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority)
{
    struct SpriteTemplate *spriteTemplate;
    const struct SubspriteTable *subspriteTables;
    struct Sprite *sprite;
    u8 spriteId;

    spriteTemplate = Alloc(sizeof(struct SpriteTemplate));
    CopyObjectGraphicsInfoToSpriteTemplate(graphicsId, callback, spriteTemplate, &subspriteTables);
    if (spriteTemplate->paletteTag != TAG_NONE)
        LoadObjectEventPalette(spriteTemplate->paletteTag);

    spriteId = CreateSprite(spriteTemplate, x, y, subpriority);
    Free(spriteTemplate);

    if (spriteId != MAX_SPRITES && subspriteTables != NULL)
    {
        sprite = &gSprites[spriteId];
        SetSubspriteTables(sprite, subspriteTables);
        sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
    }
    return spriteId;
}

#define sVirtualObjId   data[0]
#define sVirtualObjElev data[1]

// "Virtual Objects" are a class of sprites used instead of a full object event.
// Used when more objects are needed than the object event limit (for Contest / Battle Dome audiences and group members in Union Room).
// A unique id is given as an argument and stored in the sprite data to allow referring back to the same virtual object.
// They can be turned (and, in the case of the Union Room, animated teleporting in and out) but do not have movement types
// or any of the other data normally associated with object events.
u8 CreateVirtualObject(u16 graphicsId, u8 virtualObjId, s16 x, s16 y, u8 elevation, u8 direction)
{
    u8 spriteId;
    struct Sprite *sprite;
    struct SpriteTemplate spriteTemplate;
    const struct SubspriteTable *subspriteTables;
    const struct ObjectEventGraphicsInfo *graphicsInfo;

    graphicsInfo = GetObjectEventGraphicsInfo(graphicsId);
    CopyObjectGraphicsInfoToSpriteTemplate(graphicsId, SpriteCB_VirtualObject, &spriteTemplate, &subspriteTables);
    if (spriteTemplate.paletteTag != TAG_NONE)
    {
        LoadObjectEventPalette(spriteTemplate.paletteTag);
        UpdatePaletteGammaType(IndexOfSpritePaletteTag(spriteTemplate.paletteTag), GAMMA_ALT);
    }
    x += MAP_OFFSET;
    y += MAP_OFFSET;
    SetSpritePosToOffsetMapCoords(&x, &y, 8, 16);
    spriteId = CreateSpriteAtEnd(&spriteTemplate, x, y, 0);
    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->centerToCornerVecX = -(graphicsInfo->width >> 1);
        sprite->centerToCornerVecY = -(graphicsInfo->height >> 1);
        sprite->y += sprite->centerToCornerVecY;
        sprite->oam.paletteNum = IndexOfSpritePaletteTag(spriteTemplate.paletteTag);
        sprite->coordOffsetEnabled = TRUE;
        sprite->sVirtualObjId = virtualObjId;
        sprite->sVirtualObjElev = elevation;
        if (subspriteTables != NULL)
        {
            SetSubspriteTables(sprite, subspriteTables);
            sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        }
        InitObjectPriorityByElevation(sprite, elevation);
        SetObjectSubpriorityByElevation(elevation, sprite, 1);
        StartSpriteAnim(sprite, GetFaceDirectionAnimNum(direction));
    }
    return spriteId;
}

void TrySpawnObjectEvents(s16 cameraX, s16 cameraY)
{
    u8 i;
    u8 objectCount;

    if (gMapHeader.events != NULL)
    {
        s16 left = gSaveBlock1Ptr->pos.x - 2;
        s16 right = gSaveBlock1Ptr->pos.x + MAP_OFFSET_W + 2;
        s16 top = gSaveBlock1Ptr->pos.y;
        s16 bottom = gSaveBlock1Ptr->pos.y + MAP_OFFSET_H + 2;

        if (InBattlePyramid())
            objectCount = GetNumBattlePyramidObjectEvents();
        else if (InTrainerHill())
            objectCount = HILL_TRAINERS_PER_FLOOR;
        else
            objectCount = gMapHeader.events->objectEventCount;

        for (i = 0; i < objectCount; i++)
        {
            struct ObjectEventTemplate *template = &gSaveBlock1Ptr->objectEventTemplates[i];
            s16 npcX = template->x + MAP_OFFSET;
            s16 npcY = template->y + MAP_OFFSET;

            if (top <= npcY && bottom >= npcY && left <= npcX && right >= npcX
                && !FlagGet(template->flagId))
                TrySpawnObjectEventTemplate(template, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, cameraX, cameraY);
        }

        for (i = 0; i < MAX_DYNAMIC_OBJECTS; i++)
        {
            if (gSaveBlock1Ptr->dynamicObjects[i].active == TRUE)
            {
                if ((gSaveBlock1Ptr->location.mapGroup == gSaveBlock1Ptr->dynamicObjects[i].mapGroup) && (gSaveBlock1Ptr->location.mapNum == gSaveBlock1Ptr->dynamicObjects[i].mapNum))
                {
                    s16 dynobjX = gSaveBlock1Ptr->dynamicObjects[i].x + 7;
                    s16 dynobjY = gSaveBlock1Ptr->dynamicObjects[i].y + 7;
                    if (top <= dynobjY &&
                        bottom >= dynobjY &&
                        left <= dynobjX &&
                        right >= dynobjX)
                    {
                            SpawnDynamicObject(gSaveBlock1Ptr->dynamicObjects[i].localId,
                                                  gSaveBlock1Ptr->dynamicObjects[i].gfxId,
                                                  gSaveBlock1Ptr->dynamicObjects[i].movement,
                                                  dynobjX - 7,
                                                  dynobjY - 7,
                                                  gSaveBlock1Ptr->dynamicObjects[i].z,
                                                  gSaveBlock1Ptr->dynamicObjects[i].scriptPtr);

                    }
                }
            }
        }
    }
}

void RemoveObjectEventsOutsideView(void)
{
    u8 i, j;
    bool8 isActiveLinkPlayer;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        for (j = 0, isActiveLinkPlayer = FALSE; j < ARRAY_COUNT(gLinkPlayerObjectEvents); j++)
        {
            if (gLinkPlayerObjectEvents[j].active && i == gLinkPlayerObjectEvents[j].objEventId)
                isActiveLinkPlayer = TRUE;
        }
        if (!isActiveLinkPlayer)
        {
            struct ObjectEvent *objectEvent = &gObjectEvents[i];

            if (objectEvent->active && !objectEvent->isPlayer && i != GetFollowerObjectId())
                RemoveObjectEventIfOutsideView(objectEvent);
        }
    }
}

static void RemoveObjectEventIfOutsideView(struct ObjectEvent *objectEvent)
{
    s16 left =   gSaveBlock1Ptr->pos.x - 2;
    s16 right =  gSaveBlock1Ptr->pos.x + 17;
    s16 top =    gSaveBlock1Ptr->pos.y;
    s16 bottom = gSaveBlock1Ptr->pos.y + 16;

    if (objectEvent->currentCoords.x >= left && objectEvent->currentCoords.x <= right
     && objectEvent->currentCoords.y >= top && objectEvent->currentCoords.y <= bottom)
        return;
    if (objectEvent->initialCoords.x >= left && objectEvent->initialCoords.x <= right
     && objectEvent->initialCoords.y >= top && objectEvent->initialCoords.y <= bottom)
        return;
    RemoveObjectEvent(objectEvent);
}

void SpawnObjectEventsOnReturnToField(s16 x, s16 y)
{
    u8 i;

    ClearPlayerAvatarInfo();
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active)
            SpawnObjectEventOnReturnToField(i, x, y);
    }
    CreateReflectionEffectSprites();
}

static void SpawnObjectEventOnReturnToField(u8 objectEventId, s16 x, s16 y)
{
    u8 i;
    //u8 paletteSlot;
    struct Sprite *sprite;
    struct ObjectEvent *objectEvent;
    struct SpriteTemplate spriteTemplate;
    struct SpriteFrameImage spriteFrameImage;
    const struct SubspriteTable *subspriteTables;
    const struct ObjectEventGraphicsInfo *graphicsInfo;

    for (i = 0; i < ARRAY_COUNT(gLinkPlayerObjectEvents); i++)
    {
        if (gLinkPlayerObjectEvents[i].active && objectEventId == gLinkPlayerObjectEvents[i].objEventId)
            return;
    }

    objectEvent = &gObjectEvents[objectEventId];
    subspriteTables = NULL;
    graphicsInfo = GetObjectEventGraphicsInfo(objectEvent->graphicsId);
    spriteFrameImage.size = graphicsInfo->size;
    CopyObjectGraphicsInfoToSpriteTemplate_WithMovementType(objectEvent->graphicsId, objectEvent->movementType, &spriteTemplate, &subspriteTables);
    spriteTemplate.images = &spriteFrameImage;
    if (spriteTemplate.paletteTag != TAG_NONE)
    {
        LoadObjectEventPalette(spriteTemplate.paletteTag);
        UpdatePaletteGammaType(IndexOfSpritePaletteTag(spriteTemplate.paletteTag), GAMMA_ALT);
    }

    i = CreateSprite(&spriteTemplate, 0, 0, 0);
    if (i != MAX_SPRITES)
    {
        sprite = &gSprites[i];
        GetMapCoordsFromSpritePos(x + objectEvent->currentCoords.x, y + objectEvent->currentCoords.y, &sprite->x, &sprite->y);
        sprite->centerToCornerVecX = -(graphicsInfo->width >> 1);
        sprite->centerToCornerVecY = -(graphicsInfo->height >> 1);
        sprite->x += 8;
        sprite->y += 16 + sprite->centerToCornerVecY;
        sprite->images = graphicsInfo->images;
        if (objectEvent->movementType == MOVEMENT_TYPE_PLAYER)
        {
            SetPlayerAvatarObjectEventIdAndObjectId(objectEventId, i);
            objectEvent->warpArrowSpriteId = CreateWarpArrowSprite();
        }
        if (subspriteTables != NULL)
            SetSubspriteTables(sprite, subspriteTables);

        sprite->oam.paletteNum = IndexOfSpritePaletteTag(spriteTemplate.paletteTag);
        sprite->coordOffsetEnabled = TRUE;
        sprite->sObjEventId = objectEventId;
        objectEvent->spriteId = i;
        if (!objectEvent->inanimate && objectEvent->movementType != MOVEMENT_TYPE_PLAYER)
            StartSpriteAnim(sprite, GetFaceDirectionAnimNum(objectEvent->facingDirection));

        ResetObjectEventFldEffData(objectEvent);
        SetObjectSubpriorityByElevation(objectEvent->previousElevation, sprite, 1);
    }
}

static void ResetObjectEventFldEffData(struct ObjectEvent *objectEvent)
{
    objectEvent->singleMovementActive = FALSE;
    objectEvent->triggerGroundEffectsOnMove = TRUE;
    objectEvent->hasShadow = FALSE;
    objectEvent->hasReflection = FALSE;
    objectEvent->inShortGrass = FALSE;
    objectEvent->inShallowFlowingWater = FALSE;
    objectEvent->inSandPile = FALSE;
    objectEvent->inHotSprings = FALSE;
    ObjectEventClearHeldMovement(objectEvent);
}

static void SetPlayerAvatarObjectEventIdAndObjectId(u8 objectEventId, u8 spriteId)
{
    gPlayerAvatar.objectEventId = objectEventId;
    gPlayerAvatar.spriteId = spriteId;
    gPlayerAvatar.gender = GetPlayerAvatarGenderByGraphicsId(gObjectEvents[objectEventId].graphicsId);
    SetPlayerAvatarExtraStateTransition(gObjectEvents[objectEventId].graphicsId, PLAYER_AVATAR_FLAG_CONTROLLABLE);
}

void ObjectEventSetGraphicsId(struct ObjectEvent *objectEvent, u16 graphicsId)
{
    const struct ObjectEventGraphicsInfo *graphicsInfo;
    struct Sprite *sprite;
    //u8 paletteSlot;

    graphicsInfo = GetObjectEventGraphicsInfo(graphicsId);
    sprite = &gSprites[objectEvent->spriteId];
    if (graphicsInfo->paletteTag != TAG_NONE)
    {
        LoadObjectEventPalette(graphicsInfo->paletteTag);
        UpdatePaletteGammaType(IndexOfSpritePaletteTag(graphicsInfo->paletteTag), GAMMA_ALT);
    }
    sprite->oam.shape = graphicsInfo->oam->shape;
    sprite->oam.size = graphicsInfo->oam->size;
    sprite->images = graphicsInfo->images;
    sprite->anims = graphicsInfo->anims;
    sprite->subspriteTables = graphicsInfo->subspriteTables;
    sprite->oam.paletteNum = IndexOfSpritePaletteTag(graphicsInfo->paletteTag);
    objectEvent->inanimate = graphicsInfo->inanimate;
    objectEvent->graphicsId = graphicsId;
    SetSpritePosToMapCoords(objectEvent->currentCoords.x, objectEvent->currentCoords.y, &sprite->x, &sprite->y);
    sprite->centerToCornerVecX = -(graphicsInfo->width >> 1);
    sprite->centerToCornerVecY = -(graphicsInfo->height >> 1);
    sprite->x += 8;
    sprite->y += 16 + sprite->centerToCornerVecY;
    if (objectEvent->trackedByCamera)
        CameraObjectReset();
}

void ObjectEventSetGraphicsIdByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup, u16 graphicsId)
{
    u8 objectEventId;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        ObjectEventSetGraphicsId(&gObjectEvents[objectEventId], graphicsId);
}

void ObjectEventTurn(struct ObjectEvent *objectEvent, u8 direction)
{
    SetObjectEventDirection(objectEvent, direction);
    if (!objectEvent->inanimate)
    {
        StartSpriteAnim(&gSprites[objectEvent->spriteId], GetFaceDirectionAnimNum(objectEvent->facingDirection));
        SeekSpriteAnim(&gSprites[objectEvent->spriteId], 0);
    }
}

void ObjectEventTurnByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup, u8 direction)
{
    u8 objectEventId;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        ObjectEventTurn(&gObjectEvents[objectEventId], direction);
}

void PlayerObjectTurn(struct PlayerAvatar *playerAvatar, u8 direction)
{
    ObjectEventTurn(&gObjectEvents[playerAvatar->objectEventId], direction);
}

static void SetBerryTreeGraphics(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 berryStage;
    u8 berryId;

    objectEvent->invisible = TRUE;
    sprite->invisible = TRUE;
    berryStage = GetStageByBerryTreeId(objectEvent->trainerRange_berryTreeId);
    if (berryStage != BERRY_STAGE_NO_BERRY)
    {
        objectEvent->invisible = FALSE;
        sprite->invisible = FALSE;
        berryId = GetBerryTypeByBerryTreeId(objectEvent->trainerRange_berryTreeId) - 1;
        berryStage--;
        if (berryId > ITEM_TO_BERRY(LAST_BERRY_INDEX))
            berryId = 0;

        LoadObjectEventPalette(gBerryTreePaletteTagTablePointers[berryId][berryStage]);
        ObjectEventSetGraphicsId(objectEvent, gBerryTreeObjectEventGraphicsIdTable[berryStage]);
        sprite->images = gBerryTreePicTablePointers[berryId];
        sprite->oam.paletteNum = IndexOfSpritePaletteTag(gBerryTreePaletteTagTablePointers[berryId][berryStage]);
        UpdatePaletteGammaType(sprite->oam.paletteNum, GAMMA_ALT);
        StartSpriteAnim(sprite, berryStage);
    }
}

const struct ObjectEventGraphicsInfo *GetObjectEventGraphicsInfo(u16 graphicsId)
{
    u8 bard;

    if (graphicsId >= OBJ_EVENT_GFX_VARS)
        graphicsId = VarGetObjectEventGraphicsId(graphicsId - OBJ_EVENT_GFX_VARS);

    if (graphicsId == OBJ_EVENT_GFX_BARD)
    {
        bard = GetCurrentMauvilleOldMan();
        return gMauvilleOldManGraphicsInfoPointers[bard];
    }

    if (graphicsId >= NUM_OBJ_EVENT_GFX)
        graphicsId = OBJ_EVENT_GFX_NINJA_BOY;

    return gObjectEventGraphicsInfoPointers[graphicsId];
}

static void SetObjectEventDynamicGraphicsId(struct ObjectEvent *objectEvent)
{
    if (objectEvent->graphicsId >= OBJ_EVENT_GFX_VARS)
        objectEvent->graphicsId = VarGetObjectEventGraphicsId(objectEvent->graphicsId - OBJ_EVENT_GFX_VARS);
}

void SetObjectInvisibility(u8 localId, u8 mapNum, u8 mapGroup, bool8 invisible)
{
    u8 objectEventId;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        gObjectEvents[objectEventId].invisible = invisible;
}

void ObjectEventGetLocalIdAndMap(struct ObjectEvent *objectEvent, void *localId, void *mapNum, void *mapGroup)
{
    *(u8 *)(localId) = objectEvent->localId;
    *(u8 *)(mapNum) = objectEvent->mapNum;
    *(u8 *)(mapGroup) = objectEvent->mapGroup;
}

void AllowObjectAtPosTriggerGroundEffects(s16 x, s16 y)
{
    u8 objectEventId;
    struct ObjectEvent *objectEvent;

    objectEventId = GetObjectEventIdByXY(x, y);
    if (objectEventId != OBJECT_EVENTS_COUNT)
    {
        objectEvent = &gObjectEvents[objectEventId];
        objectEvent->triggerGroundEffectsOnMove = TRUE;
    }
}

void SetObjectSubpriority(u8 localId, u8 mapNum, u8 mapGroup, u8 subpriority)
{
    u8 objectEventId;
    struct ObjectEvent *objectEvent;
    struct Sprite *sprite;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        objectEvent = &gObjectEvents[objectEventId];
        sprite = &gSprites[objectEvent->spriteId];
        objectEvent->fixedPriority = TRUE;
        sprite->subpriority = subpriority;
    }
}

void ResetObjectSubpriority(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;
    struct ObjectEvent *objectEvent;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        objectEvent = &gObjectEvents[objectEventId];
        objectEvent->fixedPriority = FALSE;
        objectEvent->triggerGroundEffectsOnMove = TRUE;
    }
}

void SetObjectEventSpritePosByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup, s16 x, s16 y)
{
    u8 objectEventId;
    struct Sprite *sprite;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        sprite = &gSprites[gObjectEvents[objectEventId].spriteId];
        sprite->x2 = x;
        sprite->y2 = y;
    }
}

void FreeAndReserveObjectSpritePalettes(void)
{
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = OBJ_PALSLOT_COUNT;
}

void LoadObjectEventPalette(u16 paletteTag)
{
    u16 i = FindObjectEventPaletteIndexByTag(paletteTag);

// FindObjectEventPaletteIndexByTag returns 0xFF on failure, not OBJ_EVENT_PAL_TAG_NONE.
#ifdef BUGFIX
    if (i != 0xFF)
#else
    if (i != OBJ_EVENT_PAL_TAG_NONE)
#endif
        LoadSpritePaletteIfTagExists(&sObjectEventSpritePalettes[i]);
}

static void UNUSED LoadObjectEventPaletteSet(u16 *paletteTags)
{
    u8 i;

    for (i = 0; paletteTags[i] != OBJ_EVENT_PAL_TAG_NONE; i++)
        LoadObjectEventPalette(paletteTags[i]);
}

// NOTE: Does not use LoadSpritePaletteDayNight because of naming screen
static u8 LoadSpritePaletteIfTagExists(const struct SpritePalette *spritePalette)
{
    if (IndexOfSpritePaletteTag(spritePalette->tag) != 0xFF)
        return 0xFF;

    return LoadSpritePaletteDayNight(spritePalette);
}

void PatchObjectPalette(u16 paletteTag, u8 paletteSlot)
{
    u32 paletteIndex = FindObjectEventPaletteIndexByTag(paletteTag);

    LoadPaletteDayNight(sObjectEventSpritePalettes[paletteIndex].data, OBJ_PLTT_ID(paletteSlot), PLTT_SIZE_4BPP);
}

void PatchObjectPaletteRange(const u16 *paletteTags, u8 minSlot, u8 maxSlot)
{
    while (minSlot < maxSlot)
    {
        PatchObjectPalette(*paletteTags, minSlot);
        paletteTags++;
        minSlot++;
    }
}

static u32 FindObjectEventPaletteIndexByTag(u16 tag)
{
    u32 i;

    for (i = 0; sObjectEventSpritePalettes[i].tag != OBJ_EVENT_PAL_TAG_NONE; i++)
    {
        if (sObjectEventSpritePalettes[i].tag == tag)
            return i;
    }
    return -1;
}

static void _PatchObjectPalette(u16 tag, u8 slot)
{
    PatchObjectPalette(tag, slot);
}

static void UNUSED IncrementObjectEventCoords(struct ObjectEvent *objectEvent, s16 x, s16 y)
{
    objectEvent->previousCoords.x = objectEvent->currentCoords.x;
    objectEvent->previousCoords.y = objectEvent->currentCoords.y;
    objectEvent->currentCoords.x += x;
    objectEvent->currentCoords.y += y;
}

void ShiftObjectEventCoords(struct ObjectEvent *objectEvent, s16 x, s16 y)
{
    objectEvent->previousCoords.x = objectEvent->currentCoords.x;
    objectEvent->previousCoords.y = objectEvent->currentCoords.y;
    objectEvent->currentCoords.x = x;
    objectEvent->currentCoords.y = y;
}

static void SetObjectEventCoords(struct ObjectEvent *objectEvent, s16 x, s16 y)
{
    objectEvent->previousCoords.x = x;
    objectEvent->previousCoords.y = y;
    objectEvent->currentCoords.x = x;
    objectEvent->currentCoords.y = y;
}

void MoveObjectEventToMapCoords(struct ObjectEvent *objectEvent, s16 x, s16 y)
{
    struct Sprite *sprite;
    const struct ObjectEventGraphicsInfo *graphicsInfo;

    sprite = &gSprites[objectEvent->spriteId];
    graphicsInfo = GetObjectEventGraphicsInfo(objectEvent->graphicsId);
    SetObjectEventCoords(objectEvent, x, y);
    SetSpritePosToMapCoords(objectEvent->currentCoords.x, objectEvent->currentCoords.y, &sprite->x, &sprite->y);
    sprite->centerToCornerVecX = -(graphicsInfo->width >> 1);
    sprite->centerToCornerVecY = -(graphicsInfo->height >> 1);
    sprite->x += 8;
    sprite->y += 16 + sprite->centerToCornerVecY;
    ResetObjectEventFldEffData(objectEvent);
    if (objectEvent->trackedByCamera)
        CameraObjectReset();
}

void TryMoveObjectEventToMapCoords(u8 localId, u8 mapNum, u8 mapGroup, s16 x, s16 y)
{
    u8 objectEventId;
    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        x += MAP_OFFSET;
        y += MAP_OFFSET;
        MoveObjectEventToMapCoords(&gObjectEvents[objectEventId], x, y);
    }
}

void ShiftStillObjectEventCoords(struct ObjectEvent *objectEvent)
{
    ShiftObjectEventCoords(objectEvent, objectEvent->currentCoords.x, objectEvent->currentCoords.y);
}

void UpdateObjectEventCoordsForCameraUpdate(void)
{
    u8 i;
    s16 dx;
    s16 dy;

    if (gCamera.active)
    {
        dx = gCamera.x;
        dy = gCamera.y;
        for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
        {
            if (gObjectEvents[i].active)
            {
                gObjectEvents[i].initialCoords.x -= dx;
                gObjectEvents[i].initialCoords.y -= dy;
                gObjectEvents[i].currentCoords.x -= dx;
                gObjectEvents[i].currentCoords.y -= dy;
                gObjectEvents[i].previousCoords.x -= dx;
                gObjectEvents[i].previousCoords.y -= dy;
            }
        }
    }
}

u8 GetObjectEventIdByPosition(u16 x, u16 y, u8 elevation)
{
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active)
        {
            if (gObjectEvents[i].currentCoords.x == x
             && gObjectEvents[i].currentCoords.y == y
             && ObjectEventDoesElevationMatch(&gObjectEvents[i], elevation))
                return i;
        }
    }
    return OBJECT_EVENTS_COUNT;
}

static bool8 ObjectEventDoesElevationMatch(struct ObjectEvent *objectEvent, u8 elevation)
{
    if (objectEvent->currentElevation != 0 && elevation != 0 && objectEvent->currentElevation != elevation)
        return FALSE;

    return TRUE;
}

void UpdateObjectEventsForCameraUpdate(s16 x, s16 y)
{
    UpdateObjectEventCoordsForCameraUpdate();
    TrySpawnObjectEvents(x, y);
    RemoveObjectEventsOutsideView();
}

// The "CameraObject" functions below are responsible for an invisible sprite
// that follows the movements of a different sprite (normally the player's sprite)
// and tracks x/y movement distances for the camera so it knows where to move.
u8 AddCameraObject(u8 followSpriteId)
{
    u8 spriteId = CreateSprite(&sCameraSpriteTemplate, 0, 0, 4);

    gSprites[spriteId].invisible = TRUE;
    gSprites[spriteId].sCamera_FollowSpriteId = followSpriteId;
    return spriteId;
}

static void SpriteCB_CameraObject(struct Sprite *sprite)
{
    void (*callbacks[ARRAY_COUNT(sCameraObjectFuncs)])(struct Sprite *);

    memcpy(callbacks, sCameraObjectFuncs, sizeof sCameraObjectFuncs);
    callbacks[sprite->sCamera_State](sprite);
}

static void CameraObject_Init(struct Sprite *sprite)
{
    sprite->x = gSprites[sprite->sCamera_FollowSpriteId].x;
    sprite->y = gSprites[sprite->sCamera_FollowSpriteId].y;
    sprite->invisible = TRUE;
    sprite->sCamera_State = CAMERA_STATE_MOVE;
    CameraObject_UpdateMove(sprite);
}

static void CameraObject_UpdateMove(struct Sprite *sprite)
{
    s16 x = gSprites[sprite->sCamera_FollowSpriteId].x;
    s16 y = gSprites[sprite->sCamera_FollowSpriteId].y;

    sprite->sCamera_MoveX = x - sprite->x;
    sprite->sCamera_MoveY = y - sprite->y;
    sprite->x = x;
    sprite->y = y;
}

// Invisible sprite will continue to follow the parent sprite,
// but no corresponding camera movement will be shown.
static void CameraObject_UpdateFrozen(struct Sprite *sprite)
{
    sprite->x = gSprites[sprite->sCamera_FollowSpriteId].x;
    sprite->y = gSprites[sprite->sCamera_FollowSpriteId].y;
    sprite->sCamera_MoveX = 0;
    sprite->sCamera_MoveY = 0;
}

static struct Sprite *FindCameraSprite(void)
{
    u8 i;

    for (i = 0; i < MAX_SPRITES; i++)
    {
        if (gSprites[i].inUse && gSprites[i].callback == SpriteCB_CameraObject)
            return &gSprites[i];
    }
    return NULL;
}

void CameraObjectReset(void)
{
    struct Sprite *camera = FindCameraSprite();
    if (camera != NULL)
    {
        camera->sCamera_State = CAMERA_STATE_INIT;
        camera->callback(camera);
    }
}

void CameraObjectSetFollowedSpriteId(u8 spriteId)
{
    struct Sprite *camera = FindCameraSprite();
    if (camera != NULL)
    {
        camera->sCamera_FollowSpriteId = spriteId;
        CameraObjectReset();
    }
}

static u8 UNUSED CameraObjectGetFollowedSpriteId(void)
{
    struct Sprite *camera = FindCameraSprite();
    if (camera == NULL)
        return MAX_SPRITES;

    return camera->sCamera_FollowSpriteId;
}

void CameraObjectFreeze(void)
{
    struct Sprite *camera = FindCameraSprite();
#ifdef UBFIX // Possible null dereference
    if (camera == NULL)
        return;
#endif
    camera->sCamera_State = CAMERA_STATE_FROZEN;
}

u8 CopySprite(struct Sprite *sprite, s16 x, s16 y, u8 subpriority)
{
    u8 i;

    for (i = 0; i < MAX_SPRITES; i++)
    {
        if (!gSprites[i].inUse)
        {
            gSprites[i] = *sprite;
            gSprites[i].x = x;
            gSprites[i].y = y;
            gSprites[i].subpriority = subpriority;
            break;
        }
    }
    return i;
}

u8 CreateCopySpriteAt(struct Sprite *sprite, s16 x, s16 y, u8 subpriority)
{
    s16 i;

    for (i = MAX_SPRITES - 1; i > -1; i--)
    {
        if (!gSprites[i].inUse)
        {
            gSprites[i] = *sprite;
            gSprites[i].x = x;
            gSprites[i].y = y;
            gSprites[i].subpriority = subpriority;
            return i;
        }
    }
    return MAX_SPRITES;
}

void SetObjectEventDirection(struct ObjectEvent *objectEvent, u8 direction)
{
    s8 d2;
    objectEvent->previousMovementDirection = objectEvent->facingDirection;
    if (!objectEvent->facingDirectionLocked)
    {
        d2 = direction;
        objectEvent->facingDirection = d2;
    }
    objectEvent->movementDirection = direction;
}

static const u8 *GetObjectEventScriptPointerByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup)
{
    s8 index;
    index = localId - 0xF0;

    if (index >= 0 && index <= MAX_DYNAMIC_OBJECTS) {
        return gSaveBlock1Ptr->dynamicObjects[index].scriptPtr;
    }

    /* old legacy code (hard-code the # of dynamic objects), probably needs testing w/ more objects though
    switch (localId)
    {
        case 0xF0:
            return gSaveBlock1Ptr->dynamicObjects[0].scriptPtr;
        case 0xF1:
            return gSaveBlock1Ptr->dynamicObjects[1].scriptPtr;
        case 0xF2:
            return gSaveBlock1Ptr->dynamicObjects[2].scriptPtr;
        case 0xF3:
            return gSaveBlock1Ptr->dynamicObjects[3].scriptPtr;
    }
    */
    return GetObjectEventTemplateByLocalIdAndMap(localId, mapNum, mapGroup)->script;  
}

const u8 *GetObjectEventScriptPointerByObjectEventId(u8 objectEventId)
{
    return GetObjectEventScriptPointerByLocalIdAndMap(gObjectEvents[objectEventId].localId, gObjectEvents[objectEventId].mapNum, gObjectEvents[objectEventId].mapGroup);
}

static u16 GetObjectEventFlagIdByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup)
{
    const struct ObjectEventTemplate *obj = GetObjectEventTemplateByLocalIdAndMap(localId, mapNum, mapGroup);
#ifdef UBFIX
    // BUG: The function may return NULL, and attempting to read from NULL may freeze the game using modern compilers.
    if (obj == NULL)
        return 0;
#endif // UBFIX
    return obj->flagId;
}

static u16 GetObjectEventFlagIdByObjectEventId(u8 objectEventId)
{
    return GetObjectEventFlagIdByLocalIdAndMap(gObjectEvents[objectEventId].localId, gObjectEvents[objectEventId].mapNum, gObjectEvents[objectEventId].mapGroup);
}

static u8 UNUSED GetObjectTrainerTypeByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;

    if (TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        return 0xFF;

    return gObjectEvents[objectEventId].trainerType;
}

static u8 UNUSED GetObjectTrainerTypeByObjectEventId(u8 objectEventId)
{
    return gObjectEvents[objectEventId].trainerType;
}

// Unused
u8 GetObjectEventBerryTreeIdByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;

    if (TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        return 0xFF;

    return gObjectEvents[objectEventId].trainerRange_berryTreeId;
}

u8 GetObjectEventBerryTreeId(u8 objectEventId)
{
    return gObjectEvents[objectEventId].trainerRange_berryTreeId;
}

const struct ObjectEventTemplate *GetObjectEventTemplateByLocalIdAndMap(u8 localId, u8 mapNum, u8 mapGroup)
{
    const struct ObjectEventTemplate *templates;
    const struct MapHeader *mapHeader;
    u8 count;

    if (gSaveBlock1Ptr->location.mapNum == mapNum && gSaveBlock1Ptr->location.mapGroup == mapGroup)
    {
        templates = gSaveBlock1Ptr->objectEventTemplates;
        count = gMapHeader.events->objectEventCount;
    }
    else
    {
        mapHeader = Overworld_GetMapHeaderByGroupAndId(mapGroup, mapNum);
        templates = mapHeader->events->objectEvents;
        count = mapHeader->events->objectEventCount;
    }
    return FindObjectEventTemplateByLocalId(localId, templates, count);
}

static const struct ObjectEventTemplate *FindObjectEventTemplateByLocalId(u8 localId, const struct ObjectEventTemplate *templates, u8 count)
{
    u8 i;

    for (i = 0; i < count; i++)
    {
        if (templates[i].localId == localId)
            return &templates[i];
    }
    return NULL;
}

struct ObjectEventTemplate *GetBaseTemplateForObjectEvent(const struct ObjectEvent *objectEvent)
{
    int i;

    if (objectEvent->mapNum != gSaveBlock1Ptr->location.mapNum
     || objectEvent->mapGroup != gSaveBlock1Ptr->location.mapGroup)
        return NULL;

    for (i = 0; i < OBJECT_EVENT_TEMPLATES_COUNT; i++)
    {
        if (objectEvent->localId == gSaveBlock1Ptr->objectEventTemplates[i].localId)
            return &gSaveBlock1Ptr->objectEventTemplates[i];
    }
    return NULL;
}

void OverrideTemplateCoordsForObjectEvent(const struct ObjectEvent *objectEvent)
{
    struct ObjectEventTemplate *objectEventTemplate;

    objectEventTemplate = GetBaseTemplateForObjectEvent(objectEvent);
    if (objectEventTemplate != NULL)
    {
        objectEventTemplate->x = objectEvent->currentCoords.x - MAP_OFFSET;
        objectEventTemplate->y = objectEvent->currentCoords.y - MAP_OFFSET;
    }
}

static void OverrideObjectEventTemplateScript(const struct ObjectEvent *objectEvent, const u8 *script)
{
    struct ObjectEventTemplate *objectEventTemplate;

    objectEventTemplate = GetBaseTemplateForObjectEvent(objectEvent);
    if (objectEventTemplate)
        objectEventTemplate->script = script;
}

void TryOverrideTemplateCoordsForObjectEvent(const struct ObjectEvent *objectEvent, u8 movementType)
{
    struct ObjectEventTemplate *objectEventTemplate;

    objectEventTemplate = GetBaseTemplateForObjectEvent(objectEvent);
    if (objectEventTemplate != NULL)
        objectEventTemplate->movementType = movementType;
}

void TryOverrideObjectEventTemplateCoords(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;
    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        OverrideTemplateCoordsForObjectEvent(&gObjectEvents[objectEventId]);
}

void OverrideSecretBaseDecorationSpriteScript(u8 localId, u8 mapNum, u8 mapGroup, u8 decorationCategory)
{
    u8 objectEventId;
    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
    {
        switch (decorationCategory)
        {
        case DECORCAT_DOLL:
            OverrideObjectEventTemplateScript(&gObjectEvents[objectEventId], SecretBase_EventScript_DollInteract);
            break;
        case DECORCAT_CUSHION:
            OverrideObjectEventTemplateScript(&gObjectEvents[objectEventId], SecretBase_EventScript_CushionInteract);
            break;
        }
    }
}

movement_type_empty_callback(MovementType_None)
movement_type_def(MovementType_WanderAround, gMovementTypeFuncs_WanderAround)

bool8 MovementType_WanderAround_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_WanderAround_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_WanderAround_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (!ObjectEventExecSingleMovementAction(objectEvent, sprite))
        return FALSE;
    SetMovementDelay(sprite, sMovementDelaysMedium[Random() % ARRAY_COUNT(sMovementDelaysMedium)]);
    sprite->sTypeFuncId = 3;
    return TRUE;
}

bool8 MovementType_WanderAround_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_WanderAround_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[4];
    u8 chosenDirection;

    memcpy(directions, gStandardDirections, sizeof directions);
    chosenDirection = directions[Random() & 3];
    SetObjectEventDirection(objectEvent, chosenDirection);
    sprite->sTypeFuncId = 5;
    if (GetCollisionInDirection(objectEvent, chosenDirection))
        sprite->sTypeFuncId = 1;

    return TRUE;
}

bool8 MovementType_WanderAround_Step5(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkNormalMovementAction(objectEvent->movementDirection));
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 6;
    return TRUE;
}

bool8 MovementType_WanderAround_Step6(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 1;
    }
    return FALSE;
}

bool8 ObjectEventIsTrainerAndCloseToPlayer(struct ObjectEvent *objectEvent)
{
    s16 playerX;
    s16 playerY;
    s16 objX;
    s16 objY;
    s16 minX;
    s16 maxX;
    s16 minY;
    s16 maxY;

    if (!TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH))
        return FALSE;

    if (objectEvent->trainerType != TRAINER_TYPE_NORMAL && objectEvent->trainerType != TRAINER_TYPE_BURIED)
        return FALSE;

    PlayerGetDestCoords(&playerX, &playerY);
    objX = objectEvent->currentCoords.x;
    objY = objectEvent->currentCoords.y;
    minX = objX - objectEvent->trainerRange_berryTreeId;
    minY = objY - objectEvent->trainerRange_berryTreeId;
    maxX = objX + objectEvent->trainerRange_berryTreeId;
    maxY = objY + objectEvent->trainerRange_berryTreeId;
    if (minX > playerX || maxX < playerX
     || minY > playerY || maxY < playerY)
        return FALSE;

    return TRUE;
}

u8 GetVectorDirection(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    if (absdx > absdy)
    {
        direction = DIR_EAST;
        if (dx < 0)
            direction = DIR_WEST;
    }
    else
    {
        direction = DIR_SOUTH;
        if (dy < 0)
            direction = DIR_NORTH;
    }
    return direction;
}

u8 GetLimitedVectorDirection_SouthNorth(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = DIR_SOUTH;
    if (dy < 0)
        direction = DIR_NORTH;
    return direction;
}

u8 GetLimitedVectorDirection_WestEast(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = DIR_EAST;
    if (dx < 0)
        direction = DIR_WEST;
    return direction;
}

u8 GetLimitedVectorDirection_WestNorth(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_SOUTH)
    {
        direction = GetLimitedVectorDirection_WestEast(dx, dy, absdx, absdy);
        if (direction == DIR_EAST)
            direction = DIR_NORTH;
    }
    else if (direction == DIR_EAST)
    {
        direction = GetLimitedVectorDirection_SouthNorth(dx, dy, absdx, absdy);
        if (direction == DIR_SOUTH)
            direction = DIR_NORTH;
    }
    return direction;
}

u8 GetLimitedVectorDirection_EastNorth(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_SOUTH)
    {
        direction = GetLimitedVectorDirection_WestEast(dx, dy, absdx, absdy);
        if (direction == DIR_WEST)
            direction = DIR_NORTH;
    }
    else if (direction == DIR_WEST)
    {
        direction = GetLimitedVectorDirection_SouthNorth(dx, dy, absdx, absdy);
        if (direction == DIR_SOUTH)
            direction = DIR_NORTH;
    }
    return direction;
}

u8 GetLimitedVectorDirection_WestSouth(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_NORTH)
    {
        direction = GetLimitedVectorDirection_WestEast(dx, dy, absdx, absdy);
        if (direction == DIR_EAST)
            direction = DIR_SOUTH;
    }
    else if (direction == DIR_EAST)
    {
        direction = GetLimitedVectorDirection_SouthNorth(dx, dy, absdx, absdy);
        if (direction == DIR_NORTH)
            direction = DIR_SOUTH;
    }
    return direction;
}

u8 GetLimitedVectorDirection_EastSouth(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_NORTH)
    {
        direction = GetLimitedVectorDirection_WestEast(dx, dy, absdx, absdy);
        if (direction == DIR_WEST)
            direction = DIR_SOUTH;
    }
    else if (direction == DIR_WEST)
    {
        direction = GetLimitedVectorDirection_SouthNorth(dx, dy, absdx, absdy);
        if (direction == DIR_NORTH)
            direction = DIR_SOUTH;
    }
    return direction;
}

u8 GetLimitedVectorDirection_SouthNorthWest(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_EAST)
        direction = GetLimitedVectorDirection_SouthNorth(dx, dy, absdx, absdy);
    return direction;
}

u8 GetLimitedVectorDirection_SouthNorthEast(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_WEST)
        direction = GetLimitedVectorDirection_SouthNorth(dx, dy, absdx, absdy);
    return direction;
}

u8 GetLimitedVectorDirection_NorthWestEast(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_SOUTH)
        direction = GetLimitedVectorDirection_WestEast(dx, dy, absdx, absdy);
    return direction;
}

u8 GetLimitedVectorDirection_SouthWestEast(s16 dx, s16 dy, s16 absdx, s16 absdy)
{
    u8 direction;

    direction = GetVectorDirection(dx, dy, absdx, absdy);
    if (direction == DIR_NORTH)
        direction = GetLimitedVectorDirection_WestEast(dx, dy, absdx, absdy);
    return direction;
}

u8 TryGetTrainerEncounterDirection(struct ObjectEvent *objectEvent, u8 movementType)
{
    s16 dx, dy;
    s16 absdx, absdy;

    if (!ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
        return DIR_NONE;

    PlayerGetDestCoords(&dx, &dy);
    dx -= objectEvent->currentCoords.x;
    dy -= objectEvent->currentCoords.y;
    absdx = dx;
    absdy = dy;

    if (absdx < 0)
        absdx = -absdx;
    if (absdy < 0)
        absdy = -absdy;

    return gGetVectorDirectionFuncs[movementType](dx, dy, absdx, absdy);
}

movement_type_def(MovementType_LookAround, gMovementTypeFuncs_LookAround)

bool8 MovementType_LookAround_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_LookAround_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_LookAround_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysMedium[Random() % ARRAY_COUNT(sMovementDelaysMedium)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_LookAround_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_LookAround_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[4];
    memcpy(directions, gStandardDirections, sizeof directions);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_ANY);
    if (direction == DIR_NONE)
        direction = directions[Random() & 3];

    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_WanderUpAndDown, gMovementTypeFuncs_WanderUpAndDown)

bool8 MovementType_WanderUpAndDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_WanderUpAndDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_WanderUpAndDown_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (!ObjectEventExecSingleMovementAction(objectEvent, sprite))
        return FALSE;

    SetMovementDelay(sprite, sMovementDelaysMedium[Random() % ARRAY_COUNT(sMovementDelaysMedium)]);
    sprite->sTypeFuncId = 3;
    return TRUE;
}

bool8 MovementType_WanderUpAndDown_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_WanderUpAndDown_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gUpAndDownDirections, sizeof directions);
    direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 5;
    if (GetCollisionInDirection(objectEvent, direction))
        sprite->sTypeFuncId = 1;

    return TRUE;
}

bool8 MovementType_WanderUpAndDown_Step5(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkNormalMovementAction(objectEvent->movementDirection));
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 6;
    return TRUE;
}

bool8 MovementType_WanderUpAndDown_Step6(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 1;
    }
    return FALSE;
}

movement_type_def(MovementType_WanderLeftAndRight, gMovementTypeFuncs_WanderLeftAndRight)

bool8 MovementType_WanderLeftAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_WanderLeftAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_WanderLeftAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (!ObjectEventExecSingleMovementAction(objectEvent, sprite))
        return FALSE;

    SetMovementDelay(sprite, sMovementDelaysMedium[Random() % ARRAY_COUNT(sMovementDelaysMedium)]);
    sprite->sTypeFuncId = 3;
    return TRUE;
}

bool8 MovementType_WanderLeftAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_WanderLeftAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gLeftAndRightDirections, sizeof directions);
    direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 5;
    if (GetCollisionInDirection(objectEvent, direction))
        sprite->sTypeFuncId = 1;

    return TRUE;
}

bool8 MovementType_WanderLeftAndRight_Step5(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkNormalMovementAction(objectEvent->movementDirection));
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 6;
    return TRUE;
}

bool8 MovementType_WanderLeftAndRight_Step6(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 1;
    }
    return FALSE;
}

movement_type_def(MovementType_FaceDirection, gMovementTypeFuncs_FaceDirection)

bool8 MovementType_FaceDirection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDirection_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        sprite->sTypeFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDirection_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->singleMovementActive = FALSE;
    return FALSE;
}

static bool8 ObjectEventCB2_BerryTree(struct ObjectEvent *objectEvent, struct Sprite *sprite);
extern bool8 (*const gMovementTypeFuncs_BerryTreeGrowth[])(struct ObjectEvent *objectEvent, struct Sprite *sprite);

enum {
    BERRYTREEFUNC_NORMAL,
    BERRYTREEFUNC_MOVE,
    BERRYTREEFUNC_SPARKLE_START,
    BERRYTREEFUNC_SPARKLE,
    BERRYTREEFUNC_SPARKLE_END,
};

#define sTimer          data[2]
#define sBerryTreeFlags data[7]

#define BERRY_FLAG_SET_GFX     (1 << 0)
#define BERRY_FLAG_SPARKLING   (1 << 1)
#define BERRY_FLAG_JUST_PICKED (1 << 2)

void MovementType_BerryTreeGrowth(struct Sprite *sprite)
{
    struct ObjectEvent *objectEvent;

    objectEvent = &gObjectEvents[sprite->sObjEventId];
    if (!(sprite->sBerryTreeFlags & BERRY_FLAG_SET_GFX))
    {
        SetBerryTreeGraphics(objectEvent, sprite);
        sprite->sBerryTreeFlags |= BERRY_FLAG_SET_GFX;
    }
    UpdateObjectEventCurrentMovement(objectEvent, sprite, ObjectEventCB2_BerryTree);
}
static bool8 ObjectEventCB2_BerryTree(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    return gMovementTypeFuncs_BerryTreeGrowth[sprite->sTypeFuncId](objectEvent, sprite);
}

// BERRYTREEFUNC_NORMAL
bool8 MovementType_BerryTreeGrowth_Normal(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 berryStage;
    ClearObjectEventMovement(objectEvent, sprite);
    objectEvent->invisible = TRUE;
    sprite->invisible = TRUE;
    berryStage = GetStageByBerryTreeId(objectEvent->trainerRange_berryTreeId);
    if (berryStage == BERRY_STAGE_NO_BERRY)
    {
        if (!(sprite->sBerryTreeFlags & BERRY_FLAG_JUST_PICKED) && sprite->animNum == BERRY_STAGE_FLOWERING)
        {
            gFieldEffectArguments[0] = objectEvent->currentCoords.x;
            gFieldEffectArguments[1] = objectEvent->currentCoords.y;
            gFieldEffectArguments[2] = sprite->subpriority - 1;
            gFieldEffectArguments[3] = sprite->oam.priority;
            FieldEffectStart(FLDEFF_BERRY_TREE_GROWTH_SPARKLE);
            sprite->animNum = berryStage;
        }
        return FALSE;
    }
    objectEvent->invisible = FALSE;
    sprite->invisible = FALSE;
    berryStage--;
    if (sprite->animNum != berryStage)
    {
        sprite->sTypeFuncId = BERRYTREEFUNC_SPARKLE_START;
        return TRUE;
    }
    SetBerryTreeGraphics(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, MOVEMENT_ACTION_START_ANIM_IN_DIRECTION);
    sprite->sTypeFuncId = BERRYTREEFUNC_MOVE;
    return TRUE;
}

// BERRYTREEFUNC_MOVE
bool8 MovementType_BerryTreeGrowth_Move(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        sprite->sTypeFuncId = BERRYTREEFUNC_NORMAL;
        return TRUE;
    }
    return FALSE;
}

// BERRYTREEFUNC_SPARKLE_START
bool8 MovementType_BerryTreeGrowth_SparkleStart(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = BERRYTREEFUNC_SPARKLE;
    sprite->sTimer = 0;
    sprite->sBerryTreeFlags |= BERRY_FLAG_SPARKLING;
    gFieldEffectArguments[0] = objectEvent->currentCoords.x;
    gFieldEffectArguments[1] = objectEvent->currentCoords.y;
    gFieldEffectArguments[2] = sprite->subpriority - 1;
    gFieldEffectArguments[3] = sprite->oam.priority;
    FieldEffectStart(FLDEFF_BERRY_TREE_GROWTH_SPARKLE);
    return TRUE;
}

// BERRYTREEFUNC_SPARKLE
bool8 MovementType_BerryTreeGrowth_Sparkle(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->sTimer++;
    objectEvent->invisible = (sprite->sTimer & 2) >> 1;
    sprite->animPaused = TRUE;
    if (sprite->sTimer > 64)
    {
        SetBerryTreeGraphics(objectEvent, sprite);
        sprite->sTypeFuncId = BERRYTREEFUNC_SPARKLE_END;
        sprite->sTimer = 0;
        return TRUE;
    }
    return FALSE;
}

// BERRYTREEFUNC_SPARKLE_END
bool8 MovementType_BerryTreeGrowth_SparkleEnd(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->sTimer++;
    objectEvent->invisible = (sprite->sTimer & 2) >> 1;
    sprite->animPaused = TRUE;
    if (sprite->sTimer > 64)
    {
        sprite->sTypeFuncId = BERRYTREEFUNC_NORMAL;
        sprite->sBerryTreeFlags &= ~BERRY_FLAG_SPARKLING;
        return TRUE;
    }
    return FALSE;
}

movement_type_def(MovementType_FaceDownAndUp, gMovementTypeFuncs_FaceDownAndUp)

bool8 MovementType_FaceDownAndUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDownAndUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceDownAndUp_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysMedium[Random() % ARRAY_COUNT(sMovementDelaysMedium)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceDownAndUp_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDownAndUp_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gUpAndDownDirections, sizeof gUpAndDownDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_NORTH_SOUTH);
    if (direction == DIR_NONE)
        direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceLeftAndRight, gMovementTypeFuncs_FaceLeftAndRight)

bool8 MovementType_FaceLeftAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceLeftAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceLeftAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysMedium[Random() % ARRAY_COUNT(sMovementDelaysMedium)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceLeftAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceLeftAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gLeftAndRightDirections, sizeof gLeftAndRightDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_EAST_WEST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceUpAndLeft, gMovementTypeFuncs_FaceUpAndLeft)

bool8 MovementType_FaceUpAndLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceUpAndLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceUpAndLeft_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceUpAndLeft_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceUpAndLeft_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gUpAndLeftDirections, sizeof gUpAndLeftDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_NORTH_WEST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceUpAndRight, gMovementTypeFuncs_FaceUpAndRight)

bool8 MovementType_FaceUpAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceUpAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceUpAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceUpAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceUpAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gUpAndRightDirections, sizeof gUpAndRightDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_NORTH_EAST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceDownAndLeft, gMovementTypeFuncs_FaceDownAndLeft)

bool8 MovementType_FaceDownAndLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDownAndLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceDownAndLeft_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceDownAndLeft_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDownAndLeft_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gDownAndLeftDirections, sizeof gDownAndLeftDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_SOUTH_WEST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceDownAndRight, gMovementTypeFuncs_FaceDownAndRight)

bool8 MovementType_FaceDownAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDownAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceDownAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceDownAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDownAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[2];
    memcpy(directions, gDownAndRightDirections, sizeof gDownAndRightDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_SOUTH_EAST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 1];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceDownUpAndLeft, gMovementTypeFuncs_FaceDownUpAndLeft)

bool8 MovementType_FaceDownUpAndLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDownUpAndLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceDownUpAndLeft_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceDownUpAndLeft_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDownUpAndLeft_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[4];
    memcpy(directions, gDownUpAndLeftDirections, sizeof gDownUpAndLeftDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_NORTH_SOUTH_WEST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 3];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceDownUpAndRight, gMovementTypeFuncs_FaceDownUpAndRight)

bool8 MovementType_FaceDownUpAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDownUpAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceDownUpAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceDownUpAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDownUpAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[4];
    memcpy(directions, gDownUpAndRightDirections, sizeof gDownUpAndRightDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_NORTH_SOUTH_EAST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 3];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceUpRightAndLeft, gMovementTypeFuncs_FaceUpLeftAndRight)

bool8 MovementType_FaceUpLeftAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceUpLeftAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceUpLeftAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceUpLeftAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceUpLeftAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[4];
    memcpy(directions, gUpLeftAndRightDirections, sizeof gUpLeftAndRightDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_NORTH_EAST_WEST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 3];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_FaceDownRightAndLeft, gMovementTypeFuncs_FaceDownLeftAndRight)

bool8 MovementType_FaceDownLeftAndRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_FaceDownLeftAndRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_FaceDownLeftAndRight_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, sMovementDelaysShort[Random() % ARRAY_COUNT(sMovementDelaysShort)]);
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 3;
    }
    return FALSE;
}

bool8 MovementType_FaceDownLeftAndRight_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
    {
        sprite->sTypeFuncId = 4;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_FaceDownLeftAndRight_Step4(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[4];
    memcpy(directions, gDownLeftAndRightDirections, sizeof gDownLeftAndRightDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_SOUTH_EAST_WEST);
    if (direction == DIR_NONE)
        direction = directions[Random() & 3];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_RotateCounterclockwise, gMovementTypeFuncs_RotateCounterclockwise)

bool8 MovementType_RotateCounterclockwise_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_RotateCounterclockwise_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, 48);
        sprite->sTypeFuncId = 2;
    }
    return FALSE;
}

bool8 MovementType_RotateCounterclockwise_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
        sprite->sTypeFuncId = 3;
    return FALSE;
}

bool8 MovementType_RotateCounterclockwise_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[5];
    memcpy(directions, gCounterclockwiseDirections, sizeof gCounterclockwiseDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_ANY);
    if (direction == DIR_NONE)
        direction = directions[objectEvent->facingDirection];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 0;
    return TRUE;
}

movement_type_def(MovementType_RotateClockwise, gMovementTypeFuncs_RotateClockwise)

bool8 MovementType_RotateClockwise_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_RotateClockwise_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        SetMovementDelay(sprite, 48);
        sprite->sTypeFuncId = 2;
    }
    return FALSE;
}

bool8 MovementType_RotateClockwise_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (WaitForMovementDelay(sprite) || ObjectEventIsTrainerAndCloseToPlayer(objectEvent))
        sprite->sTypeFuncId = 3;
    return FALSE;
}

bool8 MovementType_RotateClockwise_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;
    u8 directions[5];
    memcpy(directions, gClockwiseDirections, sizeof gClockwiseDirections);
    direction = TryGetTrainerEncounterDirection(objectEvent, RUNFOLLOW_ANY);
    if (direction == DIR_NONE)
        direction = directions[objectEvent->facingDirection];
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 0;
    return TRUE;
}

movement_type_def(MovementType_WalkBackAndForth, gMovementTypeFuncs_WalkBackAndForth)

bool8 MovementType_WalkBackAndForth_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_WalkBackAndForth_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 direction;

    direction = gInitialMovementTypeFacingDirections[objectEvent->movementType];
    if (objectEvent->directionSequenceIndex)
        direction = GetOppositeDirection(direction);
    SetObjectEventDirection(objectEvent, direction);
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_WalkBackAndForth_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    bool8 collision;
    u8 movementActionId;

    if (objectEvent->directionSequenceIndex && objectEvent->initialCoords.x == objectEvent->currentCoords.x && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
    {
        objectEvent->directionSequenceIndex = 0;
        SetObjectEventDirection(objectEvent, GetOppositeDirection(objectEvent->movementDirection));
    }
    collision = GetCollisionInDirection(objectEvent, objectEvent->movementDirection);
    movementActionId = GetWalkNormalMovementAction(objectEvent->movementDirection);
    if (collision == COLLISION_OUTSIDE_RANGE)
    {
        objectEvent->directionSequenceIndex++;
        SetObjectEventDirection(objectEvent, GetOppositeDirection(objectEvent->movementDirection));
        movementActionId = GetWalkNormalMovementAction(objectEvent->movementDirection);
        collision = GetCollisionInDirection(objectEvent, objectEvent->movementDirection);
    }

    if (collision)
        movementActionId = GetWalkInPlaceNormalMovementAction(objectEvent->facingDirection);

    ObjectEventSetSingleMovement(objectEvent, sprite, movementActionId);
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 3;
    return TRUE;
}

bool8 MovementType_WalkBackAndForth_Step3(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 1;
    }
    return FALSE;
}

bool8 MovementType_WalkSequence_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MoveNextDirectionInSequence(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 *route)
{
    u8 collision;
    u8 movementActionId;

    if (objectEvent->directionSequenceIndex == 3 && objectEvent->initialCoords.x == objectEvent->currentCoords.x && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 0;

    SetObjectEventDirection(objectEvent, route[objectEvent->directionSequenceIndex]);
    movementActionId = GetWalkNormalMovementAction(objectEvent->movementDirection);
    collision = GetCollisionInDirection(objectEvent, objectEvent->movementDirection);
    if (collision == COLLISION_OUTSIDE_RANGE)
    {
        objectEvent->directionSequenceIndex++;
        SetObjectEventDirection(objectEvent, route[objectEvent->directionSequenceIndex]);
        movementActionId = GetWalkNormalMovementAction(objectEvent->movementDirection);
        collision = GetCollisionInDirection(objectEvent, objectEvent->movementDirection);
    }

    if (collision)
        movementActionId = GetWalkInPlaceNormalMovementAction(objectEvent->facingDirection);

    ObjectEventSetSingleMovement(objectEvent, sprite, movementActionId);
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 MovementType_WalkSequence_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 1;
    }
    return FALSE;
}

movement_type_def(MovementType_WalkSequenceUpRightLeftDown, gMovementTypeFuncs_WalkSequenceUpRightLeftDown)

u8 MovementType_WalkSequenceUpRightLeftDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gUpRightLeftDownDirections)];
    memcpy(directions, gUpRightLeftDownDirections, sizeof(gUpRightLeftDownDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceRightLeftDownUp, gMovementTypeFuncs_WalkSequenceRightLeftDownUp)

u8 MovementType_WalkSequenceRightLeftDownUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gRightLeftDownUpDirections)];
    memcpy(directions, gRightLeftDownUpDirections, sizeof(gRightLeftDownUpDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceDownUpRightLeft, gMovementTypeFuncs_WalkSequenceDownUpRightLeft)

u8 MovementType_WalkSequenceDownUpRightLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gDownUpRightLeftDirections)];
    memcpy(directions, gDownUpRightLeftDirections, sizeof(gDownUpRightLeftDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceLeftDownUpRight, gMovementTypeFuncs_WalkSequenceLeftDownUpRight)

u8 MovementType_WalkSequenceLeftDownUpRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gLeftDownUpRightDirections)];
    memcpy(directions, gLeftDownUpRightDirections, sizeof(gLeftDownUpRightDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceUpLeftRightDown, gMovementTypeFuncs_WalkSequenceUpLeftRightDown)

u8 MovementType_WalkSequenceUpLeftRightDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gUpLeftRightDownDirections)];
    memcpy(directions, gUpLeftRightDownDirections, sizeof(gUpLeftRightDownDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceLeftRightDownUp, gMovementTypeFuncs_WalkSequenceLeftRightDownUp)

u8 MovementType_WalkSequenceLeftRightDownUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gLeftRightDownUpDirections)];
    memcpy(directions, gLeftRightDownUpDirections, sizeof(gLeftRightDownUpDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceDownUpLeftRight, gMovementTypeFuncs_WalkSequenceDownUpLeftRight)

u8 MovementType_WalkSequenceDownUpLeftRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gStandardDirections)];
    memcpy(directions, gStandardDirections, sizeof(gStandardDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceRightDownUpLeft, gMovementTypeFuncs_WalkSequenceRightDownUpLeft)

u8 MovementType_WalkSequenceRightDownUpLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gRightDownUpLeftDirections)];
    memcpy(directions, gRightDownUpLeftDirections, sizeof(gRightDownUpLeftDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceLeftUpDownRight, gMovementTypeFuncs_WalkSequenceLeftUpDownRight)

u8 MovementType_WalkSequenceLeftUpDownRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gLeftUpDownRightDirections)];
    memcpy(directions, gLeftUpDownRightDirections, sizeof(gLeftUpDownRightDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceUpDownRightLeft, gMovementTypeFuncs_WalkSequenceUpDownRightLeft)

u8 MovementType_WalkSequenceUpDownRightLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gUpDownRightLeftDirections)];
    memcpy(directions, gUpDownRightLeftDirections, sizeof(gUpDownRightLeftDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceRightLeftUpDown, gMovementTypeFuncs_WalkSequenceRightLeftUpDown)

u8 MovementType_WalkSequenceRightLeftUpDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gRightLeftUpDownDirections)];
    memcpy(directions, gRightLeftUpDownDirections, sizeof(gRightLeftUpDownDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceDownRightLeftUp, gMovementTypeFuncs_WalkSequenceDownRightLeftUp)

u8 MovementType_WalkSequenceDownRightLeftUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gDownRightLeftUpDirections)];
    memcpy(directions, gDownRightLeftUpDirections, sizeof(gDownRightLeftUpDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceRightUpDownLeft, gMovementTypeFuncs_WalkSequenceRightUpDownLeft)

u8 MovementType_WalkSequenceRightUpDownLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gRightUpDownLeftDirections)];
    memcpy(directions, gRightUpDownLeftDirections, sizeof(gRightUpDownLeftDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceUpDownLeftRight, gMovementTypeFuncs_WalkSequenceUpDownLeftRight)

u8 MovementType_WalkSequenceUpDownLeftRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gUpDownLeftRightDirections)];
    memcpy(directions, gUpDownLeftRightDirections, sizeof(gUpDownLeftRightDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceLeftRightUpDown, gMovementTypeFuncs_WalkSequenceLeftRightUpDown)

u8 MovementType_WalkSequenceLeftRightUpDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gLeftRightUpDownDirections)];
    memcpy(directions, gLeftRightUpDownDirections, sizeof(gLeftRightUpDownDirections));
    if (objectEvent->directionSequenceIndex == 1 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 2;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceDownLeftRightUp, gMovementTypeFuncs_WalkSequenceDownLeftRightUp)

u8 MovementType_WalkSequenceDownLeftRightUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gDownLeftRightUpDirections)];
    memcpy(directions, gDownLeftRightUpDirections, sizeof(gDownLeftRightUpDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceUpLeftDownRight, gMovementTypeFuncs_WalkSequenceUpLeftDownRight)

u8 MovementType_WalkSequenceUpLeftDownRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gUpLeftDownRightDirections)];
    memcpy(directions, gUpLeftDownRightDirections, sizeof(gUpLeftDownRightDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceDownRightUpLeft, gMovementTypeFuncs_WalkSequenceDownRightUpLeft)

u8 MovementType_WalkSequenceDownRightUpLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gDownRightUpLeftDirections)];
    memcpy(directions, gDownRightUpLeftDirections, sizeof(gDownRightUpLeftDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceLeftDownRightUp, gMovementTypeFuncs_WalkSequenceLeftDownRightUp)

u8 MovementType_WalkSequenceLeftDownRightUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gLeftDownRightUpDirections)];
    memcpy(directions, gLeftDownRightUpDirections, sizeof(gLeftDownRightUpDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceRightUpLeftDown, gMovementTypeFuncs_WalkSequenceRightUpLeftDown)

u8 MovementType_WalkSequenceRightUpLeftDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gRightUpLeftDownDirections)];
    memcpy(directions, gRightUpLeftDownDirections, sizeof(gRightUpLeftDownDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceUpRightDownLeft, gMovementTypeFuncs_WalkSequenceUpRightDownLeft)

u8 MovementType_WalkSequenceUpRightDownLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gUpRightDownLeftDirections)];
    memcpy(directions, gUpRightDownLeftDirections, sizeof(gUpRightDownLeftDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceDownLeftUpRight, gMovementTypeFuncs_WalkSequenceDownLeftUpRight)

u8 MovementType_WalkSequenceDownLeftUpRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gDownLeftUpRightDirections)];
    memcpy(directions, gDownLeftUpRightDirections, sizeof(gDownLeftUpRightDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.y == objectEvent->currentCoords.y)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceLeftUpRightDown, gMovementTypeFuncs_WalkSequenceLeftUpRightDown)

u8 MovementType_WalkSequenceLeftUpRightDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gLeftUpRightDownDirections)];
    memcpy(directions, gLeftUpRightDownDirections, sizeof(gLeftUpRightDownDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_WalkSequenceRightDownLeftUp, gMovementTypeFuncs_WalkSequenceRightDownLeftUp)

u8 MovementType_WalkSequenceRightDownLeftUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 directions[sizeof(gRightDownLeftUpDirections)];
    memcpy(directions, gRightDownLeftUpDirections, sizeof(gRightDownLeftUpDirections));
    if (objectEvent->directionSequenceIndex == 2 && objectEvent->initialCoords.x == objectEvent->currentCoords.x)
        objectEvent->directionSequenceIndex = 3;

    return MoveNextDirectionInSequence(objectEvent, sprite, directions);
}

movement_type_def(MovementType_CopyPlayer, gMovementTypeFuncs_CopyPlayer)

bool8 MovementType_CopyPlayer_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    if (objectEvent->directionSequenceIndex == 0)
        objectEvent->directionSequenceIndex = GetPlayerFacingDirection();
    sprite->sTypeFuncId = 1;
    return TRUE;
}

bool8 MovementType_CopyPlayer_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (gObjectEvents[gPlayerAvatar.objectEventId].movementActionId == MOVEMENT_ACTION_NONE || gPlayerAvatar.tileTransitionState == T_TILE_CENTER)
        return FALSE;

    return gCopyPlayerMovementFuncs[PlayerGetCopyableMovement()](objectEvent, sprite, GetPlayerMovementDirection(), NULL);
}

bool8 MovementType_CopyPlayer_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        objectEvent->singleMovementActive = FALSE;
        sprite->sTypeFuncId = 1;
    }
    return FALSE;
}

bool8 CopyablePlayerMovement_None(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    return FALSE;
}

bool8 CopyablePlayerMovement_FaceDirection(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, playerDirection)));
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_WalkNormal(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;
    s16 x;
    s16 y;

    direction = playerDirection;
    if (ObjectEventIsFarawayIslandMew(objectEvent))
    {
        direction = GetMewMoveDirection();
        if (direction == DIR_NONE)
        {
            direction = playerDirection;
            direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
            ObjectEventMoveDestCoords(objectEvent, direction, &x, &y);
            ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));
            objectEvent->singleMovementActive = TRUE;
            sprite->sTypeFuncId = 2;
            return TRUE;
        }
    }
    else
    {
        direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    }
    ObjectEventMoveDestCoords(objectEvent, direction, &x, &y);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkNormalMovementAction(direction));

    if (GetCollisionAtCoords(objectEvent, x, y, direction) || (tileCallback != NULL && !tileCallback(MapGridGetMetatileBehaviorAt(x, y))))
        ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));

    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_WalkFast(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;
    s16 x;
    s16 y;

    direction = playerDirection;
    direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    ObjectEventMoveDestCoords(objectEvent, direction, &x, &y);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkFastMovementAction(direction));

    if (GetCollisionAtCoords(objectEvent, x, y, direction) || (tileCallback != NULL && !tileCallback(MapGridGetMetatileBehaviorAt(x, y))))
        ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));

    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_WalkFaster(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;
    s16 x;
    s16 y;

    direction = playerDirection;
    direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    ObjectEventMoveDestCoords(objectEvent, direction, &x, &y);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkFasterMovementAction(direction));

    if (GetCollisionAtCoords(objectEvent, x, y, direction) || (tileCallback != NULL && !tileCallback(MapGridGetMetatileBehaviorAt(x, y))))
        ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));

    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_Slide(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;
    s16 x;
    s16 y;

    direction = playerDirection;
    direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    ObjectEventMoveDestCoords(objectEvent, direction, &x, &y);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetSlideMovementAction(direction));

    if (GetCollisionAtCoords(objectEvent, x, y, direction) || (tileCallback != NULL && !tileCallback(MapGridGetMetatileBehaviorAt(x, y))))
        ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));

    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_JumpInPlace(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;

    direction = playerDirection;
    direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetJumpInPlaceMovementAction(direction));
    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_Jump(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;
    s16 x;
    s16 y;

    direction = playerDirection;
    direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    ObjectEventMoveDestCoords(objectEvent, direction, &x, &y);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetJumpMovementAction(direction));

    if (GetCollisionAtCoords(objectEvent, x, y, direction) || (tileCallback != NULL && !tileCallback(MapGridGetMetatileBehaviorAt(x, y))))
        ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));

    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

bool8 CopyablePlayerMovement_Jump2(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 playerDirection, bool8 tileCallback(u8))
{
    u32 direction;
    s16 x;
    s16 y;

    direction = playerDirection;
    direction = GetCopyDirection(gInitialMovementTypeFacingDirections[objectEvent->movementType], objectEvent->directionSequenceIndex, direction);
    x = objectEvent->currentCoords.x;
    y = objectEvent->currentCoords.y;
    MoveCoordsInDirection(direction, &x, &y, 2, 2);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetJump2MovementAction(direction));

    if (GetCollisionAtCoords(objectEvent, x, y, direction) || (tileCallback != NULL && !tileCallback(MapGridGetMetatileBehaviorAt(x, y))))
        ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(direction));

    objectEvent->singleMovementActive = TRUE;
    sprite->sTypeFuncId = 2;
    return TRUE;
}

movement_type_def(MovementType_CopyPlayerInGrass, gMovementTypeFuncs_CopyPlayerInGrass)

bool8 MovementType_CopyPlayerInGrass_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (gObjectEvents[gPlayerAvatar.objectEventId].movementActionId == MOVEMENT_ACTION_NONE || gPlayerAvatar.tileTransitionState == T_TILE_CENTER)
        return FALSE;

    return gCopyPlayerMovementFuncs[PlayerGetCopyableMovement()](objectEvent, sprite, GetPlayerMovementDirection(), MetatileBehavior_IsPokeGrass);
}

void MovementType_TreeDisguise(struct Sprite *sprite)
{
    struct ObjectEvent *objectEvent;

    objectEvent = &gObjectEvents[sprite->sObjEventId];
    if (objectEvent->directionSequenceIndex == 0 || (objectEvent->directionSequenceIndex == 1 && !sprite->data[7]))
    {
        ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
        objectEvent->fieldEffectSpriteId = FieldEffectStart(FLDEFF_TREE_DISGUISE);
        objectEvent->directionSequenceIndex = 1;
        sprite->data[7]++;
    }
    UpdateObjectEventCurrentMovement(&gObjectEvents[sprite->sObjEventId], sprite, MovementType_Disguise_Callback);
}

static bool8 MovementType_Disguise_Callback(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    return FALSE;
}

void MovementType_MountainDisguise(struct Sprite *sprite)
{
    struct ObjectEvent *objectEvent;

    objectEvent = &gObjectEvents[sprite->sObjEventId];
    if (objectEvent->directionSequenceIndex == 0 || (objectEvent->directionSequenceIndex == 1 && !sprite->data[7]))
    {
        ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
        objectEvent->fieldEffectSpriteId = FieldEffectStart(FLDEFF_MOUNTAIN_DISGUISE);
        objectEvent->directionSequenceIndex = 1;
        sprite->data[7]++;
    }
    UpdateObjectEventCurrentMovement(&gObjectEvents[sprite->sObjEventId], sprite, MovementType_Disguise_Callback);
}

void MovementType_Buried(struct Sprite *sprite)
{
    if (!sprite->data[7])
    {
        gObjectEvents[sprite->sObjEventId].fixedPriority = TRUE;
        sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        sprite->oam.priority = 3;
        sprite->data[7]++;
    }
    UpdateObjectEventCurrentMovement(&gObjectEvents[sprite->sObjEventId], sprite, MovementType_Buried_Callback);
}

static bool8 MovementType_Buried_Callback(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    return gMovementTypeFuncs_Buried[sprite->sTypeFuncId](objectEvent, sprite);
}

bool8 MovementType_Buried_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    return FALSE;
}

bool8 MovementType_MoveInPlace_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
        sprite->sTypeFuncId = 0;
    return FALSE;
}

movement_type_def(MovementType_WalkInPlace, gMovementTypeFuncs_WalkInPlace)

bool8 MovementType_WalkInPlace_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkInPlaceNormalMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_WalkSlowlyInPlace, gMovementTypeFuncs_WalkSlowlyInPlace)

bool8 MovementType_WalkSlowlyInPlace_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkInPlaceSlowMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_JogInPlace, gMovementTypeFuncs_JogInPlace)

bool8 MovementType_JogInPlace_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkInPlaceFastMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_RunInPlace, gMovementTypeFuncs_RunInPlace)

bool8 MovementType_RunInPlace_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetWalkInPlaceFasterMovementAction(objectEvent->facingDirection));
    sprite->sTypeFuncId = 1;
    return TRUE;
}

movement_type_def(MovementType_Invisible, gMovementTypeFuncs_Invisible)

bool8 MovementType_Invisible_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ClearObjectEventMovement(objectEvent, sprite);
    ObjectEventSetSingleMovement(objectEvent, sprite, GetFaceDirectionMovementAction(objectEvent->facingDirection));
    objectEvent->invisible = TRUE;
    sprite->sTypeFuncId = 1;
    return TRUE;
}
bool8 MovementType_Invisible_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (ObjectEventExecSingleMovementAction(objectEvent, sprite))
    {
        sprite->sTypeFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementType_Invisible_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->singleMovementActive = FALSE;
    return FALSE;
}

static void ClearObjectEventMovement(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->singleMovementActive = FALSE;
    objectEvent->heldMovementActive = FALSE;
    objectEvent->heldMovementFinished = FALSE;
    objectEvent->movementActionId = MOVEMENT_ACTION_NONE;
    sprite->sTypeFuncId = 0;
}

u8 GetFaceDirectionAnimNum(u8 direction)
{
    return sFaceDirectionAnimNums[direction];
}

u8 GetMoveDirectionAnimNum(u8 direction)
{
    return sMoveDirectionAnimNums[direction];
}

u8 GetMoveDirectionFastAnimNum(u8 direction)
{
    return sMoveDirectionFastAnimNums[direction];
}

u8 GetMoveDirectionFasterAnimNum(u8 direction)
{
    return sMoveDirectionFasterAnimNums[direction];
}

u8 GetMoveDirectionFastestAnimNum(u8 direction)
{
    return sMoveDirectionFastestAnimNums[direction];
}

u8 GetJumpSpecialDirectionAnimNum(u8 direction)
{
    return sJumpSpecialDirectionAnimNums[direction];
}

u8 GetAcroWheelieDirectionAnimNum(u8 direction)
{
    return sAcroWheelieDirectionAnimNums[direction];
}

u8 GetAcroUnusedDirectionAnimNum(u8 direction)
{
    return sAcroUnusedDirectionAnimNums[direction];
}

u8 GetAcroEndWheelieDirectionAnimNum(u8 direction)
{
    return sAcroEndWheelieDirectionAnimNums[direction];
}

u8 GetAcroUnusedActionDirectionAnimNum(u8 direction)
{
    return sAcroUnusedActionDirectionAnimNums[direction];
}

u8 GetAcroWheeliePedalDirectionAnimNum(u8 direction)
{
    return sAcroWheeliePedalDirectionAnimNums[direction];
}

u8 GetFishingDirectionAnimNum(u8 direction)
{
    return sFishingDirectionAnimNums[direction];
}

u8 GetFishingNoCatchDirectionAnimNum(u8 direction)
{
    return sFishingNoCatchDirectionAnimNums[direction];
}

u8 GetFishingBiteDirectionAnimNum(u8 direction)
{
    return sFishingBiteDirectionAnimNums[direction];
}

u8 GetRunningDirectionAnimNum(u8 direction)
{
    return sRunningDirectionAnimNums[direction];
}

static const struct StepAnimTable *GetStepAnimTable(const union AnimCmd *const *anims)
{
    const struct StepAnimTable *stepTable;

    for (stepTable = sStepAnimTables; stepTable->anims != NULL; stepTable++)
    {
        if (stepTable->anims == anims)
            return stepTable;
    }
    return NULL;
}

void SetStepAnimHandleAlternation(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 animNum)
{
    const struct StepAnimTable *stepTable;

    if (!objectEvent->inanimate)
    {
        sprite->animNum = animNum;
        stepTable = GetStepAnimTable(sprite->anims);
        if (stepTable != NULL)
        {
            if (sprite->animCmdIndex == stepTable->animPos[0])
                sprite->animCmdIndex  = stepTable->animPos[3];
            else if (sprite->animCmdIndex == stepTable->animPos[1])
                sprite->animCmdIndex = stepTable->animPos[2];
        }
        SeekSpriteAnim(sprite, sprite->animCmdIndex);
    }
}

void SetStepAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 animNum)
{
    const struct StepAnimTable *stepTable;

    if (!objectEvent->inanimate)
    {
        u8 animPos;

        sprite->animNum = animNum;
        stepTable = GetStepAnimTable(sprite->anims);
        if (stepTable != NULL)
        {
            animPos = stepTable->animPos[1];
            if (sprite->animCmdIndex <= stepTable->animPos[0])
                animPos = stepTable->animPos[0];

            SeekSpriteAnim(sprite, animPos);
        }
    }
}

u8 GetDirectionToFace(s16 x, s16 y, s16 targetX, s16 targetY)
{
    if (x > targetX)
        return DIR_WEST;

    if (x < targetX)
        return DIR_EAST;

    if (y > targetY)
        return DIR_NORTH;

    return DIR_SOUTH;
}

void SetTrainerMovementType(struct ObjectEvent *objectEvent, u8 movementType)
{
    objectEvent->movementType = movementType;
    objectEvent->directionSequenceIndex = 0;
    objectEvent->playerCopyableMovement = 0;
    gSprites[objectEvent->spriteId].callback = sMovementTypeCallbacks[movementType];
    gSprites[objectEvent->spriteId].sTypeFuncId = 0;
}

u8 GetTrainerFacingDirectionMovementType(u8 direction)
{
    return gTrainerFacingDirectionMovementTypes[direction];
}

u8 GetCollisionInDirection(struct ObjectEvent *objectEvent, u8 direction)
{
    s16 x = objectEvent->currentCoords.x;
    s16 y = objectEvent->currentCoords.y;
    MoveCoords(direction, &x, &y);
    return GetCollisionAtCoords(objectEvent, x, y, direction);
}

u8 GetSidewaysStairsCollision(struct ObjectEvent *objectEvent, u8 dir, u8 currentBehavior, u8 nextBehavior, u8 collision)
{
    if ((dir == DIR_SOUTH || dir == DIR_NORTH) && collision != COLLISION_NONE)
        return collision;
    
    if (MetatileBehavior_IsSidewaysStairsLeftSide(nextBehavior))
    {
        //moving ONTO left side stair
        if (dir == DIR_WEST && currentBehavior != nextBehavior)
            return collision;   //moving onto top part of left-stair going left, so no diagonal
        else
            return COLLISION_SIDEWAYS_STAIRS_TO_LEFT; // move diagonally
    }
    else if (MetatileBehavior_IsSidewaysStairsRightSide(nextBehavior))
    {
        //moving ONTO right side stair
        if (dir == DIR_EAST && currentBehavior != nextBehavior)
            return collision;   //moving onto top part of right-stair going right, so no diagonal
        else
            return COLLISION_SIDEWAYS_STAIRS_TO_RIGHT;
    }
    else if (MetatileBehavior_IsSidewaysStairsLeftSideAny(currentBehavior))
    {
        //moving OFF of any left side stair
        if (dir == DIR_WEST && nextBehavior != currentBehavior)
            return COLLISION_SIDEWAYS_STAIRS_TO_LEFT;   //moving off of left stairs onto non-stair -> move diagonal
        else
            return collision;   //moving off of left side stair to east -> move east
    }
    else if (MetatileBehavior_IsSidewaysStairsRightSideAny(currentBehavior))
    {
        //moving OFF of any right side stair
        if (dir == DIR_EAST && nextBehavior != currentBehavior)
            return COLLISION_SIDEWAYS_STAIRS_TO_RIGHT;  //moving off right stair onto non-stair -> move diagonal
        else
            return collision;
    }
    
    return collision;
}

static u8 GetVanillaCollision(struct ObjectEvent *objectEvent, s16 x, s16 y, u8 direction)
{

#if OW_FLAG_NO_COLLISION != 0
    if (FlagGet(OW_FLAG_NO_COLLISION))
        return COLLISION_NONE;
#endif

    if (IsCoordOutsideObjectEventMovementRange(objectEvent, x, y))
        return COLLISION_OUTSIDE_RANGE;
    else if (MapGridGetCollisionAt(x, y) || GetMapBorderIdAt(x, y) == CONNECTION_INVALID || IsMetatileDirectionallyImpassable(objectEvent, x, y, direction))
        return COLLISION_IMPASSABLE;
    else if (objectEvent->trackedByCamera && !CanCameraMoveInDirection(direction))
        return COLLISION_IMPASSABLE;
    else if (IsElevationMismatchAt(objectEvent->currentElevation, x, y))
        return COLLISION_ELEVATION_MISMATCH;
    else if (DoesObjectCollideWithObjectAt(objectEvent, x, y))
        return COLLISION_OBJECT_EVENT;
    
    return COLLISION_NONE;
}

static bool8 ObjectEventOnLeftSideStair(struct ObjectEvent *objectEvent, s16 x, s16 y, u8 direction)
{
    switch (direction)
    {
    case DIR_EAST:
        MoveCoords(DIR_NORTH, &x, &y);
        return DoesObjectCollideWithObjectAt(objectEvent, x, y);
    case DIR_WEST:
        MoveCoords(DIR_SOUTH, &x, &y);
        return DoesObjectCollideWithObjectAt(objectEvent, x, y);
    default:
        return FALSE;   //north/south taken care of in GetVanillaCollision
    }
}

static bool8 ObjectEventOnRightSideStair(struct ObjectEvent *objectEvent, s16 x, s16 y, u8 direction)
{
    switch (direction)
    {
    case DIR_EAST:
        MoveCoords(DIR_SOUTH, &x, &y);
        return DoesObjectCollideWithObjectAt(objectEvent, x, y);
    case DIR_WEST:
        MoveCoords(DIR_NORTH, &x, &y);
        return DoesObjectCollideWithObjectAt(objectEvent, x, y);
    default:
        return FALSE;   //north/south taken care of in GetVanillaCollision
    }
}

u8 GetCollisionAtCoords(struct ObjectEvent *objectEvent, s16 x, s16 y, u32 dir)
{
    //u8 direction = dir;
    u8 currentBehavior = MapGridGetMetatileBehaviorAt(objectEvent->currentCoords.x, objectEvent->currentCoords.y);
    u8 nextBehavior = MapGridGetMetatileBehaviorAt(x, y);
    u8 collision;
    
    objectEvent->directionOverwrite = DIR_NONE;
    
    //sideways stairs checks
    if (MetatileBehavior_IsSidewaysStairsLeftSideTop(nextBehavior) && dir == DIR_EAST)
        return COLLISION_IMPASSABLE;    //moving onto left-side top edge east from regular ground -> nope
    else if (MetatileBehavior_IsSidewaysStairsRightSideTop(nextBehavior) && dir == DIR_WEST)
        return COLLISION_IMPASSABLE;    //moving onto left-side top edge east from regular ground -> nope
    else if (MetatileBehavior_IsSidewaysStairsRightSideBottom(nextBehavior) && (dir == DIR_EAST || dir == DIR_SOUTH))
        return COLLISION_IMPASSABLE;    //moving into right-side bottom edge from regular ground -> nah
    else if (MetatileBehavior_IsSidewaysStairsLeftSideBottom(nextBehavior) && (dir == DIR_WEST || dir == DIR_SOUTH))
        return COLLISION_IMPASSABLE;    //moving onto left-side bottom edge from regular ground -> nah
    else if ((MetatileBehavior_IsSidewaysStairsLeftSideTop(currentBehavior) || MetatileBehavior_IsSidewaysStairsRightSideTop(currentBehavior))
     && dir == DIR_NORTH)
        return COLLISION_IMPASSABLE;    //trying to move north off of top-most tile onto same level doesn't work
    else if (!(MetatileBehavior_IsSidewaysStairsLeftSideTop(currentBehavior) || MetatileBehavior_IsSidewaysStairsRightSideTop(currentBehavior))
     && dir == DIR_SOUTH && (MetatileBehavior_IsSidewaysStairsLeftSideTop(nextBehavior) || MetatileBehavior_IsSidewaysStairsRightSideTop(nextBehavior)))
        return COLLISION_IMPASSABLE;    //trying to move south onto top stair tile at same level from non-stair -> no
    else if (!(MetatileBehavior_IsSidewaysStairsLeftSideBottom(currentBehavior) || MetatileBehavior_IsSidewaysStairsRightSideBottom(currentBehavior))
     && dir == DIR_NORTH && (MetatileBehavior_IsSidewaysStairsLeftSideBottom(nextBehavior) || MetatileBehavior_IsSidewaysStairsRightSideBottom(nextBehavior)))
        return COLLISION_IMPASSABLE;    //trying to move north onto top stair tile at same level from non-stair -> no
    
    // regular checks
    collision = GetVanillaCollision(objectEvent, x, y, dir);
    
    //sideways stairs checks
    collision = GetSidewaysStairsCollision(objectEvent, dir, currentBehavior, nextBehavior, collision);
    switch (collision)
    {
    case COLLISION_SIDEWAYS_STAIRS_TO_LEFT:
        if (ObjectEventOnLeftSideStair(objectEvent, x, y, dir))
            return COLLISION_OBJECT_EVENT;
        objectEvent->directionOverwrite = GetLeftSideStairsDirection(dir);
        return COLLISION_NONE;
    case COLLISION_SIDEWAYS_STAIRS_TO_RIGHT:
        if (ObjectEventOnRightSideStair(objectEvent, x, y, dir))
            return COLLISION_OBJECT_EVENT;
        objectEvent->directionOverwrite = GetRightSideStairsDirection(dir);
        return COLLISION_NONE;
    }
    
    return collision;
}

u8 GetCollisionFlagsAtCoords(struct ObjectEvent *objectEvent, s16 x, s16 y, u8 direction)
{
    u8 flags = 0;

    if (IsCoordOutsideObjectEventMovementRange(objectEvent, x, y))
        flags |= 1 << (COLLISION_OUTSIDE_RANGE - 1);
    if (MapGridGetCollisionAt(x, y) || GetMapBorderIdAt(x, y) == CONNECTION_INVALID || IsMetatileDirectionallyImpassable(objectEvent, x, y, direction) || (objectEvent->trackedByCamera && !CanCameraMoveInDirection(direction)))
        flags |= 1 << (COLLISION_IMPASSABLE - 1);
    if (IsElevationMismatchAt(objectEvent->currentElevation, x, y))
        flags |= 1 << (COLLISION_ELEVATION_MISMATCH - 1);
    if (DoesObjectCollideWithObjectAt(objectEvent, x, y))
        flags |= 1 << (COLLISION_OBJECT_EVENT - 1);
    return flags;
}

static bool8 IsCoordOutsideObjectEventMovementRange(struct ObjectEvent *objectEvent, s16 x, s16 y)
{
    s16 left;
    s16 right;
    s16 top;
    s16 bottom;

    if (objectEvent->rangeX != 0)
    {
        left = objectEvent->initialCoords.x - objectEvent->rangeX;
        right = objectEvent->initialCoords.x + objectEvent->rangeX;

        if (left > x || right < x)
            return TRUE;
    }
    if (objectEvent->rangeY != 0)
    {
        top = objectEvent->initialCoords.y - objectEvent->rangeY;
        bottom = objectEvent->initialCoords.y + objectEvent->rangeY;

        if (top > y || bottom < y)
            return TRUE;
    }
    return FALSE;
}

static bool8 IsMetatileDirectionallyImpassable(struct ObjectEvent *objectEvent, s16 x, s16 y, u8 direction)
{
    if (gOppositeDirectionBlockedMetatileFuncs[direction - 1](objectEvent->currentMetatileBehavior)
        || gDirectionBlockedMetatileFuncs[direction - 1](MapGridGetMetatileBehaviorAt(x, y)))
        return TRUE;

    return FALSE;
}

static bool8 DoesObjectCollideWithObjectAt(struct ObjectEvent *objectEvent, s16 x, s16 y)
{
    u8 i;
    struct ObjectEvent *curObject;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        curObject = &gObjectEvents[i];
        if (curObject->active && curObject != objectEvent && !FollowMe_IsCollisionExempt(curObject, objectEvent))
        {            
            // check for collision if curObject is active, not the object in question, and not exempt from collisions
            if ((curObject->currentCoords.x == x && curObject->currentCoords.y == y) || (curObject->previousCoords.x == x && curObject->previousCoords.y == y))
            {
                if (AreElevationsCompatible(objectEvent->currentElevation, curObject->currentElevation))
                    return TRUE;
            }
        }
    }
    return FALSE;
}

bool8 IsBerryTreeSparkling(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId)
        && gSprites[gObjectEvents[objectEventId].spriteId].sBerryTreeFlags & BERRY_FLAG_SPARKLING)
        return TRUE;

    return FALSE;
}

void SetBerryTreeJustPicked(u8 localId, u8 mapNum, u8 mapGroup)
{
    u8 objectEventId;

    if (!TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objectEventId))
        gSprites[gObjectEvents[objectEventId].spriteId].sBerryTreeFlags |= BERRY_FLAG_JUST_PICKED;
}

#undef sTimer
#undef sBerryTreeFlags

void MoveCoords(u8 direction, s16 *x, s16 *y)
{
    *x += sDirectionToVectors[direction].x;
    *y += sDirectionToVectors[direction].y;
}

static void UNUSED MoveCoordsInMapCoordIncrement(u8 direction, s16 *x, s16 *y)
{
    *x += sDirectionToVectors[direction].x << 4;
    *y += sDirectionToVectors[direction].y << 4;
}

static void MoveCoordsInDirection(u32 dir, s16 *x, s16 *y, s16 deltaX, s16 deltaY)
{
    u8 direction = dir;
    s16 dx2 = (u16)deltaX;
    s16 dy2 = (u16)deltaY;
    if (sDirectionToVectors[direction].x > 0)
        *x += dx2;
    if (sDirectionToVectors[direction].x < 0)
        *x -= dx2;
    if (sDirectionToVectors[direction].y > 0)
        *y += dy2;
    if (sDirectionToVectors[direction].y < 0)
        *y -= dy2;
}

void GetMapCoordsFromSpritePos(s16 x, s16 y, s16 *destX, s16 *destY)
{
    *destX = (x - gSaveBlock1Ptr->pos.x) << 4;
    *destY = (y - gSaveBlock1Ptr->pos.y) << 4;
    *destX -= gTotalCameraPixelOffsetX;
    *destY -= gTotalCameraPixelOffsetY;
}

void SetSpritePosToMapCoords(s16 mapX, s16 mapY, s16 *destX, s16 *destY)
{
    s16 dx = -gTotalCameraPixelOffsetX - gFieldCamera.x;
    s16 dy = -gTotalCameraPixelOffsetY - gFieldCamera.y;
    if (gFieldCamera.x > 0)
        dx += 16;

    if (gFieldCamera.x < 0)
        dx -= 16;

    if (gFieldCamera.y > 0)
        dy += 16;

    if (gFieldCamera.y < 0)
        dy -= 16;

    *destX = ((mapX - gSaveBlock1Ptr->pos.x) << 4) + dx;
    *destY = ((mapY - gSaveBlock1Ptr->pos.y) << 4) + dy;
}

void SetSpritePosToOffsetMapCoords(s16 *x, s16 *y, s16 dx, s16 dy)
{
    SetSpritePosToMapCoords(*x, *y, x, y);
    *x += dx;
    *y += dy;
}

static void GetObjectEventMovingCameraOffset(s16 *x, s16 *y)
{
    *x = 0;
    *y = 0;

    if (gFieldCamera.x > 0)
        (*x)++;

    if (gFieldCamera.x < 0)
        (*x)--;

    if (gFieldCamera.y > 0)
        (*y)++;

    if (gFieldCamera.y < 0)
        (*y)--;
}

void ObjectEventMoveDestCoords(struct ObjectEvent *objectEvent, u32 direction, s16 *x, s16 *y)
{
    u8 newDirn = direction;
    *x = objectEvent->currentCoords.x;
    *y = objectEvent->currentCoords.y;
    MoveCoords(newDirn, x, y);
}

bool8 ObjectEventIsMovementOverridden(struct ObjectEvent *objectEvent)
{
    if (objectEvent->singleMovementActive || objectEvent->heldMovementActive)
        return TRUE;

    return FALSE;
}

bool8 ObjectEventIsHeldMovementActive(struct ObjectEvent *objectEvent)
{
    if (objectEvent->heldMovementActive && objectEvent->movementActionId != MOVEMENT_ACTION_NONE)
        return TRUE;

    return FALSE;
}

static u8 TryUpdateMovementActionOnStairs(struct ObjectEvent *objectEvent, u8 movementActionId)
{
    #if FOLLOW_ME_IMPLEMENTED
        if (objectEvent->isPlayer || objectEvent->localId == GetFollowerLocalId())
            return movementActionId;    //handled separately
    #else
        if (objectEvent->isPlayer)
            return movementActionId;    //handled separately
    #endif
    
    if (!ObjectMovingOnRockStairs(objectEvent, objectEvent->movementDirection))
        return movementActionId;
    
    switch (movementActionId)
    {
        case MOVEMENT_ACTION_WALK_NORMAL_DOWN:
            return MOVEMENT_ACTION_WALK_SLOW_DOWN;
        case MOVEMENT_ACTION_WALK_NORMAL_UP:
            return MOVEMENT_ACTION_WALK_SLOW_UP;
        case MOVEMENT_ACTION_WALK_NORMAL_LEFT:
            return MOVEMENT_ACTION_WALK_SLOW_LEFT;
        case MOVEMENT_ACTION_WALK_NORMAL_RIGHT:
            return MOVEMENT_ACTION_WALK_SLOW_RIGHT;
        default:
            return movementActionId;
    }
}

bool8 ObjectEventSetHeldMovement(struct ObjectEvent *objectEvent, u8 movementActionId)
{
    if (ObjectEventIsMovementOverridden(objectEvent))
        return TRUE;
    
    movementActionId = TryUpdateMovementActionOnStairs(objectEvent, movementActionId);

    UnfreezeObjectEvent(objectEvent);
    objectEvent->movementActionId = movementActionId;
    objectEvent->heldMovementActive = TRUE;
    objectEvent->heldMovementFinished = FALSE;
    gSprites[objectEvent->spriteId].sActionFuncId = 0;
    FollowMe(objectEvent, movementActionId, FALSE);
    return FALSE;
}

void ObjectEventForceSetHeldMovement(struct ObjectEvent *objectEvent, u8 movementActionId)
{
    movementActionId = TryUpdateMovementActionOnStairs(objectEvent, movementActionId);
    ObjectEventClearHeldMovementIfActive(objectEvent);
    ObjectEventSetHeldMovement(objectEvent, movementActionId);
}

void ObjectEventClearHeldMovementIfActive(struct ObjectEvent *objectEvent)
{
    if (objectEvent->heldMovementActive)
        ObjectEventClearHeldMovement(objectEvent);
}

void ObjectEventClearHeldMovement(struct ObjectEvent *objectEvent)
{
    objectEvent->movementActionId = MOVEMENT_ACTION_NONE;
    objectEvent->heldMovementActive = FALSE;
    objectEvent->heldMovementFinished = FALSE;
    gSprites[objectEvent->spriteId].sTypeFuncId = 0;
    gSprites[objectEvent->spriteId].sActionFuncId = 0;
}

u8 ObjectEventCheckHeldMovementStatus(struct ObjectEvent *objectEvent)
{
    if (objectEvent->heldMovementActive)
        return objectEvent->heldMovementFinished;

    return 16;
}

u8 ObjectEventClearHeldMovementIfFinished(struct ObjectEvent *objectEvent)
{
    u8 heldMovementStatus = ObjectEventCheckHeldMovementStatus(objectEvent);
    if (heldMovementStatus != 0 && heldMovementStatus != 16)
        ObjectEventClearHeldMovementIfActive(objectEvent);

    return heldMovementStatus;
}

u8 ObjectEventGetHeldMovementActionId(struct ObjectEvent *objectEvent)
{
    if (objectEvent->heldMovementActive)
        return TryUpdateMovementActionOnStairs(objectEvent, objectEvent->movementActionId);

    return MOVEMENT_ACTION_NONE;
}

void UpdateObjectEventCurrentMovement(struct ObjectEvent *objectEvent, struct Sprite *sprite, bool8 (*callback)(struct ObjectEvent *, struct Sprite *))
{
    DoGroundEffects_OnSpawn(objectEvent, sprite);
    TryEnableObjectEventAnim(objectEvent, sprite);

    if (ObjectEventIsHeldMovementActive(objectEvent))
        ObjectEventExecHeldMovementAction(objectEvent, sprite);
    else if (!objectEvent->frozen)
        while (callback(objectEvent, sprite));

    DoGroundEffects_OnBeginStep(objectEvent, sprite);
    DoGroundEffects_OnFinishStep(objectEvent, sprite);
    UpdateObjectEventSpriteAnimPause(objectEvent, sprite);
    UpdateObjectEventVisibility(objectEvent, sprite);
    ObjectEventUpdateSubpriority(objectEvent, sprite);
}

#define dirn_to_anim(name, table)\
u8 name(u32 idx)\
{\
    u8 direction;\
    u8 animIds[sizeof(table)];\
    direction = idx;\
    memcpy(animIds, (table), sizeof(table));\
    if (direction > sizeof(table)) direction = 0;\
    return animIds[direction];\
}

dirn_to_anim(GetFaceDirectionMovementAction, gFaceDirectionMovementActions);
dirn_to_anim(GetWalkSlowMovementAction, gWalkSlowMovementActions);
dirn_to_anim(GetPlayerRunSlowMovementAction, gRunSlowMovementActions);
dirn_to_anim(GetWalkNormalMovementAction, gWalkNormalMovementActions);
dirn_to_anim(GetWalkFastMovementAction, gWalkFastMovementActions);
dirn_to_anim(GetRideWaterCurrentMovementAction, gRideWaterCurrentMovementActions);
dirn_to_anim(GetWalkFasterMovementAction, gWalkFasterMovementActions);
dirn_to_anim(GetSlideMovementAction, gSlideMovementActions);
dirn_to_anim(GetPlayerRunMovementAction, gPlayerRunMovementActions);
dirn_to_anim(GetJump2MovementAction, gJump2MovementActions);
dirn_to_anim(GetJumpInPlaceMovementAction, gJumpInPlaceMovementActions);
dirn_to_anim(GetJumpInPlaceTurnAroundMovementAction, gJumpInPlaceTurnAroundMovementActions);
dirn_to_anim(GetJumpMovementAction, gJumpMovementActions);
dirn_to_anim(GetJumpSpecialMovementAction, gJumpSpecialMovementActions);
dirn_to_anim(GetWalkInPlaceSlowMovementAction, gWalkInPlaceSlowMovementActions);
dirn_to_anim(GetWalkInPlaceNormalMovementAction, gWalkInPlaceNormalMovementActions);
dirn_to_anim(GetWalkInPlaceFastMovementAction, gWalkInPlaceFastMovementActions);
dirn_to_anim(GetWalkInPlaceFasterMovementAction, gWalkInPlaceFasterMovementActions);

bool8 ObjectEventFaceOppositeDirection(struct ObjectEvent *objectEvent, u8 direction)
{
    return ObjectEventSetHeldMovement(objectEvent, GetFaceDirectionMovementAction(GetOppositeDirection(direction)));
}

dirn_to_anim(GetAcroWheelieFaceDirectionMovementAction, gAcroWheelieFaceDirectionMovementActions);
dirn_to_anim(GetAcroPopWheelieFaceDirectionMovementAction, gAcroPopWheelieFaceDirectionMovementActions);
dirn_to_anim(GetAcroEndWheelieFaceDirectionMovementAction, gAcroEndWheelieFaceDirectionMovementActions);
dirn_to_anim(GetAcroWheelieHopFaceDirectionMovementAction, gAcroWheelieHopFaceDirectionMovementActions);
dirn_to_anim(GetAcroWheelieHopDirectionMovementAction, gAcroWheelieHopDirectionMovementActions);
dirn_to_anim(GetAcroWheelieJumpDirectionMovementAction, gAcroWheelieJumpDirectionMovementActions);
dirn_to_anim(GetAcroWheelieInPlaceDirectionMovementAction, gAcroWheelieInPlaceDirectionMovementActions);
dirn_to_anim(GetAcroPopWheelieMoveDirectionMovementAction, gAcroPopWheelieMoveDirectionMovementActions);
dirn_to_anim(GetAcroWheelieMoveDirectionMovementAction, gAcroWheelieMoveDirectionMovementActions);
dirn_to_anim(GetAcroEndWheelieMoveDirectionMovementAction, gAcroEndWheelieMoveDirectionMovementActions);

u8 GetOppositeDirection(u8 direction)
{
    u8 directions[sizeof sOppositeDirections];

    memcpy(directions, sOppositeDirections, sizeof sOppositeDirections);
    if (direction <= DIR_NONE || direction > (sizeof sOppositeDirections))
        return direction;

    return directions[direction - 1];
}

// Takes the player's original and current direction and gives a direction the copy NPC should consider as the player's direction.
// See comments at the table's definition.
static u32 GetPlayerDirectionForCopy(u8 initDir, u8 moveDir)
{
    return sPlayerDirectionsForCopy[initDir - 1][moveDir - 1];
}

// copyInitDir is the initial facing direction of the copying NPC.
// playerInitDir is the direction the player was facing when the copying NPC was spawned, as set by MovementType_CopyPlayer_Step0.
// playerMoveDir is the direction the player is currently moving.
static u32 GetCopyDirection(u8 copyInitDir, u32 playerInitDir, u32 playerMoveDir)
{
    u32 dir;
    u8 _playerInitDir = playerInitDir;
    u8 _playerMoveDir = playerMoveDir;
    if (_playerInitDir == DIR_NONE || _playerMoveDir == DIR_NONE
      || _playerInitDir > DIR_EAST || _playerMoveDir > DIR_EAST)
        return DIR_NONE;

    dir = GetPlayerDirectionForCopy(_playerInitDir, playerMoveDir);
    return sPlayerDirectionToCopyDirection[copyInitDir - 1][dir - 1];
}

static void ObjectEventExecHeldMovementAction(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->movementActionId = TryUpdateMovementActionOnStairs(objectEvent, objectEvent->movementActionId);
    if (gMovementActionFuncs[objectEvent->movementActionId][sprite->sActionFuncId](objectEvent, sprite))
        objectEvent->heldMovementFinished = TRUE;
}

static bool8 ObjectEventExecSingleMovementAction(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->movementActionId = TryUpdateMovementActionOnStairs(objectEvent, objectEvent->movementActionId);
    if (gMovementActionFuncs[objectEvent->movementActionId][sprite->sActionFuncId](objectEvent, sprite))
    {
        objectEvent->movementActionId = MOVEMENT_ACTION_NONE;
        sprite->sActionFuncId = 0;
        return TRUE;
    }
    return FALSE;
}

static void ObjectEventSetSingleMovement(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 animId)
{
    objectEvent->movementActionId = TryUpdateMovementActionOnStairs(objectEvent, animId);
    sprite->sActionFuncId = 0;
}

static void FaceDirection(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    SetObjectEventDirection(objectEvent, direction);
    ShiftStillObjectEventCoords(objectEvent);
    SetStepAnim(objectEvent, sprite, GetMoveDirectionAnimNum(objectEvent->facingDirection));
    sprite->animPaused = TRUE;
    sprite->sActionFuncId = 1;
}

bool8 MovementAction_FaceDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    FaceDirection(objectEvent, sprite, DIR_SOUTH);
    return TRUE;
}

bool8 MovementAction_FaceUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    FaceDirection(objectEvent, sprite, DIR_NORTH);
    return TRUE;
}

bool8 MovementAction_FaceLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    FaceDirection(objectEvent, sprite, DIR_WEST);
    return TRUE;
}

bool8 MovementAction_FaceRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    FaceDirection(objectEvent, sprite, DIR_EAST);
    return TRUE;
}

void InitNpcForMovement(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 speed)
{
    s16 x;
    s16 y;

    x = objectEvent->currentCoords.x;
    y = objectEvent->currentCoords.y;
    SetObjectEventDirection(objectEvent, direction);
    MoveCoords(direction, &x, &y);
    ShiftObjectEventCoords(objectEvent, x, y);
    SetSpriteDataForNormalStep(sprite, direction, speed);
    sprite->animPaused = FALSE;

    if (sLockedAnimObjectEvents != NULL && FindLockedObjectEventIndex(objectEvent) != OBJECT_EVENTS_COUNT)
        sprite->animPaused = TRUE;

    objectEvent->triggerGroundEffectsOnMove = TRUE;
    sprite->sActionFuncId = 1;
}

static void InitMovementNormal(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 speed)
{
    u8 (*functions[ARRAY_COUNT(sDirectionAnimFuncsBySpeed)])(u8);

    memcpy(functions, sDirectionAnimFuncsBySpeed, sizeof sDirectionAnimFuncsBySpeed);
    InitNpcForMovement(objectEvent, sprite, direction, speed);
    SetStepAnimHandleAlternation(objectEvent, sprite, functions[speed](objectEvent->facingDirection));
}

static void StartRunningAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    InitNpcForMovement(objectEvent, sprite, direction, MOVE_SPEED_FAST_1);
    SetStepAnimHandleAlternation(objectEvent, sprite, GetRunningDirectionAnimNum(objectEvent->facingDirection));
}

static bool8 UpdateMovementNormal(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (NpcTakeStep(sprite))
    {
        ShiftStillObjectEventCoords(objectEvent);
        objectEvent->triggerGroundEffectsOnStop = TRUE;
        sprite->animPaused = TRUE;
        return TRUE;
    }
    return FALSE;
}

static void InitNpcForWalkSlow(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    s16 x;
    s16 y;

    x = objectEvent->currentCoords.x;
    y = objectEvent->currentCoords.y;
    SetObjectEventDirection(objectEvent, direction);
    MoveCoords(direction, &x, &y);
    ShiftObjectEventCoords(objectEvent, x, y);
    SetWalkSlowSpriteData(sprite, direction);
    sprite->animPaused = FALSE;
    objectEvent->triggerGroundEffectsOnMove = TRUE;
    sprite->sActionFuncId = 1;
}

static void InitWalkSlow(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    InitNpcForWalkSlow(objectEvent, sprite, direction);
    SetStepAnimHandleAlternation(objectEvent, sprite, GetMoveDirectionAnimNum(objectEvent->facingDirection));
}

static bool8 UpdateWalkSlow(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlowAnim(sprite))
    {
        ShiftStillObjectEventCoords(objectEvent);
        objectEvent->triggerGroundEffectsOnStop = TRUE;
        sprite->animPaused = TRUE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowDiagonalUpLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_NORTHWEST);
    return MovementAction_WalkSlowDiagonalUpLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowDiagonalUpLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowDiagonalUpRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_NORTHEAST);
    return MovementAction_WalkSlowDiagonalUpRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowDiagonalUpRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowDiagonalDownLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_SOUTHWEST);
    return MovementAction_WalkSlowDiagonalDownLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowDiagonalDownLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowDiagonalDownRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_SOUTHEAST);
    return MovementAction_WalkSlowDiagonalDownRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowDiagonalDownRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_SOUTH);
    return MovementAction_WalkSlowDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_NORTH);
    return MovementAction_WalkSlowUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitWalkSlow(objectEvent, sprite, objectEvent->directionOverwrite);
    else
        InitWalkSlow(objectEvent, sprite, DIR_WEST);
    return MovementAction_WalkSlowLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkSlowRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitWalkSlow(objectEvent, sprite, objectEvent->directionOverwrite);
    else
        InitWalkSlow(objectEvent, sprite, DIR_EAST);
    return MovementAction_WalkSlowRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkSlowRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalDiagonalUpLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTHWEST, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalDiagonalUpLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalDiagonalUpLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalDiagonalUpRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTHEAST, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalDiagonalUpRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalDiagonalUpRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalDiagonalDownLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTHWEST, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalDiagonalDownLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalDiagonalDownLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalDiagonalDownRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTHEAST, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalDiagonalDownRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalDiagonalDownRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTH, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTH, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_NORMAL);
    else
        InitMovementNormal(objectEvent, sprite, DIR_WEST, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkNormalRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_NORMAL);
    else
        InitMovementNormal(objectEvent, sprite, DIR_EAST, MOVE_SPEED_NORMAL);
    return MovementAction_WalkNormalRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkNormalRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

#define JUMP_HALFWAY  1
#define JUMP_FINISHED ((u8)-1)

enum {
    JUMP_TYPE_HIGH,
    JUMP_TYPE_LOW,
    JUMP_TYPE_NORMAL,
};

static void InitJump(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 distance, u8 type)
{
    s16 displacements[ARRAY_COUNT(sJumpInitDisplacements)];
    s16 x;
    s16 y;

    memcpy(displacements, sJumpInitDisplacements, sizeof sJumpInitDisplacements);
    x = 0;
    y = 0;
    SetObjectEventDirection(objectEvent, direction);
    MoveCoordsInDirection(direction, &x, &y, displacements[distance], displacements[distance]);
    ShiftObjectEventCoords(objectEvent, objectEvent->currentCoords.x + x, objectEvent->currentCoords.y + y);
    SetJumpSpriteData(sprite, direction, distance, type);
    sprite->sActionFuncId = 1;
    sprite->animPaused = FALSE;
    objectEvent->triggerGroundEffectsOnMove = TRUE;
    objectEvent->disableCoveringGroundEffects = TRUE;
}

static void InitJumpRegular(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 distance, u8 type)
{
    InitJump(objectEvent, sprite, direction, distance, type);
    SetStepAnimHandleAlternation(objectEvent, sprite, GetMoveDirectionAnimNum(objectEvent->facingDirection));
    DoShadowFieldEffect(objectEvent);
}

#define sDistance data[4]

static u8 UpdateJumpAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 callback(struct Sprite *))
{
    s16 displacements[ARRAY_COUNT(sJumpDisplacements)];
    s16 x;
    s16 y;
    u8 result;

    memcpy(displacements, sJumpDisplacements, sizeof sJumpDisplacements);
    result = callback(sprite);
    if (result == JUMP_HALFWAY && displacements[sprite->sDistance] != 0)
    {
        x = 0;
        y = 0;
        MoveCoordsInDirection(objectEvent->movementDirection, &x, &y, displacements[sprite->sDistance], displacements[sprite->sDistance]);
        ShiftObjectEventCoords(objectEvent, objectEvent->currentCoords.x + x, objectEvent->currentCoords.y + y);
        objectEvent->triggerGroundEffectsOnMove = TRUE;
        objectEvent->disableCoveringGroundEffects = TRUE;
    }
    else if (result == JUMP_FINISHED)
    {
        ShiftStillObjectEventCoords(objectEvent);
        objectEvent->triggerGroundEffectsOnStop = TRUE;
        objectEvent->landingJump = TRUE;
        sprite->animPaused = TRUE;
    }
    return result;
}

#undef sDistance

static u8 DoJumpAnimStep(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    return UpdateJumpAnim(objectEvent, sprite, DoJumpSpriteMovement);
}

static u8 DoJumpSpecialAnimStep(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    return UpdateJumpAnim(objectEvent, sprite, DoJumpSpecialSpriteMovement);
}

static bool8 DoJumpAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnimStep(objectEvent, sprite) == JUMP_FINISHED)
        return TRUE;

    return FALSE;
}

static bool8 DoJumpSpecialAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpSpecialAnimStep(objectEvent, sprite) == JUMP_FINISHED)
        return TRUE;

    return FALSE;
}

static bool8 DoJumpInPlaceAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    switch (DoJumpAnimStep(objectEvent, sprite))
    {
        case JUMP_FINISHED:
            return TRUE;
        case JUMP_HALFWAY:
            SetObjectEventDirection(objectEvent, GetOppositeDirection(objectEvent->movementDirection));
            SetStepAnim(objectEvent, sprite, GetMoveDirectionAnimNum(objectEvent->facingDirection));
        default:
            return FALSE;
    }
}

bool8 MovementAction_Jump2Down_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_Jump2Down_Step1(objectEvent, sprite);
}

bool8 MovementAction_Jump2Down_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_Jump2Up_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_Jump2Up_Step1(objectEvent, sprite);
}

bool8 MovementAction_Jump2Up_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_Jump2Left_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_Jump2Left_Step1(objectEvent, sprite);
}

bool8 MovementAction_Jump2Left_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_Jump2Right_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_EAST, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_Jump2Right_Step1(objectEvent, sprite);
}

bool8 MovementAction_Jump2Right_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

static void InitMovementDelay(struct Sprite *sprite, u16 duration)
{
    sprite->sActionFuncId = 1;
    sprite->data[3] = duration;
}

bool8 MovementAction_Delay_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (--sprite->data[3] == 0)
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_Delay1_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementDelay(sprite, 1);
    return MovementAction_Delay_Step1(objectEvent, sprite);
}

bool8 MovementAction_Delay2_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementDelay(sprite, 2);
    return MovementAction_Delay_Step1(objectEvent, sprite);
}

bool8 MovementAction_Delay4_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementDelay(sprite, 4);
    return MovementAction_Delay_Step1(objectEvent, sprite);
}

bool8 MovementAction_Delay8_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementDelay(sprite, 8);
    return MovementAction_Delay_Step1(objectEvent, sprite);
}

bool8 MovementAction_Delay16_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementDelay(sprite, 16);
    return MovementAction_Delay_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFastDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTH, MOVE_SPEED_FAST_1);
    return MovementAction_WalkFastDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFastDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFastUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTH, MOVE_SPEED_FAST_1);
    return MovementAction_WalkFastUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFastUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFastLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FAST_1);
    else
        InitMovementNormal(objectEvent, sprite, DIR_WEST, MOVE_SPEED_FAST_1);
    return MovementAction_WalkFastLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFastLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFastRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FAST_1);
    else
        InitMovementNormal(objectEvent, sprite, DIR_EAST, MOVE_SPEED_FAST_1);
    return MovementAction_WalkFastRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFastRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}


static void InitMoveInPlace(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 animNum, u16 duration)
{
    SetObjectEventDirection(objectEvent, direction);
    SetStepAnimHandleAlternation(objectEvent, sprite, animNum);
    sprite->animPaused = FALSE;
    sprite->sActionFuncId = 1;
    sprite->data[3] = duration;
}

bool8 MovementAction_WalkInPlace_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (-- sprite->data[3] == 0)
    {
        sprite->sActionFuncId = 2;
        sprite->animPaused = TRUE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkInPlaceSlow_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (sprite->data[3] & 1)
        sprite->animDelayCounter++;

    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceSlowDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_SOUTH, GetMoveDirectionAnimNum(DIR_SOUTH), 32);
    return MovementAction_WalkInPlaceSlow_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceSlowUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_NORTH, GetMoveDirectionAnimNum(DIR_NORTH), 32);
    return MovementAction_WalkInPlaceSlow_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceSlowLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_WEST, GetMoveDirectionAnimNum(DIR_WEST), 32);
    return MovementAction_WalkInPlaceSlow_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceSlowRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_EAST, GetMoveDirectionAnimNum(DIR_EAST), 32);
    return MovementAction_WalkInPlaceSlow_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceNormalDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_SOUTH, GetMoveDirectionAnimNum(DIR_SOUTH), 16);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceNormalUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_NORTH, GetMoveDirectionAnimNum(DIR_NORTH), 16);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceNormalLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_WEST, GetMoveDirectionAnimNum(DIR_WEST), 16);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceNormalRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_EAST, GetMoveDirectionAnimNum(DIR_EAST), 16);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFastDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_SOUTH, GetMoveDirectionFastAnimNum(DIR_SOUTH), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFastUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_NORTH, GetMoveDirectionFastAnimNum(DIR_NORTH), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFastLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_WEST, GetMoveDirectionFastAnimNum(DIR_WEST), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFastRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_EAST, GetMoveDirectionFastAnimNum(DIR_EAST), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFasterDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_SOUTH, GetMoveDirectionFasterAnimNum(DIR_SOUTH), 4);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFasterUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_NORTH, GetMoveDirectionFasterAnimNum(DIR_NORTH), 4);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFasterLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMoveInPlace(objectEvent, sprite, objectEvent->directionOverwrite, GetMoveDirectionFasterAnimNum(DIR_WEST), 4);
    else
        InitMoveInPlace(objectEvent, sprite, DIR_WEST, GetMoveDirectionFasterAnimNum(DIR_WEST), 4);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkInPlaceFasterRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMoveInPlace(objectEvent, sprite, objectEvent->directionOverwrite, GetMoveDirectionFasterAnimNum(DIR_EAST), 4);
    else
        InitMoveInPlace(objectEvent, sprite, DIR_EAST, GetMoveDirectionFasterAnimNum(DIR_EAST), 4);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_RideWaterCurrentDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTH, MOVE_SPEED_FAST_2);
    return MovementAction_RideWaterCurrentDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_RideWaterCurrentDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_RideWaterCurrentUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTH, MOVE_SPEED_FAST_2);
    return MovementAction_RideWaterCurrentUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_RideWaterCurrentUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_RideWaterCurrentLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FAST_2);
    else
        InitMovementNormal(objectEvent, sprite, DIR_WEST, MOVE_SPEED_FAST_2);
    return MovementAction_RideWaterCurrentLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_RideWaterCurrentLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_RideWaterCurrentRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FAST_2);
    else
        InitMovementNormal(objectEvent, sprite, DIR_EAST, MOVE_SPEED_FAST_2);
    return MovementAction_RideWaterCurrentRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_RideWaterCurrentRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFasterDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTH, MOVE_SPEED_FASTER);
    return MovementAction_WalkFasterDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFasterDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFasterUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTH, MOVE_SPEED_FASTER);
    return MovementAction_WalkFasterUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFasterUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFasterLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FASTER);
    else
        InitMovementNormal(objectEvent, sprite, DIR_WEST, MOVE_SPEED_FASTER);
    return MovementAction_WalkFasterLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFasterLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkFasterRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FASTER);
    else
        InitMovementNormal(objectEvent, sprite, DIR_EAST, MOVE_SPEED_FASTER);
    return MovementAction_WalkFasterRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkFasterRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_SlideDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_SOUTH, MOVE_SPEED_FASTEST);
    return MovementAction_SlideDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_SlideDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_SlideUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_NORTH, MOVE_SPEED_FASTEST);
    return MovementAction_SlideUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_SlideUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_SlideLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FASTEST);
    else
        InitMovementNormal(objectEvent, sprite, DIR_WEST, MOVE_SPEED_FASTEST);
    return MovementAction_SlideLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_SlideLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_SlideRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMovementNormal(objectEvent, sprite, objectEvent->directionOverwrite, MOVE_SPEED_FASTEST);
    else
        InitMovementNormal(objectEvent, sprite, DIR_EAST, MOVE_SPEED_FASTEST);
    return MovementAction_SlideRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_SlideRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_PlayerRunDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartRunningAnim(objectEvent, sprite, DIR_SOUTH);
    return MovementAction_PlayerRunDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_PlayerRunDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_PlayerRunUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartRunningAnim(objectEvent, sprite, DIR_NORTH);
    return MovementAction_PlayerRunUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_PlayerRunUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_PlayerRunLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        StartRunningAnim(objectEvent, sprite, objectEvent->directionOverwrite);
    else
        StartRunningAnim(objectEvent, sprite, DIR_WEST);
    return MovementAction_PlayerRunLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_PlayerRunLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_PlayerRunRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        StartRunningAnim(objectEvent, sprite, objectEvent->directionOverwrite);
    else
        StartRunningAnim(objectEvent, sprite, DIR_EAST);
    return MovementAction_PlayerRunRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_PlayerRunRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

void StartSpriteAnimInDirection(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 animNum)
{
    SetAndStartSpriteAnim(sprite, animNum, 0);
    SetObjectEventDirection(objectEvent, direction);
    sprite->sActionFuncId = 1;
}

bool8 MovementAction_StartAnimInDirection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, objectEvent->movementDirection, sprite->animNum);
    return FALSE;
}

bool8 MovementAction_WaitSpriteAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (SpriteAnimEnded(sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

static void InitJumpSpecial(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    InitJump(objectEvent, sprite, direction, JUMP_DISTANCE_NORMAL, JUMP_TYPE_HIGH);
    StartSpriteAnim(sprite, GetJumpSpecialDirectionAnimNum(direction));
}

bool8 MovementAction_JumpSpecialDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpSpecial(objectEvent, sprite, DIR_SOUTH);
    return MovementAction_JumpSpecialDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpSpecialDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpSpecialAnim(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        objectEvent->landingJump = FALSE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpSpecialUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpSpecial(objectEvent, sprite, DIR_NORTH);
    return MovementAction_JumpSpecialUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpSpecialUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpSpecialAnim(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        objectEvent->landingJump = FALSE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpSpecialLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpSpecial(objectEvent, sprite, DIR_WEST);
    return MovementAction_JumpSpecialLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpSpecialLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpSpecialAnim(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        objectEvent->landingJump = FALSE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpSpecialRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpSpecial(objectEvent, sprite, DIR_EAST);
    return MovementAction_JumpSpecialRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpSpecialRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpSpecialAnim(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        objectEvent->landingJump = FALSE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_FacePlayer_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 playerObjectId;

    if (!TryGetObjectEventIdByLocalIdAndMap(OBJ_EVENT_ID_PLAYER, 0, 0, &playerObjectId))
        FaceDirection(objectEvent, sprite, GetDirectionToFace(objectEvent->currentCoords.x,
                                                              objectEvent->currentCoords.y,
                                                              gObjectEvents[playerObjectId].currentCoords.x,
                                                              gObjectEvents[playerObjectId].currentCoords.y));
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_FaceAwayPlayer_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u8 playerObjectId;

    if (!TryGetObjectEventIdByLocalIdAndMap(OBJ_EVENT_ID_PLAYER, 0, 0, &playerObjectId))
        FaceDirection(objectEvent, sprite, GetOppositeDirection(GetDirectionToFace(objectEvent->currentCoords.x,
                                                                                   objectEvent->currentCoords.y,
                                                                                   gObjectEvents[playerObjectId].currentCoords.x,
                                                                                   gObjectEvents[playerObjectId].currentCoords.y)));
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_LockFacingDirection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->facingDirectionLocked = TRUE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_UnlockFacingDirection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->facingDirectionLocked = FALSE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_JumpDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_NORMAL, JUMP_TYPE_NORMAL);
    return MovementAction_JumpDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_NORMAL, JUMP_TYPE_NORMAL);
    return MovementAction_JumpUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_NORMAL, JUMP_TYPE_NORMAL);
    return MovementAction_JumpLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_EAST, JUMP_DISTANCE_NORMAL, JUMP_TYPE_NORMAL);
    return MovementAction_JumpRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_HIGH);
    return MovementAction_JumpInPlaceDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_HIGH);
    return MovementAction_JumpInPlaceUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_HIGH);
    return MovementAction_JumpInPlaceLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_EAST, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_HIGH);
    return MovementAction_JumpInPlaceRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceDownUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_NORMAL);
    return MovementAction_JumpInPlaceDownUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceDownUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpInPlaceAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceUpDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_NORMAL);
    return MovementAction_JumpInPlaceUpDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceUpDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpInPlaceAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceLeftRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_NORMAL);
    return MovementAction_JumpInPlaceLeftRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceLeftRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpInPlaceAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_JumpInPlaceRightLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitJumpRegular(objectEvent, sprite, DIR_EAST, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_NORMAL);
    return MovementAction_JumpInPlaceRightLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_JumpInPlaceRightLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpInPlaceAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = 0;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_FaceOriginalDirection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    FaceDirection(objectEvent, sprite, gInitialMovementTypeFacingDirections[objectEvent->movementType]);
    return TRUE;
}

bool8 MovementAction_NurseJoyBowDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_SOUTH, ANIM_NURSE_BOW);
    return FALSE;
}

bool8 MovementAction_EnableJumpLandingGroundEffect_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->disableJumpLandingGroundEffect = FALSE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_DisableJumpLandingGroundEffect_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->disableJumpLandingGroundEffect = TRUE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_DisableAnimation_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->inanimate = TRUE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_RestoreAnimation_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->inanimate = GetObjectEventGraphicsInfo(objectEvent->graphicsId)->inanimate;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_SetInvisible_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->invisible = TRUE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_SetVisible_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->invisible = FALSE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_EmoteExclamationMark_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_EXCLAMATION_MARK_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_EmoteQuestionMark_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_QUESTION_MARK_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_EmoteHeart_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_HEART_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}
bool8 MovementAction_EmoteTalking_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_TALKING_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_EmoteThinking_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_THINKING_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_RevealTrainer_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->movementType == MOVEMENT_TYPE_BURIED)
    {
        SetBuriedTrainerMovement(objectEvent);
        return FALSE;
    }
    if (objectEvent->movementType != MOVEMENT_TYPE_TREE_DISGUISE && objectEvent->movementType != MOVEMENT_TYPE_MOUNTAIN_DISGUISE)
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    StartRevealDisguise(objectEvent);
    sprite->sActionFuncId = 1;
    return MovementAction_RevealTrainer_Step1(objectEvent, sprite);
}

bool8 MovementAction_RevealTrainer_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateRevealDisguise(objectEvent))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_RockSmashBreak_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    SetAndStartSpriteAnim(sprite, ANIM_REMOVE_OBSTACLE, 0);
    sprite->sActionFuncId = 1;
    return FALSE;
}

bool8 MovementAction_RockSmashBreak_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (SpriteAnimEnded(sprite))
    {
        SetMovementDelay(sprite, 32);
        sprite->sActionFuncId = 2;
    }
    return FALSE;
}

bool8 MovementAction_RockSmashBreak_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->invisible ^= TRUE;
    if (WaitForMovementDelay(sprite))
    {
        objectEvent->invisible = TRUE;
        sprite->sActionFuncId = 3;
    }
    return FALSE;
}

bool8 MovementAction_CutTree_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    SetAndStartSpriteAnim(sprite, ANIM_REMOVE_OBSTACLE, 0);
    sprite->sActionFuncId = 1;
    return FALSE;
}

bool8 MovementAction_CutTree_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (SpriteAnimEnded(sprite))
    {
        SetMovementDelay(sprite, 32);
        sprite->sActionFuncId = 2;
    }
    return FALSE;
}

bool8 MovementAction_CutTree_Step2(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->invisible ^= TRUE;
    if (WaitForMovementDelay(sprite))
    {
        objectEvent->invisible = TRUE;
        sprite->sActionFuncId = 3;
    }
    return FALSE;
}

bool8 MovementAction_SetFixedPriority_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->fixedPriority = TRUE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_ClearFixedPriority_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->fixedPriority = FALSE;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_InitAffineAnim_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->oam.affineMode = ST_OAM_AFFINE_DOUBLE;
    InitSpriteAffineAnim(sprite);
    sprite->affineAnimPaused = TRUE;
    sprite->subspriteMode = SUBSPRITES_OFF;
    return TRUE;
}

bool8 MovementAction_ClearAffineAnim_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    FreeOamMatrix(sprite->oam.matrixNum);
    sprite->oam.affineMode = ST_OAM_AFFINE_OFF;
    CalcCenterToCornerVec(sprite, sprite->oam.shape, sprite->oam.size, sprite->oam.affineMode);
    return TRUE;
}

bool8 MovementAction_HideReflection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->hideReflection = TRUE;
    return TRUE;
}

bool8 MovementAction_ShowReflection_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    objectEvent->hideReflection = FALSE;
    return TRUE;
}

bool8 MovementAction_WalkDownStartAffine_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_SOUTH);
    sprite->affineAnimPaused = FALSE;
    StartSpriteAffineAnimIfDifferent(sprite, 0);
    return MovementAction_WalkDownStartAffine_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkDownStartAffine_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->affineAnimPaused = TRUE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkDownAffine_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitWalkSlow(objectEvent, sprite, DIR_SOUTH);
    sprite->affineAnimPaused = FALSE;
    ChangeSpriteAffineAnimIfDifferent(sprite, 1);
    return MovementAction_WalkDownAffine_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkDownAffine_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateWalkSlow(objectEvent, sprite))
    {
        sprite->affineAnimPaused = TRUE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkLeftAffine_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_WEST, MOVE_SPEED_FAST_1);
    sprite->affineAnimPaused = FALSE;
    ChangeSpriteAffineAnimIfDifferent(sprite, 2);
    return MovementAction_WalkLeftAffine_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkLeftAffine_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->affineAnimPaused = TRUE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_WalkRightAffine_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMovementNormal(objectEvent, sprite, DIR_EAST, MOVE_SPEED_FAST_1);
    sprite->affineAnimPaused = FALSE;
    ChangeSpriteAffineAnimIfDifferent(sprite, 3);
    return MovementAction_WalkRightAffine_Step1(objectEvent, sprite);
}

bool8 MovementAction_WalkRightAffine_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->affineAnimPaused = TRUE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

static void AcroWheelieFaceDirection(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    SetObjectEventDirection(objectEvent, direction);
    ShiftStillObjectEventCoords(objectEvent);
    SetStepAnim(objectEvent, sprite, GetAcroWheeliePedalDirectionAnimNum(direction));
    sprite->animPaused = TRUE;
    sprite->sActionFuncId = 1;
}

bool8 MovementAction_AcroWheelieFaceDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    AcroWheelieFaceDirection(objectEvent, sprite, DIR_SOUTH);
    return TRUE;
}

bool8 MovementAction_AcroWheelieFaceUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    AcroWheelieFaceDirection(objectEvent, sprite, DIR_NORTH);
    return TRUE;
}

bool8 MovementAction_AcroWheelieFaceLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    AcroWheelieFaceDirection(objectEvent, sprite, DIR_WEST);
    return TRUE;
}

bool8 MovementAction_AcroWheelieFaceRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    AcroWheelieFaceDirection(objectEvent, sprite, DIR_EAST);
    return TRUE;
}

bool8 MovementAction_AcroPopWheelieDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_SOUTH, GetAcroWheelieDirectionAnimNum(DIR_SOUTH));
    return FALSE;
}

bool8 MovementAction_AcroPopWheelieUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_NORTH, GetAcroWheelieDirectionAnimNum(DIR_NORTH));
    return FALSE;
}

bool8 MovementAction_AcroPopWheelieLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_WEST, GetAcroWheelieDirectionAnimNum(DIR_WEST));
    return FALSE;
}

bool8 MovementAction_AcroPopWheelieRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_EAST, GetAcroWheelieDirectionAnimNum(DIR_EAST));
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieFaceDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_SOUTH, GetAcroEndWheelieDirectionAnimNum(DIR_SOUTH));
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieFaceUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_NORTH, GetAcroEndWheelieDirectionAnimNum(DIR_NORTH));
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieFaceLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_WEST, GetAcroEndWheelieDirectionAnimNum(DIR_WEST));
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieFaceRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_EAST, GetAcroEndWheelieDirectionAnimNum(DIR_EAST));
    return FALSE;
}

bool8 MovementAction_UnusedAcroActionDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_SOUTH, GetAcroUnusedActionDirectionAnimNum(DIR_SOUTH));
    return FALSE;
}

bool8 MovementAction_UnusedAcroActionUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_NORTH, GetAcroUnusedActionDirectionAnimNum(DIR_NORTH));
    return FALSE;
}

bool8 MovementAction_UnusedAcroActionLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_WEST, GetAcroUnusedActionDirectionAnimNum(DIR_WEST));
    return FALSE;
}

bool8 MovementAction_UnusedAcroActionRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSpriteAnimInDirection(objectEvent, sprite, DIR_EAST, GetAcroUnusedActionDirectionAnimNum(DIR_EAST));
    return FALSE;
}

void InitFigure8Anim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitSpriteForFigure8Anim(sprite);
    sprite->animPaused = FALSE;
}

bool8 DoFigure8Anim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (AnimateSpriteInFigure8(sprite))
    {
        ShiftStillObjectEventCoords(objectEvent);
        objectEvent->triggerGroundEffectsOnStop = TRUE;
        sprite->animPaused = TRUE;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_Figure8_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitFigure8Anim(objectEvent, sprite);
    sprite->sActionFuncId = 1;
    return MovementAction_Figure8_Step1(objectEvent, sprite);
}

bool8 MovementAction_Figure8_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoFigure8Anim(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

static void InitAcroWheelieJump(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 distance, u8 type)
{
    InitJump(objectEvent, sprite, direction, distance, type);
    StartSpriteAnimIfDifferent(sprite, GetAcroWheelieDirectionAnimNum(direction));
    DoShadowFieldEffect(objectEvent);
}

bool8 MovementAction_AcroWheelieHopFaceDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopFaceDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopFaceDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopFaceUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopFaceUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopFaceUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopFaceLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopFaceLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopFaceLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopFaceRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_EAST, JUMP_DISTANCE_IN_PLACE, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopFaceRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopFaceRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_NORMAL, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_NORMAL, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroWheelieJump(objectEvent, sprite, objectEvent->directionOverwrite, JUMP_DISTANCE_NORMAL, JUMP_TYPE_LOW);
    else
        InitAcroWheelieJump(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_NORMAL, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieHopRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroWheelieJump(objectEvent, sprite, objectEvent->directionOverwrite, JUMP_DISTANCE_NORMAL, JUMP_TYPE_LOW);
    else
        InitAcroWheelieJump(objectEvent, sprite, DIR_EAST,  JUMP_DISTANCE_NORMAL, JUMP_TYPE_LOW);
    return MovementAction_AcroWheelieHopRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieHopRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieJumpDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_SOUTH, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_AcroWheelieJumpDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieJumpDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieJumpUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieJump(objectEvent, sprite, DIR_NORTH, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_AcroWheelieJumpUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieJumpUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieJumpLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroWheelieJump(objectEvent, sprite, objectEvent->directionOverwrite, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    else
        InitAcroWheelieJump(objectEvent, sprite, DIR_WEST, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_AcroWheelieJumpLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieJumpLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieJumpRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroWheelieJump(objectEvent, sprite, objectEvent->directionOverwrite, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    else
        InitAcroWheelieJump(objectEvent, sprite, DIR_EAST, JUMP_DISTANCE_FAR, JUMP_TYPE_HIGH);
    return MovementAction_AcroWheelieJumpRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieJumpRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (DoJumpAnim(objectEvent, sprite))
    {
        objectEvent->hasShadow = FALSE;
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieInPlaceDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_SOUTH, GetAcroWheeliePedalDirectionAnimNum(DIR_SOUTH), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieInPlaceUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitMoveInPlace(objectEvent, sprite, DIR_NORTH, GetAcroWheeliePedalDirectionAnimNum(DIR_NORTH), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieInPlaceLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMoveInPlace(objectEvent, sprite, objectEvent->directionOverwrite, GetAcroWheeliePedalDirectionAnimNum(objectEvent->directionOverwrite), 8);
    else
        InitMoveInPlace(objectEvent, sprite, DIR_WEST, GetAcroWheeliePedalDirectionAnimNum(DIR_WEST), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieInPlaceRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitMoveInPlace(objectEvent, sprite, objectEvent->directionOverwrite, GetAcroWheeliePedalDirectionAnimNum(objectEvent->directionOverwrite), 8);
    else
        InitMoveInPlace(objectEvent, sprite, DIR_EAST, GetAcroWheeliePedalDirectionAnimNum(DIR_EAST), 8);
    return MovementAction_WalkInPlace_Step1(objectEvent, sprite);
}

static void InitAcroPopWheelie(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 speed)
{
    InitNpcForMovement(objectEvent, sprite, direction, speed);
    StartSpriteAnim(sprite, GetAcroWheelieDirectionAnimNum(objectEvent->facingDirection));
    SeekSpriteAnim(sprite, 0);
}

bool8 MovementAction_AcroPopWheelieMoveDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroPopWheelie(objectEvent, sprite, DIR_SOUTH, 1);
    return MovementAction_AcroPopWheelieMoveDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroPopWheelieMoveDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroPopWheelieMoveUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroPopWheelie(objectEvent, sprite, DIR_NORTH, 1);
    return MovementAction_AcroPopWheelieMoveUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroPopWheelieMoveUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroPopWheelieMoveLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroPopWheelie(objectEvent, sprite, objectEvent->directionOverwrite,  1);
    else
        InitAcroPopWheelie(objectEvent, sprite, DIR_WEST,  1);
    return MovementAction_AcroPopWheelieMoveLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroPopWheelieMoveLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroPopWheelieMoveRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroPopWheelie(objectEvent, sprite, objectEvent->directionOverwrite,  1);
    else
        InitAcroPopWheelie(objectEvent, sprite, DIR_EAST,  1);
    return MovementAction_AcroPopWheelieMoveRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroPopWheelieMoveRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

static void InitAcroWheelieMove(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 speed)
{
    InitNpcForMovement(objectEvent, sprite, direction, speed);
    SetStepAnimHandleAlternation(objectEvent, sprite, GetAcroWheeliePedalDirectionAnimNum(objectEvent->facingDirection));
}

bool8 MovementAction_AcroWheelieMoveDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieMove(objectEvent, sprite, DIR_SOUTH, 1);
    return MovementAction_AcroWheelieMoveDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieMoveDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieMoveUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroWheelieMove(objectEvent, sprite, DIR_NORTH, 1);
    return MovementAction_AcroWheelieMoveUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieMoveUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieMoveLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroWheelieMove(objectEvent, sprite, objectEvent->directionOverwrite,  1);
    else
        InitAcroWheelieMove(objectEvent, sprite, DIR_WEST,  1);
    return MovementAction_AcroWheelieMoveLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieMoveLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroWheelieMoveRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroWheelieMove(objectEvent, sprite, objectEvent->directionOverwrite,  1);
    else
        InitAcroWheelieMove(objectEvent, sprite, DIR_EAST, 1);
    return MovementAction_AcroWheelieMoveRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroWheelieMoveRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

static void InitAcroEndWheelie(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction, u8 speed)
{
    InitNpcForMovement(objectEvent, sprite, direction, speed);
    StartSpriteAnim(sprite, GetAcroEndWheelieDirectionAnimNum(objectEvent->facingDirection));
    SeekSpriteAnim(sprite, 0);
}

bool8 MovementAction_AcroEndWheelieMoveDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroEndWheelie(objectEvent, sprite, DIR_SOUTH, 1);
    return MovementAction_AcroEndWheelieMoveDown_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroEndWheelieMoveDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieMoveUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    InitAcroEndWheelie(objectEvent, sprite, DIR_NORTH, 1);
    return MovementAction_AcroEndWheelieMoveUp_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroEndWheelieMoveUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieMoveLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroEndWheelie(objectEvent, sprite, objectEvent->directionOverwrite,  1);
    else
        InitAcroEndWheelie(objectEvent, sprite, DIR_WEST, 1);
    return MovementAction_AcroEndWheelieMoveLeft_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroEndWheelieMoveLeft_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_AcroEndWheelieMoveRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        InitAcroEndWheelie(objectEvent, sprite, objectEvent->directionOverwrite,  1);
    else
        InitAcroEndWheelie(objectEvent, sprite, DIR_EAST, 1);
    return MovementAction_AcroEndWheelieMoveRight_Step1(objectEvent, sprite);
}

bool8 MovementAction_AcroEndWheelieMoveRight_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}

bool8 MovementAction_Levitate_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    CreateLevitateMovementTask(objectEvent);
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_StopLevitate_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    DestroyLevitateMovementTask(objectEvent->warpArrowSpriteId);
    sprite->y2 = 0;
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_StopLevitateAtTop_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (sprite->y2 == 0)
    {
        DestroyLevitateMovementTask(objectEvent->warpArrowSpriteId);
        sprite->sActionFuncId = 1;
        return TRUE;
    }
    return FALSE;
}

u8 MovementAction_Finish(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    return TRUE;
}

bool8 MovementAction_PauseSpriteAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->animPaused = TRUE;
    return TRUE;
}

static void UpdateObjectEventSpriteAnimPause(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->disableAnim)
        sprite->animPaused = TRUE;
}

static void TryEnableObjectEventAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->enableAnim)
    {
        sprite->animPaused = FALSE;
        objectEvent->disableAnim = FALSE;
        objectEvent->enableAnim = FALSE;
    }
}

static void UpdateObjectEventVisibility(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    UpdateObjectEventOffscreen(objectEvent, sprite);
    UpdateObjectEventSpriteVisibility(objectEvent, sprite);
}

static void UpdateObjectEventOffscreen(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    u16 x, y;
    u16 x2, y2;
    const struct ObjectEventGraphicsInfo *graphicsInfo;

    objectEvent->offScreen = FALSE;

    graphicsInfo = GetObjectEventGraphicsInfo(objectEvent->graphicsId);
    if (sprite->coordOffsetEnabled)
    {
        x = sprite->x + sprite->x2 + sprite->centerToCornerVecX + gSpriteCoordOffsetX;
        y = sprite->y + sprite->y2 + sprite->centerToCornerVecY + gSpriteCoordOffsetY;
    }
    else
    {
        x = sprite->x + sprite->x2 + sprite->centerToCornerVecX;
        y = sprite->y + sprite->y2 + sprite->centerToCornerVecY;
    }
    x2 = graphicsInfo->width;
    x2 += x;
    y2 = y;
    y2 += graphicsInfo->height;

    if ((s16)x >= DISPLAY_WIDTH + 16 || (s16)x2 < -16)
        objectEvent->offScreen = TRUE;

    if ((s16)y >= DISPLAY_HEIGHT + 16 || (s16)y2 < -16)
        objectEvent->offScreen = TRUE;
}

static void UpdateObjectEventSpriteVisibility(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->invisible = FALSE;
    if (objectEvent->invisible || objectEvent->offScreen)
        sprite->invisible = TRUE;
}

static void GetAllGroundEffectFlags_OnSpawn(struct ObjectEvent *objEvent, u32 *flags)
{
    ObjectEventUpdateMetatileBehaviors(objEvent);
    GetGroundEffectFlags_Reflection(objEvent, flags);
    GetGroundEffectFlags_TallGrassOnSpawn(objEvent, flags);
    GetGroundEffectFlags_LongGrassOnSpawn(objEvent, flags);
    GetGroundEffectFlags_SandHeap(objEvent, flags);
    GetGroundEffectFlags_ShallowFlowingWater(objEvent, flags);
    GetGroundEffectFlags_ShortGrass(objEvent, flags);
    GetGroundEffectFlags_HotSprings(objEvent, flags);
}

static void GetAllGroundEffectFlags_OnBeginStep(struct ObjectEvent *objEvent, u32 *flags)
{
    ObjectEventUpdateMetatileBehaviors(objEvent);
    GetGroundEffectFlags_Reflection(objEvent, flags);
    GetGroundEffectFlags_TallGrassOnBeginStep(objEvent, flags);
    GetGroundEffectFlags_LongGrassOnBeginStep(objEvent, flags);
    GetGroundEffectFlags_Tracks(objEvent, flags);
    GetGroundEffectFlags_SandHeap(objEvent, flags);
    GetGroundEffectFlags_ShallowFlowingWater(objEvent, flags);
    GetGroundEffectFlags_Puddle(objEvent, flags);
    GetGroundEffectFlags_ShortGrass(objEvent, flags);
    GetGroundEffectFlags_HotSprings(objEvent, flags);
}

static void GetAllGroundEffectFlags_OnFinishStep(struct ObjectEvent *objEvent, u32 *flags)
{
    ObjectEventUpdateMetatileBehaviors(objEvent);
    GetGroundEffectFlags_ShallowFlowingWater(objEvent, flags);
    GetGroundEffectFlags_SandHeap(objEvent, flags);
    GetGroundEffectFlags_Puddle(objEvent, flags);
    GetGroundEffectFlags_Ripple(objEvent, flags);
    GetGroundEffectFlags_ShortGrass(objEvent, flags);
    GetGroundEffectFlags_HotSprings(objEvent, flags);
    GetGroundEffectFlags_Seaweed(objEvent, flags);
    GetGroundEffectFlags_JumpLanding(objEvent, flags);
}

static void ObjectEventUpdateMetatileBehaviors(struct ObjectEvent *objEvent)
{
    objEvent->previousMetatileBehavior = MapGridGetMetatileBehaviorAt(objEvent->previousCoords.x, objEvent->previousCoords.y);
    objEvent->currentMetatileBehavior = MapGridGetMetatileBehaviorAt(objEvent->currentCoords.x, objEvent->currentCoords.y);
}

static void GetGroundEffectFlags_Reflection(struct ObjectEvent *objEvent, u32 *flags)
{
    u32 reflectionFlags[NUM_REFLECTION_TYPES - 1] = {
        [REFL_TYPE_ICE   - 1] = GROUND_EFFECT_FLAG_ICE_REFLECTION,
        [REFL_TYPE_WATER - 1] = GROUND_EFFECT_FLAG_WATER_REFLECTION
    };
    u8 reflType = ObjectEventGetNearbyReflectionType(objEvent);

    if (reflType)
    {
        if (objEvent->hasReflection == 0)
        {
            objEvent->hasReflection++;
            *flags |= reflectionFlags[reflType - 1];
        }
    }
    else
    {
        objEvent->hasReflection = FALSE;
    }
}

static void GetGroundEffectFlags_TallGrassOnSpawn(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsTallGrass(objEvent->currentMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_TALL_GRASS_ON_SPAWN;
}

static void GetGroundEffectFlags_TallGrassOnBeginStep(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsTallGrass(objEvent->currentMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE;
}

static void GetGroundEffectFlags_LongGrassOnSpawn(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsLongGrass(objEvent->currentMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_LONG_GRASS_ON_SPAWN;
}

static void GetGroundEffectFlags_LongGrassOnBeginStep(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsLongGrass(objEvent->currentMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_LONG_GRASS_ON_MOVE;
}

static void GetGroundEffectFlags_Tracks(struct ObjectEvent *objEvent, u32 *flags)
{
    if (objEvent->directionOverwrite)
        return;

    if (MetatileBehavior_IsDeepSand(objEvent->previousMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_DEEP_SAND;
    else if (MetatileBehavior_IsSandOrDeepSand(objEvent->previousMetatileBehavior)
             || MetatileBehavior_IsFootprints(objEvent->previousMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_SAND;
}

static void GetGroundEffectFlags_SandHeap(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsDeepSand(objEvent->currentMetatileBehavior)
        && MetatileBehavior_IsDeepSand(objEvent->previousMetatileBehavior))
    {
        if (!objEvent->inSandPile)
        {
            objEvent->inSandPile = FALSE;
            objEvent->inSandPile = TRUE;
            *flags |= GROUND_EFFECT_FLAG_SAND_PILE;
        }
    }
    else
    {
        objEvent->inSandPile = FALSE;
    }
}

static void GetGroundEffectFlags_ShallowFlowingWater(struct ObjectEvent *objEvent, u32 *flags)
{
    if ((MetatileBehavior_IsShallowFlowingWater(objEvent->currentMetatileBehavior)
         && MetatileBehavior_IsShallowFlowingWater(objEvent->previousMetatileBehavior))
        || (MetatileBehavior_IsPacifidlogLog(objEvent->currentMetatileBehavior)
            && MetatileBehavior_IsPacifidlogLog(objEvent->previousMetatileBehavior)))
    {
        if (!objEvent->inShallowFlowingWater)
        {
            objEvent->inShallowFlowingWater = FALSE;
            objEvent->inShallowFlowingWater = TRUE;
            *flags |= GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER;
        }
    }
    else
    {
        objEvent->inShallowFlowingWater = FALSE;
    }
}

static void GetGroundEffectFlags_Puddle(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsPuddle(objEvent->currentMetatileBehavior)
        && MetatileBehavior_IsPuddle(objEvent->previousMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_PUDDLE;
}

static void GetGroundEffectFlags_Ripple(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_HasRipples(objEvent->currentMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_RIPPLES;
}

static void GetGroundEffectFlags_ShortGrass(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsShortGrass(objEvent->currentMetatileBehavior)
        && MetatileBehavior_IsShortGrass(objEvent->previousMetatileBehavior))
    {
        if (!objEvent->inShortGrass)
        {
            objEvent->inShortGrass = FALSE;
            objEvent->inShortGrass = TRUE;
            *flags |= GROUND_EFFECT_FLAG_SHORT_GRASS;
        }
    }
    else
    {
        objEvent->inShortGrass = FALSE;
    }
}

static void GetGroundEffectFlags_HotSprings(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsHotSprings(objEvent->currentMetatileBehavior)
        && MetatileBehavior_IsHotSprings(objEvent->previousMetatileBehavior))
    {
        if (!objEvent->inHotSprings)
        {
            objEvent->inHotSprings = FALSE;
            objEvent->inHotSprings = TRUE;
            *flags |= GROUND_EFFECT_FLAG_HOT_SPRINGS;
        }
    }
    else
    {
        objEvent->inHotSprings = FALSE;
    }
}

static void GetGroundEffectFlags_Seaweed(struct ObjectEvent *objEvent, u32 *flags)
{
    if (MetatileBehavior_IsSeaweed(objEvent->currentMetatileBehavior))
        *flags |= GROUND_EFFECT_FLAG_SEAWEED;
}

static void GetGroundEffectFlags_JumpLanding(struct ObjectEvent *objEvent, u32 *flags)
{
    typedef bool8 (*MetatileFunc)(u8);

    static const MetatileFunc metatileFuncs[] = {
        MetatileBehavior_IsTallGrass,
        MetatileBehavior_IsLongGrass,
        MetatileBehavior_IsPuddle,
        MetatileBehavior_IsSurfableWaterOrUnderwater,
        MetatileBehavior_IsShallowFlowingWater,
        MetatileBehavior_IsATile,
    };

    static const u32 jumpLandingFlags[] = {
        GROUND_EFFECT_FLAG_LAND_IN_TALL_GRASS,
        GROUND_EFFECT_FLAG_LAND_IN_LONG_GRASS,
        GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER,
        GROUND_EFFECT_FLAG_LAND_IN_DEEP_WATER,
        GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER,
        GROUND_EFFECT_FLAG_LAND_ON_NORMAL_GROUND,
    };

    if (objEvent->landingJump && !objEvent->disableJumpLandingGroundEffect)
    {
        u8 i;

        for (i = 0; i < ARRAY_COUNT(metatileFuncs); i++)
        {
            if (metatileFuncs[i](objEvent->currentMetatileBehavior))
            {
                *flags |= jumpLandingFlags[i];
                return;
            }
        }
    }
}

#define RETURN_REFLECTION_TYPE_AT(x, y)              \
    b = MapGridGetMetatileBehaviorAt(x, y);          \
    result = GetReflectionTypeByMetatileBehavior(b); \
    if (result != REFL_TYPE_NONE)                    \
        return result;

static u8 ObjectEventGetNearbyReflectionType(struct ObjectEvent *objEvent)
{
    const struct ObjectEventGraphicsInfo *info = GetObjectEventGraphicsInfo(objEvent->graphicsId);

    // ceil div by tile width?
    s16 width = (info->width + 8) >> 4;
    s16 height = (info->height + 8) >> 4;
    s16 i, j;
    u8 result, b; // used by RETURN_REFLECTION_TYPE_AT
    s16 one = 1;

    for (i = 0; i < height; i++)
    {
        RETURN_REFLECTION_TYPE_AT(objEvent->currentCoords.x, objEvent->currentCoords.y + one + i)
        RETURN_REFLECTION_TYPE_AT(objEvent->previousCoords.x, objEvent->previousCoords.y + one + i)
        for (j = 1; j < width; j++)
        {
            RETURN_REFLECTION_TYPE_AT(objEvent->currentCoords.x + j, objEvent->currentCoords.y + one + i)
            RETURN_REFLECTION_TYPE_AT(objEvent->currentCoords.x - j, objEvent->currentCoords.y + one + i)
            RETURN_REFLECTION_TYPE_AT(objEvent->previousCoords.x + j, objEvent->previousCoords.y + one + i)
            RETURN_REFLECTION_TYPE_AT(objEvent->previousCoords.x - j, objEvent->previousCoords.y + one + i)
        }
    }

    return REFL_TYPE_NONE;
}

#undef RETURN_REFLECTION_TYPE_AT

static u8 GetReflectionTypeByMetatileBehavior(u32 behavior)
{
    if (MetatileBehavior_IsIce(behavior))
        return REFL_TYPE_ICE;
    else if (MetatileBehavior_IsReflective(behavior))
        return REFL_TYPE_WATER;
    else
        return REFL_TYPE_NONE;
}

u8 GetLedgeJumpDirection(s16 x, s16 y, u8 direction)
{
    static bool8 (*const ledgeBehaviorFuncs[])(u8) = {
        [DIR_SOUTH - 1] = MetatileBehavior_IsJumpSouth,
        [DIR_NORTH - 1] = MetatileBehavior_IsJumpNorth,
        [DIR_WEST - 1]  = MetatileBehavior_IsJumpWest,
        [DIR_EAST - 1]  = MetatileBehavior_IsJumpEast,
    };

    u8 behavior;
    u8 index = direction;

    if (index == DIR_NONE)
        return DIR_NONE;
    else if (index > DIR_EAST)
        index -= DIR_EAST;

    index--;
    behavior = MapGridGetMetatileBehaviorAt(x, y);

    if (ledgeBehaviorFuncs[index](behavior) == TRUE)
        return index + 1;

    return DIR_NONE;
}

static void SetObjectEventSpriteOamTableForLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    if (objEvent->disableCoveringGroundEffects)
        return;

    if (!MetatileBehavior_IsLongGrass(objEvent->currentMetatileBehavior))
        return;

    if (!MetatileBehavior_IsLongGrass(objEvent->previousMetatileBehavior))
        return;

    sprite->subspriteTableNum = 4;

    if (ElevationToPriority(objEvent->previousElevation) == 1)
        sprite->subspriteTableNum = 5;
}

static bool8 IsElevationMismatchAt(u8 elevation, s16 x, s16 y)
{
    u8 mapElevation;

    if (elevation == 0)
        return FALSE;

    mapElevation = MapGridGetElevationAt(x, y);

    if (mapElevation == 0 || mapElevation == 15)
        return FALSE;

    if (mapElevation != elevation)
        return TRUE;

    return FALSE;
}

static const u8 sElevationToSubpriority[] = {
    115, 115, 83, 115, 83, 115, 83, 115, 83, 115, 83, 115, 83, 0, 0, 115
};

static const u8 sElevationToPriority[] = {
    2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 0, 0, 2
};

static const u8 sElevationToSubspriteTableNum[] = {
    1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 0, 0, 1,
};

static void UpdateObjectEventElevationAndPriority(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    if (objEvent->fixedPriority)
        return;

    ObjectEventUpdateElevation(objEvent);

    sprite->subspriteTableNum = sElevationToSubspriteTableNum[objEvent->previousElevation];
    sprite->oam.priority = sElevationToPriority[objEvent->previousElevation];
}

static void InitObjectPriorityByElevation(struct Sprite *sprite, u8 elevation)
{
    sprite->subspriteTableNum = sElevationToSubspriteTableNum[elevation];
    sprite->oam.priority = sElevationToPriority[elevation];
}

u8 ElevationToPriority(u8 elevation)
{
    return sElevationToPriority[elevation];
}

void ObjectEventUpdateElevation(struct ObjectEvent *objEvent)
{
    u8 curElevation = MapGridGetElevationAt(objEvent->currentCoords.x, objEvent->currentCoords.y);
    u8 prevElevation = MapGridGetElevationAt(objEvent->previousCoords.x, objEvent->previousCoords.y);

    if (curElevation == 15 || prevElevation == 15)
        return;

    objEvent->currentElevation = curElevation;

    if (curElevation != 0 && curElevation != 15)
        objEvent->previousElevation = curElevation;
}

void SetObjectSubpriorityByElevation(u8 elevation, struct Sprite *sprite, u8 subpriority)
{
    s32 tmp = sprite->centerToCornerVecY;
    u32 tmpa = *(u16 *)&sprite->y;
    u32 tmpb = *(u16 *)&gSpriteCoordOffsetY;
    s32 tmp2 = (tmpa - tmp) + tmpb;
    u16 tmp3 = (16 - ((((u32)tmp2 + 8) & 0xFF) >> 4)) * 2;
    sprite->subpriority = tmp3 + sElevationToSubpriority[elevation] + subpriority;
}

static void ObjectEventUpdateSubpriority(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    if (objEvent->fixedPriority)
        return;

    SetObjectSubpriorityByElevation(objEvent->previousElevation, sprite, 1);
}

static bool8 AreElevationsCompatible(u8 a, u8 b)
{
    if (a == 0 || b == 0)
        return TRUE;

    if (a != b)
        return FALSE;

    return TRUE;
}

void GroundEffect_SpawnOnTallGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = 2; // priority
    gFieldEffectArguments[4] = objEvent->localId << 8 | objEvent->mapNum;
    gFieldEffectArguments[5] = objEvent->mapGroup;
    gFieldEffectArguments[6] = (u8)gSaveBlock1Ptr->location.mapNum << 8 | (u8)gSaveBlock1Ptr->location.mapGroup;
    gFieldEffectArguments[7] = TRUE; // skip to end of anim
    FieldEffectStart(FLDEFF_TALL_GRASS);
}

void GroundEffect_StepOnTallGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = 2; // priority
    gFieldEffectArguments[4] = objEvent->localId << 8 | objEvent->mapNum;
    gFieldEffectArguments[5] = objEvent->mapGroup;
    gFieldEffectArguments[6] = (u8)gSaveBlock1Ptr->location.mapNum << 8 | (u8)gSaveBlock1Ptr->location.mapGroup;
    gFieldEffectArguments[7] = FALSE; // don't skip to end of anim
    FieldEffectStart(FLDEFF_TALL_GRASS);
}

void GroundEffect_SpawnOnLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = 2;
    gFieldEffectArguments[4] = objEvent->localId << 8 | objEvent->mapNum;
    gFieldEffectArguments[5] = objEvent->mapGroup;
    gFieldEffectArguments[6] = (u8)gSaveBlock1Ptr->location.mapNum << 8 | (u8)gSaveBlock1Ptr->location.mapGroup;
    gFieldEffectArguments[7] = 1;
    FieldEffectStart(FLDEFF_LONG_GRASS);
}

void GroundEffect_StepOnLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = 2;
    gFieldEffectArguments[4] = (objEvent->localId << 8) | objEvent->mapNum;
    gFieldEffectArguments[5] = objEvent->mapGroup;
    gFieldEffectArguments[6] = (u8)gSaveBlock1Ptr->location.mapNum << 8 | (u8)gSaveBlock1Ptr->location.mapGroup;
    gFieldEffectArguments[7] = 0;
    FieldEffectStart(FLDEFF_LONG_GRASS);
}

void GroundEffect_WaterReflection(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    SetUpReflection(objEvent, sprite, FALSE);
}

void GroundEffect_IceReflection(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    SetUpReflection(objEvent, sprite, TRUE);
}

void GroundEffect_FlowingWater(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    StartFieldEffectForObjectEvent(FLDEFF_FEET_IN_FLOWING_WATER, objEvent);
}

static void (*const sGroundEffectTracksFuncs[])(struct ObjectEvent *objEvent, struct Sprite *sprite, bool8 isDeepSand) = {
    [TRACKS_NONE] = DoTracksGroundEffect_None,
    [TRACKS_FOOT] = DoTracksGroundEffect_Footprints,
    [TRACKS_BIKE_TIRE] = DoTracksGroundEffect_BikeTireTracks,
};

void GroundEffect_SandTracks(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    const struct ObjectEventGraphicsInfo *info = GetObjectEventGraphicsInfo(objEvent->graphicsId);
    sGroundEffectTracksFuncs[info->tracks](objEvent, sprite, FALSE);
}

void GroundEffect_DeepSandTracks(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    const struct ObjectEventGraphicsInfo *info = GetObjectEventGraphicsInfo(objEvent->graphicsId);
    sGroundEffectTracksFuncs[info->tracks](objEvent, sprite, TRUE);
}

static void DoTracksGroundEffect_None(struct ObjectEvent *objEvent, struct Sprite *sprite, bool8 isDeepSand)
{
}

static void DoTracksGroundEffect_Footprints(struct ObjectEvent *objEvent, struct Sprite *sprite, bool8 isDeepSand)
{
    // First half-word is a Field Effect script id. (gFieldEffectScriptPointers)
    u16 sandFootprints_FieldEffectData[2] = {
        FLDEFF_SAND_FOOTPRINTS,
        FLDEFF_DEEP_SAND_FOOTPRINTS
    };

    gFieldEffectArguments[0] = objEvent->previousCoords.x;
    gFieldEffectArguments[1] = objEvent->previousCoords.y;
    gFieldEffectArguments[2] = 149;
    gFieldEffectArguments[3] = 2;
    gFieldEffectArguments[4] = objEvent->facingDirection;
    FieldEffectStart(sandFootprints_FieldEffectData[isDeepSand]);
}

static void DoTracksGroundEffect_BikeTireTracks(struct ObjectEvent *objEvent, struct Sprite *sprite, bool8 isDeepSand)
{
    //  Specifies which bike track shape to show next.
    //  For example, when the bike turns from up to right, it will show
    //  a track that curves to the right.
    //  Each 4-byte row corresponds to the initial direction of the bike, and
    //  each byte in that row is for the next direction of the bike in the order
    //  of down, up, left, right.
    static const u8 bikeTireTracks_Transitions[4][4] = {
        {1, 2, 7, 8},
        {1, 2, 6, 5},
        {5, 8, 3, 4},
        {6, 7, 3, 4},
    };

    if (objEvent->currentCoords.x != objEvent->previousCoords.x || objEvent->currentCoords.y != objEvent->previousCoords.y)
    {
        u8 movementDir = (objEvent->previousMovementDirection > DIR_EAST) ? (objEvent->previousMovementDirection - DIR_EAST) : objEvent->previousMovementDirection;
        gFieldEffectArguments[0] = objEvent->previousCoords.x;
        gFieldEffectArguments[1] = objEvent->previousCoords.y;
        gFieldEffectArguments[2] = 149;
        gFieldEffectArguments[3] = 2;
        gFieldEffectArguments[4] =
            bikeTireTracks_Transitions[movementDir][objEvent->facingDirection - 5];
        FieldEffectStart(FLDEFF_BIKE_TIRE_TRACKS);
    }
}

void GroundEffect_Ripple(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    DoRippleFieldEffect(objEvent, sprite);
}

void GroundEffect_StepOnPuddle(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    StartFieldEffectForObjectEvent(FLDEFF_SPLASH, objEvent);
}

void GroundEffect_SandHeap(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    StartFieldEffectForObjectEvent(FLDEFF_SAND_PILE, objEvent);
}

void GroundEffect_JumpOnTallGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    u8 spriteId;

    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = 2;
    FieldEffectStart(FLDEFF_JUMP_TALL_GRASS);

    spriteId = FindTallGrassFieldEffectSpriteId(
        objEvent->localId,
        objEvent->mapNum,
        objEvent->mapGroup,
        objEvent->currentCoords.x,
        objEvent->currentCoords.y);

    if (spriteId == MAX_SPRITES)
        GroundEffect_SpawnOnTallGrass(objEvent, sprite);
}

void GroundEffect_JumpOnLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = 2;
    FieldEffectStart(FLDEFF_JUMP_LONG_GRASS);
}

void GroundEffect_JumpOnShallowWater(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = sprite->oam.priority;
    FieldEffectStart(FLDEFF_JUMP_SMALL_SPLASH);
}

void GroundEffect_JumpOnWater(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = sprite->oam.priority;
    FieldEffectStart(FLDEFF_JUMP_BIG_SPLASH);
}

void GroundEffect_JumpLandingDust(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    gFieldEffectArguments[2] = objEvent->previousElevation;
    gFieldEffectArguments[3] = sprite->oam.priority;
    FieldEffectStart(FLDEFF_DUST);
}

void GroundEffect_ShortGrass(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    StartFieldEffectForObjectEvent(FLDEFF_SHORT_GRASS, objEvent);
}

void GroundEffect_HotSprings(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    StartFieldEffectForObjectEvent(FLDEFF_HOT_SPRINGS_WATER, objEvent);
}

void GroundEffect_Seaweed(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    gFieldEffectArguments[0] = objEvent->currentCoords.x;
    gFieldEffectArguments[1] = objEvent->currentCoords.y;
    FieldEffectStart(FLDEFF_BUBBLES);
}

static void (*const sGroundEffectFuncs[])(struct ObjectEvent *objEvent, struct Sprite *sprite) = {
    GroundEffect_SpawnOnTallGrass,      // GROUND_EFFECT_FLAG_TALL_GRASS_ON_SPAWN
    GroundEffect_StepOnTallGrass,       // GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE
    GroundEffect_SpawnOnLongGrass,      // GROUND_EFFECT_FLAG_LONG_GRASS_ON_SPAWN
    GroundEffect_StepOnLongGrass,       // GROUND_EFFECT_FLAG_LONG_GRASS_ON_MOVE
    GroundEffect_WaterReflection,       // GROUND_EFFECT_FLAG_WATER_REFLECTION
    GroundEffect_IceReflection,         // GROUND_EFFECT_FLAG_ICE_REFLECTION
    GroundEffect_FlowingWater,          // GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER
    GroundEffect_SandTracks,            // GROUND_EFFECT_FLAG_SAND
    GroundEffect_DeepSandTracks,        // GROUND_EFFECT_FLAG_DEEP_SAND
    GroundEffect_Ripple,                // GROUND_EFFECT_FLAG_RIPPLES
    GroundEffect_StepOnPuddle,          // GROUND_EFFECT_FLAG_PUDDLE
    GroundEffect_SandHeap,              // GROUND_EFFECT_FLAG_SAND_PILE
    GroundEffect_JumpOnTallGrass,       // GROUND_EFFECT_FLAG_LAND_IN_TALL_GRASS
    GroundEffect_JumpOnLongGrass,       // GROUND_EFFECT_FLAG_LAND_IN_LONG_GRASS
    GroundEffect_JumpOnShallowWater,    // GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER
    GroundEffect_JumpOnWater,           // GROUND_EFFECT_FLAG_LAND_IN_DEEP_WATER
    GroundEffect_JumpLandingDust,       // GROUND_EFFECT_FLAG_LAND_ON_NORMAL_GROUND
    GroundEffect_ShortGrass,            // GROUND_EFFECT_FLAG_SHORT_GRASS
    GroundEffect_HotSprings,            // GROUND_EFFECT_FLAG_HOT_SPRINGS
    GroundEffect_Seaweed                // GROUND_EFFECT_FLAG_SEAWEED
};

static void DoFlaggedGroundEffects(struct ObjectEvent *objEvent, struct Sprite *sprite, u32 flags)
{
    u8 i;

    if (ObjectEventIsFarawayIslandMew(objEvent) == TRUE && !ShouldMewShakeGrass(objEvent))
        return;

    for (i = 0; i < ARRAY_COUNT(sGroundEffectFuncs); i++, flags >>= 1)
        if (flags & 1)
            sGroundEffectFuncs[i](objEvent, sprite);
}

void filters_out_some_ground_effects(struct ObjectEvent *objEvent, u32 *flags)
{
    if (objEvent->disableCoveringGroundEffects)
    {
        objEvent->inShortGrass = 0;
        objEvent->inSandPile = 0;
        objEvent->inShallowFlowingWater = 0;
        objEvent->inHotSprings = 0;
        *flags &= ~(GROUND_EFFECT_FLAG_HOT_SPRINGS
                  | GROUND_EFFECT_FLAG_SHORT_GRASS
                  | GROUND_EFFECT_FLAG_SAND_PILE
                  | GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER
                  | GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE);
    }
}

void FilterOutStepOnPuddleGroundEffectIfJumping(struct ObjectEvent *objEvent, u32 *flags)
{
    if (objEvent->landingJump)
        *flags &= ~GROUND_EFFECT_FLAG_PUDDLE;
}

static void DoGroundEffects_OnSpawn(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    u32 flags;

#ifdef BUGFIX
    if (objEvent->triggerGroundEffectsOnMove && objEvent->localId != OBJ_EVENT_ID_CAMERA)
#else
    if (objEvent->triggerGroundEffectsOnMove)
#endif
    {
        flags = 0;
        UpdateObjectEventElevationAndPriority(objEvent, sprite);
        GetAllGroundEffectFlags_OnSpawn(objEvent, &flags);
        SetObjectEventSpriteOamTableForLongGrass(objEvent, sprite);
        DoFlaggedGroundEffects(objEvent, sprite, flags);
        objEvent->triggerGroundEffectsOnMove = FALSE;
        objEvent->disableCoveringGroundEffects = 0;
    }
}

static void DoGroundEffects_OnBeginStep(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    u32 flags;

#ifdef BUGFIX
    if (objEvent->triggerGroundEffectsOnMove && objEvent->localId != OBJ_EVENT_ID_CAMERA)
#else
    if (objEvent->triggerGroundEffectsOnMove)
#endif
    {
        flags = 0;
        UpdateObjectEventElevationAndPriority(objEvent, sprite);
        GetAllGroundEffectFlags_OnBeginStep(objEvent, &flags);
        SetObjectEventSpriteOamTableForLongGrass(objEvent, sprite);
        filters_out_some_ground_effects(objEvent, &flags);
        DoFlaggedGroundEffects(objEvent, sprite, flags);
        objEvent->triggerGroundEffectsOnMove = FALSE;
        objEvent->disableCoveringGroundEffects = 0;
    }
}

static void DoGroundEffects_OnFinishStep(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    u32 flags;

#ifdef BUGFIX
    if (objEvent->triggerGroundEffectsOnStop && objEvent->localId != OBJ_EVENT_ID_CAMERA)
#else
    if (objEvent->triggerGroundEffectsOnStop)
#endif
    {
        flags = 0;
        UpdateObjectEventElevationAndPriority(objEvent, sprite);
        GetAllGroundEffectFlags_OnFinishStep(objEvent, &flags);
        SetObjectEventSpriteOamTableForLongGrass(objEvent, sprite);
        FilterOutStepOnPuddleGroundEffectIfJumping(objEvent, &flags);
        DoFlaggedGroundEffects(objEvent, sprite, flags);
        objEvent->triggerGroundEffectsOnStop = 0;
        objEvent->landingJump = 0;
    }
}

bool8 FreezeObjectEvent(struct ObjectEvent *objectEvent)
{
    if (objectEvent->heldMovementActive || objectEvent->frozen)
    {
        return TRUE;
    }
    else
    {
        objectEvent->frozen = TRUE;
        objectEvent->spriteAnimPausedBackup = gSprites[objectEvent->spriteId].animPaused;
        objectEvent->spriteAffineAnimPausedBackup = gSprites[objectEvent->spriteId].affineAnimPaused;
        gSprites[objectEvent->spriteId].animPaused = TRUE;
        gSprites[objectEvent->spriteId].affineAnimPaused = TRUE;
        return FALSE;
    }
}

void FreezeObjectEvents(void)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
        if (gObjectEvents[i].active && i != gPlayerAvatar.objectEventId)
            FreezeObjectEvent(&gObjectEvents[i]);
}

void FreezeObjectEventsExceptOne(u8 objectEventId)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
        if (i != objectEventId && gObjectEvents[i].active && i != gPlayerAvatar.objectEventId)
            FreezeObjectEvent(&gObjectEvents[i]);
}

void UnfreezeObjectEvent(struct ObjectEvent *objectEvent)
{
    if (objectEvent->active && objectEvent->frozen)
    {
        objectEvent->frozen = 0;
        gSprites[objectEvent->spriteId].animPaused = objectEvent->spriteAnimPausedBackup;
        gSprites[objectEvent->spriteId].affineAnimPaused = objectEvent->spriteAffineAnimPausedBackup;
    }
}

void UnfreezeObjectEvents(void)
{
    u8 i;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
        if (gObjectEvents[i].active)
            UnfreezeObjectEvent(&gObjectEvents[i]);
}

static void Step1(struct Sprite *sprite, u8 dir)
{
    sprite->x += sDirectionToVectors[dir].x;
    sprite->y += sDirectionToVectors[dir].y;
}

static void Step2(struct Sprite *sprite, u8 dir)
{
    sprite->x += 2 * (u16) sDirectionToVectors[dir].x;
    sprite->y += 2 * (u16) sDirectionToVectors[dir].y;
}

static void Step3(struct Sprite *sprite, u8 dir)
{
    sprite->x += 2 * (u16) sDirectionToVectors[dir].x + (u16) sDirectionToVectors[dir].x;
    sprite->y += 2 * (u16) sDirectionToVectors[dir].y + (u16) sDirectionToVectors[dir].y;
}

static void Step4(struct Sprite *sprite, u8 dir)
{
    sprite->x += 4 * (u16) sDirectionToVectors[dir].x;
    sprite->y += 4 * (u16) sDirectionToVectors[dir].y;
}

static void Step8(struct Sprite *sprite, u8 dir)
{
    sprite->x += 8 * (u16) sDirectionToVectors[dir].x;
    sprite->y += 8 * (u16) sDirectionToVectors[dir].y;
}

#define sSpeed data[4]
#define sTimer data[5]

static void SetSpriteDataForNormalStep(struct Sprite *sprite, u8 direction, u8 speed)
{
    sprite->sDirection = direction;
    sprite->sSpeed = speed;
    sprite->sTimer = 0;
}

typedef void (*SpriteStepFunc)(struct Sprite *sprite, u8 direction);

static const SpriteStepFunc sStep1Funcs[] = {
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
    Step1,
};

static const SpriteStepFunc sStep2Funcs[] = {
    Step2,
    Step2,
    Step2,
    Step2,
    Step2,
    Step2,
    Step2,
    Step2,
};

static const SpriteStepFunc sStep3Funcs[] = {
    Step2,
    Step3,
    Step3,
    Step2,
    Step3,
    Step3,
};

static const SpriteStepFunc sStep4Funcs[] = {
    Step4,
    Step4,
    Step4,
    Step4,
};

static const SpriteStepFunc sStep8Funcs[] = {
    Step8,
    Step8,
};

static const SpriteStepFunc *const sNpcStepFuncTables[] = {
    [MOVE_SPEED_NORMAL] = sStep1Funcs,
    [MOVE_SPEED_FAST_1] = sStep2Funcs,
    [MOVE_SPEED_FAST_2] = sStep3Funcs,
    [MOVE_SPEED_FASTER] = sStep4Funcs,
    [MOVE_SPEED_FASTEST] = sStep8Funcs,
};

static const s16 sStepTimes[] = {
    [MOVE_SPEED_NORMAL] = ARRAY_COUNT(sStep1Funcs),
    [MOVE_SPEED_FAST_1] = ARRAY_COUNT(sStep2Funcs),
    [MOVE_SPEED_FAST_2] = ARRAY_COUNT(sStep3Funcs),
    [MOVE_SPEED_FASTER] = ARRAY_COUNT(sStep4Funcs),
    [MOVE_SPEED_FASTEST] = ARRAY_COUNT(sStep8Funcs),
};

static bool8 NpcTakeStep(struct Sprite *sprite)
{
    if (sprite->sTimer >= sStepTimes[sprite->sSpeed])
        return FALSE;

    sNpcStepFuncTables[sprite->sSpeed][sprite->sTimer](sprite, sprite->sDirection);

    sprite->sTimer++;

    if (sprite->sTimer < sStepTimes[sprite->sSpeed])
        return FALSE;

    return TRUE;
}

#undef sSpeed
#undef sTimer

#define sTimer     data[4]
#define sNumSteps  data[5]

static void SetWalkSlowSpriteData(struct Sprite *sprite, u8 direction)
{
    sprite->sDirection = direction;
    sprite->sTimer = 0;
    sprite->sNumSteps = 0;
}

static bool8 UpdateWalkSlowAnim(struct Sprite *sprite)
{
    if (!(sprite->sTimer & 1))
    {
        Step1(sprite, sprite->sDirection);
        sprite->sNumSteps++;
    }

    sprite->sTimer++;

    if (sprite->sNumSteps > 15)
        return TRUE;
    else
        return FALSE;
}

#undef sTimer
#undef sNumSteps

static const s8 sFigure8XOffsets[FIGURE_8_LENGTH] = {
    1, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 1, 2, 2, 1, 2,
    2, 1, 2, 2, 1, 2, 1, 1,
    2, 1, 1, 2, 1, 1, 2, 1,
    1, 2, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1,
    0, 1, 1, 1, 0, 1, 1, 0,
    1, 0, 1, 0, 1, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
};

static const s8 sFigure8YOffsets[FIGURE_8_LENGTH] = {
     0,  0,  1,  0,  0,  1,  0,  0,
     1,  0,  1,  1,  0,  1,  1,  0,
     1,  1,  0,  1,  1,  0,  1,  1,
     0,  0,  1,  0,  0,  1,  0,  0,
     1,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,
     0,  0, -1,  0,  0, -1,  0,  0,
    -1,  0, -1, -1,  0, -1, -1,  0,
    -1, -1, -1, -1, -1, -1, -1, -2,
};

s16 GetFigure8YOffset(s16 idx)
{
    return sFigure8YOffsets[idx];
}

s16 GetFigure8XOffset(s16 idx)
{
    return sFigure8XOffsets[idx];
}

static void InitSpriteForFigure8Anim(struct Sprite *sprite)
{
    sprite->data[6] = 0;
    sprite->data[7] = 0;
}

static bool8 AnimateSpriteInFigure8(struct Sprite *sprite)
{
    bool8 finished = FALSE;

    switch(sprite->data[7])
    {
    case 0:
        sprite->x2 += GetFigure8XOffset(sprite->data[6]);
        sprite->y2 += GetFigure8YOffset(sprite->data[6]);
        break;
    case 1:
        sprite->x2 -= GetFigure8XOffset((FIGURE_8_LENGTH - 1) - sprite->data[6]);
        sprite->y2 += GetFigure8YOffset((FIGURE_8_LENGTH - 1) - sprite->data[6]);
        break;
    case 2:
        sprite->x2 -= GetFigure8XOffset(sprite->data[6]);
        sprite->y2 += GetFigure8YOffset(sprite->data[6]);
        break;
    case 3:
        sprite->x2 += GetFigure8XOffset((FIGURE_8_LENGTH - 1) - sprite->data[6]);
        sprite->y2 += GetFigure8YOffset((FIGURE_8_LENGTH - 1) - sprite->data[6]);
        break;
    }
    if (++sprite->data[6] == FIGURE_8_LENGTH)
    {
        sprite->data[6] = 0;
        sprite->data[7]++;
    }
    if (sprite->data[7] == 4)
    {
        sprite->y2 = 0;
        sprite->x2 = 0;
        finished = TRUE;
    }
    return finished;
}

static const s8 sJumpY_High[] = {
     -4,  -6,  -8, -10, -11, -12, -12, -12,
    -11, -10,  -9,  -8,  -6,  -4,   0,   0
};

static const s8 sJumpY_Low[] = {
    0,   -2,  -3,  -4,  -5,  -6,  -6,  -6,
    -5,  -5,  -4,  -3,  -2,   0,   0,   0
};

static const s8 sJumpY_Normal[] = {
    -2,  -4,  -6,  -8,  -9, -10, -10, -10,
    -9,  -8,  -6,  -5,  -3,  -2,   0,   0
};

static const s8 *const sJumpYTable[] = {
    [JUMP_TYPE_HIGH]   = sJumpY_High,
    [JUMP_TYPE_LOW]    = sJumpY_Low,
    [JUMP_TYPE_NORMAL] = sJumpY_Normal
};

static s16 GetJumpY(s16 i, u8 type)
{
    return sJumpYTable[type][i];
}

#define sDistance  data[4]
#define sJumpType  data[5]
#define sTimer     data[6]

static void SetJumpSpriteData(struct Sprite *sprite, u8 direction, u8 distance, u8 type)
{
    sprite->sDirection = direction;
    sprite->sDistance = distance;
    sprite->sJumpType = type;
    sprite->sTimer = 0;
}

static u8 DoJumpSpriteMovement(struct Sprite *sprite)
{
    s16 distanceToTime[] = {
        [JUMP_DISTANCE_IN_PLACE] = 16,
        [JUMP_DISTANCE_NORMAL] = 16,
        [JUMP_DISTANCE_FAR] = 32,
    };
    u8 distanceToShift[] = {
        [JUMP_DISTANCE_IN_PLACE] = 0,
        [JUMP_DISTANCE_NORMAL] = 0,
        [JUMP_DISTANCE_FAR] = 1,
    };
    u8 result = 0;

    if (sprite->sDistance != JUMP_DISTANCE_IN_PLACE)
        Step1(sprite, sprite->sDirection);

    sprite->y2 = GetJumpY(sprite->sTimer >> distanceToShift[sprite->sDistance], sprite->sJumpType);

    sprite->sTimer++;

    if (sprite->sTimer == distanceToTime[sprite->sDistance] >> 1)
        result = JUMP_HALFWAY;

    if (sprite->sTimer >= distanceToTime[sprite->sDistance])
    {
        sprite->y2 = 0;
        result = JUMP_FINISHED;
    }

    return result;
}

static u8 DoJumpSpecialSpriteMovement(struct Sprite *sprite)
{
    s16 distanceToTime[] = {
        [JUMP_DISTANCE_IN_PLACE] = 32,
        [JUMP_DISTANCE_NORMAL] = 32,
        [JUMP_DISTANCE_FAR] = 64,
    };
    u8 distanceToShift[] = {
        [JUMP_DISTANCE_IN_PLACE] = 1,
        [JUMP_DISTANCE_NORMAL] = 1,
        [JUMP_DISTANCE_FAR] = 2,
    };
    u8 result = 0;

    if (sprite->sDistance != JUMP_DISTANCE_IN_PLACE && !(sprite->sTimer & 1))
        Step1(sprite, sprite->sDirection);

    sprite->y2 = GetJumpY(sprite->sTimer >> distanceToShift[sprite->sDistance], sprite->sJumpType);

    sprite->sTimer++;

    if (sprite->sTimer == distanceToTime[sprite->sDistance] >> 1)
        result = JUMP_HALFWAY;

    if (sprite->sTimer >= distanceToTime[sprite->sDistance])
    {
        sprite->y2 = 0;
        result = JUMP_FINISHED;
    }

    return result;
}

#undef sDistance
#undef sJumpType
#undef sTimer

static void SetMovementDelay(struct Sprite *sprite, s16 timer)
{
    sprite->data[3] = timer;
}

static bool8 WaitForMovementDelay(struct Sprite *sprite)
{
    if (--sprite->data[3] == 0)
        return TRUE;
    else
        return FALSE;
}

void SetAndStartSpriteAnim(struct Sprite *sprite, u8 animNum, u8 animCmdIndex)
{
    sprite->animNum = animNum;
    sprite->animPaused = FALSE;
    SeekSpriteAnim(sprite, animCmdIndex);
}

bool8 SpriteAnimEnded(struct Sprite *sprite)
{
    if (sprite->animEnded)
        return TRUE;
    else
        return FALSE;
}

void UpdateObjectEventSpriteInvisibility(struct Sprite *sprite, bool8 invisible)
{
    u16 x, y;
    s16 x2, y2;

    sprite->invisible = invisible;

    if (sprite->coordOffsetEnabled)
    {
        x = sprite->x + sprite->x2 + sprite->centerToCornerVecX + gSpriteCoordOffsetX;
        y = sprite->y + sprite->y2 + sprite->centerToCornerVecY + gSpriteCoordOffsetY;
    }
    else
    {
        x = sprite->x + sprite->x2 + sprite->centerToCornerVecX;
        y = sprite->y + sprite->y2 + sprite->centerToCornerVecY;
    }

    x2 = x - (sprite->centerToCornerVecX >> 1);
    y2 = y - (sprite->centerToCornerVecY >> 1);

    if ((s16)x >= DISPLAY_WIDTH + 16 || x2 < -16)
        sprite->invisible = TRUE;
    if ((s16)y >= DISPLAY_HEIGHT + 16 || y2 < -16)
        sprite->invisible = TRUE;
}

#define sInvisible     data[2]
#define sAnimNum       data[3]
#define sAnimState     data[4]

static void SpriteCB_VirtualObject(struct Sprite *sprite)
{
    VirtualObject_UpdateAnim(sprite);
    SetObjectSubpriorityByElevation(sprite->sVirtualObjElev, sprite, 1);
    UpdateObjectEventSpriteInvisibility(sprite, sprite->sInvisible);
}

static void UNUSED DestroyVirtualObjects(void)
{
    int i;

    for (i = 0; i < MAX_SPRITES; i++)
    {
        struct Sprite *sprite = &gSprites[i];
        if(sprite->inUse && sprite->callback == SpriteCB_VirtualObject)
            DestroySprite(sprite);
    }
}

static int GetVirtualObjectSpriteId(u8 virtualObjId)
{
    int i;

    for (i = 0; i < MAX_SPRITES; i++)
    {
        struct Sprite *sprite = &gSprites[i];
        if (sprite->inUse && sprite->callback == SpriteCB_VirtualObject && (u8)sprite->sVirtualObjId == virtualObjId)
            return i;
    }
    return MAX_SPRITES;
}

void TurnVirtualObject(u8 virtualObjId, u8 direction)
{
    u8 spriteId = GetVirtualObjectSpriteId(virtualObjId);

    if (spriteId != MAX_SPRITES)
        StartSpriteAnim(&gSprites[spriteId], GetFaceDirectionAnimNum(direction));
}

void SetVirtualObjectGraphics(u8 virtualObjId, u16 graphicsId)
{
    int spriteId = GetVirtualObjectSpriteId(virtualObjId);

    if (spriteId != MAX_SPRITES)
    {
        struct Sprite *sprite = &gSprites[spriteId];
        const struct ObjectEventGraphicsInfo *graphicsInfo = GetObjectEventGraphicsInfo(graphicsId);
        u16 tileNum = sprite->oam.tileNum;

        sprite->oam = *graphicsInfo->oam;
        sprite->oam.tileNum = tileNum;
        sprite->oam.paletteNum = graphicsInfo->paletteSlot;
        sprite->images = graphicsInfo->images;

        if (graphicsInfo->subspriteTables == NULL)
        {
            sprite->subspriteTables = NULL;
            sprite->subspriteTableNum = 0;
            sprite->subspriteMode = SUBSPRITES_OFF;
        }
        else
        {
            SetSubspriteTables(sprite, graphicsInfo->subspriteTables);
            sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        }
        StartSpriteAnim(sprite, 0);
    }
}

void SetVirtualObjectInvisibility(u8 virtualObjId, bool32 invisible)
{
    u8 spriteId = GetVirtualObjectSpriteId(virtualObjId);

    if (spriteId == MAX_SPRITES)
        return;

    if (invisible)
        gSprites[spriteId].sInvisible = TRUE;
    else
        gSprites[spriteId].sInvisible = FALSE;
}

bool32 IsVirtualObjectInvisible(u8 virtualObjId)
{
    u8 spriteId = GetVirtualObjectSpriteId(virtualObjId);

    if (spriteId == MAX_SPRITES)
        return FALSE;

    return (gSprites[spriteId].sInvisible == TRUE);
}

void SetVirtualObjectSpriteAnim(u8 virtualObjId, u8 animNum)
{
    u8 spriteId = GetVirtualObjectSpriteId(virtualObjId);

    if (spriteId != MAX_SPRITES)
    {
        gSprites[spriteId].sAnimNum = animNum;
        gSprites[spriteId].sAnimState = 0;
    }
}

static void MoveUnionRoomObjectUp(struct Sprite *sprite)
{
    switch(sprite->sAnimState)
    {
    case 0:
        sprite->y2 = 0;
        sprite->sAnimState++;
    case 1:
        sprite->y2 -= 8;
        if (sprite->y2 == -DISPLAY_HEIGHT)
        {
            sprite->y2 = 0;
            sprite->sInvisible = TRUE;
            sprite->sAnimNum = 0;
            sprite->sAnimState = 0;
        }
    }
}

static void MoveUnionRoomObjectDown(struct Sprite *sprite)
{
    switch(sprite->sAnimState)
    {
    case 0:
        sprite->y2 = -DISPLAY_HEIGHT;
        sprite->sAnimState++;
    case 1:
        sprite->y2 += 8;
        if(sprite->y2 == 0)
        {
            sprite->sAnimNum = 0;
            sprite->sAnimState = 0;
        }
    }
}

static void VirtualObject_UpdateAnim(struct Sprite *sprite)
{
    switch(sprite->sAnimNum)
    {
    case UNION_ROOM_SPAWN_IN:
        MoveUnionRoomObjectDown(sprite);
        break;
    case UNION_ROOM_SPAWN_OUT:
        MoveUnionRoomObjectUp(sprite);
        break;
    case 0:
        break;
    default:
        sprite->sAnimNum = 0;
        break;
    }
}

bool32 IsVirtualObjectAnimating(u8 virtualObjId)
{
    u8 spriteId = GetVirtualObjectSpriteId(virtualObjId);

    if (spriteId == MAX_SPRITES)
        return FALSE;

    if (gSprites[spriteId].sAnimNum != 0)
        return TRUE;

    return FALSE;
}

u32 StartFieldEffectForObjectEvent(u8 fieldEffectId, struct ObjectEvent *objectEvent)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    return FieldEffectStart(fieldEffectId);
}

static void DoShadowFieldEffect(struct ObjectEvent *objectEvent)
{
    if (!objectEvent->hasShadow)
    {
        objectEvent->hasShadow = TRUE;
        StartFieldEffectForObjectEvent(FLDEFF_SHADOW, objectEvent);
    }
}

static void DoRippleFieldEffect(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    const struct ObjectEventGraphicsInfo *graphicsInfo = GetObjectEventGraphicsInfo(objectEvent->graphicsId);
    gFieldEffectArguments[0] = sprite->x;
    gFieldEffectArguments[1] = sprite->y + (graphicsInfo->height >> 1) - 2;
    gFieldEffectArguments[2] = 151;
    gFieldEffectArguments[3] = 3;
    FieldEffectStart(FLDEFF_RIPPLE);
}

u8 (*const gMovementActionFuncs_LockAnim[])(struct ObjectEvent *, struct Sprite *) = {
    MovementAction_LockAnim_Step0,
    MovementAction_Finish,
};

u8 (*const gMovementActionFuncs_UnlockAnim[])(struct ObjectEvent *, struct Sprite *) = {
    MovementAction_UnlockAnim_Step0,
    MovementAction_Finish,
};

u8 (*const gMovementActionFuncs_FlyUp[])(struct ObjectEvent *, struct Sprite *) = {
    MovementAction_FlyUp_Step0,
    MovementAction_FlyUp_Step1,
    MovementAction_Fly_Finish,
};

u8 (*const gMovementActionFuncs_FlyDown[])(struct ObjectEvent *, struct Sprite *) = {
    MovementAction_FlyDown_Step0,
    MovementAction_FlyDown_Step1,
    MovementAction_Fly_Finish,
};

u8 MovementAction_LockAnim_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    bool32 ableToStore = FALSE;
    if (sLockedAnimObjectEvents == NULL)
    {
        sLockedAnimObjectEvents = AllocZeroed(sizeof(struct LockedAnimObjectEvents));
        sLockedAnimObjectEvents->localIds[0] = objectEvent->localId;
        sLockedAnimObjectEvents->count = 1;
        ableToStore = TRUE;
    }
    else
    {
        u8 i;
        u8 firstFreeSlot = OBJECT_EVENTS_COUNT;
        bool32 found = FALSE;
        for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
        {
            if (firstFreeSlot == OBJECT_EVENTS_COUNT && sLockedAnimObjectEvents->localIds[i] == 0)
                firstFreeSlot = i;

            if (sLockedAnimObjectEvents->localIds[i] == objectEvent->localId)
            {
                found = TRUE;
                break;
            }
        }

        if (!found && firstFreeSlot != OBJECT_EVENTS_COUNT)
        {
            sLockedAnimObjectEvents->localIds[firstFreeSlot] = objectEvent->localId;
            sLockedAnimObjectEvents->count++;
            ableToStore = TRUE;
        }
    }

    if (ableToStore == TRUE)
    {
        objectEvent->inanimate = TRUE;
        objectEvent->facingDirectionLocked = TRUE;
    }

    sprite->sActionFuncId = 1;
    return TRUE;
}

u8 MovementAction_UnlockAnim_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    bool32 ableToStore;
    u8 index;

    sprite->sActionFuncId = 1;
    if (sLockedAnimObjectEvents != NULL)
    {
        ableToStore = FALSE;
        index = FindLockedObjectEventIndex(objectEvent);
        if (index != OBJECT_EVENTS_COUNT)
        {
            sLockedAnimObjectEvents->localIds[index] = 0;
            sLockedAnimObjectEvents->count--;
            ableToStore = TRUE;
        }
        if (sLockedAnimObjectEvents->count == 0)
            FREE_AND_SET_NULL(sLockedAnimObjectEvents);
        if (ableToStore == TRUE)
        {
            objectEvent->inanimate = GetObjectEventGraphicsInfo(objectEvent->graphicsId)->inanimate;
            objectEvent->facingDirectionLocked = FALSE;
            sprite->animPaused = 0;
        }
    }

    return TRUE;
}

u8 FindLockedObjectEventIndex(struct ObjectEvent *objectEvent)
{
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (sLockedAnimObjectEvents->localIds[i] == objectEvent->localId)
            return i;
    }
    return OBJECT_EVENTS_COUNT;
}

static void CreateLevitateMovementTask(struct ObjectEvent *objectEvent)
{
    u8 taskId = CreateTask(ApplyLevitateMovement, 0xFF);
    struct Task *task = &gTasks[taskId];

    StoreWordInTwoHalfwords((u16*) &task->data[0], (u32)objectEvent);
    objectEvent->warpArrowSpriteId = taskId;
    task->data[3] = 0xFFFF;
}

static void ApplyLevitateMovement(u8 taskId)
{
    struct ObjectEvent *objectEvent;
    struct Sprite *sprite;
    struct Task *task = &gTasks[taskId];

    LoadWordFromTwoHalfwords((u16*) &task->data[0], (u32 *)&objectEvent); // load the map object pointer.
    sprite = &gSprites[objectEvent->spriteId];

    if(!(task->data[2] & 3))
        sprite->y2 += task->data[3];

    if(!(task->data[2] & 15))
        task->data[3] = -task->data[3];

    task->data[2]++;
}

static void DestroyLevitateMovementTask(u8 taskId)
{
    struct ObjectEvent *objectEvent;
    struct Task *task = &gTasks[taskId];

    LoadWordFromTwoHalfwords((u16*) &task->data[0], (u32 *)&objectEvent); // unused objectEvent
    DestroyTask(taskId);
}

// Used to freeze other objects except two trainers approaching for battle
void FreezeObjectEventsExceptTwo(u8 objectEventId1, u8 objectEventId2)
{
    u8 i;

    for(i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if(i != objectEventId1 && i != objectEventId2 &&
            gObjectEvents[i].active && i != gPlayerAvatar.objectEventId)
                FreezeObjectEvent(&gObjectEvents[i]);
    }
}

u8 MovementAction_FlyUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->y2 = 0;
    sprite->sActionFuncId++;
    return FALSE;
}

u8 MovementAction_FlyUp_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->y2 -= 8;

    if(sprite->y2 == -DISPLAY_HEIGHT)
        sprite->sActionFuncId++;
    return FALSE;
}

u8 MovementAction_FlyDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->y2 = -DISPLAY_HEIGHT;
    sprite->sActionFuncId++;
    return FALSE;
}

u8 MovementAction_FlyDown_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    sprite->y2 += 8;

    if(!sprite->y2)
        sprite->sActionFuncId++;
    return FALSE;
}

// though this function returns TRUE without doing anything, this header is required due to being in an array of functions which needs it.
u8 MovementAction_Fly_Finish(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    return TRUE;
}


// running slow
static void StartSlowRunningAnim(struct ObjectEvent *objectEvent, struct Sprite *sprite, u8 direction)
{
    InitNpcForWalkSlow(objectEvent, sprite, direction);
    SetStepAnimHandleAlternation(objectEvent, sprite, GetRunningDirectionAnimNum(objectEvent->facingDirection));
}

bool8 MovementActionFunc_RunSlowDown_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSlowRunningAnim(objectEvent, sprite, DIR_SOUTH);
    return MovementActionFunc_RunSlow_Step1(objectEvent, sprite);
}

bool8 MovementActionFunc_RunSlowUp_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    StartSlowRunningAnim(objectEvent, sprite, DIR_NORTH);
    return MovementActionFunc_RunSlow_Step1(objectEvent, sprite);
}

bool8 MovementActionFunc_RunSlowLeft_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        StartSlowRunningAnim(objectEvent, sprite, objectEvent->directionOverwrite);
    else
        StartSlowRunningAnim(objectEvent, sprite, DIR_WEST);
    return MovementActionFunc_RunSlow_Step1(objectEvent, sprite);
}

bool8 MovementActionFunc_RunSlowRight_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (objectEvent->directionOverwrite)
        StartSlowRunningAnim(objectEvent, sprite, objectEvent->directionOverwrite);
    else
        StartSlowRunningAnim(objectEvent, sprite, DIR_EAST);
    return MovementActionFunc_RunSlow_Step1(objectEvent, sprite);
}

bool8 MovementActionFunc_RunSlow_Step1(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    if (UpdateMovementNormal(objectEvent, sprite))
    {
        sprite->sActionFuncId = 2;
        return TRUE;
    }
    return FALSE;
}
// NEW
u16 GetMiniStepCount(u8 speed)
{
    return (u16)sStepTimes[speed];
}

void RunMiniStep(struct Sprite *sprite, u8 speed, u8 currentFrame)
{
    sNpcStepFuncTables[speed][currentFrame](sprite, sprite->data[3]);
}

bool8 PlayerIsUnderWaterfall(struct ObjectEvent *objectEvent)
{
    s16 x;
    s16 y;

    x = objectEvent->currentCoords.x;
    y = objectEvent->currentCoords.y;
    MoveCoordsInDirection(DIR_NORTH, &x, &y, 0, 1);
    if (MetatileBehavior_IsWaterfall(MapGridGetMetatileBehaviorAt(x, y)))
        return TRUE;
    
    return FALSE;
}

bool8 MovementAction_EmoteX_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_X_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}

bool8 MovementAction_EmoteDoubleExclamationMark_Step0(struct ObjectEvent *objectEvent, struct Sprite *sprite)
{
    ObjectEventGetLocalIdAndMap(objectEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FieldEffectStart(FLDEFF_DOUBLE_EXCL_MARK_ICON);
    sprite->sActionFuncId = 1;
    return TRUE;
}
