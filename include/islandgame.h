#ifndef GUARD_ISLANDGAME_H
#define GUARD_ISLANDGAME_H

#include "gba/types.h"
#include "constants/map_groups.h"

typedef struct Location {
    s8 map_group;
    s8 map_num;
    s8 start_x;
    s8 start_y;
} Location;

// New game starting map information
#define ISLANDGAME_DEBUG TRUE

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

#define START_LOC_GAME FRONT_LAWN

#if ISLANDGAME_DEBUG == TRUE
    #define START_LOC_GAME FRONT_LAWN
    extern u8 IslandGame_LoadIn_Message[]; //extern variable for our script

    // This mon definition is kinda basic, we might want more control over exact moveset later
    // but for testing now, its probably fine
    #define ISLANDGAME_STARTING_MON         SPECIES_SHADOW_LUGIA
    #define ISLANDGAME_STARTING_MON_LEVEL   100
    #define ISLANDGAME_STARTING_MON_ITEM    ITEM_NONE

    // Make sure that this string is always <=7 characters long, or compile warnings
    // will follow!
    #define ISLANDGAME_PLAYER_NAME          "Rain"

#else //for actual purposes put stuff here
    #define START_LOC_GAME FRONT_LAWN
    // This mon definition is kinda basic, we might want more control over exact moveset later
    // but for testing now, its probably fine
    #define ISLANDGAME_STARTING_MON         SPECIES_SHADOW_LUGIA
    #define ISLANDGAME_STARTING_MON_LEVEL   100
    #define ISLANDGAME_STARTING_MON_ITEM    ITEM_NONE

    // Make sure that this string is always <=7 characters long, or compile warnings
    // will follow!
    #define ISLANDGAME_PLAYER_NAME          "Rain"
#endif 

void IslandGameCustomStartup();

#endif // GUARD_ISLANDGAME_H
