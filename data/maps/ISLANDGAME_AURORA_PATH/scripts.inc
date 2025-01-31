ISLANDGAME_AURORA_PATH_MapScripts::
# 2 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	gettime
# 6 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 6 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 13 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_8
# 14 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_9
	return

ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_6
# 9 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_7
	return


ISLANDGAME_AURORA_PATH_Interact_EntranceSign::
# 20 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	msgbox ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute::
# 24 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	msgbox ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_Swinub1::
# 28 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 29 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 30 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 31 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SWINUB, 17, ITEM_NONE, NUM_NATURES, 0
# 32 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_ENCOUNTER
# 33 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 34 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 36 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 37 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Swinub1_3
# 42 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Swinub1_4
# 44 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Swinub1_5
# 46 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Swinub1_6
# 49 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Swinub1_1:
# 51 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Swinub1_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1

ISLANDGAME_AURORA_PATH_Interact_Swinub1_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1

ISLANDGAME_AURORA_PATH_Interact_Swinub1_5:
# 45 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1

ISLANDGAME_AURORA_PATH_Interact_Swinub1_6:
# 47 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1


ISLANDGAME_AURORA_PATH_Interact_Swinub2::
# 55 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 58 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SWINUB, 17, ITEM_NONE, NUM_NATURES, 1
# 59 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_ENCOUNTER
# 60 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 61 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 63 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 64 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 66 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Swinub2_3
# 69 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Swinub2_4
# 71 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Swinub2_5
# 73 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Swinub2_6
# 76 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Swinub2_1:
# 78 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Swinub2_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1

ISLANDGAME_AURORA_PATH_Interact_Swinub2_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1

ISLANDGAME_AURORA_PATH_Interact_Swinub2_5:
# 72 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1

ISLANDGAME_AURORA_PATH_Interact_Swinub2_6:
# 74 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1


ISLANDGAME_AURORA_PATH_Interact_Swinub3::
# 82 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 83 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 84 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 85 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SWINUB, 17, ITEM_NONE, NUM_NATURES, 2
# 86 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_ENCOUNTER
# 87 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 88 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 89 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 90 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 91 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Swinub3_3
# 96 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Swinub3_4
# 98 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Swinub3_5
# 100 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Swinub3_6
# 103 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Swinub3_1:
# 105 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Swinub3_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1

ISLANDGAME_AURORA_PATH_Interact_Swinub3_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1

ISLANDGAME_AURORA_PATH_Interact_Swinub3_5:
# 99 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1

ISLANDGAME_AURORA_PATH_Interact_Swinub3_6:
# 101 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1


ISLANDGAME_AURORA_PATH_Interact_Snom1::
# 109 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 110 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 111 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 112 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SNOM, 17, ITEM_NONE, NUM_NATURES, 0
# 113 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SNOM, CRY_MODE_ENCOUNTER
# 114 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 115 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 116 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 117 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 118 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 120 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Snom1_3
# 123 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Snom1_4
# 125 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Snom1_5
# 127 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Snom1_6
# 130 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Snom1_1:
# 132 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Snom1_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1

ISLANDGAME_AURORA_PATH_Interact_Snom1_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1

ISLANDGAME_AURORA_PATH_Interact_Snom1_5:
# 126 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1

ISLANDGAME_AURORA_PATH_Interact_Snom1_6:
# 128 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1


ISLANDGAME_AURORA_PATH_Interact_Snom2::
# 136 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 137 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 138 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 139 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SNOM, 17, ITEM_NONE, NUM_NATURES, 2
# 140 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SNOM, CRY_MODE_ENCOUNTER
# 141 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 142 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 143 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 144 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 145 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 147 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Snom2_3
# 150 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Snom2_4
# 152 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Snom2_5
# 154 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Snom2_6
# 157 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Snom2_1:
# 159 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Snom2_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1

ISLANDGAME_AURORA_PATH_Interact_Snom2_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1

ISLANDGAME_AURORA_PATH_Interact_Snom2_5:
# 153 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1

ISLANDGAME_AURORA_PATH_Interact_Snom2_6:
# 155 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1


ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0:
# 20 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	.string "AURORA PATH\n"
	.string "{UP_ARROW}MT. AURORA$"

ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0:
# 24 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	.string "MT. AURORA WEATHER INSTITUTE\n"
	.string "Please visit, I'm very lonely$"
