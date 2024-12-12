IslandJungle_Route1_MapScripts::
	.byte 0


IslandJungle_Route1_EntranceSign_Script::
# 6 "data/maps/IslandJungle_Route1/scripts.pory"
	lockall
# 7 "data/maps/IslandJungle_Route1/scripts.pory"
	msgbox IslandJungle_Route1_EntranceSign_Text
# 8 "data/maps/IslandJungle_Route1/scripts.pory"
	releaseall
	return


IslandJungle_Route1_EntranceSign_Text::
# 12 "data/maps/IslandJungle_Route1/scripts.pory"
	.string "Some Forest Name$"
