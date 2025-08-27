ISLANDGAME_APPLEVINE_GAME_CORNER_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_OutOfOrder::
# 8 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_OutOfOrder_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC1::
# 14 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC1_Text_0
# 18 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 19 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC2::
# 23 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 25 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC2_Text_0
# 33 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 34 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC3::
# 38 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 40 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC3_Text_0
# 46 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 47 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_RouletteEmployee::
# 51 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 53 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_RouletteEmployee_Text_0
# 60 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 61 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC4::
# 65 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 66 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC4_Text_0
# 71 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 72 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5::
# 76 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 77 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 78 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_APPLEVINE_STATE, 70
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_2
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_1:
# 84 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_5
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_4:
# 90 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 91 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_2, MSGBOX_YESNO
# 94 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_8
# 122 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_6
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_7:
# 126 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 127 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
GameCornerNPC_End:
# 128 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 129 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_2:
# 79 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_0
# 82 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto GameCornerNPC_End
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_1

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_5:
# 85 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_1
# 88 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto GameCornerNPC_End
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_4

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_8:
# 95 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 96 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_lt ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_12
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_11:
# 102 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1
# 103 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 104 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 105 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 106 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_APPLEVINE_STATE, 69
	goto_if_lt ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_15
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_14:
# 112 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_APPLEVINE_STATE, 69
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_17
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_7

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_12:
# 97 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_3
# 100 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto GameCornerNPC_End
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_11

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_15:
# 107 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addvar VAR_APPLEVINE_STATE, 1
# 108 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_4
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_14

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_17:
# 113 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_5
# 117 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 118 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addvar VAR_APPLEVINE_STATE, 1
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_7


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC6::
# 133 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 134 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC6_Text_0
# 137 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 138 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler0::
# 142 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 143 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler0_Text_0
# 146 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler1::
# 150 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 151 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 152 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler1_Text_0
# 155 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 156 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitmovement 0
# 157 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler2::
# 161 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 162 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 163 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_Gambler2_2
# 169 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_DAILY_APPLEVINE_COIN_BRO, ISLANDGAME_APPLEVINE_EventScript_Gambler2_5
# 182 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_2
ISLANDGAME_APPLEVINE_EventScript_Gambler2_1:
# 187 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 188 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_Gambler2_2:
# 164 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_0
	goto ISLANDGAME_APPLEVINE_EventScript_Gambler2_1

ISLANDGAME_APPLEVINE_EventScript_Gambler2_5:
# 170 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 171 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_1
# 174 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 40
# 175 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 176 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 177 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 178 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 179 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_DAILY_APPLEVINE_COIN_BRO
	goto ISLANDGAME_APPLEVINE_EventScript_Gambler2_1


