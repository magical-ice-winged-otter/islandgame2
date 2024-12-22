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
	giveitem ITEM_PP_MAX
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


ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine::
# 213 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 215 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
Applevine_VendingMachine:
# 216 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_0
# 219 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showmoneybox 17, 1
# 220 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_1, 0
# 221 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_2, 35
# 222 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_3, 36
# 223 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_4, 37
# 224 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 225 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 35, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_3
# 242 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 36, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_4
# 259 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 37, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_5
# 275 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto ApplevineVending_End
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1:
# 278 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
ApplevineVending_End:
# 279 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 280 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 281 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_3:
# 227 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 500
# 228 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_8
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_7:
# 234 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 500
# 235 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 236 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 237 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 238 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 239 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 240 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 241 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_4:
# 243 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 800
# 244 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_11
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_10:
# 250 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 800
# 251 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 252 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 253 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 254 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 255 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 256 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 257 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SODA_POP
# 258 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_5:
# 260 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1200
# 261 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_14
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_13:
# 267 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1200
# 268 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 269 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 270 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 271 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 272 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 273 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LEMONADE
# 274 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_8:
# 229 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 232 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_7

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_11:
# 245 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 248 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_10

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_14:
# 262 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 265 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_13


ISLANDGAME_APPLEVINE_EventScript_PrizeClerk::
# 291 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 292 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 293 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1:
# 301 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1, MSGBOX_YESNO
# 304 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5
# 308 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4:
# 311 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_Exchange:
# 312 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2
# 315 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 17, 1
# 316 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 317 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4, 474
# 318 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5, 482
# 319 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6, 471
# 320 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7, 465
# 321 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8, 492
# 322 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9, 493
# 323 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10, 475
# 324 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11, 476
# 325 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12, 762
# 326 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13, 587
# 327 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14, 593
# 328 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15, 627
# 329 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16, 629
# 330 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17, 630
# 331 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18, 370
# 332 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19, 376
# 333 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20, 357
# 334 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21, 746
# 335 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 336 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 337 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 474, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_10
# 359 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 482, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11
# 381 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 471, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12
# 403 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 465, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_13
# 425 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 492, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14
# 447 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 493, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15
# 469 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 475, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_16
# 491 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 476, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17
# 513 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 762, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18
# 535 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 587, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_19
# 557 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 593, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20
# 579 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 627, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21
# 601 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 629, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_22
# 623 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 630, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23
# 645 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 370, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_24
# 677 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 376, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25
# 709 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 357, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26
# 741 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 746, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27
# 809 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 17, 1
# 810 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8:
# 813 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_End:
# 814 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 815 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2:
# 294 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0
# 298 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5:
# 305 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_10:
# 338 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 339 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29:
# 345 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23, MSGBOX_YESNO
# 348 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83:
# 358 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11:
# 360 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 361 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32:
# 367 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25, MSGBOX_YESNO
# 370 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86:
# 380 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12:
# 382 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 383 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35:
# 389 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26, MSGBOX_YESNO
# 392 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89:
# 402 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_13:
# 404 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 405 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38:
# 411 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27, MSGBOX_YESNO
# 414 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92:
# 424 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14:
# 426 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 427 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41:
# 433 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28, MSGBOX_YESNO
# 436 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95:
# 446 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15:
# 448 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 449 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44:
# 455 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29, MSGBOX_YESNO
# 458 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98:
# 468 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_16:
# 470 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 471 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47:
# 477 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30, MSGBOX_YESNO
# 480 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101:
# 490 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17:
# 492 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 493 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50:
# 499 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31, MSGBOX_YESNO
# 502 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104:
# 512 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18:
# 514 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 515 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53:
# 521 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32, MSGBOX_YESNO
# 524 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107:
# 534 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_19:
# 536 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 537 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56:
# 543 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33, MSGBOX_YESNO
# 546 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110:
# 556 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20:
# 558 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 559 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59:
# 565 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34, MSGBOX_YESNO
# 568 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113:
# 578 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21:
# 580 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 581 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62:
# 587 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35, MSGBOX_YESNO
# 590 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116:
# 600 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_22:
# 602 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 603 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65:
# 609 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36, MSGBOX_YESNO
# 612 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119:
# 622 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23:
# 624 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 625 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68:
# 631 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37, MSGBOX_YESNO
# 634 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122:
# 644 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_24:
# 646 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 647 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 4800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71:
# 653 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38, MSGBOX_YESNO
# 656 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125:
# 676 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25:
# 678 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 679 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 6400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74:
# 685 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40, MSGBOX_YESNO
# 688 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128:
# 708 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26:
# 710 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 711 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 8000
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77:
# 717 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42, MSGBOX_YESNO
# 720 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131:
# 740 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27:
# 742 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 743 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 9999
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80:
# 749 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44, MSGBOX_YESNO
# 752 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134:
# 807 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30:
# 340 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 343 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33:
# 362 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 365 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36:
# 384 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 387 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39:
# 406 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 409 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42:
# 428 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 431 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45:
# 450 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 453 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48:
# 472 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 475 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51:
# 494 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 497 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54:
# 516 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 519 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57:
# 538 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 541 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60:
# 560 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 563 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63:
# 582 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 585 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66:
# 604 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 607 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69:
# 626 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 629 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72:
# 648 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 651 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75:
# 680 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 683 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78:
# 712 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 715 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81:
# 744 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 747 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84:
# 349 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 350 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 351 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 352 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 353 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 354 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87:
# 371 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 372 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 373 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 374 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 375 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 376 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90:
# 393 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 394 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 395 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 396 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 397 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 398 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93:
# 415 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 416 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 417 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 418 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 419 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 420 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96:
# 437 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 438 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 439 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 440 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 441 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_FANG
# 442 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99:
# 459 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 460 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 461 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 462 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 463 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_CLAW
# 464 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102:
# 481 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 482 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 483 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 484 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 485 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 486 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105:
# 503 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 504 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 505 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 506 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 507 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 508 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108:
# 525 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 526 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 527 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 528 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 529 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 530 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111:
# 547 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 548 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 549 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 550 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 551 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM06
# 552 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114:
# 569 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 570 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 571 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 572 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 573 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM12
# 574 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117:
# 591 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 592 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 593 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 594 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 595 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM46
# 596 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120:
# 613 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 614 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 615 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 616 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 617 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM48
# 618 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123:
# 635 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 636 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 637 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 638 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 639 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM49
# 640 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126:
# 657 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 4800
# 658 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 659 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 660 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 661 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_GIMMIGHOUL, 20, ITEM_NUGGET, ITEM_POKE_BALL, NUM_NATURES
# 662 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 663 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GIMMIGHOUL
# 664 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39
# 665 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 667 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 668 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137:
# 672 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129:
# 689 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 6400
# 690 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 691 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 692 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 693 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_EEVEE, 20, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NUM_NATURES
# 694 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 695 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 696 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41
# 697 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 699 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 700 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140:
# 704 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132:
# 721 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 8000
# 722 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 723 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 724 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 725 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_PORYGON, 20, ITEM_EVIOLITE, ITEM_POKE_BALL, NUM_NATURES
# 726 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 727 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
# 728 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43
# 729 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 731 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 732 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143:
# 736 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135:
# 753 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 9999
# 754 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 755 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 756 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 757 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	random 10
# 758 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 759 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_148
# 760 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149
# 761 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150
# 762 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_151
# 763 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152
# 764 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153
# 765 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_154
# 766 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 7, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155
# 778 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 8, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156
# 791 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_BELDUM, 20, ITEM_COMET_SHARD, ITEM_CHERISH_BALL, NUM_NATURES, 0
# 792 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 793 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 794 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46
# 795 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 797 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 798 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_162
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146:
# 803 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138:
# 669 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 670 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141:
# 701 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 702 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144:
# 733 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 734 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_148:
# 759 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM32
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149:
# 760 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150:
# 761 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_BIG_NUGGET
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_151:
# 762 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM21
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152:
# 763 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LIFE_ORB
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153:
# 764 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MAX_REVIVE
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_154:
# 765 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155:
# 767 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_QUICK_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 768 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 769 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 770 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 771 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 773 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 774 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156:
# 779 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_METAL_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 780 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 781 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 782 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 783 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 785 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 786 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_160
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158:
# 775 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 776 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_160:
# 787 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 788 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_162:
# 799 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 800 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146


