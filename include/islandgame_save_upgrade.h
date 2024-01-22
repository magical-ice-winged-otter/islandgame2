#ifndef GUARD_ISLANDGAME_SAVE_UPGRADE_H
#define GUARD_ISLANDGAME_SAVE_UPGRADE_H

#include "global.h"
#include "islandgame.h"

extern const u8 gText_CanUpgradeSave[];

bool32 IsSaveOutOfDate();
void UpgradeSave();

#endif // GUARD_ISLANDGAME_SAVE_UPGRADE_H