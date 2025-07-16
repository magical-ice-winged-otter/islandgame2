ISLANDGAME_APPLEVINE_MapScripts::
# 6 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	gettime
# 9 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_set FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_set FLAG_APPLEVINE_MELISSA_CALL, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 21 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


ISLANDGAME_APPLEVINE_TempBlockade1::
# 28 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 29 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_TempBlockade1_Text_0
# 32 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
	return


ISLANDGAME_APPLEVINE_TempBlockade2::
# 36 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 37 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_TempBlockade2_Text_0
# 40 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
	return


ISLANDGAME_APPLEVINE_StoreSign::
# 45 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_StoreSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_CitySign::
# 49 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CitySign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_GameCornerSign::
# 53 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GameCornerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_SierraPathSign::
# 57 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_SierraPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_RockyPathSign::
# 61 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_RockyPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_MelissaCall::
# 69 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 70 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_POKENAV_CALL
# 71 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_MelissaCall_Text_0
# 79 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_MelissaCall_Text_1
# 87 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 88 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 89 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_MELISSA_CALL
# 90 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_2, 1
# 91 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	startquest QUEST_AETHERIA_MELISSA
# 92 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 93 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_CocoInteract::
# 102 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 103 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 104 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_CocoInteract_2
# 123 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_1
ISLANDGAME_APPLEVINE_CocoInteract_1:
# 127 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_CocoInteract_2:
# 105 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
# 106 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
# 107 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 108 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 109 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 110 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 111 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 112 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 114 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 115 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
# 116 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 117 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
# 118 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
# 119 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
# 120 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
	goto ISLANDGAME_APPLEVINE_CocoInteract_1


ISLANDGAME_APPLEVINE_CocoTrigger1::
# 132 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 133 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_PIN
# 134 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 135 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 136 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 137 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 138 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 139 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 140 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
# 141 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 142 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoWalkOver1
# 143 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 144 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 145 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 146 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
# 147 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 148 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 149 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 150 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 151 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 152 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 153 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 154 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 155 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
# 156 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 157 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
# 158 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
# 159 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
# 160 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 161 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoLeave
# 162 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 163 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeobject 19
# 164 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
# 165 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_APPLEVINE_CocoTrigger2::
# 168 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 169 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_PIN
# 170 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 171 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 172 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 173 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 174 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 175 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 176 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
# 177 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 178 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoWalkOver2
# 179 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 180 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 181 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 182 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
# 183 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 184 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 185 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 186 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 187 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 188 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 189 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 190 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 191 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
# 192 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 193 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
# 194 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
# 195 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
# 196 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 197 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoLeave
# 198 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeobject 19
# 200 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
# 201 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


# 204 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CocoWalkOver1:
# 205 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 205 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 205 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CocoWalkOver2:
# 209 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 210 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 210 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 210 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
	step_end

# 213 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CocoLeave:
# 214 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 214 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 214 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 214 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 215 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
	step_end

ISLANDGAME_APPLEVINE_NPC1::
# 262 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 263 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 264 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_SWEETHEART_GIFT, ISLANDGAME_APPLEVINE_NPC1_2
# 273 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_1
ISLANDGAME_APPLEVINE_NPC1_1:
# 277 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 278 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_NPC1_2:
# 265 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_0
# 269 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_SWEET_HEART
# 270 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_SWEETHEART_GIFT
	goto ISLANDGAME_APPLEVINE_NPC1_1


ISLANDGAME_APPLEVINE_NPC2::
# 282 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 283 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 284 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_0, MSGBOX_YESNO
# 288 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC2_2
# 294 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_2
ISLANDGAME_APPLEVINE_NPC2_1:
# 296 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 297 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 298 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 299 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_NPC2_2:
# 289 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_1
# 290 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_NORMAL
# 291 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
	goto ISLANDGAME_APPLEVINE_NPC2_1


