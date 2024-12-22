ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	gettime
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_TEMP_2
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 20, -3, 1
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_InitialRival
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_PausedQuest
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_InitialRival::
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 12, 5
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 32, 10
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, 35, 8
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, 34, 10
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, 33, 12
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_PausedQuest::
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
# 107 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 14
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact::
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2:
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact::
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5
ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1:
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3:
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4:
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6:
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1


ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact::
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact::
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact::
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0, MSGBOX_SIGN
	return


# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack:
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 195 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1:
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 204 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 207 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2:
# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 209 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
# 213 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 216 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 221 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 224 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4:
# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
# 230 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 236 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5:
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
# 242 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5
# 244 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 245 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 248 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6:
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
# 254 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 255 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 257 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 260 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown:
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 265 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp:
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 270 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalRunDown:
# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
	step_end

# 275 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround:
# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 280 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 285 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 286 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 288 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 289 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 290 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 291 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 292 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet::
# 296 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 297 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 34
# 298 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 11
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 303 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 34, 11
# 304 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 34, 11
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
# 313 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
# 322 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 323 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_QuestionMark
# 324 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 328 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 329 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 331 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 335 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
# 341 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 347 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
# 367 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
# 374 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 375 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 378 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, -3, 1
# 380 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, -3, 1
# 381 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, -3, 1
# 382 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 18, 12
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 388 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 390 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6
# 398 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 400 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 401 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 402 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7
# 409 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 412 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 417 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 421 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8
# 430 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 437 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 439 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollower 8, 0x100, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
# 442 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
# 444 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 445 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
# 446 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
# 452 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1
	return

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1:
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 455 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 458 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 32, 37
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_1
# 461 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 465 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 466 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 469 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 470 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_2
# 471 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 474 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 7
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 7, 32, 37
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_3
# 477 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, Phase1_MightyenaChase
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 479 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 483 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 484 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 488 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_RivalEnter:
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 497 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 502 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_1:
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 507 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_2:
# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 514 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_3:
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 519 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MightyenaChase:
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
# 528 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 531 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0
# 536 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, Phase2_MightyenaWalksForward
# 538 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 539 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 540 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 541 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 542 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 543 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 544 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 545 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 546 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 547 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 548 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 549 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 550 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 551 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1
# 559 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 560 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
# 561 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 564 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase2_RivalCatchUp:
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 568 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 571 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase2_MightyenaWalksForward:
# 572 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 573 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
# 579 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 580 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 581 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 582 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 583 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 584 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setcwildbattle 0, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 585 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoublebattle TRUE
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 588 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 589 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 590 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 591 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 592 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 594 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 595 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
# 597 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
# 600 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollower
# 601 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
# 603 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
# 596 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollower
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


# 606 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
RivalChecksMareep:
# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 608 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 611 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
MareepHappy:
# 612 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 613 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 613 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 613 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 616 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
MareepGoodbye:
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 620 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
TalkToAudrey:
# 621 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 624 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
AudreyConfused:
# 625 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 626 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 629 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
LookBackAtMareep:
# 630 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
# 634 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 4
# 635 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
# 638 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 61
# 639 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 16
# 640 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 641 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 642 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 643 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 644 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 61, 16
# 645 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 60, 16
# 646 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 647 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 648 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
# 649 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 652 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0
# 657 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 658 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, RivalChecksMareep
# 659 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 660 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1
# 661 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 662 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 663 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, MareepHappy
# 664 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 665 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2
# 672 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 673 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 675 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3
# 680 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 681 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkToAudrey
# 682 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 683 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, AudreyConfused
# 684 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 685 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4
# 691 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, LookBackAtMareep
# 692 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 693 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5
# 694 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 697 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 698 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 11
# 699 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 8
# 700 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 701 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 702 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 703 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 704 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 705 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 706 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 707 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 708 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 709 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 710 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 711 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 712 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 10, 8
# 713 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 11, 6
# 714 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 10, 6
# 715 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 718 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6
# 725 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 726 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Phase3_OldManGivesItem_Part1
# 727 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 728 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 729 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Phase3_OldManGivesItem_Part2
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 733 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7
# 739 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 741 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, WalkBackToFarm
# 742 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 743 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, MareepGoodbye
# 745 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 746 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 747 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, WalkBackToFarm
# 748 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 749 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 750 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 751 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 752 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8
# 758 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 759 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 760 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 761 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 762 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 763 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9
# 769 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_10
# 775 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_11
# 781 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_12
# 789 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 790 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Phase3_RivalRunsOff
# 791 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 792 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 793 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 794 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 795 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 796 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 9
# 797 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 798 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, -3, 1
# 799 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 800 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 802 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 803 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
# 804 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 805 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 806 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 809 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_OldManGivesItem_Part1:
# 810 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 813 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_OldManGivesItem_Part2:
# 814 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 815 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 816 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 816 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 816 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 817 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 818 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 819 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 822 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
WalkBackToFarm:
# 823 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 823 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 823 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 823 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 826 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_RivalRunsOff:
# 827 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 827 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 827 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 827 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 827 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Mareep::
# 837 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 838 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 839 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox MareepHelp_Text
# 840 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey::
# 849 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
# 850 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 851 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 852 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollower
	return


ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack::
# 858 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 859 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 860 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 861 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 862 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0
# 863 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitbuttonpress
# 864 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 866 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollower 8, 0x100, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
# 867 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 868 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 869 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage::
# 874 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0
# 875 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1
# 876 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 877 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2, YES
# 878 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3, NO
# 879 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
	return


