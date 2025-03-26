#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Take Down deals 25% of recoil damage to the user")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_TAKE_DOWN) == 25);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TAKE_DOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_DOWN, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.25), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Double Edge deals 33% of recoil damage to the user")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_DOUBLE_EDGE) == 33);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_EDGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_EDGE, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.33), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Head Smash deals 50% of recoil damage to the user")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_HEAD_SMASH) == 50);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HEAD_SMASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAD_SMASH, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.50), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Flare Blitz deals 33% of recoil damage to the user and can burn target")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_FLARE_BLITZ) == 33);
        ASSUME(MoveHasAdditionalEffect(MOVE_FLARE_BLITZ, MOVE_EFFECT_BURN));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLARE_BLITZ, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
        STATUS_ICON(opponent, burn: TRUE);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.33), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Flare Blitz is absorbed by Flash Fire and no recoil damage is dealt")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLARE_BLITZ].recoil > 0);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_VULPIX) { Ability(ABILITY_FLASH_FIRE); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLARE_BLITZ, player);
            HP_BAR(opponent);
            HP_BAR(player);
        }
    }
}
