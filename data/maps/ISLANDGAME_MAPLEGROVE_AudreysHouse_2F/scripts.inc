ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Bed::
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Bed_Text_0
# 9 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 10 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	waitmovement 0
# 11 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WailmerDoll::
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WailmerInspect
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll::
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WooperInspect, MSGBOX_YESNO
# 31 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_2
ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_1:
# 35 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_2:
# 32 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 33 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_Text_0
	goto ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_1


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Drawer::
# 45 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 46 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_DrawerInspect
# 47 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Computer::
# 58 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 59 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_ComputerInspect
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Book::
# 71 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_BookInspect
# 73 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Gamecube::
# 83 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	lock
# 84 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_GamecubeInspect
# 85 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Bed_Text_0:
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(...This seems wrong.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_Text_0:
# 33 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "Woopa!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WailmerInspect::
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's jumbo-sized Wailmer plush. It's\n"
	.string "very squishy.)\p"
	.string "{COLOR RED}(Squish squish.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WooperInspect::
# 38 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's a Wooper doll. There's a button on\n"
	.string "it. Should I press it?)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_DrawerInspect::
# 50 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's a drawer full of Melissa's\n"
	.string "clothes.)\p"
	.string "{COLOR RED}(I should probably stop looking through\n"
	.string "it.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_ComputerInspect::
# 63 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It looks like Melissa left her computer\n"
	.string "on.)\p"
	.string "{COLOR RED}(Seems like she was watching “PokéLive\n"
	.string "Summer Splash Highlights”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_BookInspect::
# 76 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's the latest issue of “Attack on\n"
	.string "Galar”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_GamecubeInspect::
# 88 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_2F/scripts.pory"
	.string "{COLOR RED}(It's Melissa's GameCube.)$"
