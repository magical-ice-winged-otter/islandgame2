PoryTileTest1_MapScripts::
# 10 "data/maps/PoryTileTest1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/PoryTileTest1/scripts.pory"
	gettime
# 14 "data/maps/PoryTileTest1/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data/maps/PoryTileTest1/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 18 "data/maps/PoryTileTest1/scripts.pory"
	setflag FLAG_TEMP_2
	return

PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/PoryTileTest1/scripts.pory"
	setflag FLAG_TEMP_1
	return


PoryTileTest1_EventScript_BoyTalk::
# 24 "data/maps/PoryTileTest1/scripts.pory"
	lock
# 25 "data/maps/PoryTileTest1/scripts.pory"
	faceplayer
# 27 "data/maps/PoryTileTest1/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 28 "data/maps/PoryTileTest1/scripts.pory"
	goto_if_set FLAG_ROOM3_GAVE_WATER, PoryTileTest1_EventScript_BoyTalk_2
# 31 "data/maps/PoryTileTest1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PoryTileTest1_EventScript_BoyTalk_6
PoryTileTest1_EventScript_BoyTalk_5:
# 35 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest1_BoyTalk_Text2
PoryTileTest1_EventScript_BoyTalk_1:
# 37 "data/maps/PoryTileTest1/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 38 "data/maps/PoryTileTest1/scripts.pory"
	waitmovement 0
# 39 "data/maps/PoryTileTest1/scripts.pory"
	waitmessage
# 40 "data/maps/PoryTileTest1/scripts.pory"
	closemessage
# 42 "data/maps/PoryTileTest1/scripts.pory"
	release
	return

PoryTileTest1_EventScript_BoyTalk_2:
# 29 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest1_BoyGave_Text
	goto PoryTileTest1_EventScript_BoyTalk_1

PoryTileTest1_EventScript_BoyTalk_6:
# 32 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest1_BoyTalk_Text1
# 33 "data/maps/PoryTileTest1/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
	goto PoryTileTest1_EventScript_BoyTalk_5


PoryTileTest2_EventScript_NPC2Talk::
# 61 "data/maps/PoryTileTest1/scripts.pory"
	lock
# 62 "data/maps/PoryTileTest1/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 63 "data/maps/PoryTileTest1/scripts.pory"
	waitmovement 0
# 64 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest1_NPC2_Text
# 65 "data/maps/PoryTileTest1/scripts.pory"
	release
	return


PoryTileTest2_EventScript_NPC3Talk::
# 75 "data/maps/PoryTileTest1/scripts.pory"
	lock
# 76 "data/maps/PoryTileTest1/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 77 "data/maps/PoryTileTest1/scripts.pory"
	waitmovement 0
# 78 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest1_NPC3_Text
# 79 "data/maps/PoryTileTest1/scripts.pory"
	release
	return


PoryTileTest2_EventScript_NPC4Talk::
# 87 "data/maps/PoryTileTest1/scripts.pory"
	lock
# 88 "data/maps/PoryTileTest1/scripts.pory"
	faceplayer
# 89 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest2_EventScript_NPC4Talk_Text_0
# 95 "data/maps/PoryTileTest1/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 96 "data/maps/PoryTileTest1/scripts.pory"
	waitmovement 0
# 97 "data/maps/PoryTileTest1/scripts.pory"
	closemessage
# 98 "data/maps/PoryTileTest1/scripts.pory"
	release
	return


PoryTileTest2_EventScript_Stern::
# 102 "data/maps/PoryTileTest1/scripts.pory"
	lock
# 103 "data/maps/PoryTileTest1/scripts.pory"
	faceplayer
# 104 "data/maps/PoryTileTest1/scripts.pory"
	msgbox PoryTileTest2_EventScript_Stern_Text_0
# 107 "data/maps/PoryTileTest1/scripts.pory"
	closemessage
# 108 "data/maps/PoryTileTest1/scripts.pory"
	release
	return


PoryTileTest2_EventScript_NPC4Talk_Text_0:
# 90 "data/maps/PoryTileTest1/scripts.pory"
	.string "I'M FLYING!!!!!\p"
	.string "Huh? What do you mean, why am I yelling\n"
	.string "that? Do you really not know why?\p"
	.string "I feel bad for you kids. You missed out\n"
	.string "on the golden age of entertainment.\p"
	.string "Now you're all engrossed in that cringe\n"
	.string "PokéIdol nonsense or whatever.$"

PoryTileTest2_EventScript_Stern_Text_0:
# 105 "data/maps/PoryTileTest1/scripts.pory"
	.string "This is quite the impressive vessel, I\n"
	.string "must say. It's just like our S.S. Tidal.$"

PoryTileTest1_BoyGave_Text::
# 45 "data/maps/PoryTileTest1/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry for troubling you. I wanted to\n"
	.string "admire this view for a bit longer.$"

PoryTileTest1_BoyTalk_Text1::
# 49 "data/maps/PoryTileTest1/scripts.pory"
	.string "{COLOR DARK_GRAY}Excuse me, could you give this to my\n"
	.string "uncle?$"

PoryTileTest1_BoyTalk_Text2::
# 53 "data/maps/PoryTileTest1/scripts.pory"
	.string "{COLOR DARK_GRAY}He's in our room downstairs. Just tell\n"
	.string "him I sent you.$"

PoryTileTest1_NPC2_Text::
# 68 "data/maps/PoryTileTest1/scripts.pory"
	.string "{COLOR DARK_GRAY}Have you tried the food downstairs?\n"
	.string "It's amazing!$"

PoryTileTest1_NPC3_Text::
# 82 "data/maps/PoryTileTest1/scripts.pory"
	.string "{COLOR DARK_GRAY}Aaaah. This vacation was exactly what I\n"
	.string "needed. Maybe I'll lay here all day.$"