ISLANDGAME_APPLEVINE_NPC3::
# 303 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 304 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 305 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC3_Text_0, MSGBOX_NPC
# 309 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 310 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 311 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC4::
# 315 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 316 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 317 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 318 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC4_Text_0
# 321 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 322 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 323 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC5::
# 327 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 328 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 329 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC5_Text_0, MSGBOX_NPC
# 332 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 333 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 334 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC6::
# 338 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 339 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC6_Text_0
# 342 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 343 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC7::
# 347 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 348 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 349 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC7_Text_0
# 354 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 355 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC8::
# 359 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 360 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 361 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC8_Text_0
# 366 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 367 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC9::
# 371 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 372 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 373 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC9_Text_0
# 377 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 378 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC10::
# 382 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 383 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 384 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC10_Text_0
# 388 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 389 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC11::
# 394 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 395 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 396 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_NPC11_2
ISLANDGAME_APPLEVINE_NPC11_1:
# 402 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_TEMP_4, ISLANDGAME_APPLEVINE_NPC11_5
# 414 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_2, MSGBOX_YESNO
ISLANDGAME_APPLEVINE_NPC11_4:
# 420 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_9
# 424 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_3
# 427 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Applevine_CandyMan_End
ISLANDGAME_APPLEVINE_NPC11_8:
# 431 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CandyMan_Exchange:
# 432 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	showcoinsbox 18, 1
# 434 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_4, 0
# 435 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_RARE_CANDY
# 436 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_13
ISLANDGAME_APPLEVINE_NPC11_12:
# 439 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_XS
# 440 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_16
ISLANDGAME_APPLEVINE_NPC11_15:
# 443 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_S
# 444 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_19
ISLANDGAME_APPLEVINE_NPC11_18:
# 447 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_M
# 448 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_22
ISLANDGAME_APPLEVINE_NPC11_21:
# 451 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_L
# 452 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_25
ISLANDGAME_APPLEVINE_NPC11_24:
# 455 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_XL
# 456 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_28
ISLANDGAME_APPLEVINE_NPC11_27:
# 459 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 460 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 461 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 102, ISLANDGAME_APPLEVINE_NPC11_32
# 482 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 103, ISLANDGAME_APPLEVINE_NPC11_33
# 503 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 104, ISLANDGAME_APPLEVINE_NPC11_34
# 524 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 105, ISLANDGAME_APPLEVINE_NPC11_35
# 545 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 106, ISLANDGAME_APPLEVINE_NPC11_36
# 566 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 107, ISLANDGAME_APPLEVINE_NPC11_37
# 588 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 591 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	hidecoinsbox 18, 1
# 592 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Applevine_CandyMan_End
ISLANDGAME_APPLEVINE_NPC11_30:
# 595 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
Applevine_CandyMan_End:
# 596 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 597 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_NPC11_2:
# 397 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_0
# 400 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Applevine_CandyMan_End
	goto ISLANDGAME_APPLEVINE_NPC11_1

ISLANDGAME_APPLEVINE_NPC11_5:
# 403 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_1, MSGBOX_YESNO
# 411 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_TEMP_4
	goto ISLANDGAME_APPLEVINE_NPC11_4

ISLANDGAME_APPLEVINE_NPC11_9:
# 421 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_8

ISLANDGAME_APPLEVINE_NPC11_13:
# 437 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_5, 102
	goto ISLANDGAME_APPLEVINE_NPC11_12

ISLANDGAME_APPLEVINE_NPC11_16:
# 441 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_6, 103
	goto ISLANDGAME_APPLEVINE_NPC11_15

ISLANDGAME_APPLEVINE_NPC11_19:
# 445 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_7, 104
	goto ISLANDGAME_APPLEVINE_NPC11_18

ISLANDGAME_APPLEVINE_NPC11_22:
# 449 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_8, 105
	goto ISLANDGAME_APPLEVINE_NPC11_21

ISLANDGAME_APPLEVINE_NPC11_25:
# 453 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_9, 106
	goto ISLANDGAME_APPLEVINE_NPC11_24

ISLANDGAME_APPLEVINE_NPC11_28:
# 457 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_10, 107
	goto ISLANDGAME_APPLEVINE_NPC11_27

