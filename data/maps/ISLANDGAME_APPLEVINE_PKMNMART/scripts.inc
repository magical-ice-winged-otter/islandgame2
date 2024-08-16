ISLANDGAME_APPLEVINE_PKMNMART_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	return

ISLANDGAME_APPLEVINE_PKMNMART_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_3
	return


ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_0
	pokemart Applevine_MartItems
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_1
	closemessage
	release
	return


	.align 2
Applevine_MartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_NONE

	.align 2
Applevine_Scout:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_SNOWBALL
	.2byte ITEM_RED_CARD
	.2byte ITEM_NONE

ISLANDGAME_APPLEVINE_PKMNMART_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNMART_NPC1_2
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_3
ISLANDGAME_APPLEVINE_PKMNMART_NPC1_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_2:
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_1
	pokemart Applevine_Scout
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_2
	goto ISLANDGAME_APPLEVINE_PKMNMART_NPC1_1


ISLANDGAME_APPLEVINE_PKMNMART_BINGCHILING::
	lock
	faceplayer
	playmoncry SPECIES_VANILLITE, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_BINGCHILING_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_PKMNMART_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNMART_NPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_0:
	.string "Welcome! What would you like to buy?$"

ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_1:
	.string "Have a nice rest of your day!$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_0:
	.string "Yooo, tryna buy some product from a\n"
	.string "strugglin' Braviary Scout?$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_1:
	.string "Word. Wutchu want?$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_2:
	.string "I'm always here for you, broski.$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC1_Text_3:
	.string "That's cold, brah.$"

ISLANDGAME_APPLEVINE_PKMNMART_BINGCHILING_Text_0:
	.string "{COLOR RED}(Looks like Vanillite is chilling. Bing\n"
	.string "Chilling, one could say.)$"

ISLANDGAME_APPLEVINE_PKMNMART_NPC2_Text_0:
	.string "Seems kind of counterproductive for\n"
	.string "this place to be selling apples...$"