ISLANDGAME_APPLEVINE_EventScript_Gambler3::
# 192 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 193 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler3_Text_0
# 196 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Bouncer::
# 200 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 201 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 202 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Bouncer_Text_0
# 205 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_PrizeClerk::
# 211 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 212 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 213 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1:
# 221 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1, MSGBOX_YESNO
# 224 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5
# 228 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4:
# 231 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_Exchange:
# 232 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2
# 235 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 17, 1
# 236 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 237 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4, 474
# 238 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5, 482
# 239 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6, 471
# 240 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7, 465
# 241 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8, 492
# 242 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9, 493
# 243 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10, 475
# 244 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11, 476
# 245 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12, 762
# 246 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM06
# 247 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_9
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8:
# 250 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM12
# 251 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11:
# 254 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM32
# 255 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14:
# 258 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM46
# 259 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17:
# 262 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM48
# 263 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20:
# 266 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18, 370
# 267 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19, 376
# 268 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20, 357
# 269 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21, 746
# 270 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 271 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 474, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25
# 294 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 482, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26
# 316 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 471, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27
# 338 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 465, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_28
# 360 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 492, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29
# 382 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 493, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30
# 404 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 475, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_31
# 426 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 476, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32
# 448 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 762, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33
# 470 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 587, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_34
# 492 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 593, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35
# 514 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 627, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36
# 536 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 629, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_37
# 558 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 630, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38
# 580 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 370, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39
# 612 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 376, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_40
# 644 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 357, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41
# 676 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 746, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42
# 744 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 17, 1
# 745 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23:
# 748 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_End:
# 749 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 750 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2:
# 214 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0
# 218 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5:
# 225 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_9:
# 248 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13, 587
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12:
# 252 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14, 593
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15:
# 256 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15, 613
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18:
# 260 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16, 627
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21:
# 264 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17, 629
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25:
# 273 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 274 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44:
# 280 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23, MSGBOX_YESNO
# 283 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98:
# 293 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26:
# 295 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 296 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47:
# 302 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25, MSGBOX_YESNO
# 305 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101:
# 315 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27:
# 317 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 318 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50:
# 324 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26, MSGBOX_YESNO
# 327 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104:
# 337 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_28:
# 339 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 340 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53:
# 346 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27, MSGBOX_YESNO
# 349 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107:
# 359 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29:
# 361 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 362 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56:
# 368 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28, MSGBOX_YESNO
# 371 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110:
# 381 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30:
# 383 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 384 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59:
# 390 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29, MSGBOX_YESNO
# 393 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113:
# 403 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_31:
# 405 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 406 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62:
# 412 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30, MSGBOX_YESNO
# 415 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116:
# 425 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32:
# 427 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 428 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65:
# 434 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31, MSGBOX_YESNO
# 437 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119:
# 447 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33:
# 449 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 450 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68:
# 456 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32, MSGBOX_YESNO
# 459 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122:
# 469 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_34:
# 471 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 472 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71:
# 478 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33, MSGBOX_YESNO
# 481 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125:
# 491 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35:
# 493 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 494 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74:
# 500 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34, MSGBOX_YESNO
# 503 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128:
# 513 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36:
# 515 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 516 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77:
# 522 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35, MSGBOX_YESNO
# 525 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131:
# 535 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_37:
# 537 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 538 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80:
# 544 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36, MSGBOX_YESNO
# 547 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134:
# 557 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38:
# 559 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 560 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83:
# 566 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37, MSGBOX_YESNO
# 569 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137:
# 579 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39:
# 581 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 582 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 4800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86:
# 588 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38, MSGBOX_YESNO
# 591 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140:
# 611 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_40:
# 613 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 614 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 6400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89:
# 620 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40, MSGBOX_YESNO
# 623 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143:
# 643 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41:
# 645 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 646 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 8000
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92:
# 652 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42, MSGBOX_YESNO
# 655 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_147
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146:
# 675 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42:
# 677 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 678 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 9999
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95:
# 684 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44, MSGBOX_YESNO
# 687 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149:
# 742 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45:
# 275 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 278 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48:
# 297 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 300 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51:
# 319 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 322 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54:
# 341 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 344 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57:
# 363 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 366 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60:
# 385 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 388 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63:
# 407 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 410 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66:
# 429 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 432 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69:
# 451 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 454 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72:
# 473 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 476 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75:
# 495 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 498 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78:
# 517 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 520 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81:
# 539 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 542 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84:
# 561 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 564 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87:
# 583 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 586 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90:
# 615 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 618 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93:
# 647 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 650 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96:
# 679 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 682 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99:
# 284 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 285 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 286 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 287 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 288 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 289 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102:
# 306 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 307 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 308 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 309 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 310 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 311 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105:
# 328 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 329 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 330 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 331 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 332 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 333 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108:
# 350 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 351 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 352 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 353 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 354 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 355 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111:
# 372 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 373 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 374 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 375 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 376 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_FANG
# 377 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114:
# 394 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 395 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 396 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 397 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 398 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_CLAW
# 399 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117:
# 416 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 417 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 418 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 419 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 420 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 421 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120:
# 438 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 439 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 440 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 441 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 442 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 443 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123:
# 460 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 461 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 462 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 463 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 464 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 465 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126:
# 482 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 483 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 484 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 485 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 486 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM06
# 487 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129:
# 504 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 505 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 506 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 507 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 508 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM12
# 509 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132:
# 526 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 527 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 528 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 529 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 530 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM46
# 531 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135:
# 548 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 549 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 550 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 551 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 552 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM48
# 553 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138:
# 570 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 571 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 572 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 573 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 574 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM49
# 575 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141:
# 592 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 4800
# 593 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 594 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 595 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 596 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_GIMMIGHOUL, 20, ITEM_NUGGET, ITEM_POKE_BALL, NUM_NATURES
# 597 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 598 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GIMMIGHOUL
# 599 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39
# 600 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 602 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 603 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152:
# 607 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144:
# 624 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 6400
# 625 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 626 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 627 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 628 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_EEVEE, 20, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NUM_NATURES
# 629 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 630 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 631 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41
# 632 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 634 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 635 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155:
# 639 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_147:
# 656 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 8000
# 657 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 658 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 659 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 660 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_PORYGON, 20, ITEM_EVIOLITE, ITEM_POKE_BALL, NUM_NATURES
# 661 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 662 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
# 663 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43
# 664 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 666 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 667 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_159
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158:
# 671 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150:
# 688 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 9999
# 689 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 690 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 691 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 692 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	random 10
# 693 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 694 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_163
# 695 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_164
# 696 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_165
# 697 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_166
# 698 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_167
# 699 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_168
# 700 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_169
# 701 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 7, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_170
# 713 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 8, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_171
# 726 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_BELDUM, 20, ITEM_COMET_SHARD, ITEM_CHERISH_BALL, NUM_NATURES, 0
# 727 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 728 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 729 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46
# 730 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 732 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 733 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_177
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161:
# 738 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153:
# 604 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 605 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156:
# 636 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 637 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_159:
# 668 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 669 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_163:
# 694 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_164:
# 695 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_165:
# 696 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_CHOICE_BAND
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_166:
# 697 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_167:
# 698 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_168:
# 699 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MAX_REVIVE
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_169:
# 700 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_PP_MAX
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_170:
# 702 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_QUICK_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 703 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 704 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 705 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 706 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 708 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 709 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_173
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_171:
# 714 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_METAL_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 715 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 716 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 717 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 718 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 720 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 721 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_175
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_173:
# 710 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 711 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_175:
# 722 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 723 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_177:
# 734 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 735 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161


