ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 36 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_VALLEY_OF_PEACE_STATE, 2
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	gettime
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 33 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_3
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxyperm 8, 1, 2
# 11 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 12 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	addobject 8
# 13 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxyperm 4, 18, 14
# 14 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showobjectat 8, MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME
# 15 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	returnqueststate QUEST_VALLEY_OF_PEACE_CUBONE
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 1, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_4
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 37 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script_2 VAR_VALLEY_OF_PEACE_STATE, 2, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 39 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 40 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 42 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_M_RAIN_DANCE
# 43 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement1
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SLIDING_DOOR
# 47 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement2
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 50 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 51 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 56 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 57 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 58 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 59 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 60 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 61 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 69 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 70 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 71 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 72 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 73 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 74 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 80 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 84 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 85 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setvar VAR_0x8000, 4
# 86 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setvar VAR_0x8001, 12
# 87 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	callnative TeleportCamera
# 88 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 12
# 89 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 8, 4, 10
# 92 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 93 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 94 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 98 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 60
# 99 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 100 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 101 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 102 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 107 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 108 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 109 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 110 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 20
# 111 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 112 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 114 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 115 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_QuestionMark
# 116 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmoncry
# 118 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxyperm 9, 7, 7
# 119 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	addobject 9
# 120 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showobjectat 9, MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME
# 121 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 9, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_CuboneMovement
# 122 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 20
# 125 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 126 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 127 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 9
# 128 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 129 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 130 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 131 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 136 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 137 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 138 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 139 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 20
# 140 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 141 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 147 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 148 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 149 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 150 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 151 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 152 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_BALL
# 154 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME
# 155 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	addobject 10
# 156 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 10, 5, 13
# 158 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 159 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_BALL_OPEN
# 160 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 161 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 9, 18, 14
# 163 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	giveitem ITEM_ISLANDGAME_CUBONES_POKEBALL
# 164 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	startquest QUEST_VALLEY_OF_PEACE_CUBONE
# 165 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	completesubquest QUEST_VALLEY_OF_PEACE_CUBONE, SUB_QUEST_CUBONE_1
# 166 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removeobject 10
# 167 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 10, 18, 14
# 168 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 169 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 170 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 171 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 172 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 173 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 174 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 177 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 178 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 179 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 180 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 3
# 181 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	warp MAP_ISLANDGAME_BELLEHAVEN, 26, 21
	return


# 188 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement1:
# 189 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_right
# 189 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_right
# 190 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	face_up
	step_end

# 193 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement2:
# 194 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_left
# 195 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_down
# 195 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_down
# 195 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_down
# 196 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	face_right
	step_end

