SS_RAIN_CAFETERIA_MapScripts::
	.byte 0


SS_RAIN_CAFETERIA_NPC1_TALK::
	lock
	faceplayer
	msgbox SS_RAIN_CAFETERIA_NPC1_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC2_TALK::
	lock
	faceplayer
	gettime
	compare VAR_0x8000, 6
	goto_if_lt SS_RAIN_CAFETERIA_NPC2_TALK_2
	compare VAR_0x8000, 18
	goto_if_ge SS_RAIN_CAFETERIA_NPC2_TALK_2
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_4
SS_RAIN_CAFETERIA_NPC2_TALK_1:
LobsterRoll_End:
	closemessage
	release
	return

SS_RAIN_CAFETERIA_NPC2_TALK_2:
	goto_if_unset FLAG_DAILY_SS_RAIN_LOBSTER_ROLL, SS_RAIN_CAFETERIA_NPC2_TALK_7
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_3
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_7:
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_0
	showmoneybox 0, 0
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SS_RAIN_CAFETERIA_NPC2_TALK_10
	goto LobsterRoll_End
	hidemoneybox
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_10:
	checkmoney 3000
	compare VAR_RESULT, 0
	goto_if_eq SS_RAIN_CAFETERIA_NPC2_TALK_13
	removemoney 3000
	updatemoneybox
	playse SE_SHOP
	waitse
	hidemoneybox
	giveitem ITEM_ISLANDGAME_LOBSTER_ROLL
	setflag FLAG_DAILY_SS_RAIN_LOBSTER_ROLL
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_13:
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_2
	hidemoneybox
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1


SS_RAIN_CAFETERIA_NPC3_TALK::
	lock
	faceplayer
	msgbox SS_RAIN_CAFETERIA_NPC3_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_IceCreamGirl::
	lock
	faceplayer
	goto_if_unset FLAG_SSRAIN_ICECREAM_RECEIVED, SS_RAIN_CAFETERIA_IceCreamGirl_2
SS_RAIN_CAFETERIA_IceCreamGirl_1:
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_3
IceCreamGirl_End:
	release
	return

SS_RAIN_CAFETERIA_IceCreamGirl_2:
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SS_RAIN_CAFETERIA_IceCreamGirl_5
SS_RAIN_CAFETERIA_IceCreamGirl_4:
	checkitemspace ITEM_CASTELIACONE
	compare VAR_RESULT, 0
	goto_if_eq SS_RAIN_CAFETERIA_IceCreamGirl_8
SS_RAIN_CAFETERIA_IceCreamGirl_7:
	giveitem ITEM_CASTELIACONE
	setflag FLAG_SSRAIN_ICECREAM_RECEIVED
	goto SS_RAIN_CAFETERIA_IceCreamGirl_1

SS_RAIN_CAFETERIA_IceCreamGirl_5:
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_1
	goto IceCreamGirl_End
	goto SS_RAIN_CAFETERIA_IceCreamGirl_4

SS_RAIN_CAFETERIA_IceCreamGirl_8:
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_2
	goto IceCreamGirl_End
	goto SS_RAIN_CAFETERIA_IceCreamGirl_7


SS_RAIN_CAFETERIA_NPC2_TALK_Text_0:
	.string "Our famous lobster roll is made with\n"
	.string "only the freshest lobster.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_1:
	.string "Would you like to try one? It is ¥3000\n"
	.string "for a roll.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_2:
	.string "Sorry, you do not have enough money.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_3:
	.string "Sorry, due to the high popularity of our\n"
	.string "lobster roll, only one may be purchased\l"
	.string "per customer every night.\p"
	.string "If you would like another one, please\n"
	.string "come back tomorrow.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_4:
	.string "If you would like to try our famous\n"
	.string "lobster roll, you will have to come back\l"
	.string "later tonight.$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_0:
	.string "I don't like how this ice cream tastes...\n"
	.string "Do you want it?$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_1:
	.string "But I don't wanna throw it away...$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_2:
	.string "Eeh? You're holding too many items.$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_3:
	.string "I wanted orange sher-bet, but they\n"
	.string "don't have it here...$"

SS_RAIN_CAFETERIA_NPC1_TEXT::
	.string "I can't believe meals aren't paid for\n"
	.string "with the ticket!\p"
	.string "These prices are highway robbery!$"

SS_RAIN_CAFETERIA_NPC3_TEXT::
	.string "Contrary to popular belief, our famous\n"
	.string "lobster roll is not made from Pokémon.\p"
	.string "We actually just use regular ol' lobster.\p"
	.string "Yeah, you heard that right. Normal\n"
	.string "animals exist in the Pokémon world.\p"
	.string "Now you can stop accusing me of\n"
	.string "committing Pokémon cruelty!$"
