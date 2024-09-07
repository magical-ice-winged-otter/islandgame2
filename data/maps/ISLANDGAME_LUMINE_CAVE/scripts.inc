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
	goto_if_set FLAG_LUMINE_CAVE_SHELL_BELL_RECEIVED, ISLANDGAME_LUMINE_CAVE_Scout_2
ISLANDGAME_LUMINE_CAVE_Scout_1:
	checkitem ITEM_SHOAL_SHELL, 4
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_LUMINE_CAVE_Scout_5
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_4
ISLANDGAME_LUMINE_CAVE_Scout_4:
ShellBellScout_End:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_Scout_2:
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_0
	goto ShellBellScout_End
	goto ISLANDGAME_LUMINE_CAVE_Scout_1

ISLANDGAME_LUMINE_CAVE_Scout_5:
	checkitem ITEM_SHOAL_SALT, 4
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_LUMINE_CAVE_Scout_8
	goto ISLANDGAME_LUMINE_CAVE_Scout_4

ISLANDGAME_LUMINE_CAVE_Scout_8:
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_Scout_10
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_3
	goto ISLANDGAME_LUMINE_CAVE_Scout_4

ISLANDGAME_LUMINE_CAVE_Scout_10:
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_2
	removeitem ITEM_SHOAL_SALT, 4
	removeitem ITEM_SHOAL_SHELL, 4
	giveitem ITEM_SHELL_BELL
	setflag FLAG_LUMINE_CAVE_SHELL_BELL_RECEIVED
	goto ISLANDGAME_LUMINE_CAVE_Scout_4


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
	.string "That's the last badge I needed to\n"
	.string "promote to a super scout!\p"
	.string "Now... what should I get with my newly\n"
	.string "earned scout credit...\p"
	.string "I could spend it on the stuffed Wooper,\n"
	.string "or on the mystery box...\p"
	.string "A stuffed Wooper is a stuffed Wooper,\n"
	.string "but the mystery box could be anything!\p"
	.string "It could even be a stuffed Wooper! I've\n"
	.string "always wanted one of those!$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_1:
	.string "Wow! You found enough shells and salt!\n"
	.string "Want me to make you a Shell Bell?$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_2:
	.string "Hooray! It's crafting time!$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_3:
	.string "But... I'll never rank up to a super\n"
	.string "scout if I don't get this last badge...$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_4:
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