ISLANDGAME_APPLEVINE_NPC11_32:
# 462 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_11, MSGBOX_YESNO
# 465 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_39
# 477 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 480 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_33:
# 483 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_14, MSGBOX_YESNO
# 486 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_42
# 498 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 501 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_34:
# 504 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_15, MSGBOX_YESNO
# 507 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_45
# 519 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 522 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_35:
# 525 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_16, MSGBOX_YESNO
# 528 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_48
# 540 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 543 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_36:
# 546 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_17, MSGBOX_YESNO
# 549 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_51
# 561 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 564 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_37:
# 567 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_18, MSGBOX_YESNO
# 570 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_54
# 582 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 585 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_39:
# 466 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 4000
# 467 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 468 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_RARE_CANDY
# 469 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 470 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 471 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 474 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_42:
# 487 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 100
# 488 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 489 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_XS
# 490 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 491 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 492 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 495 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_45:
# 508 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 500
# 509 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 510 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_S
# 511 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 512 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 513 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 516 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_48:
# 529 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 1000
# 530 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 531 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_M
# 532 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 533 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 534 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 537 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_51:
# 550 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 2000
# 551 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 552 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_L
# 553 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 554 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 555 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 558 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_54:
# 571 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 8000
# 572 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 573 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_XL
# 574 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 575 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 576 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 579 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30


ISLANDGAME_APPLEVINE_NPC12::
# 602 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 603 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 604 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC12_Text_0
# 610 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 611 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC13::
# 615 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 616 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 617 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 618 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC13_Text_0
# 621 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 622 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC14::
# 626 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 627 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 628 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC14_Text_0
# 634 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 635 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC15::
# 639 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 640 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 641 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC15_Text_0
# 644 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 645 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_AppleRoll::
# 655 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	random 10
# 656 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 657 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_AppleRoll_3
# 674 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_AppleRoll_4
# 691 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_AppleRoll_5
# 708 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_AppleRoll_6
# 709 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_AppleRoll_6
# 710 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_AppleRoll_6
# 711 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_AppleRoll_6
# 712 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll_1:
# 714 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll_3:
# 658 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 659 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_APPLIN, 20, ITEM_TART_APPLE, ITEM_POKE_BALL, NUM_NATURES, 0
# 660 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 661 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 662 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 663 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 664 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 665 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 667 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 668 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll_9
# 669 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll_9
# 670 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll_9
ISLANDGAME_APPLEVINE_AppleRoll_9:
# 672 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll_1

ISLANDGAME_APPLEVINE_AppleRoll_4:
# 675 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 676 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, ITEM_POKE_BALL, NUM_NATURES, 1
# 677 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 678 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 679 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 680 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 681 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 682 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 684 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 685 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll_11
# 686 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll_11
# 687 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll_11
ISLANDGAME_APPLEVINE_AppleRoll_11:
# 689 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll_1

ISLANDGAME_APPLEVINE_AppleRoll_5:
# 692 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 693 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, ITEM_POKE_BALL, NUM_NATURES, 2
# 694 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 695 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 696 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 697 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 698 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 699 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 701 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 702 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll_13
# 703 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll_13
# 704 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll_13
ISLANDGAME_APPLEVINE_AppleRoll_13:
# 706 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll_1

ISLANDGAME_APPLEVINE_AppleRoll_6:
# 711 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll_1


ISLANDGAME_APPLEVINE_TempBlockade1_Text_0:
# 30 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Noooo! You can't just use the same move\n"
	.string "over and over again! You need to use\l"
	.string "strategy!$"

ISLANDGAME_APPLEVINE_TempBlockade2_Text_0:
# 38 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "haha extreme speed go brrr$"

ISLANDGAME_APPLEVINE_StoreSign_Text_0:
# 45 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "LA CUCINA DOLCHE\n"
	.string "Give your Milcery a makeover!$"

ISLANDGAME_APPLEVINE_CitySign_Text_0:
# 49 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "APPLEVINE\n"
	.string "CHECK YOUR APPLES FOR POKÉMON!$"

