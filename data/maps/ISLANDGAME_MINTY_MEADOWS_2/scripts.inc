ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_OnTransition
	.byte 0


ISLANDGAME_MINTY_MEADOWS_2_OnTransition::
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_2
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_3
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_4
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OnTransition_5
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_2:
	call ISLANDGAME_MINTY_MEADOWS_2_InitialRival
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_3:
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_4:
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	return

ISLANDGAME_MINTY_MEADOWS_2_OnTransition_5:
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	return


ISLANDGAME_MINTY_MEADOWS_2_InitialRival::
	setobjectxyperm 11, 12, 5
	setobjectxyperm 12, 32, 10
	setobjectxyperm 18, 35, 8
	setobjectxyperm 19, 34, 10
	setobjectxyperm 20, 33, 12
	setobjectxyperm 6, -3, 1
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
	setvar VAR_TEMP_4, 1
	setobjectxyperm 12, 10, 9
	setobjectxyperm 6, 61, 13
	setobjectxyperm 7, 61, 15
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
	setvar VAR_TEMP_4, 1
	setobjectxyperm 12, 10, 9
	setobjectxyperm 6, 61, 13
	setobjectxyperm 7, 61, 14
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
	setvar VAR_TEMP_4, 0
	setobjectxyperm 12, 11, 3
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact::
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4
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


ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact::
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5
ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_4, MSGBOX_AUTOCLOSE
	playfanfare MUS_HEAL
	special HealPlayerParty
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3:
	compare VAR_TEMP_0, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6:
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1


ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact::
	msgbox ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact::
	msgbox ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact::
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack:
	walk_left
	face_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
	lock
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	faceplayer
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
	applymovement 12, Common_Movement_FaceOriginalDirection
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
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
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

ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
	applymovement 11, ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
	closemessage
	applymovement 11, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 11, Common_Movement_FaceDown
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement 11, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
	waitmovement 11
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
	closemessage
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
	savebgm MUS_DUMMY
	fadedefaultbgm
	addobject 12
	setobjectxyperm 18, -3, 1
	setobjectxyperm 19, -3, 1
	setobjectxyperm 20, -3, 1
	setobjectxy 12, 18, 12
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
	closemessage
	applymovement 12, ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp
	waitmovement 12
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6
	closemessage
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8
	startquest QUEST_FRESA_FARMS_LOST_MAREEP
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	loadword 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact
	setfollower 11, 100, 0
	setvar VAR_MINTY_MEADOWS_STATE, 1
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
	compare VAR_MINTY_MEADOWS_STATE, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1
	return

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	addobject 6
	setobjectxy 6, 32, 37
	applymovement 6, Phase1_MareepRun_1
	waitmovement 6
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
	applymovement 6, Common_Movement_Delay48
	waitmovement 6
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	applymovement 6, Phase1_MareepRun_2
	waitmovement 6
	addobject 7
	setobjectxy 7, 32, 37
	applymovement 6, Phase1_MareepRun_3
	applymovement 7, Phase1_MightyenaChase
	waitmovement 7
	waitmovement 6
	removeobject 6
	removeobject 7
	setvar VAR_TEMP_0, 1
	release
	return


Phase1_RivalEnter:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	emote_exclamation_mark
	delay_16
	face_down
	delay_16
	face_left
	delay_16
	face_up
	delay_16
	face_right
	step_end

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
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0
	closemessage
	applymovement 7, Phase2_MightyenaWalksForward
	applymovement 6, Common_Movement_ExclamationMark
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
	waitmovement 7
	waitmoncry
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1
	setvar VAR_MINTY_MEADOWS_STATE, 3
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	release
	return


Phase2_RivalCatchUp:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	emote_exclamation_mark
	step_end

Phase2_MightyenaWalksForward:
	walk_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setflag FLAG_NO_CATCHING
	setcwildbattle 0, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
	setwilddoublebattle TRUE
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	clearflag FLAG_NO_CATCHING
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
	destroyfollower
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
	destroyfollower
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


