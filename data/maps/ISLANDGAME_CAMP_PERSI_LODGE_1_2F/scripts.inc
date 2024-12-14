ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts::
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_5
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_5
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_4
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC::
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_CAMP_PERSI_STATE
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case 1, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_3
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case 2, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_4
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case 3, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_5
# 61 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_4
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	applymovement 1, ExclaimFacePlayer
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_5
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, 1
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_3:
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_4:
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	giveitem ITEM_ISLANDGAME_STRANGE_DISC
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_2
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, 3
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_5:
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_3
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
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I-I was just joking about the stealing\n"
	.string "stuff, okay? And besides, there's no\l"
	.string "proof that I am anyways, so don't go\l"
	.string "snooping around camp!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1:
# 41 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Ever since our battle, I've really\n"
	.string "learned a lot.\p"
	.string "I now realize that battles aren't all\n"
	.string "about power, and that a good strategy\l"
	.string "is a lot more important.\p"
	.string "Thank you for teaching that to me, and\n"
	.string "also keeping the whole thing a secret\l"
	.string "between us...\p"
	.string "Here, I know it doesn't mean much, but I\n"
	.string "want you to have this as thanks.\p"
	.string "$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_2:
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "It's a video game I got for free from\n"
	.string "some strange old man in Verdant Woods.\p"
	.string "But when I told everyone where I got it,\n"
	.string "they told me that the old man living\l"
	.string "there hasn't been around for years...\p"
	.string "I know it sounds like some lame ghost\n"
	.string "story, but it's true!\p"
	.string "I thought I'd be able to play it on my\n"
	.string "Game Boy, but it looks like you need a\l"
	.string "computer or something...\l"
	.string "{PLAYER}▶▶▶▶▶▶ÇÀÑ▶▶▶¥ÔÚ▶▶▶▶▶▶\n"
	.string "▶サÊÁR▶▶▶▶▶▶ぬヨ?▶▶エT$▶▶▶▶▶ぬヨ▶▶$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_3:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I'll figure out a way to beat that kid's\n"
	.string "Charizard fair and square!\p"
	.string "$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_4:
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "That was just too easy! It was literally\n"
	.string "like stealing candy from a baby!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_5:
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Aiiiiiie! Where did you come from!? How\n"
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
