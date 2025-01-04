ISLANDGAME_Southern_Oranna_Path_Cave_MapScripts::
# 2 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_Southern_Oranna_Path_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_Southern_Oranna_Path_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	goto_if_set FLAG_S_ORANNA_PATH_ABSOL_DEFEATED, ISLANDGAME_Southern_Oranna_Path_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	setflag FLAG_ITEM_SORANNA_PATH_ABSOLITE
	return

ISLANDGAME_Southern_Oranna_Path_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol::
# 13 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 16 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ABSOL, 25, ITEM_NONE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_MEGAHORN, MOVE_ZEN_HEADBUTT
# 17 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
# 18 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	waitmoncry
# 19 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 20 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	dowildbattle
# 21 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 22 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_3
# 27 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_4
# 29 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_5
# 31 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_6
# 37 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	setflag FLAG_S_ORANNA_PATH_ABSOL_DEFEATED
# 38 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	clearflag FLAG_ITEM_SORANNA_PATH_ABSOLITE
# 39 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	addobject 2
# 40 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1:
# 42 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	release
	return

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_3:
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_4:
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_5:
# 30 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_6:
# 32 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	setflag FLAG_S_ORANNA_PATH_ABSOL_DEFEATED
# 33 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	clearflag FLAG_ITEM_SORANNA_PATH_ABSOLITE
# 34 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	addobject 2
# 35 "data/maps/ISLANDGAME_Southern_Oranna_Path_Cave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

