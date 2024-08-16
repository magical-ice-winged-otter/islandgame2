ISLANDGAME_MAPLEGROVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee::
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_0
	closemessage
	pokemart Maplegrove_MartItems
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_1
	closemessage
	return


ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_NPC1Talk
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_NPC2::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_NPC2Talk
	release
	return


	.align 2
Maplegrove_MartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_0:
	.string "Welcome! How may I help you?$"

ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_1:
	.string "Thank you for shopping with us!$"

ISLANDGAME_MAPLEGROVE_PKMNMART_NPC1Talk::
	.string "{COLOR DARK_GRAY}Achoooo!{PAUSE 60} -sniff-{PAUSE 60} Oops, sorry.{PAUSE 30} I didn't\n"
	.string "mean to sneeze all over you.$"

ISLANDGAME_MAPLEGROVE_PKMNMART_NPC2Talk::
	.string "{COLOR RED}(It seems like this Audino is actually\n"
	.string "an employee at the shop.)$"
