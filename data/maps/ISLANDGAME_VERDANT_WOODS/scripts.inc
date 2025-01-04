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
# 110 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
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
	special DoWateringBerryTreeAnim
# 91 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitstate
# 92 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitse
# 93 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 94 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	applymovement 2, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 95 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmovement 0
# 96 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 10
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 101 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 102 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
# 104 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_9:
# 105 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SUDOWOODO_DEFEATED
# 106 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1


ISLANDGAME_VERDANT_WOODS_TrainerBattle1::
# 115 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_double TRAINER_VERDANT_WOODS_1, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons
# 116 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle2::
# 146 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_2, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text
# 147 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle3::
# 172 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_3, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text
# 173 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle4::
# 196 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_4, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text
# 197 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle5::
# 221 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_5, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text
# 223 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
# 250 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 251 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 252 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
# 253 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
# 265 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 266 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 267 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2
# 272 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1:
# 274 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2:
# 268 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
# 269 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 270 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1


# 283 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement:
# 284 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 285 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 286 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_right
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_8
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 289 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 290 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
	step_end

# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2:
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 296 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 296 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 299 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
# 299 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
	step_end

# 302 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3:
# 303 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 304 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 305 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 305 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 305 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 306 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
	step_end

# 309 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4:
# 310 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 310 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 310 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 311 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 312 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
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
# 499 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 500 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 501 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_set FLAG_VERDANT_WOODS_SEED_RECEIVED, ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven
# 502 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3Talk
# 503 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 504 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 505 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SEED_RECEIVED
# 506 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven::
# 510 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0
# 511 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
# 526 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 527 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
# 528 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
# 539 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 540 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2
# 546 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1:
# 548 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2:
# 541 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
# 542 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 543 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1


ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract::
# 562 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 563 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 564 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 565 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	startoverworldencounter 7
# 566 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 567 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 569 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 570 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_3
# 572 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_4
# 574 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_5
# 576 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_6
# 579 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_1:
# 581 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_4:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_5:
# 575 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_1

ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_6:
# 577 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_EventScript_JoltikInteract_1


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
# 272 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Owww, my head, it hurts...$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
# 510 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0:
# 546 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "NO TRESPASSING$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
# 119 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yay! My Spewpa finally evolved!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
# 125 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Waaah!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
# 130 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Bug Pokémon are really fragile...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons::
# 137 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You need at least two Pokémon to\n"
	.string "face me!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text::
# 150 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Mark my words, I WILL become the Bug\n"
	.string "King!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text::
# 156 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I guess I'll just be the Bug Prince for  \n"
	.string "now.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text::
# 162 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}To become the Bug King, I have to\n"
	.string "capture that giant bug Pokémon first.\p"
	.string "{COLOR DARK_GRAY}I hear it's the only one of its kind\n"
	.string "here, which makes it perfect for a king!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text::
# 176 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Give me a challenge!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text::
# 182 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Finally... a worthy opponent...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text::
# 187 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Our battle was legendary!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
# 200 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
# 206 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "The only thing I hate more than forests \n"
	.string "is losing...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
# 212 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "This place gives me the\n"
	.string "heebie-jeebies...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text::
# 226 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Sic 'em, boy!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text::
# 232 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yo! Chill out! It was just a prank, bro!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text::
# 237 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I'm just tryna go viral on PikPok, man.$"

ISLANDGAME_VERDANT_WOODS_NPC1Talk::
# 256 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}When I was trying to find a Joltik here,\n"
	.string "I came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
# 277 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}get out of my head get out of my head\n"
	.string "get out of my head GeT oUT oF mY hEaD$"

ISLANDGAME_VERDANT_WOODS_NPC3Talk::
# 514 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oh, are you a trainer? I found this while\n"
	.string "foraging for herbs. Take it!$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
# 531 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
# 551 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
