ISLANDGAME_VERDANT_WOODS_MapScripts::
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 54 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_VERDANT_WOODS_OnResume
	.byte 0

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setobjectaswildencounter 29, ENCOUNTER_LAND
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setobjectaswildencounter 30, ENCOUNTER_LAND
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setobjectaswildencounter 31, ENCOUNTER_LAND
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
# 35 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setobjectaswildencounter 33, ENCOUNTER_LAND
# 36 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setobjectaswildencounter 34, ENCOUNTER_LAND
# 38 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	gettime
# 41 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 41 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 48 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_1
# 49 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_2
# 50 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_3
	return

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 42 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_4
# 43 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_5
# 44 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_6
	return


ISLANDGAME_VERDANT_WOODS_OnResume::
# 81 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo
	return


ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo::
# 85 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 86 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 87 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


ISLANDGAME_VERDANT_WOODS_Sudowoodo::
# 93 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 94 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	checkitem ITEM_WAILMER_PAIL, 1
# 95 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case FALSE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_3
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case TRUE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_4
ISLANDGAME_VERDANT_WOODS_Sudowoodo_1:
# 125 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_Sudowoodo_3:
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_4:
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1, MSGBOX_YESNO
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case NO, ISLANDGAME_VERDANT_WOODS_Sudowoodo_6
# 103 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case YES, ISLANDGAME_VERDANT_WOODS_Sudowoodo_7
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_6:
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_7:
# 104 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	closemessage
# 105 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	special DoWateringBerryTreeAnim
# 106 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitstate
# 107 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitse
# 108 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 109 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	applymovement 2, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 110 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmovement 0
# 111 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 10
# 112 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 113 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 114 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 115 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 116 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 117 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
# 119 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_9:
# 120 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SUDOWOODO_DEFEATED
# 121 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1


ISLANDGAME_VERDANT_WOODS_TrainerBattle1::
# 130 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_double TRAINER_VERDANT_WOODS_1, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons
# 131 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle2::
# 161 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_2, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text
# 162 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle3::
# 187 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_3, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text
# 188 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle4::
# 211 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_4, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text
# 212 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle5::
# 236 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_5, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text
# 238 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
# 265 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 266 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 267 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
# 268 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
# 280 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 281 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 282 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1:
# 289 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2:
# 283 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
# 284 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 285 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1


# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement:
# 299 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 300 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 301 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_right
# 302 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_8
# 303 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 304 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 305 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
	step_end

# 309 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2:
# 310 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 311 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 311 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
	step_end

# 317 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3:
# 318 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 319 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 320 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 320 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 320 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 321 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
	step_end

# 324 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4:
# 325 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 325 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 325 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 326 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 327 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 327 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 327 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 327 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 327 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 328 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
	step_end

ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2::
	return


ISLANDGAME_VERDANT_WOODS_SkittyPhase2Loc::
	return


ISLANDGAME_VERDANT_WOODS_HaunterPhase2Loc::
	return


ISLANDGAME_VERDANT_WOODS_FightHaunter::
	return


