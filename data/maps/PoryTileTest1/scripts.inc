PoryTileTest1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	return

PoryTileTest1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


PoryTileTest1_EventScript_BoyTalk::
	lock
	faceplayer
	checkitem ITEM_FRESH_WATER, 1
	goto_if_set FLAG_ROOM3_GAVE_WATER, PoryTileTest1_EventScript_BoyTalk_2
	compare VAR_RESULT, 0
	goto_if_eq PoryTileTest1_EventScript_BoyTalk_6
PoryTileTest1_EventScript_BoyTalk_5:
	msgbox PoryTileTest1_BoyTalk_Text2
PoryTileTest1_EventScript_BoyTalk_1:
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	waitmessage
	closemessage
	release
	return

PoryTileTest1_EventScript_BoyTalk_2:
	msgbox PoryTileTest1_BoyGave_Text
	goto PoryTileTest1_EventScript_BoyTalk_1

PoryTileTest1_EventScript_BoyTalk_6:
	msgbox PoryTileTest1_BoyTalk_Text1
	giveitem ITEM_FRESH_WATER, 1
	goto PoryTileTest1_EventScript_BoyTalk_5


PoryTileTest2_EventScript_NPC2Talk::
	lock
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	msgbox PoryTileTest1_NPC2_Text
	release
	return


PoryTileTest2_EventScript_NPC3Talk::
	lock
	applymovement 3, Common_Movement_FacePlayer
	waitmovement 0
	msgbox PoryTileTest1_NPC3_Text
	release
	return


PoryTileTest2_EventScript_NPC4Talk::
	lock
	faceplayer
	msgbox PoryTileTest2_EventScript_NPC4Talk_Text_0
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	closemessage
	release
	return


PoryTileTest2_EventScript_NPC4Talk_Text_0:
	.string "I'M FLYING!!!!!\p"
	.string "Huh? What do you mean, why am I yelling\n"
	.string "that? Do you really not know why?\p"
	.string "I feel bad for you kids. You missed out\n"
	.string "on the golden age of entertainment.\p"
	.string "Now you're all engrossed in that cringe\n"
	.string "PokéIdol nonsense or whatever.$"

PoryTileTest1_BoyGave_Text::
	.string "{COLOR DARK_GRAY}Sorry for troubling you. I wanted to\n"
	.string "admire this view for a bit longer.$"

PoryTileTest1_BoyTalk_Text1::
	.string "{COLOR DARK_GRAY}Excuse me, could you give this to my\n"
	.string "uncle?$"

PoryTileTest1_BoyTalk_Text2::
	.string "{COLOR DARK_GRAY}He's in our room downstairs. Just tell\n"
	.string "him I sent you.$"

PoryTileTest1_NPC2_Text::
	.string "{COLOR DARK_GRAY}Have you tried the food downstairs?\n"
	.string "It's amazing!$"

PoryTileTest1_NPC3_Text::
	.string "{COLOR DARK_GRAY}Aaaah. This vacation was exactly what I\n"
	.string "needed. Maybe I'll lay here all day.$"
