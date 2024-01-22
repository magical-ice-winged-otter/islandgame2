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

    if (gSaveBlock1Ptr->saveVersion = 0) {
        UpgradeSaveV0ToV1();
    }
}

static void UpgradeSaveV0ToV1()
{
    DebugPrintf("Upgrading save from v0 to v1");
    // breaking changes:
    // bag items increased 30 -> 96
    // pokemon count increased ? -> ? (gen 9)
    // match call people inserted into block
}