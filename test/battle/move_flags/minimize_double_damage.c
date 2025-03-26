#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("MinimizeDoubleDamage flag makes moves cause double damage to Minimized targets", s16 damage)
{
    bool32 useMinimize;
    PARAMETRIZE { useMinimize = FALSE; }
    PARAMETRIZE { useMinimize = TRUE; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_MINIMIZE) == EFFECT_MINIMIZE);
        ASSUME(MoveIncreasesPowerToMinimizedTargets(MOVE_STEAMROLLER));
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
    } WHEN {
        if (useMinimize)
            TURN { MOVE(opponent, MOVE_MINIMIZE); MOVE(player, MOVE_STEAMROLLER); }
        else
            TURN { MOVE(player, MOVE_STEAMROLLER); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(2.0), results[1].damage);
    }
}

// Remember to add ASSUME(B_MINIMIZE_DMG_ACC >= GEN_6)
TO_DO_BATTLE_TEST("MinimizeDoubleDamage flag allows moves to skip accuracy checks towards Minimized targets")
