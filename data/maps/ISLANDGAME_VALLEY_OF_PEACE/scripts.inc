ISLANDGAME_VALLEY_OF_PEACE_MapScripts::
# 15 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_VALLEY_OF_PEACE_STATE, 3
	goto_if_eq ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto_if_set FLAG_VALLEY_OF_PEACE_PRIMROSE, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 26 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectaswildencounter 33, ENCOUNTER_LAND
# 27 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectaswildencounter 34, ENCOUNTER_LAND
# 28 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectaswildencounter 35, ENCOUNTER_LAND
# 29 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectaswildencounter 36, ENCOUNTER_LAND
# 31 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	gettime
# 33 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 33 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 54 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_2
# 55 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_6
# 56 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_7
# 57 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_9
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_9
	goto ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_1A
# 22 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 34 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_3
# 35 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_4
# 36 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_5
# 37 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_1A
# 38 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 40 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_VALLEY_OF_PEACE_STATE
# 41 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case 1, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 42 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_TEMP_9
# 43 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 10, 17, 25
# 44 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 45 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 31, 19, 25
# 46 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 31, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 47 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 48 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


ISLANDGAME_VALLEY_OF_PEACE_Sign::
# 66 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC1::
# 76 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 77 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0
# 80 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 81 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC2::
# 85 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 86 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0
# 89 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 90 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer1::
# 110 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_1, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1
# 117 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer2::
# 123 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_2, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1
# 130 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer3::
# 136 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_3, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1
# 143 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer4::
# 149 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_4, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1
# 158 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5::
# 164 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1
# 171 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2::
# 177 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1
# 184 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer6::
# 190 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_6, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1
# 197 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer7::
# 204 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_7, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1
# 211 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer8::
# 219 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_8, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1
# 227 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer9::
# 236 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_9, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1
# 243 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1::
# 268 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 269 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 270 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 271 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 0
# 272 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 273 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 274 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 275 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 276 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 277 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 279 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 280 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3
# 282 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4
# 284 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5
# 286 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6
# 289 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1:
# 291 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5:
# 285 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6:
# 287 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2::
# 295 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 296 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 297 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 298 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 1
# 299 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 300 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 301 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 302 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 303 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 304 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 306 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 307 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3
# 309 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4
# 311 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5
# 313 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6
# 316 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1:
# 318 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5:
# 312 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6:
# 314 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1::
# 322 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 323 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 324 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 325 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 0
# 326 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 327 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 328 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 329 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 330 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 331 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 333 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 334 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3
# 336 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4
# 338 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5
# 340 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6
# 343 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1:
# 345 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5:
# 339 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6:
# 341 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2::
# 349 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 350 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 351 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 352 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 1
# 353 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 354 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 355 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 356 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 357 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 358 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 360 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 361 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3
# 363 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4
# 365 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5
# 367 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6
# 370 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1:
# 372 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5:
# 366 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6:
# 368 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1


# 398 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1:
# 399 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_up
# 400 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 401 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_4
# 402 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_right
# 403 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 404 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 405 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_left
# 406 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 407 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 408 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
# 409 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 410 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_right
# 411 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 412 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 413 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_up
# 414 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 415 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	step_end

# 418 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement1:
# 419 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 419 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 420 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_up
# 421 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 421 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 421 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 422 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_left
# 423 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_in_place_left
# 423 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_in_place_left
	step_end

# 426 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement2:
# 427 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 428 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 428 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 428 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 429 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 429 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 430 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 430 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 430 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 430 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
	step_end

# 433 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement2:
# 434 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 434 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 435 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 436 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 436 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 436 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 437 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 437 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 438 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 438 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
	step_end

ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger::
# 443 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 444 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1
# 445 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 446 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 447 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 448 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 449 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 450 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1
# 451 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 452 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 453 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 454 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 455 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 456 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger_Text_0
# 460 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 461 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 462 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 465 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 466 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 467 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playse SE_PIN
# 468 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitse
# 469 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 20
# 476 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 477 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 478 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 479 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 480 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 481 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement2
# 482 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 483 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 10
# 485 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 1
# 486 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 10
# 490 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_TEMP_9
# 491 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 10, 17, 25
# 492 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 493 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 31, 19, 25
# 494 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 31, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 495 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 496 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


ISLANDGAME_VALLEY_OF_PEACE_CuboneInteract::
# 502 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 503 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 504 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 505 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


