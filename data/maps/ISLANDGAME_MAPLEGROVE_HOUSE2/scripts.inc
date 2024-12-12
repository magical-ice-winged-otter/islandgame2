ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_Doll::
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_DollText
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater::
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	returnqueststate QUEST_MAPLEGROVE_LOVERS
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_3
# 62 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_4
# 91 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_5
ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1:
# 100 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	closemessage
# 101 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_3:
# 21 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	goto_if_unset FLAG_TEMP_1, ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_7
ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_6:
# 45 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 46 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_1, MSGBOX_YESNO
# 50 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_12
# 58 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_3
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_4:
# 63 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 64 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	checkitem ITEM_ISLANDGAME_JULIES_LETTER
# 65 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_9
# 71 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_5
# 80 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
# 81 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_6
# 88 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	removeitem ITEM_ISLANDGAME_JULIES_LETTER
# 89 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	completequest QUEST_MAPLEGROVE_LOVERS
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_5:
# 92 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 93 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_7
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_7:
# 22 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_0
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 37 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	closemessage
# 38 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	playse SE_PIN
# 39 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	waitmovement 0
# 41 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 42 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	waitmovement 0
# 43 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_6

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_9:
# 66 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_4
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_12:
# 51 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_2
# 54 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	giveitem ITEM_ISLANDGAME_ROMANS_LETTER
# 55 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	startquest QUEST_MAPLEGROVE_LOVERS
	goto ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_1


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_0:
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
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
# 47 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "O-Oh! You must be the messenger of love\n"
	.string "that Lugia has blessed me with!\p"
	.string "Please! Deliver this letter to my\n"
	.string "beloved! It is all I ask for in my life!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_2:
# 52 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Splendid! My love is somewhere in\n"
	.string "Applevine. Please tell me what she says!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_3:
# 59 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Oh... My apologies. I mistook you for a\n"
	.string "heavenly messenger sent by Lugia.$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_4:
# 67 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "My love is somewhere in Applevine.\n"
	.string "Please tell me what she says!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_5:
# 72 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Ah! You've returned! What did she say?\p"
	.string "> You hand Julie's letter to Roman.\p"
	.string "...{PAUSE 60}Oh...{PAUSE 60}I see...{PAUSE 60}What a fool I truly was...{PAUSE 60}\p"
	.string "...It appears I've misinterpreted her\n"
	.string "leaving to be permanent.\p"
	.string "Turns out she's only staying there for\n"
	.string "the summer to help her relatives with\l"
	.string "their family business.\p"
	.string "Come to think of it... it did seem\n"
	.string "strange that her parents were still\l"
	.string "living here...\p"
	.string "My apologies, trainer. Please take this\n"
	.string "as penance for my blunder.$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_6:
# 82 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Hm? You wish to know her response to my\n"
	.string "confession?\p"
	.string "I suppose I do owe it to you to at least\n"
	.string "tell you what she said...\p"
	.string "She told me to meet her at the\n"
	.string "Silverwing Festival for her answer!\p"
	.string "Argh... the anticipation is killing me...{PAUSE 30}\n"
	.string "but I am at least glad to know I'll still\l"
	.string "be able to see her, regardless of her\l"
	.string "answer.\p"
	.string "It just gives us more time to form a\n"
	.string "bond together!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater_Text_7:
# 94 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "I guess I was being a little dramatic\n"
	.string "earlier.$"

ISLANDGAME_MAPLEGROVE_HOUSE2_DollText::
# 10 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "{COLOR RED}(It's a Jigglypuff plush. It's very\n"
	.string "jiggly.)$"
