ISLANDGAME_Southern_Oranna_Path_Cave_MapScripts::
	.byte 0


ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_ABSOL, 25, ITEM_ABSOLITE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_MEGAHORN, MOVE_ZEN_HEADBUTT
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_3
	case B_OUTCOME_RAN, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_4
	case B_OUTCOME_WON, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_5
	setflag FLAG_S_ORANNA_PATH_ABSOL_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1:
	release
	return

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_3:
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_4:
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_5:
	setflag FLAG_S_ORANNA_PATH_ABSOL_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_Southern_Oranna_Path_Cave_BattleAbsol_1