# 199 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_CuboneMovement:
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_left
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_left
# 202 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	jump_in_place_left
# 202 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	jump_in_place_left
	step_end

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay::
# 210 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 211 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 212 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 213 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0
# 216 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 217 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 219 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight::
# 223 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 224 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 225 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 226 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0
# 229 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 230 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 231 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 232 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny::
# 236 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 237 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 238 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 239 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0
# 242 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 243 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster::
# 247 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 248 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 249 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_unset FLAG_TEMP_3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2
# 255 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1:
# 260 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 261 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2:
# 250 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie::
# 265 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 266 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_2
# 273 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_1
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_1:
# 277 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 278 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_2:
# 267 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 268 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_1


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo::
# 283 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 284 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0
# 287 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 288 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman::
# 292 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 293 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 294 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_set FLAG_DAILY_BELLEHAVEN_ADOPTION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_2
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_1:
# 301 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_1, MSGBOX_YESNO
# 305 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_5
# 311 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3
# 314 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_4:
# 317 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
MrHerriman_AdoptionList:
# 318 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showmoneybox 17, 1
# 319 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_4, 0
# 320 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_5, 1
# 321 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_6, 2
# 322 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_7, 3
# 323 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_8, 4
# 324 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_9, 5
# 325 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 326 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 1, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_10
# 354 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 2, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_11
# 381 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_12
# 408 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 4, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_13
# 435 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 5, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_14
# 462 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3
# 465 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8:
# 468 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
MrHerriman_End:
# 469 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 470 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 471 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_2:
# 295 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0
# 298 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_1

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_5:
# 306 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_2
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_4

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_10:
# 328 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 329 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_17
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_16:
# 335 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 336 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 337 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 338 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 339 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 340 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 341 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 342 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_PICHU, 1, ITEM_ORAN_BERRY, , NUM_NATURES, 2, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_VOLT_TACKLE, MOVE_SURF, MOVE_FLY
# 343 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 344 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PICHU
# 345 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_11
# 346 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 347 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 349 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 352 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 353 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_11:
# 355 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 356 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_20
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_19:
# 362 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 363 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 364 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 365 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 366 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 367 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 368 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 369 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_AZURILL, 1, ITEM_LEPPA_BERRY, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_BELLY_DRUM, MOVE_SUPERPOWER, MOVE_WATER_GUN
# 370 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
# 372 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_13
# 373 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 374 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 376 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 379 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 380 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_12:
# 382 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 383 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_23
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_22:
# 389 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 390 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 391 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 392 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 393 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 394 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 395 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 396 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_TOGEPI, 1, ITEM_RAGE_CANDY_BAR, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_NASTY_PLOT, MOVE_GROWL, MOVE_CHARM, MOVE_NONE
# 397 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 398 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
# 399 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_14
# 400 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 401 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 403 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 406 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 407 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_13:
# 409 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 410 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_26
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_25:
# 416 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 417 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 418 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 419 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 420 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 421 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 422 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 423 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_WYNAUT, 1, ITEM_LIECHI_BERRY, , NUM_NATURES, 0, , , , , , , , , , , , , 
# 424 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 425 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WYNAUT
# 426 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_15
# 427 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 428 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 430 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 433 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 434 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_14:
# 436 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 437 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_29
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_28:
# 443 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 444 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 445 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 446 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 447 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 448 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 449 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 450 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_TYROGUE, 1, ITEM_FOCUS_BAND, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN
# 451 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 452 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
# 453 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_16
# 454 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 455 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 456 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 459 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 460 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_17:
# 330 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 333 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_16

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_20:
# 357 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 360 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_19

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_23:
# 384 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 387 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_22

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_26:
# 411 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 414 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_25

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_29:
# 438 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 441 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_28


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 52 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Good grief...{PAUSE 30} this job's a real handful\n"
	.string "sometimes. I really do envy trainers\l"
	.string "like you.\p"
	.string "Getting to explore the world, meeting\n"
	.string "all kinds of people and Pokémon, not\l"
	.string "having to deal with boring chores and a\l"
	.string "bossy old man who'll never acknowledge\l"
	.string "all the work you do around here...\p"
	.string "Heh...{PAUSE 30} but I guess I can't complain too\n"
	.string "much. I chose to do this, after all.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 62 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I used to have a Vulpix of my own when I\n"
	.string "was younger. We were inseparable.\p"
	.string "But one night, she was taken from me by\n"
	.string "a group of poachers while we were\l"
	.string "taking a stroll down Aetheria, and that\l"
	.string "was the last time I ever saw her. So I\l"
	.string "started working here, hoping that one\l"
	.string "day, I might see her again.\p"
	.string "The same thing happened to that poor\n"
	.string "Cubone's mother. I found him crying out\l"
	.string "for her after hearing that a group of\l"
	.string "poachers invaded the valley.\p"
	.string "Those rotten poachers...{PAUSE 30} It boils my\n"
	.string "blood just thinking about them...\p"
	.string "-sigh- But this is all I can do. Taking\n"
	.string "care of orphaned Pokémon and helping\l"
	.string "them reunite with their owners, or\l"
	.string "finding them a new home.\p"
	.string "$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 75 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Ah, it's getting late. {PAUSE 30}Thanks for lending\n"
	.string "an ear, {PLAYER}. You should go\l"
	.string "upstairs and rest.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 82 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{COLOR RED}(I spent the rest of the night at the\n"
	.string "foster home.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 103 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Ah, leaving already? That's a shame. It\n"
	.string "was nice chatting with someone my age.\p"
	.string "But I shouldn't hold you hostage here.\n"
	.string "I'm sure you've more important matters\l"
	.string "to attend to as a trainer.\p"
	.string "Feel free to stop by once in a while, if\n"
	.string "you've ever the time. Hehe.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 132 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Cuu! {COLOR BLUE}(Hooman! Take Cubone with you!\n"
	.string "Please!)\p"
	.string "{COLOR DARK_GRAY}Cuu... {COLOR BLUE}(Hooman is powerful trainer.\n"
	.string "Trainer travel around Marya. Trainer\l"
	.string "might find Mama...)\p"
	.string "{COLOR DARK_GRAY}...Cuu? {COLOR BLUE}(...Can hooman help Cubone find\n"
	.string "Mama?)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 143 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Haha, I see Cubone's taken quite a\n"
	.string "liking to you, {PLAYER}.\p"
	.string "I take it he'll be tagging along with you\n"
	.string "from now on?\p"
	.string "Normally I have to charge you an\n"
	.string "adoption fee... but I think I'll give your\l"
	.string "little friend an exception just this one\l"
	.string "time.\p"
	.string "Just don't tell Mr. Herriman, or he'll\n"
	.string "give me an earful about it!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 175 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Best of luck to you and your new friend,\n"
	.string "{PLAYER}!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0:
# 214 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I LIEK CEREAL!!!!!!!!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0:
# 227 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Mmmmmm...{PAUSE 60} chocolat melk$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0:
# 240 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "COCO COCO COCO COCO!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0:
# 251 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Oh-ho-ho, these baby Pokémon are\n"
	.string "always so full of energy. I envy it.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1:
# 256 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Hello dearie! All of the Pokémon have\n"
	.string "gone to bed.\p"
	.string "I'm afraid you'll have to come back\n"
	.string "during the day if you'd like to adopt.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0:
# 269 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{PLAYER}! How're things with Cubone?$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_1:
# 274 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "BLOO!!!{PAUSE 30} GET YOUR BOUNCY BEHIND OVER\n"
	.string "HERE AND CLEAN UP THE MESS YOU MADE!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0:
# 285 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{COLOR RED}(Contrary to its appearance, it's just a\n"
	.string "toy that looks like a Sudowoodo.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0:
# 296 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Our policy is one adoption per customer\n"
	.string "per day. Please come back tomorrow if\l"
	.string "you would like to adopt another.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_1:
# 302 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Good day, young trainer. I am Mr.\n"
	.string "Herriman, the head of this foster home.\p"
	.string "Are you looking to adopt a Pokémon? The\n"
	.string "fee is ¥10,000.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_2:
# 307 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Splendid! Who shall be your choice?$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3:
# 312 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Righty oh. Inform me when you have made\n"
	.string "a decision.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_4:
# 319 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I'll choose later!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_5:
# 320 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Pichu$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_6:
# 321 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Azurill$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_7:
# 322 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Togepi$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_8:
# 323 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Wynaut$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_9:
# 324 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Tyrogue$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10:
# 331 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "My apologies, but you must have the\n"
	.string "necessary funds to pay the fee.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_11:
# 345 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Pichu!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12:
# 350 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I wish all the best for you and your new\n"
	.string "companion, young trainer.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_13:
# 372 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted an Azurill!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_14:
# 399 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Togepi!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_15:
# 426 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Wynaut!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_16:
# 453 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Tyrogue!$"
