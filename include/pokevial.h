#ifndef GUARD_POKEVIAL_H
#define GUARD_POKEVIAL_H

#include "global.h"
#include "constants/pokevial.h"

u32 PokevialGetDose(void);
u32 PokevialGetSize(void);

bool32 PokevialSizeUp(u8 sizeIncrease);
bool32 PokevialDoseUp(u8 doseIncrease);

bool32 PokevialSizeDown(u8 sizeDecrease);
bool32 PokevialDoseDown(u8 doseDecrease);

bool32 PokevialRefill(void);
static void PokevialPreventOverflow(void);
#endif // GUARD_POKEVIAL_H
