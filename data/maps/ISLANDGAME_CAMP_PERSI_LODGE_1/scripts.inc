ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts::
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	gettime
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_4
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_3
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_4
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster::
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	faceplayer
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_2
# 45 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_1
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_1:
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_2:
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_0
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1::
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_0, MSGBOX_NPC
# 59 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2::
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_0, MSGBOX_NPC
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3::
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_0, MSGBOX_NPC
# 75 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning::
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 80 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 81 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 83 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 84 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning_Text_0
# 88 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	closemessage
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 91 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 92 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 93 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	return
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4::
# 98 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 99 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4_Text_0
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC5::
# 106 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 107 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC5_Text_0
# 110 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_0:
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Where did that rapscallion Hanzo run\n"
	.string "off to now!?\p"
	.string "He better not be horsing around with\n"
	.string "that machete of his again. I don't care\l"
	.string "if it's an “agricultural tool”, there's\l"
	.string "no reason a CHILD should have one!!\l"
	.string "-sigh- I'm starting to think I was\l"
	.string "better off in the slammer than here...$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_1:
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "I wish parents would stop dropping\n"
	.string "their brats here like it's a daycare.\p"
	.string "This is a CAMP for Lugia's sake!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_0:
# 57 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Give me the controller! The scoutmaster\n"
	.string "said it's MY turn now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_0:
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Quit bothering me! I'm in an intense\n"
	.string "game right now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_0:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Dude stop spamming that move!!! -.-$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning_Text_0:
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "MOVE YOUR BIG FAT HEAD OUT OF THE\n"
	.string "FREAKING WAY!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4_Text_0:
# 100 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Charizard! Use Fire Spin!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC5_Text_0:
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Ugh, if I only had one more turn! I would\n"
	.string "have won!$"
