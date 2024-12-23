ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts::
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD
# 10 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_AGGRON_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_TEMP_1F
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_ALBA_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 13 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 15 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT::
# 21 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2
# 29 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0
# 32 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1:
# 34 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2:
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	special DrawWholeMapView
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_4
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Temp::
# 38 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Temp_Text_0
# 44 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe::
# 49 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 50 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0
# 57 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 58 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1::
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0
# 67 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2::
# 72 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 73 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 75 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0
# 78 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 79 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract::
# 86 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 87 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 88 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2
# 96 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_WEAK
# 97 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1:
# 101 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 102 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2:
# 89 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 90 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract::
# 106 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 107 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2
# 191 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3
# 236 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 237 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10
ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1:
# 241 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 242 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2:
# 108 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 109 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0
# 115 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 116 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 117 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 118 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 119 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 120 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 121 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 122 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1
# 128 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 130 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 131 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 133 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_QuestionMark
# 134 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 135 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 137 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 138 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 139 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 140 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 141 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2
# 145 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 147 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 148 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 149 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 150 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 151 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 152 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 153 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3
# 158 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 160 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 161 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 162 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 163 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 164 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 165 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 166 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4
# 169 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 171 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 172 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 173 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 174 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 175 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 176 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 177 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 178 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 179 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 180 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 181 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5
# 188 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SPOKE_TO_ALBA
# 189 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3:
# 192 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 193 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6, MSGBOX_YESNO
# 196 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7:
# 197 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7
# 200 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	trainerbattle_no_intro TRAINER_LUMINE_CAVE_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8
# 202 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 204 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9
# 209 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 211 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 212 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 213 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 214 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 215 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 216 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 217 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 218 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 219 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 220 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 221 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 222 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 223 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 224 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 226 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 227 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 228 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 229 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_ALBA_DEFEATED
# 231 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 232 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl::
# 246 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 247 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 248 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2
# 254 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1:
# 258 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 259 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 260 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 261 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2:
# 249 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1::
# 265 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 266 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0
# 269 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 270 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Aron::
# 274 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 275 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 276 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 277 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0
# 280 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 281 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert::
# 285 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 286 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_WEAK
# 287 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0
# 290 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 291 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2::
# 295 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 296 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 297 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0
# 301 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 302 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3::
# 306 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 307 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 308 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0
# 311 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 312 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4::
# 316 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 317 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0
# 322 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 323 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5::
# 327 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 328 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 329 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0
# 332 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 333 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6::
# 337 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 338 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2
# 344 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 345 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1:
# 349 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 350 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2:
# 339 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Litten::
# 354 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 355 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 356 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0
# 359 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 360 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron::
# 364 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 366 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 367 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 368 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 369 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setcwildbattle 0, SPECIES_SHADOW_AGGRON, 45, ITEM_SHELL_BELL, NATURE_RELAXED, 2, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_CURSE, MOVE_HEAD_SMASH, MOVE_HEAVY_SLAM
# 370 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setwilddoublebattle TRUE
# 371 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_ENCOUNTER
# 372 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 373 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	dowildbattle
# 374 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 375 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 376 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 377 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	switch VAR_RESULT
# 380 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 381 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 384 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight
ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1:
# 386 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3:
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1


# 389 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
AlbaWalkToPlayer:
# 390 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 390 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 390 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 390 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 390 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
	step_end

# 393 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlZoom:
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 395 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
# 395 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
	step_end

# 398 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlWalkToPlayer:
# 399 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 399 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 400 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_left
	step_end

# 403 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenHop:
# 404 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
# 404 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
	step_end

# 407 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenWalkToGirl:
# 408 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 408 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 409 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	face_left
	step_end

