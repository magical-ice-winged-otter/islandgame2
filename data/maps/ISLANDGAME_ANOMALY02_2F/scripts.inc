ISLANDGAME_ANOMALY02_2F_MapScripts::
	.byte 0


ISLANDGAME_ANOMALY02_2F_Interact1::
# 5 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY02_2F_Interact1_Text_0
# 9 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
# 10 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_1F, 15, 4
# 12 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY02_2F_Interact2::
# 16 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	lock
# 17 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY02_2F_Interact2_Text_0
# 20 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_WEAK
# 21 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_3F, 8, 14
# 23 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY02_2F_Interact1_Text_0:
# 7 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	.string "Turn back now...{PAUSE 60}$"

ISLANDGAME_ANOMALY02_2F_Interact2_Text_0:
# 18 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	.string "No more...{PAUSE 60}$"
