ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	gettime
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_TEMP_2
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 17, -3, 1
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 45 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_InitialRival
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_PausedQuest
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
	goto ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_InitialRival::
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 12, 5
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 32, 10
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, 35, 8
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, 34, 10
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, 33, 12
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_StartedQuest::
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_PausedQuest::
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 15
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight::
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, 10, 9
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, 61, 13
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, 61, 14
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena::
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact::
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_2:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_3:
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_4:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_5:
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact::
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5
ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1:
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_3:
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_4:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_5:
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_6:
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0, MSGBOX_NPC
	goto ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_1


ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact::
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact::
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact::
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0, MSGBOX_SIGN
	return


# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack:
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
	step_end

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival::
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_Player_StepBack
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1:
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger1::
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement1
# 204 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2:
# 209 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 210 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger2::
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement2
# 216 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 217 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger3::
# 221 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 222 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 225 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4:
# 226 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 227 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger4::
# 231 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 232 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement4
# 233 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 234 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 237 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5:
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 238 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 239 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger5::
# 243 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 244 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement5
# 245 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 246 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 249 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6:
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 250 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 251 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
	step_end

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Trigger6::
# 255 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 256 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Movement6
# 257 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 258 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main
	return


# 261 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown:
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 262 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 263 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp:
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 267 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 268 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 271 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalRunDown:
# 272 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
# 273 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_down
	step_end

# 276 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround:
# 277 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 278 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 279 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_4
# 280 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 281 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 282 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 283 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 284 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 285 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 286 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 287 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 288 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
# 289 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 290 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_8
# 291 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 292 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 293 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet::
# 297 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 298 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 34
# 299 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 11
# 300 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 301 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 302 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 304 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 34, 11
# 305 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, 34, 10
# 306 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 34, 11
# 307 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main::
# 314 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalLookAround
# 315 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 316 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0
# 323 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 324 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_QuestionMark
# 325 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 326 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 327 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 328 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 329 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 330 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 332 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, ISLANDGAME_MINTY_MEADOWS_2_RivalWalkDown
# 333 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 336 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1
# 342 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 343 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 344 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 345 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 346 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 347 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 348 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MINTY_MEADOWS_RIVAL, ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_3
# 362 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 363 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2
# 368 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4
# 375 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	savebgm MUS_DUMMY
# 376 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadedefaultbgm
# 379 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 380 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 14, -3, 1
# 381 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 15, -3, 1
# 382 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 16, -3, 1
# 383 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 18, 12
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5
# 385 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 386 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, ISLANDGAME_MINTY_MEADOWS_2_OldManWalkUp
# 387 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 388 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 389 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 391 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6
# 399 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 400 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 401 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 402 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 403 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 404 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 405 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7
# 410 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 411 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 412 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 413 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 414 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 415 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 416 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 417 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 418 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 419 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 420 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 421 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 422 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 423 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8
# 431 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 432 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9
# 435 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 436 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 437 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 438 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 440 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollower 8, 0x100, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
# 443 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_TeleportGauntlet
# 445 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 446 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_StartedQuest
# 447 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_2:
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
# 453 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 1
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1
	return

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1_1:
# 454 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 456 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 459 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 460 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 32, 37
# 461 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_1
# 462 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 463 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 466 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 467 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 470 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 471 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_2
# 472 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 475 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 7
# 476 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 7, 32, 37
# 477 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Phase1_MareepRun_3
# 478 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, Phase1_MightyenaChase
# 479 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 480 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 6
# 481 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 482 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 484 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 485 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 489 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_RivalEnter:
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 490 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 491 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 492 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 493 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 494 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 495 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 496 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 497 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 498 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_up
# 499 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 500 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 503 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_1:
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 504 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 505 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 508 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_2:
# 509 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 510 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
# 511 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 512 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 515 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MareepRun_3:
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 516 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 517 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

