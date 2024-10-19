ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts::
# 2 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	checkitem ITEM_ISLANDGAME_MACHETE
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CAMP_PERSI_MACHETE_TREE_EventScript_PickupMachete::
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	finditem ITEM_ISLANDGAME_MACHETE
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop::
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_LaptopInspect
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV::
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_TVInspect
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_LaptopInspect::
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's a dusty old laptop. It looks like\n"
	.string "it's been here for years.)\p"
	.string "You tried to turn it on, but there was\n"
	.string "no power.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_TVInspect::
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's a really old television set riddled\n"
	.string "with cobwebs.)\p"
	.string "You tried to turn it on, but there was\n"
	.string "no power.$"
