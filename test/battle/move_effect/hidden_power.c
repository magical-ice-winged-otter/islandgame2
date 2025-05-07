#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gTypesInfo[TYPE_NONE].isHiddenPowerType == FALSE);
    ASSUME(gTypesInfo[TYPE_NORMAL].isHiddenPowerType == FALSE);
    ASSUME(gTypesInfo[TYPE_FIGHTING].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_FLYING].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_POISON].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_GROUND].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_ROCK].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_BUG].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_GHOST].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_STEEL].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_MYSTERY].isHiddenPowerType == FALSE);
    ASSUME(gTypesInfo[TYPE_FIRE].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_WATER].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_GRASS].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_ELECTRIC].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_PSYCHIC].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_ICE].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_DRAGON].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_DARK].isHiddenPowerType == TRUE);
    // Any type after Dark shouldn't be part of Hidden Power officially.
    for (u32 j = TYPE_DARK + 1; j < NUMBER_OF_MON_TYPES; j++) {
        ASSUME(gTypesInfo[j].isHiddenPowerType == FALSE);
    }
}

// IV combinations sourced from https://www.smogon.com/forums/threads/hidden-power-iv-combinations.78083/
SINGLE_BATTLE_TEST("Hidden Power's type is determined by IVs")
{
    u32 type, j, foeType, foeSpecies, foeItem;
    u32 hp, atk, def, spAtk, spDef, speed;
    bool32 hidden;

    PARAMETRIZE { type = TYPE_NONE;     hidden = FALSE; }
    PARAMETRIZE { type = TYPE_NORMAL;   hidden = FALSE; }
    PARAMETRIZE { type = TYPE_FIGHTING; hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_CHOPLE_BERRY; hp = 30; atk =  2; def = 31; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FIGHTING; hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_CHOPLE_BERRY; hp = 31; atk = 15; def = 30; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FIGHTING; hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_CHOPLE_BERRY; hp = 30; atk = 22; def = 31; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FIGHTING; hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_CHOPLE_BERRY; hp = 31; atk = 31; def = 30; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FLYING;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_COBA_BERRY;   hp = 31; atk =  2; def = 31; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FLYING;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_COBA_BERRY;   hp = 31; atk = 15; def = 31; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FLYING;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_COBA_BERRY;   hp = 31; atk = 22; def = 31; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_FLYING;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_COBA_BERRY;   hp = 31; atk = 31; def = 31; spAtk = 30; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_POISON;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_KEBIA_BERRY;  hp = 30; atk =  2; def = 31; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_POISON;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_KEBIA_BERRY;  hp = 31; atk = 15; def = 30; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_POISON;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_KEBIA_BERRY;  hp = 30; atk = 22; def = 31; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_POISON;   hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_KEBIA_BERRY;  hp = 31; atk = 31; def = 30; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GROUND;   hidden = TRUE;  foeType = TYPE_STEEL;   foeSpecies = SPECIES_KLINK;     foeItem = ITEM_SHUCA_BERRY;  hp = 31; atk =  2; def = 31; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GROUND;   hidden = TRUE;  foeType = TYPE_STEEL;   foeSpecies = SPECIES_KLINK;     foeItem = ITEM_SHUCA_BERRY;  hp = 31; atk = 15; def = 31; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GROUND;   hidden = TRUE;  foeType = TYPE_STEEL;   foeSpecies = SPECIES_KLINK;     foeItem = ITEM_SHUCA_BERRY;  hp = 31; atk = 22; def = 31; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GROUND;   hidden = TRUE;  foeType = TYPE_STEEL;   foeSpecies = SPECIES_KLINK;     foeItem = ITEM_SHUCA_BERRY;  hp = 31; atk = 31; def = 31; spAtk = 30; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_ROCK;     hidden = TRUE;  foeType = TYPE_FIRE;    foeSpecies = SPECIES_VULPIX;    foeItem = ITEM_CHARTI_BERRY; hp = 31; atk =  2; def = 30; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_ROCK;     hidden = TRUE;  foeType = TYPE_FIRE;    foeSpecies = SPECIES_VULPIX;    foeItem = ITEM_CHARTI_BERRY; hp = 31; atk = 15; def = 30; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_ROCK;     hidden = TRUE;  foeType = TYPE_FIRE;    foeSpecies = SPECIES_VULPIX;    foeItem = ITEM_CHARTI_BERRY; hp = 31; atk = 22; def = 30; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_ROCK;     hidden = TRUE;  foeType = TYPE_FIRE;    foeSpecies = SPECIES_VULPIX;    foeItem = ITEM_CHARTI_BERRY; hp = 31; atk = 31; def = 30; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_BUG;      hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_TANGA_BERRY;  hp = 31; atk =  2; def = 31; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_BUG;      hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_TANGA_BERRY;  hp = 31; atk = 15; def = 31; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_BUG;      hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_TANGA_BERRY;  hp = 31; atk = 22; def = 31; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_BUG;      hidden = TRUE;  foeType = TYPE_DARK;    foeSpecies = SPECIES_UMBREON;   foeItem = ITEM_TANGA_BERRY;  hp = 31; atk = 31; def = 31; spAtk = 31; spDef = 30; speed = 30; }
    PARAMETRIZE { type = TYPE_GHOST;    hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY;  hp = 31; atk =  2; def = 31; spAtk = 31; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GHOST;    hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY;  hp = 31; atk = 15; def = 30; spAtk = 31; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GHOST;    hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY;  hp = 31; atk = 22; def = 31; spAtk = 31; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_GHOST;    hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY;  hp = 31; atk = 31; def = 30; spAtk = 31; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_STEEL;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_BABIRI_BERRY; hp = 31; atk =  2; def = 30; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_STEEL;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_BABIRI_BERRY; hp = 31; atk = 15; def = 31; spAtk = 31; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_STEEL;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_BABIRI_BERRY; hp = 31; atk = 22; def = 30; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_STEEL;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_BABIRI_BERRY; hp = 31; atk = 31; def = 31; spAtk = 31; spDef = 30; speed = 31; }
    PARAMETRIZE { type = TYPE_FIRE;     hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_OCCA_BERRY;   hp = 31; atk =  2; def = 31; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_FIRE;     hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_OCCA_BERRY;   hp = 31; atk = 15; def = 30; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_FIRE;     hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_OCCA_BERRY;   hp = 31; atk = 22; def = 31; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_FIRE;     hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_OCCA_BERRY;   hp = 31; atk = 31; def = 30; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_WATER;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_PASSHO_BERRY; hp = 31; atk =  2; def = 30; spAtk = 30; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_WATER;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_PASSHO_BERRY; hp = 31; atk = 15; def = 31; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_WATER;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_PASSHO_BERRY; hp = 31; atk = 22; def = 30; spAtk = 30; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_WATER;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_PASSHO_BERRY; hp = 31; atk = 31; def = 31; spAtk = 30; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_GRASS;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_RINDO_BERRY;  hp = 30; atk =  2; def = 31; spAtk = 30; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_GRASS;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_RINDO_BERRY;  hp = 30; atk = 15; def = 31; spAtk = 30; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_GRASS;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_RINDO_BERRY;  hp = 30; atk = 22; def = 31; spAtk = 30; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_GRASS;    hidden = TRUE;  foeType = TYPE_ROCK;    foeSpecies = SPECIES_NOSEPASS;  foeItem = ITEM_RINDO_BERRY;  hp = 30; atk = 31; def = 31; spAtk = 30; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_ELECTRIC; hidden = TRUE;  foeType = TYPE_WATER;   foeSpecies = SPECIES_SQUIRTLE;  foeItem = ITEM_WACAN_BERRY;  hp = 31; atk =  2; def = 30; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_ELECTRIC; hidden = TRUE;  foeType = TYPE_WATER;   foeSpecies = SPECIES_SQUIRTLE;  foeItem = ITEM_WACAN_BERRY;  hp = 30; atk = 15; def = 30; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_ELECTRIC; hidden = TRUE;  foeType = TYPE_WATER;   foeSpecies = SPECIES_SQUIRTLE;  foeItem = ITEM_WACAN_BERRY;  hp = 31; atk = 22; def = 30; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_ELECTRIC; hidden = TRUE;  foeType = TYPE_WATER;   foeSpecies = SPECIES_SQUIRTLE;  foeItem = ITEM_WACAN_BERRY;  hp = 30; atk = 31; def = 30; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_PSYCHIC;  hidden = TRUE;  foeType = TYPE_POISON;  foeSpecies = SPECIES_KOFFING;   foeItem = ITEM_PAYAPA_BERRY; hp = 31; atk =  2; def = 31; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_PSYCHIC;  hidden = TRUE;  foeType = TYPE_POISON;  foeSpecies = SPECIES_KOFFING;   foeItem = ITEM_PAYAPA_BERRY; hp = 30; atk = 15; def = 31; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_PSYCHIC;  hidden = TRUE;  foeType = TYPE_POISON;  foeSpecies = SPECIES_KOFFING;   foeItem = ITEM_PAYAPA_BERRY; hp = 31; atk = 22; def = 31; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_PSYCHIC;  hidden = TRUE;  foeType = TYPE_POISON;  foeSpecies = SPECIES_KOFFING;   foeItem = ITEM_PAYAPA_BERRY; hp = 30; atk = 31; def = 31; spAtk = 31; spDef = 31; speed = 30; }
    PARAMETRIZE { type = TYPE_ICE;      hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_YACHE_BERRY;  hp = 30; atk =  2; def = 30; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_ICE;      hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_YACHE_BERRY;  hp = 30; atk = 15; def = 30; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_ICE;      hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_YACHE_BERRY;  hp = 30; atk = 22; def = 30; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_ICE;      hidden = TRUE;  foeType = TYPE_GRASS;   foeSpecies = SPECIES_TANGELA;   foeItem = ITEM_YACHE_BERRY;  hp = 30; atk = 31; def = 30; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_MYSTERY;  hidden = FALSE; }
    PARAMETRIZE { type = TYPE_DRAGON;   hidden = TRUE;  foeType = TYPE_DRAGON;  foeSpecies = SPECIES_DRATINI;   foeItem = ITEM_HABAN_BERRY;  hp = 30; atk =  2; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DRAGON;   hidden = TRUE;  foeType = TYPE_DRAGON;  foeSpecies = SPECIES_DRATINI;   foeItem = ITEM_HABAN_BERRY;  hp = 30; atk = 15; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DRAGON;   hidden = TRUE;  foeType = TYPE_DRAGON;  foeSpecies = SPECIES_DRATINI;   foeItem = ITEM_HABAN_BERRY;  hp = 30; atk = 22; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DRAGON;   hidden = TRUE;  foeType = TYPE_DRAGON;  foeSpecies = SPECIES_DRATINI;   foeItem = ITEM_HABAN_BERRY;  hp = 30; atk = 31; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DARK;     hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 31; atk =  3; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DARK;     hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 31; atk = 15; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DARK;     hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 31; atk = 23; def = 31; spAtk = 31; spDef = 31; speed = 31; }
    PARAMETRIZE { type = TYPE_DARK;     hidden = TRUE;  foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 31; atk = 31; def = 31; spAtk = 31; spDef = 31; speed = 31; }

    // Any type after Dark shouldn't be part of Hidden Power officially.
    for (j = TYPE_DARK + 1; j < NUMBER_OF_MON_TYPES; j++) {
        PARAMETRIZE { type = j; hidden = FALSE; }
    }

    GIVEN {
        if (hidden) {
            ASSUME(gTypeEffectivenessTable[type][foeType] == UQ_4_12(2.0));                 // Foe's Type resists
            ASSUME(gSpeciesInfo[foeSpecies].types[0] == gSpeciesInfo[foeSpecies].types[1]); // Foe's pure type
            ASSUME(gSpeciesInfo[foeSpecies].types[0] == foeType);                           // Foe is the super-effective type
            ASSUME(ItemId_GetHoldEffect(foeItem) == HOLD_EFFECT_RESIST_BERRY);              // Item is resist berry
            ASSUME(ItemId_GetHoldEffectParam(foeItem) == type);                             // Resist berry of type
            PLAYER(SPECIES_DUNSPARCE) { HPIV(hp); AttackIV(atk); DefenseIV(def); SpAttackIV(spAtk); SpDefenseIV(spDef); SpeedIV(speed); }
        } else {
            PLAYER(SPECIES_DUNSPARCE);
        }
        OPPONENT(foeSpecies) { Item(foeItem); }
    } WHEN {
        TURN { MOVE(player, MOVE_HIDDEN_POWER); }
    } SCENE {
        // Only test valid Hidden Power types
        if (hidden) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent); // Check that the item is triggered
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HIDDEN_POWER, player);
            HP_BAR(opponent);
            MESSAGE("It's super effective!");
        }
    }
}

TO_DO_BATTLE_TEST("Hidden Power's power is determined by IVs before Gen6");
