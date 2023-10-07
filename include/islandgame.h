#ifndef GUARD_ISLANDGAME_H
#define GUARD_ISLANDGAME_H

#include "constants/map_groups.h"
#include "constants/maps.h"
#include "gba/types.h"

// Comment out this line to strip debugging tools from the build.
#define ISLANDGAME_DEBUG

/// @brief Different starting points, associating spawn positions with data needed to load a map.
/// Used to generate a teleportation debug menu.
/// @note For usage, see src/new_game.c, src/start_menu.c
typedef struct Location
{
    s8 map_group;
    s8 map_num;
    s8 start_x;
    s8 start_y;
} Location;

// An internal utility to reduce boilerplate from location definitions.
#define SET_LOC(identifier, x, y)           \
    {                                       \
        .map_group = MAP_GROUP(identifier), \
        .map_num = MAP_NUM(identifier),     \
        .start_x = x,                       \
        .start_y = y                        \
    }

#define FRONT_LAWN 0
#define JUNGLE_ROUTE_1 1
#define SS_RAIN 2
#define CHERIPORT 3
#define MINTY_MEADOWS 4
#define TRAVELERS_TUNNEL 5

/// @brief Map loading information for each custom location. Contains spawn locations and map ids.
// Get the set_loc first argument from map_groups.h
static const Location LOCATION_DATA[] = {
    [FRONT_LAWN] = SET_LOC(FOREST_BASE_CAMP_FRONT_LAWN, 10, 15),
    [JUNGLE_ROUTE_1] = SET_LOC(ISLAND_JUNGLE_ROUTE1, 10, 54),
    [SS_RAIN] = SET_LOC(ISLANDGAME_SS_RAIN_ROOM2, 6, 7), //I can't figure out how to change the name on porymap
    [CHERIPORT] = SET_LOC(ISLANDGAME_CHERIPORT, 10, 26),
    [TRAVELERS_TUNNEL] = SET_LOC(ISLANDGAME_TRAVELERS_TUNNEL, 10, 10)
};

static const u8 frontLawnName[] = _("Front Lawn");
static const u8 route1Name[]    = _("Route 1");
static const u8 testMapName[]   = _("SS RAIN"); 
static const u8 cheriportName[] = _("CHERIPORT");
static const u8 mintyMeadowsName[] = _("MINTY MEADOWS");
static const u8 travelersTunnelName[] = _("TravelTunnel");

/// @brief A human-readable name for each custom location in the game.
static const u8 *const LOCATION_NAMES[] = { 
    [FRONT_LAWN] = frontLawnName,
    [JUNGLE_ROUTE_1] = route1Name,
    [SS_RAIN] = testMapName,
    [CHERIPORT] = cheriportName,
    [MINTY_MEADOWS] = mintyMeadowsName,
    [TRAVELERS_TUNNEL] = mintyMeadowsName
};
// The actual string values must be defined outside the array, or crashes will follow.


/// @brief Gets the total amout of locations in the game: the count of LOCATION_DATA and LOCATION_NAMES.
#define LOCATION_COUNT sizeof(LOCATION_DATA) / sizeof(Location)

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

#ifdef ISLANDGAME_DEBUG

#define START_LOC_GAME LOCATION_DATA[CHERIPORT]
#define ISLANDGAME_STARTING_MON SPECIES_SHADOW_LUGIA
#define ISLANDGAME_STARTING_MON_LEVEL 100
#define ISLANDGAME_STARTING_MON_ITEM ITEM_NONE
#define ISLANDGAME_PLAYER_NAME "Rain"

#else // Final Game, Production Build

#define START_LOC_GAME LOCATION_DATA[SS_RAIN]
#define ISLANDGAME_STARTING_MON SPECIES_SHADOW_LUGIA
#define ISLANDGAME_STARTING_MON_LEVEL 100
#define ISLANDGAME_STARTING_MON_ITEM ITEM_NONE
#define ISLANDGAME_PLAYER_NAME "Rain"

#endif

#endif // GUARD_ISLANDGAME_H
