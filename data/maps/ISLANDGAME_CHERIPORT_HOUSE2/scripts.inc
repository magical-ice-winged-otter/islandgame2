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
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_0
ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1:
	release
	return

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_2:
	setflag FLAG_DAILY_CHERIPORT_RECEIVED_DRINK
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK
	random 100
	compare VAR_RESULT, 30
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_5
	compare VAR_RESULT, 30 + 25
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_6
	compare VAR_RESULT, 30 + 25 + 20
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_7
	compare VAR_RESULT, 30 + 25 + 20 + 15
	goto_if_lt ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_8
	giveitem ITEM_BERRY_JUICE
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_5:
	giveitem ITEM_FRESH_WATER
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_6:
	giveitem ITEM_LEMONADE
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_7:
	giveitem ITEM_SODA_POP
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1

ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_8:
	giveitem ITEM_MOOMOO_MILK
	goto ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_1


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3_Text_0:
	.string "Sorry, our policy is one beverage per day.$"

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
