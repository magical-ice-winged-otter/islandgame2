ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts::
# 16 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 18 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 19 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 21 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	goto_if_set FLAG_NORANNA_PRIM_CUTSCENE_FINISHED, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign::
# 28 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign::
# 32 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid::
# 40 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0, MSGBOX_NPC
# 41 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 42 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude::
# 46 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude_Text_0, MSGBOX_NPC
# 62 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman::
# 66 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_FISHERMAN, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1
# 70 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper::
# 74 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_CAMPER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1
# 78 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac::
# 82 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_MANIAC, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1
# 86 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker::
# 90 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_BIKER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1
# 94 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger::
# 98 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_5, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1
# 102 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2, MSGBOX_NPC
	return


# 105 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_DELCATTYAttack:
# 106 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	jump_right
	step_end

# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_PrimWalkAway:
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 111 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 112 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 112 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 112 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 112 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 115 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_DELCATTYWalkAway:
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 117 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	face_right
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan1WalkAway:
# 123 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 123 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 123 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 124 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 124 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 128 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan2WalkAway:
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 130 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 130 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 134 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan3WalkAway:
# 135 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_down
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
	step_end

# 139 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan4WalkAway:
# 140 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_down
# 140 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_down
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
	step_end

# 144 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_PlayerWalkOver1:
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 146 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 146 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 149 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_PlayerWalkOver2:
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 151 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 151 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 151 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1::
# 155 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 156 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 157 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0
# 162 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerWalkOver1
# 163 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 168 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1
# 173 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 176 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYAttack
# 177 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 178 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 179 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 180 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 181 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitse
# 182 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 183 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitse
# 184 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 185 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitse
# 186 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
# 187 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 190 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2
# 193 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 196 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 1, Movement_PrimWalkAway
# 197 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYWalkAway
# 200 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 1
# 201 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 204 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 1
# 205 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 8
# 209 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 210 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 211 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 212 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 213 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3
# 214 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 215 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 216 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 217 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 218 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 219 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4
# 220 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 221 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 222 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 223 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 224 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5
# 226 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 228 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_PIN
# 229 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 230 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 231 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 232 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 233 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 234 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 235 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 236 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 237 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 238 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 239 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6
# 240 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 241 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Movement_Fan3WalkAway
# 242 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Movement_Fan4WalkAway
# 244 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 245 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 246 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 3
# 247 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 5
# 249 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
# 250 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 251 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2::
# 256 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 257 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 258 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2_Text_0
# 263 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 264 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerWalkOver2
# 265 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 270 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1
# 275 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 278 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYAttack
# 279 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 280 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 281 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 282 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 283 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitse
# 284 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 285 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitse
# 286 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 287 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitse
# 288 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
# 289 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 292 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2
# 295 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 298 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 1, Movement_PrimWalkAway
# 299 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYWalkAway
# 302 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 1
# 303 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 306 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 1
# 307 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 8
# 311 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 312 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 313 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 314 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 315 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3
# 316 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 317 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 318 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 319 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 320 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 321 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4
# 322 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 323 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 324 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 325 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 326 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 327 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5
# 328 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 330 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_PIN
# 331 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 332 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 333 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 334 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 335 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 336 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 337 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 338 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 339 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 340 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 341 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6
# 342 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 343 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Movement_Fan3WalkAway
# 344 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Movement_Fan4WalkAway
# 346 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 347 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 348 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 3
# 349 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 5
# 351 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
# 352 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 353 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser::
# 357 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 358 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre::
# 362 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 363 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
# 364 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1::
# 368 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2::
# 372 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 373 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	faceplayer
# 374 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3::
# 383 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 384 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	faceplayer
# 385 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign_Text_0:
# 28 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "CENTRAL ORANNA PATH\n"
	.string "TIDALCOVE{UP_ARROW}$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign_Text_0:
# 32 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "KRISSIE'S BEAUTY SALON\n"
	.string "For you and your Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0:
# 40 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "My sister wants to be a model just like\n"
	.string "Ruka, so she's training her body.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude_Text_0:
