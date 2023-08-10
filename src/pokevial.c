#include "global.h"
#include "pokevial.h"

void Pokevial_Initalize(void){
    u8 pokevial = gSaveBlock1Ptr->pokevial;

    pokevial &= 0xF0;

    pokevial |= (POKEVIAL_MIN_SIZE << 4);
    pokevial |= POKEVIAL_MIN_SIZE;

    Pokevial_SetValues(pokevial);
}

u8 Pokevial_GetDose(void){
    u8 pokevialSize = Pokevial_GetSize();
    u8 pokevialDose, pokevial;

    pokevial = gSaveBlock1Ptr->pokevial;
    pokevialDose = (pokevial >> 4) & 0x0F;

    return pokevialDose;
}

u8 Pokevial_GetSize(void){
    u8 pokevial= gSaveBlock1Ptr->pokevial;
    u8 pokevialSize = pokevial & 0x0F;

    if (pokevialSize < POKEVIAL_MIN_SIZE){
        Pokevial_Initalize();
        Pokevial_GetSize();
    }

    return pokevialSize;
}

bool8 Pokevial_IncreaseSize(void){
    u8 pokevialSize = Pokevial_GetSize();
    u8 pokevial = gSaveBlock1Ptr->pokevial;
    u8 sizeIncrease = 1;
    u8 newSize;

    newSize = pokevialSize + sizeIncrease;

    if (newSize > POKEVIAL_MAX_SIZE){
        return FALSE;
    }

    pokevial |= (newSize << 4);
    pokevial |= newSize;

    Pokevial_SetValues(pokevial);
    return TRUE;
}

bool8 Pokevial_AddDose(void){
    u8 pokevialSize = Pokevial_GetSize();
    u8 pokevial = gSaveBlock1Ptr->pokevial;
    u8 doseIncrease = 1;
    u8 pokevialDose = Pokevial_GetDose();
    u8 newDose;

    newDose = pokevialDose + doseIncrease;

    if (newDose > pokevialSize){
        return FALSE;
    }

    pokevial |= (newDose << 4);

    Pokevial_SetValues(pokevial);
    return TRUE;
}

bool8 Pokevial_DecreaseSize(void){
    u8 pokevialSize = Pokevial_GetSize();
    u8 pokevial = gSaveBlock1Ptr->pokevial;
    u8 sizeDecrease = 1;
    u8 pokevialDose = Pokevial_GetDose();

    if (pokevialSize == 1)
        return FALSE;

    pokevialSize -= sizeDecrease;

    if (pokevialDose > pokevialSize)
        pokevialDose -= sizeDecrease;

    pokevial |= (pokevialDose << 4);
    pokevial |= pokevialSize;

    Pokevial_SetValues(pokevial);
    return TRUE;
}

bool8 Pokevial_ReduceDose(void){
    u8 pokevialSize = Pokevial_GetSize();
    u8 pokevial = gSaveBlock1Ptr->pokevial;
    u8 doseDecrease = 1;
    u8 pokevialDose = Pokevial_GetDose();

    if (pokevialDose == 0)
        return FALSE;

    //pokevialDose -= doseDecrease;
    pokevial |= (0 << 4);

    Pokevial_SetValues(pokevial);
    return TRUE;
}

bool8 Pokevial_Refill(void){
    u8 pokevial = gSaveBlock1Ptr->pokevial;
    u8 pokevialDose = Pokevial_GetDose();
    u8 pokevialSize = Pokevial_GetSize();

    if (pokevialDose == pokevialSize)
        return FALSE;

    pokevial |= (pokevialSize << 4);
    pokevial |= pokevialSize;
    Pokevial_SetValues(pokevial);
    return TRUE;
}

void Pokevial_SetValues(u8 pokevial){
    gSaveBlock1Ptr->pokevial = pokevial;
}
