#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

#include "constants/wild_encounter.h"

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
};

extern const struct WildPokemonHeader gWildMonHeaders[];
extern bool8 gIsFishingEncounter;
extern bool8 gIsSurfingEncounter;
extern u8 gChainFishingDexNavStreak;

void DisableWildEncounters(bool8 disabled);
u8 PickWildMonNature(void);
bool8 StandardWildEncounter(u16 currMetaTileBehavior, u16 previousMetaTileBehavior);
bool8 SweetScentWildEncounter(void);
bool8 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u16 GetLocalWildMon(bool8 *isWaterMon);
struct WildPokemon GetLocalLandMon(void);
struct WildPokemon GetLocalWaterMon(void);
struct WildPokemon GetLocalRockSmashMon(void);
struct WildPokemon GetLocalFishingMon(u8 rod);
bool8 UpdateRepelCounter(void);
bool8 TryDoDoubleWildBattle(void);
bool8 StandardWildEncounter_Debug(void);
u32 CalculateChainFishingShinyRolls(void);

#endif // GUARD_WILD_ENCOUNTER_H