ISLANDGAME_APPLEVINE_GameCornerSign_Text_0:
# 53 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "EelektronikArtz Game Corner\n"
	.string "Fun for all ages! :)$"

ISLANDGAME_APPLEVINE_SierraPathSign_Text_0:
# 57 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "SIERRA PATH{UP_ARROW}\n"
	.string "$"

ISLANDGAME_APPLEVINE_RockyPathSign_Text_0:
# 61 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "ROCKY PATH{RIGHT_ARROW}\n"
	.string "$"

ISLANDGAME_APPLEVINE_MelissaCall_Text_0:
# 72 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "...{PAUSE 60}\p"
	.string "{COLOR RED}(Hm? It looks like Melissa is calling me.)\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hellooo?{PAUSE 60} Hii, {PLAYER}! How's\n"
	.string "it been? Did you end up making it to\l"
	.string "Tidalcove yet?\p"
	.string "Whaaaat? You've already beaten Ruka\n"
	.string "and gotten her badge?\p"
	.string "That's amazing! Her Pokémon really are\n"
	.string "as glamorous as she is, yeah?\p"
	.string "It took me like five tries before I\n"
	.string "could beat her Milotic. Ice-types really\l"
	.string "aren't Gibby's strong suit...$"

ISLANDGAME_APPLEVINE_MelissaCall_Text_1:
# 80 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? Where am I right now?{PAUSE 60} I'm in line\n"
	.string "for a meet-and-greet with some of the\l"
	.string "members of STARLIGHT at Aetheria!\p"
	.string "I've been standing here for a while, so I\n"
	.string "figured I'd check in to see how you're\l"
	.string "doing!\p"
	.string "Eeeh?{PAUSE 60} You saw THE Primrose in Oranna?\n"
	.string "Ugggg, I'm jealous...{PAUSE 30} She's my favorite\l"
	.string "from STARLIGHT! Shame she's not here\l"
	.string "though... she's too busy collecting the\l"
	.string "three gym badges.\p"
	.string "Anyways, it's been a hot minute since\n"
	.string "we've seen each other... {PAUSE 30} Wanna meet up\l"
	.string "here in Aetheria? It's the biggest city\l"
	.string "in all of the Maryan Isles!\p"
	.string "You're at Applevine, right? Aetheria is\n"
	.string "just down south from there. Just take\l"
	.string "Rocky Path and go through Lumine Cave\l"
	.string "to get to Bellehaven, and Aetheria will\l"
	.string "be just to the west!\p"
	.string "I've got a little surprise to give you\n"
	.string "when you arrive! See you then! Byeeeee!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_0:
# 105 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Oh, hello {PLAYER}! Fancy seeing\n"
	.string "you here!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_1:
# 124 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It'll be worth checking your\n"
	.string "surroundings for hidden goodies!$"

ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0:
# 159 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Toodles!$"

ISLANDGAME_APPLEVINE_NPC1_Text_0:
# 266 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Welcome to Lumine Island, trainer! You\n"
	.string "must be famished from your travels.\p"
	.string "Here, take one of these. It is a sample\n"
	.string "from our confectionery.$"

ISLANDGAME_APPLEVINE_NPC1_Text_1:
# 274 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "We are located south of here. Come and\n"
	.string "stop by if you like our Sweet Hearts!$"

ISLANDGAME_APPLEVINE_NPC2_Text_0:
# 285 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Hey...{PAUSE 30} if we catch them all...{PAUSE 60} does that\n"
	.string "mean...{PAUSE 60} we'll finally be free?$"

ISLANDGAME_APPLEVINE_NPC2_Text_1:
# 289 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I see...$"

ISLANDGAME_APPLEVINE_NPC2_Text_2:
# 294 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Ah...{PAUSE 60} I apologize, then.$"

ISLANDGAME_APPLEVINE_NPC3_Text_0:
# 306 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I'm trying to teach my Zigzagoon how to\n"
	.string "surf on the water.\p"
	.string "So far, it hasn't been very successful...$"

