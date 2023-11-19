#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1


// Custom Quests
#define QUEST_PERSI_FAVORITE_CARD          0
#define QUEST_PERSI_BERRY_MANIAC           1
#define QUEST_FRESA_FARMS_LOST_MAREEP      2
#define QUEST_FRESA_FARMS_TORCHIC_EGG      3
#define QUEST_NORANNA_FITNESS_FREAK        4
#define QUEST_COUNT                        5 // This number is literally how many to show in the UI (keep it accurate!)

// Custom Sub-Quests
#define SUB_QUEST_PERSI_BERRY_1            0
#define SUB_QUEST_PERSI_BERRY_2            1
#define SUB_QUEST_PERSI_BERRY_3            2
#define SUB_QUEST_PERSI_BERRY_4            3
#define SUB_QUEST_PERSI_BERRY_5            4
#define SUB_QUEST_PERSI_BERRY_6            5

#define SUB_QUEST_NORANNA_FITNESS_FREAK_HPUP    6
#define SUB_QUEST_NORANNA_FITNESS_FREAK_PROTEIN 7
#define SUB_QUEST_NORANNA_FITNESS_FREAK_IRON    8 
#define SUB_QUEST_NORANNA_FITNESS_FREAK_CALCIUM 9
#define SUB_QUEST_NORANNA_FITNESS_FREAK_ZINC    10
#define SUB_QUEST_NORANNA_FITNESS_FREAK_CARBOS  11
#define SUB_QUEST_NORANNA_FITNESS_FREAK_PPUP    12
#define SUB_QUEST_NORANNA_FITNESS_FREAK_PPMAX   13

#define SUB_QUEST_COUNT_PERSI_BERRY 6
#define SUB_QUEST_COUNT_NORANNA_FITNESS_FREAK 8

#define SUB_QUEST_COUNT SUB_QUEST_COUNT_PERSI_BERRY + SUB_QUEST_COUNT_NORANNA_FITNESS_FREAK


// We want to allocate more space in the saveblock for quests than we need,
// so we don't make breaking changes in the future.
#define QUEST_ARRAY_COUNT 100

#endif // GUARD_CONSTANTS_QUESTS_H
