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
# 52 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_2
# 53 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_6
# 54 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_7
# 55 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
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
# 38 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_VALLEY_OF_PEACE_STATE
# 39 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case 1, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 40 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_TEMP_9
# 41 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 10, 17, 25
# 42 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 43 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 31, 19, 25
# 44 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 31, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 45 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 46 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


ISLANDGAME_VALLEY_OF_PEACE_Sign::
# 64 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC1::
# 71 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0
# 75 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 76 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC2::
# 80 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 81 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0
# 84 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 85 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer1::
# 105 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_1, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1
# 112 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer2::
# 118 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_2, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1
# 125 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer3::
# 131 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_3, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1
# 138 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer4::
# 144 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_4, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1
# 153 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5::
# 159 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1
# 166 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2::
# 172 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1
# 179 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer6::
# 185 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_6, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1
# 192 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer7::
# 199 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_7, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1
# 206 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer8::
# 214 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_8, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1
# 222 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer9::
# 231 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_9, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1
# 238 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1::
# 263 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 264 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 265 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 266 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 0
# 267 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 268 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 269 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 270 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 271 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 272 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 274 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 275 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3
# 277 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4
# 279 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5
# 281 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6
# 284 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1:
# 286 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5:
# 280 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6:
# 282 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2::
# 290 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 291 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 292 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 293 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 1
# 294 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 295 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 296 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 297 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 298 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 299 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 301 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 302 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3
# 304 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4
# 306 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5
# 308 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6
# 311 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1:
# 313 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5:
# 307 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6:
# 309 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1::
# 317 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 318 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 319 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 320 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 0
# 321 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 322 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 323 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 324 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 325 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 326 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 328 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 329 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3
# 331 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4
# 333 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5
# 335 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6
# 338 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1:
# 340 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5:
# 334 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6:
# 336 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2::
# 344 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 345 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 346 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 347 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 1
# 348 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 349 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 350 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 351 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 352 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 353 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 355 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 356 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3
# 358 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4
# 360 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5
# 362 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6
# 365 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1:
# 367 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5:
# 361 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6:
# 363 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1


# 393 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1:
# 394 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_up
# 395 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 396 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_4
# 397 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_right
# 398 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 399 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 400 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_left
# 401 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 402 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 403 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
# 404 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 405 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_right
# 406 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 407 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_8
# 408 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_up
# 409 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 410 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	step_end

# 413 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement1:
# 414 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 414 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 415 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_up
# 416 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 416 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 416 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_up
# 417 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_left
# 418 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_in_place_left
# 418 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_in_place_left
	step_end

# 421 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement2:
# 422 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 423 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 423 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 423 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 424 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 424 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 425 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 425 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 425 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 425 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
	step_end

# 428 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement2:
# 429 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 429 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 430 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 431 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 431 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 431 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 432 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 432 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_left
# 433 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 433 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
	step_end

ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger::
# 438 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 439 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1
# 440 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 441 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 442 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 443 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 444 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 445 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement1
# 446 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 447 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 448 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 449 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 450 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 451 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger_Text_0
# 455 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 456 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 457 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 460 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 461 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 462 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playse SE_PIN
# 463 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitse
# 464 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 20
# 471 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 472 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 473 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 474 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 475 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 476 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, ISLANDGAME_VALLEY_OF_PEACE_CuboneMovement2
# 477 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 478 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 10
# 480 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 1
# 481 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 10
# 485 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_TEMP_9
# 486 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 10, 17, 25
# 487 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 488 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxyperm 31, 19, 25
# 489 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	showobjectat 31, MAP_ISLANDGAME_VALLEY_OF_PEACE
# 490 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 491 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


ISLANDGAME_VALLEY_OF_PEACE_CuboneInteract::
# 497 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 498 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 499 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 500 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


# 503 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement3:
# 504 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock_facing_direction
# 505 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_right
# 506 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	unlock_facing_direction
	step_end

# 509 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_GengarMovement4:
# 510 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 511 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	jump_2_down
# 512 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 513 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 513 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 514 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 514 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 514 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
	step_end

# 517 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement1:
# 518 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 518 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 519 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 520 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 520 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 520 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_down
# 521 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
	step_end

