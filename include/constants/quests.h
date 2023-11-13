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
#define QUEST_COUNT                        2

// Custom Sub-Quests
#define SUB_QUEST_PERSI_BERRY_1            0
#define SUB_QUEST_PERSI_BERRY_2            1
#define SUB_QUEST_PERSI_BERRY_3            2
#define SUB_QUEST_PERSI_BERRY_4            3
#define SUB_QUEST_PERSI_BERRY_5            4
#define SUB_QUEST_PERSI_BERRY_6            5
#define SUB_QUEST_COUNT_PERSI_BERRY        6

#define SUB_QUEST_COUNT (SUB_QUEST_COUNT_PERSI_BERRY)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
