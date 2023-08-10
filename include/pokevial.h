#ifndef GUARD_POKEVIAL_H
#define GUARD_POKEVIAL_H

#include "constants/pokevial.h"

static void Pokevial_Initalize(u8);
static u8 Pokevial_GetData(void);
u8 Pokevial_GetDose(void);
u8 Pokevial_GetSize(void);
bool8 Pokevial_SizeUp(u8);
bool8 Pokevial_DoseUp(u8);
bool8 Pokevial_SizeDown(u8);
bool8 Pokevial_DoseDown(u8);
bool8 Pokevial_Refill(void);
static bool8 Pokevial_SetValues(u8);
#endif // GUARD_POKEVIAL_H