# 525 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement2:
# 526 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_right
# 527 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	face_down
	step_end

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract::
# 531 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 532 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 533 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 534 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_NO_CATCHING
# 535 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_NO_RUNNING
# 536 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_GENGAR, 45, ITEM_SITRUS_BERRY, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_SLUDGE_WAVE, MOVE_DREAM_EATER
# 537 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setwilddoubleflag
# 538 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
# 539 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 540 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 541 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 542 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 543 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 545 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 546 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 547 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3
# 549 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3
# 551 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_4
ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1:
# 629 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_3:
	goto ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_4:
# 552 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 553 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_0x8000, 18
# 554 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_0x8001, 25
# 555 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	callnative TeleportCamera
# 556 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 18, 25
# 557 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 558 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, Common_Movement_FaceLeft
# 559 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 560 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 562 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 563 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 564 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 565 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playse SE_M_STRENGTH
# 566 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitse
# 567 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, ISLANDGAME_VALLEY_OF_PEACE_GengarMovement3
# 568 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_WEAK
# 569 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 570 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 571 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 572 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 573 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 31, ISLANDGAME_VALLEY_OF_PEACE_GengarMovement4
# 574 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 575 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 31
# 577 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 578 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 579 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 580 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 581 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 582 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 583 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_0
# 586 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 587 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 588 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 589 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 20
# 590 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_1
# 594 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 597 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	addobject 32
# 598 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setobjectxy 32, 24, 19
# 603 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 32, ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement1
# 604 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 30
# 605 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 606 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 607 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 608 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 609 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 32
# 610 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_2
# 614 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 615 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 616 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 617 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 32, ISLANDGAME_VALLEY_OF_PEACE_CaretakerMovement2
# 618 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 619 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_3
# 622 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	warp MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME, 5, 5
# 623 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 2
# 624 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	goto ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_1


ISLANDGAME_VALLEY_OF_PEACE_Primrose::
# 636 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 637 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 638 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 4, ISLANDGAME_VALLEY_OF_PEACE_Primrose1
# 639 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 640 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 641 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 642 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 643 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay 60
# 644 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 4, ISLANDGAME_VALLEY_OF_PEACE_Primrose2
# 645 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	applymovement 27, ISLANDGAME_VALLEY_OF_PEACE_Primrose2
# 646 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmovement 0
# 647 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
# 648 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 649 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_1A
# 650 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 4
# 651 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	removeobject 27
# 652 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_VALLEY_OF_PEACE_PRIMROSE
	return


# 655 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_Primrose1:
# 656 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	emote_thinking
# 657 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 657 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 657 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 657 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 658 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock_facing_direction
# 659 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_up
# 660 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 660 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 660 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 661 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_in_place_up
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 662 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 663 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 664 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	unlock_facing_direction
# 665 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 665 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
# 665 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	delay_16
	step_end

# 668 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
ISLANDGAME_VALLEY_OF_PEACE_Primrose2:
# 669 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 669 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 669 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_down
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
# 670 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	walk_left
	step_end

ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0:
# 65 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "VALLEY OF PEACE\n"
	.string "May the departed find tranquility$"

ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0:
# 73 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "{COLOR RED}(He's mourning the loss of his wife it\n"
	.string "seems. I should leave him be.)$"

ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0:
# 82 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "My darling Clefable...{PAUSE 30} Sometimes I still\n"
	.string "see your shadows around the valley.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0:
# 107 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This valley exudes a powerful aura... Do\n"
	.string "not interrupt my aura farming!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1:
# 110 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "No... my precious aura...!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2:
# 113 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "You IMBECILE! How am I to impress the\n"
	.string "ladies without the power of the aura!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0:
# 120 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Knowledge is power, and I know a lot.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1:
# 123 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Even in defeat, my knowledge increases!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2:
# 126 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Every loss is an opportunity to learn.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0:
# 133 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Have you also come here to pay\n"
	.string "respects to your fallen comrades?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1:
# 136 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This battle was for you, Aquilla.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2:
# 139 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aquilla was the name of my Staraptor. I\n"
	.string "bet she's flying in the heavens now.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0:
