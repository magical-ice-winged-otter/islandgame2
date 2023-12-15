ISLANDGAME_ROSEVALE_INN_1F_ROOM2_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_INN_1F_ROOM1_RED::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_INN_1F_ROOM1_RED_Text_0
	release
	return


ISLANDGAME_ROSEVALE_INN_1F_ROOM1_Pikachu::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox ISLANDGAME_ROSEVALE_INN_1F_ROOM1_Pikachu_Text_0
	release
	return


ISLANDGAME_ROSEVALE_INN_1F_ROOM1_RED_Text_0:
	.string "...$"

ISLANDGAME_ROSEVALE_INN_1F_ROOM1_Pikachu_Text_0:
	.string "Pika!$"