# 520 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase1_MightyenaChase:
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 521 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 522 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 523 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
# 529 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 532 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0
# 537 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 538 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 7, Phase2_MightyenaWalksForward
# 539 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 540 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 541 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 542 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 543 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 7
# 544 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 545 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 546 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 547 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 548 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 549 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 550 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 551 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 552 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1
# 560 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 3
# 561 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_SawMareepPreFight
# 562 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 565 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase2_RivalCatchUp:
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 566 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 567 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_left
# 568 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_fast_up
# 569 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 572 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase2_MightyenaWalksForward:
# 573 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 574 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	step_end

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
# 580 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 581 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 582 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 583 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 584 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 585 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_MIGHTYENA, 25, ITEM_SITRUS_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_POISON_FANG, MOVE_SAND_ATTACK, MOVE_SWAGGER
# 586 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setwilddoubleflag
# 587 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
# 588 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 589 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 590 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 591 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 592 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 593 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 595 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 596 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3
# 598 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4
# 601 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollower
# 602 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene
ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1:
# 604 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_3:
# 597 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollower
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1

ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena_1


# 607 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
RivalChecksMareep:
# 608 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 608 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 608 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 609 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

# 612 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
MareepHappy:
# 613 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_left
# 614 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 614 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
# 614 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_left
	step_end

# 617 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
MareepGoodbye:
# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
# 618 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	jump_in_place_down
	step_end

# 621 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
TalkToAudrey:
# 622 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_in_place_slow_up
	step_end

# 625 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
AudreyConfused:
# 626 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 627 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	emote_question_mark
	step_end

# 630 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
LookBackAtMareep:
# 631 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_right
	step_end

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene::
# 635 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 4
# 636 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_DefeatedMightyena
# 639 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 61
# 640 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 16
# 641 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 642 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 643 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 644 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 645 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 61, 16
# 646 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 60, 16
# 647 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 648 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 7
# 649 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 7, -3, 1
# 650 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 653 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0
# 658 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 659 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, RivalChecksMareep
# 660 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 661 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1
# 662 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 663 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 664 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, MareepHappy
# 665 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 666 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2
# 673 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 674 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 676 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3
# 681 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 682 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TalkToAudrey
# 683 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 684 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, AudreyConfused
# 685 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 686 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4
# 692 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, LookBackAtMareep
# 693 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 694 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5
# 695 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 698 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 699 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8000, 11
# 700 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_0x8001, 8
# 701 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	callnative TeleportCamera
# 702 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER
# 703 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 8
# 704 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 9
# 705 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	addobject 6
# 706 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 707 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 708 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 709 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 710 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 711 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 712 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 8
# 713 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 8, 10, 8
# 714 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 9, 11, 6
# 715 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxy 6, 10, 6
# 716 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 719 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6
# 726 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 727 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Phase3_OldManGivesItem_Part1
# 728 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 729 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 730 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, Phase3_OldManGivesItem_Part2
# 731 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 9
# 734 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7
# 740 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 742 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 9, WalkBackToFarm
# 743 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 744 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 745 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, MareepGoodbye
# 746 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 747 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 748 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 6, WalkBackToFarm
# 749 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 750 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 751 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 752 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 753 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8
# 759 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 760 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 761 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 762 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 763 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 0
# 764 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9
# 770 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_10
# 776 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_11
# 782 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_12
# 790 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
# 791 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Phase3_RivalRunsOff
# 792 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_Delay48
# 793 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 794 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 795 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 8
# 796 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 6
# 797 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	removeobject 9
# 798 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 8, -3, 1
# 799 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 9, -3, 1
# 800 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setobjectxyperm 6, -3, 1
# 801 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	special HealPlayerParty
# 803 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	completequest QUEST_MINTY_MEADOWS_MELISSA
# 804 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	startquest QUEST_MARYA_GYM_CHALLENGE
# 805 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_RIVAL_DEFEATED
# 806 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_TEMP_5, 1
# 807 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


# 810 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_OldManGivesItem_Part1:
# 811 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

