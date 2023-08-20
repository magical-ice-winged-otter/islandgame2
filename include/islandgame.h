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

static const Location FRONT_LAWN = {
    .map_group = MAP_GROUP ( FOREST_BASE_CAMP_FRONT_LAWN ), 
    .map_num   = MAP_NUM   ( FOREST_BASE_CAMP_FRONT_LAWN ), 
    .start_x   = 10, 
    .start_y   = 15
};

static const Location JUNGLE_ROUTE_1 = {
    .map_group = MAP_GROUP ( ISLAND_JUNGLE_ROUTE1 ), 
    .map_num   = MAP_NUM   ( ISLAND_JUNGLE_ROUTE1 ), 
    .start_x   = 10, 
    .start_y   = 54
};

void IslandGameCustomStartup();

#ifdef ISLANDGAME_DEBUG

    #define START_LOC_GAME FRONT_LAWN
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
