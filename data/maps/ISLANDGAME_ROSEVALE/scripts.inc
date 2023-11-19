ISLANDGAME_ROSEVALE_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ROSEVALE_STATE, 1, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	map_script_2 VAR_ROSEVALE_STATE, 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	.2byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	setobjectxyperm 6, 0, 0
	setobjectxyperm 7, 0, 0
	setobjectxyperm 8, 0, 0
	setobjectxyperm 3, 24, 14
	addobject 3
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
	setobjectxyperm 6, 31, 25
	setobjectxyperm 7, 31, 24
	setobjectxyperm 8, 30, 24
	setobjectxyperm 3, 31, 26
	addobject 6
	addobject 7
	addobject 8
	addobject 3
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROSEVALE_STATE, 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	setvar VAR_ROSEVALE_STATE, 3
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_NPC
	warp MAP_ISLANDGAME_ROSEVALE_INN, 5, 3
	return


ISLANDGAME_ROSEVALE_Interact_PuddleMon::
	lock
	faceplayer
	playmoncry SPECIES_CHARMANDER, CRY_MODE_ENCOUNTER
	waitmoncry
	release
	return


Movement_TrainerJump:
	jump_in_place_left
	jump_in_place_up
	jump_in_place_right
	jump_in_place_down
	jump_in_place_left
	step_end

Movement_MonWatch:
	face_right
	step_end

Movement_MonJump:
	jump_in_place_right
	step_end

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer::
	lock
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0
	closemessage
	applymovement 5, Movement_MonWatch
	applymovement 4, Movement_TrainerJump
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1
	closemessage
	applymovement 5, Movement_MonJump
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
	waitmoncry
	waitmovement 0
	release
	return


ISLANDGAME_ROSEVALE_Interact_EntranceSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_InnSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_AuroraPathSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_AuroraPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_ArthurSister::
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0, MSGBOX_NPC
	return


Movement_ArthurSister_RunUpToPath:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest::
	lock
	addobject 3
	setobjectxy 3, 30, 14
	applymovement 3, Movement_ArthurSister_RunUpToPath
	waitmovement 3
	msgbox Text_ArthurSister_PleaseHelp, MSGBOX_NPC
	setvar VAR_ROSEVALE_STATE, 1
	release
	return


Movement_Arthur_WalkUpToExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight::
	lock
	addobject 6
	setobjectxy 6, 38, 12
	applymovement 6, Movement_Arthur_WalkUpToExit
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0, MSGBOX_NPC
	trainerbattle_single TRAINER_BRANDON, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2, ArthurDefeated
	release
	return


Movement_ArthurDad_WalkUpToArthur:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Arthur_SeesDad:
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	emote_exclamation_mark
	step_end

Movement_ArthurDad_WalkAway:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Arthur_WalkAway:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

ArthurDefeated:
	msgbox ArthurDefeated_Text_0, MSGBOX_NPC
	addobject 7
	setobjectxy 7, 38, 12
	applymovement 7, Movement_ArthurDad_WalkUpToArthur
	applymovement 6, Movement_Arthur_SeesDad
	waitmovement 7
	waitmovement 6
	msgbox ArthurDefeated_Text_1, MSGBOX_NPC
	applymovement 7, Movement_ArthurDad_WalkAway
	applymovement 6, Movement_Arthur_WalkAway
	waitmovement 6
	waitmovement 7
	removeobject 6
	removeobject 7
	setvar VAR_ROSEVALE_STATE, 4
	release
	return


ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "Arthurs Dad: Thanks so helping!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Arthurs Mom: We are so thankful!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "Arthurs Sister: You are the best!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "Arthurs Dad: Please - stay the night,\n"
	.string "free of charge.$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0:
	.string "It's ok! The water isn't going to hurt\n"
	.string "you...\n"
	.string "Watch!$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1:
	.string "See?\n"
	.string "It's shallow!$"

ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0:
	.string "Welcome to Rosevale!$"

ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0:
	.string "ROSEVALE INN$"

ISLANDGAME_ROSEVALE_Interact_AuroraPathSign_Text_0:
	.string "Mt. Aurora Path$"

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0:
	.string "I'm scared. Is everything going to be\n"
	.string "ok?$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0:
	.string "arthur explains situation$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1:
	.string "intro$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2:
	.string "lose$"

ArthurDefeated_Text_0:
	.string "arthur talks about fight$"

ArthurDefeated_Text_1:
	.string "conversation between all$"

Text_ArthurSister_PleaseHelp::
	.string "Please, you have to help! Someone stole\n"
	.string "my Marill and my brother chased them! I\l"
	.string "don't want anyone to get hurt...$"
