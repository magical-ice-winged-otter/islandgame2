#include "global.h"
#include "event_object_movement.h"
#include "dynamic_objects.h"
#include "constants/trainer_types.h"
#include "script.h"
#include "event_data.h"
#include "util.h"
#include "constants/map_scripts.h"
#include "constants/global.h"



void SpawnDynamicObject(u8 dynObjId, u16 graphicsId, u8 movementBehavior, s16 x, s16 y, u8 z, const u8 *scriptPtr)
{
    struct ObjectEventTemplate objectEventTemplate;
    u8 UNUSED id = 0;
    objectEventTemplate.localId = dynObjId;
    objectEventTemplate.graphicsId = graphicsId;
    objectEventTemplate.x = x;
    objectEventTemplate.y = y;
    objectEventTemplate.elevation = z;
    objectEventTemplate.movementType = movementBehavior;
    objectEventTemplate.movementRangeX = 0;
    objectEventTemplate.movementRangeY = 0;
    objectEventTemplate.trainerType = TRAINER_TYPE_NONE;
    objectEventTemplate.trainerRange_berryTreeId = 0;
    objectEventTemplate.script = scriptPtr;
    objectEventTemplate.flagId = 0;
    id = SpawnSpecialObjectEvent(&objectEventTemplate);
}

void AddDynamicObject(u8 i, u8 mapGroup, u8 mapNum, u16 graphicsId, u8 movementType, s16 xpos, s16 ypos, u8 zpos, const u8 *scriptPointer)
{
    if (DynamicObjectListIsFull() || gSaveBlock1Ptr->dynamicObjects[i].active == TRUE)
        return;

    gSaveBlock1Ptr->dynamicObjects[i].active = TRUE;
    gSaveBlock1Ptr->dynamicObjects[i].gfxId = graphicsId;
    gSaveBlock1Ptr->dynamicObjects[i].movement = movementType;
    gSaveBlock1Ptr->dynamicObjects[i].localId = (0xF0 + i);
    gSaveBlock1Ptr->dynamicObjects[i].x = xpos;
    gSaveBlock1Ptr->dynamicObjects[i].y = ypos;
    gSaveBlock1Ptr->dynamicObjects[i].z = zpos;
    gSaveBlock1Ptr->dynamicObjects[i].scriptPtr = scriptPointer;
    gSaveBlock1Ptr->dynamicObjects[i].mapGroup = mapGroup;
    gSaveBlock1Ptr->dynamicObjects[i].mapNum = mapNum;
}

int GetLowestEmptyDynamicObjectSlot(void)
{
    u32 i;
    u8 count = 0;
    for (i=0;i<MAX_DYNAMIC_OBJECTS;i++)
    {
        if (gSaveBlock1Ptr->dynamicObjects[i].active == TRUE)
            count++;
    }

    if (count > 3)
        return 0xffff;//max dynamic objects reached, don't try to spawn one. Would overflow memory.
    else
        return count;//return with the dynamic id.

}

bool8 DynamicObjectListIsFull(void)
{
    return GetLowestEmptyDynamicObjectSlot() == 0xffff;
}

void ClearAllDynamicObjects(void)
{
    u32 i;
    for (i=0;i<MAX_DYNAMIC_OBJECTS;i++)
    {
        gSaveBlock1Ptr->dynamicObjects[i].scriptPtr = NULL;
        gSaveBlock1Ptr->dynamicObjects[i].gfxId = 0;
        gSaveBlock1Ptr->dynamicObjects[i].localId = 0;
        gSaveBlock1Ptr->dynamicObjects[i].mapGroup = 0;
        gSaveBlock1Ptr->dynamicObjects[i].mapNum = 0;
        gSaveBlock1Ptr->dynamicObjects[i].x = 0;
        gSaveBlock1Ptr->dynamicObjects[i].y = 0;
        gSaveBlock1Ptr->dynamicObjects[i].z = 0;
        gSaveBlock1Ptr->dynamicObjects[i].active = FALSE;
    }
}

bool8 ScrCmd_adddynamicobject(struct ScriptContext *ctx)
{
    u8 i = ScriptReadByte(ctx);
    u8 mapGroup = ScriptReadByte(ctx);
    u8 mapNum = ScriptReadByte(ctx);
    u16 gfxid = VarGet(ScriptReadHalfword(ctx));
    s16 x = VarGet(ScriptReadHalfword(ctx));
    s16 y = VarGet(ScriptReadHalfword(ctx));
    u8 z = ScriptReadByte(ctx);
    u8 movement = ScriptReadByte(ctx);
    const u8 *scriptPointer = (const u8 *)ScriptReadWord(ctx);

    AddDynamicObject(i, mapGroup, mapNum, gfxid, movement, x, y, z, scriptPointer);
    return FALSE;
}

bool8 ScrCmd_removedynamicobject(struct ScriptContext *ctx)
{
    u32 i;
    u8 id = ScriptReadByte(ctx);
    bool8 all = ScriptReadByte(ctx);

    if (all == TRUE)
        for (i=0;i<MAX_DYNAMIC_OBJECTS;i++)
            gSaveBlock1Ptr->dynamicObjects[i].active = FALSE;
    else
        gSaveBlock1Ptr->dynamicObjects[id].active = FALSE;

    return FALSE;
}