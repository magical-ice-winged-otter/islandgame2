#ifndef ISLANDGAME_H
#define ISLANDGAME_H

#include "gba/types.h"
#include "constants/map_groups.h"

// New game starting map information
#define ISLANDGAME_STARTING_MAP_GROUP   MAP_GROUP ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_MAP_NUM     MAP_NUM   ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_X           10
#define ISLANDGAME_STARTING_Y           15

#define ISLANDGAME_JUNGLE_ROUTE1_GROUP   MAP_GROUP ( ISLAND_JUNGLE_ROUTE1 )
#define ISLANDGAME_JUNGLE_ROUTE1_NUM     MAP_NUM   ( ISLAND_JUNGLE_ROUTE1 )
#define ISLANDGAME_JUNGLE_ROUTE1_X       0
#define ISLANDGAME_JUNGLE_ROUTE1_Y      52

// Custom intro cutscene
void Task_IslandGameCustomSpeech(u8);

#endif // ISLANDGAME_H