ISLANDGAME_APPLEVINE_EventScript_CoinsClerk::
# 822 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 823 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 824 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2
# 846 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3, MSGBOX_YESNO
# 849 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12
# 853 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1:
# 857 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_Exchange:
# 858 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4
# 861 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 862 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showmoneybox 17, 4
# 863 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 864 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5, 1
# 865 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6, 2
# 866 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7, 3
# 867 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8, 4
# 868 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 869 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 870 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7
# 900 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8
# 930 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9
# 960 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10
# 991 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 992 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 993 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5:
# 996 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_End:
# 997 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 998 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2:
# 825 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0
# 829 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_COIN_CASE
# 830 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_APPLEVINE_COIN_CASE
# 831 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 832 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1
# 835 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 20
# 836 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 837 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 838 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 839 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2
# 842 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 843 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7:
# 871 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9, MSGBOX_YESNO
# 874 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_15
# 896 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 897 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 898 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8:
# 901 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12, MSGBOX_YESNO
# 904 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_18
# 926 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 927 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 928 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9:
# 931 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13, MSGBOX_YESNO
# 934 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_21
# 956 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 957 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 958 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10:
# 961 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14, MSGBOX_YESNO
# 964 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_24
# 986 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 987 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 988 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12:
# 850 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_15:
# 875 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1000
# 876 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_28
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_27:
# 884 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1000
# 885 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 50
# 886 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 887 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 888 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 889 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 890 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 893 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_18:
# 905 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 4500
# 906 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_31
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_30:
# 914 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 4500
# 915 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 250
# 916 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 917 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 918 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 919 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 920 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 923 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_21:
# 935 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 16000
# 936 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_34
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33:
# 944 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 16000
# 945 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 1000
# 946 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 947 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 948 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 949 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 950 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 953 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_24:
# 965 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 40000
# 966 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_37
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36:
# 974 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 40000
# 975 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 4000
# 976 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 977 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 978 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 979 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 980 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 983 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_28:
# 877 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 880 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 881 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 882 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_27

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_31:
# 907 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 910 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 911 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 912 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_30

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_34:
# 937 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 940 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 941 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 942 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_37:
# 967 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 970 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 971 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 972 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36


ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General::
# 1018 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lockall
# 1019 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1020 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2
# 1024 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1025 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playslotmachine VAR_RESULT
ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1:
# 1027 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	releaseall
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2:
# 1021 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine0::
# 1031 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 0
# 1032 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine1::
# 1035 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 1
# 1036 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine2::
# 1039 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 2
# 1040 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine3::
# 1043 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 3
# 1044 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine4::
# 1047 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 4
# 1048 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine5::
# 1051 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 5
# 1052 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine6::
# 1055 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 6
# 1056 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine7::
# 1059 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 7
# 1060 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine8::
# 1063 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 8
# 1064 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine9::
# 1067 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 9
# 1068 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine10::
# 1071 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 10
# 1072 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine11::
# 1075 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 11
# 1076 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
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
	.string "i gotz nufin els 2 gif u maen GITOFMES$"

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
	.string "omigawd blud aktuali gaef me 69 koinz\n"
	.string ":weri:\p"
	.string "taek wan of deez et maeks ur pp go maks\n"
	.string ":hotfaec:$"

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
	.string "Sorry, you must have a VIP Pass in order\n"
	.string "to enter the High Limit Area.$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_0:
