#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Electrify makes the target's move Electric-type for the remainder of the turn (single move)")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SANDSLASH].types[0] == TYPE_GROUND || gSpeciesInfo[SPECIES_SANDSLASH].types[1] == TYPE_GROUND);
        ASSUME(GetMoveType(MOVE_TACKLE) != TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SANDSLASH);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ELECTRIFY); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIFY, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
    }
}

DOUBLE_BATTLE_TEST("Electrify makes the target's move Electric-type for the remainder of the turn (double move)")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SANDSLASH].types[0] == TYPE_GROUND || gSpeciesInfo[SPECIES_SANDSLASH].types[1] == TYPE_GROUND);
        ASSUME(GetMoveType(MOVE_TACKLE) != TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_SANDSLASH);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_ELECTRIFY, target: playerLeft); MOVE(playerLeft, MOVE_TACKLE, target:opponentLeft); MOVE(playerRight, MOVE_INSTRUCT, target: playerLeft); MOVE(opponentRight, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIFY, opponentLeft);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INSTRUCT, playerRight);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
    }
}

SINGLE_BATTLE_TEST("Electrify can change status moves to Electric-type")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SANDSLASH].types[0] == TYPE_GROUND || gSpeciesInfo[SPECIES_SANDSLASH].types[1] == TYPE_GROUND);
        ASSUME(GetMoveCategory(MOVE_LEER) == DAMAGE_CATEGORY_STATUS);
        ASSUME(GetMoveType(MOVE_LEER) != TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SANDSLASH);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ELECTRIFY); MOVE(player, MOVE_LEER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIFY, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_LEER, player);
    }
}

SINGLE_BATTLE_TEST("Electrify changes the type of foreseen moves when hitting its target")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SANDSLASH].types[0] == TYPE_GROUND || gSpeciesInfo[SPECIES_SANDSLASH].types[1] == TYPE_GROUND);
        ASSUME(GetMoveEffect(MOVE_FUTURE_SIGHT) == EFFECT_FUTURE_SIGHT);
        ASSUME(GetMoveType(MOVE_FUTURE_SIGHT) != TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SANDSLASH);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN {}
        TURN { MOVE(opponent, MOVE_ELECTRIFY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIFY, opponent);
        NOT HP_BAR(opponent);
    }
}
