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


ISLANDGAME_APPLEVINE_StoreSign::
# 29 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_StoreSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_CitySign::
# 33 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CitySign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_GameCornerSign::
# 37 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GameCornerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_SierraPathSign::
# 41 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_SierraPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_RockyPathSign::
# 45 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_RockyPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_MelissaCall::
# 53 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_POKENAV_CALL
# 55 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_MelissaCall_Text_0
# 63 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_MelissaCall_Text_1
# 71 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 72 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 73 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_MELISSA_CALL
# 74 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_2, 1
# 75 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	startquest QUEST_AETHERIA_MELISSA
# 76 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 77 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_CocoInteract::
# 86 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 87 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 88 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_CocoInteract_2
# 107 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_1
ISLANDGAME_APPLEVINE_CocoInteract_1:
# 111 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_CocoInteract_2:
# 89 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
# 90 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
# 91 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 92 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 93 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 94 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 95 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 96 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 97 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 98 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 99 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
# 100 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 101 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
# 102 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
# 103 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
# 104 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
	goto ISLANDGAME_APPLEVINE_CocoInteract_1


ISLANDGAME_APPLEVINE_CocoTrigger1::
# 116 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 117 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_PIN
# 118 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 119 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 120 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 121 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 122 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 123 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 124 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
# 125 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 126 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoWalkOver1
# 127 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 128 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 129 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 130 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
# 131 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 132 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 133 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 134 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 135 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 136 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 137 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 138 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 139 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
# 140 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 141 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
# 142 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
# 143 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
# 144 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 145 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoLeave
# 146 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 147 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeobject 19
# 148 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
# 149 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_APPLEVINE_CocoTrigger2::
# 152 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 153 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_PIN
# 154 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 155 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 156 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 157 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 158 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 159 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 160 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
# 161 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 162 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoWalkOver2
# 163 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 164 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 165 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 166 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
# 167 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 168 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 169 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 170 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 171 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 172 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 173 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 174 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 175 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
# 176 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 177 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
# 178 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
# 179 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
# 180 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 181 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 19, CocoLeave
# 182 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 183 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeobject 19
# 184 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
# 185 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


# 188 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CocoWalkOver1:
# 189 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 189 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 189 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
	step_end

# 192 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CocoWalkOver2:
# 193 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 194 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 194 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
# 194 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_right
	step_end

# 197 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CocoLeave:
# 198 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 198 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_left
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
# 199 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	walk_up
	step_end

ISLANDGAME_APPLEVINE_NPC1::
# 246 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 247 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 248 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_SWEETHEART_GIFT, ISLANDGAME_APPLEVINE_NPC1_2
# 257 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_1
ISLANDGAME_APPLEVINE_NPC1_1:
# 261 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 262 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_NPC1_2:
# 249 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_0
# 253 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	giveitem ITEM_SWEET_HEART
# 254 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_APPLEVINE_SWEETHEART_GIFT
	goto ISLANDGAME_APPLEVINE_NPC1_1


ISLANDGAME_APPLEVINE_NPC2::
# 266 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 267 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 268 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_0, MSGBOX_YESNO
# 272 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC2_2
# 278 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_2
ISLANDGAME_APPLEVINE_NPC2_1:
# 280 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 281 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 282 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmovement 0
# 283 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_NPC2_2:
# 273 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_1
# 274 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_NORMAL
# 275 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
	goto ISLANDGAME_APPLEVINE_NPC2_1


