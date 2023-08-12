#include "global.h"
#include "constants/pokevial.h"
#include "pokevial.h"

static void PokevialInitalize(u8 pokevialData){
    pokevialData &= VIAL_SIZE_MASK;

    pokevialData |= (VIAL_MIN_SIZE << 4);
    pokevialData |= VIAL_MIN_SIZE;

    PokevialSetData(pokevialData);
}

static u8 PokevialGetOrInitData(void){
    u8 pokevialData = gSaveBlock1Ptr->pokevialData;
    u8 pokevialSize = pokevialData & VIAL_DOSE_MASK;

    if (pokevialSize < VIAL_MIN_SIZE){
        PokevialInitalize(pokevialData);
        return PokevialGetOrInitData();
    }
    return pokevialData;
}

u8 PokevialGetDose(void){
    u8 pokevialData = PokevialGetOrInitData();
    return (pokevialData >> 4) & VIAL_DOSE_MASK;
}

u8 PokevialGetSize(void){
    u8 pokevialData = PokevialGetOrInitData();
    return  pokevialData & VIAL_DOSE_MASK;
}

bool8 PokevialSizeUp(u8 sizeIncrease){
    u8 pokevialData = PokevialGetOrInitData();
    u8 newSize = PokevialGetSize() + sizeIncrease;

    if (newSize > VIAL_MAX_SIZE)
        newSize = VIAL_MAX_SIZE;

    pokevialData = (pokevialData & VIAL_SIZE_MASK) | newSize;
    //pokevialData = (pokevialData & VIAL_DOSE_MASK) | (newSize << 4);
    return PokevialSetData(pokevialData);
}

bool8 PokevialDoseUp(u8 doseIncrease){
    u8 pokevialData = PokevialGetOrInitData();
    u8 pokevialSize = PokevialGetSize();
    u8 newDose = PokevialGetDose() + doseIncrease;

    if (newDose > pokevialSize){
        newDose = pokevialSize;
    }

    pokevialData = (pokevialData & VIAL_DOSE_MASK) | (newDose << 4);
    return PokevialSetData(pokevialData);
}

bool8 PokevialSizeDown(u8 sizeDecrease){
    u8 pokevialData = PokevialGetOrInitData();
    u8 newSize = PokevialGetSize() - sizeDecrease;
    u8 pokevialDose = PokevialGetDose();

    if (newSize < VIAL_MIN_SIZE)
        newSize = VIAL_MIN_SIZE;

    if (pokevialDose > newSize)
        pokevialDose = newSize;

    pokevialData = (pokevialData & VIAL_SIZE_MASK) | newSize;
    pokevialData = (pokevialData & VIAL_DOSE_MASK) | (pokevialDose << 4);
    return PokevialSetData(pokevialData);
}

bool8 PokevialDoseDown(u8 doseDecrease){
    u8 pokevialData = PokevialGetOrInitData();
    u8 oldDose = PokevialGetDose();
    u8 newDose = oldDose - doseDecrease;

    if (doseDecrease >= oldDose)
        newDose = EMPTY_VIAL;

    pokevialData = (pokevialData & VIAL_DOSE_MASK) | (newDose << 4);
    return PokevialSetData(pokevialData);
}

bool8 PokevialRefill(void){
    u8 pokevialData = PokevialGetOrInitData();
    u8 pokevialDose = PokevialGetDose();
    u8 pokevialSize = PokevialGetSize();

    if (pokevialDose == pokevialSize)
        return FALSE;

    pokevialData = (pokevialData & VIAL_SIZE_MASK) | pokevialSize;
    pokevialData = (pokevialData & VIAL_DOSE_MASK) | (pokevialSize << 4);
    return PokevialSetData(pokevialData);
}

static bool8 PokevialSetData(u8 pokevialData){
    gSaveBlock1Ptr->pokevialData = pokevialData;
    return TRUE;
}
