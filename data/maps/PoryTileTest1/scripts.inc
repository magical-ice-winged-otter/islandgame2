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
