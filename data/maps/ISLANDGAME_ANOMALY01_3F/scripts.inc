ISLANDGAME_ANOMALY01_3F_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll::
# 4 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 5 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 6 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 7 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll_Text_0
# 12 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setcwildbattle 0, SPECIES_ANOMALY_01, 25, ITEM_FLAME_ORB, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_INFERNAL_PARADE, MOVE_CONFUSE_RAY, MOVE_PAIN_SPLIT, MOVE_FIRE_SPIN
# 14 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
# 15 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	waitmoncry
# 16 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	dowildbattle
# 18 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 19 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 20 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 22 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll_2
# 26 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll_3
# 29 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	removeobject 1
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll_2:
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll_3:
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_InteractDoll_Text_0:
# 8 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	.string "He died...{PAUSE 60}\p"
	.string "...but you'll soon be joining him...{PAUSE 60}\p"
	.string "$"