ISLANDGAME_MINTY_MEADOWS_2_CantLeave::
# 885 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 886 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 887 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3
# 889 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4
# 912 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1:
# 938 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3:
# 888 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4:
# 890 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollower
# 891 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 892 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 893 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7
# 906 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5:
# 913 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollower
# 914 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 915 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 916 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10
# 931 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7:
# 894 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 896 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 897 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 899 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 900 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 901 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 902 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 903 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 904 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitbuttonpress
# 905 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8:
# 907 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 908 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 909 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 910 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10:
# 917 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 919 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 920 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 921 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 922 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 923 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 924 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 925 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 926 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 927 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 928 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 929 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitbuttonpress
# 930 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11:
# 932 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 933 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 934 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 935 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1


ISLANDGAME_MINTY_MEADOWS_2_CantLeave2::
# 942 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1:
# 943 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0
# 944 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 945 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 946 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle::
# 951 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 952 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 953 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 954 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setcwildbattle 0, SPECIES_DRIFLOON, 13
# 955 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 956 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 957 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 958 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 959 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 960 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 962 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 963 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3
# 965 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4
# 967 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5
# 970 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6
# 974 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1:
# 976 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5:
# 968 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 969 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6:
# 971 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 972 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1


ISLANDGAME_MINTY_MEADOWS_2_CantGoYet::
# 980 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1:
# 981 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0
# 982 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 983 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 984 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3::
# 1001 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss
# 1002 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4::
# 1006 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss
# 1007 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5::
# 1011 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss
# 1012 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6::
# 1016 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss
# 1017 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7::
# 1021 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss
# 1022 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8::
# 1026 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss
# 1027 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0:
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Thank you so much for saving my\n"
	.string "precious Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}That must be the lost Mareep!\n"
	.string "I think it ran off to the end of the\l"
	.string "forest!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Phew... I need to take a break after all\n"
	.string "that running...$"

ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0:
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0:
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0:
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
# 317 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Ugg...{PAUSE 30} I'm only missing one more\n"
	.string "Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
# 337 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Umm, hi! Do I know you?\p"
	.string "{COLOR DARK_GRAY}...Mhm...{PAUSE 30}Okay...{PAUSE 30}Oh!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
# 349 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}You're {PLAYER}? The professor told\n"
	.string "me about you earlier today!\p"
	.string "{COLOR DARK_GRAY}It's good to meet you! I'm Melissa, a\n"
	.string "rising Pokémon trainer just like you!\p"
	.string "{COLOR DARK_GRAY}I was trying to fill out my Pokédex\n"
	.string "here, but I just couldn't find a\l"
	.string "Scorbunny...\p"
	.string "{COLOR DARK_GRAY}How are you enjoying the isles so far?\n"
	.string "Isn't it awesome here?\p"
	.string "{COLOR DARK_GRAY}Eh? It's too hot and humid? Um, well,\n"
	.string "you'll get used to it eventually!\p"
	.string "{COLOR DARK_GRAY}Oh! Now that you're here, let's have a\n"
	.string "Pokémon battle! I need some action!\p"
	.string "{COLOR DARK_GRAY}I'm warning you though...{PAUSE 30} I'm pretty\n"
	.string "good!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3:
# 360 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Eep! You're pretty strong too!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
# 369 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... sometimes I say things before I\n"
	.string "think.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}E-Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6:
# 392 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm one of the owners of\n"
	.string "the nearby farm.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7:
