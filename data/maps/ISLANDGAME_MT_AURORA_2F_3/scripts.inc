ISLANDGAME_MT_AURORA_2F_3_MapScripts::
# 10 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	compare VAR_ROSEVALE_STATE, 1
	goto_if_ne ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	compare VAR_ROSEVALE_STATE, 5
	goto_if_ne ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


# 18 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
WalkInPlaceUp:
# 19 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_in_place_up
	step_end

# 22 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
JumpInPlaceDown2:
# 23 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_down
# 23 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_down
	step_end

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene::
# 27 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 28 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 31 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 32 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 33 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 34 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_0
# 38 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 40 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
# 41 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, JumpInPlaceDown2
# 42 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 43 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 44 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 45 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 46 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 47 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_1
# 50 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_2
# 56 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 60 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 61 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 62 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 63 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_Delay32
# 64 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 66 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_3
# 70 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 72 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 73 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 74 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 75 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4
# 76 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 77 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadedefaultbgm
# 78 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 5
# 79 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 80 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 81 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_2F_3_Arthur_Interact::
# 85 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 86 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	faceplayer
# 87 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4
# 88 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact::
# 92 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 93 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	faceplayer
# 94 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
# 95 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact_Text_0
# 96 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_2F_3_EdeaInteract::
# 100 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 101 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	faceplayer
# 102 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	trainerbattle_single TRAINER_MT_AURORA_EDEA, ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_0, ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_1, ThiefDefeated
	return


# 107 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_AzurillOutOfWay:
# 108 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_left
# 109 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	face_right
	step_end

# 112 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_ThiefRunAway:
# 113 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay_16
# 114 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_left
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
# 115 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_faster_down
	step_end

# 118 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
Movement_AzurillHappy:
# 119 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_right
# 119 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	jump_in_place_right
# 120 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_fast_right
# 121 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_fast_down
# 121 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	walk_fast_down
# 122 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	face_right
	step_end

ThiefDefeated:
# 126 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	lock
# 129 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 130 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 131 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 132 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 133 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_0
# 136 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 137 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_1
# 143 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 144 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
# 145 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmoncry
# 147 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 148 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 149 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 150 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 151 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 152 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 153 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_2
# 154 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 155 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 156 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 157 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 160 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_TO_WHITE
# 161 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	addobject 2
# 162 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setobjectxy 2, 12, 11
# 163 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 164 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay 30
# 167 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
# 168 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_3
# 169 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 170 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 171 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 172 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 173 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 174 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playse SE_PIN
# 175 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 176 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 177 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 178 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 179 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 180 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 181 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 182 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 183 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 184 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 185 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 186 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 187 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 189 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_4
# 194 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 196 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Movement_AzurillOutOfWay
# 197 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 3, Movement_ThiefRunAway
# 198 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 199 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 200 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 201 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 202 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 203 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 204 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 205 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	removeobject 3
# 206 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 207 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
# 208 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_5
# 209 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 210 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 211 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 212 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 213 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 214 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 215 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay 30
# 219 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_TO_WHITE
# 220 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	removeobject 2
# 221 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 223 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, WalkInPlaceUp
# 224 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_Delay32
# 226 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 227 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 228 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_6
# 233 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 234 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 4, Movement_AzurillHappy
# 235 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 236 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 237 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_7
# 240 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 241 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 242 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_8
# 245 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	closemessage
# 246 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 247 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 248 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 249 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	waitmovement 0
# 251 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	msgbox ThiefDefeated_Text_9
# 256 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 2
# 258 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 259 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	delay 30
# 260 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	removeobject 5
# 263 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	warp MAP_ISLANDGAME_ROSEVALE, 13, 26
	return


ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_0:
# 35 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Pfft. THAT was your attempt at\n"
	.string "battling? You didn't even land a single\l"
	.string "hit on any of my Pokémon!\p"
	.string "{COLOR DARK_GRAY}And you came ALL this way just to try\n"
	.string "and stop me? How pathetic.$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_1:
# 47 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Mgrgrgr...$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_2:
# 51 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Haha, this shiny Azurill is gonna\n"
	.string "snag me a fortune on the black market!\p"
	.string "As for you...{PAUSE 60} quit moping and just and\n"
	.string "get a new one for your little sis.\p"
	.string "She's just a dumb child, she probably\n"
	.string "won't even notice the difference.\p"
	.string "Country bumpkins like you don't\n"
	.string "understand the value of shiny Pokémon.$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_3:
# 67 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR DARK_GRAY}Hm?{PAUSE 60} And just who are you? A friend of\n"
	.string "his?\p"
	.string "{COLOR DARK_GRAY}Beat it, kid! Unless you want to get\n"
	.string "demolished like this loser!$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4:
# 75 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Please! You have to stop her!\n"
	.string "That Azurill means everything to my\l"
	.string "little sister!\p"
	.string "I-I tried my best...{PAUSE 60} but it just wasn't\n"
	.string "enough...$"

ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact_Text_0:
# 95 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Azu... {COLOR BLUE}(pls saef me frum meen ladi)$"

ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_0:
# 103 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}-sigh- This is why I hate kids.{PAUSE 60}\n"
	.string "You brats just never listen!$"

ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_1:
# 104 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "I-Impossible! Just who are you!?$"

ThiefDefeated_Text_0:
# 134 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Ha! You lost!{PAUSE 60} Now, give me back\n"
	.string "my sister's Azurill!$"

ThiefDefeated_Text_1:
# 138 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}In your dreams, squirt! I'm not\n"
	.string "giving this Pokémon up! It's worth more\l"
	.string "than your dinky little inn!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}H-Huh? But you have to! We beat\n"
	.string "you, fair and square!\p"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}And? What are you gonna do, tell\n"
	.string "on me to the Pokémon gods? I'm taking\l"
	.string "this Azurill with me! Peace out, losers!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}W-Wait!$"

ThiefDefeated_Text_2:
# 153 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR RED}(Huh? What was that sound?)$"

ThiefDefeated_Text_3:
# 168 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Cuuuuun!$"

ThiefDefeated_Text_4:
# 190 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}W-What!? Articuno!? Where in the\n"
	.string "blazes did you come from!?\p"
	.string "Ngggh...{PAUSE 60} F-Fine! I'll give back their\n"
	.string "stupid Azurill!\p"
	.string "You punks got lucky this time! Now... if\n"
	.string "you don't mind me...{PAUSE 60} I'm outta here!$"

ThiefDefeated_Text_5:
# 208 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Cuuuuun...$"

ThiefDefeated_Text_6:
# 229 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Holy heck...{PAUSE 60} Was that Articuno\n"
	.string "in the flesh just now!?\p"
	.string "It left before we could say anything...{PAUSE 60}\n"
	.string "T-Thank you for the help, Articuno!$"

ThiefDefeated_Text_7:
# 238 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Azurill! I'm so sorry for not being more\n"
	.string "watchful. I should've never left you\l"
	.string "and my little sister out of sight.$"

ThiefDefeated_Text_8:
# 243 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "Oh, and thank you too! Er...$"

ThiefDefeated_Text_9:
# 252 "data/maps/ISLANDGAME_MT_AURORA_2F_3/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}? Well, I owe you big\n"
	.string "and Articuno big time for helping me.\p"
	.string "I couldn't do anything... If it weren't\n"
	.string "for you and Articuno, Azurill would've\l"
	.string "been lost forever!\p"
	.string "Ah... Ah... Achoo!{PAUSE 60} Brrr... It's freezing in\n"
	.string "here.{PAUSE 60} Let's head back to Rosevale.$"