# 217 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "{COLOR RED}(It's a vending machine. What should I\n"
	.string "get?)$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_1:
# 220 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Nah, I'm good$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_2:
# 221 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Fresh Water - ¥500$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_3:
# 222 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Soda Pop - ¥800$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_4:
# 223 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Lemonade - ¥1200$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5:
# 230 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "{COLOR RED}(I don't have enough money.)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0:
# 295 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! It looks\n"
	.string "like you don't have a coin case.\p"
	.string "Please pick one up from the clerk over\n"
	.string "there.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1:
# 302 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! Would you\n"
	.string "like to exchange your coins for some\l"
	.string "fabulous prizes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2:
# 313 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "This is our selection of prizes.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3:
# 316 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "See ya!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4:
# 317 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wide Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5:
# 318 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Zoom Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6:
# 319 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Scope Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7:
# 320 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "King's Rock (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8:
# 321 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Fang (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9:
# 322 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Claw (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10:
# 323 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Muscle Band (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11:
# 324 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wise Glasses (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12:
# 325 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Loaded Dice (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13:
# 326 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM06 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14:
# 327 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM12 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15:
# 328 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM46 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16:
# 329 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM48 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17:
# 330 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM49 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18:
# 331 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Gimmighoul (4800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19:
# 332 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Eevee (6400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20:
# 333 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Porygon (8000)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21:
# 334 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Mystery Box (9999)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22:
# 341 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you don't have enough coins for\n"
	.string "this prize.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23:
