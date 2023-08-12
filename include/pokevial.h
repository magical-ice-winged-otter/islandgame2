#ifndef GUARD_POKEVIAL_H
#define GUARD_POKEVIAL_H

#include "global.h"
#include "constants/pokevial.h"

u32 PokevialGetDose(void);
u32 PokevialGetSize(void);

void PokevialSizeUp(u8);
void PokevialDoseUp(u8);

void PokevialSizeDown(u8);
void PokevialDoseDown(u8);

bool32 PokevialRefill(void);
static void PokevialFixDoseOverflow(void);
#endif // GUARD_POKEVIAL_H