RivalChecksMareep:
	walk_up
	walk_up
	walk_up
	face_right
	step_end

MareepHappy:
	face_left
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	step_end

MareepGoodbye:
	jump_in_place_down
	jump_in_place_down
	jump_in_place_down
	step_end

TalkToAudrey:
	walk_in_place_slow_up
	step_end

AudreyConfused:
	face_down
	emote_question_mark
	step_end

LookBackAtMareep:
	face_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
	setvar VAR_MINTY_MEADOWS_STATE, 4
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	setvar VAR_0x8000, 61
	setvar VAR_0x8001, 16
	callnative TeleportCamera
	addobject 11
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
	setobjectxy OBJ_EVENT_ID_PLAYER, 61, 16
	setobjectxy 11, 60, 16
	fadescreen FADE_TO_BLACK
	removeobject 7
	setobjectxyperm 7, -3, 1
	fadescreen FADE_FROM_BLACK
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0
	closemessage
	applymovement 11, RivalChecksMareep
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1
	closemessage
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	applymovement 6, MareepHappy
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2
	applymovement 11, Common_Movement_FaceDown
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TalkToAudrey
	waitmovement 0
	applymovement 11, AudreyConfused
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4
	applymovement 11, LookBackAtMareep
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5
	closemessage
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8000, 11
	setvar VAR_0x8001, 8
	callnative TeleportCamera
	addobject OBJ_EVENT_ID_PLAYER
	addobject 12
	addobject 11
	addobject 6
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
	setobjectxy 11, 10, 8
	setobjectxy 12, 11, 6
	setobjectxy 6, 10, 6
	fadescreen FADE_FROM_BLACK
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6
	closemessage
	applymovement 12, Phase3_OldManGivesItem_Part1
	waitmovement 12
	giveitem ITEM_LUCKY_EGG
	applymovement 12, Phase3_OldManGivesItem_Part2
	waitmovement 12
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7
	closemessage
	applymovement 12, WalkBackToFarm
	waitmovement 0
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	applymovement 6, MareepGoodbye
	waitmoncry
	waitmovement 0
	applymovement 6, WalkBackToFarm
	waitmovement 0
	applymovement 11, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9
	closemessage
	applymovement 11, Phase3_RivalRunsOff
	applymovement 11, Common_Movement_Delay48
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 11
	removeobject 11
	setobjectxyperm 11, -3, 1
	setobjectxyperm 12, -3, 1
	special HealPlayerParty
	completequest QUEST_FRESA_FARMS_LOST_MAREEP
	release
	return


Phase3_OldManGivesItem_Part1:
	walk_down
	step_end

Phase3_OldManGivesItem_Part2:
	walk_left
	face_down
	delay_16
	delay_16
	delay_16
	walk_right
	walk_up
	face_down
	step_end

