ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts::
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 8 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_ALBA_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 14 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 16 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT::
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0
# 33 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1:
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2:
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_4
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Temp::
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Temp_Text_0
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 46 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe::
# 50 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0
# 58 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1::
# 63 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 69 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2::
# 73 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 75 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 76 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0
# 79 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 80 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract::
# 87 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 88 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 89 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2
# 97 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_WEAK
# 98 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1:
# 102 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 103 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2:
# 90 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 91 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract::
# 107 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 108 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2
# 192 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3
# 237 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 238 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10
ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1:
# 242 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 243 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2:
# 109 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 110 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0
# 116 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 117 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 118 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 119 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 120 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 121 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 122 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 123 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1
# 129 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 131 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 132 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 134 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_QuestionMark
# 135 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 136 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 138 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 139 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 140 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 141 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2
# 146 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 148 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 149 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 150 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 151 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 152 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 153 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 154 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3
# 159 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 161 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 162 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 163 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 164 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 165 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 166 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 167 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4
# 170 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 172 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 173 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 174 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 175 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 176 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 177 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 178 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 179 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 180 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 181 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 182 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5
# 189 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SPOKE_TO_ALBA
# 190 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3:
# 193 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 194 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6, MSGBOX_YESNO
# 197 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7:
# 198 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7
# 201 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	trainerbattle_no_intro TRAINER_LUMINE_CAVE_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8
# 203 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 205 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9
# 210 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 212 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 213 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 214 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 215 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 216 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 217 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 219 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 220 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 221 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 222 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 223 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 224 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 225 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 226 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 227 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 228 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 229 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 230 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_ALBA_DEFEATED
# 232 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 233 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl::
# 247 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 248 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 249 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2
# 255 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1:
# 259 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 260 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 261 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 262 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2:
# 250 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1::
# 266 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 267 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0
# 270 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 271 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Aron::
# 275 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 276 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 277 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 278 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0
# 281 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 282 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert::
# 286 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 287 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_WEAK
# 288 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0
# 291 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 292 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2::
# 296 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 297 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 298 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0
# 302 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 303 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3::
# 307 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 308 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 309 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0
# 312 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 313 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4::
# 317 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 318 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0
# 323 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 324 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5::
# 328 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 329 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 330 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0
# 333 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 334 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6::
# 338 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 339 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2
# 345 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 346 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1:
# 350 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 351 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2:
# 340 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Litten::
# 355 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 356 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 357 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0
# 360 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 361 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


# 364 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LaironApproach:
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
	step_end

# 368 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LaironStepBack:
# 369 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock_facing_direction
# 370 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble::
# 374 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 375 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_NORMAL
# 376 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 377 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_NORMAL
# 378 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 380 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 381 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playse SE_PIN
# 382 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 384 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 30
# 385 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 20
# 386 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 21
# 387 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 20, 25, 13
# 388 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 21, 27, 13
# 389 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 20, LaironApproach
# 390 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 21, LaironApproach
# 391 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 393 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 394 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 395 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LAIRON, 40, ITEM_STEEL_GEM, NATURE_RELAXED, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_ROCK_SLIDE, MOVE_ENDEAVOR, MOVE_REVERSAL
# 396 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_RIGHT, SPECIES_LAIRON, 40, ITEM_ROCK_GEM, NATURE_RELAXED, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_ROCK_SLIDE, MOVE_ENDEAVOR, MOVE_REVERSAL
# 397 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setwilddoubleflag
# 398 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_ENCOUNTER
# 399 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 400 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	dowildbattle
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 403 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 404 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 405 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	switch VAR_RESULT
# 406 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble_2
# 407 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble_2
# 410 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LaironAssemble_2:
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron::
# 415 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 416 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 417 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8000, 26
# 418 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8001, 7
# 419 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	callnative TeleportCamera
# 420 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 7
# 421 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 422 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LAIRON, CRY_MODE_WEAK
# 423 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 424 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 425 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 426 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 20, LaironStepBack
# 427 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 60
# 428 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 21, LaironStepBack
# 429 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 60
# 430 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 431 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 432 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 60
# 433 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playse SE_PIN
# 434 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 435 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 436 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 437 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 438 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 30
# 439 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 440 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 441 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	delay 30
# 442 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_ENCOUNTER
# 443 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 444 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 445 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 446 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 447 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 448 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 449 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHADOW_AGGRON, 45, ITEM_LUM_BERRY, NATURE_RELAXED, 2, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_IRON_TAIL, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_REST
# 450 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setwilddoubleflag
# 451 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	dowildbattle
# 452 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 453 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 455 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 457 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	switch VAR_RESULT
# 458 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 459 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 462 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight
ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1:
# 464 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3:
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1


# 467 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
AlbaWalkToPlayer:
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 468 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
	step_end

# 471 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlZoom:
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
	step_end

# 476 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlWalkToPlayer:
# 477 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 477 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 477 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 478 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_left
	step_end

# 481 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenHop:
# 482 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
# 482 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
	step_end

# 485 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenWalkToGirl:
# 486 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 486 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 486 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 486 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 487 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	face_left
	step_end

