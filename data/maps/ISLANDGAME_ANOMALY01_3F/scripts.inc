ISLANDGAME_ANOMALY01_3F_MapScripts::
	.byte 0


ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll::
# 4 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 5 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 6 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 7 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll_Text_0
# 12 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setcwildbattle 0, SPECIES_ANOMALY_01, 25, ITEM_GHOSTIUM_Z, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_INFERNAL_PARADE, MOVE_CONFUSE_RAY, MOVE_PAIN_SPLIT, MOVE_FIRE_SPIN
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
	case B_OUTCOME_LOST, ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll_2
# 26 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll_3
# 29 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	removeobject 1
# 30 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_ANOMALY01_DEFEATED
	return

ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll_2:
	return

ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll_3:
	return


ISLANDGAME_ANOMALY01_3F_EventScript_InteractGrave::
# 35 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_3F_EventScript_InteractGrave_Text_0
# 39 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	closemessage
# 40 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY01_3F_EventScript_InteractLaptop::
# 44 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_3F_EventScript_InteractLaptop_Text_0
# 48 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setvar VAR_RESULT, 0
# 51 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	playse SE_ORB
# 52 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	special DoOrbEffect
# 53 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	delay 300
# 54 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	special FadeOutOrbEffect
# 55 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, spookySpin
# 56 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	waitmovement 0
# 57 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 1, 3
# 58 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY01_3F_EventScript_InteractDoll_Text_0:
# 8 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	.string "He died...{PAUSE 60}\p"
	.string "...but you'll soon be joining him...{PAUSE 60}$"

ISLANDGAME_ANOMALY01_3F_EventScript_InteractGrave_Text_0:
# 37 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	.string "R.I.P\n"
	.string "...$"

ISLANDGAME_ANOMALY01_3F_EventScript_InteractLaptop_Text_0:
# 46 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	.string "▶▶▶5TïLL▶▶▶▶▶▶▶▶▶▶WÌTH▶▶▶▶▶▶\n"
	.string "▶ÜS▶▶▶▶▶▶▶{PLAYER}?▶▶▶▶▶▶▶▶▶$"
