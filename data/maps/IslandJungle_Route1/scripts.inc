IslandJungle_Route1_MapScripts::
	.byte 0


IslandJungle_Route1_EntranceSign_Script::
	lockall
	msgbox IslandJungle_Route1_EntranceSign_Script_Text_0
	releaseall
	return


IslandJungle_Route1_EntranceSign_Script_Text_0:
	.string "Hello World$"
