ISLANDGAME_TIDALCOVE_RARE_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Stone::
# 4 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Stone_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector::
# 10 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	lock
# 11 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	faceplayer
# 12 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	compare VAR_TIDALCOVE_STATE, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_2
# 64 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	compare VAR_TIDALCOVE_STATE, 1
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_3
# 96 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_11
# 99 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	closemessage
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1:
# 102 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
Tidalcove_RareStoneEnd:
# 103 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	closemessage
# 104 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_2:
# 13 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_0
# 18 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	closemessage
# 19 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_EEVEE
# 20 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	callnative CheckPartyMon
# 21 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_8
# 35 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	goto Tidalcove_RareStoneEnd
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_7:
# 37 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_2, 211
# 38 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_3, 212
# 39 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_4, 213
# 40 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_5, 214
# 41 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_6, 215
# 42 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_7, 494
# 43 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_8, 0
# 44 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 45 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 211, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_21
# 47 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 212, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_22
# 48 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 213, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_23
# 49 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 214, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_24
# 50 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 215, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_25
# 51 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 494, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_26
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19:
# 54 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_30
# 61 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	setvar VAR_TIDALCOVE_STATE, 2
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_3:
# 65 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_10
# 68 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_2, 211
# 69 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_3, 212
# 70 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_4, 213
# 71 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_5, 214
# 72 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_6, 215
# 73 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_7, 494
# 74 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_8, 0
# 75 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 76 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	switch VAR_RESULT
# 77 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 211, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_13
# 78 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 212, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_14
# 79 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 213, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_15
# 80 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 214, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16
# 81 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 215, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_17
# 82 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	case 494, ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_18
ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11:
# 85 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_27
# 92 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	setvar VAR_TIDALCOVE_STATE, 2
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_8:
# 22 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	playse SE_PIN
# 23 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 24 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	waitmovement 0
# 25 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay32
# 26 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	waitmovement 0
# 27 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	setvar VAR_TIDALCOVE_STATE, 1
# 28 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_1
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_7

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_13:
# 77 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_FIRE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_14:
# 78 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_WATER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_15:
# 79 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_THUNDER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_16:
# 80 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_LEAF_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_17:
# 81 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_ICE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_18:
# 82 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_EVIOLITE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_11

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_21:
# 46 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_FIRE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_22:
# 47 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_WATER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_23:
# 48 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_THUNDER_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_24:
# 49 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_LEAF_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_25:
# 50 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_ICE_STONE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_26:
# 51 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	giveitem ITEM_EVIOLITE
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_19

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_27:
# 86 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_9
# 89 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	closemessage
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_30:
# 55 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_9
# 58 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	closemessage
	goto ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_1


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Stone_Text_0:
# 5 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "{COLOR RED}(It's a giant rock. Wow. A rock that is\n"
	.string "giant.)$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_0:
# 14 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Years ago, I came to the Maryan Isles in\n"
	.string "search of a particular rare Pokémon.\p"
	.string "But alas, all I could find during my\n"
	.string "ventures were these rare stones.\p"
	.string "If only I could catch a glimpse of an\n"
	.string "Eevee. I'm convinced there aren't any\l"
	.string "left in the wild anymore...$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_1:
# 29 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Oh! Y-You have one!? P-Please, may I\n"
	.string "take a closer look at it?\p"
	.string "Ooh... What a majestic specimen indeed!\n"
	.string "And just when I thought I would never\l"
	.string "see a real one in my lifetime!\p"
	.string "Thank you, young trainer. Here, take one\n"
	.string "of my rare stones as a token of my\l"
	.string "appreciation! Choose wisely!$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_2:
# 37 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Fire Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_3:
# 38 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Water Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_4:
# 39 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Thunder Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_5:
# 40 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Leaf Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_6:
# 41 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Ice Stone$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_7:
# 42 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Eeveeolite$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_8:
# 43 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "I'll decide later!$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_9:
# 56 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Alright. Just let me know when you would\n"
	.string "like your rare stone!$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_10:
# 66 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Welcome back! Have you decided which of\n"
	.string "my rare stones you want?$"

ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_11:
# 97 "data/maps/ISLANDGAME_TIDALCOVE_RARE_HOUSE/scripts.pory"
	.string "Ah... if only I had an Eevee of my own.$"
