ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts::
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_RESULT, QUEST_INACTIVE
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	gettime
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_5
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_4
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_5
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_4
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC::
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	lock
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_CAMP_PERSI_STATE
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case 1, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_3
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case 2, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_4
# 53 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case 3, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_5
# 59 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_3
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	closemessage
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	applymovement 1, ExclaimFacePlayer
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	delay 30
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_4
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, 1
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_3:
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_4:
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 45 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	giveitem ITEM_TM54
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, 3
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_5:
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_2
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC2::
# 77 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	lock
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC2_Text_0
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0:
# 41 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I-I was just joking about the stealing\n"
	.string "stuff, okay? And besides, there's no\l"
	.string "proof that I am anyways, so don't go\l"
	.string "snooping around camp!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1:
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Ever since our battle, I've really\n"
	.string "learned a lot.\p"
	.string "I now realize that winning takes more\n"
	.string "than just the stronger Pokémon to win.\p"
	.string "Thank you for teaching that to me, and\n"
	.string "also keeping the whole thing a secret\l"
	.string "between us...\p"
	.string "Here, take this Technical Machine as\n"
	.string "thanks. It's my favorite move, and I\l"
	.string "know a trainer like you will make good\l"
	.string "use of it.$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_2:
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I'll figure out a way to beat that kid's\n"
	.string "Charizard fair and square!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_3:
# 60 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "That was just too easy! It was literally\n"
	.string "like stealing candy from a baby!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_4:
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Aiiiiiie! {PAUSE 30} Where did you come from!? How\n"
	.string "long have you been listening!?\p"
	.string "I-I was just joking about the stealing\n"
	.string "stuff, okay? And besides, there's no\l"
	.string "proof that I am anyways, so don't go\l"
	.string "snooping around camp!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC2_Text_0:
# 80 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I'm not good at remembering type\n"
	.string "match-ups, so the card game helps me\l"
	.string "learn them a lot better!$"