ISLANDGAME_APPLEVINE_NPC3::
# 287 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 288 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 289 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC3_Text_0, MSGBOX_NPC
# 293 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 294 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 295 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC4::
# 299 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 300 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 301 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 302 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC4_Text_0
# 305 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 306 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 307 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC5::
# 311 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 312 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 313 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC5_Text_0, MSGBOX_NPC
# 316 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 317 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 318 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC6::
# 322 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 323 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC6_Text_0
# 326 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 327 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC7::
# 331 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 332 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 333 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC7_Text_0
# 338 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 339 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC8::
# 343 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 344 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 345 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC8_Text_0
# 350 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 351 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC9::
# 355 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 356 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 357 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC9_Text_0
# 361 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 362 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC10::
# 366 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 367 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 368 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC10_Text_0
# 372 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 373 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC11::
# 378 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 379 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 380 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_NPC11_2
ISLANDGAME_APPLEVINE_NPC11_1:
# 386 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto_if_unset FLAG_TEMP_4, ISLANDGAME_APPLEVINE_NPC11_5
# 398 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_2, MSGBOX_YESNO
ISLANDGAME_APPLEVINE_NPC11_4:
# 404 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_9
# 408 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_3
# 411 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Applevine_CandyMan_End
ISLANDGAME_APPLEVINE_NPC11_8:
# 415 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
CandyMan_Exchange:
# 416 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	showcoinsbox 18, 1
# 418 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_4, 0
# 419 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_RARE_CANDY
# 420 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_13
ISLANDGAME_APPLEVINE_NPC11_12:
# 423 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_XS
# 424 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_16
ISLANDGAME_APPLEVINE_NPC11_15:
# 427 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_S
# 428 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_19
ISLANDGAME_APPLEVINE_NPC11_18:
# 431 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_M
# 432 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_22
ISLANDGAME_APPLEVINE_NPC11_21:
# 435 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_L
# 436 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_25
ISLANDGAME_APPLEVINE_NPC11_24:
# 439 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	checkitem ITEM_EXP_CANDY_XL
# 440 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_28
ISLANDGAME_APPLEVINE_NPC11_27:
# 443 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 444 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 445 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 102, ISLANDGAME_APPLEVINE_NPC11_32
# 466 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 103, ISLANDGAME_APPLEVINE_NPC11_33
# 487 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 104, ISLANDGAME_APPLEVINE_NPC11_34
# 508 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 105, ISLANDGAME_APPLEVINE_NPC11_35
# 529 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 106, ISLANDGAME_APPLEVINE_NPC11_36
# 550 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 107, ISLANDGAME_APPLEVINE_NPC11_37
# 572 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 575 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	hidecoinsbox 18, 1
# 576 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Applevine_CandyMan_End
ISLANDGAME_APPLEVINE_NPC11_30:
# 579 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
Applevine_CandyMan_End:
# 580 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 581 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_NPC11_2:
# 381 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_0
# 384 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Applevine_CandyMan_End
	goto ISLANDGAME_APPLEVINE_NPC11_1

ISLANDGAME_APPLEVINE_NPC11_5:
# 387 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_1, MSGBOX_YESNO
# 395 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_TEMP_4
	goto ISLANDGAME_APPLEVINE_NPC11_4

ISLANDGAME_APPLEVINE_NPC11_9:
# 405 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_8

ISLANDGAME_APPLEVINE_NPC11_13:
# 421 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_5, 102
	goto ISLANDGAME_APPLEVINE_NPC11_12

ISLANDGAME_APPLEVINE_NPC11_16:
# 425 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_6, 103
	goto ISLANDGAME_APPLEVINE_NPC11_15

ISLANDGAME_APPLEVINE_NPC11_19:
# 429 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_7, 104
	goto ISLANDGAME_APPLEVINE_NPC11_18

ISLANDGAME_APPLEVINE_NPC11_22:
# 433 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_8, 105
	goto ISLANDGAME_APPLEVINE_NPC11_21

ISLANDGAME_APPLEVINE_NPC11_25:
# 437 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_9, 106
	goto ISLANDGAME_APPLEVINE_NPC11_24

ISLANDGAME_APPLEVINE_NPC11_28:
# 441 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_10, 107
	goto ISLANDGAME_APPLEVINE_NPC11_27

ISLANDGAME_APPLEVINE_NPC11_32:
# 446 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_11, MSGBOX_YESNO
# 449 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_39
# 461 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 464 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_33:
# 467 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_14, MSGBOX_YESNO
# 470 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_42
# 482 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 485 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_34:
# 488 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_15, MSGBOX_YESNO
# 491 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_45
# 503 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 506 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_35:
# 509 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_16, MSGBOX_YESNO
# 512 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_48
# 524 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 527 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_36:
# 530 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_17, MSGBOX_YESNO
# 533 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_51
# 545 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 548 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_37:
# 551 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_18, MSGBOX_YESNO
# 554 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_54
# 566 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
# 569 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_39:
# 450 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 4000
# 451 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 452 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_RARE_CANDY
# 453 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 454 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 455 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 458 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_42:
# 471 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 100
# 472 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 473 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_XS
# 474 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 475 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 476 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 479 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_45:
# 492 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 500
# 493 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 494 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_S
# 495 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 496 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 497 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 500 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_48:
# 513 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 1000
# 514 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 515 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_M
# 516 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 517 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 518 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 521 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_51:
# 534 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 2000
# 535 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 536 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_L
# 537 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 538 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 539 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 542 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_54:
# 555 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	addcoins 8000
# 556 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	updatecoinsbox 18, 1
# 557 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	removeitem ITEM_EXP_CANDY_XL
# 558 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playse SE_SHOP
# 559 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitse
# 560 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
# 563 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30


