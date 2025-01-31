ISLANDGAME_LUMINE_CAVE_B2F_MapScripts::
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_GIGALITH_DEFEATED, ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setflag FLAG_TEMP_1F
	return

ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_3, ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_3, ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setmetatile 14, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 12 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setmetatile 25, 24, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	return


ISLANDGAME_LUMINE_CAVE_B2F_Shell::
# 19 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_3, ISLANDGAME_LUMINE_CAVE_B2F_Shell_2
# 27 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B2F_Shell_Text_0
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_B2F_Shell_1:
# 32 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B2F_Shell_2:
# 21 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setmetatile 14, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	special DrawWholeMapView
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_3
	goto ISLANDGAME_LUMINE_CAVE_B2F_Shell_1


ISLANDGAME_LUMINE_CAVE_B2F_Salt::
# 36 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	lock
# 37 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_3, ISLANDGAME_LUMINE_CAVE_B2F_Salt_2
# 44 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B2F_Salt_Text_0
# 47 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_B2F_Salt_1:
# 49 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B2F_Salt_2:
# 38 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setmetatile 25, 24, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	special DrawWholeMapView
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_3
	goto ISLANDGAME_LUMINE_CAVE_B2F_Salt_1


ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract::
# 55 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 58 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 59 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_GIGALITH, 45, ITEM_ROCK_GEM, NATURE_ADAMANT, 1, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_IRON_DEFENSE, MOVE_STEALTH_ROCK
# 60 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setwilddoubleflag
# 61 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	playmoncry SPECIES_GIGALITH, CRY_MODE_ENCOUNTER
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	waitmoncry
# 63 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	dowildbattle
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 66 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_3
# 71 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_4
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	setflag FLAG_LUMINE_CAVE_GIGALITH_DEFEATED
# 75 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_1:
# 77 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_3:
	goto ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_1

ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_4:
	goto ISLANDGAME_LUMINE_CAVE_B2F_GigalithInteract_1


ISLANDGAME_LUMINE_CAVE_B2F_Shell_Text_0:
# 28 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_B2F_Salt_Text_0:
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE_B2F/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"
