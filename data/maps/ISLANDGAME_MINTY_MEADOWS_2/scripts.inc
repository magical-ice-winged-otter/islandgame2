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
	setobjectxyperm 17, 32, 10
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
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
	setobjectxyperm 16, 61, 18
	setobjectxyperm 17, 11, 6
	setobjectxyperm 11, 61, 12
	setobjectxyperm 12, 61, 14
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
	setobjectxyperm 16, -3, 1
	setobjectxyperm 17, 11, 6
	setobjectxyperm 11, -3, 1
	setobjectxyperm 12, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact::
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
	case 2, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_3, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact::
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_2
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_2
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_2:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack:
	walk_left
	face_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
	lock
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1:
	walk_right
	walk_right
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1
	waitmovement OBJ_EVENT_ID_PLAYER
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2:
	walk_right
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2
	waitmovement OBJ_EVENT_ID_PLAYER
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
	lock
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4:
	walk_left
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4
	waitmovement OBJ_EVENT_ID_PLAYER
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5:
	walk_left
	walk_left
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5
	waitmovement OBJ_EVENT_ID_PLAYER
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6:
	walk_left
	walk_left
	walk_left
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6
	waitmovement OBJ_EVENT_ID_PLAYER
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalRunDown:
	walk_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
	waitmovement 16
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
	addobject 17
	setobjectxy 17, 11, 11
	applymovement 17, ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp
	waitmovement 17
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_RivalRunDown
	waitmovement 16
	removeobject 16
	setvar VAR_MINTY_MEADOWS_STATE, 1
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
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
	setvar VAR_MINTY_MEADOWS_STATE, 2
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepFirst
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

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
	lock
	setvar VAR_MINTY_MEADOWS_STATE, 3
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	applymovement 12, Phase2_MightyenaWalksForward
	applymovement 11, Common_Movement_ExclamationMark
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
	waitmovement 12
	waitmoncry
	release
	return


Phase2_MightyenaWalksForward:
	walk_up
	step_end

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
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_2
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_2:
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
	setvar VAR_MINTY_MEADOWS_STATE, 4
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	fadescreen FADE_TO_BLACK
	removeobject 12
	setobjectxyperm 12, -3, 1
	fadescreen FADE_FROM_BLACK
	msgbox ConqueredMightyena_Text
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_Mareep::
	lock
	msgbox MareepHelp_Text
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0:
	.string "I think Mareep might be near the\n"
	.string "forest...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
	.string "A Mightyena chasing my Mareep?\p"
	.string "This is far more than I can handle.$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
	.string "Please, Mareep needs you!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_3:
	.string "Thank you so much for helping save my\n"
	.string "Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
	.string "Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
	.string "That must be the lost Mareep! I heard it\n"
	.string "run over to the far end of this forest.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
	.string "That Mightyena looks... off. We need to\n"
	.string "save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3:
	.string "That was exciting! I need a rest after\n"
	.string "all that running...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
	.string "Old Man: Oh...\pWhat am I going to do...\p(Probably best to leave him alone)$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
	.string "Audrey: I'm bored! Let's fight!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
	.string "Audrey: Wow, you're strong!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
	.string "Audrey: Man, you beat me!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3:
	.string "Old Man: Excuse me, I lost a Mareep!\p"
	.string "Please help find it?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
	.string "Audrey: I'm gonna go look for it!$"

ConqueredMightyena_Text::
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
	.string "{COLOR BLUE}bro help me$"
