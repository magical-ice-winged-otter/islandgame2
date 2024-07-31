ISLANDGAME_APPLEVINE_QUEST_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_EventScript_Doll::
	msgbox ISLANDGAME_APPLEVINE_EventScript_Doll_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_EventScript_Julie::
	lock
	returnqueststate QUEST_MAPLEGROVE_LOVERS
	switch VAR_RESULT
	case QUEST_INACTIVE, ISLANDGAME_APPLEVINE_EventScript_Julie_3
	case QUEST_ACTIVE, ISLANDGAME_APPLEVINE_EventScript_Julie_4
	case QUEST_COMPLETED, ISLANDGAME_APPLEVINE_EventScript_Julie_5
ISLANDGAME_APPLEVINE_EventScript_Julie_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_EventScript_Julie_3:
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_4:
	checkitem ITEM_ISLANDGAME_JULIES_LETTER
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_Julie_6
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0
	closemessage
	faceplayer
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_2
	giveitem ITEM_ISLANDGAME_JULIES_LETTER
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_5:
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_3
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_6:
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_1
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1


ISLANDGAME_APPLEVINE_EventScript_Doll_Text_0:
	.string "{COLOR RED}(It's a Clefairy Doll. Apparently these\n"
	.string "bring the holder good luck.)$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0:
	.string "I wonder how Roman is doing in\n"
	.string "Maplegrove...$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_1:
	.string "Thank you, you are a very kind trainer.$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_2:
	.string "Hm? May I help you?\p"
	.string "...\p"
	.string "I see. He sent you all the way from\n"
	.string "Oranna just to give me this letter?\p"
	.string "> You hand the letter to Julie, who\n"
	.string "opens it up and reads it to herself.\p"
	.string "Oh, Roman... {PAUSE 30}What am I going to do with\n"
	.string "you...\p"
	.string "> Julie begins composing a response\n"
	.string "letter.\p"
	.string "Sorry to trouble you again, but would\n"
	.string "you mind giving this to Roman?$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_3:
	.string "The first thing I'm getting for Roman\n"
	.string "when I see him is a cell phone...$"
