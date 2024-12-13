ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts::
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell
	.2byte 0


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell::
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lockall
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_2
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_1:
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_Text_0
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	returnqueststate QUEST_MISSINGNO
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_7
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MISSINGNO, 0
ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_5:
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_2:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_1
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_7:
# 45 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	startquest QUEST_MISSINGNO
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MISSINGNO, 0
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_5


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop::
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 57 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_2
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_1
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_5
ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1:
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_2:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_0
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_5:
# 69 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_2, MSGBOX_YESNO
# 72 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_7
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_7:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special Script_FadeOutMapMusic
# 74 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitstate
# 75 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_3
# 81 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 83 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_RESULT, 0
# 84 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_ORB
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special DoOrbEffect
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 300
# 87 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special FadeOutOrbEffect
# 88 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, spookySpin
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement 0
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_1F, 8, 15
	goto ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_1


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV::
# 100 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 101 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV_Text_0
# 105 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_ReturnFromHell_Text_0:
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "...\p"
	.string "{COLOR RED}(Augh... my head...)\p"
	.string "(What in the world was all of that? Was\n"
	.string "it all just a dream?)\p"
	.string "(Seems like the program's deleted itself\n"
	.string "as well...)\p"
	.string "(That voice... who was that?)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_0:
# 59 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You try to open “LostSilver.exe”, but\n"
	.string "it just results in an error.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_1:
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a dusty old laptop. It looks like\n"
	.string "it's been here for years.\p"
	.string "There seems to still be some power in it.\n"
	.string "You could probably still use it.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_2:
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Insert the strange disc into the\n"
	.string "laptop?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop_Text_3:
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You booted up the laptop and inserted\n"
	.string "the disc.\p"
	.string "“LostSilver.exe” is automatically\n"
	.string "installed and opened.\p"
	.string "It's loading...{PAUSE 60} loading...{PAUSE 60} loading...{PAUSE 60}\p"
	.string "{COLOR RED}(Huh? It seems like the laptop froze\n"
	.string "while attempting to run the game.)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV_Text_0:
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a really old television set riddled\n"
	.string "with cobwebs.\p"
	.string "You tried to turn it on, but nothing\n"
	.string "happened.$"