# 146 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Yoooo chat, y'all won't believe what I\n"
	.string "found in the woods!\p"
	.string "AN UN-ALIVED TRAINER!!!\p"
	.string "Huh? Outta my way! Can't you see I'm\n"
	.string "tryna record a video!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1:
# 151 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Bro! Relax! It's not that serious! It's\n"
	.string "just a Pokémon battle!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2:
# 154 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "S-Shut up, chat! Stop spamming that I\n"
	.string "got destroyed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0:
# 161 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "We're here to honor our ol' Miltank for\n"
	.string "providin' milk to our family fer decades.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1:
# 164 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heh... yer as tough of a fighter as she\n"
	.string "was.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2:
# 167 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Remember to cherish the time you spend\n"
	.string "with yer Pokémon. You never know when\l"
	.string "that time will end.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0:
# 174 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I miss our Miltank already... Maybe a\n"
	.string "battle will get my mind off her...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1:
# 177 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "-sniff-\n"
	.string "Well now I just feel even worse...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2:
# 180 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I've known our Miltank since I was just\n"
	.string "a wee li'l sprout... I used to ride on top\l"
	.string "o' her every day. Good times...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0:
# 187 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This is MY territory, punk! I'll teach\n"
	.string "you to come here uninvited!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1:
# 190 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Tch... you got lucky, punk!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2:
# 193 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Those jerks from the Goon Gang didn't\n"
	.string "let me join their gang 'cause my bike\l"
	.string "wasn't “hip” enough...\p"
	.string "W-Well, I'll show those Gooners! I'll\n"
	.string "just start my own gang, one where ALL\l"
	.string "bikes are allowed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0:
# 201 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heehee... do you see something unique\n"
	.string "about my adorable little ceramics?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1:
# 204 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Mhm! They're both a hundred percent\n"
	.string "authentic!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2:
# 207 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Despite the similarities between\n"
	.string "Sinistea and Poltchageist, they are\l"
	.string "actually completely different species!\p"
	.string "Both of these species also have a\n"
	.string "“fake” and “authentic” form, depending\l"
	.string "on if they have a special seal or not!\p"
	.string "And that's not the only thing special\n"
	.string "about authentic ones...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0:
# 216 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Young trainer-san! I have brought\n"
	.string "great dishonor to my Pokémon!\p"
	.string "Please! Face me in a duel so that I may\n"
	.string "claim redemption!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1:
# 220 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "A shameful performance...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2:
# 223 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I am no longer worthy to wield Pokémon...\p"
	.string "I am sorry, my Gallade. Your master has\n"
	.string "failed you, just like he has failed his\l"
	.string "Bisharp.\p"
	.string "It is time for you to seek a new master.\n"
	.string "One with the strength to protect you.\p"
	.string "Those scoundrels... I will never forgive\n"
	.string "them!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0:
# 233 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aiiiiiiiiiiiiiiiie!{PAUSE 30}\n"
	.string "A g-g-g-g-g-g-g-g-g-GHOOOOOOST!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1:
# 236 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Zoinks!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2:
# 239 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Like, you just totally scared the pants\n"
	.string "off of me, man!$"

ISLANDGAME_VALLEY_OF_PEACE_CuboneTrigger_Text_0:
# 452 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu... {COLOR BLUE}(Mama... Where is Mama...?)\p"
	.string "{COLOR DARK_GRAY}Cuu.... {COLOR BLUE}(Cubone want Mama... Scary\n"
	.string "without Mama...)$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_0:
# 584 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu... {COLOR BLUE}(Hooman... save Cubone?)$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_1:
# 591 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Cuu...{COLOR BLUE} (Cubone thank hooman. Thought\n"
	.string "was like scary ones who took Mama...)\p"
	.string "{COLOR DARK_GRAY}Ah! You found him!$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_2:
# 611 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "It's dangerous to run off in the night\n"
	.string "by yourself like that!\p"
	.string "You could've gotten hurt, or even\n"
	.string "worse...!$"

ISLANDGAME_VALLEY_OF_PEACE_GengarInteract_Text_3:
# 620 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Thank you for helping us find Cubone,\n"
	.string "trainer! Why don't you spend the night\l"
	.string "at our foster home? Don't worry, we've\l"
	.string "got human food and beds too!$"