ISLANDGAME_APPLEVINE_NPC4_Text_0:
# 319 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Goon... {COLOR BLUE}(The ocean is just a really big\n"
	.string "bath tub, and I hate baths.)$"

ISLANDGAME_APPLEVINE_NPC5_Text_0:
# 330 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I love my big Marill beach ball!$"

ISLANDGAME_APPLEVINE_NPC6_Text_0:
# 340 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR RED}(It's a big beach ball of a Marill.)$"

ISLANDGAME_APPLEVINE_NPC7_Text_0:
# 350 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I hate swimming during Luvdisc mating\n"
	.string "season.\p"
	.string "It just reminds me that I'm all alone on\n"
	.string "this crummy island...\p"
	.string "I'll always have you though, my signed\n"
	.string "swimsuit photo of Ruka.$"

ISLANDGAME_APPLEVINE_NPC8_Text_0:
# 362 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "The Island Guardian of Lumine is none\n"
	.string "other than Zapdos!\p"
	.string "When it flaps its wings, it can generate\n"
	.string "enough electricity to power the entire\l"
	.string "island!\p"
	.string "But it mostly stays cooped up in its\n"
	.string "nest atop Mount Therion.$"

ISLANDGAME_APPLEVINE_NPC9_Text_0:
# 374 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Earlier today I was hungry, so I picked\n"
	.string "up a random apple on the ground and\l"
	.string "took a big bite out of it, not realizing\l"
	.string "there was a Pokémon living inside! That\l"
	.string "entire event has traumatized me. I\l"
	.string "don't think I can ever eat fruit again.$"

ISLANDGAME_APPLEVINE_NPC10_Text_0:
# 385 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "My boyfriend gave me a Luvdisc for our\n"
	.string "two-week anniversary! Isn't that just\l"
	.string "soooo romantic?\p"
	.string "I love it soooo much, I'm gonna use it in\n"
	.string "my next Pokémon Contest in Aetheria!$"

ISLANDGAME_APPLEVINE_NPC11_Text_0:
# 398 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Buzz off, kid!$"

ISLANDGAME_APPLEVINE_NPC11_Text_1:
# 404 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Hey, bud! {PAUSE 30}Over here!{PAUSE 30} Shhh! Be quiet!\n"
	.string "Stop attracting attention!\p"
	.string "You're a Pokémon trainer, yeah?{PAUSE 30} I uh,\n"
	.string "bet you want some of those rare prizes\l"
	.string "from the Game Corner, don'cha?\p"
	.string "Ho-ho! Well you're in luck pal, cause\n"
	.string "I've got stacks 'n stacks of coins!\p"
	.string "They're all yours...{PAUSE 60} if you're willin' to\n"
	.string "help a brotha out...{PAUSE 60}\p"
	.string "See uh, I'm in need of some “candy”, and\n"
	.string "I hear y'all trainers got tons of 'em.\p"
	.string "So with that being said...{PAUSE 60} you got the\n"
	.string "stuffs?$"

ISLANDGAME_APPLEVINE_NPC11_Text_2:
# 415 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "H-Hey there... you got the stuffs now?$"

ISLANDGAME_APPLEVINE_NPC11_Text_3:
# 425 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "No? Go away then! Shoo! Shoo!$"

ISLANDGAME_APPLEVINE_NPC11_Text_4:
# 434 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I'm outie!$"

ISLANDGAME_APPLEVINE_NPC11_Text_5:
# 437 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Rare Candy$"

ISLANDGAME_APPLEVINE_NPC11_Text_6:
# 441 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy XS$"

ISLANDGAME_APPLEVINE_NPC11_Text_7:
# 445 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy S$"

ISLANDGAME_APPLEVINE_NPC11_Text_8:
# 449 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy M$"

ISLANDGAME_APPLEVINE_NPC11_Text_9:
# 453 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy L$"

ISLANDGAME_APPLEVINE_NPC11_Text_10:
# 457 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy XL$"