WalkBackToFarm:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Phase3_RivalRunsOff:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Mareep::
	lock
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
	msgbox MareepHelp_Text
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_CantLeave::
	lock
	facefollower
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_WalkUp
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_WalkUp:
	walk_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2::
	lock
	facefollower
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_WalkDown
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_WalkDown:
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3::
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4::
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5::
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6::
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7::
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8::
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_ItemZapPlate::
	finditem ITEM_ZAP_PLATE
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0:
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
	.string "Thank you so much for saving my\n"
	.string "precious Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}That must be the lost Mareep! I\n"
	.string "think it ran off to the end of the\l"
	.string "forest!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3:
	.string "Phew... I need to take a break after all\n"
	.string "that running...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_4:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Oh! Are your Pokémon hurt,\n"
	.string "{PLAYER}? Let me patch them up!$"

ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0:
	.string "{COLOR DARK_GRAY}MINTY MEADOWS\n"
	.string "Please don't pick the flowers!$"

ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0:
	.string "{COLOR DARK_GRAY}TRAVELER'S TUNNEL\n"
	.string "WARNING: VERY DARK!$"

ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0:
	.string "{COLOR DARK_GRAY}POPS RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Ugg... I'm only missing one more\n"
	.string "Pokémon! Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Umm, hi! Do I know you?\p"
	.string "{COLOR DARK_GRAY}...Mhm...Okay...Oh!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
	.string "{COLOR DARK_GRAY}You're {PLAYER}? The professor told\n"
	.string "me about you earlier today!\p"
	.string "{COLOR DARK_GRAY}It's good to meet you! I'm Audrey, a\n"
	.string "rising Pokémon trainer just like you!\p"
	.string "{COLOR DARK_GRAY}I was trying to fill out my Pokédex\n"
	.string "here, but I just couldn't find a Riolu...\p"
	.string "{COLOR DARK_GRAY}How are you enjoying the isles so far?\n"
	.string "Isn't it awesome here?\p"
	.string "{COLOR DARK_GRAY}Eh? It's too hot and humid? Um, well,\n"
	.string "you'll get used to it eventually!\p"
	.string "{COLOR DARK_GRAY}Oh! Now that you're here, let's have a\n"
	.string "Pokémon battle! I need some action!\p"
	.string "{COLOR DARK_GRAY}I'm warning you though... I'm pretty\n"
	.string "good!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3:
	.string "Eep! You're pretty strong too!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}.\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... sometimes I say things before I\n"
	.string "think.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
	.string "{COLOR DARK_GRAY}E-Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6:
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm one of the owners of\n"
	.string "the nearby farm.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was\l"
	.string "missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8:
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Really? Oh, I can't thank\n"
	.string "you two enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!\p"
	.string "If your Pokémon need healing, just let\n"
	.string "me know!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Oh no! Quick, {PLAYER}! We\n"
	.string "need to save that Mareep!\p"
	.string "{COLOR RED}(...That Mightyena... Something seems...\n"
	.string "off about it.)\p"
	.string "{COLOR RED}(There seems to be a dark aura\n"
	.string "radiating from it...)$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1:
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2:
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Awh. It's okay Mareep. You're\n"
	.string "safe with us now!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3:
	.string "{COLOR DARK_GRAY}Heh... We make a pretty solid team, don't\n"
	.string "we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4:
	.string "{COLOR DARK_GRAY}...Huh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? I'm\n"
	.string "confused... I didn't see any of that.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5:
	.string "{COLOR DARK_GRAY}Hmm. Well either way, we should probably\n"
	.string "get Mareep back to its owner.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6:
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Oh, my precious baby is safe\n"
	.string "and sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Heheh. It was nothing, really!\p"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Please, take one of these\n"
	.string "as a token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7:
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}If you want to check out\n"
	.string "our farm, we're right up here.\p"
	.string "{COLOR DARK_GRAY}Feel free to visit anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}The way you handled that\n"
	.string "vicious Mightyena with your Pokémon...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}! You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9:
	.string "{COLOR DARK_GRAY}Eeeh!? You don't know about the\n"
	.string "tournament!?\p"
	.string "{COLOR DARK_GRAY}It's a tournament hosted during the\n"
	.string "Silverwing Festival where only the best\l"
	.string "trainers of Mariyama assemble to\l"
	.string "compete for the Silverwing Cup!\p"
	.string "{COLOR DARK_GRAY}I'm taking part in it, and I think you\n"
	.string "should to! You'd be a great competitor!\p"
	.string "{COLOR DARK_GRAY}To qualify, you'll have to complete the\n"
	.string "Mariyama Gym Challenge!\p"
	.string "{COLOR DARK_GRAY}That is, you'll have to travel across\n"
	.string "the three main islands of Oranna,\l"
	.string "Lumine, and Ignea...\p"
	.string "{COLOR DARK_GRAY}...and challenge their respective gym\n"
	.string "leaders in battle!\p"
	.string "{COLOR DARK_GRAY}Ooh... I just can't wait! I just want the\n"
	.string "festival to begin tomorrow!\p"
	.string "{COLOR DARK_GRAY}Huh? Oh, you're right. Neither of us\n"
	.string "would qualify if it started tomorrow...\p"
	.string "{COLOR DARK_GRAY}Well, I have to report back to the\n"
	.string "professor with my findings.\p"
	.string "{COLOR DARK_GRAY}But {PLAYER}, you should go west of\n"
	.string "Maplegrove and head up to Tidalcove!\p"
	.string "{COLOR DARK_GRAY}That's where you'll find the first gym\n"
	.string "leader: Ruka!\p"
	.string "{COLOR DARK_GRAY}Ruka is really famous around here. On\n"
	.string "top of being a gym leader, she's also a\l"
	.string "professional swimmer and model!\p"
	.string "{COLOR DARK_GRAY}She was runner-up for last year's Miss\n"
	.string "Pokémon beauty pageant too!\p"
	.string "{COLOR DARK_GRAY}-sigh- I wish I could be as confident as\n"
	.string "she is in the outfits she wears...\p"
	.string "{COLOR DARK_GRAY}Oops, there I go rambling again...\n"
	.string "Anyways! Bye-bye for now, {PLAYER}!\p"
	.string "{COLOR DARK_GRAY}Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "{COLOR DARK_GRAY}Mhm... alright... and there we go! All set!\p"
	.string "{COLOR DARK_GRAY}Okie, goodbye for real now! Let's meet\n"
	.string "up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Eh? We can't leave! We said we\n"
	.string "would help find his Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
	.string "{COLOR DARK_GRAY}I'm trying to tap into my psychic\n"
	.string "powers. Don't disturb me!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
	.string "I come to this forest to train my\n"
	.string "psychic abilities every day.\p"
	.string "I think I'm almost there... Soon I'll be\n"
	.string "moving objects with my mind!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
	.string "{COLOR DARK_GRAY}That guy over there is a weirdo. He\n"
	.string "keeps thinking he has psychic powers.\p"
	.string "Me? I'm the real deal. I trained under\n"
	.string "Sabrina in the Kanto region!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
	.string "I only lost because a sudden Pokémon\n"
	.string "cry broke my concentration!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
	.string "{COLOR DARK_GRAY}I'm looking for some cool bug Pokémon\n"
	.string "here. Have you found any?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
	.string "I really want to find the cool bug\n"
	.string "Pokémon here.\p"
	.string "I'll stay here until midnight if I have\n"
	.string "to!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
	.string "{COLOR DARK_GRAY}I've been wandering around here for a\n"
	.string "while. I'm beginning to think I'm lost...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
	.string "You just came from the entrance, right?\n"
	.string "I'll be able to find my way back then!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
	.string "{COLOR DARK_GRAY}I saw a scary Pokémon chasing a Mareep\n"
	.string "this way. Are you going after it?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
	.string "I feel bad for that Mareep, but there's\n"
	.string "not much I can do to help.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
	.string "{COLOR DARK_GRAY}I like shorts! Shorts are comfy and\n"
	.string "easy to wear! Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
	.string "Shorts are in the top percentage of\n"
	.string "clothes! They're easily S tier!$"

ConqueredMightyena_Text::
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
	.string "{COLOR DARK_GRAY}Reep! Reep! (BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss::
	.string "I lost focus. I'm sorry, my Pokémon.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss::
	.string "I-Impossible! How could my powers let\nme down!?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss::
	.string "The bug Pokémon I have aren't strong\nenough.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss::
	.string "My Pokémon are too tired to fight well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss::
	.string "Wow. You might have what it takes to\ntake on that scary Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss::
	.string "I think I'm going to need a new pair of\nshorts...$"
