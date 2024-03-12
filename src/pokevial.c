#include "global.h"
#include "pokevial.h"
#include "constants/items.h"
#include "graphics.h"
#include "math_util.h"
#include "random.h"

static void PokevialFixDoseOverflow(void);
//static u32 PokevialGetDosePercentage(void);

static void PokevialInit()
{
    if (gSaveBlock1Ptr->pokevial.Size < VIAL_MIN_SIZE)
    {
        gSaveBlock1Ptr->pokevial.Size = VIAL_MIN_SIZE;
        gSaveBlock1Ptr->pokevial.Dose = VIAL_MIN_SIZE;
    }
}

u32 PokevialGetDose()
{
    PokevialInit();
    return gSaveBlock1Ptr->pokevial.Dose;
}

u32 PokevialGetSize()
{
    PokevialInit();
    return gSaveBlock1Ptr->pokevial.Size;
}

void PokevialSizeUp(u8 sizeIncrease)
{
    gSaveBlock1Ptr->pokevial.Size = ((PokevialGetSize() + sizeIncrease) > VIAL_MAX_SIZE ? VIAL_MAX_SIZE : gSaveBlock1Ptr->pokevial.Size + sizeIncrease);
}

void PokevialDoseUp(u8 doseIncrease)
{
    gSaveBlock1Ptr->pokevial.Dose = ((PokevialGetDose() + doseIncrease) > gSaveBlock1Ptr->pokevial.Size ? gSaveBlock1Ptr->pokevial.Size : gSaveBlock1Ptr->pokevial.Dose + doseIncrease);
}

void PokevialSizeDown(u8 sizeDecrease)
{
    gSaveBlock1Ptr->pokevial.Size = ((PokevialGetSize() - sizeDecrease) < VIAL_MIN_SIZE ? VIAL_MIN_SIZE : (gSaveBlock1Ptr->pokevial.Size - sizeDecrease));
    PokevialFixDoseOverflow();
}

void PokevialDoseDown(u8 doseDecrease)
{
    gSaveBlock1Ptr->pokevial.Dose = (doseDecrease > PokevialGetDose()) ? EMPTY_VIAL : (gSaveBlock1Ptr->pokevial.Dose - doseDecrease);
}

static void PokevialFixDoseOverflow(void)
{
    PokevialDoseUp(0);
}

bool32 PokevialRefill()
{
    if (PokevialGetDose() == PokevialGetSize())
        return FALSE;

    gSaveBlock1Ptr->pokevial.Dose = gSaveBlock1Ptr->pokevial.Size;
    return TRUE;
}

const u32 *const pokevialIconIndex[VIAL_NUM_STATES] =
{
    gItemIcon_Pokevial0,
    gItemIcon_Pokevial1,
    gItemIcon_Pokevial2,
    gItemIcon_Pokevial3,
    gItemIcon_Pokevial4,
    gItemIcon_Pokevial5,
    gItemIcon_Pokevial6,
    gItemIcon_Pokevial7,
    gItemIcon_Pokevial8,
    gItemIcon_Pokevial9,
    gItemIcon_Pokevial
};

static u32 PokevialGetVialPercent(void)
{
    u32 dose = PokevialGetDose(), size = PokevialGetSize(), vialPercent = 0;

    if (dose == EMPTY_VIAL)
        return POKEVIAL_ICON_PERCENT_0;

    if (dose == size)
        return POKEVIAL_ICON_PERCENT_100;

    vialPercent = (dose * 10 / size);

    return (vialPercent == EMPTY_VIAL && dose > EMPTY_VIAL) ? POKEVIAL_ICON_PERCENT_10 : vialPercent;
}

const void *PokevialGetDoseIcon(void)
{
    return pokevialIconIndex[PokevialGetVialPercent()];
}
