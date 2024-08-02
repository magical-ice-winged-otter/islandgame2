#include "global.h"
#include "pokedex.h"
#include "islandgame.h"
#include "list_menu.h"
#include "event_data.h" // for gSpecialVar
#include "field_camera.h" // for MoveCameraAndRedrawMap
#include "rtc.h" // for gLocalTime
#include "clock.h" // for InitTimeBasedEvents
#include "overworld.h"
#include "main.h"
#include "battle.h" // for gSideStatus

u32 gPresetHazards[NUM_BATTLE_SIDES];
struct SideTimer gPresetSideTimer[NUM_BATTLE_SIDES];

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

void SetHazards(void) {
    u16 hazardType = gSpecialVar_0x8000;
    u16 hazardCount = gSpecialVar_0x8001;
    u16 side = gSpecialVar_0x8002;
    u16 battlerSide = side == B_SIDE_PLAYER ? B_SIDE_OPPONENT : B_SIDE_PLAYER;
    u8 battler = side == B_SIDE_PLAYER ? B_POSITION_OPPONENT_LEFT : B_POSITION_PLAYER_LEFT;

    gPresetHazards[side] |= hazardType;

    switch (hazardType) {
        case SIDE_STATUS_REFLECT: {
            gPresetSideTimer[side].reflectTimer = hazardCount;
            gPresetSideTimer[side].reflectBattlerId = battler;
            break;
        }
        case SIDE_STATUS_LIGHTSCREEN: {
            gPresetSideTimer[side].lightscreenTimer = hazardCount;
            gPresetSideTimer[side].lightscreenBattlerId = battler;
            break;
        }
        case SIDE_STATUS_STICKY_WEB: {
            gPresetSideTimer[side].stickyWebAmount = 1;
            gPresetSideTimer[side].stickyWebBattlerSide = battlerSide;
            gPresetSideTimer[side].stickyWebBattlerId = battler;
            break;
        }
        case SIDE_STATUS_SPIKES: {
            gPresetSideTimer[side].spikesAmount = hazardCount;
            break;
        }
        case SIDE_STATUS_SAFEGUARD: {
            gPresetSideTimer[side].safeguardTimer = hazardCount;
            gPresetSideTimer[side].safeguardBattlerId = battler;
            break;
        }
        case SIDE_STATUS_MIST: {
            gPresetSideTimer[side].mistTimer = hazardCount;
            gPresetSideTimer[side].mistBattlerId = battler;
            break;
        }
        case SIDE_STATUS_TAILWIND: {
            gPresetSideTimer[side].tailwindTimer = hazardCount;
            gPresetSideTimer[side].tailwindBattlerId = battler;
            break;
        }
        case SIDE_STATUS_STEALTH_ROCK: {
            gPresetSideTimer[side].stealthRockAmount = 1;
            break;
        }
        case SIDE_STATUS_AURORA_VEIL
    }
}

void setTime(void) 
{
    u16 days = gSpecialVar_0x8009;
    u16 hours = gSpecialVar_0x800A;
    u16 minutes = gSpecialVar_0x800B;
    u16 seconds = gSpecialVar_0x8014;

    RtcCalcLocalTimeOffset(days, hours, minutes, seconds);
}