ISLANDGAME_APPLEVINE_NPC12::
# 586 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 587 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 588 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC12_Text_0
# 594 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 595 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC13::
# 599 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 600 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 601 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 602 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC13_Text_0
# 605 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 606 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC14::
# 610 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 611 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 612 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC14_Text_0
# 618 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 619 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_NPC15::
# 623 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	lock
# 624 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	faceplayer
# 625 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_NPC15_Text_0
# 628 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	closemessage
# 629 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_AppleRoll1::
# 639 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	random 10
# 640 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 641 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_AppleRoll1_3
# 658 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_AppleRoll1_4
# 675 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_AppleRoll1_5
# 692 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_AppleRoll1_6
# 693 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_AppleRoll1_6
# 694 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_AppleRoll1_6
# 695 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_AppleRoll1_6
# 696 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll1_1:
# 698 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll1_3:
# 642 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 643 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_TART_APPLE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 644 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 645 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 646 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 647 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 648 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 649 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 651 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 652 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll1_9
# 653 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll1_9
# 654 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll1_9
ISLANDGAME_APPLEVINE_AppleRoll1_9:
# 656 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1

ISLANDGAME_APPLEVINE_AppleRoll1_4:
# 659 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 660 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 661 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 662 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 663 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 664 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 665 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 666 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 668 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 669 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll1_11
# 670 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll1_11
# 671 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll1_11
ISLANDGAME_APPLEVINE_AppleRoll1_11:
# 673 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1

ISLANDGAME_APPLEVINE_AppleRoll1_5:
# 676 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 677 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
# 678 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 679 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 680 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 681 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 682 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 683 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 685 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 686 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll1_13
# 687 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll1_13
# 688 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll1_13
ISLANDGAME_APPLEVINE_AppleRoll1_13:
# 690 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1

ISLANDGAME_APPLEVINE_AppleRoll1_6:
# 695 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1


ISLANDGAME_APPLEVINE_AppleRoll2::
# 702 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	random 10
# 703 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 704 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_AppleRoll2_3
# 721 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_AppleRoll2_4
# 738 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_AppleRoll2_5
# 755 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_AppleRoll2_6
# 756 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_AppleRoll2_6
# 757 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_AppleRoll2_6
# 758 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_AppleRoll2_6
# 759 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll2_1:
# 761 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll2_3:
# 705 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 706 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_TART_APPLE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 707 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 708 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 709 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 710 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 711 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 712 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 714 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 715 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll2_9
# 716 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll2_9
# 717 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll2_9
ISLANDGAME_APPLEVINE_AppleRoll2_9:
# 719 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1

ISLANDGAME_APPLEVINE_AppleRoll2_4:
# 722 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 723 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 724 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 725 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 726 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 727 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 728 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 729 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 731 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 732 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll2_11
# 733 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll2_11
# 734 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll2_11
ISLANDGAME_APPLEVINE_AppleRoll2_11:
# 736 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1

ISLANDGAME_APPLEVINE_AppleRoll2_5:
# 739 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 740 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
# 741 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 742 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 743 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 744 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 745 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 746 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 748 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 749 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll2_13
# 750 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll2_13
# 751 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll2_13
ISLANDGAME_APPLEVINE_AppleRoll2_13:
# 753 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1

ISLANDGAME_APPLEVINE_AppleRoll2_6:
# 758 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1


ISLANDGAME_APPLEVINE_AppleRoll3::
# 765 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	random 10
# 766 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 767 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_AppleRoll3_3
# 784 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_AppleRoll3_4
# 801 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_AppleRoll3_5
# 818 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_AppleRoll3_6
# 819 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_AppleRoll3_6
# 820 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_AppleRoll3_6
# 821 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_AppleRoll3_6
# 822 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll3_1:
# 824 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll3_3:
# 768 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 769 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_TART_APPLE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 770 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 771 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 772 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 773 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 774 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 775 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 777 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 778 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll3_9
# 779 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll3_9
# 780 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll3_9
ISLANDGAME_APPLEVINE_AppleRoll3_9:
# 782 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1

