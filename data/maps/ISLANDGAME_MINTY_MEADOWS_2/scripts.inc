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
	setobjectxyperm 15, 12, 0
	setobjectxyperm 16, 32, 10
	setobjectxyperm 10, -3, 1
	setobjectxyperm 11, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
	setvar VAR_TEMP_4, 1
	setobjectxyperm 16, 11, 6
	setobjectxyperm 10, 61, 13
	setobjectxyperm 11, 61, 15
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
	setvar VAR_TEMP_4, 1
	setobjectxyperm 16, 11, 6
	setobjectxyperm 10, 61, 13
	setobjectxyperm 11, 61, 14
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
	setvar VAR_TEMP_4, 0
	setobjectxyperm 15, -3, 1
	setobjectxyperm 16, 11, 3
	setobjectxyperm 10, -3, 1
	setobjectxyperm 11, -3, 1
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


ISLANDGAME_MINTY_MEADOWS_2_Jonas_Interact::
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Jonas_Interact_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact::
	msgbox ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0, MSGBOX_SIGN
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
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
	applymovement 15, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
	waitmovement 15
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
	closemessage
	addobject 16
	setobjectxy 16, 11, 11
	applymovement 16, ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp
	waitmovement 16
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
	startquest QUEST_FRESA_FARMS_LOST_MAREEP
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
	closemessage
	loadword 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact
	setfollower 15, 100, 0
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
	addobject 10
	setobjectxy 10, 32, 37
	applymovement 10, Phase1_MareepRun_1
	waitmovement 10
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
	applymovement 10, Common_Movement_Delay48
	waitmovement 10
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	applymovement 10, Phase1_MareepRun_2
	waitmovement 10
	addobject 11
	setobjectxy 11, 32, 37
	applymovement 10, Phase1_MareepRun_3
	applymovement 11, Phase1_MightyenaChase
	waitmovement 11
	waitmovement 10
	removeobject 10
	removeobject 11
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
	applymovement 11, Phase2_MightyenaWalksForward
	applymovement 10, Common_Movement_ExclamationMark
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
	waitmovement 11
	waitmoncry
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
	setwildbattle SPECIES_SHADOW_MIGHTYENA, 18
	setwilddoublebattle TRUE
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	destroyfollower
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
	destroyfollower
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
	setvar VAR_MINTY_MEADOWS_STATE, 4
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	fadescreen FADE_TO_BLACK
	removeobject 11
	setobjectxyperm 11, -3, 1
	fadescreen FADE_FROM_BLACK
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0
	closemessage
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8000, 11
	setvar VAR_0x8001, 5
	callnative TeleportCamera
	addobject OBJ_EVENT_ID_PLAYER
	addobject 16
	addobject 15
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 5
	setobjectxy 15, 10, 5
	setobjectxy 16, 11, 3
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
	fadescreen FADE_FROM_BLACK
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1
	closemessage
	applymovement 16, Phase3_OldManGivesItem_Part1
	waitmovement 16
	giveitem ITEM_LUCKY_EGG
	applymovement 16, Phase3_OldManGivesItem_Part2
	waitmovement 16
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2
	closemessage
	applymovement 15, Phase3_RivalRunsOff
	waitmovement 15
	removeobject 15
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
	walk_up
	walk_right
	face_down
	step_end

Phase3_RivalRunsOff:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Mareep::
	lock
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

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1::
	trainerbattle_single TRAINER_MINTY_MEADOWS_9, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2::
	trainerbattle_single TRAINER_MINTY_MEADOWS_10, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2_Text_1, MSGBOX_AUTOCLOSE
	return


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
	.string "I think Mareep might be near the\n"
	.string "forest...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
	.string "A Mightyena chasing my Mareep?\p"
	.string "This is far more than I can handle.$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
	.string "Thank you so much for helping save my\n"
	.string "Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
	.string "That must be the lost Mareep! I heard it\n"
	.string "run over to the far end of this forest.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
	.string "Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
	.string "That Mightyena looks... off. We need to\n"
	.string "save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3:
	.string "That was exciting! I need a rest after\n"
	.string "all that running...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_4:
	.string "{COLOR DARK_GRAY}I will heal your Pokemon for you.$"

