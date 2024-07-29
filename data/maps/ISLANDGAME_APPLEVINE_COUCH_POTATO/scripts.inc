ISLANDGAME_APPLEVINE_COUCH_POTATO_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak::
	lock
	faceplayer
	returnqueststate QUEST_APPLEVINE_COUCH_POTATO
	switch VAR_RESULT
	case QUEST_INACTIVE, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_3
	case QUEST_ACTIVE, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_4
	case QUEST_COMPLETED, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_5
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1:
CouchPotatoSpeakEnd:
	release
	return

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_3:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_0
	startquest QUEST_APPLEVINE_COUCH_POTATO
	bufferitemname STR_VAR_1, ITEM_HP_UP
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_1
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_4:
	setvar VAR_TEMP_B, SUB_QUEST_COUCH_POTATO_1
	setvar VAR_TEMP_A, ( SUB_QUEST_COUCH_POTATO_1 + SUB_QUEST_COUNT_COUCH_POTATO )
	setvar VAR_TEMP_C, QUEST_APPLEVINE_COUCH_POTATO
	call Common_NextSubQuest
	copyvar VAR_TEMP_D, VAR_RESULT
	checkitem VAR_TEMP_D
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_7
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_6:
	removeitem VAR_TEMP_D
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_3
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_APPLEVINE_COUCH_POTATO, VAR_TEMP_B
	addvar VAR_TEMP_B, 1
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_9
	showmoneybox 0, 0
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_6
	call ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward
	updatemoneybox
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_7
	hidemoneybox
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_5:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_8
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_7:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_2
	goto CouchPotatoSpeakEnd
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_6

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_9:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_4
	giveitem ITEM_LEFTOVERS
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_5
	completequest QUEST_APPLEVINE_COUCH_POTATO
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1


ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax_Text_0
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
	waitmoncry
	release
	return


ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward::
	switch VAR_TEMP_D
	case ITEM_HP_UP, ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_3
	case ITEM_PROTEIN, ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_4
ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_1:
	return

ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_3:
	addmoney 100
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_4:
	addmoney 200
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_ItemReward_1


ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_0:
	.string "I'm so hungry, but I'm relaxing on my\n"
	.string "couch....\p"
	.string "Would you like to fetch food for me?\n"
	.string "Thanks.$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_1:
	.string "To start you off, I'm looking for an\n"
	.string "{STR_VAR_1}!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_2:
	.string "Hey, what gives! Where's my\n"
	.string "{STR_VAR_2}?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_3:
	.string "Looks like you got a {STR_VAR_2}.$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_4:
	.string "Hold on! I don't have any money to give\n"
	.string "you!\p"
	.string "...\p"
	.string "What do you expect me to do then? Get a\n"
	.string "job?\p"
	.string "I have an idea, just give me one\n"
	.string "second...\p"
	.string "$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_5:
	.string "What are you looking at? Be grateful\n"
	.string "that I even gave you any!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_6:
	.string "You want my spare change? Fine, here\n"
	.string "you go.$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_7:
	.string "That's all you get.$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_8:
	.string "If you want your money, I still don't\n"
	.string "have a job, okay?\p"
	.string "It's a work in progress....$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax_Text_0:
	.string "You can't tell if this Munchlax weighs\n"
	.string "more than the guy on the couch.$"
