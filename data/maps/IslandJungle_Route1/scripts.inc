IslandJungle_Route1_MapScripts::
	.byte 0


IslandJungle_Route1_EntranceSign_Script::
	lockall
	msgbox IslandJungle_Route1_EntranceSign_Text
	releaseall
	return


IslandJungle_Route1_EntranceSign_Text::
	.string "Some Forest Name$"
