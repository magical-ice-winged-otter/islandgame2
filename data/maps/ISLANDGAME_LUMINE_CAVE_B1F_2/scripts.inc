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


ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe::
# 38 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0
# 46 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 47 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1::
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 53 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0
# 56 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 57 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2::
# 61 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 63 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0
# 67 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract::
# 75 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 77 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2
# 85 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_WEAK
# 86 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1:
# 90 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 91 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2:
# 78 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 79 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract::
# 95 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 96 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2
# 180 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3
# 225 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 226 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10
ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1:
# 230 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 231 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2:
# 97 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 98 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0
# 104 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 105 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 106 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 107 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 108 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 109 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 110 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 111 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1
# 117 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 119 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 120 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 122 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_QuestionMark
# 123 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 124 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterRight
# 125 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 126 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 127 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 128 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 129 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 130 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2
# 134 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 136 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 137 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 138 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 139 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 140 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 141 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3
# 147 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 149 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 150 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 151 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_Delay48
# 152 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 153 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 154 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 155 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4
# 158 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 160 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 161 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 162 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 163 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 164 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 165 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 166 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 167 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 168 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 169 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 170 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5
# 177 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SPOKE_TO_ALBA
# 178 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3:
# 181 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 182 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6, MSGBOX_YESNO
# 185 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7:
# 186 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7
# 189 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	trainerbattle_no_intro TRAINER_LUMINE_CAVE_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8
# 191 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 193 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9
# 198 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 200 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 201 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 202 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 203 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 204 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 205 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 206 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 207 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 208 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 209 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 210 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 211 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 212 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 213 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 214 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 10, 11
# 215 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 216 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 9, 11
# 217 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 218 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_ALBA_DEFEATED
# 220 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 221 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl::
# 235 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 236 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 237 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2
# 243 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1:
# 247 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 248 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 249 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 250 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2:
# 238 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1::
# 254 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 255 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0
# 258 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 259 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Aron::
# 263 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 264 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 265 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 266 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0
# 269 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 270 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert::
# 274 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 275 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_WEAK
# 276 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0
# 279 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 280 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2::
# 284 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 285 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 286 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0
# 290 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 291 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3::
# 295 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 296 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 297 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0
# 300 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 301 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4::
# 305 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 306 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0
# 311 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 312 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5::
# 316 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 317 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 318 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0
# 321 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 322 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6::
# 326 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 327 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2
# 333 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 334 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1:
# 338 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 339 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2:
# 328 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Litten::
# 343 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 344 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 345 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0
# 348 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 349 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron::
# 353 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 354 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	faceplayer
# 355 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 356 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 357 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 358 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setcwildbattle 0, SPECIES_SHADOW_AGGRON, 45, ITEM_SHELL_BELL, NATURE_RELAXED, 2, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_CURSE, MOVE_HEAD_SMASH, MOVE_HEAVY_SLAM
# 359 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setwilddoublebattle TRUE
# 360 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_ENCOUNTER
# 361 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 362 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	dowildbattle
# 363 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 364 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 365 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 366 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 368 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	switch VAR_RESULT
# 369 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 370 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
# 373 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight
ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1:
# 375 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3:
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1


# 378 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
AlbaWalkToPlayer:
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
# 379 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_up
	step_end

# 382 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlZoom:
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 383 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_faster_up
# 384 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
# 384 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_up
	step_end

# 387 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenGirlWalkToPlayer:
# 388 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 388 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_left
	step_end

# 392 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenHop:
# 393 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
# 393 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	jump_in_place_down
	step_end

# 396 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LittenWalkToGirl:
# 397 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 397 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 397 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	face_left
	step_end

# 401 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
LumineCaveWalkAway:
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
# 402 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight::
# 406 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	lock
# 407 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_AGGRON_DEFEATED
# 408 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 409 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 410 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 411 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8000, 26
# 412 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setvar VAR_0x8001, 6
# 413 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	callnative TeleportCamera
# 414 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 8
# 415 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 20
# 416 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 21
# 417 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 22
# 418 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 23
# 419 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 24
# 420 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 25
# 421 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 26
# 422 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 1
# 423 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 2
# 424 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	addobject 11
# 425 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 6
# 426 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 8, 47, 0
# 427 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 20, 47, 0
# 428 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 21, 47, 0
# 429 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 22, 47, 0
# 430 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 23, 47, 0
# 431 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 24, 47, 0
# 432 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 25, 47, 0
# 433 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 26, 47, 0
# 434 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 1, 26, 12
# 435 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 2, 26, 13
# 436 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxy 11, 28, 12
# 437 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 438 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 440 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0
# 446 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 449 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
# 451 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, AlbaWalkToPlayer
# 452 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, AlbaWalkToPlayer
# 453 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 454 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 455 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 456 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 457 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 458 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 459 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 461 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1
# 467 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 469 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 470 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 471 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 472 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 473 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 474 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 476 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2
# 483 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 485 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 486 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 487 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 488 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 489 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 490 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 491 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 492 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 493 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3
# 501 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 504 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 505 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 506 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 507 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 508 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4
# 514 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 516 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 517 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
# 519 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlZoom
# 520 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 521 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5
# 524 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 525 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenHop
# 526 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 527 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
# 528 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmoncry
# 529 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LittenGirlWalkToPlayer
# 530 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 531 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 532 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 533 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 534 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 535 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6
# 538 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 539 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 541 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LittenWalkToGirl
# 542 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 543 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 544 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 545 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 546 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 547 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7
# 550 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 552 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 553 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 11, LumineCaveWalkAway
# 554 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 16, LumineCaveWalkAway
# 555 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 557 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8
# 562 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	closemessage
# 565 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, FALSE
# 567 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 568 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 569 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 570 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 1, LumineCaveWalkAway
# 571 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	applymovement 2, LumineCaveWalkAway
# 572 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	waitmovement 0
# 573 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 1
# 574 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 2
# 575 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 11
# 576 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	removeobject 16
# 577 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 1, 47, 0
# 578 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 2, 47, 0
# 579 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 11, 47, 0
# 580 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	setobjectxyperm 16, 47, 0
# 581 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	release
# 584 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	savebgm MUS_DUMMY
# 585 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	fadedefaultbgm
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0:
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0:
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "STICKING OUT YOUR GYATT FOR THE\n"
	.string "GRAVELER\p"
	.string "YOU'RE SO CARBINK\n"
	.string "YOU'RE SO GIGALITH\p"
	.string "I JUST WANNA BE YOUR CRADILY\p"
	.string "C'MON, SING IT WITH ME!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0:
