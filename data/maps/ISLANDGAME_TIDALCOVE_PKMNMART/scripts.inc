ISLANDGAME_TIDALCOVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1::
# 4 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0
# 7 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins::
# 11 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 12 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins_Text_0, MSGBOX_SIGN
# 13 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks::
# 17 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks_Text_0, MSGBOX_SIGN
# 19 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General::
# 23 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General_Text_0, MSGBOX_SIGN
# 25 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee::
# 29 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	faceplayer
# 31 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0
# 32 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	pokemart Tidalcove_MartItems
# 33 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1
# 34 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	closemessage
# 35 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 38 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
Tidalcove_MartItems:
# 39 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 41 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 42 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 43 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_SODA_POP
# 44 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 45 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 46 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 47 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 48 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 49 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
# 50 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_HP_UP
# 51 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_PROTEIN
# 52 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_IRON
# 53 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_CALCIUM
# 54 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_ZINC
# 55 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_CARBOS
# 56 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0:
# 6 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "I liked this store before it became\n"
	.string "affiliated with Ruka.\p"
	.string "Now everything's marked up at a\n"
	.string "whopping two-hundred percent.$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Vitamins_Text_0:
# 12 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(There's rows upon rows of exorbitantly\n"
	.string "priced vitamins.)\p"
	.string "(They all claim that taking them will\n"
	.string "make you look like Ruka.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Drinks_Text_0:
# 18 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(Half of the drinks here have a photo of\n"
	.string "Ruka on them in a swimsuit.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_General_Text_0:
# 24 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(Almost all of these goods have Ruka on\n"
	.string "them.)$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0:
# 31 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "Welcome to Rukalicious, the official\n"
	.string "shop for all your Ruka-related goods!$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1:
# 33 "data/maps/ISLANDGAME_TIDALCOVE_PKMNMART/scripts.pory"
	.string "Have a Rukalicious rest of your day!$"
