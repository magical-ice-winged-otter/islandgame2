#include "pokevial.h"

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
    if (gSaveBlock1Ptr->pokevial.Dose == gSaveBlock1Ptr->pokevial.Size)
        return FALSE;

    gSaveBlock1Ptr->pokevial.Dose = gSaveBlock1Ptr->pokevial.Size;
    return TRUE;
}