# 346 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Wide Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24:
# 355 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "We hope you enjoy your prize!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25:
# 368 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Zoom Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26:
# 390 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Scope Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27:
# 412 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a King's Rock?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28:
# 434 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Fang?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29:
# 456 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Claw?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30:
# 478 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Muscle Band?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31:
# 500 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a pair of Wise Glasses?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32:
# 522 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Loaded Die?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33:
# 544 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM06 - Toxic?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34:
# 566 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM12 - Taunt?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35:
# 588 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM46 - Thief?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36:
# 610 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM48 - Skill Swap?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37:
# 632 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM49 - Snatch?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38:
# 654 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 4800 coins\n"
	.string "for a Gimmighoul?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39:
# 664 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Gimmighoul!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40:
# 686 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 6400 coins\n"
	.string "for an Eevee?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41:
# 696 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received an Eevee!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42:
# 718 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 8000 coins\n"
	.string "for a Porygon?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43:
# 728 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Porygon!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44:
# 750 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Ah, so you've decided to try your luck\n"
	.string "with one of our Mystery Boxes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45:
# 770 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Ditto!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46:
# 794 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Beldum!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0:
# 826 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Eelektrik Game Corner!\n"
	.string "Our games are entirely skill-based!\p"
	.string "Oh! Are you a new customer? Here, you'll\n"
	.string "need one of these!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1:
# 833 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Now that you've got a coin case, here is\n"
	.string "our complementary welcome bonus!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2:
# 840 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Good luck and have fun! Oop, I mean, may\n"
	.string "your skills bring you victory!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3:
# 847 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Eelektrik Game Corner!\n"
	.string "Would you like to purchase some coins?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4:
# 859 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "What bundle would you like to purchase?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5:
# 864 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "50 Coins - ¥1,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6:
# 865 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "250 Coins - ¥4,500$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7:
# 866 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "1,000 Coins - ¥16,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8:
# 867 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "4,000 Coins - ¥40,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9:
# 872 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 50 Coins for\n"
	.string "¥1000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10:
# 878 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you do not have the sufficient\n"
	.string "funds for this bundle.$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11:
# 891 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12:
# 902 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 250 Coins\n"
	.string "for ¥4,500?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13:
# 932 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 1,000 Coins\n"
	.string "for ¥16,000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14:
# 962 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 4,000 Coins\n"
	.string "for ¥40,000?$"

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0:
# 1021 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You can't play if you don't have a COIN\n"
	.string "CASE.$"
