ISLANDGAME_BELLEHAVEN_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee::
	lock
	faceplayer
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_0
	pokemart Bellehaven_MartItems
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_1
	closemessage
	release
	return


	.align 2
Bellehaven_MartItems:
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

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_0:
	.string "Welcome! What would you like to buy?$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_1:
	.string "Have a nice rest of your day!$"
