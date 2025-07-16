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
# 243 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 36, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_4
# 260 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 37, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_5
# 277 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto ApplevineVending_End
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1:
# 280 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
ApplevineVending_End:
# 281 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 282 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 283 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
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
	hidemoneybox
# 241 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 242 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_4:
# 244 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 800
# 245 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_11
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_10:
# 251 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 800
# 252 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 253 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 254 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 255 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 256 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 257 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 258 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SODA_POP
# 259 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_5:
# 261 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1200
# 262 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_14
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_13:
# 268 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1200
# 269 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 270 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 271 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 272 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 273 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 274 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 275 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LEMONADE
# 276 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_8:
# 229 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 232 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_7

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_11:
# 246 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 249 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_10

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_14:
# 263 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 266 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_13


ISLANDGAME_APPLEVINE_EventScript_PrizeClerk::
# 293 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 294 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 295 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1:
# 303 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1, MSGBOX_YESNO
# 306 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5
# 310 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4:
# 313 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_Exchange:
# 314 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2
# 317 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 17, 1
# 318 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 319 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4, 474
# 320 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5, 482
# 321 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6, 471
# 322 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7, 465
# 323 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8, 492
# 324 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9, 493
# 325 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10, 475
# 326 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11, 476
# 327 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12, 762
# 328 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM06
# 329 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_9
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8:
# 332 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM12
# 333 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11:
# 336 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM32
# 337 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14:
# 340 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM46
# 341 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17:
# 344 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_TM48
# 345 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20:
# 348 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18, 370
# 349 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19, 376
# 350 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20, 357
# 351 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21, 746
# 352 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 353 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 474, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25
# 376 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 482, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26
# 398 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 471, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27
# 420 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 465, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_28
# 442 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 492, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29
# 464 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 493, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30
# 486 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 475, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_31
# 508 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 476, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32
# 530 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 762, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33
# 552 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 587, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_34
# 574 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 593, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35
# 596 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 627, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36
# 618 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 629, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_37
# 640 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 630, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38
# 662 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 370, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39
# 694 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 376, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_40
# 726 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 357, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41
# 758 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 746, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42
# 826 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 17, 1
# 827 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23:
# 830 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_End:
# 831 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 832 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2:
# 296 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0
# 300 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5:
# 307 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_9:
# 330 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13, 587
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12:
# 334 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14, 593
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15:
# 338 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15, 613
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18:
# 342 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16, 627
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21:
# 346 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17, 629
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25:
# 355 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 356 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44:
# 362 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23, MSGBOX_YESNO
# 365 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98:
# 375 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26:
# 377 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 378 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47:
# 384 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25, MSGBOX_YESNO
# 387 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101:
# 397 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27:
# 399 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 400 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50:
# 406 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26, MSGBOX_YESNO
# 409 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104:
# 419 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_28:
# 421 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 422 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53:
# 428 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27, MSGBOX_YESNO
# 431 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107:
# 441 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29:
# 443 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 444 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56:
# 450 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28, MSGBOX_YESNO
# 453 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110:
# 463 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30:
# 465 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 466 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59:
# 472 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29, MSGBOX_YESNO
# 475 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113:
# 485 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_31:
# 487 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 488 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62:
# 494 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30, MSGBOX_YESNO
# 497 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116:
# 507 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32:
# 509 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 510 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65:
# 516 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31, MSGBOX_YESNO
# 519 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119:
# 529 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33:
# 531 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 532 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68:
# 538 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32, MSGBOX_YESNO
# 541 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122:
# 551 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_34:
# 553 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 554 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71:
# 560 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33, MSGBOX_YESNO
# 563 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125:
# 573 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35:
# 575 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 576 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74:
# 582 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34, MSGBOX_YESNO
# 585 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128:
# 595 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36:
# 597 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 598 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77:
# 604 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35, MSGBOX_YESNO
# 607 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131:
# 617 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_37:
# 619 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 620 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80:
# 626 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36, MSGBOX_YESNO
# 629 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134:
# 639 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38:
# 641 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 642 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83:
# 648 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37, MSGBOX_YESNO
# 651 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137:
# 661 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39:
# 663 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 664 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 4800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86:
# 670 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38, MSGBOX_YESNO
# 673 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140:
# 693 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_40:
# 695 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 696 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 6400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89:
# 702 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40, MSGBOX_YESNO
# 705 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143:
# 725 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41:
# 727 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 728 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 8000
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92:
# 734 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42, MSGBOX_YESNO
# 737 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_147
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146:
# 757 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42:
# 759 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 760 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 9999
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95:
# 766 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44, MSGBOX_YESNO
# 769 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149:
# 824 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45:
# 357 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 360 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48:
# 379 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 382 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51:
# 401 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 404 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54:
# 423 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 426 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57:
# 445 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 448 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60:
# 467 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 470 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63:
# 489 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 492 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66:
# 511 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 514 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69:
# 533 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 536 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72:
# 555 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 558 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75:
# 577 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 580 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78:
# 599 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 602 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81:
# 621 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 624 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84:
# 643 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 646 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87:
# 665 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 668 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90:
# 697 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 700 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93:
# 729 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 732 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96:
# 761 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 764 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99:
# 366 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 367 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 368 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 369 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 370 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 371 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102:
# 388 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 389 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 390 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 391 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 392 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 393 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105:
# 410 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 411 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 412 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 413 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 414 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 415 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108:
# 432 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 433 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 434 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 435 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 436 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 437 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111:
# 454 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 455 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 456 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 457 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 458 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_FANG
# 459 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114:
# 476 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 477 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 478 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 479 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 480 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_CLAW
# 481 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117:
# 498 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 499 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 500 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 501 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 502 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 503 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120:
# 520 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 521 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 522 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 523 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 524 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 525 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123:
# 542 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 543 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 544 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 545 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 546 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 547 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126:
# 564 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 565 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 566 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 567 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 568 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM06
# 569 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129:
# 586 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 587 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 588 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 589 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 590 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM12
# 591 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132:
# 608 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 609 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 610 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 611 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 612 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM46
# 613 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135:
# 630 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 631 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 632 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 633 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 634 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM48
# 635 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138:
# 652 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 653 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 654 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 655 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 656 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM49
# 657 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141:
# 674 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 4800
# 675 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 676 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 677 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 678 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_GIMMIGHOUL, 20, ITEM_NUGGET, ITEM_POKE_BALL, NUM_NATURES
# 679 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 680 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GIMMIGHOUL
# 681 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39
# 682 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 684 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 685 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152:
# 689 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144:
# 706 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 6400
# 707 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 708 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 709 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 710 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_EEVEE, 20, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NUM_NATURES
# 711 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 712 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 713 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41
# 714 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 716 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 717 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155:
# 721 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_147:
# 738 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 8000
# 739 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 740 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 741 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 742 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_PORYGON, 20, ITEM_EVIOLITE, ITEM_POKE_BALL, NUM_NATURES
# 743 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 744 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
# 745 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43
# 746 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 748 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 749 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_159
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158:
# 753 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150:
# 770 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 9999
# 771 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 772 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 773 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 774 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	random 10
# 775 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 776 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_163
# 777 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_164
# 778 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_165
# 779 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_166
# 780 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_167
# 781 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_168
# 782 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_169
# 783 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 7, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_170
# 795 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 8, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_171
# 808 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_BELDUM, 20, ITEM_COMET_SHARD, ITEM_CHERISH_BALL, NUM_NATURES, 0
# 809 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 810 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 811 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46
# 812 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 814 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 815 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_177
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161:
# 820 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153:
# 686 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 687 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156:
# 718 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 719 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_159:
# 750 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 751 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_163:
# 776 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_164:
# 777 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_165:
# 778 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_CHOICE_BAND
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_166:
# 779 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_167:
# 780 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_168:
# 781 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MAX_REVIVE
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_169:
# 782 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_PP_MAX
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_170:
# 784 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_QUICK_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 785 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 786 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 787 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 788 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 790 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 791 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_173
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_171:
# 796 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_METAL_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 797 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 798 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 799 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 800 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 802 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 803 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_175
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_173:
# 792 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 793 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_175:
# 804 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 805 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_177:
# 816 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 817 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_161