# 508 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement3:
# 509 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock_facing_direction
# 510 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_right
# 511 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	unlock_facing_direction
	step_end

# 514 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement4:
# 515 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 516 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_2_down
# 517 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 518 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 518 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
	step_end

# 522 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement1:
# 523 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 523 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 524 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 524 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 524 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 525 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 525 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 525 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 526 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 526 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 526 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 526 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 527 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
	step_end

# 530 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement2:
# 531 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_right
# 532 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
	step_end

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract::
# 536 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 537 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 538 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 539 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_NO_CATCHING
# 540 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_NO_RUNNING
# 541 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_GENGAR, 45, ITEM_SITRUS_BERRY, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_SLUDGE_WAVE, MOVE_DREAM_EATER
# 542 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setwilddoubleflag
# 543 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
# 544 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 545 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 546 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 547 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 548 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 550 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 551 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 552 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3
# 554 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3
# 556 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_4
ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1:
# 634 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3:
	goto ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_4:
# 557 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 558 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_0x8000, 18
# 559 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_0x8001, 25
# 560 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	callnative TeleportCamera
# 561 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 18, 25
# 562 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 563 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, Common_Movement_FaceLeft
# 564 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 565 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 567 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 568 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 569 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 570 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playse SE_M_STRENGTH
# 571 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitse
# 572 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, ISLANDGAME_VALLEY_OF_PEACE_GengarMovement3
# 573 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_WEAK
# 574 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 575 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 576 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 577 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 578 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, ISLANDGAME_VALLEY_OF_PEACE_GengarMovement4
# 579 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 580 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 31
# 582 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 583 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 584 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 585 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 586 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 587 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 588 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_0
# 591 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 592 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 593 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 594 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 20
# 595 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_1
# 599 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 602 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	addobject 32
# 603 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxy 32, 24, 19
# 608 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 32, ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement1
# 609 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 610 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 611 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 612 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 613 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 614 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 32
# 615 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_2
# 619 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 620 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 621 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 622 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 32, ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement2
# 623 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 624 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_3
# 627 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	warp MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME, 5, 5
# 628 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 2
# 629 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	goto ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1


ISLANDGAME_VALLEY_OF_PEACE_Primrose::
# 641 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 642 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 643 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 4, ISLANDGAME_VALLEY_OF_PEACE_Primrose1
# 644 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 645 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 646 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 647 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 648 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 649 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 4, ISLANDGAME_VALLEY_OF_PEACE_Primrose2
# 650 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 27, ISLANDGAME_VALLEY_OF_PEACE_Primrose2
# 651 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 652 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
# 653 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 654 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_1A
# 655 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 4
# 656 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 27
# 657 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_VALLEY_OF_PEACE_PRIMROSE
	return


# 660 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_Primrose1:
# 661 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	emote_thinking
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 663 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock_facing_direction
# 664 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_up
# 665 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 665 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 665 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 666 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_in_place_up
# 667 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 667 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 667 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 668 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 669 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	unlock_facing_direction
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
	step_end

# 673 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_Primrose2:
# 674 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 674 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 674 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 675 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 675 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 675 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 675 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 675 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 675 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
	step_end

ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0:
# 67 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Having trouble finding someone, or a\n"
	.string "Pokémon?\p"
	.string "Some people are only around at specific\n"
	.string "times, so if at first you can't find the\l"
	.string "person you're looking for, try changing\l"
	.string "the time and seeing if they show up!\p"
	.string "Likewise, hidden grottoes have\n"
	.string "different Pokémon, depending on\l"
	.string "whether it's daytime or nighttime!\p"
	.string "Hope I helped! Please consider leaving\n"
	.string "a thumbs up, my well-being kinda\l"
	.string "depends on it!\p"
	.string "- Jill Board (A sentient sign, NOT a\n"
	.string "Pokémon)$"

ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0:
# 78 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "{COLOR RED}(He's mourning the loss of his wife it\n"
	.string "seems. I should leave him be.)$"

ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0:
# 87 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "My darling Clefable...{PAUSE 30} Sometimes I still\n"
	.string "see your shadows around the valley.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0:
# 112 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This valley exudes a powerful aura... Do\n"
	.string "not interrupt my aura farming!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1:
# 115 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "No... my precious aura...!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2:
# 118 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "You IMBECILE! How am I to impress the\n"
	.string "ladies without the power of the aura!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0:
# 125 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Knowledge is power, and I know a lot.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1:
# 128 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Even in defeat, my knowledge increases!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2:
# 131 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Every loss is an opportunity to learn.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0:
# 138 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Have you also come here to pay\n"
	.string "respects to your fallen comrades?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1:
# 141 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This battle was for you, Aquilla.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2:
# 144 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aquilla was the name of my Staraptor. I\n"
	.string "bet she's flying in the heavens now.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0:
# 151 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Yoooo chat, y'all won't believe what I\n"
	.string "found in the woods!\p"
	.string "AN UN-ALIVED TRAINER!!!\p"
	.string "Huh? Outta my way! Can't you see I'm\n"
	.string "tryna record a video!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1:
# 156 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Bro! Relax! It's not that serious! It's\n"
	.string "just a Pokémon battle!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2:
# 159 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "S-Shut up, chat! Stop spamming that I\n"
	.string "got destroyed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0:
# 166 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "We're here to honor our ol' Miltank for\n"
	.string "providin' milk to our family fer decades.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1:
# 169 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heh... yer as tough of a fighter as she\n"
	.string "was.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2:
# 172 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Remember to cherish the time you spend\n"
	.string "with yer Pokémon. You never know when\l"
	.string "that time will end.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0:
# 179 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I miss our Miltank already... Maybe a\n"
	.string "battle will get my mind off her...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1:
# 182 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "-sniff-\n"
	.string "Well now I just feel even worse...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2:
# 185 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I've known our Miltank since I was just\n"
	.string "a wee li'l sprout... I used to ride on top\l"
	.string "o' her every day. Good times...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0:
# 192 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This is MY territory, punk! I'll teach\n"
	.string "you to come here uninvited!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1:
# 195 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Tch... you got lucky, punk!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2:
# 198 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Those jerks from the Goon Gang didn't\n"
	.string "let me join their gang 'cause my bike\l"
	.string "wasn't “hip” enough...\p"
	.string "W-Well, I'll show them! I'll just start my\n"
	.string "own gang, with card games and\l"
	.string "fishermen!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0:
# 206 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heehee... do you see something unique\n"
	.string "about my adorable little ceramics?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1:
# 209 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Mhm! They're both a hundred percent\n"
	.string "authentic!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2:
# 212 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Despite the similarities between\n"
	.string "Sinistea and Poltchageist, they are\l"
	.string "actually completely different species!\p"
	.string "Both of these species also have a\n"
	.string "“fake” and “authentic” form, depending\l"
	.string "on if they have a special seal or not!\p"
	.string "And that's not the only thing special\n"
	.string "about authentic ones...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0:
# 221 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Young trainer-san! I have brought\n"
	.string "great dishonor to my Pokémon!\p"
	.string "Please! Face me in a duel so that I may\n"
	.string "claim redemption!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1:
# 225 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "A shameful performance...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2:
# 228 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I am no longer worthy to wield Pokémon...\p"
	.string "I am sorry, my Gallade. Your master has\n"
	.string "failed you, just like he has failed his\l"
	.string "Bisharp.\p"
	.string "It is time for you to seek a new master.\n"
	.string "One with the strength to protect you.\p"
	.string "Those scoundrels... I will never forgive\n"
	.string "them!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0:
# 238 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aiiiiiiiiiiiiiiiie!{PAUSE 30}\n"
	.string "A g-g-g-g-g-g-g-g-g-GHOOOOOOST!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1:
# 241 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Zoinks!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2:
# 244 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Like, you just totally scared the pants\n"
	.string "off of me, man!$"

ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger_Text_0:
# 457 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu... {COLOR BLUE}(Mama... Where is Mama...?)\p"
	.string "{COLOR DARK_GRAY}Cuu.... {COLOR BLUE}(Cubone want Mama... Scary\n"
	.string "without Mama...)$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_0:
# 589 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu... {COLOR BLUE}(Hooman... save Cubone?)$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_1:
# 596 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu...{COLOR BLUE} (Cubone thank hooman. Thought\n"
	.string "was like scary ones who took Mama...)\p"
	.string "{COLOR DARK_GRAY}Ah! You found him!$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_2:
# 616 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "It's dangerous to run off in the night\n"
	.string "by yourself like that!\p"
	.string "You could've gotten hurt, or even\n"
	.string "worse...!$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_3:
# 625 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Thank you for helping us find Cubone,\n"
	.string "trainer! Why don't you spend the night\l"
	.string "at our foster home? Don't worry, we've\l"
	.string "got human food and beds too!$"
