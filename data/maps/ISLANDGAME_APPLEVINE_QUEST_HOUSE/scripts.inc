ISLANDGAME_APPLEVINE_QUEST_HOUSE_MapScripts::
# 4 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_QUEST_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_QUEST_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	quest_emote_on_warp 1, QUEST_MAPLEGROVE_LOVERS
	return


ISLANDGAME_APPLEVINE_EventScript_Doll::
# 11 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Doll_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_EventScript_Julie::
# 17 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	returnqueststate QUEST_MAPLEGROVE_LOVERS
# 20 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_APPLEVINE_EventScript_Julie_3
# 25 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_APPLEVINE_EventScript_Julie_4
# 55 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_APPLEVINE_EventScript_Julie_5
ISLANDGAME_APPLEVINE_EventScript_Julie_1:
# 64 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	closemessage
# 65 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_Julie_3:
# 22 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_4:
# 26 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	checkitem ITEM_ISLANDGAME_JULIES_LETTER
# 27 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_Julie_6
# 34 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0
# 37 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	closemessage
# 38 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	faceplayer
# 39 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 40 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	waitmovement 0
# 41 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 42 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	waitmovement 0
# 43 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_2
# 52 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	giveitem ITEM_ISLANDGAME_JULIES_LETTER
# 53 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	removeitem ITEM_ISLANDGAME_ROMANS_LETTER
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_5:
# 56 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_3
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1

ISLANDGAME_APPLEVINE_EventScript_Julie_6:
# 28 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	faceplayer
# 29 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Julie_Text_1
	goto ISLANDGAME_APPLEVINE_EventScript_Julie_1


ISLANDGAME_APPLEVINE_EventScript_Doll_Text_0:
# 12 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "{COLOR RED}(It's a Clefairy Doll. Apparently these\n"
	.string "bring the holder good luck.)$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_0:
# 23 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "I wonder how Roman is doing in\n"
	.string "Maplegrove...$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_1:
# 30 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "Thank you, you are a very kind trainer.$"

ISLANDGAME_APPLEVINE_EventScript_Julie_Text_2:
# 44 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
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
# 58 "data/maps/ISLANDGAME_APPLEVINE_QUEST_HOUSE/scripts.pory"
	.string "The first thing I'm getting for Roman\n"
	.string "when I see him is a cell phone...$"
