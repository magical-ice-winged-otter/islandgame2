SS_RAIN_CAFETERIA_MapScripts::
	.byte 0


SS_RAIN_CAFETERIA_NPC1_TALK::
# 7 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 8 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 9 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC1_TEXT
# 10 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	waitmessage
# 11 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return


SS_RAIN_CAFETERIA_NPC2_TALK::
# 19 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 20 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 21 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	gettime
# 22 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt SS_RAIN_CAFETERIA_NPC2_TALK_2
# 22 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge SS_RAIN_CAFETERIA_NPC2_TALK_2
# 65 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_4
SS_RAIN_CAFETERIA_NPC2_TALK_1:
# 70 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
LobsterRoll_End:
# 71 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	closemessage
# 72 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return

SS_RAIN_CAFETERIA_NPC2_TALK_2:
# 23 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto_if_unset FLAG_DAILY_SS_RAIN_LOBSTER_ROLL, SS_RAIN_CAFETERIA_NPC2_TALK_7
# 58 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_3
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_7:
# 24 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_0
# 27 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	showmoneybox 0, 0
# 28 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_1, MSGBOX_YESNO
# 31 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SS_RAIN_CAFETERIA_NPC2_TALK_10
# 52 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	hidemoneybox
# 53 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_10:
# 32 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	checkmoney 3000
# 33 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SS_RAIN_CAFETERIA_NPC2_TALK_13
# 41 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	removemoney 3000
# 42 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	updatemoneybox
# 43 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	playse SE_SHOP
# 44 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	waitse
# 45 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	hidemoneybox
# 46 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	giveitem ITEM_ISLANDGAME_LOBSTER_ROLL
# 47 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	setflag FLAG_DAILY_SS_RAIN_LOBSTER_ROLL
# 48 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1

SS_RAIN_CAFETERIA_NPC2_TALK_13:
# 34 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC2_TALK_Text_2
# 37 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	hidemoneybox
# 38 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto LobsterRoll_End
	goto SS_RAIN_CAFETERIA_NPC2_TALK_1


SS_RAIN_CAFETERIA_NPC3_TALK::
# 76 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 77 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 78 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_NPC3_TEXT
# 79 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	waitmessage
# 80 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return


SS_RAIN_CAFETERIA_IceCreamGirl::
# 93 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	lock
# 94 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	faceplayer
# 95 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto_if_unset FLAG_SSRAIN_ICECREAM_RECEIVED, SS_RAIN_CAFETERIA_IceCreamGirl_2
SS_RAIN_CAFETERIA_IceCreamGirl_1:
# 109 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_3
# 111 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
IceCreamGirl_End:
# 112 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	release
	return

SS_RAIN_CAFETERIA_IceCreamGirl_2:
# 96 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_0, MSGBOX_YESNO
# 97 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SS_RAIN_CAFETERIA_IceCreamGirl_5
SS_RAIN_CAFETERIA_IceCreamGirl_4:
# 101 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	checkitemspace ITEM_CASTELIACONE
# 102 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SS_RAIN_CAFETERIA_IceCreamGirl_8
SS_RAIN_CAFETERIA_IceCreamGirl_7:
# 106 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 107 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	setflag FLAG_SSRAIN_ICECREAM_RECEIVED
	goto SS_RAIN_CAFETERIA_IceCreamGirl_1

SS_RAIN_CAFETERIA_IceCreamGirl_5:
# 98 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_1
# 99 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto IceCreamGirl_End
	goto SS_RAIN_CAFETERIA_IceCreamGirl_4

SS_RAIN_CAFETERIA_IceCreamGirl_8:
# 103 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	msgbox SS_RAIN_CAFETERIA_IceCreamGirl_Text_2
# 104 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	goto IceCreamGirl_End
	goto SS_RAIN_CAFETERIA_IceCreamGirl_7


SS_RAIN_CAFETERIA_NPC2_TALK_Text_0:
# 25 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Our famous lobster roll is made with\n"
	.string "only the freshest lobster.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_1:
# 29 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Would you like to try one? It is ¥3000\n"
	.string "for a roll.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_2:
# 35 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Sorry, you do not have enough money.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_3:
# 59 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Sorry, due to the high popularity of our\n"
	.string "lobster roll, only one may be purchased\l"
	.string "per customer every night.\p"
	.string "If you would like another one, please\n"
	.string "come back tomorrow.$"

SS_RAIN_CAFETERIA_NPC2_TALK_Text_4:
# 66 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "If you would like to try our famous\n"
	.string "lobster roll, you will have to come back\l"
	.string "later tonight.$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_0:
# 96 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "I don't like how this ice cream tastes...\n"
	.string "Do you want it?$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_1:
# 98 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "But I don't wanna throw it away...$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_2:
# 103 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Eeh? You're holding too many items.$"

SS_RAIN_CAFETERIA_IceCreamGirl_Text_3:
# 109 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "I wanted orange sher-bet, but they\n"
	.string "don't have it here...$"

SS_RAIN_CAFETERIA_NPC1_TEXT::
# 14 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "I can't believe meals aren't paid for\n"
	.string "with the ticket!\p"
	.string "These prices are highway robbery!$"

SS_RAIN_CAFETERIA_NPC3_TEXT::
# 83 "data/maps/SS_RAIN_CAFETERIA/scripts.pory"
	.string "Contrary to popular belief, our famous\n"
	.string "lobster roll is not made from Pokémon.\p"
	.string "We actually just use regular ol' lobster.\p"
	.string "Yeah, you heard that right. Normal\n"
	.string "animals exist in the Pokémon world.\p"
	.string "Now you can stop accusing me of\n"
	.string "committing Pokémon cruelty!$"
