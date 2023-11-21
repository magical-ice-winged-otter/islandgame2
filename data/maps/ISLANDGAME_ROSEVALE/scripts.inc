ISLANDGAME_ROSEVALE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_ROSEVALE_STATE
	case 1, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_ROSEVALE_STATE, 3
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setobjectxyperm 6, 0, 0
	setobjectxyperm 8, 0, 0
	setobjectxyperm 7, 0, 0
	setobjectxyperm 3, 12, 14
	addobject 3
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setobjectxyperm 6, 20, 25
	setobjectxyperm 7, 18, 24
	setobjectxyperm 8, 19, 24
	setobjectxyperm 3, 20, 26
	addobject 6
	addobject 7
	addobject 8
	addobject 3
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	turnobject 6, DIR_WEST
	turnobject 3, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setobjectxyperm 6, 0, 0
	setobjectxyperm 7, 0, 0
	setobjectxyperm 8, 0, 0
	setobjectxyperm 3, 0, 0
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	setobjectxyperm 7, 17, 24
	addobject 7
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROSEVALE_STATE, 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	setvar VAR_ROSEVALE_STATE, 3
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_NPC
	giveitem ITEM_AMULET_COIN
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_NPC
	special HealPlayerParty
	setrespawn HEAL_LOCATION_ISLANDGAME_ROSEVALE
	warp MAP_ISLANDGAME_ROSEVALE_INN, 5, 3
	return


ISLANDGAME_ROSEVALE_Interact_LockedDoor::
	msgbox ISLANDGAME_ROSEVALE_Interact_LockedDoor_Text_0, MSGBOX_SIGN
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


ISLANDGAME_ROSEVALE_Interact_ArthurSister::
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0, MSGBOX_NPC
	return


ISLANDGAME_ROSEVALE_Interact_ArthurDad::
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0, MSGBOX_NPC
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
	setobjectxy 3, 18, 14
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
	setobjectxy 6, 25, 12
	applymovement 6, Movement_Arthur_WalkUpToExit
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0, MSGBOX_NPC
	trainerbattle_single TRAINER_SPECIAL_ARTHUR_1, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2, ArthurDefeated
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
	setobjectxy 7, 25, 12
	applymovement 7, Movement_ArthurDad_WalkUpToArthur
	applymovement 6, Movement_Arthur_SeesDad
	waitmovement 7
	waitmovement 6
	msgbox ArthurDefeated_Text_1, MSGBOX_NPC
	turnobject 6, DIR_EAST
	msgbox ArthurDefeated_Text_2, MSGBOX_NPC
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
	.string "Arthurs Sister: You did it! My Marill!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Arthurs Mom: Thank you for helping like\n"
	.string "you did today.\n"
	.string "This means a lot to us.$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "Arthurs Sister: Hey, take this for\n"
	.string "helping us out!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "Arthurs Dad: Please, stay the night to\n"
	.string "rest and recover.\n"
	.string "I'm sure you both have had a long day.$"

ISLANDGAME_ROSEVALE_Interact_LockedDoor_Text_0:
	.string "The door is locked$"

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

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0:
	.string "I'm scared. Is everything going to be\n"
	.string "ok?$"

ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0:
	.string "Sorry, the Inn is closed right now...$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0:
	.string "My dad won't let me join you in the\n"
	.string "festival tournament.\p"
	.string "He doesn't think I'm ready yet...\p"
	.string "But he's wrong! I am ready!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1:
	.string "Let me prove it, right now!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2:
	.string "Am I not good enough?$"

ArthurDefeated_Text_0:
	.string "I think my dad was right...\p"
	.string "Maybe I'm just not cut out for battling.$"

ArthurDefeated_Text_1:
	.string "Arthurs Dad: No, Arthur, that's not\n"
	.string "true.\p"
	.string "Arthurs Dad: Even though you weren't\n"
	.string "ready yet, you have a lot of potential.\p"
	.string "Arthurs Dad: Keep training! If you can\n"
	.string "beat Ruka at Tidalcove, I'll let you go.$"

ArthurDefeated_Text_2:
	.string "Arthur: Did you hear that? I definitely\n"
	.string "meet you again for the tournament!\p"
	.string "Arthur: Ruka might be really tough, but\n"
	.string "I know I can do it.\p"
	.string "Arthur: Good luck with your challenge!$"

Text_ArthurSister_PleaseHelp::
	.string "Excuse me, I need your help!\p"
	.string "A thief stole my Marill and down this\n"
	.string "path towards Mt. Aurora!\p"
	.string "My brother chased after them, but I\n"
	.string "don't think he can fight...\p"
	.string "Can you bring them back safely?$"
