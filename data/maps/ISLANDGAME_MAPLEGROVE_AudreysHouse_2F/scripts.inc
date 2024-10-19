ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WailmerDoll::
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WailmerInspect
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll::
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WooperInspect, MSGBOX_YESNO
# 21 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_2
ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_1:
# 25 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_2:
# 22 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_Text_0
	goto ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_1


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Drawer::
# 35 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_DrawerInspect
# 37 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Computer::
# 48 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 49 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_ComputerInspect
# 50 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Book::
# 61 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 62 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_BookInspect
# 63 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Gamecube::
# 73 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 74 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_GamecubeInspect
# 75 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_Text_0:
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "Woopa!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WailmerInspect::
# 10 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's jumbo-sized Wailmer plush. It's\n"
	.string "very squishy.)\p"
	.string "{COLOR RED}(Squish squish.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WooperInspect::
# 28 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's a Wooper doll. There's a button on\n"
	.string "it. Should I press it?)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_DrawerInspect::
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's a drawer full of Melissa's\n"
	.string "clothes.)\p"
	.string "{COLOR RED}(I should probably stop looking through\n"
	.string "it.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_ComputerInspect::
# 53 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It looks like Melissa left her computer\n"
	.string "on.)\p"
	.string "{COLOR RED}(Seems like she was watching “PokéLive\n"
	.string "Summer Splash Highlights”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_BookInspect::
# 66 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's the latest issue of “Attack on\n"
	.string "Galar”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_GamecubeInspect::
# 78 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's Melissa's GameCube.)$"
