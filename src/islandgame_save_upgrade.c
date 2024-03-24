#include "global.h"
#include "islandgame.h"
#include "islandgame_save_upgrade.h"
#include "load_save.h"

static void UpgradeSaveV0ToV1();
static void SaveBlock1IncreaseArraySize(u32*, void*, u32, u32);
static void SaveBlock1InsertBytesAt(u32*, void*, u32);
static u32 GetSaveBlock1Offset(u8*);

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

static void SaveBlock1InsertBytesAt(u32* oldSaveBlockSize, void* address, u32 bytes)
{
    u8* newDataStart = (u8*) address;
    u8* newDataEnd = newDataStart + bytes;

    // move existing data forward in the block
    memmove(newDataEnd, newDataStart, *oldSaveBlockSize - GetSaveBlock1Offset(newDataStart));

    // clear new data to zero
    memset(newDataStart, 0, bytes);

    *oldSaveBlockSize += bytes;
}

static void SaveBlock1IncreaseArraySize(u32* oldSaveBlockSize, void* array, u32 oldArraySize, u32 newArraySize)
{
    u8* arrayStart = (u8*) array;
    u8* oldArrayEnd = arrayStart + oldArraySize;
    u8* newArrayEnd = arrayStart + newArraySize;

    // memcopy stuff after the array to the new array end
    memmove(newArrayEnd, oldArrayEnd, *oldSaveBlockSize - GetSaveBlock1Offset(oldArrayEnd));

    // memset remainder of array to zeroes
    memset(oldArrayEnd, 0, (size_t) (newArrayEnd - oldArrayEnd));

    // update the current size of the saveblock
    *oldSaveBlockSize += newArraySize - oldArraySize;
}

static void UpgradeSaveV0ToV1()
{
    u32 saveBlockSize = 13172;

    DebugPrintf("Upgrading save from v0 to v1");

    // bag items increased 
    SaveBlock1IncreaseArraySize(&saveBlockSize, gSaveBlock1Ptr->bagPocket_Items, 120, 372);

    // match call people inserted into block
    #ifndef FREE_MATCH_CALL
    SaveBlock1InsertBytesAt(&saveBlockSize, &gSaveBlock1Ptr->trainerRematchStepCounter, 104);
    #endif

    // pokemon count increased (gen 9)
    SaveBlock1IncreaseArraySize(&saveBlockSize, gSaveBlock1Ptr->dexSeen, 114, 129);
    SaveBlock1IncreaseArraySize(&saveBlockSize, gSaveBlock1Ptr->dexCaught, 114, 129);

    gSaveBlock1Ptr->saveVersion = 1;
}