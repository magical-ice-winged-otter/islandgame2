ISLANDGAME_ROSEVALE_MapScripts::
# 23 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 74 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	switch VAR_ROSEVALE_STATE
# 25 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	case 1, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 33 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	case 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 50 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	case 4, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 56 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	case 5, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 68 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	compare VAR_ROSEVALE_STATE, 3
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 27 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 4, 0, 0
# 28 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 6, 0, 0
# 29 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 5, 0, 0
# 30 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 1, 8, 14
# 31 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 1
# 32 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 35 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 4, 12, 26
# 36 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 5, 13, 24
# 37 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 6, 12, 24
# 38 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 1, 14, 24
# 39 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 13, 14, 26
# 40 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 43 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 4
# 44 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 5
# 45 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 6
# 46 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 1
# 47 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 13
# 48 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	turnobject 4, DIR_NORTH
# 49 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	turnobject 13, DIR_NORTH
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 52 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 4, 0, 0
# 53 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 5, 0, 0
# 54 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 6, 0, 0
# 55 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 1, 0, 0
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 58 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 4, 0, 0
# 59 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 6, 0, 0
# 60 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 5, 0, 0
# 61 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 1, 8, 14
# 62 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 1
# 63 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 69 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxyperm 5, 13, 24
# 70 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 71 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 5
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 68 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	compare VAR_ROSEVALE_STATE, 2
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 68 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 75 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	map_script_2 VAR_ROSEVALE_STATE, 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 76 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 6
# 78 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 79 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 80 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 81 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 82 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 83 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	playse SE_PIN
# 84 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 85 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 86 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 13, Common_Movement_FaceUp
# 87 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 88 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 89 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 90 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 91 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmoncry
# 92 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 13, Movement_AzurillRunsToSister
# 93 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 94 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 1, Movement_SisterHappyToSee
# 95 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 96 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 97 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 101 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 102 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 103 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 104 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 105 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 106 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 108 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 109 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 110 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 111 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 112 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 113 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 115 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 116 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 117 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 118 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 119 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 120 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 121 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 126 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 127 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 128 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 129 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 130 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 132 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 138 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 140 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 142 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 144 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	playfanfare MUS_HEAL
# 145 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitfanfare
# 146 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	special HealPlayerParty
# 147 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	completequest QUEST_ROSEVALE_RESCUE
# 148 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_ROSEVALE
# 149 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	warp MAP_ISLANDGAME_ROSEVALE_INN_2F_ROOM1, 2, 2
	return


# 154 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_AzurillRunsToSister:
# 155 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_up
# 156 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_right
# 157 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_up
# 157 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_up
# 158 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	face_left
	step_end

# 161 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_SisterHappyToSee:
# 162 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	face_right
# 163 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_up
# 164 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_up
# 165 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 165 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 165 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
	step_end

ISLANDGAME_ROSEVALE_Interact_PuddleMon::
# 169 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 170 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	faceplayer
# 171 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_WEAK
# 172 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleMon_Text_0
# 173 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


# 176 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_TrainerJump:
# 177 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_left
# 178 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_up
# 179 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_right
# 180 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_down
# 181 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_left
	step_end

# 184 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_MonWatch:
# 185 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	face_right
	step_end

# 188 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_MonJump:
# 189 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	jump_in_place_right
	step_end

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer::
# 193 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 194 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0
# 195 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 196 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 3, Movement_MonWatch
# 197 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 2, Movement_TrainerJump
# 198 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 199 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1
# 200 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 201 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 3, Movement_MonJump
# 202 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_WEAK
# 203 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmoncry
# 204 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 205 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC1::
# 209 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 210 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	faceplayer
# 211 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC1_Text_0
# 214 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC2::
# 218 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 219 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC2_Text_0
# 224 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_Interact_Talonflame::
# 228 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 229 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	faceplayer
# 230 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	playmoncry SPECIES_TALONFLAME, CRY_MODE_NORMAL
# 231 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_Talonflame_Text_0
# 232 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 233 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 234 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC3::
# 238 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 239 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	faceplayer
# 240 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC3_Text_0
# 246 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 247 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 248 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC4::
# 252 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 253 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	faceplayer
# 254 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC4_Text_0
# 258 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_Interact_EntranceSign::
# 262 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_InnSign::
# 266 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_ArthurSister::
# 270 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0, MSGBOX_NPC
	return


ISLANDGAME_ROSEVALE_Interact_ArthurDad::
# 274 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0, MSGBOX_NPC
	return


