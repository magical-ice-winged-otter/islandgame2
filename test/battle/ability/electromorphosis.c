#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Electromorphosis sets up Charge when hit by any move")
{
    s16 dmgBefore, dmgAfter;
    u16 move;

    PARAMETRIZE {move = MOVE_TACKLE; }
    PARAMETRIZE {move = MOVE_GUST; }

    GIVEN {
        ASSUME(!IsBattleMoveStatus(MOVE_TACKLE));
        ASSUME(!IsBattleMoveStatus(MOVE_GUST));
        ASSUME(GetMoveCategory(MOVE_GUST) == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(GetMoveCategory(MOVE_TACKLE) == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(!IsBattleMoveStatus(MOVE_THUNDER_SHOCK));
        ASSUME(GetMoveType(MOVE_THUNDER_SHOCK) == TYPE_ELECTRIC);

        PLAYER(SPECIES_BELLIBOLT) { Ability(ABILITY_ELECTROMORPHOSIS); Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) {Ability(ABILITY_LIMBER); Speed(5) ;} // Limber, so it doesn't get paralyzed.
    }
    WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK), MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_THUNDER_SHOCK), MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent, captureDamage: &dmgBefore);

        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_ELECTROMORPHOSIS);
        if (move == MOVE_TACKLE) {
            MESSAGE("Being hit by Tackle charged Bellibolt with power!");
        }
        else {
            MESSAGE("Being hit by Gust charged Bellibolt with power!");
        }

        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent, captureDamage: &dmgAfter);

        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_ELECTROMORPHOSIS);
        if (move == MOVE_TACKLE) {
            MESSAGE("Being hit by Tackle charged Bellibolt with power!");
        }
        else {
            MESSAGE("Being hit by Gust charged Bellibolt with power!");
        }
    }
    THEN {
        EXPECT_MUL_EQ(dmgBefore, Q_4_12(2.0), dmgAfter);
    }
}
