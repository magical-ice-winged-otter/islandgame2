ISLANDGAME_SS_RAIN_BASEMENT_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom::
# 4 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 7 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ROTOM, 25, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0
# 8 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 9 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	waitmoncry
# 10 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 11 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	dowildbattle
# 12 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 13 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_3
# 18 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_4
# 20 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_5
# 22 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_6
# 26 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	setflag FLAG_SS_RAIN_ROTOM_DEFEATED
# 27 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1:
# 29 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	release
	return

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_3:
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_4:
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_5:
# 21 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_6:
# 23 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	setflag FLAG_SS_RAIN_ROTOM_DEFEATED
# 24 "data/maps/ISLANDGAME_SS_RAIN_BASEMENT/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