ISLANDGAME_MINTY_MEADOWS_2_Jonas_Interact_Text_0:
	.string "Hello there.$"

ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0:
	.string "$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
	.string "Old Man: Oh...\pWhat am I going to do...\p(Probably best to leave him alone)$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Ugg... I'm only missing one more\n"
	.string "Pokémon on the list, and I can't find\l"
	.string "it!\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
	.string "{COLOR GREEN}Audrey: {COLOR DARK_GRAY}Umm, hi! Do I know you?\p"
	.string "{COLOR DARK_GRAY}...!\p"
	.string "{COLOR DARK_GRAY}You're {PLAYER}? The one who the\n"
	.string "professor said I'd be working with?\p"
	.string "{COLOR DARK_GRAY}It's good to meet you! I'm Audrey, a\n"
	.string "rising trainer just like you!\p"
	.string "{COLOR DARK_GRAY}I was trying to fill out my Pokédex\n"
	.string "here, but I just couldn't find a Riolu...$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
	.string "Wow, you're pretty good!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3:
	.string "Audrey: Man, you beat me!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
	.string "Old Man: Excuse me, I lost a Mareep!\p"
	.string "Please help find it?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
	.string "Audrey: I'm gonna go look for it!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0:
	.string "Audrey: What a weird encounter. At\n"
	.string "least the Mareep is safe!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1:
	.string "Old Man: Thank you so much! I was so\n"
	.string "scared for Mareep.\p"
	.string "Here, as a token of my graditude:$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2:
	.string "Audrey: Well, it was nice hanging out!\n"
	.string "I've got stuff to do!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
	.string "{COLOR DARK_GRAY}You can't leave without helping the old\n"
	.string "man find his Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1_Text_0:
	.string "{COLOR DARK_GRAY}Where are the Bug POKEMON in these\n"
	.string "plains?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1_Text_1:
	.string "{COLOR DARK_GRAY}I heard some bug exists in the cave.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2_Text_0:
	.string "{COLOR DARK_GRAY}I like coming here on my days off.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2_Text_1:
	.string "{COLOR DARK_GRAY}I need to go get milk from the nearby\n"
	.string "farms.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
	.string "{COLOR DARK_GRAY}I come here to practice my psychic\n"
	.string "powers.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
	.string "{COLOR DARK_GRAY}The nearby mountains make it easier to\n"
	.string "concentrate.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
	.string "{COLOR DARK_GRAY}That guy over there is so creepy.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
	.string "{COLOR DARK_GRAY}I heard Pokemon running around. Is\n"
	.string "there something happening?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
	.string "{COLOR DARK_GRAY}My brother told me that there would be\n"
	.string "strong Bug POKEMONS here.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
	.string "{COLOR DARK_GRAY}I will look for them until midnight if\n"
	.string "needed.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
	.string "{COLOR DARK_GRAY}I found a Mareep, but a Mightyena\n"
	.string "chased it away!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
	.string "{COLOR DARK_GRAY}Maybe you are stronger than the\n"
	.string "Mightyena$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
	.string "{COLOR DARK_GRAY}I am the strongest Bug Trainer around\n"
	.string "these parts.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
	.string "{COLOR DARK_GRAY}$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
	.string "{COLOR DARK_GRAY}Shorts are comfy and easy to wear!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
	.string "{COLOR DARK_GRAY}If only I had a Rattata$"

ConqueredMightyena_Text::
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
	.string "{COLOR DARK_GRAY}bro help me$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer1_Loss::
	.string "{COLOR DARK_GRAY}I will keep looking for some bugs.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer2_Loss::
	.string "{COLOR DARK_GRAY}Wow, you are strong!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss::
	.string "{COLOR DARK_GRAY}Looks like I still need more practice.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss::
	.string "{COLOR DARK_GRAY}I lost? My day is not going well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss::
	.string "{COLOR DARK_GRAY}The ones I currently have are not that\n"
	.string "strong.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss::
	.string "{COLOR DARK_GRAY}I guess I will look for another Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss::
	.string "{COLOR DARK_GRAY}It seems that you have bested the\n"
	.string "three of us.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss::
	.string "{COLOR DARK_GRAY}No fair!$"
