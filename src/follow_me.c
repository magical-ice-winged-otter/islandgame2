#include "global.h"
#include "follow_me.h"
#include "event_object_movement.h"
#include "field_door.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff_misc.h"
#include "item.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "script.h"
#include "constants/event_object_movement_constants.h"
#include "constants/event_objects.h"
#include "constants/songs.h"

// Defines
enum FollowerSpriteTypes
{
	FOLLOWER_SPRITE_INDEX_NORMAL,
	FOLLOWER_SPRITE_INDEX_BIKE,
	FOLLOWER_SPRITE_INDEX_SURF,
	FOLLOWER_SPRITE_INDEX_UNDERWATER,
};

struct FollowerSpriteGraphics
{
	u16 normalId;
	u16 bikeId;
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
             u8 createSurfBlob:1;
             u8 comeOutDoorStairs:1;
	/*0x01*/ u8 objId;
	/*0x02*/ u8 currentSprite;
	/*0x03*/ u8 delayedState;
    /*0x04*/ struct FollowerMapData map;
	/*0x08*/ struct Coords16 log;
	/*0x0C*/ const u8* script;
	/*0x10*/ u16 flag;
	/*0x12*/ u16 gfxId;
	/*0x14*/ u8 flags;
	/*0x15*/ u8 locked;
}; /* size = 0x18 */

// EWRAM
static EWRAM_DATA struct Follower gFollowerState[] = NULL;

// Function Declarations

// Const Data
static const struct FollowerSpriteGraphics gFollowerAlternateSprites[] =
{
	//FORMAT:
	//{WALKING/RUNNING SPRITE ID, BIKING SPRITE ID, SURFING SPRITE ID},
	//EXAMPLE: {MALE PLAYER WALKING, MALE PLAYER BIKING, MALE PLAYER SURFING},
	{0, 1, 2, 2},
    
};

// Functions
static u8 GetFollowerGraphicsId(void)
{
	if (!gFollowerState.inProgress)
		return EVENT_OBJECTS_COUNT;

	return gFollowerState.objId;
}

static u8 GetFollowerLocalId(void)
{
	if (!gFollowerState.inProgress)
		return 0;

	return gEventObjects[gFollowerState.objId].localId;
}

static const u8* GetFollowerScriptPointer(void)
{
	if (!gFollowerState.inProgress)
		return NULL;

	return gFollowerState.script;
}

static void HideFollower(void)
{
	if (!gFollowerState.inProgress)
		return;

	if (gFollowerState.createSurfBlob == 2 || gFollowerState.createSurfBlob == 3)
	{
		BindFieldEffectToSprite(gEventObjects[GetFollowerMapObjId()].fieldEffectSpriteId, 2);
		DestroySprite(&gSprites[gEventObjects[GetFollowerMapObjId()].fieldEffectSpriteId]);
		gEventObjects[GetFollowerMapObjId()].fieldEffectSpriteId = 0; //Unbind
	}

	gEventObjects[GetFollowerMapObjId()].invisible = TRUE;
}

