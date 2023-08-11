#ifndef GUARD_POKEVIAL_H
#define GUARD_POKEVIAL_H

#include "constants/pokevial.h"

static void PokevialInitalize(u8);
static u8 PokevialGetData(void);

u8 PokevialGetSize(void);
u8 PokevialGetDose(void);

bool8 PokevialSizeUp(u8);
bool8 PokevialDoseUp(u8);

bool8 PokevialSizeDown(u8);
bool8 PokevialDoseDown(u8);

bool8 PokevialRefill(void);

static bool8 PokevialSetData(u8);
#endif // GUARD_POKEVIAL_H
