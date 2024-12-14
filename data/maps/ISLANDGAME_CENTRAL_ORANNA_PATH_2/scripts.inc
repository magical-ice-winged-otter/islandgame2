ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts::
# 11 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	goto_if_set FLAG_NORANNA_PRIM_CUTSCENE_FINISHED, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign::
# 19 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign::
# 23 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid::
# 31 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0, MSGBOX_NPC
# 32 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 33 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude::
# 37 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 38 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	faceplayer
# 39 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude_Text_0, MSGBOX_NPC
# 53 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman::
# 57 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_FISHERMAN, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1
# 61 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper::
# 65 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_CAMPER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1
# 69 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac::
# 73 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_MANIAC, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker::
# 81 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_2_BIKER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger::
# 89 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_5, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1
# 93 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2, MSGBOX_NPC
	return


# 96 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_DELCATTYAttack:
# 97 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	jump_right
	step_end

# 100 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_PrimWalkAway:
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 102 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 103 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 103 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 103 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 103 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 106 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_DELCATTYWalkAway:
# 107 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 108 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	face_right
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 109 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan1WalkAway:
# 114 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 114 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 114 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 115 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 115 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_down
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 116 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan2WalkAway:
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	delay_16
# 121 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 121 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 122 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 122 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 122 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 125 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan3WalkAway:
# 126 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_down
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
	step_end

# 130 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_Fan4WalkAway:
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_down
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_down
# 132 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 132 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 132 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
# 132 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_fast_right
	step_end

# 135 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_PlayerWalkOver1:
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 137 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 137 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

# 140 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
Movement_PlayerWalkOver2:
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_up
# 142 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 142 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
# 142 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	walk_right
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1::
# 146 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 147 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 148 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0
# 153 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerWalkOver1
# 154 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 159 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1
# 164 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 167 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYAttack
# 168 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 169 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 170 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 171 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
# 172 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 175 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2
# 178 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 181 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 1, Movement_PrimWalkAway
# 182 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYWalkAway
# 185 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 1
# 186 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 189 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 1
# 190 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 8
# 194 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 195 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 196 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 197 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 198 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3
# 199 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 200 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 201 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 202 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 203 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 204 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4
# 205 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 206 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 207 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 208 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 209 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 210 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5
# 211 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 213 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_PIN
# 214 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 215 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 216 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 217 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 218 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 219 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 220 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 221 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 222 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 223 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 224 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6
# 225 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 226 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Movement_Fan3WalkAway
# 227 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Movement_Fan4WalkAway
# 229 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 230 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 231 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 3
# 232 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 5
# 234 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
# 235 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 236 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2::
# 241 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 242 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 243 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2_Text_0
# 248 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 249 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerWalkOver2
# 250 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 255 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1
# 260 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 263 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYAttack
# 264 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 265 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
# 266 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 267 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
# 268 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmoncry
# 271 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2
# 274 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 277 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 1, Movement_PrimWalkAway
# 278 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 8, Movement_DELCATTYWalkAway
# 281 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 1
# 282 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 8
# 285 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 1
# 286 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 8
# 290 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 291 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 292 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 293 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 294 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3
# 295 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 296 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 297 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 298 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 299 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 300 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4
# 301 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 302 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 303 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 304 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 305 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 0
# 306 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5
# 307 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 309 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playse SE_PIN
# 310 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 311 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 312 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 313 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 314 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 315 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 316 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 317 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 318 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 319 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 320 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6
# 321 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	closemessage
# 322 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 3, Movement_Fan3WalkAway
# 323 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	applymovement 5, Movement_Fan4WalkAway
# 325 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 3
# 326 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	waitmovement 5
# 327 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 3
# 328 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	removeobject 5
# 330 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
# 331 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 332 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser::
# 336 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 337 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre::
# 341 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 342 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
# 343 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1::
# 347 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2::
# 351 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 352 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	faceplayer
# 353 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3::
# 362 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	lock
# 363 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	faceplayer
# 364 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign_Text_0:
# 19 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "CENTRAL ORANNA PATH\n"
	.string "TIDALCOVE{UP_ARROW}$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign_Text_0:
