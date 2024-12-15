ISLANDGAME_ANOMALY01_1F_MapScripts::
	.byte 0


ISLANDGAME_ANOMALY01_1F_Interact1::
# 5 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_1F_Interact1_Text_0
# 9 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
# 10 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY02_2F, 4, 5
# 12 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY01_1F_Interact2::
# 16 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	lock
# 17 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_1F_Interact2_Text_0
# 20 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
# 21 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY02_2F, 0, 7
# 23 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY01_1F_Interact1_Text_0:
# 7 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	.string "Hurry...{PAUSE 60}\n"
	.string "Leave...{PAUSE 60}$"

ISLANDGAME_ANOMALY01_1F_Interact2_Text_0:
# 18 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	.string "Dying... {PAUSE 60}Dying... {PAUSE 60}Dying...{PAUSE 60}$"
