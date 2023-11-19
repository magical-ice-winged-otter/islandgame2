ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_Doll::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_DollText
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_DollText::
	.string "{COLOR RED}(It's a Jigglypuff plush. It's very\n"
	.string "soft.)$"