# 814 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_OldManGivesItem_Part2:
# 815 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_left
# 816 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
# 817 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 817 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 817 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	delay_16
# 818 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 819 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 820 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	face_down
	step_end

# 823 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
WalkBackToFarm:
# 824 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 824 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 824 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
# 824 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_up
	step_end

# 827 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
Phase3_RivalRunsOff:
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 828 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 829 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_right
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
# 830 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_MINTY_MEADOWS_2_Mareep::
# 838 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 839 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 840 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox MareepHelp_Text
# 841 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey::
# 850 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 2
# 851 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 852 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 853 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	destroyfollower
	return


ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack::
# 859 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 860 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 861 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playse SE_PIN
# 862 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 863 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack_Text_0
# 864 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitbuttonpress
# 865 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 867 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setfollower 8, 0x100, ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact, PARTNER_MEADOWS_RIVAL
# 868 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setvar VAR_MINTY_MEADOWS_STATE, 1
# 869 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 870 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage::
# 875 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0
# 876 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1
# 877 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 878 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2, YES
# 879 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3, NO
# 880 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dynmultistack 20, 8, TRUE, 3, FALSE, NO, DYN_MULTICHOICE_CB_NONE
	return


ISLANDGAME_MINTY_MEADOWS_2_CantLeave::
# 886 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 887 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 888 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 2, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3
# 890 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 3, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4
# 913 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case 1, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5
ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1:
# 939 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_3:
# 889 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_WelcomeBack
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_4:
# 891 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollower
# 892 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 893 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 894 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7
# 907 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_5:
# 914 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	facefollower
# 915 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage
# 916 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 917 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case YES, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10
# 932 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case NO, ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_7:
# 895 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 897 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 898 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 899 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 900 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 901 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 902 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 903 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 904 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 905 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitbuttonpress
# 906 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_8:
# 908 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 909 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 910 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 911 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_10:
# 918 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	call ISLANDGAME_MINTY_MEADOWS_2_Mark_Audrey
# 920 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 921 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 922 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 923 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 924 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	message ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0
# 925 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 926 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 927 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 928 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement 8
# 929 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmessage
# 930 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitbuttonpress
# 931 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_11:
# 933 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1
# 934 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 935 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 936 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	goto ISLANDGAME_MINTY_MEADOWS_2_CantLeave_1


ISLANDGAME_MINTY_MEADOWS_2_CantLeave2::
# 943 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_1:
# 944 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0
# 945 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 946 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 947 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle::
# 952 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	lock
# 953 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	faceplayer
# 954 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 955 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_DRIFLOON, 13, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0
# 956 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
# 957 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmoncry
# 958 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 959 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	dowildbattle
# 960 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 961 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 963 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	switch VAR_RESULT
# 964 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3
# 966 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4
# 968 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5
# 971 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6
# 975 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1:
# 977 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_3:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_4:
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_5:
# 969 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 970 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1

ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_6:
# 972 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	setflag FLAG_DAILY_MINTY_MEADOWS_DRIFLOON
# 973 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_2_DrifloonBattle_1


ISLANDGAME_MINTY_MEADOWS_2_CantGoYet::
# 981 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1
	return

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_1:
# 982 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0
# 983 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 984 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 985 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	closemessage
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3::
# 1002 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss
# 1003 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4::
# 1007 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss
# 1008 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5::
# 1012 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss
# 1013 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6::
# 1017 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss
# 1018 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7::
# 1022 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss
# 1023 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8::
# 1027 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss
# 1028 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_0:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I could've sworn it was somewhere in the\n"
	.string "forest to the east...$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_1:
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "What? A wild Mightyena was chasing my\n"
	.string "precious Mareep?\p"
	.string "You have to save him, please!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_Interact_Text_2:
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Thank you so much for saving my\n"
	.string "precious Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_0:
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}That must be the lost Mareep!\n"
	.string "I think it ran off to the end of the\l"
	.string "forest!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_1:
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hmm... where could it be?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_2:
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "We need to save that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Interact_Text_3:
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Phew... I need to take a break after all\n"
	.string "that running...$"