# 23 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "KRISSIE'S BEAUTY SALON\n"
	.string "For you and your Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0:
# 31 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "My sister wants to be a model just like\n"
	.string "Ruka, so she's training her body.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude_Text_0:
# 41 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
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
# 58 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Tryna see some of my catches?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1:
# 59 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Pretty snazzy, right?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2:
# 61 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I wish the people at Tidalcove would\n"
	.string "stop tossing their trash in the sea.\p"
	.string "A lot of it ends up flowing down this\n"
	.string "river. You won't believe the things I've\l"
	.string "caught thinking I caught a Totodile.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0:
# 66 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I'm tired of facing all these sweaty\n"
	.string "trainers scurrying about.\p"
	.string "Let's just get this over with.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1:
# 67 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Humph.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2:
# 69 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "There is a salon right there, trainer.\n"
	.string "While it's intended for Pokemon, I think\l"
	.string "they would be willing to make an\l"
	.string "exception after seeing you.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0:
# 74 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Nyeh heh heh... Let me SHOW you my\n"
	.string "Pokémans!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1:
# 75 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Did you like my Pokémans?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2:
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I'll be getting all the ladies with my\n"
	.string "Pokémans...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0:
# 82 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Hey, check out my new ride! Isn't it\n"
	.string "slick?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1:
# 83 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Crap! I fell!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2:
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "If you want a bike, you should hit up\n"
	.string "Randy's at Tidalcove!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0:
# 90 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I need to be alone! Go away!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1:
# 91 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "-sigh-$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2:
# 93 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "I'm just upset about losing to Ruka. Her\n"
	.string "ace Pokémon was just too strong.\p"
	.string "Now I'll have to wait until tomorrow for\n"
	.string "another chance...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0:
# 149 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "KYAAA!{PAUSE 30} PRIM YOU'RE SO COOL!\p"
	.string "That girl... isn't she the newest member\n"
	.string "of STARLIGHT?\p"
	.string "Her Delcatty is so pretty... I wish I had\n"
	.string "one too!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1:
# 161 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR GREEN}Primrose: {COLOR DARK_GRAY}Time to end this.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2:
# 176 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR GREEN}Primrose: {COLOR DARK_GRAY}-sigh- What a waste of time...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3:
# 198 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Yeah! You should've just let her have\n"
	.string "it! She has better things to do than\l"
	.string "spender her time dealing with scrubs\l"
	.string "like you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4:
# 204 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}Yeah! She's Lady Primrose, the greatest\n"
	.string "idol to ever exist! She and Delcatty are\l"
	.string "gonna take Marya by storm!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5:
# 210 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}You better believe she is! We stand with\n"
	.string "Her Majesty!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6:
# 224 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "{COLOR DARK_GRAY}E-Eh? W-Wait for us, Prim! C'mon Jess,\n"
	.string "let's ditch these goobers!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2_Text_0:
# 244 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "KYAAA! PRIM YOU'RE SO COOL!\p"
	.string "That girl... isn't she the newest member\n"
	.string "of STARLIGHT?\p"
	.string "Her Delcatty is so pretty... I wish I had\n"
	.string "one too!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0:
# 337 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "N-No way... She beat me without taking\n"
	.string "any damage...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0:
# 343 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "L-Lom...\p"
	.string "{COLOR RED}(Looks like Lombre took a thrashing.)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0:
# 347 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Prim's Pokémon fight so elegantly... As\n"
	.string "expected from an idol!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0:
# 354 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
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
# 365 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2/scripts.pory"
	.string "Ruka gets so many challenge requests\n"
	.string "that she can only take a limited number\l"
	.string "of them per day.\p"
	.string "These two were having a battle to\n"
	.string "decide who would get the last spot.\p"
	.string "Poor kid... He never stood a chance\n"
	.string "against Prim.$"
