ISLANDGAME_AURORA_PATH_MapScripts::
# 9 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 11 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 12 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 13 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 15 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	gettime
# 18 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 18 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 25 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_8
# 26 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_9
	return

ISLANDGAME_AURORA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_5
# 20 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_6
# 21 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_TEMP_7
	return


ISLANDGAME_AURORA_PATH_Interact_EntranceSign::
# 32 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	msgbox ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute::
# 36 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	msgbox ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_Swinub1::
# 40 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 41 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 42 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 43 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SWINUB, 17, ITEM_NONE, NUM_NATURES, 0
# 44 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_ENCOUNTER
# 45 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 46 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 48 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 49 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Swinub1_3
# 54 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Swinub1_4
# 56 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Swinub1_5
# 58 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Swinub1_6
# 61 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Swinub1_1:
# 63 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Swinub1_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1

ISLANDGAME_AURORA_PATH_Interact_Swinub1_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1

ISLANDGAME_AURORA_PATH_Interact_Swinub1_5:
# 57 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1

ISLANDGAME_AURORA_PATH_Interact_Swinub1_6:
# 59 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub1_1


ISLANDGAME_AURORA_PATH_Interact_Swinub2::
# 67 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 68 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 69 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 70 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SWINUB, 17, ITEM_NONE, NUM_NATURES, 1
# 71 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_ENCOUNTER
# 72 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 73 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 74 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 75 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 76 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 78 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Swinub2_3
# 81 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Swinub2_4
# 83 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Swinub2_5
# 85 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Swinub2_6
# 88 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Swinub2_1:
# 90 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Swinub2_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1

ISLANDGAME_AURORA_PATH_Interact_Swinub2_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1

ISLANDGAME_AURORA_PATH_Interact_Swinub2_5:
# 84 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1

ISLANDGAME_AURORA_PATH_Interact_Swinub2_6:
# 86 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub2_1


ISLANDGAME_AURORA_PATH_Interact_Swinub3::
# 94 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 95 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 96 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 97 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SWINUB, 17, ITEM_NONE, NUM_NATURES, 2
# 98 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_ENCOUNTER
# 99 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 100 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 102 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 103 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Swinub3_3
# 108 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Swinub3_4
# 110 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Swinub3_5
# 112 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Swinub3_6
# 115 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Swinub3_1:
# 117 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Swinub3_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1

ISLANDGAME_AURORA_PATH_Interact_Swinub3_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1

ISLANDGAME_AURORA_PATH_Interact_Swinub3_5:
# 111 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1

ISLANDGAME_AURORA_PATH_Interact_Swinub3_6:
# 113 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Swinub3_1


ISLANDGAME_AURORA_PATH_Interact_Snom1::
# 121 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 122 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 123 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 124 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SNOM, 17, ITEM_NONE, NUM_NATURES, 0
# 125 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SNOM, CRY_MODE_ENCOUNTER
# 126 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 127 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 128 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 129 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 130 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 132 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Snom1_3
# 135 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Snom1_4
# 137 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Snom1_5
# 139 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Snom1_6
# 142 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Snom1_1:
# 144 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Snom1_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1

ISLANDGAME_AURORA_PATH_Interact_Snom1_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1

ISLANDGAME_AURORA_PATH_Interact_Snom1_5:
# 138 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1

ISLANDGAME_AURORA_PATH_Interact_Snom1_6:
# 140 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom1_1


ISLANDGAME_AURORA_PATH_Interact_Snom2::
# 148 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	lock
# 149 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	faceplayer
# 150 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 151 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_SNOM, 17, ITEM_NONE, NUM_NATURES, 2
# 152 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	playmoncry SPECIES_SNOM, CRY_MODE_ENCOUNTER
# 153 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	waitmoncry
# 154 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 155 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	dowildbattle
# 156 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 157 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 159 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_AURORA_PATH_Interact_Snom2_3
# 162 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_AURORA_PATH_Interact_Snom2_4
# 164 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_AURORA_PATH_Interact_Snom2_5
# 166 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_AURORA_PATH_Interact_Snom2_6
# 169 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_AURORA_PATH_Interact_Snom2_1:
# 171 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	release
	return

ISLANDGAME_AURORA_PATH_Interact_Snom2_3:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1

ISLANDGAME_AURORA_PATH_Interact_Snom2_4:
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1

ISLANDGAME_AURORA_PATH_Interact_Snom2_5:
# 165 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1

ISLANDGAME_AURORA_PATH_Interact_Snom2_6:
# 167 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_AURORA_PATH_Interact_Snom2_1


ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0:
# 32 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	.string "AURORA PATH\n"
	.string "{UP_ARROW}MT. AURORA$"

ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0:
# 36 "data/maps/ISLANDGAME_AURORA_PATH/scripts.pory"
	.string "MT. AURORA WEATHER INSTITUTE\n"
	.string "Please visit, I'm very lonely$"
