#ifndef GUARD_ISLANDGAME_H
#define GUARD_ISLANDGAME_H

#include "gba/types.h"
#include "constants/map_groups.h"

/*
 *  ISLANDGAME CUSTOM LOGIC
 *
 *  Location:
 *  - Different starting points, associating spawn positions with data needed to load a map.
 *  - See: src/new_game.c
 *
 *  IslandGameCustomStartup()
 *  - Hook into the games startup logic, where we can execute custom commands.
 *  - See: src/overworld.c, src/islandgame_custom_intro.c
 *
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
 *  - IMPORTANT: The max length of characters here is 6. If we go below, we get compiler warnings.
 */

#define ISLANDGAME_DEBUG

typedef struct Location {
    s8 map_group;
    s8 map_num;
    s8 start_x;
    s8 start_y;
} Location;

#define loc_set(identifier, x, y)       \
    .map_group = MAP_GROUP ( identifier ), \
    .map_num   = MAP_NUM   ( identifier ), \
    .start_x   = x, \
    .start_y   = y  


#define LOCATION_COUNT 2
static const Location LOCATIONS[LOCATION_COUNT] = {
    [0] = { //FRONT_LAWN
        loc_set(FOREST_BASE_CAMP_FRONT_LAWN, 10, 15)
    },
    [1] = { //JUNGLE_ROUTE_1
        loc_set(ISLAND_JUNGLE_ROUTE1, 10, 54)
    },
};

static const u8 LOC0[] = _("Front Lawn");
static const u8 LOC1[] = _("Route 1");
static const u8 LOC2[] = _("None");

static const u8* const LOCATION_NAMES[LOCATION_COUNT + 1] = {
    [0] = LOC0,
    [1] = LOC1,
    [2] = LOC2,
};

#define FRONT_LAWN LOCATIONS[0]
#define JUNGLE_ROUTE_1 LOCATIONS[1]

void IslandGameCustomStartup();
u8** GetLocationNames();

#ifdef ISLANDGAME_DEBUG

    #define START_LOC_GAME JUNGLE_ROUTE_1
    #define ISLANDGAME_STARTING_MON         SPECIES_SHADOW_LUGIA
    #define ISLANDGAME_STARTING_MON_LEVEL   100
    #define ISLANDGAME_STARTING_MON_ITEM    ITEM_NONE
    #define ISLANDGAME_PLAYER_NAME          "Rain"

#else // Final Game, Production Build

    #define START_LOC_GAME FRONT_LAWN
    #define ISLANDGAME_STARTING_MON         SPECIES_SHADOW_LUGIA
    #define ISLANDGAME_STARTING_MON_LEVEL   100
    #define ISLANDGAME_STARTING_MON_ITEM    ITEM_NONE
    #define ISLANDGAME_PLAYER_NAME          "Rain"

#endif 

#endif // GUARD_ISLANDGAME_H
