PoryTileTest1_MapScripts::
	.byte 0


PoryTileTest1_EventScript_BoyTalk::
	lock
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	checkitem ITEM_FRESH_WATER, 1
	goto_if_set FLAG_ROOM3_GAVE_WATER, PoryTileTest1_EventScript_BoyTalk_2
	compare VAR_RESULT, 0
	goto_if_eq PoryTileTest1_EventScript_BoyTalk_6
PoryTileTest1_EventScript_BoyTalk_5:
	msgbox PoryTileTest1_BoyTalk_Text
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
	giveitem ITEM_FRESH_WATER, 1
	goto PoryTileTest1_EventScript_BoyTalk_5


PoryTileTest2_EventScript_NPC2Talk::
	lock
	msgbox PoryTileTest1_NPC2_Text
	release
	return


PoryTileTest1_BoyGave_Text::
	.string "{COLOR DARK_GRAY}Sorry about that :D$"

PoryTileTest1_BoyTalk_Text::
	.string "{COLOR DARK_GRAY}Give the water to my uncle. I want to\n"
	.string "admire the sea a bit longer.$"

PoryTileTest1_NPC2_Text::
	.string "{COLOR DARK_GRAY}Hello! I am npc number2$"
