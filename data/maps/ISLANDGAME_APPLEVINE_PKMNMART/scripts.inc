ISLANDGAME_APPLEVINE_PKMNMART_MapScripts::
# 6 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	gettime
# 9 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 13 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee::
# 21 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	lock
# 22 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	faceplayer
# 23 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_0
# 24 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	pokemart Applevine_MartItems
# 25 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_1
# 26 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	closemessage
# 27 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 30 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
Applevine_MartItems:
# 31 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 32 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 33 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 34 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_NEST_BALL
# 35 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 36 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 37 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 39 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 40 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 41 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 42 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
# 43 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 44 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 45 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_TART_APPLE
	.2byte ITEM_NONE

	.align 2
# 48 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
Applevine_Scout:
# 49 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 50 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 51 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 52 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 53 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 54 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 55 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 56 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 57 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_SNOWBALL
# 58 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_RED_CARD
# 59 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_NONE

ISLANDGAME_APPLEVINE_PKMNMART_NPC1::
# 63 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	faceplayer
# 65 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_0, MSGBOX_YESNO
# 68 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNMART_NPC1_2
# 78 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_3
ISLANDGAME_APPLEVINE_PKMNMART_NPC1_1:
# 82 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	closemessage
# 83 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_2:
# 69 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_1
# 72 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	pokemart Applevine_Scout
# 73 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_2
	goto ISLANDGAME_APPLEVINE_PKMNMART_NPC1_1


ISLANDGAME_APPLEVINE_PKMNMART_BINGCHILING::
# 87 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	lock
# 88 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	faceplayer
# 89 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	playmoncry SPECIES_VANILLITE, CRY_MODE_NORMAL
# 90 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_BINGCHILING_Text_0
# 93 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	closemessage
# 94 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_PKMNMART_NPC2::
# 99 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	faceplayer
# 101 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC2_Text_0
# 104 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	closemessage
# 105 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_0:
# 23 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "Welcome! What would you like to buy?$"

ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_1:
# 25 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "Have a nice rest of your day!$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_0:
# 66 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "Yooo, tryna buy some product from a\n"
	.string "strugglin' Braviary Scout?$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_1:
# 70 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "Word. Wutchu want?$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_2:
# 74 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "I'm always here for you, broski.$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_3:
# 79 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "That's cold, brah.$"

ISLANDGAME_APPLEVINE_PKMNMART_BINGCHILING_Text_0:
# 91 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(Looks like Vanillite is chilling. Bing\n"
	.string "Chilling, one could say.)$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC2_Text_0:
# 102 "data/maps/ISLANDGAME_APPLEVINE_PKMNMART/scripts.pory"
	.string "Seems kind of counterproductive for\n"
	.string "this place to be selling apples...$"
