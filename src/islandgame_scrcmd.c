#include "global.h"
#include "pokedex.h"
#include "islandgame.h"
#include "list_menu.h"
#include "event_data.h" // for gSpecialVar
#include "field_camera.h" // for MoveCameraAndRedrawMap
#include "rtc.h" // for gLocalTime

void CheckDexCount(void)
{
    gSpecialVar_0x8000 = GetNationalPokedexCount(FLAG_GET_CAUGHT);
}

void TeleportCamera(void)
{
    s16 x = gSpecialVar_0x8000;
    s16 y = gSpecialVar_0x8001;

    s16 deltaX = x - gSaveBlock1Ptr->pos.x;
    s16 deltaY = y - gSaveBlock1Ptr->pos.y;
    MoveCameraAndRedrawMap(deltaX,deltaY);
}

void CheckPartyMon(void) 
{
    u16 speciesLook = gSpecialVar_0x8000;
    u8 i;
    
    gSpecialVar_Result = FALSE;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *pokemon = &gPlayerParty[i];
        if (GetMonData(pokemon, MON_DATA_SANITY_HAS_SPECIES) && !GetMonData(pokemon, MON_DATA_IS_EGG))
        {
            u16 speciesFor = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL);
            if (!speciesFor)
                break;
            if (speciesFor == speciesLook)
            {
                gSpecialVar_Result = TRUE;
                break;
            }
        }
    }
}

void setTime(void) 
{
    gLocalTime.days += 1;
    gLocalTime.hours = gSpecialVar_Result;
    gLocalTime.minutes = 0;
    gLocalTime.seconds = 0;
}