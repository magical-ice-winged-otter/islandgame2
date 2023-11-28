#ifndef GUARD_BATTLE_DYNAMIC_H
#define GUARD_BATTLE_DYNAMIC_H
//#include "global.h"
#include "pokemon.h"

#define HIDDEN_POWER_OFFSET 5 //modify this offset if you have added another type. Vanilla: 4

u8 displayTypeSummary(struct Pokemon* mon, u16 move);
u8 displayTypeInBattle(u32 battlerAtk, u16 move, bool8 modify);

#endif //GUARD_BATTLE_DYNAMIC_H