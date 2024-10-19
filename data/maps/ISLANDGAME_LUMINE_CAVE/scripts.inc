ISLANDGAME_LUMINE_CAVE_MapScripts::
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_1, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_1, ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setmetatile 44, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setmetatile 8, 16, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	return


ISLANDGAME_LUMINE_CAVE_Scout::
# 15 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	faceplayer
# 17 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_SHELL_BELL_RECEIVED, ISLANDGAME_LUMINE_CAVE_Scout_2
ISLANDGAME_LUMINE_CAVE_Scout_1:
# 27 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 4
# 28 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_LUMINE_CAVE_Scout_5
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_4
ISLANDGAME_LUMINE_CAVE_Scout_4:
# 57 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
ShellBellScout_End:
# 58 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_Scout_2:
# 18 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_0
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	goto ShellBellScout_End
	goto ISLANDGAME_LUMINE_CAVE_Scout_1

ISLANDGAME_LUMINE_CAVE_Scout_5:
# 29 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 4
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_LUMINE_CAVE_Scout_8
	goto ISLANDGAME_LUMINE_CAVE_Scout_4

ISLANDGAME_LUMINE_CAVE_Scout_8:
# 31 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_1, MSGBOX_YESNO
# 34 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_Scout_10
# 44 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_3
	goto ISLANDGAME_LUMINE_CAVE_Scout_4

ISLANDGAME_LUMINE_CAVE_Scout_10:
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Scout_Text_2
# 38 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SHELL_BELL_RECEIVED
	goto ISLANDGAME_LUMINE_CAVE_Scout_4


ISLANDGAME_LUMINE_CAVE_Salt::
# 63 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_1, ISLANDGAME_LUMINE_CAVE_Salt_2
# 71 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Salt_Text_0
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_Salt_1:
# 76 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_Salt_2:
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 66 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setmetatile 44, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 67 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_1
	goto ISLANDGAME_LUMINE_CAVE_Salt_1


ISLANDGAME_LUMINE_CAVE_Shell::
# 80 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	lock
# 81 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_1, ISLANDGAME_LUMINE_CAVE_Shell_2
# 88 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Shell_Text_0
# 91 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_Shell_1:
# 93 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_Shell_2:
# 82 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 83 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setmetatile 8, 16, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 84 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_1
	goto ISLANDGAME_LUMINE_CAVE_Shell_1


ISLANDGAME_LUMINE_CAVE_Trainer1::
# 98 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_1, ISLANDGAME_LUMINE_CAVE_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_Trainer1_Text_1
# 105 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_Trainer2::
# 111 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_2, ISLANDGAME_LUMINE_CAVE_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_Trainer2_Text_1
# 118 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_Scout_Text_0:
# 19 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
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
# 32 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "Wow! You found enough shells and salt!\n"
	.string "Want me to make you a Shell Bell?$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_2:
# 36 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "Hooray! It's crafting time!$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_3:
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "But... I'll never rank up to a super\n"
	.string "scout if I don't get this last badge...$"

ISLANDGAME_LUMINE_CAVE_Scout_Text_4:
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "I'm trying to get my Handy Helper badge,\n"
	.string "so I'm trying to help people out!\p"
	.string "If you bring me 4 Cave Shells and 4 Cave\n"
	.string "Salts, I'll make you a Shell Bell!$"

ISLANDGAME_LUMINE_CAVE_Salt_Text_0:
# 72 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_Shell_Text_0:
# 89 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_Trainer1_Text_0:
# 100 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "Roll out, my rocky comrades!$"

ISLANDGAME_LUMINE_CAVE_Trainer1_Text_1:
# 103 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "Nooo, my precious pebbles!$"

ISLANDGAME_LUMINE_CAVE_Trainer1_Text_2:
# 106 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "Are you also looking for a Larvitar?\n"
	.string "I've been trying to find one for hours.$"

ISLANDGAME_LUMINE_CAVE_Trainer2_Text_0:
# 113 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "READY? FIGHT!$"

ISLANDGAME_LUMINE_CAVE_Trainer2_Text_1:
# 116 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "DEFEATED...$"

ISLANDGAME_LUMINE_CAVE_Trainer2_Text_2:
# 119 "data/maps/ISLANDGAME_LUMINE_CAVE/scripts.pory"
	.string "CONTINUE...?{PAUSE 60} NO...{PAUSE 60} GAME OVER!$"