ISLANDGAME_APPLEVINE_AppleRoll3_4:
# 785 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 786 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 787 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 788 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 789 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 790 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 791 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 792 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 794 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 795 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll3_11
# 796 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll3_11
# 797 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll3_11
ISLANDGAME_APPLEVINE_AppleRoll3_11:
# 799 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1

ISLANDGAME_APPLEVINE_AppleRoll3_5:
# 802 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 803 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
# 804 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
# 805 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	waitmoncry
# 806 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 807 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	dowildbattle
# 808 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 809 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 811 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	switch VAR_RESULT
# 812 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll3_13
# 813 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll3_13
# 814 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll3_13
ISLANDGAME_APPLEVINE_AppleRoll3_13:
# 816 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1

ISLANDGAME_APPLEVINE_AppleRoll3_6:
# 821 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1


ISLANDGAME_APPLEVINE_StoreSign_Text_0:
# 29 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "LA CUCINA DOLCHE\n"
	.string "Give your Milcery a makeover!$"

ISLANDGAME_APPLEVINE_CitySign_Text_0:
# 33 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "APPLEVINE\n"
	.string "CHECK YOUR APPLES FOR APPLIN!$"

ISLANDGAME_APPLEVINE_GameCornerSign_Text_0:
# 37 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Eelektrik Game Corner\n"
	.string "Fun for all ages! :)$"

ISLANDGAME_APPLEVINE_SierraPathSign_Text_0:
# 41 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "SIERRA PATH{UP_ARROW}\n"
	.string "$"

ISLANDGAME_APPLEVINE_RockyPathSign_Text_0:
# 45 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "ROCKY PATH{RIGHT_ARROW}\n"
	.string "$"

ISLANDGAME_APPLEVINE_MelissaCall_Text_0:
# 56 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
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
# 64 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
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
# 89 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Oh, hello {PLAYER}! Fancy seeing\n"
	.string "you here!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_1:
# 108 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It'll be worth checking your\n"
	.string "surroundings for hidden goodies!$"

ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0:
# 143 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Toodles!$"

ISLANDGAME_APPLEVINE_NPC1_Text_0:
# 250 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Welcome to Lumine Island, trainer! You\n"
	.string "must be famished from your travels.\p"
	.string "Here, take one of these. It is a sample\n"
	.string "from our confectionery.$"

ISLANDGAME_APPLEVINE_NPC1_Text_1:
# 258 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "We are located south of here. Come and\n"
	.string "stop by if you like our Sweet Hearts!$"

ISLANDGAME_APPLEVINE_NPC2_Text_0:
# 269 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Hey...{PAUSE 30} if we catch them all...{PAUSE 60} does that\n"
	.string "mean...{PAUSE 60} we'll finally be free?$"

ISLANDGAME_APPLEVINE_NPC2_Text_1:
# 273 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I see...$"

ISLANDGAME_APPLEVINE_NPC2_Text_2:
# 278 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Ah...{PAUSE 60} I apologize, then.$"

ISLANDGAME_APPLEVINE_NPC3_Text_0:
# 290 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I'm trying to teach my Zigzagoon how to\n"
	.string "surf on the water.\p"
	.string "So far, it hasn't been very successful...$"

ISLANDGAME_APPLEVINE_NPC4_Text_0:
# 303 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Goon... {COLOR BLUE}(The ocean is just a really big\n"
	.string "bath tub, and I hate baths.)$"

ISLANDGAME_APPLEVINE_NPC5_Text_0:
# 314 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I love my big Marill beach ball!$"

ISLANDGAME_APPLEVINE_NPC6_Text_0:
# 324 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR RED}(It's a big beach ball of a Marill.)$"

ISLANDGAME_APPLEVINE_NPC7_Text_0:
# 334 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I hate swimming during Luvdisc mating\n"
	.string "season.\p"
	.string "It just reminds me that I'm all alone on\n"
	.string "this crummy island...\p"
	.string "I'll always have you though, my signed\n"
	.string "swimsuit photo of Ruka.$"

ISLANDGAME_APPLEVINE_NPC8_Text_0:
# 346 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "The Island Guardian of Lumine is none\n"
	.string "other than Zapdos!\p"
	.string "When it flaps its wings, it can generate\n"
	.string "enough electricity to power the entire\l"
	.string "island!\p"
	.string "But it mostly stays cooped up in its\n"
	.string "nest atop Mount Therion.$"

