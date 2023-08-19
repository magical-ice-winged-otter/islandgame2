#ifndef GUARD_ISLANDGAME_H
#define GUARD_ISLANDGAME_H

#include "gba/types.h"
#include "constants/map_groups.h"

// New game starting map information
#define ISLANDGAME_DEBUG TRUE

#define ISLANDGAME_STARTING_MAP_GROUP   MAP_GROUP ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_MAP_NUM     MAP_NUM   ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_X           10
#define ISLANDGAME_STARTING_Y           15

#define ISLANDGAME_JUNGLE_ROUTE1_GROUP  MAP_GROUP ( ISLAND_JUNGLE_ROUTE1 )
#define ISLANDGAME_JUNGLE_ROUTE1_NUM    MAP_NUM   ( ISLAND_JUNGLE_ROUTE1 )
#define ISLANDGAME_JUNGLE_ROUTE1_X      10
#define ISLANDGAME_JUNGLE_ROUTE1_Y      54

#if ISLANDGAME_DEBUG == TRUE
extern u8 IslandGame_LoadIn_Message[]; //extern variable for our script
#endif 

void IslandGameCustomStartup();

// Make sure that this string is always <=7 characters long, or compile warnings
// will follow!
#define ISLANDGAME_PLAYER_NAME          "Rain"

// This mon definition is kinda basic, we might want more control over exact moveset later
// but for testing now, its probably fine
#define ISLANDGAME_STARTING_MON         SPECIES_SHADOW_LUGIA
#define ISLANDGAME_STARTING_MON_LEVEL   100
#define ISLANDGAME_STARTING_MON_ITEM    ITEM_NONE

#endif // GUARD_ISLANDGAME_H
