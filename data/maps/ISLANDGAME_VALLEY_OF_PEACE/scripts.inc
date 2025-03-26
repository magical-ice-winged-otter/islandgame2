ISLANDGAME_VALLEY_OF_PEACE_MapScripts::
# 9 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_VALLEY_OF_PEACE_STATE, 3
	goto_if_eq ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	gettime
# 15 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 15 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 34 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_2
# 35 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_6
# 36 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_7
# 37 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_9
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_9
	goto ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_3
# 17 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_5
# 20 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_VALLEY_OF_PEACE_STATE
# 21 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case 1, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 22 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_TEMP_9
# 23 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 10, 17, 25
# 24 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 25 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 31, 19, 25
# 26 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 31, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 27 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 28 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


ISLANDGAME_VALLEY_OF_PEACE_Sign::
# 46 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC1::
# 53 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0
# 57 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 58 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC2::
# 62 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0
# 66 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 67 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer1::
# 74 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_1, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1
# 81 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer2::
# 87 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_2, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1
# 94 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer3::
# 100 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_3, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1
# 107 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer4::
# 113 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_4, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1
# 122 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5::
# 128 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1
# 135 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2::
# 141 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1
# 148 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer6::
# 154 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_6, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1
# 161 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer7::
# 168 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_7, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1
# 175 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer8::
# 183 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_8, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1
# 191 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer9::
# 200 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_9, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1
# 207 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1::
# 217 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 218 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 219 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 220 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 0
# 221 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 222 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 223 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 224 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 225 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 226 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 228 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 229 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3
# 231 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4
# 233 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5
# 235 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6
# 238 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1:
# 240 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5:
# 234 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6:
# 236 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2::
# 244 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 245 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 246 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 247 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 1
# 248 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 249 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 250 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 251 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 252 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 253 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 255 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3
# 258 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4
# 260 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5
# 262 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6
# 265 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1:
# 267 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5:
# 261 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6:
# 263 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1::
# 271 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 272 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 273 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 274 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 0
# 275 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 276 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 277 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 278 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 279 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 280 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 282 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 283 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3
# 285 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4
# 287 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5
# 289 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6
# 292 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1:
# 294 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5:
# 288 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6:
# 290 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2::
# 298 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 299 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 300 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 301 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 1
# 302 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 303 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 304 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 305 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 306 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 307 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 309 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 310 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3
# 312 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4
# 314 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5
# 316 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6
# 319 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1:
# 321 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5:
# 315 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6:
# 317 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1


# 325 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1:
# 326 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_up
# 327 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 328 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_4
# 329 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_right
# 330 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 331 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 332 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_left
# 333 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 334 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 335 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
# 336 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 337 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_right
# 338 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 339 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 340 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_up
# 341 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 342 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	step_end

# 345 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement1:
# 346 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 346 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 347 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_up
# 348 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 348 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 348 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 349 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_left
# 350 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_in_place_left
# 350 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_in_place_left
	step_end

# 353 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement2:
# 354 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 355 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 355 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 355 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 356 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 356 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 357 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 357 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 357 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 357 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
	step_end

# 360 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement2:
# 361 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 361 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 362 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 363 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 363 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 363 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 364 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 364 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 365 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 365 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
	step_end

ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger::
# 370 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 371 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1
# 372 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 373 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 374 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 375 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 376 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 377 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1
# 378 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 379 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 380 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 381 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 382 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 383 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger_Text_0
# 387 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 388 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 389 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 392 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 393 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 394 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playse SE_PIN
# 395 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitse
# 396 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 20
# 403 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 404 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 405 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 406 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 407 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 408 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement2
# 409 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 410 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 10
# 412 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 1
# 413 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 10
# 417 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_TEMP_9
# 418 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 10, 17, 25
# 419 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 420 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 31, 19, 25
# 421 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 31, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 422 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 423 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


ISLANDGAME_VALLEY_OF_PEACE_CuboneInteract::
# 429 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 430 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 431 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 432 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


# 435 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement3:
# 436 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock_facing_direction
# 437 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_right
# 438 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	unlock_facing_direction
	step_end

# 441 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement4:
# 442 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 443 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_2_down
# 444 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 445 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 445 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 446 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 446 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 446 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
	step_end

# 449 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement1:
# 450 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 450 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 451 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 451 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 451 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 452 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 452 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 452 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 453 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 453 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 453 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 453 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 454 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
	step_end

# 457 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement2:
# 458 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_right
# 459 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
	step_end

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract::
# 463 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 464 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 465 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 466 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_NO_CATCHING
# 467 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_NO_RUNNING
# 468 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_GENGAR, 45, ITEM_SITRUS_BERRY, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_SLUDGE_WAVE, MOVE_DREAM_EATER
# 469 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setwilddoubleflag
# 470 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
# 471 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 472 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 473 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 474 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 475 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 477 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 478 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 479 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3
# 481 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3
# 483 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_4
ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1:
# 561 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3:
	goto ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_4:
# 484 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 485 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_0x8000, 18
# 486 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_0x8001, 25
# 487 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	callnative TeleportCamera
# 488 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 18, 25
# 489 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 490 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, Common_Movement_FaceLeft
# 491 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 492 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 494 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 495 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 496 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 497 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playse SE_M_STRENGTH
# 498 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitse
# 499 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, ISLANDGAME_VALLEY_OF_PEACE_GengarMovement3
# 500 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_WEAK
# 501 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 502 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 503 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 504 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 505 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, ISLANDGAME_VALLEY_OF_PEACE_GengarMovement4
# 506 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 507 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 31
# 509 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 510 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 511 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 512 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 513 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 514 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 515 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_0
# 518 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 520 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 521 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 20
# 522 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_1
# 526 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 529 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	addobject 32
# 530 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxy 32, 24, 19
# 535 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 32, ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement1
# 536 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 537 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 538 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 539 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 540 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 541 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 32
# 542 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_2
# 546 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 547 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 548 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 549 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 32, ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement2
# 550 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 551 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_3
# 554 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	warp MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME, 5, 5
# 555 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 2
# 556 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	goto ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1


ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0:
# 47 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "VALLEY OF PEACE\n"
	.string "May the departed find tranquility$"

ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0:
# 55 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "{COLOR RED}(He's mourning the loss of his wife it\n"
	.string "seems. I should leave him be.)$"

ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0:
# 64 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "My darling Clefable...{PAUSE 30} Sometimes I still\n"
	.string "see your shadows around the valley.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0:
# 76 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This valley exudes a powerful aura... Do\n"
	.string "not interrupt my aura farming!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1:
# 79 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "No... my precious aura...!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2:
# 82 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "You IMBECILE! How am I to impress the\n"
	.string "ladies without the power of the aura!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0:
# 89 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Knowledge is power, and I know a lot.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1:
# 92 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Even in defeat, my knowledge increases!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2:
# 95 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Every loss is an opportunity to learn.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0:
# 102 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Have you also come here to pay\n"
	.string "respects to your fallen comrades?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1:
# 105 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This battle was for you, Aquilla.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2:
# 108 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aquilla was the name of my Staraptor. I\n"
	.string "bet she's flying in the heavens now.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0:
# 115 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Yoooo chat, y'all won't believe what I\n"
	.string "found in the woods!\p"
	.string "AN UN-ALIVED TRAINER!!!\p"
	.string "Huh? Outta my way! Can't you see I'm\n"
	.string "tryna record a video!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1:
# 120 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Bro! Relax! It's not that serious! It's\n"
	.string "just a Pokémon battle!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2:
# 123 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "S-Shut up, chat! Stop spamming that I\n"
	.string "got destroyed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0:
# 130 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "We're here to honor our ol' Miltank for\n"
	.string "providin' milk to our family fer decades.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1:
# 133 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heh... yer as tough of a fighter as she\n"
	.string "was.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2:
# 136 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Remember to cherish the time you spend\n"
	.string "with yer Pokémon. You never know when\l"
	.string "that time will end.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0:
# 143 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I miss our Miltank already... Maybe a\n"
	.string "battle will get my mind off her...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1:
# 146 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "-sniff-\n"
	.string "Well now I just feel even worse...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2:
# 149 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I've known our Miltank since I was just\n"
	.string "a wee li'l sprout... I used to ride on top\l"
	.string "o' her every day. Good times...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0:
# 156 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This is MY territory, punk! I'll teach\n"
	.string "you to come here uninvited!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1:
# 159 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Tch... you got lucky, punk!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2:
# 162 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Those jerks from the Goon Gang didn't\n"
	.string "let me join their gang 'cause my bike\l"
	.string "wasn't “hip” enough...\p"
	.string "W-Well, I'll show those Gooners! I'll\n"
	.string "just start my own gang, one where ALL\l"
	.string "bikes are allowed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0:
# 170 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heehee... do you see something unique\n"
	.string "about my adorable little ceramics?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1:
# 173 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Mhm! They're both a hundred percent\n"
	.string "authentic!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2:
# 176 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Despite the similarities between\n"
	.string "Sinistea and Poltchageist, they are\l"
	.string "actually completely different species!\p"
	.string "Both of these species also have a\n"
	.string "“fake” and “authentic” form, depending\l"
	.string "on if they have a special seal or not!\p"
	.string "And that's not the only thing special\n"
	.string "about authentic ones...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0:
# 185 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Young trainer-san! I have brought\n"
	.string "great dishonor to my Pokémon!\p"
	.string "Please! Face me in a duel so that I may\n"
	.string "claim redemption!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1:
# 189 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "A shameful performance...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2:
# 192 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I am no longer worthy to wield Pokémon...\p"
	.string "I am sorry, my Gallade. Your master has\n"
	.string "failed you, just like he has failed his\l"
	.string "Bisharp.\p"
	.string "It is time for you to seek a new master.\n"
	.string "One with the strength to protect you.\p"
	.string "Those scoundrels... I will never forgive\n"
	.string "them!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0:
# 202 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aiiiiiiiiiiiiiiiie!{PAUSE 30}\n"
	.string "A g-g-g-g-g-g-g-g-g-GHOOOOOOST!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1:
# 205 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Zoinks!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2:
# 208 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Like, you just totally scared the pants\n"
	.string "off of me, man!$"

ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger_Text_0:
# 384 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu... {COLOR BLUE}(Mama... Where is Mama...?)\p"
	.string "{COLOR DARK_GRAY}Cuu.... {COLOR BLUE}(Cubone want Mama... Scary\n"
	.string "without Mama...)$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_0:
# 516 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu... {COLOR BLUE}(Hooman... save Cubone?)$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_1:
# 523 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu...{COLOR BLUE} (Cubone thank hooman. Thought\n"
	.string "was like scary ones who took Mama...)\p"
	.string "{COLOR DARK_GRAY}Ah! You found him!$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_2:
# 543 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "It's dangerous to run off in the night\n"
	.string "by yourself like that!\p"
	.string "You could've gotten hurt, or even\n"
	.string "worse...!$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_3:
# 552 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Thank you for helping us find Cubone,\n"
	.string "trainer! Why don't you spend the night\l"
	.string "at our foster home? Don't worry, we've\l"
	.string "got human food and beds too!$"