ISLANDGAME_APPLEVINE_NPC11_Text_11:
# 463 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Oooo, is that rare candy I see? I'll give\n"
	.string "you 4,000 coins for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_12:
# 472 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Heheh... Thank ye kindly!$"

ISLANDGAME_APPLEVINE_NPC11_Text_13:
# 478 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Huh? You holdin' out on me, bud??$"

ISLANDGAME_APPLEVINE_NPC11_Text_14:
# 484 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Just an Exp Candy XS? Humph... 100 coins\n"
	.string "is all I'm givin' for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_15:
# 505 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "An Exp Candy S? How's 500 coins sound?$"

ISLANDGAME_APPLEVINE_NPC11_Text_16:
# 526 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "An Exp Candy M? I'll give ya 1,000 coins\n"
	.string "for it.$"

ISLANDGAME_APPLEVINE_NPC11_Text_17:
# 547 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Ho-ho, an Exp Candy L? I'll give you\n"
	.string "2,000 coins for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_18:
# 568 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "An EXP Candy XL!? I'll give you a\n"
	.string "whopping 8,000 coins for that gem!!$"

ISLANDGAME_APPLEVINE_NPC12_Text_0:
# 605 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "That gaudy Game Corner is a stain on\n"
	.string "our once beautiful town.\p"
	.string "It's corrupting our youth, I tell you!\n"
	.string "Won't anyone think of the children!?\p"
	.string "I hear it's being run by some hooligans\n"
	.string "too... Just what we need. More crime!\p"
	.string "What's happened to this world I once\n"
	.string "knew and loved?$"

ISLANDGAME_APPLEVINE_NPC13_Text_0:
# 619 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Borf!$"

ISLANDGAME_APPLEVINE_NPC14_Text_0:
# 629 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I became an officer to get in the line\n"
	.string "of action, but all the chief's been\l"
	.string "having me do is lame paperwork.\p"
	.string "I should've just joined my friend in the\n"
	.string "merchant guild instead...\p"
	.string "They get to travel all around the isles,\n"
	.string "meanwhile I'm stuck listening to a jaded\l"
	.string "old man complain about the Game Corner\l"
	.string "for three hours.\p"
	.string "What's even the big deal? It's not like\n"
	.string "there's anything illegal going on inside\l"
	.string "or anything. They've broken no laws!$"

ISLANDGAME_APPLEVINE_NPC15_Text_0:
# 642 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Out of the three main islands, Lumine is\n"
	.string "the largest and most populated one!$"

ISLANDGAME_APPLEVINE_CocoTalk1::
# 218 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "My name is Coco. I'm a friend of\n"
	.string "Professor Palm's, and the creator of\l"
	.string "Marya's Pokémon Storage System!\p"
	.string "Hopefully it's been convenient and\n"
	.string "helpful to you in your journey. Let me\l"
	.string "know if you ever have any issues!\p"
	.string "I actually wanted to ask a favor of you,\n"
	.string "if that's alright.$"

ISLANDGAME_APPLEVINE_CocoTalk2::
# 226 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}This here is a prototype for a new\n"
	.string "dowsing machine I'm developing, and I\l"
	.string "figured you'd be the perfect one to\l"
	.string "help test it for me, since you're roaming\l"
	.string "the isles anyways!$"

ISLANDGAME_APPLEVINE_CocoTalk3::
# 233 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It's super easy to use! All you\n"
	.string "have to do is turn it on, and it'll tell\l"
	.string "you if there are any hidden items\l"
	.string "nearby.\p"
	.string "It'll even tell you the direction and\n"
	.string "closeness of the item!\p"
	.string "Just like my storage system, I've\n"
	.string "designed it with the intention to be as\l"
	.string "user-friendly as possible! Hee-hee.\p"
	.string "But that's enough blabbering from me.\n"
	.string "You've got a Pokédex to fill, and a\l"
	.string "league to qualify for, as I've heard!\p"
	.string "If you ever have the time to chat\n"
	.string "though, you can find me at my house\l"
	.string "here in Applevine.$"
