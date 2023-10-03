ISLANDGAME_CHERIPORT_PKMNMART_MapScripts::
	.byte 0


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


ISLAND_GAME_CHERIPORT_PKMNMART_NPC1_TALK::
	.string "{COLOR DARK_GRAY}Man, where's all the energy drinks? How\n"
	.string "am I supposed to grind without one?$"

ISLAND_GAME_CHERIPORT_PKMNMART_NPC2_TALK::
	.string "{COLOR DARK_GRAY}Oh dear, everything here is so\n"
	.string "expensive...$"