ISLANDGAME_APPLEVINE_EventScript_CoinsClerk::
# 839 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 840 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 841 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2
# 863 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_CARD_KEY
# 864 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_14
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12:
# 877 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4, MSGBOX_YESNO
# 880 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_29
# 884 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1:
# 888 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_Exchange:
# 889 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5
# 892 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 893 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showmoneybox 17, 4
# 894 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 895 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6, 1
# 896 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7, 2
# 897 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8, 3
# 898 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9, 4
# 899 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 900 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 901 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7
# 931 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8
# 961 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9
# 991 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10
# 1022 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 1023 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 1024 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5:
# 1027 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_End:
# 1028 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 1029 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2:
# 842 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0
# 846 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_COIN_CASE
# 847 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_APPLEVINE_COIN_CASE
# 848 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 849 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1
# 852 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 20
# 853 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 854 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 855 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 856 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2
# 859 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 860 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7:
# 902 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10, MSGBOX_YESNO
# 905 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_17
# 927 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 928 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 929 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8:
# 932 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13, MSGBOX_YESNO
# 935 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_20
# 957 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 958 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 959 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9:
# 962 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14, MSGBOX_YESNO
# 965 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_23
# 987 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 988 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 989 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10:
# 992 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_15, MSGBOX_YESNO
# 995 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_26
# 1017 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 1018 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 1019 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_13:
# 865 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 866 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3
# 870 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 9999
# 871 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 872 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 873 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 874 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 875 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_DAILY_APPLEVINE_COIN_CARD
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_14:
# 864 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_DAILY_APPLEVINE_COIN_CARD, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_13
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_17:
# 906 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1000
# 907 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_32:
# 915 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1000
# 916 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 50
# 917 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 918 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 919 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 920 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 921 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 924 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_20:
# 936 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 4500
# 937 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_35:
# 945 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 4500
# 946 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 250
# 947 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 948 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 949 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 950 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 951 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 954 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_23:
# 966 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 16000
# 967 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_39
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_38:
# 975 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 16000
# 976 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 1000
# 977 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 978 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 979 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 980 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 981 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 984 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_26:
# 996 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 40000
# 997 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_42
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_41:
# 1005 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 40000
# 1006 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 4000
# 1007 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 1008 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 1009 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 1010 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 1011 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12
# 1014 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_29:
# 881 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33:
# 908 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 911 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 912 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 913 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_32

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36:
# 938 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 941 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 942 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 943 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_35

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_39:
# 968 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 971 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 972 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 973 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_38

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_42:
# 998 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 1001 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 1002 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 1003 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_41


ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General::
# 1049 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lockall
# 1050 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1051 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2
# 1055 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1056 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playslotmachine VAR_RESULT
ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1:
# 1058 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	releaseall
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2:
# 1052 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine0::
# 1062 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 0
# 1063 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine1::
# 1066 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 1
# 1067 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine2::
# 1070 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 2
# 1071 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine3::
# 1074 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 3
# 1075 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine4::
# 1078 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 4
# 1079 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine5::
# 1082 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 5
# 1083 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine6::
# 1086 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 6
# 1087 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine7::
# 1090 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 7
# 1091 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine8::
# 1094 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 8
# 1095 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine9::
# 1098 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 9
# 1099 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine10::
# 1102 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 10
# 1103 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine11::
# 1106 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 11
# 1107 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
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
# 297 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! It looks\n"
	.string "like you don't have a coin case.\p"
	.string "Please pick one up from the clerk over\n"
	.string "there.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1:
# 304 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! Would you\n"
	.string "like to exchange your coins for some\l"
	.string "fabulous prizes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2:
# 315 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "This is our selection of prizes.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3:
# 318 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "See ya!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4:
# 319 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wide Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5:
# 320 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Zoom Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6:
# 321 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Scope Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7:
# 322 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "King's Rock (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8:
# 323 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Fang (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9:
# 324 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Claw (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10:
# 325 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Muscle Band (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11:
# 326 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wise Glasses (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12:
# 327 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Loaded Dice (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13:
# 330 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM06 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14:
# 334 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM12 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15:
# 338 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM32 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16:
# 342 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM46 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17:
# 346 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM48 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18:
# 348 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Gimmighoul (4800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19:
# 349 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Eevee (6400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20:
# 350 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Porygon (8000)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21:
# 351 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Mystery Box (9999)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22:
# 358 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you don't have enough coins for\n"
	.string "this prize.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23:
# 363 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Wide Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24:
# 372 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "We hope you enjoy your prize!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25:
# 385 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Zoom Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26:
# 407 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Scope Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27:
# 429 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a King's Rock?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28:
# 451 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Fang?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29:
# 473 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Claw?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30:
# 495 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Muscle Band?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31:
# 517 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a pair of Wise Glasses?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32:
# 539 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Loaded Die?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33:
# 561 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM06 - Toxic?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34:
# 583 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM12 - Taunt?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35:
# 605 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM46 - Thief?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36:
# 627 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM48 - Skill Swap?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37:
# 649 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM32 - Double Team?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38:
# 671 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 4800 coins\n"
	.string "for a Gimmighoul?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39:
# 681 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Gimmighoul!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40:
# 703 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 6400 coins\n"
	.string "for an Eevee?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41:
# 713 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received an Eevee!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42:
# 735 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 8000 coins\n"
	.string "for a Porygon?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43:
# 745 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Porygon!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44:
# 767 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Ah, so you've decided to try your luck\n"
	.string "with one of our Mystery Boxes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45:
# 787 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Ditto!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46:
# 811 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Beldum!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0:
# 843 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to EelektronikArts Game\n"
	.string "Corner! Our games are entirely\l"
	.string "skill-based!\p"
	.string "Oh! Are you a new customer? Here, you'll\n"
	.string "need one of these!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1:
# 850 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Now that you've got a coin case, here is\n"
	.string "our complementary welcome bonus!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2:
# 857 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Good luck and have fun! Oop, I mean, may\n"
	.string "your skills bring you victory!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3:
# 867 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Oh! It has been a while, Player 001! You\n"
	.string "look a bit different, though...\p"
	.string "Here is your daily bonus, as our most\n"
	.string "valued patron.$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4:
# 878 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to EelektronikArts Game\n"
	.string "Corner! Would you like to purchase some\l"
	.string "coins?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5:
# 890 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "What bundle would you like to purchase?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6:
# 895 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "50 Coins - ¥1,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7:
# 896 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "250 Coins - ¥4,500$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8:
# 897 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "1,000 Coins - ¥16,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9:
# 898 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "4,000 Coins - ¥40,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10:
# 903 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 50 Coins for\n"
	.string "¥1000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11:
# 909 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you do not have the sufficient\n"
	.string "funds for this bundle.$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12:
# 922 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13:
# 933 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 250 Coins\n"
	.string "for ¥4,500?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14:
# 963 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 1,000 Coins\n"
	.string "for ¥16,000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_15:
# 993 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 4,000 Coins\n"
	.string "for ¥40,000?$"

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0:
# 1052 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You can't play if you don't have a COIN\n"
	.string "CASE.$"
