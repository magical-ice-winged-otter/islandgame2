ISLANDGAME_SS_RAIN_BASEMENT_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_ROTOM, 25, 0, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_3
	case B_OUTCOME_RAN, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_4
	case B_OUTCOME_WON, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_6
	setflag FLAG_SS_RAIN_ROTOM_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1:
	release
	return

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_3:
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_4:
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_5:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_6:
	setflag FLAG_SS_RAIN_ROTOM_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_SS_RAIN_BASEMENT_BattleRotom_1

