SS_RAIN_CAFETERIA_MapScripts::
	.byte 0


SS_RAIN_CAFETERIA_NPC1_TALK::
	lock
	msgbox SS_RAIN_CAFETERIA_NPC1_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC2_TALK::
	lock
	msgbox SS_RAIN_CAFETERIA_NPC2_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC3_TALK::
	lock
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
	.string "Today's menu choices are great! I love\n"
	.string "the burgers here!$"

SS_RAIN_CAFETERIA_NPC2_TEXT::
	.string "An extra large pinap... Who puts pinap\n"
	.string "berries on a PIZZA?\p"
	.string "What has this world come to?$"

SS_RAIN_CAFETERIA_NPC3_TEXT::
	.string "I swear to Arceus, if I get another room\n"
	.string "service request on the top floor...$"