# 406 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8:
# 424 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Really? Oh, I can't thank\n"
	.string "you two enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9:
# 433 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0:
# 533 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1:
# 553 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh no! Quick, {PLAYER}! We\n"
	.string "need to save that Mareep!\p"
	.string "{COLOR RED}(...That Mightyena... Something seems...\n"
	.string "off about it.)\p"
	.string "{COLOR RED}(There seems to be a dark aura\n"
	.string "radiating from it...)$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0:
# 654 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1:
# 660 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2:
# 667 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay Mareep. You're\n"
	.string "safe with us now!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3:
# 677 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Heh... We make a pretty solid team, don't\n"
	.string "we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4:
# 687 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}...Huh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? I'm\n"
	.string "confused... I didn't see any of that.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5:
# 693 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hmm. Well either way, we should probably\n"
	.string "get Mareep back to its owner.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6:
# 720 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Oh, my precious baby is safe\n"
	.string "and sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\p"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Please, take one of these\n"
	.string "as a token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7:
# 735 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}If you want to check out\n"
	.string "our farm, we're right up here.\p"
	.string "{COLOR DARK_GRAY}Feel free to visit anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8:
# 754 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}The way you handled that\n"
	.string "vicious Mightyena with your Pokémon...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9:
# 764 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh!?{PAUSE 60} You don't know about the\n"
	.string "tournament!?\p"
	.string "{COLOR DARK_GRAY}It's a tournament hosted during the\n"
	.string "Silverwing Festival where only the best\l"
	.string "trainers of Marya assemble to compete\l"
	.string "for the Silverwing Cup!\p"
	.string "{COLOR DARK_GRAY}I'm taking part in it, and I think you\n"
	.string "should to! You'd be a great competitor!\p"
	.string "{COLOR DARK_GRAY}To qualify, you'll have to complete the\n"
	.string "Marya Gym Challenge!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_10:
# 770 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}That is, you'll have to travel across\n"
	.string "the three main islands of Oranna,\l"
	.string "Lumine, and Minerva...\p"
	.string "{COLOR DARK_GRAY}...and challenge their respective gym\n"
	.string "leaders in battle!\p"
	.string "{COLOR DARK_GRAY}Ooh... I just can't wait! I just want the\n"
	.string "festival to begin tomorrow!\p"
	.string "{COLOR DARK_GRAY}Huh?{PAUSE 30} Oh, you're right.{PAUSE 30} Neither of us\n"
	.string "would qualify if it started tomorrow...$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_11:
# 776 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Well, I have to report back to the\n"
	.string "professor with my findings.\p"
	.string "{COLOR DARK_GRAY}But {PLAYER}, you should go west of\n"
	.string "Maplegrove and head up to Tidalcove!\p"
	.string "{COLOR DARK_GRAY}That's where you'll find the first gym\n"
	.string "leader: Ruka!\p"
	.string "{COLOR DARK_GRAY}Ruka is really famous around here. On\n"
	.string "top of being a gym leader, she's used to\l"
	.string "be a professional swimmer and swimsuit\l"
	.string "model!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_12:
# 782 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}-sigh- I wish I could be as confident as\n"
	.string "her...\p"
	.string "{COLOR DARK_GRAY}Oops, there I go rambling again...\n"
	.string "Anyways! Bye-bye for now, {PLAYER}!\p"
	.string "{COLOR DARK_GRAY}Oh! I almost forgot! Let's exchange\n"
	.string "phone numbers so we can keep in touch!\p"
	.string "{COLOR DARK_GRAY}Mhm...{PAUSE 30} Alright...{PAUSE 30} and there we go! All set!\p"
	.string "{COLOR DARK_GRAY}Okie, goodbye for real now! Let's meet\n"
	.string "up again soon!$"

ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0:
# 862 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Welcome back! Let's go get\n"
	.string "that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0:
# 874 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "the old-timer we'd help find his Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1:
# 875 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2:
# 877 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3:
# 878 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1:
# 907 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0:
# 943 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0:
# 981 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(I should really help the Farm Owner\n"
	.string "find his Mareep first...)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
# 1001 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
# 1002 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
# 1006 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
# 1007 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
# 1011 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
# 1012 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
# 1016 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
# 1017 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
# 1021 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
# 1022 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
# 1026 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
# 1027 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ConqueredMightyena_Text::
# 832 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
# 843 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss::
# 1038 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss::
# 1041 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss::
# 1044 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss::
# 1048 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss::
# 1052 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss::
# 1056 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\nshorts...$"
