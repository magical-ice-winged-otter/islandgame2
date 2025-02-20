#ifndef GUARD_ISLANDGAME_H
#define GUARD_ISLANDGAME_H

#include "constants/global.h"
#include "constants/map_groups.h"
#include "constants/maps.h"
#include "gba/types.h"

//To configure battle backgrounds, take a look at
//LINK src/battle_bg.c:608

// whenever we make a breaking change to the save block, we can increment this number
// then, when we begin the game, check for outdated saves and try to upgrade them or display a warning
#define ISLANDGAME_CURRENT_SAVE_VERSION 1

//Settings
#define EXP_MULTIPLIER 4 //By default, pokemon will gain only 1/4 of the experience if they did not participate in battle.
#define BERRY_GROWTH_MULTIPLIER 2
#define DAY_CARE_EXP_MULTIPLIER 0.5f // This should never be greater than 1, or else you could get inf. XP from just depositing and withdrawing.

/// @brief Different starting points, associating spawn positions with data needed to load a map.
/// Used to generate a teleportation debug menu.
/// @note For usage, see src/new_game.c, src/start_menu.c
typedef struct Location
{
    s8 map_group;
    s8 map_num;
    s8 start_x;
    s8 start_y;
    const u8* display_name;
} Location;

// An internal utility to reduce boilerplate from location definitions.
#define LOCATION(name, identifier, x, y)     \
    {                                       \
        .map_group = MAP_GROUP(identifier), \
        .map_num = MAP_NUM(identifier),     \
        .start_x = x,                       \
        .start_y = y,                       \
        .display_name = name,               \
    }

static const u8 nameSsRain[]   = _("SS RAIN"); 
static const u8 nameCheriport[] = _("CHERIPORT");
static const u8 nameMintyMeadows[] = _("MINTY MEADOWS");
static const u8 nameTravelersTunnel[] = _("TravelTunnel");
static const u8 nameCampPersi[] = _("CAMP PERSI");
static const u8 nameVerdantPath[] = _("VerdantPath");
static const u8 nameVerdantWood[] = _("VerdantWood");
static const u8 nameFresaFarms[] = _("FresaFarm");
static const u8 nameNorthernOranna[] = _("NorthernOranna");
static const u8 nameCentralOranna[] = _("CentralOranna");
static const u8 nameTidalcove[] = _("Tidalcove");
static const u8 nameRosevale[] = _("Rosevale");
static const u8 nameApplevine[] = _("Applevine");
static const u8 nameRockyPath[] = _("Rocky Path");
static const u8 nameBellehaven[] = _("Bellehaven");
static const u8 nameAetheria[] = _("Aetheria");

static const Location LOCATION_DATA[] = {
    // oranna
    /*  0 */ LOCATION(nameSsRain, ISLANDGAME_SS_RAIN_ROOM2, 6, 7),
    /*  1 */ LOCATION(nameCheriport, ISLANDGAME_CHERIPORT, 10, 26),
    /*  2 */ LOCATION(nameMintyMeadows, ISLANDGAME_MINTY_MEADOWS, 1, 26),
    /*  3 */ LOCATION(nameTravelersTunnel, ISLANDGAME_TRAVELERS_TUNNEL, 10, 16),
    /*  4 */ LOCATION(nameCampPersi, ISLANDGAME_CAMP_PERSI, 1, 24),
    /*  5 */ LOCATION(nameVerdantPath, ISLANDGAME_VERDANT_PATH, 10, 10),
    /*  6 */ LOCATION(nameVerdantWood, ISLANDGAME_VERDANT_WOODS, 35, 17),
    /*  7 */ LOCATION(nameFresaFarms, ISLANDGAME_FRESA_FARMS, 10, 10),
    /*  8 */ LOCATION(nameNorthernOranna, ISLANDGAME_TIDALCOVE, 18, 21),
    /*  9 */ LOCATION(nameCentralOranna, ISLANDGAME_NORTHERN_ORANNA_PATH, 33, 19),
    /* 10 */ LOCATION(nameTidalcove, ISLANDGAME_CENTRAL_ORANNA_PATH_1, 18, 1),
    /* 11 */ LOCATION(nameRosevale, ISLANDGAME_ROSEVALE, 19, 13),

    // lumine
    /* 12 */ LOCATION(nameApplevine, ISLANDGAME_APPLEVINE, 39, 17),
    /* 13 */ LOCATION(nameRockyPath, ISLANDGAME_ROCKY_PATH, 63, 40),
    /* 14 */ LOCATION(nameBellehaven, ISLANDGAME_BELLEHAVEN, 21, 28),
    /* 15 */ LOCATION(nameAetheria, ISLANDGAME_AETHERIA, 60, 26),
};

#define LOCATION_COUNT (sizeof(LOCATION_DATA)/sizeof(Location))

/// @brief Hooks into the new-game logic, allowing us to perform hack-specific setup.
void IslandGameCustomStartup();

/*
 *  ISLANDGAME_DEBUG
 *  - Enables debugging tools for development use only.
 *
 *  ISLANDGAME_STARTING_[MON, MON_LEVEL, MON_ITEM]
 *  - Defines initial state of the players party.
 *  - In the final game, we might want a way to disable this initial team.
 *  - In the final game, we might want more options to customize this starting mon.
 *  - See: src/islandgame_custom_intro.c
 *
 *  ISLANDGAME_PLAYER_NAME
 *  - The hard-coded intial player name.
 *  - In the final game, we may or may not want to keep this.
 *  - IMPORTANT: The max length of characters here is 7. If we go above, we get compiler warnings.
 */

#if ISLANDGAME_DEBUG == TRUE

#define START_LOC_GAME LOCATION_DATA[12] // applevine
#define ISLANDGAME_STARTING_MON SPECIES_SHADOW_LUGIA
#define ISLANDGAME_STARTING_MON_LEVEL 100
#define ISLANDGAME_STARTING_MON_ITEM ITEM_NONE
#define ISLANDGAME_PLAYER_NAME "Rain"

#else // Final Game, Production Build

#define START_LOC_GAME LOCATION_DATA[0] // ss rain
#define ISLANDGAME_PLAYER_NAME "Rain"

#endif

#endif // GUARD_ISLANDGAME_H
