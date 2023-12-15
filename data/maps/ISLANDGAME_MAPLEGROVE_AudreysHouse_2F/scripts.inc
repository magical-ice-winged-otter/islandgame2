ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WailmerDoll::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WailmerInspect
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WooperInspect, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_2
ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_1:
	release
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_2:
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_Text_0
	goto ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_1


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Drawer::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_DrawerInspect
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Computer::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_ComputerInspect
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Book::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_BookInspect
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_Gamecube::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_GamecubeInspect
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_EventScript_WooperDoll_Text_0:
	.string "Woopa!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WailmerInspect::
	.string "{COLOR RED}(It's jumbo-sized Wailmer plush. It's\n"
	.string "very squishy.)\p"
	.string "{COLOR RED}(Squish squish.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_WooperInspect::
	.string "{COLOR RED}(It's a Wooper doll. There's a button on\n"
	.string "it. Should I press it?)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_DrawerInspect::
	.string "{COLOR RED}(It's a drawer full of Audrey's clothes.)\p"
	.string "{COLOR RED}(I should probably stop looking through\n"
	.string "it.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_ComputerInspect::
	.string "{COLOR RED}(It looks like Audrey left her computer\n"
	.string "on.)\p"
	.string "{COLOR RED}(Seems like she was watching “PokéLive\n"
	.string "Summer Splash Highlights”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_BookInspect::
	.string "{COLOR RED}(It's the latest issue of “Attack on\n"
	.string "Galar”.)$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_2F_GamecubeInspect::
	.string "{COLOR RED}(It's Audrey's GameCube.)$"
