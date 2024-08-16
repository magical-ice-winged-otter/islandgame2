ISLANDGAME_TIDALCOVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins::
	lock
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins_Text_0, MSGBOX_SIGN
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks::
	lock
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks_Text_0, MSGBOX_SIGN
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General::
	lock
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General_Text_0, MSGBOX_SIGN
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0
	pokemart Tidalcove_MartItems
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1
	closemessage
	release
	return


	.align 2
Tidalcove_MartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_AWAKENING
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0:
	.string "I liked this store before it became\n"
	.string "affiliated with Ruka.\p"
	.string "Now everything's marked up at a\n"
	.string "whopping two-hundred percent.$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins_Text_0:
	.string "{COLOR RED}(There's rows upon rows of exorbitantly\n"
	.string "priced vitamins.)\p"
	.string "(They all claim that taking them will\n"
	.string "make you look like Ruka.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks_Text_0:
	.string "{COLOR RED}(Half of the drinks here have a photo of\n"
	.string "Ruka on them in a swimsuit.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General_Text_0:
	.string "{COLOR RED}(Almost all of these goods have Ruka on\n"
	.string "them.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0:
	.string "Welcome to Rukalicious, the official\n"
	.string "shop for all your Ruka-related goods!$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1:
	.string "Have a Rukalicious rest of your day!$"
