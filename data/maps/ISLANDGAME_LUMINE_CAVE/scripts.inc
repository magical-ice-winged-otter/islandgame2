ISLANDGAME_LUMINE_CAVE_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_1, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_1, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_4
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
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_1, ISLANDGAME_LUMINE_CAVE_Salt_2
	msgbox ISLANDGAME_LUMINE_CAVE_Salt_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_Salt_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_Salt_2:
	giveitem ITEM_SHOAL_SALT
	setmetatile 44, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_1
	goto ISLANDGAME_LUMINE_CAVE_Salt_1


ISLANDGAME_LUMINE_CAVE_Shell::
	lock
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_1, ISLANDGAME_LUMINE_CAVE_Shell_2
	msgbox ISLANDGAME_LUMINE_CAVE_Shell_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_Shell_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_Shell_2:
	giveitem ITEM_SHOAL_SHELL
	setmetatile 8, 16, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_1
	goto ISLANDGAME_LUMINE_CAVE_Shell_1


ISLANDGAME_LUMINE_CAVE_Trainer1::
	trainerbattle_single TRAINER_LUMINE_CAVE_1, ISLANDGAME_LUMINE_CAVE_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_Trainer1_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_Trainer2::
	trainerbattle_single TRAINER_LUMINE_CAVE_2, ISLANDGAME_LUMINE_CAVE_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_Trainer2_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_Scout_Text_0:
	.string "I'm trying to get my Handy Helper badge,\n"
	.string "so I'm trying to help people out!\p"
	.string "If you bring me 4 Cave Shells and 4 Cave\n"
	.string "Salts, I'll make you a Shell Bell!$"

ISLANDGAME_LUMINE_CAVE_Salt_Text_0:
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_Shell_Text_0:
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_Trainer1_Text_0:
	.string "Roll out, my rocky comrades!$"

ISLANDGAME_LUMINE_CAVE_Trainer1_Text_1:
	.string "Nooo, my precious pebbles!$"

ISLANDGAME_LUMINE_CAVE_Trainer1_Text_2:
	.string "Are you also looking for a Larvitar?\n"
	.string "I've been trying to find one for hours.$"

ISLANDGAME_LUMINE_CAVE_Trainer2_Text_0:
	.string "READY? FIGHT!$"

ISLANDGAME_LUMINE_CAVE_Trainer2_Text_1:
	.string "DEFEATED...$"

ISLANDGAME_LUMINE_CAVE_Trainer2_Text_2:
	.string "CONTINUE...?{PAUSE 60} NO...{PAUSE 60} GAME OVER!$"
