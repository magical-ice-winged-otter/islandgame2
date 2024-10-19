ISLANDGAME_BELLEHAVEN_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee::
# 4 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_0
# 7 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	pokemart Bellehaven_MartItems
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_1
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	closemessage
# 10 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 13 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
Bellehaven_MartItems:
# 14 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 15 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 16 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 17 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_NEST_BALL
# 18 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 24 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 25 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 28 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_TART_APPLE
	.2byte ITEM_NONE

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_0:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.string "Welcome! What would you like to buy?$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_1:
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.string "Have a nice rest of your day!$"
