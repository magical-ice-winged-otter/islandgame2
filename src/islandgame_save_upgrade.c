#include "global.h"
#include "islandgame.h"
#include "islandgame_save_upgrade.h"

static void UpgradeSaveV0ToV1();

ALIGNED(4) const u8 gText_CanUpgradeSave[] = _("This save is from an older version\nof the game. Upgrade it?");

bool32 IsSaveOutOfDate()
{
    return gSaveBlock1Ptr->saveVersion != ISLANDGAME_CURRENT_SAVE_VERSION;
}

void UpgradeSave()
{
    DebugPrintf("current save version: %u\n", gSaveBlock1Ptr->saveVersion);
    DebugPrintf("desired save version: %u\n", ISLANDGAME_CURRENT_SAVE_VERSION);

    if (gSaveBlock1Ptr->saveVersion == 0) {
        UpgradeSaveV0ToV1();
    }
}

static u32 GetSaveBlock1Offset(u8* address)
{
    return (u32) (address - (u8*) gSaveBlock1Ptr);
}

static void SaveBlock1IncreaseArraySize(void* arrayStart, u32 oldArraySize, u32 newArraySize, u32 oldSaveBlockSize)
{
    u8* arrayStart;
    u8* oldSaveBlockEnd;
    u8* oldArrayEnd;
    u8* newArrayEnd;

    arrayStart = (u8*) arrayStart;
    oldSaveBlockEnd = (u8*) gSaveBlock1Ptr + oldSaveBlockSize;
    oldArrayEnd = arrayStart + oldArraySize;
    newArrayEnd = arrayStart + newArraySize;

    // memcopy stuff after the array to the new array end
    memmove(newArrayEnd, oldArrayEnd, oldSaveBlockSize - GetSaveBlock1Offset(oldArrayEnd));

    // memset remainder of array to zeroes
    memset(oldArrayEnd, 0, (size_t) (newArrayEnd - oldArrayEnd));
}

#define DEBUG_SAVEBLOCK1(field) (DebugPrintf(#field " : 0x%x\n", GetSaveBlock1Offset((u8*) &(gSaveBlock1Ptr->field))))

static void UpgradeSaveV0ToV1()
{
    DebugPrintf("Upgrading save from v0 to v1");
    DEBUG_SAVEBLOCK1(bagPocket_Items);
    DEBUG_SAVEBLOCK1(savedMusic);
    DEBUG_SAVEBLOCK1(saveVersion);
    // breaking changes:
    // bag items increased 30 -> 96
    // pokemon count increased ? -> ? (gen 9)
    // match call people inserted into block
    // SaveBlock1IncreaseArraySize(&gSaveBlock1Ptr->bagPocket_Items, 30, 93, );
}