# 54 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "We heard there was a mass outbreak\n"
	.string "blocking the cave, but it seems like it's\l"
	.string "already been resolved...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0:
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Doryuzu... {COLOR BLUE}(What a shame... I was ready\n"
	.string "to GROUND POUND that Aggron!)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0:
# 80 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I AM DESIGNATED AS PORYGON2:\n"
	.string "DEFINITIVE EDITION REMASTERED!\p"
	.string "WHAT'S QUACKALACKIN'?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1:
# 87 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "YOU REALLY DUCKED US UP, TRAINER! I\n"
	.string "WILL REMEMBER OUR FIGHT!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0:
# 99 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 112 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 131 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eeeh?{PAUSE 60} But my poor little Litten is\n"
	.string "getting picked on by those meanies!\p"
	.string "Please, can't you save her?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3:
# 143 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I understand your frustrations, but it\n"
	.string "is too dangerous for any of us to tread\l"
	.string "onto their territory.\p"
	.string "Even I do not possess the capabilities\n"
	.string "to surmount a mighty Aggron.\p"
	.string "All we can do is hope for the best and\n"
	.string "await the Silverwing Order.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4:
# 156 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "B-But!...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5:
# 171 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 183 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Have you made the necessary\n"
	.string "preparations for our battle?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7:
# 187 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Very well. Prove to me that you have\n"
	.string "what it takes!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8:
# 189 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Intriguing...\pYou've exceeded my expectations,{PAUSE 60}\nthat's for sure...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9:
# 194 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}I must applaud you for your\n"
	.string "tactical prowess, trainer.\p"
	.string "As agreed upon, I will allow you to\n"
	.string "engage the Aggron by yourself.\p"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10:
# 227 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer, but\l"
	.string "a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0:
# 239 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Please save my litty kitty! D:$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1:
# 244 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Waaaah!{PAUSE 30} My Litten is trapped over there\n"
	.string "with those big bad bullies!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0:
# 256 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "See that big strong Aggron, buddy?\n"
	.string "That's what you're gonna grow up to be!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0:
# 267 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Ron... {COLOR BLUE}(I'm glad to be owned by a trainer.\n"
	.string "The wild Pokémon world is scary.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0:
# 277 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Looks like Swampert is out of\n"
	.string "commission.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0:
# 287 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The horns of an Aggron are strong\n"
	.string "enough to pierce steel with ease, while\l"
	.string "their claws can shred through the\l"
	.string "strongest of bedrock.\p"
	.string "It's believed that ancient generals\n"
	.string "used to wear armor made from the\l"
	.string "plating of an Aggron as a symbol of\l"
	.string "strength.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0:
# 298 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "I could easily take down an Aggron by\n"
	.string "myself.{PAUSE 60} Just give me enough prep time!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0:
# 307 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Swampert! Are you alright?\p"
	.string "Argh... We couldn't even put a dent on\n"
	.string "that Aggron...\p"
	.string "It doesn't add up. Why weren't water or\n"
	.string "ground moves super effective on it...?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0:
# 319 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Heck... I'm gonna miss out on meeting\n"
	.string "STARLIGHT cause of this DUMB Aggron!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0:
# 329 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Eureka! A deposit of Sodium Chloride!\n"
	.string "This will go great with my french fries!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1:
# 335 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Huh? What do you mean, this isn't the\n"
	.string "same salt you put on food?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0:
# 346 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Mew... {COLOR BLUE}(git mes out)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0:
# 441 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "{COLOR RED}(Phew...{PAUSE 60} Seems like defeating the Aggron\n"
	.string "caused the other Pokémon to flee...)\p"
	.string "(That Aggron...{PAUSE 60} it was exuding the same\n"
	.string "shadowy aura as the Mightyena I fought\l"
	.string "with Melissa...)\p"
	.string "(What's going on here...?){PAUSE 60}\p"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}Incredible...{PAUSE 60} I cannot believe my\n"
	.string "very own eyes...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1:
# 462 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My apologies, but I never caught your\n"
	.string "name.{PAUSE 60} May I ask it by chance?\p"
	.string "...\p"
	.string "Ah, {PLAYER},{PAUSE 30} is it?\p"
	.string "Tell me, {PLAYER},{PAUSE 30} what is it that\n"
	.string "allows you to bring forth the latent\l"
	.string "power of your Pokémon?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2:
# 477 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 494 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 509 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
# 522 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "My precious little Litten! I'm never\n"
	.string "gonna let you out of my sight again!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6:
# 536 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "Thank you, thank you, thank you,\n"
	.string "trainer!{PAUSE 60} Here, I know it's not much, but\l"
	.string "please take it for saving my Litten!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7:
# 548 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
	.string "The first thing we'll be doing at\n"
	.string "Bellehaven is getting you a leash!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8:
# 558 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_2/scripts.pory"
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
