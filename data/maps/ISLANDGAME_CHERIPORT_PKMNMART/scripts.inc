ISLANDGAME_CHERIPORT_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee::
	msgbox ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_0
	closemessage
	pokemart Cheriport_MartItems
	msgbox ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_1
	closemessage
	return


ISLANDGAME_CHERIPORT_PKMNMART_EventScript_NPC1::
	lock
	msgbox ISLAND_GAME_CHERIPORT_PKMNMART_NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_PKMNMART_EventScript_NPC2::
	lock
	msgbox ISLAND_GAME_CHERIPORT_PKMNMART_NPC2_TALK
	release
	return


	.align 2
Cheriport_MartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_0:
	.string "Welcome to CheriMart! How may I help\n"
	.string "you?$"

ISLANDGAME_CHERIPORT_PKMNMART_EventScript_Employee_Text_1:
	.string "Thank you for shopping with us!$"

ISLAND_GAME_CHERIPORT_PKMNMART_NPC1_TALK::
	.string "{COLOR DARK_GRAY}Man, where's all the energy drinks? How\n"
	.string "am I supposed to grind without one?$"

ISLAND_GAME_CHERIPORT_PKMNMART_NPC2_TALK::
	.string "{COLOR DARK_GRAY}Oh dear, everything here is so\n"
	.string "expensive...$"
