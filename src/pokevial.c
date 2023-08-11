#include "global.h"
#include "constants/pokevial.h"
#include "pokevial.h"

#define POKEVIAL_MIN_SIZE 1
#define POKEVIAL_MAX_SIZE 15

static void Pokevial_Initalize(u8 pokevialData){
    pokevialData &= POKEVIAL_SIZE_MASK;

    pokevialData |= (POKEVIAL_MIN_SIZE << 4);
    pokevialData |= POKEVIAL_MIN_SIZE;

    Pokevial_SetValues(pokevialData);
}

static u8 Pokevial_GetData(void){
    u8 pokevialData = gSaveBlock1Ptr->pokevialData;
    u8 pokevialSize = pokevialData & POKEVIAL_DOSE_MASK;

    if (pokevialSize < POKEVIAL_MIN_SIZE){
        Pokevial_Initalize(pokevialData);
        return Pokevial_GetData();
    }
    return pokevialData;
}

u8 Pokevial_GetDose(void){
    u8 pokevialData = Pokevial_GetData();
    return (pokevialData >> 4) & POKEVIAL_DOSE_MASK;
}

u8 Pokevial_GetSize(void){
    u8 pokevialData = Pokevial_GetData();
    return  pokevialData & POKEVIAL_DOSE_MASK;
}

bool8 Pokevial_SizeUp(u8 sizeIncrease){
    u8 pokevialData = Pokevial_GetData();
    u8 newSize = Pokevial_GetSize() + sizeIncrease;

    if (newSize > POKEVIAL_MAX_SIZE)
        newSize = POKEVIAL_MAX_SIZE;

    pokevialData = (pokevialData & POKEVIAL_SIZE_MASK) | newSize;
    pokevialData = (pokevialData & POKEVIAL_DOSE_MASK) | (newSize << 4);
    return Pokevial_SetValues(pokevialData);
}

bool8 Pokevial_DoseUp(u8 doseIncrease){
    u8 pokevialData = Pokevial_GetData();
    u8 pokevialSize = Pokevial_GetSize();
    u8 newDose = Pokevial_GetDose() + doseIncrease;

    if (newDose > pokevialSize){
        newDose = pokevialSize;
    }

    pokevialData = (pokevialData & POKEVIAL_DOSE_MASK) | (newDose << 4);
    return Pokevial_SetValues(pokevialData);
}

bool8 Pokevial_SizeDown(u8 sizeDecrease){
    u8 pokevialData = Pokevial_GetData();
    u8 newSize = Pokevial_GetSize() - sizeDecrease;
    u8 pokevialDose = Pokevial_GetDose();

    if (newSize < POKEVIAL_MIN_SIZE)
        newSize = POKEVIAL_MIN_SIZE;

    if (pokevialDose > newSize)
        pokevialDose = newSize;

    pokevialData = (pokevialData & POKEVIAL_SIZE_MASK) | newSize;
    pokevialData = (pokevialData & POKEVIAL_DOSE_MASK) | (pokevialDose << 4);
    return Pokevial_SetValues(pokevialData);
}

bool8 Pokevial_DoseDown(u8 doseDecrease){
    u8 pokevialData = Pokevial_GetData();
    u8 oldDose = Pokevial_GetDose();
    u8 newDose = oldDose - doseDecrease;

    if (doseDecrease >= oldDose)
        newDose = VIAL_EMPTY_VIAL;

    pokevialData = (pokevialData & POKEVIAL_DOSE_MASK) | (newDose << 4);
    return Pokevial_SetValues(pokevialData);
}

bool8 Pokevial_Refill(void){
    u8 pokevialData = Pokevial_GetData();
    u8 pokevialDose = Pokevial_GetDose();
    u8 pokevialSize = Pokevial_GetSize();

    if (pokevialDose == pokevialSize)
        return FALSE;

    pokevialData = (pokevialData & POKEVIAL_SIZE_MASK) | pokevialSize;
    pokevialData = (pokevialData & POKEVIAL_DOSE_MASK) | (pokevialSize << 4);
    return Pokevial_SetValues(pokevialData);
}

static bool8 Pokevial_SetValues(u8 pokevialData){
    gSaveBlock1Ptr->pokevialData = pokevialData;
    return TRUE;
}