# 50 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Howdy trainer! Nice job on making it\n"
	.string "this far. You're 'bout halfway there!\p"
	.string "For getting this far, I'll let you in on\n"
	.string "some insider knowledge...\p"
	.string "Ruka, the leader of Tidalcove's Gym,\n"
	.string "specializes in ice-type Pokémon!\p"
	.string "So fighting, fire, steel, and rock moves\n"
	.string "will be super useful in the fight!\p"
	.string "Bet you're glad I filled you in on the\n"
	.string "secrets, huh?\p"
	.string "Eh? What do you mean, that was all\n"
	.string "public information?\p"
	.string "Well then, allow me to provide you with\n"
	.string "some more personal stuff about her...\p"
	.string "-whisper whisper-\p"
	.string "How'd you like them apples? I'm not so\n"
	.string "useless anymore, yeah?\p"
	.string "What? Why are you looking at me like\n"
	.string "that? Stop judging me! I'm important!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0:
# 67 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Tryna see some of my catches?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1:
# 68 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Pretty snazzy, right?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2:
# 70 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I wish the people at Tidalcove would\n"
	.string "stop tossing their trash in the sea.\p"
	.string "A lot of it ends up flowing down this\n"
	.string "river. You won't believe the things I've\l"
	.string "caught thinking I caught a Totodile.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0:
# 75 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I'm tired of facing all these sweaty\n"
	.string "trainers scurrying about.\p"
	.string "Let's just get this over with.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1:
# 76 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Humph.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2:
# 78 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "There is a salon right there, trainer.\n"
	.string "While it's intended for Pokemon, I think\l"
	.string "they would be willing to make an\l"
	.string "exception after seeing you.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0:
# 83 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Nyeh heh heh... Let me SHOW you my\n"
	.string "Pokémans!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1:
# 84 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Did you like my Pokémans?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2:
# 86 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I'll be getting all the ladies with my\n"
	.string "Pokémans...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0:
# 91 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Hey, check out my new ride! Isn't it\n"
	.string "slick?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1:
# 92 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Crap! I fell!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2:
# 94 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "If you want a bike, you should hit up\n"
	.string "Randy's at Tidalcove!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0:
# 99 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I need to be alone! Go away!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1:
# 100 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "-sigh-$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2:
# 102 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I'm just upset about losing to Ruka. Her\n"
	.string "ace Pokémon was just too strong.\p"
	.string "Now I'll have to wait until tomorrow for\n"
	.string "another chance...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0:
# 158 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "KYAAA!{PAUSE 30} PRIM YOU'RE SO COOL!\p"
	.string "That girl... isn't she the newest member\n"
	.string "of STARLIGHT?\p"
	.string "Her Delcatty is so pretty... I wish I had\n"
	.string "one too!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1:
# 170 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR GREEN}Primrose: {COLOR DARK_GRAY}Time to end this.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2:
# 191 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR GREEN}Primrose: {COLOR DARK_GRAY}-sigh- What a waste of time...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3:
# 213 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Yeah! You should've just let her have\n"
	.string "it! She has better things to do than\l"
	.string "spender her time dealing with scrubs\l"
	.string "like you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4:
# 219 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Yeah! She's Lady Primrose, the greatest\n"
	.string "idol to ever exist! She and Delcatty are\l"
	.string "gonna take Marya by storm!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5:
# 225 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}You better believe she is! We stand with\n"
	.string "Her Majesty!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6:
# 239 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}E-Eh? W-Wait for us, Prim! C'mon Jess,\n"
	.string "let's ditch these goobers!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2_Text_0:
# 259 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "KYAAA! PRIM YOU'RE SO COOL!\p"
	.string "That girl... isn't she the newest member\n"
	.string "of STARLIGHT?\p"
	.string "Her Delcatty is so pretty... I wish I had\n"
	.string "one too!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0:
# 358 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "N-No way... She beat me without taking\n"
	.string "any damage...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0:
# 364 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "L-Lom...\p"
	.string "{COLOR RED}(Looks like Lombre took a thrashing.)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0:
# 368 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Prim's Pokémon fight so elegantly... As\n"
	.string "expected from an idol!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0:
# 375 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Apparently Primrose just became a\n"
	.string "member of STARLIGHT a few months ago.\p"
	.string "Huh? You don't know what STARLIGHT is?\n"
	.string "That's wild, bro. They're the biggest\l"
	.string "idol group in Marya!\p"
	.string "Prim's gained a ton of popularity 'cause\n"
	.string "of her amazing talent as a trainer.\p"
	.string "She's definitely got this year's\n"
	.string "festival tournament in the bag.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0:
# 386 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Ruka gets so many challenge requests\n"
	.string "that she can only take a limited number\l"
	.string "of them per day.\p"
	.string "These two were having a battle to\n"
	.string "decide who would get the last spot.\p"
	.string "Poor kid... He never stood a chance\n"
	.string "against Prim.$"