ISLANDGAME_MINTY_MEADOWS_2_FlowerSign_Interact_Text_0:
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}MINTY MEADOWS\n"
	.string "Beware of scary Drifloon at night!$"

ISLANDGAME_MINTY_MEADOWS_2_TunnelSign_Interact_Text_0:
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}TRAVELER'S TUNNEL\n"
	.string "WARNING: THICK FOG INSIDE!$"

ISLANDGAME_MINTY_MEADOWS_2_PopsHouse_Interact_Text_0:
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POPS' RESIDENCE\n"
	.string "Owner of Minty Meadows!$"

ISLANDGAME_MINTY_MEADOWS_2_OldMan_PreRival_Text_0:
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Ah, young trainer! Please give me a\n"
	.string "moment. I am trying to count my Mareep.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_0:
# 318 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Ugg...{PAUSE 30} I'm only missing one more\n"
	.string "Pokémon!{PAUSE 30} Where in the world is it?\p"
	.string "{COLOR DARK_GRAY}Waah! I give up! I'm convinced it\n"
	.string "doesn't even exist!\p"
	.string "{COLOR DARK_GRAY}Eh?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_1:
# 338 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Umm, hi! Do I know you?\p"
	.string "{COLOR DARK_GRAY}...Mhm...{PAUSE 30}Okay...{PAUSE 30}Oh!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_2:
# 350 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 361 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Eep! You're pretty strong too!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_4:
# 370 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Drats, I wasn't expecting to\n"
	.string "lose to you, {PLAYER}...\p"
	.string "{COLOR DARK_GRAY}W-Wait, I didn't mean it like that! I was\n"
	.string "just surprised at how skilled you are!\p"
	.string "{COLOR DARK_GRAY}Sorry... sometimes I say things before I\n"
	.string "think.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_5:
# 384 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}E-Excuse me! Young trainers!$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_6:
# 393 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm one of the owners of\n"
	.string "the nearby farm.\p"
	.string "{COLOR DARK_GRAY}Have you two seen a Mareep with a blue\n"
	.string "collar wandering around by chance?\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}I haven't... Did you lose one?\p"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}I'm afraid so... When I was\n"
	.string "counting my Mareep after taking them\l"
	.string "out to graze, I noticed one was missing.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_7:
# 407 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh my... that's terrible! We'll\n"
	.string "help you look, right {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_8:
# 425 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Really? Oh, I can't thank\n"
	.string "you two enough!\p"
	.string "{COLOR DARK_GRAY}The last place I saw my precious Mareep\n"
	.string "was in the forest to the east.$"

ISLANDGAME_MINTY_MEADOWS_2_RivalFight_Main_Text_9:
# 434 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Sounds good! {PLAYER}! Let's\n"
	.string "head over there immediately!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_0:
# 534 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}We finally found it!$"

ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2_Text_1:
# 554 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Oh no! Quick, {PLAYER}! We\n"
	.string "need to save that Mareep!\p"
	.string "{COLOR RED}(...That Mightyena... Something seems...\n"
	.string "off about it.)\p"
	.string "{COLOR RED}(There seems to be a dark aura\n"
	.string "radiating from it...)$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_0:
# 655 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Phew... That was an intense\n"
	.string "fight. Thank goodness we came in time!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_1:
# 661 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}It looks like Mareep isn't hurt at all.\n"
	.string "That's a relief...$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_2:
# 668 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reeeep...\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Awh. It's okay Mareep. You're\n"
	.string "safe with us now!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_3:
# 678 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Heh... We make a pretty solid team, don't\n"
	.string "we, {PLAYER}?$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_4:
# 688 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}...Huh? Something was off about the\n"
	.string "Pokémon? What do you mean?\p"
	.string "{COLOR DARK_GRAY}Red eyes? A wicked dark aura? I'm\n"
	.string "confused... I didn't see any of that.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_5:
# 694 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hmm. Well either way, we should probably\n"
	.string "get Mareep back to its owner.$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_6:
