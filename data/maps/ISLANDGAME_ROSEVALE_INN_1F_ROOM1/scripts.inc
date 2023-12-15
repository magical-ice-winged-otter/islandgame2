ISLANDGAME_ROSEVALE_INN_1F_ROOM1_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_INN_1F_ROOM1_NPC::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_INN_1F_ROOM1_NPC_Text_0
	release
	return


ISLANDGAME_ROSEVALE_INN_1F_ROOM1_NPC_Text_0:
	.string "This place is a complete dump. Where is\n"
	.string "the room service? The free wifi?\p"
	.string "Absolutely unacceptable. These\n"
	.string "peasants will be hearing from my\l"
	.string "lawyer!$"
