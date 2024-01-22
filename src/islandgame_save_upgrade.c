#include "global.h"
#include "islandgame.h"
#include "islandgame_save_upgrade.h"
#include "load_save.h"

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

    // due to potential tileset and id stuff, just reset to last heal place
    gSaveBlock1Ptr->continueGameWarp = gSaveBlock1Ptr->lastHealLocation;
    SetContinueGameWarpStatus();
}

static u32 GetSaveBlock1Offset(u8* address)
{
    return (u32) (address - (u8*) gSaveBlock1Ptr);
}

static void SaveBlock1InsertBytesAt(void* address, u32 bytes, u32 oldSaveBlockSize)
{
    u8* newDataStart = (u8*) address;
    u8* newDataEnd = newDataStart + bytes;

    DebugPrintf("new start: 0x%x", (u32) newDataEnd);

    // move existing data forward in the block
    memmove(newDataEnd, newDataStart, oldSaveBlockSize - GetSaveBlock1Offset(newDataStart));

    // clear new data to zero
    memset(newDataStart, 0, bytes);
}

static void SaveBlock1IncreaseArraySize(void* array, u32 oldArraySize, u32 newArraySize, u32 oldSaveBlockSize)
{
    u8* arrayStart;
    u8* oldArrayEnd;
    u8* newArrayEnd;

    arrayStart = (u8*) array;
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
    u32 saveBlockSize = 13172;

    DebugPrintf("Upgrading save from v0 to v1");
    DebugPrintf("dex size: %u", sizeof(gSaveBlock1Ptr->dexSeen));
    DebugPrintf("item size: %u", sizeof(gSaveBlock1Ptr->bagPocket_Items));
    DebugPrintf("trainer rematch size: %u", sizeof(gSaveBlock1Ptr->trainerRematchStepCounter) + sizeof(gSaveBlock1Ptr->trainerRematches));
    DebugPrintf("expected start: 0x%x", (u32) &gSaveBlock1Ptr->objectEvents);

    // bag items increased 30 -> 96
    SaveBlock1IncreaseArraySize(gSaveBlock1Ptr->bagPocket_Items, 120, 372, saveBlockSize);
    saveBlockSize += (372 - 120);

    // match call people inserted into block
    SaveBlock1InsertBytesAt(&gSaveBlock1Ptr->trainerRematchStepCounter, 104, saveBlockSize);
    saveBlockSize += 104;

    // pokemon count increased ? -> ? (gen 9)
    SaveBlock1IncreaseArraySize(gSaveBlock1Ptr->dexSeen, 114, 129, saveBlockSize);
    saveBlockSize += (129 - 114);

    SaveBlock1IncreaseArraySize(gSaveBlock1Ptr->dexCaught, 114, 129, saveBlockSize);
    saveBlockSize += (129 - 114);

    gSaveBlock1Ptr->saveVersion = 1;
}