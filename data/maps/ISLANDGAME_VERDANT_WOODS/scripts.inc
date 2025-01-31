ISLANDGAME_VERDANT_WOODS_MapScripts::
# 23 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 40 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_VERDANT_WOODS_OnResume
	.byte 0

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	gettime
# 27 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 27 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_1
# 35 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_2
# 36 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_3
	return

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_4
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_5
# 30 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_TEMP_6
	return


ISLANDGAME_VERDANT_WOODS_OnResume::
# 67 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo
	return


ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo::
# 71 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 72 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 73 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


ISLANDGAME_VERDANT_WOODS_Sudowoodo::
# 79 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 80 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	checkitem ITEM_WAILMER_PAIL, 1
# 81 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case FALSE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_3
# 84 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case TRUE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_4
ISLANDGAME_VERDANT_WOODS_Sudowoodo_1:
# 111 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_Sudowoodo_3:
# 83 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_4:
# 85 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1, MSGBOX_YESNO
# 86 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case NO, ISLANDGAME_VERDANT_WOODS_Sudowoodo_6
# 89 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case YES, ISLANDGAME_VERDANT_WOODS_Sudowoodo_7
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_6:
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_7:
# 90 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	closemessage
# 91 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	special DoWateringBerryTreeAnim
# 92 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitstate
# 93 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitse
# 94 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 95 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	applymovement 2, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 96 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmovement 0
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 10
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 102 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 103 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
# 105 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_9:
# 106 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SUDOWOODO_DEFEATED
# 107 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1


ISLANDGAME_VERDANT_WOODS_TrainerBattle1::
# 116 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_double TRAINER_VERDANT_WOODS_1, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons
# 117 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle2::
# 147 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_2, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text
# 148 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle3::
# 173 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_3, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text
# 174 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle4::
# 197 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_4, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text
# 198 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle5::
# 222 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_5, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text
# 224 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
# 251 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 252 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 253 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
# 254 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
# 266 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 267 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 268 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2
# 273 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1:
# 275 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2:
# 269 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
# 270 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 271 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1


# 284 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement:
# 285 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 286 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_right
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_8
# 289 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 290 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 292 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 292 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
	step_end

# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2:
# 296 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 299 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 300 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
# 300 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
	step_end

# 303 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3:
# 304 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 305 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 307 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
	step_end

# 310 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4:
# 311 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 311 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 311 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
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
# 500 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 501 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 502 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_set FLAG_VERDANT_WOODS_SEED_RECEIVED, ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven
# 503 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3Talk
# 504 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 505 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 506 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SEED_RECEIVED
# 507 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven::
# 511 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0
# 512 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
# 527 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 528 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
# 529 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
# 540 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 541 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2
# 547 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1:
# 549 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2:
# 542 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
# 543 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 544 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1::
# 563 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 564 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 565 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 566 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_JOLTIK, 7, ITEM_NONE, NUM_NATURES, 0
# 567 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_ENCOUNTER
# 568 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 569 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 570 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 571 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 572 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 574 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 575 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_3
# 577 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_4
# 579 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_5
# 581 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_6
# 584 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1:
# 586 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_5:
# 580 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_6:
# 582 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract1_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2::
# 590 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 591 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 592 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 593 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_JOLTIK, 7, ITEM_NONE, NUM_NATURES, 1
# 594 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_ENCOUNTER
# 595 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 596 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 597 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 598 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 599 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 601 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 602 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_3
# 604 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_4
# 606 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_5
# 608 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_6
# 611 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1:
# 613 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_5:
# 607 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_6:
# 609 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract2_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3::
# 617 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 618 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 619 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 620 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_JOLTIK, 8, ITEM_NONE, NUM_NATURES, 2
# 621 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_ENCOUNTER
# 622 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 623 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 624 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 625 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 626 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 628 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 629 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_3
# 631 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_4
# 633 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_5
# 635 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_6
# 638 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1:
# 640 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_5:
# 634 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_6:
# 636 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract3_1


ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1::
# 645 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 646 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 647 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 648 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_SPINARAK, 7, ITEM_NONE, NUM_NATURES, 0
# 649 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_ENCOUNTER
# 650 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 651 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 652 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 653 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 654 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 656 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 657 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_3
# 659 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_4
# 661 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_5
# 663 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_6
# 666 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1:
# 668 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_5:
# 662 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_6:
# 664 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract1_1


ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2::
# 673 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 674 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 675 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 676 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_SPINARAK, 7, ITEM_NONE, NUM_NATURES, 1
# 677 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_ENCOUNTER
# 678 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 679 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 680 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 681 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 682 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 684 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 685 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_3
# 687 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_4
# 689 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_5
# 691 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_6
# 694 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1:
# 696 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_5:
# 690 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_6:
# 692 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract2_1


ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3::
# 701 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 702 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 703 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 704 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setcwildbattle 0, SPECIES_SPINARAK, 8, ITEM_CHESTO_BERRY, NUM_NATURES, 2, , , , , , , , , , , , , MOVE_TWINEEDLE, MOVE_TOXIC_SPIKES, MOVE_RAGE_POWDER, MOVE_PURSUIT
# 705 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_ENCOUNTER
# 706 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 707 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 708 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 709 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 710 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 712 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 713 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_3
# 715 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_4
# 717 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_5
# 719 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_6
# 722 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1:
# 724 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_5:
# 718 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1

ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_6:
# 720 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SpinarakInteract3_1


ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0:
# 83 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)$"

ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1:
# 85 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)\p"
	.string "{COLOR DARK_GRAY}Water the strange-looking tree?$"

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0:
# 273 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Owww, my head, it hurts...$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
# 511 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0:
# 547 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "NO TRESPASSING$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
# 120 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yay! My Spewpa finally evolved!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
# 126 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Waaah!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
# 131 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Bug Pokémon are really fragile...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons::
# 138 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You need at least two Pokémon to\n"
	.string "face me!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text::
# 151 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Mark my words, I WILL become the Bug\n"
	.string "King!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text::
# 157 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I guess I'll just be the Bug Prince for  \n"
	.string "now.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text::
# 163 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}To become the Bug King, I have to\n"
	.string "capture that giant bug Pokémon first.\p"
	.string "{COLOR DARK_GRAY}I hear it's the only one of its kind\n"
	.string "here, which makes it perfect for a king!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text::
# 177 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Give me a challenge!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text::
# 183 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Finally... a worthy opponent...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text::
# 188 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Our battle was legendary!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
# 201 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
# 207 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "The only thing I hate more than forests \n"
	.string "is losing...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
# 213 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "This place gives me the\n"
	.string "heebie-jeebies...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text::
# 227 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Sic 'em, boy!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text::
# 233 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yo! Chill out! It was just a prank, bro!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text::
# 238 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I'm just tryna go viral on PikPok, man.$"

ISLANDGAME_VERDANT_WOODS_NPC1Talk::
# 257 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}When I was trying to find a Joltik here,\n"
	.string "I came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
# 278 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}get out of my head get out of my head\n"
	.string "get out of my head GeT oUT oF mY hEaD$"

ISLANDGAME_VERDANT_WOODS_NPC3Talk::
# 515 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oh, are you a trainer? I found this while\n"
	.string "foraging for herbs. Take it!$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
# 532 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
# 552 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