# 490 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LumineCaveWalkAway:
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight::
# 495 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 496 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_AGGRON_DEFEATED
# 497 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 498 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 499 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 500 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 8
# 501 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 20
# 502 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 21
# 503 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 22
# 504 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 23
# 505 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 24
# 506 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 25
# 507 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 26
# 508 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 1
# 509 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 2
# 510 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 11
# 511 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 8, 47, 0
# 512 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 20, 47, 0
# 513 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 21, 47, 0
# 514 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 22, 47, 0
# 515 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 23, 47, 0
# 516 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 24, 47, 0
# 517 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 25, 47, 0
# 518 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 26, 47, 0
# 519 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 1, 26, 13
# 520 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 2, 26, 14
# 521 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 11, 28, 13
# 522 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 523 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 525 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0
# 531 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 534 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 536 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, AlbaWalkToPlayer
# 537 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, AlbaWalkToPlayer
# 538 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 539 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 540 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 541 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 542 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 543 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 544 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 546 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1
# 552 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 554 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 555 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 556 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 557 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 558 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 559 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 561 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2
# 568 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 570 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 571 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 572 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 573 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 574 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 575 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 576 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 577 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 578 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3
# 586 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 589 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 590 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 591 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 592 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 593 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4
# 597 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 599 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 600 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 602 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlZoom
# 603 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 604 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5
# 607 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 608 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenHop
# 609 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 610 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 611 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 612 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlWalkToPlayer
# 613 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 614 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 615 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 616 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 617 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 618 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6
# 621 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 622 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 624 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenWalkToGirl
# 625 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 626 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 627 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 628 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 629 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 630 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7
# 633 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 635 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 636 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LumineCaveWalkAway
# 637 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LumineCaveWalkAway
# 638 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 640 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8
# 645 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 648 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, FALSE
# 650 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 651 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 652 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 653 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, LumineCaveWalkAway
# 654 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, LumineCaveWalkAway
# 655 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 656 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 1
# 657 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 2
# 658 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 11
# 659 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 16
# 660 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 47, 0
# 661 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 47, 0
# 662 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 11, 47, 0
# 663 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 16, 47, 0
# 664 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 665 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
# 668 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 669 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0:
# 31 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Temp_Text_0:
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(...It appears a blockade of giant\n"
	.string "Wailmer dolls is impedeing my ability to\l"
	.string "progress.)\p"
	.string "(Huh? There's a note attached to one of\n"
	.string "them.)\p"
	.string "{COLOR BLUE}Thanks for playing the 1.5 release of\n"
	.string "our Pokémon hack! Unfortunately, this\l"
	.string "is where the road ends for now. Be sure\l"
	.string "to check our forum page for future\l"
	.string "updates. :)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0:
# 53 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "STICKING OUT YOUR GYATT FOR THE\n"
	.string "GRAVELER\p"
	.string "YOU'RE SO CARBINK\n"
	.string "YOU'RE SO GIGALITH\p"
	.string "I JUST WANNA BE YOUR CRADILY\p"
	.string "C'MON, SING IT WITH ME!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0:
# 66 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "We heard there was a mass outbreak\n"
	.string "blocking the cave, but it seems like it's\l"
	.string "already been resolved...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0:
# 77 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Doryuzu... {COLOR BLUE}(What a shame... I was ready\n"
	.string "to GROUND POUND that Aggron!)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0:
# 92 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I AM DESIGNATED AS PORYGON2:\n"
	.string "DEFINITIVE EDITION REMASTERED!\p"
	.string "WHAT'S QUACKALACKIN'?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1:
# 99 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "YOU REALLY DUCKED US UP, TRAINER! I\n"
	.string "WILL REMEMBER OUR FIGHT!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0:
# 111 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Fascinating... The sheer ferocity of an\n"
	.string "Aggron is truly without parallel...\p"
	.string "Their adamantine iron hide that serves\n"
	.string "as both sword and shield, compounded\l"
	.string "with their instinctive territorial\l"
	.string "nature...\p"
	.string "Yes... This mass outbreak has proved\n"
	.string "rather beneficial in realizing the\l"
	.string "potential of Pokémon...\p"
	.string "Oh?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1:
# 124 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ah, please excuse my ramblings, trainer.{PAUSE 30}\n"
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
# 143 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eeeh?{PAUSE 30} But my poor little Litten is\n"
	.string "getting picked on by those meanies!\p"
	.string "Please, can't you save her?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3:
# 155 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I understand your frustrations, but it\n"
	.string "is too dangerous for any of us to tread\l"
	.string "onto their territory.\p"
	.string "Even I do not possess the capabilities\n"
	.string "to surmount a mighty Aggron.\p"
	.string "All we can do is hope for the best and\n"
	.string "await the Silverwing Order.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4:
# 168 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "B-But!...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5:
# 183 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "You still wish to pass to rescue her\n"
	.string "Litten, despite my warnings?\p"
	.string "Hm...{PAUSE 30} I cannot in good faith let such a\n"
	.string "young trainer go on alone...\p"
	.string "But if you are that confident in your\n"
	.string "abilities, I would like to verify them\l"
	.string "first in a battle.\p"
	.string "If you can best me, I will grant you\n"
	.string "passage to save her Pokémon.\p"
	.string "I will give you a moment to prepare.\n"
	.string "Speak to me when you are ready.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6:
# 195 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Have you made the necessary\n"
	.string "preparations for our battle?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7:
# 199 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Very well. Prove to me that you have\n"
	.string "what it takes!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8:
# 201 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Intriguing...\pYou've exceeded my expectations,{PAUSE 30}\nthat's for sure...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9:
# 206 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}I must applaud you for your\n"
	.string "tactical prowess, trainer.\p"
	.string "As agreed upon, I will allow you to\n"
	.string "engage the Aggron by yourself.\p"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10:
# 239 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0:
# 251 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please save my litty kitty! D:$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1:
# 256 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Waaaah!{PAUSE 30} My Litten is trapped over there\n"
	.string "with those big bad bullies!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0:
# 268 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "See that big strong Aggron, buddy?\n"
	.string "That's what you're gonna grow up to be!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0:
# 279 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ron... {COLOR BLUE}(I'm glad to be owned by a trainer.\n"
	.string "The wild Pokémon world is scary.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0:
# 289 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Looks like Swampert is out of\n"
	.string "commission.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0:
# 299 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The horns of an Aggron are strong\n"
	.string "enough to pierce steel with ease, while\l"
	.string "their claws can shred through the\l"
	.string "strongest of bedrock.\p"
	.string "It's believed that ancient generals\n"
	.string "used to wear armor made from the\l"
	.string "plating of an Aggron as a symbol of\l"
	.string "strength.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0:
# 310 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I could easily take down an Aggron by\n"
	.string "myself.{PAUSE 30} Just give me enough prep time!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0:
# 319 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Swampert! Are you alright?\p"
	.string "Argh... We couldn't even put a dent on\n"
	.string "that Aggron...\p"
	.string "It doesn't add up. Why weren't water or\n"
	.string "ground moves super effective on it...?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0:
# 331 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Heck... I'm gonna miss out on meeting\n"
	.string "STARLIGHT cause of this DUMB Aggron!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0:
# 341 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eureka! A deposit of Sodium Chloride!\n"
	.string "This will go great with my french fries!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1:
# 347 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Huh? What do you mean, this isn't the\n"
	.string "same salt you put on food?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0:
# 358 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Mew... {COLOR BLUE}(git mes out)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0:
# 526 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Phew... Seems like defeating the Aggron\n"
	.string "caused the other Pokémon to flee...)\p"
	.string "(That Aggron... It was exuding the same\n"
	.string "shadowy aura as the Mightyena I fought\l"
	.string "with Melissa...)\p"
	.string "(What's going on here...?){PAUSE 60}\p"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}Incredible...{PAUSE 30} I cannot believe my\n"
	.string "very own eyes...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1:
# 547 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My apologies, but I never caught your\n"
	.string "name. May I ask it by chance?\p"
	.string "...\p"
	.string "Ah, {PLAYER}, is it?\p"
	.string "Tell me, {PLAYER}, what is it that\n"
	.string "allows you to bring forth the latent\l"
	.string "power of your Pokémon?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2:
# 562 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Hm... I see...{PAUSE 30} You believe it is your\n"
	.string "ability to understand and talk to\l"
	.string "Pokémon that enables you to form\l"
	.string "stronger bonds with them, thereby\l"
	.string "drawing out their maximum potential?\p"
	.string "An interesting prospect, {PLAYER}.\n"
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
# 579 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Hm? Did I notice anything strange\n"
	.string "about the Aggron?\p"
	.string "Not particularly...{PAUSE 30} Did you happen to\n"
	.string "see something that I did not?\p"
	.string "...\p"
	.string "Is that so...?\p"
	.string "Hmm... A menacing dark aura emanating\n"
	.string "from a Pokémon acting unnaturally...\p"
	.string "...and you say you encountered a\n"
	.string "Mightyena with the same traits as well?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4:
# 594 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "That is rather worrisome, if what you\n"
	.string "say is true...{PAUSE 30} I was unable to observe\l"
	.string "anything like that from the Aggron.\p"
	.string "Perhaps I should take it in for further\n"
	.string "analysis...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5:
# 605 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My precious little Litten! I'm never\n"
	.string "gonna let you out of my sight again!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6:
# 619 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Thank you, thank you, thank you,\n"
	.string "trainer! Here, I know it's not much, but\l"
	.string "please take it for saving my Litten!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7:
# 631 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The first thing we'll be doing at\n"
	.string "Bellehaven is getting you a leash!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8:
# 641 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}...and with that, I believe it is\n"
	.string "about time I take my leave as well.\p"
	.string "Our battle was quite fruitful,\n"
	.string "{PLAYER}. I've little opportunities to\l"
	.string "interact with trainers with your...{PAUSE 30}\l"
	.string "expertise.\p"
	.string "Perhaps we shall meet again in the\n"
	.string "future. Hopefully by then, I will have\l"
	.string "found the answer to my hypothesis... as\l"
	.string "well as the answer to yours.$"
