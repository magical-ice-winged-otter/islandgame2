ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_Doll::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_DollText
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater::
	lock
	returnqueststate QUEST_MAPLEGROVE_LOVERS
	goto_if_unset FLAG_TEMP_1, ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_3
ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1:
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_7
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_4
ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_6:
	closemessage
	release
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_2:
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_0
	faceplayer
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	setflag FLAG_TEMP_1
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_3:
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_2
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_7:
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_10
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_3
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_6

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_10:
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_2
	giveitem ITEM_ISLANDGAME_ROMANS_LETTER
	startquest QUEST_MAPLEGROVE_LOVERS
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_6


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_0:
	.string "Oh Julie, my dear Julie! Why has fate\n"
	.string "whisked you away from me?\p"
	.string "Tis been but only a month since you\n"
	.string "departed from Oranna...\p"
	.string "But it feels as if a millennium has come\n"
	.string "and gone!\p"
	.string "Oh! If only I had mustered the courage\n"
	.string "to confess my feelings sooner!\p"
	.string "If only I had not wasted our last week\n"
	.string "together before you moved to Lumine...\p"
	.string "Then, maybe then, the power of our\n"
	.string "newfound love would have bound us\l"
	.string "together on this island forever!\p"
	.string "But alas, the great Maryan Sea now\n"
	.string "separates us for eternity...\p"
	.string "Oh great winged guardian of the sea!\n"
	.string "Hear my lowly plea!\p"
	.string "Bestow upon me a messenger of love! One\n"
	.string "that may deliver my confession to my\l"
	.string "one true soulmate in this world!\p"
	.string "Perhaps... a traveling Pokémon trainer\n"
	.string "of sorts!\p"
	.string "Preferably, one that will happen to\n"
	.string "pass by the town of Applevine!\p"
	.string "...{PAUSE 60}Eh?$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_1:
	.string "O-Oh! You must be the messenger of love\n"
	.string "that Lugia has blessed me with!\p"
	.string "Please! Deliver this letter to my\n"
	.string "beloved! It is all I ask for in this life!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_2:
	.string "Splendid! My love is somewhere in\n"
	.string "Applevine. Please tell me what she\l"
	.string "says!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_3:
	.string "Oh... My apologies. I mistook you for a\n"
	.string "heavenly messenger sent by Lugia.$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_4:
	.string "My love is somewhere in Applevine.\n"
	.string "Please tell me what she says!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_DollText::
	.string "{COLOR RED}(It's a Jigglypuff plush. It's very\n"
	.string "jiggly.)$"
