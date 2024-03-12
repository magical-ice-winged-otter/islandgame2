#ifndef GUARD_POKEVIAL_H
#define GUARD_POKEVIAL_H

#include "constants/pokevial.h"

u32 PokevialGetDose(void);
u32 PokevialGetSize(void);

void PokevialSizeUp(u8);
void PokevialDoseUp(u8);

void PokevialSizeDown(u8);
void PokevialDoseDown(u8);

bool32 PokevialRefill(void);
const void *PokevialGetDoseIcon(void);

enum pokevialPercentConstant {
    POKEVIAL_ICON_PERCENT_0,
    POKEVIAL_ICON_PERCENT_10,
    POKEVIAL_ICON_PERCENT_20,
    POKEVIAL_ICON_PERCENT_30,
    POKEVIAL_ICON_PERCENT_40,
    POKEVIAL_ICON_PERCENT_50,
    POKEVIAL_ICON_PERCENT_60,
    POKEVIAL_ICON_PERCENT_70,
    POKEVIAL_ICON_PERCENT_80,
    POKEVIAL_ICON_PERCENT_90,
    POKEVIAL_ICON_PERCENT_100,
};

#endif // GUARD_POKEVIAL_H
