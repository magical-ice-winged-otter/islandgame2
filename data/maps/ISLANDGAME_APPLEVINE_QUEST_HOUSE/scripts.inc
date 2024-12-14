ISLANDGAME_APPLEVINE_QUEST_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_EventScript_Doll::
# 5 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Doll_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_EventScript_Julie::
# 11 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	lock
# 12 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	returnqueststate QUEST_MAPLEGROVE_LOVERS
# 14 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_APPLEVINE_EventScript_Julie_3
# 19 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_APPLEVINE_EventScript_Julie_4
# 49 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_APPLEVINE_EventScript_Julie_5
ISLANDGAME_APPLEVINE_EventScript_Julie_1:
# 58 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_Julie_3:
# 16 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_4:
# 20 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	checkitem ITEM_ISLANDGAME_JULIES_LETTER
# 21 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_Julie_6
# 28 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0
# 31 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	closemessage
# 32 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	faceplayer
# 33 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 34 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	waitmovement 0
# 35 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 36 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	waitmovement 0
# 37 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_2
# 46 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	giveitem ITEM_ISLANDGAME_JULIES_LETTER
# 47 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	removeitem ITEM_ISLANDGAME_ROMANS_LETTER
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_5:
# 50 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	faceplayer
# 51 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_3
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_6:
# 22 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	faceplayer
# 23 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_1
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1


ISLANDGAME_APPLEVINE_EventScript_Doll_Text_0:
# 6 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "{COLOR RED}(It's a Clefairy Doll. Apparently these\n"
	.string "bring the holder good luck.)$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0:
# 17 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "I wonder how Roman is doing in\n"
	.string "Maplegrove...$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_1:
# 24 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "Thank you, you are a very kind trainer.$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_2:
# 38 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "Hm? May I help you?\p"
	.string "...\p"
	.string "I see. He sent you all the way from\n"
	.string "Oranna just to give me this letter?\p"
	.string "{COLOR GREEN}> You hand the letter to Julie, who\n"
	.string "opens it up and reads it to herself.\p"
	.string "{COLOR DARK_GRAY}Oh, Roman... {PAUSE 30}What am I going to do with\n"
	.string "you...\p"
	.string "{COLOR GREEN}> Julie begins composing a response\n"
	.string "letter.\p"
	.string "Sorry to trouble you again, but would\n"
	.string "you mind giving this to Roman?$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_3:
# 52 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "The first thing I'm getting for Roman\n"
	.string "when I see him is a cell phone...$"
