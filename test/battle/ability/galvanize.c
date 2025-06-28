#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_SCRATCH) == TYPE_NORMAL);
    ASSUME(GetMovePower(MOVE_SCRATCH) > 0);
}

SINGLE_BATTLE_TEST("Galvanize turns a normal type move into Electric")
{
    GIVEN {
        PLAYER(SPECIES_KRABBY);
        OPPONENT(SPECIES_GEODUDE_ALOLA) { Ability(ABILITY_GALVANIZE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Galvanize can not turn certain moves into Electric type moves")
{
    u32 move;

    PARAMETRIZE { move = MOVE_HIDDEN_POWER; }
    PARAMETRIZE { move = MOVE_WEATHER_BALL; }
    PARAMETRIZE { move = MOVE_MULTI_ATTACK; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HIDDEN_POWER) == EFFECT_HIDDEN_POWER);
        ASSUME(GetMoveEffect(MOVE_WEATHER_BALL) == EFFECT_WEATHER_BALL);
        ASSUME(GetMoveEffect(MOVE_MULTI_ATTACK) == EFFECT_CHANGE_TYPE_ON_ITEM);
        PLAYER(SPECIES_KRABBY);
        OPPONENT(SPECIES_GEODUDE_ALOLA) { Ability(ABILITY_GALVANIZE); }
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Galvanize boosts power of affected moves by 20% (Gen7+) or 30% (Gen1-6)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_STURDY;     genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_STURDY;     genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_GALVANIZE;  genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_GALVANIZE;  genConfig = GEN_6; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.8), results[2].damage); // STAB + ate
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.95), results[3].damage); // STAB + ate
    }
}

SINGLE_BATTLE_TEST("Galvanize doesn't affect Weather Ball's type", s16 damage)
{
    u16 move, ability;
    PARAMETRIZE { move = MOVE_CELEBRATE; ability = ABILITY_STURDY; }
    PARAMETRIZE { move = MOVE_SUNNY_DAY; ability = ABILITY_STURDY; }
    PARAMETRIZE { move = MOVE_CELEBRATE; ability = ABILITY_GALVANIZE; }
    PARAMETRIZE { move = MOVE_SUNNY_DAY; ability = ABILITY_GALVANIZE; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_WEATHER_BALL) == EFFECT_WEATHER_BALL);
        ASSUME(GetMoveType(MOVE_WEATHER_BALL) == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_PINSIR].types[0] == TYPE_BUG);
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ability); }
        OPPONENT(SPECIES_PINSIR);
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, MOVE_WEATHER_BALL); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
        if (move == MOVE_SUNNY_DAY)
            MESSAGE("It's super effective!");
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(6.0), results[1].damage); // double base power + type effectiveness + sun 50% boost
        EXPECT_MUL_EQ(results[2].damage, Q_4_12(6.0), results[3].damage);
        EXPECT_EQ(results[0].damage, results[2].damage);
        EXPECT_EQ(results[1].damage, results[3].damage);
    }
}

SINGLE_BATTLE_TEST("Galvanize doesn't affect Natural Gift's type")
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_STURDY; }
    PARAMETRIZE { ability = ABILITY_GALVANIZE; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_NATURAL_GIFT) == EFFECT_NATURAL_GIFT);
        ASSUME(gNaturalGiftTable[ITEM_TO_BERRY(ITEM_ORAN_BERRY)].type == TYPE_POISON);
        ASSUME(gSpeciesInfo[SPECIES_BELDUM].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ability); Item(ITEM_ORAN_BERRY); }
        OPPONENT(SPECIES_BELDUM);
    } WHEN {
        TURN { MOVE(player, MOVE_NATURAL_GIFT); }
    } SCENE {
        NOT { ANIMATION(ANIM_TYPE_MOVE, MOVE_NATURAL_GIFT, player); }
        MESSAGE("It doesn't affect the opposing Beldum…");
    }
}

