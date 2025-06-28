#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_POWDER_SNOW, MOVE_EFFECT_FREEZE_OR_FROSTBITE) == TRUE);
}

#if B_USE_FROSTBITE == TRUE
SINGLE_BATTLE_TEST("Powder Snow inflicts frostbite")
#else
SINGLE_BATTLE_TEST("Powder Snow inflicts freeze")
#endif
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_POWDER_SNOW); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER_SNOW, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
        FREEZE_OR_FROSTBURN_STATUS(opponent, TRUE);
    }
}

#if B_USE_FROSTBITE == TRUE
SINGLE_BATTLE_TEST("Powder Snow cannot frostbite an Ice-type Pokémon")
#else
SINGLE_BATTLE_TEST("Powder Snow cannot freeze an Ice-type Pokémon")
#endif
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SNORUNT].types[0] == TYPE_ICE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SNORUNT);
    } WHEN {
        TURN { MOVE(player, MOVE_POWDER_SNOW); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER_SNOW, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
            FREEZE_OR_FROSTBURN_STATUS(opponent, TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Freeze cannot be inflicted in Sunlight")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_ICE_BEAM); }
    } SCENE {
        NOT MESSAGE("Wobbuffet was frozen solid!");
    }
}

#if B_STATUS_TYPE_IMMUNITY > GEN_1
#if B_USE_FROSTBITE == TRUE
SINGLE_BATTLE_TEST("Freezing Glare should frostbite Psychic-types")
#else
SINGLE_BATTLE_TEST("Freezing Glare should freeze Psychic-types")
#endif
#else
#if B_USE_FROSTBITE == TRUE
SINGLE_BATTLE_TEST("Freezing Glare shouldn't freeze Psychic-types")
#else
SINGLE_BATTLE_TEST("Freezing Glare shouldn't freeze Psychic-types")
#endif
#endif
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_ARTICUNO_GALAR].types[0] == TYPE_PSYCHIC);
        ASSUME(MoveHasAdditionalEffect(MOVE_FREEZING_GLARE, MOVE_EFFECT_FREEZE_OR_FROSTBITE) == TRUE);
        ASSUME(GetMoveType(MOVE_FREEZING_GLARE) == TYPE_PSYCHIC);
        PLAYER(SPECIES_ARTICUNO_GALAR);
        OPPONENT(SPECIES_ARTICUNO_GALAR);
    } WHEN {
        TURN { MOVE(player, MOVE_FREEZING_GLARE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FREEZING_GLARE, player);
        HP_BAR(opponent);
        #if B_STATUS_TYPE_IMMUNITY > GEN_1
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
            FREEZE_OR_FROSTBURN_STATUS(opponent, TRUE);
        #else
            NONE_OF {
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
                FREEZE_OR_FROSTBURN_STATUS(opponent, TRUE);
            }
        #endif
    }
}
