ISLANDGAME_APPLEVINE_PKMNMART_MapScripts::
	.byte 0


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
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_0:
	.string "Welcome to the Applevine PokeMart!$"

ISLANDGAME_APPLEVINE_PKMNMART_Interact_Employee_Text_1:
	.string "Have a good day!$"