# 412 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LumineCaveWalkAway:
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight::
# 417 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 418 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_AGGRON_DEFEATED
# 419 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 420 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 421 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 422 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8000, 26
# 423 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8001, 6
# 424 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	callnative TeleportCamera
# 425 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 8
# 426 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 20
# 427 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 21
# 428 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 22
# 429 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 23
# 430 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 24
# 431 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 25
# 432 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 26
# 433 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 1
# 434 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 2
# 435 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 11
# 436 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 6
# 437 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 8, 47, 0
# 438 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 20, 47, 0
# 439 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 21, 47, 0
# 440 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 22, 47, 0
# 441 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 23, 47, 0
# 442 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 24, 47, 0
# 443 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 25, 47, 0
# 444 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 26, 47, 0
# 445 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 1, 26, 12
# 446 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 2, 26, 13
# 447 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 11, 28, 12
# 448 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 449 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 451 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0
# 457 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 460 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 462 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, AlbaWalkToPlayer
# 463 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, AlbaWalkToPlayer
# 464 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 465 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 466 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 467 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 469 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 470 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1
# 478 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 480 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 481 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 482 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 483 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 484 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 485 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 487 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2
# 494 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 496 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 497 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 498 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 499 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 500 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 501 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 502 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 503 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 504 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3
# 512 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 515 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 516 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 517 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 518 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 519 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4
# 525 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 527 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 528 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 530 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlZoom
# 531 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 532 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5
# 535 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 536 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenHop
# 537 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 538 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 539 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 540 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlWalkToPlayer
# 541 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 542 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 543 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 544 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 545 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 546 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6
# 549 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 550 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 552 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenWalkToGirl
# 553 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 554 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 555 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 556 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 557 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 558 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7
# 561 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 563 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 564 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LumineCaveWalkAway
# 565 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LumineCaveWalkAway
# 566 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 568 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8
# 573 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 576 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, FALSE
# 578 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 579 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 580 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 581 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, LumineCaveWalkAway
# 582 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, LumineCaveWalkAway
# 583 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 584 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 1
# 585 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 2
# 586 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 11
# 587 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 16
# 588 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 47, 0
# 589 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 47, 0
# 590 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 11, 47, 0
# 591 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 16, 47, 0
# 592 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
# 595 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 596 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0:
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Temp_Text_0:
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(...It appears a blockade of giant\n"
	.string "Wailmer dolls is impedeing my ability to\l"
	.string "progress.)\p"
	.string "(Huh? There's a note attached to one of\n"
	.string "them.)\p"
	.string "Thanks for playing the 1.5 release of\n"
	.string "our Pokémon hack! Unfortunately, this\l"
	.string "is where the road ends for now. Be sure\l"
	.string "to check our forum page for future\l"
	.string "updates. :)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0:
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "STICKING OUT YOUR GYATT FOR THE\n"
	.string "GRAVELER\p"
	.string "YOU'RE SO CARBINK\n"
	.string "YOU'RE SO GIGALITH\p"
	.string "I JUST WANNA BE YOUR CRADILY\p"
	.string "C'MON, SING IT WITH ME!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0:
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "We heard there was a mass outbreak\n"
	.string "blocking the cave, but it seems like it's\l"
	.string "already been resolved...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0:
# 76 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Doryuzu... {COLOR BLUE}(What a shame... I was ready\n"
	.string "to GROUND POUND that Aggron!)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0:
# 91 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I AM DESIGNATED AS PORYGON2:\n"
	.string "DEFINITIVE EDITION REMASTERED!\p"
	.string "WHAT'S QUACKALACKIN'?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1:
# 98 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "YOU REALLY DUCKED US UP, TRAINER! I\n"
	.string "WILL REMEMBER OUR FIGHT!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0:
# 110 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Fascinating...{PAUSE 60} the sheer ferocity of an\n"
	.string "Aggron is truly without parallel...\p"
	.string "Their adamantine iron hide that serves\n"
	.string "as both sword and shield, compounded\l"
	.string "with their instinctive territorial\l"
	.string "nature...\p"
	.string "Yes...{PAUSE 60} This mass outbreak has proved\n"
	.string "rather beneficial in realizing the\l"
	.string "potential of Pokémon...\p"
	.string "Oh?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1:
# 123 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ah,{PAUSE 60} please excuse my ramblings, trainer.{PAUSE 60}\n"
	.string "I was simply enamored by the majesty of\l"
	.string "the Aggron over there.\p"
	.string "I do advise that you keep a safe\n"
	.string "distance, however.\p"
	.string "They have claimed this cavern as their\n"
	.string "home, and will not show mercy to those\l"
	.string "who dare trespass it.\p"
	.string "It is in everyone's best interest to\n"
	.string "stay put until the authorities arrive.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2:
# 142 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eeeh?{PAUSE 60} But my poor little Litten is\n"
	.string "getting picked on by those meanies!\p"
	.string "Please, can't you save her?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3:
# 154 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I understand your frustrations, but it\n"
	.string "is too dangerous for any of us to tread\l"
	.string "onto their territory.\p"
	.string "Even I do not possess the capabilities\n"
	.string "to surmount a mighty Aggron.\p"
	.string "All we can do is hope for the best and\n"
	.string "await the Silverwing Order.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4:
# 167 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "B-But!...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5:
# 182 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "You still wish to pass to rescue her\n"
	.string "Litten,{PAUSE 60} despite my warnings?\p"
	.string "Hm...{PAUSE 60} I cannot in good faith let such a\n"
	.string "young trainer go on alone...\p"
	.string "But if you are that confident in your\n"
	.string "abilities, I would like to verify them\l"
	.string "first in a battle.\p"
	.string "If you can best me, I will grant you\n"
	.string "passage to save her Pokémon.\p"
	.string "I will give you a moment to prepare.\n"
	.string "Speak to me when you are ready.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6:
# 194 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Have you made the necessary\n"
	.string "preparations for our battle?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7:
# 198 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Very well. Prove to me that you have\n"
	.string "what it takes!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8:
# 200 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Intriguing...\pYou've exceeded my expectations,{PAUSE 60}\nthat's for sure...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9:
# 205 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}I must applaud you for your\n"
	.string "tactical prowess, trainer.\p"
	.string "As agreed upon, I will allow you to\n"
	.string "engage the Aggron by yourself.\p"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10:
# 238 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0:
# 250 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please save my litty kitty! D:$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1:
# 255 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Waaaah!{PAUSE 30} My Litten is trapped over there\n"
	.string "with those big bad bullies!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0:
# 267 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "See that big strong Aggron, buddy?\n"
	.string "That's what you're gonna grow up to be!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0:
# 278 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ron... {COLOR BLUE}(I'm glad to be owned by a trainer.\n"
	.string "The wild Pokémon world is scary.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0:
# 288 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Looks like Swampert is out of\n"
	.string "commission.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0:
# 298 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The horns of an Aggron are strong\n"
	.string "enough to pierce steel with ease, while\l"
	.string "their claws can shred through the\l"
	.string "strongest of bedrock.\p"
	.string "It's believed that ancient generals\n"
	.string "used to wear armor made from the\l"
	.string "plating of an Aggron as a symbol of\l"
	.string "strength.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0:
# 309 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I could easily take down an Aggron by\n"
	.string "myself.{PAUSE 60} Just give me enough prep time!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0:
# 318 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Swampert! Are you alright?\p"
	.string "Argh... We couldn't even put a dent on\n"
	.string "that Aggron...\p"
	.string "It doesn't add up. Why weren't water or\n"
	.string "ground moves super effective on it...?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0:
# 330 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Heck... I'm gonna miss out on meeting\n"
	.string "STARLIGHT cause of this DUMB Aggron!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0:
# 340 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eureka! A deposit of Sodium Chloride!\n"
	.string "This will go great with my french fries!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1:
# 346 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Huh? What do you mean, this isn't the\n"
	.string "same salt you put on food?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0:
# 357 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Mew... {COLOR BLUE}(git mes out)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0:
# 452 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Phew...{PAUSE 60} Seems like defeating the Aggron\n"
	.string "caused the other Pokémon to flee...)\p"
	.string "(That Aggron...{PAUSE 60} it was exuding the same\n"
	.string "shadowy aura as the Mightyena I fought\l"
	.string "with Melissa...)\p"
	.string "(What's going on here...?){PAUSE 60}\p"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}Incredible...{PAUSE 60} I cannot believe my\n"
	.string "very own eyes...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1:
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My apologies, but I never caught your\n"
	.string "name.{PAUSE 60} May I ask it by chance?\p"
	.string "...\p"
	.string "Ah, {PLAYER},{PAUSE 30} is it?\p"
	.string "Tell me, {PLAYER},{PAUSE 30} what is it that\n"
	.string "allows you to bring forth the latent\l"
	.string "power of your Pokémon?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2:
