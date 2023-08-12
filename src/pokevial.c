#include "pokevial.h"

static void PokevialInitData(void)
{
    if (gSaveBlock1Ptr->pokevial.Size < VIAL_MIN_SIZE)
    {
        gSaveBlock1Ptr->pokevial.Size = VIAL_MIN_SIZE;
        gSaveBlock1Ptr->pokevial.Dose = VIAL_MIN_SIZE;
    }
}

u32 PokevialGetDose(void)
{
    PokevialInitData();
    return gSaveBlock1Ptr->pokevial.Dose;
}

u32 PokevialGetSize(void)
{
    PokevialInitData();
    return gSaveBlock1Ptr->pokevial.Size;
}

bool32 PokevialSizeUp(u8 sizeIncrease)
{
    s32 vialSize = 0;
    PokevialInitData();
    vialSize = ((gSaveBlock1Ptr->pokevial.Size + sizeIncrease) > VIAL_MAX_SIZE ? VIAL_MAX_SIZE : gSaveBlock1Ptr->pokevial.Size + sizeIncrease);
    gSaveBlock1Ptr->pokevial.Size = vialSize;
}

bool32 PokevialDoseUp(u8 doseIncrease)
{
    s32 vialDose = 0;
    PokevialInitData();
    vialDose = ((gSaveBlock1Ptr->pokevial.Dose + doseIncrease) > gSaveBlock1Ptr->pokevial.Size ? gSaveBlock1Ptr->pokevial.Size : gSaveBlock1Ptr->pokevial.Dose + doseIncrease);
    gSaveBlock1Ptr->pokevial.Dose = vialDose;
}

bool32 PokevialSizeDown(u8 sizeDecrease)
{
    s32 vialSize = 0;
    PokevialInitData();
    vialSize = ((gSaveBlock1Ptr->pokevial.Size - sizeDecrease) < VIAL_MIN_SIZE ? VIAL_MIN_SIZE : (gSaveBlock1Ptr->pokevial.Size - sizeDecrease));
    gSaveBlock1Ptr->pokevial.Size = vialSize;
    PokevialPreventOverflow();
}

bool32 PokevialDoseDown(u8 doseDecrease)
{
    s32 vialDose = 0;
    PokevialInitData();
    vialDose = ((gSaveBlock1Ptr->pokevial.Dose - doseDecrease) < EMPTY_VIAL ? EMPTY_VIAL : (gSaveBlock1Ptr->pokevial.Dose - doseDecrease));
    gSaveBlock1Ptr->pokevial.Dose = vialDose;
}

bool32 PokevialRefill(void)
{
    if (gSaveBlock1Ptr->pokevial.Dose == gSaveBlock1Ptr->pokevial.Size)
        return FALSE;

    gSaveBlock1Ptr->pokevial.Dose = PokevialGetSize();
    return TRUE;
}

static void PokevialPreventOverflow(void)
{
    if (gSaveBlock1Ptr->pokevial.Dose > gSaveBlock1Ptr->pokevial.Size)
        PokevialRefill();
}
