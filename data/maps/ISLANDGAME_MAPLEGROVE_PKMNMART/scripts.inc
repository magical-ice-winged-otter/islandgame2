ISLANDGAME_MAPLEGROVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee::
# 4 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_0
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	closemessage
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	pokemart Maplegrove_MartItems
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_1
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	closemessage
	return


ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_NPC1::
# 13 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_NPC1Talk
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_NPC2::
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNMART_NPC2Talk
# 28 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 37 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
Maplegrove_MartItems:
# 38 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 39 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 41 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 42 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 43 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_0:
# 4 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "Welcome! How may I help you?$"

ISLANDGAME_MAPLEGROVE_PKMNMART_EventScript_Employee_Text_1:
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "Thank you for shopping with us!$"

ISLANDGAME_MAPLEGROVE_PKMNMART_NPC1Talk::
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "{COLOR DARK_GRAY}Achoooo!{PAUSE 60} -sniff-{PAUSE 60} Oops, sorry.{PAUSE 30} I didn't\n"
	.string "mean to sneeze all over you.$"

ISLANDGAME_MAPLEGROVE_PKMNMART_NPC2Talk::
# 31 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNMART/scripts.pory"
	.string "{COLOR RED}(It seems like this Audino is actually\n"
	.string "an employee at the shop.)$"