# 289 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_ArthurSister_RunUpToPath:
# 290 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_left
# 290 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_left
# 290 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_left
# 290 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_left
# 290 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_left
# 290 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_fast_left
	step_end

ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest::
# 294 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 295 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest_Text_0
# 296 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 297 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 299 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 1
# 300 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxy 1, 14, 14
# 301 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 1, Movement_ArthurSister_RunUpToPath
# 302 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 1
# 305 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox Text_ArthurSister_PleaseHelp
# 308 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	startquest QUEST_ROSEVALE_RESCUE
# 309 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 1
# 311 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


# 315 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_Arthur_WalkUpToExit:
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 316 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
	step_end

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight::
# 320 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	lock
# 322 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0
# 323 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 324 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 4
# 325 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxy 4, 19, 12
# 326 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Movement_Arthur_WalkUpToExit
# 327 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 328 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 331 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1, MSGBOX_NPC
# 343 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSEVALE_ARTHUR, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2
# 347 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_3, MSGBOX_NPC
# 357 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 360 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	addobject 5
# 361 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setobjectxy 5, 19, 12
# 362 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 5, Movement_ArthurDad_WalkUpToArthur
# 363 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Movement_Arthur_SeesDad
# 364 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 5
# 365 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 4
# 368 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_4, MSGBOX_NPC
# 377 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_5, MSGBOX_NPC
# 386 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 387 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 0
# 388 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_6
# 391 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	closemessage
# 394 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 5, Movement_ArthurDad_WalkAway
# 395 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	applymovement 4, Movement_Arthur_WalkAway
# 396 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 4
# 397 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	waitmovement 5
# 398 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	removeobject 4
# 399 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	removeobject 5
# 401 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 4
# 402 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	release
	return


# 405 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_ArthurDad_WalkUpToArthur:
# 406 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 406 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 406 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 406 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 406 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
# 406 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_right
	step_end

# 409 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_Arthur_SeesDad:
# 410 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 410 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 410 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 410 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 411 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	face_left
# 412 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	emote_exclamation_mark
	step_end

# 415 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_ArthurDad_WalkAway:
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 416 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
	step_end

# 419 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
Movement_Arthur_WalkAway:
# 420 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 420 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 420 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 420 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	delay_16
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
# 421 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	walk_left
	step_end

ArthurDefeated:
	return


ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 97 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur's Sister: {COLOR DARK_GRAY}Hooway!! You did it!\n"
	.string "You saved A-zoo-will and Arfur!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 105 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}Thank you so much for\n"
	.string "helping our son and rescuing our\l"
	.string "daughter's Pokémon, dear. How can we\l"
	.string "ever repay you?$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 112 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}Please, come stay the\n"
	.string "night at our inn, free of charge! It's\l"
	.string "the least we can do for your kindness.$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 122 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Watching your Pokémon battle...{PAUSE 30}\n"
	.string "it was incredible.\p"
	.string "They knew exactly what to do in the\n"
	.string "fight, even in the heat of the moment.\p"
	.string "You must be a pretty seasoned Pokémon\n"
	.string "trainer, right? What brings you here to\l"
	.string "Rosevale of all places?$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 133 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Oh...{PAUSE 30} you were training up your\n"
	.string "Pokemon to battle against Tidalcove's\l"
	.string "Gym Leader, Ruka?\p"
	.string "I see...{PAUSE 30} that means you're taking part in\n"
	.string "the Festival Tournament then, right?\p"
	.string "Hm...{PAUSE 30} So Pokémon trainers can get\n"
	.string "stronger by battling Gym Leaders...\p"
	.string "Oh, sorry! We should probably head\n"
	.string "inside. Let's continue this\l"
	.string "conversation after dinner!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 141 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR RED}(I spent the rest of the night talking\n"
	.string "to Arthur about my journey thus far...)$"

ISLANDGAME_ROSEVALE_Interact_PuddleMon_Text_0:
# 172 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Char... {COLOR BLUE}(water scary :c)$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0:
# 194 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "It's ok! The water isn't going to hurt\n"
	.string "you...\n"
	.string "Watch!$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1:
# 199 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "See?\n"
	.string "It's shallow!$"

ISLANDGAME_ROSEVALE_Interact_NPC1_Text_0:
# 212 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Ew, a city-dweller. Keep your city germs\n"
	.string "away from our clean town!$"

ISLANDGAME_ROSEVALE_Interact_NPC2_Text_0:
# 220 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Brrr...{PAUSE 30} The winds are always so chilly\n"
	.string "here.\p"
	.string "Talonflame! Warm up my hands, will ya? I\n"
	.string "hate being on watch duty...$"

ISLANDGAME_ROSEVALE_Interact_Talonflame_Text_0:
# 231 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Talooon!$"

ISLANDGAME_ROSEVALE_Interact_NPC3_Text_0:
# 241 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "La dee dum... I love the sweet fragrance\n"
	.string "of flowers!\p"
	.string "Would you like to take a whiff?\p"
	.string "...Oops, sorry. I didn't know you were\n"
	.string "allergic.$"