SINGLE_BATTLE_TEST("Galvanize doesn't affect Judgment / Techno Blast / Multi-Attack's type")
{
    u16 move, item;
    PARAMETRIZE { move = MOVE_JUDGMENT; item = ITEM_SPLASH_PLATE; }
    PARAMETRIZE { move = MOVE_TECHNO_BLAST; item = ITEM_DOUSE_DRIVE; }
    PARAMETRIZE { move = MOVE_MULTI_ATTACK; item = ITEM_WATER_MEMORY; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_JUDGMENT) == EFFECT_CHANGE_TYPE_ON_ITEM);
        ASSUME(GetMoveEffect(MOVE_TECHNO_BLAST) == EFFECT_CHANGE_TYPE_ON_ITEM);
        ASSUME(GetMoveEffect(MOVE_MULTI_ATTACK) == EFFECT_CHANGE_TYPE_ON_ITEM);
        ASSUME(gItemsInfo[ITEM_SPLASH_PLATE].holdEffect == HOLD_EFFECT_PLATE);
        ASSUME(gItemsInfo[ITEM_SPLASH_PLATE].secondaryId == TYPE_WATER);
        ASSUME(gItemsInfo[ITEM_DOUSE_DRIVE].holdEffect == HOLD_EFFECT_DRIVE);
        ASSUME(gItemsInfo[ITEM_DOUSE_DRIVE].secondaryId == TYPE_WATER);
        ASSUME(gItemsInfo[ITEM_WATER_MEMORY].holdEffect == HOLD_EFFECT_MEMORY);
        ASSUME(gItemsInfo[ITEM_WATER_MEMORY].secondaryId == TYPE_WATER);
        ASSUME(gSpeciesInfo[SPECIES_VAPOREON].types[0] == TYPE_WATER);
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ABILITY_GALVANIZE); Item(item); }
        OPPONENT(SPECIES_VAPOREON) { Ability(ABILITY_WATER_ABSORB); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        NOT { ANIMATION(ANIM_TYPE_MOVE, move, player); }
        if (move == MOVE_JUDGMENT)
            MESSAGE("The opposing Vaporeon's Water Absorb made Judgment useless!");
        else if (move == MOVE_TECHNO_BLAST)
            MESSAGE("The opposing Vaporeon's Water Absorb made Techno Blast useless!");
        else if (move == MOVE_MULTI_ATTACK)
            MESSAGE("The opposing Vaporeon's Water Absorb made Multi-Attack useless!");
    }
}

SINGLE_BATTLE_TEST("Galvanize doesn't affect Hidden Power's type")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HIDDEN_POWER) == EFFECT_HIDDEN_POWER);
        ASSUME(gTypesInfo[TYPE_ELECTRIC].isHiddenPowerType == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_DIGLETT].types[0] == TYPE_GROUND);
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ABILITY_GALVANIZE); HPIV(31); AttackIV(31); DefenseIV(31); SpAttackIV(30); SpDefenseIV(31); SpeedIV(30); } // HP Water
        OPPONENT(SPECIES_VAPOREON) { Ability(ABILITY_WATER_ABSORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_HIDDEN_POWER); }
    } SCENE {
        NOT { ANIMATION(ANIM_TYPE_MOVE, MOVE_HIDDEN_POWER, player); }
        MESSAGE("The opposing Vaporeon's Water Absorb made Hidden Power useless!");
    }
}

TO_DO_BATTLE_TEST("Galvanize doesn't affect Tera Starstorm's type");
TO_DO_BATTLE_TEST("Galvanize doesn't affect Max Strike's type");
TO_DO_BATTLE_TEST("Galvanize doesn't affect Terrain Pulse's type");
TO_DO_BATTLE_TEST("Galvanize doesn't affect damaging Z-Move types");
TO_DO_BATTLE_TEST("(DYNAMAX) Galvanize turns Max Strike into Max Lightning when not used by Gigantamax Pikachu/Toxtricity");
//TO_DO_BATTLE_TEST("(DYNAMAX) Galvanize doesn't turn Max Strike into Max Lightning when used by Gigantamax Pikachu/Toxtricity, instead becoming G-Max Volt Crash/Stun Shock"); // Marked in Bulbapedia as "needs research", so this assumes that it behaves like Pixilate.
