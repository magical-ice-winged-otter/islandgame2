ISLANDGAME_LUMINE_CAVE_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_HIDDEN_ITEM_LUMINE_CAVE_SALT_1, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_set FLAG_HIDDEN_ITEM_LUMINE_CAVE_SHELL_1, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 44, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	setmetatile 8, 16, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	return


ISLANDGAME_LUMINE_CAVE_Scout::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_Salt::
	lock
	goto_if_unset FLAG_HIDDEN_ITEM_LUMINE_CAVE_SALT_1, ISLANDGAME_LUMINE_CAVE_Salt_2
	msgbox ISLANDGAME_LUMINE_CAVE_Salt_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_Salt_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_Salt_2:
	giveitem ITEM_SHOAL_SALT
	setmetatile 44, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_HIDDEN_ITEM_LUMINE_CAVE_SALT_1
	goto ISLANDGAME_LUMINE_CAVE_Salt_1


ISLANDGAME_LUMINE_CAVE_Shell::
	lock
	goto_if_unset FLAG_HIDDEN_ITEM_LUMINE_CAVE_SHELL_1, ISLANDGAME_LUMINE_CAVE_Shell_2
	msgbox ISLANDGAME_LUMINE_CAVE_Shell_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_Shell_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_Shell_2:
	giveitem ITEM_SHOAL_SALT
	setmetatile 8, 16, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_HIDDEN_ITEM_LUMINE_CAVE_SHELL_1
	goto ISLANDGAME_LUMINE_CAVE_Shell_1


ISLANDGAME_LUMINE_CAVE_Trainer1::
	return


ISLANDGAME_LUMINE_CAVE_Trainer2::
	return


ISLANDGAME_LUMINE_CAVE_Scout_Text_0:
	.string "Hi! I'm trying to make a Shell Bell, but I\n"
	.string "need Salts and Shells!\p"
	.string "If you find some, can you let me know?{PAUSE 60}\n"
	.string "If you bring me 4 Shells and 4 Salts, I\l"
	.string "can make a Shell Bell for both of us!$"

ISLANDGAME_LUMINE_CAVE_Salt_Text_0:
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_Shell_Text_0:
	.string "{COLOR RED}(No shells here.)$"