ISLANDGAME_ROSEVALE_Interact_NPC4_Text_0:
# 255 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "My gramps said I needed to “touch\n"
	.string "grass” more, so here I am.\p"
	.string "I just wanna go back inside and tend to\n"
	.string "my farm on Starfdew Valley.$"

ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0:
# 262 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "ROSEVALE\n"
	.string "The village under the alps$"

ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0:
# 266 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "PEACHY SWEET INN\n"
	.string "We're positively peachy keen!\n"
	.string "$"

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0:
# 270 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "My bwother went that-a-way! I think he\n"
	.string "wan into Mount Awowa!$"

ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0:
# 274 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Where in the world could that boy be...?$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest_Text_0:
# 295 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Hewwo, I need your help!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0:
# 322 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1:
# 332 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Before you go...\p"
	.string "Please...\p"
	.string "Face me in a Pokémon battle! I couldn't\n"
	.string "do anything against that thief...{PAUSE 30} I\l"
	.string "failed my little sister...\p"
	.string "If it wasn't for you and Articuno...{PAUSE 30} My\n"
	.string "sister's Pokémon would've been lost\l"
	.string "forever!\p"
	.string "I can't something like that happen\n"
	.string "again...{PAUSE 30} I need to get stronger, so when\l"
	.string "the time comes...{PAUSE 30} I'll be able to protect\l"
	.string "her myself!\p"
	.string "And there's no better way than for me\n"
	.string "to take on the Marya League and enter\l"
	.string "the Festival Tournament, just like you!\p"
	.string "My dad says I'm not ready yet... So I'll\n"
	.string "prove it to him! Right here and now!\l"
	.string "Prepare yourself, {PLAYER}!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2:
# 343 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "...\p"
	.string "I lost again...$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_3:
# 348 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}...\p"
	.string "{COLOR DARK_GRAY}Heh...{PAUSE 30} You're truly an amazing trainer,\n"
	.string "{PLAYER}.\p"
	.string "I have no doubt that you'll be able to\n"
	.string "beat Ruka.\p"
	.string "{COLOR DARK_GRAY}Me on the other hand? I should just\n"
	.string "give up.\p"
	.string "{COLOR DARK_GRAY}Maybe I'm just not cut out to be a\n"
	.string "Pokémon trainer.\p"
	.string "I never win...{PAUSE 30} Why can't I ever win? That\n"
	.string "thief was right...{PAUSE 30} I am just a loser.\p"
	.string "...a failure.\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}No, Arthur, that's not\n"
	.string "true.$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_4:
# 369 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "Losing just means you have more to\n"
	.string "learn. It doesn't mean you're a failure.\p"
	.string "Failure only comes when you give up.\n"
	.string "When you stop believing.\p"
	.string "I watched your battle with {PLAYER}.\n"
	.string "I can tell you still don't trust in your\l"
	.string "Pokémon, or even yourself.\p"
	.string "And if you don't trust in yourself, how\n"
	.string "can you expect your Pokémon to?\p"
	.string "That's why you need more time. You have\n"
	.string "to build that trust with your Pokémon.\l"
	.string "Build that trust with yourself. Do you\l"
	.string "understand?\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}-sniff- Mhm.$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_5:
# 378 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}I know I may have been a\n"
	.string "little harsh on you earlier, but it's only\l"
	.string "because I want the best for you.\p"
	.string "Pokémon are a big responsibility, and I\n"
	.string "want to make sure that you can take\l"
	.string "care of both yourself and your Pokémon\l"
	.string "before you enter the Gym Challenge.\p"
	.string "In the next week, if you show me that\n"
	.string "the bond between you and your Pokemon\l"
	.string "has strengthened, I will let you\l"
	.string "challenge Ruka.\p"
	.string "And if you win, I will let you resume the\n"
	.string "rest of the gym challenge on your own.\l"
	.string "Does that sound fair?\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Okay. I'll train really really\n"
	.string "hard.\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}It has been a pleasure,\n"
	.string "{PLAYER}.\p"
	.string "I wish you all the best in your travels.$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_6:
# 389 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "{COLOR GREEN}Arthur:{COLOR DARK_GRAY} {PLAYER}! I swear the next\n"
	.string "time we battle, I'll be stronger!$"

Text_ArthurSister_PleaseHelp::
# 280 "data/maps/ISLANDGAME_ROSEVALE/scripts.pory"
	.string "You're a twainer, right? Someone stole\n"
	.string "my A-zoo-wil!\p"
	.string "My bwother Arfur wan after the thief,\n"
	.string "but he still hasn't come back!\p"
	.string "He told me not to wowwy, but I'm getting\n"
	.string "weally wowwied now!\p"
	.string "Pwease help me find him! And my\n"
	.string "A-zoo-wil!$"
