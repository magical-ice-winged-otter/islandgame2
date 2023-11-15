ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_OnTransition
	.byte 0


ISLANDGAME_MINTY_MEADOWS_2_OnTransition::
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_2
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_3
	case 2, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_4
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_5
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_6
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_2:
	call ISLANDGAME_MINTY_MEADOWS_2_InitialRival
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_3:
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_4:
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepFirst
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_5:
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_6:
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	return


ISLANDGAME_MINTY_MEADOWS_2_InitialRival::
	setobjectxyperm 16, 12, 0
	setobjectxyperm 17, 31, 10
	setobjectxyperm 11, -3, 1
	setobjectxyperm 12, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
	setobjectxyperm 16, 35, 11
	setobjectxyperm 17, 11, 6
	setobjectxyperm 11, 32, 37
	setobjectxyperm 12, 32, 37
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepFirst::
	setobjectxyperm 16, 36, 26
	setobjectxyperm 17, 11, 6
	setobjectxyperm 11, 61, 12
	setobjectxyperm 12, 61, 15
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
	setobjectxyperm 16, 61, 18
	setobjectxyperm 17, 11, 6
	setobjectxyperm 11, 61, 12
	setobjectxyperm 12, 61, 14
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
	setobjectxyperm 16, -3, 1
	setobjectxyperm 17, 11, 6
	setobjectxyperm 11, -3, 1
	setobjectxyperm 12, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2:
	walk_left
	walk_left
	walk_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement3:
	walk_left
	walk_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4:
	walk_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6:
	walk_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
	lock
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1
	waitmovement 16
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
	lock
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2
	waitmovement 16
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
	lock
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement3
	waitmovement 16
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
	lock
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4
	waitmovement 16
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
	lock
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
	lock
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6
	waitmovement 16
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
	waitmovement 16
	call ISLANDGAME_MINTY_MEADOWS_2_RivalFight
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight::
	msgbox ISLANDGAME_MINTY_MEADOWS_2_IntroBattle_Text
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_PostDefeated_Text
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostDefeated_Text
	setvar VAR_MINTY_MEADOWS_STATE, 1
	closemessage
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_PrepareEncounter_Mightyena::
	addobject 11
	addobject 12
	setobjectxy 11, 61, 12
	setobjectxyperm 11, 61, 12
	setobjectxy 12, 61, 15
	setobjectxyperm 12, 61, 15
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
	lock
	setvar VAR_MINTY_MEADOWS_STATE, 2
	addobject 11
	addobject 12
	setobjectxy 11, 32, 37
	setobjectxy 12, 32, 37
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	addobject 11
	addobject 12
	applymovement 11, Phase1_MareepRun_1
	waitmovement 11
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
	applymovement 11, Common_Movement_Delay48
	waitmovement 11
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	applymovement 11, Phase1_MareepRun_2
	waitmovement 11
	applymovement 11, Phase1_MareepRun_3
	applymovement 12, Phase1_MightyenaChase
	waitmovement 12
	waitmovement 11
	call ISLANDGAME_MINTY_MEADOWS_2_PrepareEncounter_Mightyena
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
	lock
	setvar VAR_MINTY_MEADOWS_STATE, 3
	applymovement 12, Phase2_MightyenaWalksForward
	applymovement 11, Common_Movement_ExclamationMark
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
	waitmovement 12
	waitmoncry
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
	lock
	faceplayer
	setwildbattle SPECIES_SHADOW_MIGHTYENA, 25
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
	case B_OUTCOME_PLAYER_TELEPORTED, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
	setvar VAR_MINTY_MEADOWS_STATE, 4
	fadescreen FADE_TO_BLACK
	removeobject 12
	fadescreen FADE_FROM_BLACK
	setobjectxyperm 12, -3, 1
	msgbox ConqueredMightyena_Text
	waitmessage
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


ISLANDGAME_MINTY_MEADOWS_2_TryRemoveMightyena::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return


ISLANDGAME_MINTY_MEADOWS_2_Mareep::
	lock
	msgbox MareepHelp_Text
	release
	return


Phase1_MareepRun_1:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Phase1_MareepRun_2:
	face_down
	emote_exclamation_mark
	delay_16
	step_end

Phase1_MareepRun_3:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Phase1_MightyenaChase:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Phase2_MightyenaWalksForward:
	walk_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_IntroBattle_Text::
	.string "{COLOR DARK_GRAY}Rival battle intro$"

ISLANDGAME_MINTY_MEADOWS_2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}post defeat rival$"

MareepHelp_Text::
	.string "{COLOR BLUE}bro help me$"

ConqueredMightyena_Text::
	.string "{COLOR DARK_GRAY} gg u won$"