# 721 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Oh, my precious baby is safe\n"
	.string "and sound! I am in your debt, trainers!\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Heheh. It was nothing, really!\p"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}Please, take one of these\n"
	.string "as a token of my gratitude!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_7:
# 736 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Farm Owner: {COLOR DARK_GRAY}If you want to check out\n"
	.string "our farm, we're right up here.\p"
	.string "{COLOR DARK_GRAY}Feel free to visit anytime!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_8:
# 755 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}The way you handled that\n"
	.string "vicious Mightyena with your Pokémon...\p"
	.string "{COLOR DARK_GRAY}{PLAYER}!{PAUSE 30} You should enter the\n"
	.string "Silverwing Festival Tournament!$"

ISLANDGAME_MINTY_MEADOWS_2_PostFightCutscene_Text_9:
# 765 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 771 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 777 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 783 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
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
# 863 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Welcome back! Let's go get\n"
	.string "that Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_0:
# 875 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Eh? We can't leave yet! We told\n"
	.string "the old-timer we'd help find his Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_1:
# 876 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Do you really have to leave?$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_2:
# 878 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Yes$"

ISLANDGAME_MINTY_MEADOWS_2_LeaveMessage_Text_3:
# 879 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "No$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_0:
# 899 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay... Please come back as soon as you\n"
	.string "can!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave_Text_1:
# 908 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Alright! Let's get back to business!$"

ISLANDGAME_MINTY_MEADOWS_2_CantLeave2_Text_0:
# 944 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Huh? We have to help Mareep!$"

ISLANDGAME_MINTY_MEADOWS_2_CantGoYet_Text_0:
# 982 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR RED}(I should really help the Farm Owner\n"
	.string "find his Mareep first...)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_0:
# 1002 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy pardner! Howsabout we get a\n"
	.string "quick scrap in?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Text_1:
# 1003 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "A mighty fine party of Pokes ya got on\n"
	.string "ya.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_0:
# 1007 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokemans are purty cute. Wanna take\n"
	.string "a gander?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Text_1:
# 1008 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I love my darlin' lil ball of cotton\n"
	.string "candy. Even if she don't fight too well.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_0:
# 1012 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}I have a super special Bug Pokémon. You\n"
	.string "literally can't get it.\p"
	.string "How jealous are you?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Text_1:
# 1013 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Okay, maybe I should be more specific.\p"
	.string "You can't catch a Vivillon with the same\n"
	.string "pattern as mine here in Marya.\p"
	.string "That's because a Vivillon's pattern is\n"
	.string "dependent on where it lives!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_0:
# 1017 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Text_1:
# 1018 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I'm not a very interesting person, so I\n"
	.string "don't really say much.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_0:
# 1022 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}POKÉMON IS LOVE! POKÉMON IS LIFE!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Text_1:
# 1023 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I was only nine years old when I met my\n"
	.string "Riolu. It's the coolest Pokémon ever.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_0:
# 1027 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Shorts are awesome. They're so comfy to\n"
	.string "wear. Don't you agree?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Text_1:
# 1028 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Shorts are easily an S tier pick for\n"
	.string "pants!$"

ConqueredMightyena_Text::
# 833 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY} gg u won$"

MareepHelp_Text::
# 844 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep! Reep! {COLOR BLUE}(BRO HELP ME PLZ)$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer3_Loss::
# 1039 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Well I'll be.$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer4_Loss::
# 1042 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ain't she just the sweetest lil thang\n you've eva laid yer eyes on?$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer5_Loss::
# 1045 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Ack! My super special bug Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer6_Loss::
# 1049 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "Heck!$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer7_Loss::
# 1053 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "It's all Kyogre now...$"

ISLANDGAME_MINTY_MEADOWS_2_Rival_Trainer8_Loss::
# 1057 "data/maps/ISLANDGAME_MINTY_MEADOWS_2/scripts.pory"
	.string "I think I'm going to need a new pair of\nshorts...$"
