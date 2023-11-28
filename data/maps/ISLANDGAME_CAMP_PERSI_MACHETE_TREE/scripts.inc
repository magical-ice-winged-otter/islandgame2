ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkitem ITEM_ISLANDGAME_MACHETE
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CAMP_PERSI_MACHETE_TREE_EventScript_PickupMachete::
	lock
	finditem ITEM_ISLANDGAME_MACHETE
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_Laptop::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_LaptopInspect
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_EventScript_TV::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_TVInspect
	release
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_LaptopInspect::
	.string "{COLOR RED}(It's a dusty old laptop. It looks like\n"
	.string "it's been here for years.)\p"
	.string "You tried to turn it on, but there was\n"
	.string "no power.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_TVInspect::
	.string "{COLOR RED}(It's a really old television set riddled\n"
	.string "with cobwebs.)\p"
	.string "You tried to turn it on, but there was\n"
	.string "no power.$"
