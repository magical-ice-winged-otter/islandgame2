ISLANDGAME_CHERIPORT_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC2_TALK
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3::
	lock
	faceplayer
	goto_if_unset FLAG_DAILY_CHERIPORT_RECEIVED_DRINK, ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_2
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_2
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1:
PriestessDrinkGiver_End:
	release
	return

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_2:
	setflag FLAG_DAILY_CHERIPORT_RECEIVED_DRINK
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_6
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_5:
	checkitemspace ITEM_SODA_POP
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_9
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_8:
	random 100
	compare VAR_RESULT, 30
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_11
	compare VAR_RESULT, 30 + 25
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_12
	compare VAR_RESULT, 30 + 25 + 20
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_13
	compare VAR_RESULT, 30 + 25 + 20 + 15
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_14
	giveitem ITEM_BERRY_JUICE
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_6:
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_0
	goto PriestessDrinkGiver_End
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_5

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_9:
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_1
	goto PriestessDrinkGiver_End
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_8

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_11:
	giveitem ITEM_FRESH_WATER
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_12:
	giveitem ITEM_LEMONADE
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_13:
	giveitem ITEM_SODA_POP
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_14:
	giveitem ITEM_MOOMOO_MILK
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_0:
	.string "We'll always be here if you need a drink.$"

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_1:
	.string "Oh dear, you don't have enough room for a drink.$"

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_2:
	.string "Sorry, our policy is one beverage per day. Come back tomorrow.$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC1_TALK::
	.string "{COLOR DARK_GRAY}This building was once a derelict chapel\n"
	.string "on the brink of collapse.\p"
	.string "{COLOR DARK_GRAY}We have since then renovated it and\n"
	.string "given it a new purpose.\p"
	.string "{COLOR DARK_GRAY}To provide beach amenities and\n"
	.string "complimentary drinks to those in need.$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC2_TALK::
	.string "{COLOR DARK_GRAY}I wish I was a water Pokémon. Then, I\n"
	.string "wouldn't have to wear this inner tube!\p"
	.string "{COLOR DARK_GRAY}Which water Pokémon would you wanna\n"
	.string "be? I like Luvdisc, it's cute!$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK::
	.string "{COLOR DARK_GRAY}You look thirsty. Would you like a\n"
	.string "refreshing beverage?$"
