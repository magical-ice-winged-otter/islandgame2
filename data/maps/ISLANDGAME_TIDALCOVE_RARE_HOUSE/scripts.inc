ISLANDGAME_TIDALCOVE_RARE_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Stone::
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Stone_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector::
	lock
	faceplayer
	compare VAR_TIDALCOVE_STATE, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1
	compare VAR_TIDALCOVE_STATE, 1
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_2
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_10
	closemessage
	return

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1:
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_0
	closemessage
	setvar VAR_0x8000, SPECIES_EEVEE
	callnative CheckPartyMon
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_7
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_6:
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_2, 211
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_3, 212
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_4, 213
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_5, 214
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_6, 215
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_7, 0
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
	switch VAR_RESULT
	case 211, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_18
	case 212, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19
	case 213, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_20
	case 214, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_21
	case 215, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_22
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16:
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_26
	setvar VAR_TIDALCOVE_STATE, 2
	return

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_2:
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_9
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_2, 211
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_3, 212
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_4, 213
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_5, 214
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_6, 215
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_7, 0
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
	switch VAR_RESULT
	case 211, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11
	case 212, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_12
	case 213, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_13
	case 214, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_14
	case 215, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_15
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_9:
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_23
	setvar VAR_TIDALCOVE_STATE, 2
	return

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_7:
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay32
	waitmovement 0
	setvar VAR_TIDALCOVE_STATE, 1
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_1
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_6

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11:
	giveitem ITEM_FIRE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_9

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_12:
	giveitem ITEM_WATER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_9

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_13:
	giveitem ITEM_THUNDER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_9

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_14:
	giveitem ITEM_LEAF_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_9

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_15:
	giveitem ITEM_ICE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_9

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_18:
	giveitem ITEM_FIRE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19:
	giveitem ITEM_WATER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_20:
	giveitem ITEM_THUNDER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_21:
	giveitem ITEM_LEAF_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_22:
	giveitem ITEM_ICE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_23:
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_8
	closemessage
	return

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_26:
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_8
	closemessage
	return


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Stone_Text_0:
	.string "{COLOR RED}(It's a giant rock. Wow. A rock that is\n"
	.string "giant.)$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_0:
	.string "Years ago, I came to the Maryan Isles in\n"
	.string "search of a particular rare Pokémon.\p"
	.string "But alas, all I could find during my\n"
	.string "ventures were these rare stones.\p"
	.string "If only I could catch a glimpse of an\n"
	.string "{COLOR LIGHT_GRAY}Eevee{COLOR DARK_GRAY}. I'm convinced there aren't any\l"
	.string "left in the wild anymore...$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_1:
	.string "Oh! Y-You have one!? P-Please, may I\n"
	.string "take a closer look at it?\p"
	.string "Ooh... What a majestic specimen indeed!\n"
	.string "And just when I thought I would never\l"
	.string "see a real one in my lifetime!\p"
	.string "Thank you, young trainer. Here, take one\n"
	.string "of my rare stones as a token of my\l"
	.string "appreciation! Choose wisely!$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_2:
	.string "Fire Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_3:
	.string "Water Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_4:
	.string "Thunder Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_5:
	.string "Leaf Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_6:
	.string "Ice Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_7:
	.string "I'll decide later!$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_8:
	.string "Alright. Just let me know when you would\n"
	.string "like your rare stone!$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_9:
	.string "Welcome back! Have you decided which of\n"
	.string "my rare stones you want?$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_10:
	.string "Ah... if only I had an Eevee of my own.$"
