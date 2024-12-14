ISLANDGAME_ROSEVALE_INN_2F_MapScripts::
# 7 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	compare VAR_ROSEVALE_STATE, 6
	goto_if_ne ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	map_script_2 VAR_ROSEVALE_STATE, 6, ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 15 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 1, WalkInPlaceUp
# 17 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 19 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 26 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	checkitemspace ITEM_AMULET_COIN
# 27 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
# 33 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 34 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	setflag FLAG_ROSEVALE_AMULET_COIN_GIFT
ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 37 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 41 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	closemessage
# 43 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 44 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 1, Movement_GoAway
# 45 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 47 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	removeobject 1
# 50 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 51 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 2, Movement_AzurillThanks
# 52 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 54 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmoncry
# 55 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 2, Movement_GoAway
# 56 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 58 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	removeobject 2
# 60 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 7
	return

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 28 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	goto ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


# 65 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
Movement_GoAway:
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_left
# 67 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_up
# 67 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_up
# 67 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_fast_up
	step_end

# 70 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
Movement_AzurillThanks:
# 71 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	walk_left
# 72 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	face_up
# 73 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	jump_in_place_up
# 73 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	jump_in_place_up
	step_end

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 22 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	.string "Hewwo, {PLAYER}! Did you sleep good?\n"
	.string "I made sure your pillow was extra\l"
	.string "fwuffi!\p"
	.string "I also made this for you last night! It's\n"
	.string "a gift from me and A-zoo-wil!$"

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 29 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	.string "Oh... your bag is fwull! That's okay, I\n"
	.string "can give it to you later!$"

ISLANDGAME_ROSEVALE_INN_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 38 "data/maps/ISLANDGAME_ROSEVALE_INN_2F/scripts.pory"
	.string "Arfur told me you're leaving alweady...{PAUSE 30} I\n"
	.string "wanted to pway with you more!\p"
	.string "Pwease come back to visit us when you\n"
	.string "finish with your twainer stuff!$"