ISLANDGAME_APPLEVINE_EventScript_CoinsClerk::
# 757 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 758 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 759 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2
# 781 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_CARD_KEY
# 782 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_14
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12:
# 795 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4, MSGBOX_YESNO
# 798 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_29
# 802 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1:
# 806 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_Exchange:
# 807 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5
# 810 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 811 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showmoneybox 17, 4
# 812 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 813 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6, 1
# 814 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7, 2
# 815 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8, 3
# 816 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9, 4
# 817 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 818 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 819 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7
# 849 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8
# 879 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9
# 909 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10
# 940 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 941 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 942 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5:
# 945 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_End:
# 946 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 947 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2:
# 760 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0
# 764 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_COIN_CASE
# 765 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_APPLEVINE_COIN_CASE
# 766 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 767 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1
# 770 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 20
# 771 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 772 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 773 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 774 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2
# 777 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 778 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7:
# 820 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10, MSGBOX_YESNO
# 823 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_17
# 845 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 846 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 847 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8:
# 850 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13, MSGBOX_YESNO
# 853 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_20
# 875 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 876 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 877 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9:
# 880 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14, MSGBOX_YESNO
# 883 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_23
# 905 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 906 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 907 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10:
# 910 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_15, MSGBOX_YESNO
# 913 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_26
# 935 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 936 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 937 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_13:
# 783 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 784 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3
# 788 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 9999
# 789 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 790 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 791 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 792 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 793 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_DAILY_APPLEVINE_COIN_CARD
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_14:
# 782 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_DAILY_APPLEVINE_COIN_CARD, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_13
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_17:
# 824 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1000
# 825 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_32:
# 833 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1000
# 834 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 50
# 835 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 836 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 837 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 838 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 839 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 842 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_20:
# 854 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 4500
# 855 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_35:
# 863 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 4500
# 864 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 250
# 865 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 866 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 867 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 868 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 869 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 872 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_23:
# 884 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 16000
# 885 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_39
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_38:
# 893 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 16000
# 894 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 1000
# 895 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 896 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 897 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 898 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 899 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 902 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_26:
# 914 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 40000
# 915 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_42
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_41:
# 923 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 40000
# 924 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 4000
# 925 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 926 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 927 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 928 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 929 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 932 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_29:
# 799 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33:
# 826 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 829 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 830 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 831 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_32

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36:
# 856 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 859 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 860 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 861 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_35

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_39:
# 886 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 889 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 890 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 891 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_38

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_42:
# 916 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 919 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 920 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 921 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_41


ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General::
# 967 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lockall
# 968 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_COIN_CASE
# 969 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2
# 973 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 974 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playslotmachine VAR_RESULT
ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1:
# 976 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	releaseall
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2:
# 970 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine0::
# 980 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 0
# 981 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine1::
# 984 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 1
# 985 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine2::
# 988 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 2
# 989 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine3::
# 992 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 3
# 993 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine4::
# 996 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 4
# 997 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine5::
# 1000 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 5
# 1001 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine6::
# 1004 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 6
# 1005 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine7::
# 1008 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 7
# 1009 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine8::
# 1012 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 8
# 1013 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine9::
# 1016 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 9
# 1017 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine10::
# 1020 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 10
# 1021 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine11::
# 1024 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 11
# 1025 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_OutOfOrder_Text_0:
# 9 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "OUT OF ORDER$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC1_Text_0:
# 16 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "{COLOR RED}(It's a giant stuffed Charizard.)$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC2_Text_0:
# 26 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "At last... After years of commitment and\n"
	.string "every last dollar of my savings, I have\l"
	.string "finally gotten enough coins for this\l"
	.string "giant stuffed Charizard.\p"
	.string "Hm?{PAUSE 60} You're asking why I didn't just buy\n"
	.string "one from a toy store instead?\p"
	.string "Ah,{PAUSE 30} the new generation and their\n"
	.string "inability to understand the value of\l"
	.string "hard work...\p"
	.string "What value would this giant stuffed\n"
	.string "Charizard hold if I simply just bought\l"
	.string "it from the store?{PAUSE 60} Absolutely none!\p"
	.string "It is the time and effort I spent to\n"
	.string "obtain this oversized plush that\l"
	.string "grants it true value! That is what\l"
	.string "makes it special!\p"
	.string "You kids sure are lazy today.$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC3_Text_0:
# 41 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Hey kid, need some coins?\p"
	.string "Well, I can't give you any.\p"
	.string "Because...{PAUSE 30} I'm...{PAUSE 30} all...{PAUSE 30} out...{PAUSE 30} of...{PAUSE 60}\n"
	.string "MONEY!!!!!!!!!!!!!!!!!!!\p"
	.string "I have a serious gambling addiction. I'm\n"
	.string "seeing a therapist about it tomorrow.$"

ISLANDGAME_APPLEVINE_EventScript_RouletteEmployee_Text_0:
# 54 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Hey there, gamer! You interested in\n"
	.string "playing a little roulette?\p"
	.string "The rules are simple! There are twelve\n"
	.string "slots on the roulette wheel, each with a\l"
	.string "specific color and Pokémon on it.\p"
	.string "By betting on the correct slot, you'll\n"
	.string "win coins! You can place bets on a\l"
	.string "specific color, Pokémon, or slot!\p"
	.string "Rolled balls stay in their slot until the\n"
	.string "sixth is rolled, then the wheel is reset!\p"
	.string "Well, what are ya waiting for? Come play\n"
	.string "a few rounds of skill-based roulette!$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC4_Text_0:
# 68 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Unbelievable... I just lost all my coins\n"
	.string "betting on yellow!\p"
	.string "I thought for sure it would land on it\n"
	.string "after not landing on so many times...$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_0:
# 80 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "i gotz nufin els 2 gif u maen JO AWEI$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_1:
# 86 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "halp ned koin$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_2:
# 92 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "gib koin pls$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_3:
# 98 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "wtf poor$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_4:
# 109 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "thx$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_5:
# 114 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "waos blud aktuali gaef me 69 koinz\n"
	.string ":weri:\p"
	.string "ju taek dis no ned 2 janx mes$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_6:
# 123 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "wai$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC6_Text_0:
# 135 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Come on! Give me my non-alcoholic\n"
	.string "beverage, you stupid machine!$"

ISLANDGAME_APPLEVINE_EventScript_Gambler0_Text_0:
# 144 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "BRO WHAT DO YOU MEAN I MISSED?? MY\n"
	.string "INPUT WAS FRAME PERFECT BRO$"

ISLANDGAME_APPLEVINE_EventScript_Gambler1_Text_0:
# 153 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "I like playing on this machine the most.\n"
	.string "I always get lucky when playing on it!$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_0:
# 165 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "I got extra coins if you want 'em, but\n"
	.string "you're gonna need a coin case.$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_1:
# 172 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Want some coins? I got tons of 'em.$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_2:
# 183 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Come back tomorrow if ya want more\n"
	.string "coins.$"

ISLANDGAME_APPLEVINE_EventScript_Gambler3_Text_0:
# 194 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "What the heck, man! It's like these\n"
	.string "things are rigged or something!$"

ISLANDGAME_APPLEVINE_EventScript_Bouncer_Text_0:
# 203 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "The High Limit Area is currently\n"
	.string "undergoing renovations. We apologize\l"
	.string "for the inconvenience.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0:
# 215 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! It looks\n"
	.string "like you don't have a coin case.\p"
	.string "Please pick one up from the clerk over\n"
	.string "there.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1:
# 222 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! Would you\n"
	.string "like to exchange your coins for some\l"
	.string "fabulous prizes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2:
# 233 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "This is our selection of prizes.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3:
# 236 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "See ya!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4:
# 237 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wide Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5:
# 238 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Zoom Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6:
# 239 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Scope Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7:
# 240 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "King's Rock (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8:
# 241 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Fang (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9:
# 242 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Claw (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10:
# 243 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Muscle Band (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11:
# 244 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wise Glasses (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12:
# 245 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Loaded Dice (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13:
# 248 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM06 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14:
# 252 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM12 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15:
# 256 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM32 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16:
# 260 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM46 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17:
# 264 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM48 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18:
# 266 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Gimmighoul (4800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19:
# 267 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Eevee (6400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20:
# 268 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Porygon (8000)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21:
# 269 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Mystery Box (9999)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22:
# 276 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you don't have enough coins for\n"
	.string "this prize.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23:
# 281 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Wide Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24:
# 290 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "We hope you enjoy your prize!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25:
# 303 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Zoom Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26:
# 325 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Scope Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27:
# 347 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a King's Rock?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28:
# 369 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Fang?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29:
# 391 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Claw?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30:
# 413 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Muscle Band?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31:
# 435 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a pair of Wise Glasses?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32:
# 457 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Loaded Die?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33:
# 479 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM06 - Toxic?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34:
# 501 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM12 - Taunt?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35:
# 523 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM46 - Thief?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36:
# 545 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM48 - Skill Swap?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37:
# 567 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM32 - Double Team?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38:
# 589 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 4800 coins\n"
	.string "for a Gimmighoul?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39:
# 599 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Gimmighoul!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40:
# 621 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 6400 coins\n"
	.string "for an Eevee?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41:
# 631 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received an Eevee!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42:
# 653 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 8000 coins\n"
	.string "for a Porygon?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43:
# 663 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Porygon!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44:
# 685 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Ah, so you've decided to try your luck\n"
	.string "with one of our Mystery Boxes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45:
# 705 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Ditto!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46:
# 729 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Beldum!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0:
# 761 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to EelektronikArts Game\n"
	.string "Corner! Our games are entirely\l"
	.string "skill-based!\p"
	.string "Oh! Are you a new customer? Here, you'll\n"
	.string "need one of these!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1:
# 768 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Now that you've got a coin case, here is\n"
	.string "our complementary welcome bonus!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2:
# 775 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Good luck and have fun! Oop, I mean, may\n"
	.string "your skills bring you victory!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3:
# 785 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Oh! It has been a while, Player 001! You\n"
	.string "look a bit different, though...\p"
	.string "Here is your daily bonus, as our most\n"
	.string "valued patron.$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4:
# 796 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to EelektronikArts Game\n"
	.string "Corner! Would you like to purchase some\l"
	.string "coins?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5:
# 808 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "What bundle would you like to purchase?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6:
# 813 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "50 Coins - ¥1,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7:
# 814 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "250 Coins - ¥4,500$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8:
# 815 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "1,000 Coins - ¥16,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9:
# 816 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "4,000 Coins - ¥40,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10:
# 821 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 50 Coins for\n"
	.string "¥1000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11:
# 827 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you do not have the sufficient\n"
	.string "funds for this bundle.$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12:
# 840 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13:
# 851 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 250 Coins\n"
	.string "for ¥4,500?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14:
# 881 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 1,000 Coins\n"
	.string "for ¥16,000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_15:
# 911 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 4,000 Coins\n"
	.string "for ¥40,000?$"

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0:
# 970 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You can't play if you don't have a COIN\n"
	.string "CASE.$"