# 488 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Hm...{PAUSE 60} I see...{PAUSE 60} You believe it is your\n"
	.string "ability to understand and talk to\l"
	.string "Pokémon that enables you to form\l"
	.string "stronger bonds with them, thereby\l"
	.string "drawing out their maximum potential?\p"
	.string "An interesting prospect, {PLAYER}.{PAUSE 60}\n"
	.string "Your response mirrors that of an old\l"
	.string "colleague I once worked with...\p"
	.string "I too hypothesize that the power of\n"
	.string "emotions is the key to unlocking a\l"
	.string "Pokémon's true strength...\p"
	.string "But which emotion specifically? I still\n"
	.string "have yet to figure out...\p"
	.string "Until then, my research on the mind of\n"
	.string "Pokémon continues...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3:
# 505 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Hm? Did I notice anything strange\n"
	.string "about the Aggron?\p"
	.string "Not particularly...{PAUSE 60} Did you happen to\n"
	.string "see something that I did not?\p"
	.string "...\p"
	.string "Is that so...?\p"
	.string "Hmm...{PAUSE 60} A menacing dark aura emanating\n"
	.string "from a Pokémon acting unnaturally...{PAUSE 60}\l"
	.string "Only for it to fade away when they are\l"
	.string "defeated in battle...\p"
	.string "...and you say you encountered a\n"
	.string "Mightyena with the same traits as well?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4:
# 520 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "That is rather worrisome, if what you\n"
	.string "say is true...{PAUSE 60} I was unable to observe\l"
	.string "anything like that from the Aggron.\p"
	.string "Perhaps your ability to perceive its\n"
	.string "aura is related to your innate ability?\p"
	.string "This is all very unorthodox...{PAUSE 60} What could\n"
	.string "be the cause of such a phenomenon?\p"
	.string "Perhaps I should take the Aggron in for\n"
	.string "further analysis...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5:
# 533 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My precious little Litten! I'm never\n"
	.string "gonna let you out of my sight again!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6:
# 547 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Thank you, thank you, thank you,\n"
	.string "trainer!{PAUSE 60} Here, I know it's not much, but\l"
	.string "please take it for saving my Litten!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7:
# 559 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The first thing we'll be doing at\n"
	.string "Bellehaven is getting you a leash!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8:
# 569 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}...and with that, I believe it is\n"
	.string "about time I take my leave as well.\p"
	.string "Our battle was quite fruitful,\n"
	.string "{PLAYER}.{PAUSE 60} I've little opportunities to\l"
	.string "interact with trainers of your...{PAUSE 60}\l"
	.string "expertise.\p"
	.string "Perhaps we shall meet again in the\n"
	.string "future.{PAUSE 60} Hopefully by then, I will have\l"
	.string "found the answer to my hypothesis...{PAUSE 60} as\l"
	.string "well as the answer to yours.$"