ISLANDGAME_VERDANT_WOODS_SkittyPhase2::
	return


ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty::
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC3::
# 514 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 515 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 516 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_set FLAG_VERDANT_WOODS_SEED_RECEIVED, ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven
# 517 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3Talk
# 518 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 519 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 520 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SEED_RECEIVED
# 521 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven::
# 525 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0
# 526 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
# 541 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 542 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
# 543 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
# 554 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 555 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2
# 561 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1:
# 563 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2:
# 556 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
# 557 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 558 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1::
# 577 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 578 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 579 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 580 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_JOLTIK, 7, ITEM_NONE, NUM_NATURES, 0
# 581 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_ENCOUNTER
# 582 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 583 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 584 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 585 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 586 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 588 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 589 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_3
# 591 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_4
# 593 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_5
# 595 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_6
# 598 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1:
# 600 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_5:
# 594 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_6:
# 596 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2::
# 604 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 605 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 606 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 607 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_JOLTIK, 7, ITEM_NONE, NUM_NATURES, 1
# 608 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_ENCOUNTER
# 609 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 610 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 611 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 612 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 613 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 615 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 616 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_3
# 618 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_4
# 620 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_5
# 622 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_6
# 625 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1:
# 627 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_5:
# 621 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_6:
# 623 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3::
# 631 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 632 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 633 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 634 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_JOLTIK, 8, ITEM_NONE, NUM_NATURES, 2
# 635 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_ENCOUNTER
# 636 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 637 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 638 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 639 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 640 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 642 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 643 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_3
# 645 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_4
# 647 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_5
# 649 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_6
# 652 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1:
# 654 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_5:
# 648 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_6:
# 650 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1


ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1::
# 659 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 660 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 661 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 662 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_SPINARAK, 7, ITEM_NONE, NUM_NATURES, 0
# 663 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_ENCOUNTER
# 664 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 665 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 666 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 667 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 668 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 670 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 671 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_3
# 673 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_4
# 675 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_5
# 677 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_6
# 680 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1:
# 682 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_5:
# 676 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_6:
# 678 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1


ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2::
# 687 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 688 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 689 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 690 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_SPINARAK, 7, ITEM_NONE, NUM_NATURES, 1
# 691 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_ENCOUNTER
# 692 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 693 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 694 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 695 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 696 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 698 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 699 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_3
# 701 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_4
# 703 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_5
# 705 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_6
# 708 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1:
# 710 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_5:
# 704 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_6:
# 706 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1


ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3::
# 715 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 716 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 717 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 718 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_SPINARAK, 8, ITEM_CHESTO_BERRY, NUM_NATURES, 2, , , , , , , , , , , , , MOVE_TWINEEDLE, MOVE_TOXIC_SPIKES, MOVE_RAGE_POWDER, MOVE_PURSUIT
# 719 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_ENCOUNTER
# 720 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 721 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 722 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 723 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 724 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 726 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 727 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_3
# 729 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_4
# 731 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_5
# 733 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_6
# 736 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1:
# 738 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_5:
# 732 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_6:
# 734 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1


ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0:
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)$"

ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1:
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)\p"
	.string "{COLOR DARK_GRAY}Water the strange-looking tree?$"

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0:
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Owww, my head, it hurts...$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
# 525 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0:
# 561 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "NO TRESPASSING$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
# 134 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yay! My Spewpa finally evolved!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
# 140 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Waaah!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
# 145 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Bug Pokémon are really fragile...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons::
# 152 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You need at least two Pokémon to\n"
	.string "face me!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text::
# 165 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Mark my words, I WILL become the Bug\n"
	.string "King!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text::
# 171 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I guess I'll just be the Bug Prince for  \n"
	.string "now.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text::
# 177 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}To become the Bug King, I have to\n"
	.string "capture that giant bug Pokémon first.\p"
	.string "{COLOR DARK_GRAY}I hear it's the only one of its kind\n"
	.string "here, which makes it perfect for a king!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text::
# 191 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Give me a challenge!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text::
# 197 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Finally... a worthy opponent...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text::
# 202 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Our battle was legendary!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
# 215 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
# 221 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "The only thing I hate more than forests \n"
	.string "is losing...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
# 227 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "This place gives me the\n"
	.string "heebie-jeebies...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text::
# 241 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Sic 'em, boy!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text::
# 247 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yo! Chill out! It was just a prank, bro!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text::
# 252 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I'm just tryna go viral on PikPok, man.$"

ISLANDGAME_VERDANT_WOODS_NPC1Talk::
# 271 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}When I was trying to find a Joltik here,\n"
	.string "I came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
# 292 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}get out of my head get out of my head\n"
	.string "get out of my head GeT oUT oF mY hEaD$"

ISLANDGAME_VERDANT_WOODS_NPC3Talk::
# 529 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oh, are you a trainer? I found this while\n"
	.string "foraging for herbs. Take it!$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
# 546 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
# 566 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
