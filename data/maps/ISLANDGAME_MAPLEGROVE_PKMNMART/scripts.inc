ISLANDGAME_MAPLEGROVE_PKMNMART_MapScripts::
	.byte 0


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


ISLANDGAME_MAPLEGROVE_PKMNMART_NPC1Talk::
	.string "{COLOR DARK_GRAY}Achoooo! -sniff- Oops, sorry. I didn't\n"
	.string "mean to sneeze all over you.$"

ISLANDGAME_MAPLEGROVE_PKMNMART_NPC2Talk::
	.string "{COLOR RED}(It seems like this Audino is actually\n"
	.string "an employee at the shop.)\p"
	.string "{COLOR RED}(It's diligently restocking the shelves.\n"
	.string "I should just let it do its job.)$"
