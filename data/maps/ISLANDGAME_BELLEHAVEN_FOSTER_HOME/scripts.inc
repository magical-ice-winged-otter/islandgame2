ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
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
# 34 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_4
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
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script_2 VAR_VALLEY_OF_PEACE_STATE, 2, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 39 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 40 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 41 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 43 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_M_RAIN_DANCE
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement1
# 46 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 47 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SLIDING_DOOR
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement2
# 50 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 51 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 52 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 57 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 58 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 59 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 60 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 61 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 62 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 70 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 71 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 72 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 73 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 74 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 75 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 81 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 85 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 86 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setvar VAR_0x8000, 4
# 87 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setvar VAR_0x8001, 12
# 88 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	callnative TeleportCamera
# 89 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 12
# 90 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 8, 4, 10
# 93 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 94 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 95 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 60
# 100 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 101 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 102 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 103 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 108 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 109 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 110 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 111 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 20
# 112 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 113 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 114 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 115 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 116 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_QuestionMark
# 117 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmoncry
# 119 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxyperm 9, 7, 7
# 120 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	addobject 9
# 121 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showobjectat 9, MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME
# 122 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 9, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_CuboneMovement
# 123 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 20
# 126 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 127 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 128 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 9
# 129 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 130 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 131 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 132 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 137 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 138 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 139 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 140 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 20
# 141 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 142 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 143 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 148 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 149 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 150 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 151 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 152 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 153 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_BALL
# 155 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showobjectat 10, MAP_ISLANDGAME_BELLEHAVEN_FOSTER_HOME
# 156 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	addobject 10
# 157 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 10, 5, 13
# 159 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 160 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_BALL_OPEN
# 161 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 162 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 9, 18, 14
# 164 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	giveitem ITEM_ISLANDGAME_CUBONES_POKEBALL
# 165 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	startquest QUEST_VALLEY_OF_PEACE_CUBONE
# 166 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_VALLEY_OF_PEACE_CUBONE, 0
# 167 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removeobject 10
# 168 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setobjectxy 10, 18, 14
# 169 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 170 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 171 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 172 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 173 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 174 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	delay 30
# 175 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 178 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 179 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 180 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 181 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setvar VAR_VALLEY_OF_PEACE_STATE, 3
# 182 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	warp MAP_ISLANDGAME_BELLEHAVEN, 24, 21
	return


# 189 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement1:
# 190 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_right
# 190 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_right
# 191 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	face_up
	step_end

# 194 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_FrankieMovement2:
# 195 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_left
# 196 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_down
# 196 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_down
# 196 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_down
# 197 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	face_right
	step_end

# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_CuboneMovement:
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_down
# 202 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_left
# 202 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	walk_fast_left
# 203 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	jump_in_place_left
# 203 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	jump_in_place_left
	step_end

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay::
# 211 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 212 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 213 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 214 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0
# 217 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 218 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 219 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 220 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight::
# 224 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 225 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 226 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 227 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0
# 230 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 231 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 232 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 233 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny::
# 237 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 238 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 239 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 240 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0
# 243 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 244 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster::
# 248 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 249 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 250 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_unset FLAG_TEMP_3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2
# 256 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1:
# 261 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 262 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2:
# 251 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie::
# 266 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 267 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_2
# 274 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_1
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_1:
# 278 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 279 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_2:
# 268 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 269 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_1


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo::
# 284 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 285 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0
# 288 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 289 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman::
# 293 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 294 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 295 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_set FLAG_DAILY_BELLEHAVEN_ADOPTION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_2
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_1:
# 302 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_1, MSGBOX_YESNO
# 306 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_5
# 312 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3
# 315 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_4:
# 318 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
MrHerriman_AdoptionList:
# 319 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showmoneybox 17, 1
# 320 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_4, 0
# 321 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_5, 1
# 322 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_6, 2
# 323 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_7, 3
# 324 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_8, 4
# 325 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_9, 5
# 326 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 327 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 1, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_10
# 355 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 2, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_11
# 382 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_12
# 409 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 4, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_13
# 436 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 5, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_14
# 463 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3
# 466 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8:
# 469 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
MrHerriman_End:
# 470 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 471 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 472 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_2:
# 296 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0
# 299 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_1

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_5:
# 307 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_2
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_4

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_10:
# 329 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 330 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_17
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_16:
# 336 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 337 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 338 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 339 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 340 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 341 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 342 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 343 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_PICHU, 1, ITEM_ORAN_BERRY, , NUM_NATURES, 2, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_VOLT_TACKLE, MOVE_SURF, MOVE_FLY
# 344 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 345 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PICHU
# 346 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_11
# 347 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 348 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 350 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 353 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 354 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_11:
# 356 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 357 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_20
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_19:
# 363 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 364 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 365 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 366 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 367 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 368 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 369 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 370 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_AZURILL, 1, ITEM_LEPPA_BERRY, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_BELLY_DRUM, MOVE_SUPERPOWER, MOVE_WATER_GUN
# 371 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 372 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
# 373 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_13
# 374 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 375 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 377 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 380 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 381 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_12:
# 383 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 384 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_23
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_22:
# 390 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 391 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 392 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 393 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 394 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 395 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 396 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 397 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_TOGEPI, 1, ITEM_RAGE_CANDY_BAR, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_NASTY_PLOT, MOVE_GROWL, MOVE_CHARM, MOVE_NONE
# 398 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 399 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
# 400 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_14
# 401 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 402 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 404 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 407 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 408 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_13:
# 410 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 411 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_26
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_25:
# 417 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 418 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 419 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 420 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 421 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 422 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 423 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 424 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_WYNAUT, 1, ITEM_LIECHI_BERRY, , NUM_NATURES, 0, , , , , , , , , , , , , 
# 425 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 426 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WYNAUT
# 427 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_15
# 428 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 429 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 431 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 434 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 435 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_14:
# 437 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 438 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_29
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_28:
# 444 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 445 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 446 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 447 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 448 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 449 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 450 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 451 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_TYROGUE, 1, ITEM_FOCUS_BAND, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN
# 452 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 453 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
# 454 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_16
# 455 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 456 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 457 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 460 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 461 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_17:
# 331 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 334 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_16

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_20:
# 358 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 361 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_19

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_23:
# 385 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 388 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_22

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_26:
# 412 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 415 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_25

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_29:
# 439 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 442 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_28


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 53 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
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
# 63 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
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
	.string "finding them a new home.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 76 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Ah, it's getting late. {PAUSE 30}Thanks for lending\n"
	.string "an ear, {PLAYER}. You should go\l"
	.string "upstairs and rest.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 83 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{COLOR RED}(I spent the rest of the night at the\n"
	.string "foster home.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 104 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Ah, leaving already? That's a shame. It\n"
	.string "was nice chatting with someone my age.\p"
	.string "But I shouldn't hold you hostage here.\n"
	.string "I'm sure you've more important matters\l"
	.string "to attend to as a trainer.\p"
	.string "Feel free to stop by once in a while, if\n"
	.string "you've ever the time. Hehe.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 133 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Cuu! {COLOR BLUE}(Hooman! Take Cubone with you!\n"
	.string "Please!)\p"
	.string "{COLOR DARK_GRAY}Cuu... {COLOR BLUE}(Hooman is powerful trainer.\n"
	.string "Trainer travel around Marya. Trainer\l"
	.string "might find Mama...)\p"
	.string "{COLOR DARK_GRAY}...Cuu? {COLOR BLUE}(...Can hooman help Cubone find\n"
	.string "Mama?)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 144 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
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
# 176 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Best of luck to you and your new friend,\n"
	.string "{PLAYER}!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0:
# 215 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I LIEK CEREAL!!!!!!!!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0:
# 228 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Mmmmmm...{PAUSE 60} chocolat melk$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0:
# 241 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "COCO COCO COCO COCO!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0:
# 252 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Oh-ho-ho, these baby Pokémon are\n"
	.string "always so full of energy. I envy it.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1:
# 257 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Hello dearie! All of the Pokémon have\n"
	.string "gone to bed.\p"
	.string "I'm afraid you'll have to come back\n"
	.string "during the day if you'd like to adopt.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0:
# 270 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{PLAYER}! How're things with Cubone?$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_1:
# 275 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "BLOO!!!{PAUSE 30} GET YOUR BOUNCY BEHIND OVER\n"
	.string "HERE AND CLEAN UP THE MESS YOU MADE!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0:
# 286 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{COLOR RED}(Contrary to its appearance, it's just a\n"
	.string "toy that looks like a Sudowoodo.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0:
# 297 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Our policy is one adoption per customer\n"
	.string "per day. Please come back tomorrow if\l"
	.string "you would like to adopt another.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_1:
# 303 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Good day, young trainer. I am Mr.\n"
	.string "Herriman, the head of this foster home.\p"
	.string "Are you looking to adopt a Pokémon? The\n"
	.string "fee is ¥10,000.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_2:
# 308 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Splendid! Who shall be your choice?$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3:
# 313 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Righty oh. Inform me when you have made\n"
	.string "a decision.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_4:
# 320 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I'll choose later!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_5:
# 321 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Pichu$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_6:
# 322 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Azurill$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_7:
# 323 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Togepi$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_8:
# 324 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Wynaut$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_9:
# 325 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Tyrogue$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10:
# 332 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "My apologies, but you must have the\n"
	.string "necessary funds to pay the fee.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_11:
# 346 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Pichu!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12:
# 351 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I wish all the best for you and your new\n"
	.string "companion, young trainer.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_13:
# 373 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted an Azurill!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_14:
# 400 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Togepi!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_15:
# 427 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Wynaut!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_16:
# 454 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Tyrogue!$"
