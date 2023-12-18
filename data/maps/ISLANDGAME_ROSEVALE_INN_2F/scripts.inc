ISLANDGAME_ROSEVALE_INN_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_ROSEVALE_STATE, 6
	goto_if_ne ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROSEVALE_STATE, 6, ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lock
	applymovement 1, WalkInPlaceUp
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	giveitem ITEM_AMULET_COIN
	msgbox ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 1, Movement_GoAway
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 2, Movement_AzurillThanks
	waitmovement 0
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	waitmoncry
	applymovement 2, Movement_GoAway
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	removeobject 2
	setvar VAR_ROSEVALE_STATE, 7
	return


Movement_GoAway:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Movement_AzurillThanks:
	walk_left
	face_up
	jump_in_place_up
	jump_in_place_up
	step_end

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "Hewwo, {PLAYER}! Did you sleep good?\n"
	.string "I made sure your pillow was extra\l"
	.string "fwuffi!\p"
	.string "I also made this for you last night! It's\n"
	.string "a gift from me and A-zoo-wil!$"

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "Arfur told me you're leaving alweady... I\n"
	.string "wanted to pway with you more!\p"
	.string "Pwease come back to visit us when you\n"
	.string "finish with your twainer stuff!$"
