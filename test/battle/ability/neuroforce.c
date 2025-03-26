#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Neuroforce increases the strength of super-effective moves by 25%", s16 damage)
{
    u32 move;
    u16 ability;
    PARAMETRIZE { ability = ABILITY_NEUROFORCE; move = MOVE_SHADOW_BALL; }
    PARAMETRIZE { ability = ABILITY_KLUTZ; move = MOVE_SHADOW_BALL; }
    PARAMETRIZE { ability = ABILITY_NEUROFORCE; move = MOVE_TACKLE; }
    PARAMETRIZE { ability = ABILITY_KLUTZ; move = MOVE_TACKLE; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_SHADOW_BALL) == TYPE_GHOST);
        ASSUME(GetMoveType(MOVE_TACKLE) == TYPE_NORMAL);
        PLAYER(SPECIES_NECROZMA_ULTRA) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, UQ_4_12(1.25), results[0].damage); // Neuroforce boosts the power of super-effective moves
        EXPECT_EQ(results[2].damage, results[3].damage); // Neuroforce doesn't boost the power of other moves
    }
}
