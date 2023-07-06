#ifndef ISLANDGAME_H
#define ISLANDGAME_H

#include "gba/types.h"
#include "constants/map_groups.h"

// New game starting map information
#define ISLANDGAME_STARTING_MAP_GROUP   MAP_GROUP ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_MAP_NUM     MAP_NUM   ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_X           10
#define ISLANDGAME_STARTING_Y           15

// Custom intro cutscene
void Task_IslandGameCustomSpeech(u8);

#endif // ISLANDGAME_H