ISLANDGAME_APPLEVINE_NPC9_Text_0:
# 358 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Earlier today I was hungry, so I picked\n"
	.string "up a random apple on the ground and\l"
	.string "took a big bite out of it, not realizing\l"
	.string "there was a Pokémon living inside! That\l"
	.string "entire event has traumatized me. I\l"
	.string "don't think I can ever eat fruit again.$"

ISLANDGAME_APPLEVINE_NPC10_Text_0:
# 369 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "My boyfriend gave me a Luvdisc for our\n"
	.string "two-week anniversary! Isn't that just\l"
	.string "soooo romantic?\p"
	.string "I love it soooo much, I'm gonna use it in\n"
	.string "my next Pokémon Contest in Aetheria!$"

ISLANDGAME_APPLEVINE_NPC11_Text_0:
# 382 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Buzz off, kid!$"

ISLANDGAME_APPLEVINE_NPC11_Text_1:
# 388 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
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
# 399 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "H-Hey there... you got the stuffs now?$"

ISLANDGAME_APPLEVINE_NPC11_Text_3:
# 409 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "No? Go away then! Shoo! Shoo!$"

ISLANDGAME_APPLEVINE_NPC11_Text_4:
# 418 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "I'm outie!$"

ISLANDGAME_APPLEVINE_NPC11_Text_5:
# 421 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Rare Candy$"

ISLANDGAME_APPLEVINE_NPC11_Text_6:
# 425 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy XS$"

ISLANDGAME_APPLEVINE_NPC11_Text_7:
# 429 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy S$"

ISLANDGAME_APPLEVINE_NPC11_Text_8:
# 433 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy M$"

ISLANDGAME_APPLEVINE_NPC11_Text_9:
# 437 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy L$"

ISLANDGAME_APPLEVINE_NPC11_Text_10:
# 441 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Exp Candy XL$"

ISLANDGAME_APPLEVINE_NPC11_Text_11:
# 447 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Oooo, is that rare candy I see? I'll give\n"
	.string "you 4,000 coins for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_12:
# 456 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Heheh... Thank ye kindly!$"

ISLANDGAME_APPLEVINE_NPC11_Text_13:
# 462 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Huh? You holdin' out on me, bud??$"

ISLANDGAME_APPLEVINE_NPC11_Text_14:
# 468 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Just an Exp Candy XS? Humph... 100 coins\n"
	.string "is all I'm givin' for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_15:
# 489 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "An Exp Candy S? How's 500 coins sound?$"

ISLANDGAME_APPLEVINE_NPC11_Text_16:
# 510 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "An Exp Candy M? I'll give ya 1,000 coins\n"
	.string "for it.$"

ISLANDGAME_APPLEVINE_NPC11_Text_17:
# 531 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Ho-ho, an Exp Candy L? I'll give you\n"
	.string "2,000 coins for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_18:
# 552 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "An EXP Candy XL!? I'll give you a\n"
	.string "whopping 8,000 coins for that gem!!$"

ISLANDGAME_APPLEVINE_NPC12_Text_0:
# 589 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "That gaudy Game Corner is a stain on\n"
	.string "our once beautiful town.\p"
	.string "It's corrupting our youth, I tell you!\n"
	.string "Won't anyone think of the children!?\p"
	.string "I hear it's being run by some hooligans\n"
	.string "too... Just what we need. More crime!\p"
	.string "What's happened to this world I once\n"
	.string "knew and loved?$"

ISLANDGAME_APPLEVINE_NPC13_Text_0:
# 603 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Borf!$"

ISLANDGAME_APPLEVINE_NPC14_Text_0:
# 613 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
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
# 626 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "Out of the three main islands, Lumine is\n"
	.string "the largest and most populated one!$"

ISLANDGAME_APPLEVINE_CocoTalk1::
# 202 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "My name is Coco. I'm a friend of\n"
	.string "Professor Palm's, and the creator of\l"
	.string "Marya's Pokémon Storage System!\p"
	.string "Hopefully it's been convenient and\n"
	.string "helpful to you in your journey. Let me\l"
	.string "know if you ever have any issues!\p"
	.string "I actually wanted to ask a favor of you,\n"
	.string "if that's alright.$"

ISLANDGAME_APPLEVINE_CocoTalk2::
# 210 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}This here is a prototype for a new\n"
	.string "dowsing machine I'm developing, and I\l"
	.string "figured you'd be the perfect one to\l"
	.string "help test it for me, since you're roaming\l"
	.string "the isles anyways!$"

ISLANDGAME_APPLEVINE_CocoTalk3::
# 217 "data/maps/ISLANDGAME_APPLEVINE/scripts.pory"
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
