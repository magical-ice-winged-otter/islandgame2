ISLANDGAME_CHERIPORT_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_TOWN1_EventScript_Guy1Talk::
	lock
	faceplayer
	msgbox Guy1Talk_Text
	release
	return


Guy1Talk_Text::
	.string "{COLOR DARK_GRAY}Hello couch is very cool.$"
