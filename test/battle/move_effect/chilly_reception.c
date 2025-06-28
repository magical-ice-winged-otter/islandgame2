#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_CHILLY_RECEPTION) == EFFECT_CHILLY_RECEPTION);
}
#if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
SINGLE_BATTLE_TEST("Chilly Reception sets up hail and switches the user out")
#else
SINGLE_BATTLE_TEST("Chilly Reception sets up snow and switches the user out")
#endif
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALAR);
        PLAYER(SPECIES_SLOWPOKE_GALAR);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
#if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
        MESSAGE("It started to hail!");
#else
        MESSAGE("It started to snow!");
#endif
        MESSAGE("Slowking went back to 1!");
        SEND_IN_MESSAGE("Slowpoke");
#if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
#else
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
#endif
    }
}



SINGLE_BATTLE_TEST("Chilly Reception switches the user out, even if the weather does not change")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALAR);
        PLAYER(SPECIES_SLOWPOKE_GALAR);
        OPPONENT(SPECIES_KYOGRE)  { Item(ITEM_BLUE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("There is no relief from this heavy rain!");
        MESSAGE("Slowking went back to 1!");
        SEND_IN_MESSAGE("Slowpoke");
        MESSAGE("Rain continues to fall.");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALAR);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        NOT MESSAGE("Slowking went back to 1!");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALAR);
        PLAYER(SPECIES_SLOWPOKE_GALAR) { HP(0); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        NOT MESSAGE("Slowking went back to 1!");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception changes the weather, even if the user cannot switch out")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALAR);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
#if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
        MESSAGE("It started to hail!");
#else
        MESSAGE("It started to snow!");
#endif
        NOT MESSAGE("Slowking went back to 1!");
    }
}

TO_DO_BATTLE_TEST("Chilly Reception doesn't announce its move if it's called by a different move");
