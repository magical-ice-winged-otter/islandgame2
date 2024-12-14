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
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_2
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_1:
# 84 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 85 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_1, MSGBOX_YESNO
# 88 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_5
# 105 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_4
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_4:
# 109 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 110 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
GameCornerNPC_End:
# 111 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 112 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_2:
# 79 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_0
# 82 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto GameCornerNPC_End
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_1

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_5:
# 89 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 90 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_lt ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_9
ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_8:
# 96 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1
# 97 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 98 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 99 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 100 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_3
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_4

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_9:
# 91 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_2
# 94 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto GameCornerNPC_End
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_8


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC6::
# 116 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 117 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC6_Text_0
# 120 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 121 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler0::
# 125 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 126 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler0_Text_0
# 129 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler1::
# 133 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 134 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 135 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler1_Text_0
# 138 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 139 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitmovement 0
# 140 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler2::
# 144 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 145 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 146 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_Gambler2_2
# 152 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_DAILY_APPLEVINE_COIN_BRO, ISLANDGAME_APPLEVINE_EventScript_Gambler2_5
# 165 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_2
ISLANDGAME_APPLEVINE_EventScript_Gambler2_1:
# 170 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 171 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_Gambler2_2:
# 147 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_0
	goto ISLANDGAME_APPLEVINE_EventScript_Gambler2_1

ISLANDGAME_APPLEVINE_EventScript_Gambler2_5:
# 153 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 154 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_1
# 157 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 40
# 158 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 159 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 160 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 161 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 162 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_DAILY_APPLEVINE_COIN_BRO
	goto ISLANDGAME_APPLEVINE_EventScript_Gambler2_1


ISLANDGAME_APPLEVINE_EventScript_Gambler3::
# 175 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 176 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler3_Text_0
# 179 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_EventScript_Bouncer::
# 183 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 184 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 185 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_Bouncer_Text_0
# 188 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine::
# 196 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 198 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
Applevine_VendingMachine:
# 199 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_0
# 202 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showmoneybox 17, 1
# 203 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_1, 0
# 204 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_2, 35
# 205 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_3, 36
# 206 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_4, 37
# 207 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 208 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 35, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_3
# 225 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 36, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_4
# 242 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 37, ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_5
# 258 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto ApplevineVending_End
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1:
# 261 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
ApplevineVending_End:
# 262 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 263 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 264 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_3:
# 210 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 500
# 211 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_8
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_7:
# 217 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 500
# 218 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 219 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 220 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 221 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 222 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 223 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 224 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_4:
# 226 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 800
# 227 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_11
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_10:
# 233 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 800
# 234 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 235 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 236 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 237 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_VEND
# 238 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 239 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 240 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SODA_POP
# 241 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_5:
# 243 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1200
# 244 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_14
ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_13:
# 250 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1200
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
	giveitem ITEM_LEMONADE
# 257 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_1

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_8:
# 212 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 215 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_7

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_11:
# 228 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 231 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_10

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_14:
# 245 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5
# 248 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto Applevine_VendingMachine
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_13


ISLANDGAME_APPLEVINE_EventScript_PrizeClerk::
# 274 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 275 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 276 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1:
# 284 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1, MSGBOX_YESNO
# 287 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5
# 291 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4:
# 294 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_Exchange:
# 295 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2
# 298 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 17, 1
# 299 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 300 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4, 474
# 301 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5, 482
# 302 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6, 471
# 303 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7, 465
# 304 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8, 492
# 305 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9, 493
# 306 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10, 475
# 307 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11, 476
# 308 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12, 762
# 309 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13, 587
# 310 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14, 593
# 311 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15, 627
# 312 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16, 629
# 313 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17, 630
# 314 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18, 370
# 315 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19, 376
# 316 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20, 357
# 317 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21, 746
# 318 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 319 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 474, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_10
# 342 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 482, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11
# 364 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 471, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12
# 386 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 465, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_13
# 408 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 492, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14
# 430 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 493, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15
# 452 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 475, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_16
# 474 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 476, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17
# 496 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 762, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18
# 518 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 587, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_19
# 540 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 593, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20
# 562 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 627, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21
# 584 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 629, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_22
# 606 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 630, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23
# 628 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 370, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_24
# 660 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 376, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25
# 692 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 357, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26
# 724 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 746, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27
# 792 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 17, 1
# 793 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8:
# 796 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
PrizeClerk_End:
# 797 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 798 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_2:
# 277 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0
# 281 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_1

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_5:
# 288 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_4

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_10:
# 321 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 322 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29:
# 328 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23, MSGBOX_YESNO
# 331 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83:
# 341 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_11:
# 343 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 344 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32:
# 350 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25, MSGBOX_YESNO
# 353 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86:
# 363 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_12:
# 365 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 366 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35:
# 372 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26, MSGBOX_YESNO
# 375 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89:
# 385 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_13:
# 387 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 388 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38:
# 394 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27, MSGBOX_YESNO
# 397 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92:
# 407 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_14:
# 409 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 410 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41:
# 416 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28, MSGBOX_YESNO
# 419 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95:
# 429 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_15:
# 431 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 432 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 1600
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44:
# 438 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29, MSGBOX_YESNO
# 441 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98:
# 451 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_16:
# 453 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 454 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47:
# 460 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30, MSGBOX_YESNO
# 463 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101:
# 473 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_17:
# 475 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 476 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50:
# 482 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31, MSGBOX_YESNO
# 485 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104:
# 495 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_18:
# 497 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 498 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 2400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53:
# 504 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32, MSGBOX_YESNO
# 507 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107:
# 517 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_19:
# 519 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 520 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56:
# 526 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33, MSGBOX_YESNO
# 529 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110:
# 539 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_20:
# 541 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 542 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59:
# 548 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34, MSGBOX_YESNO
# 551 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113:
# 561 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_21:
# 563 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 564 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62:
# 570 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35, MSGBOX_YESNO
# 573 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116:
# 583 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_22:
# 585 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 586 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65:
# 592 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36, MSGBOX_YESNO
# 595 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119:
# 605 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_23:
# 607 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 608 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 3200
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68:
# 614 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37, MSGBOX_YESNO
# 617 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122:
# 627 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_24:
# 629 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 630 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 4800
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71:
# 636 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38, MSGBOX_YESNO
# 639 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125:
# 659 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_25:
# 661 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 662 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 6400
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74:
# 668 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40, MSGBOX_YESNO
# 671 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128:
# 691 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_26:
# 693 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 694 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 8000
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77:
# 700 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42, MSGBOX_YESNO
# 703 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131:
# 723 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_27:
# 725 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkcoins VAR_TEMP_D
# 726 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_TEMP_D, 9999
	goto_if_lt ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80:
# 732 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44, MSGBOX_YESNO
# 735 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134:
# 790 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_8

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_30:
# 323 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 326 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_29

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_33:
# 345 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 348 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_32

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_36:
# 367 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 370 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_35

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_39:
# 389 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 392 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_38

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_42:
# 411 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 414 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_41

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_45:
# 433 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 436 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_44

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_48:
# 455 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 458 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_47

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_51:
# 477 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 480 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_50

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_54:
# 499 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 502 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_53

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_57:
# 521 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 524 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_56

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_60:
# 543 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 546 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_59

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_63:
# 565 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 568 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_62

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_66:
# 587 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 590 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_65

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_69:
# 609 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 612 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_68

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_72:
# 631 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 634 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_71

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_75:
# 663 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 666 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_74

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_78:
# 695 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 698 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_77

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_81:
# 727 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22
# 730 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto PrizeClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_80

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_84:
# 332 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 333 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 334 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 335 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 336 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 337 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_83

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_87:
# 354 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 355 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 356 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 357 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 358 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 359 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_86

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_90:
# 376 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 800
# 377 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 378 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 379 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 380 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 381 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_89

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_93:
# 398 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 399 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 400 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 401 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 402 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 403 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_92

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_96:
# 420 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 421 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 422 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 423 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 424 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_FANG
# 425 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_95

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_99:
# 442 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 1600
# 443 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 444 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 445 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 446 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_RAZOR_CLAW
# 447 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_98

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_102:
# 464 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 465 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 466 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 467 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 468 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 469 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_101

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_105:
# 486 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 487 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 488 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 489 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 490 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 491 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_104

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_108:
# 508 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 2400
# 509 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 510 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 511 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 512 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 513 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_107

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_111:
# 530 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 531 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 532 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 533 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 534 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM06
# 535 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_110

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_114:
# 552 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 553 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 554 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 555 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 556 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM12
# 557 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_113

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_117:
# 574 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 575 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 576 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 577 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 578 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM46
# 579 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_116

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_120:
# 596 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 597 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 598 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 599 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 600 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM48
# 601 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_119

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_123:
# 618 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 3200
# 619 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 620 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 621 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 622 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM49
# 623 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_122

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_126:
# 640 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 4800
# 641 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 642 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 643 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 644 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_GIMMIGHOUL, 20, ITEM_NUGGET, ITEM_POKE_BALL, NUM_NATURES
# 645 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 646 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GIMMIGHOUL
# 647 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39
# 648 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 650 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 651 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137:
# 655 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_125

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_129:
# 672 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 6400
# 673 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 674 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 675 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 676 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_EEVEE, 20, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NUM_NATURES
# 677 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 678 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 679 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41
# 680 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 682 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 683 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140:
# 687 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_128

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_132:
# 704 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 8000
# 705 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 706 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 707 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 708 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_PORYGON, 20, ITEM_EVIOLITE, ITEM_POKE_BALL, NUM_NATURES
# 709 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 710 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
# 711 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43
# 712 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 714 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 715 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143:
# 719 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_131

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_135:
# 736 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removecoins 9999
# 737 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 17, 1
# 738 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 739 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 740 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	random 10
# 741 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 742 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 0, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_148
# 743 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149
# 744 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150
# 745 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_151
# 746 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152
# 747 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153
# 748 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_154
# 749 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 7, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155
# 761 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 8, ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156
# 774 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_BELDUM, 20, ITEM_COMET_SHARD, ITEM_CHERISH_BALL, NUM_NATURES, 0
# 775 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 776 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 777 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46
# 778 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 780 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 781 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_162
ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146:
# 786 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_134

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_138:
# 652 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 653 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_137

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_141:
# 684 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 685 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_140

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_144:
# 716 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 717 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_143

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_148:
# 742 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM32
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_149:
# 743 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_150:
# 744 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_BIG_NUGGET
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_151:
# 745 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_TM21
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_152:
# 746 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_LIFE_ORB
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_153:
# 747 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_MAX_REVIVE
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_154:
# 748 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_155:
# 750 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_QUICK_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 751 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 752 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 753 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 754 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 756 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 757 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_156:
# 762 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	givemon SPECIES_DITTO, 20, ITEM_METAL_POWDER, ITEM_CHERISH_BALL, NUM_NATURES, 2
# 763 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 764 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
# 765 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45
# 766 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitfanfare
# 768 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 769 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_160
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_158:
# 758 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 759 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_160:
# 770 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 771 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_162:
# 782 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 783 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_146


ISLANDGAME_APPLEVINE_EventScript_CoinsClerk::
# 805 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lock
# 806 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	faceplayer
# 807 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2
# 829 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3, MSGBOX_YESNO
# 832 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12
# 836 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1:
# 840 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_Exchange:
# 841 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4
# 844 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 845 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showmoneybox 17, 4
# 846 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3, 0
# 847 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5, 1
# 848 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6, 2
# 849 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7, 3
# 850 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8, 4
# 851 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 852 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	switch VAR_RESULT
# 853 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7
# 883 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8
# 913 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9
# 943 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10
# 974 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 975 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 976 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5:
# 979 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
CoinsClerk_End:
# 980 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	closemessage
# 981 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2:
# 808 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0
# 812 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	giveitem ITEM_COIN_CASE
# 813 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setflag FLAG_APPLEVINE_COIN_CASE
# 814 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	showcoinsbox 18, 1
# 815 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1
# 818 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 20
# 819 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 820 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 821 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 822 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2
# 825 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 826 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7:
# 854 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9, MSGBOX_YESNO
# 857 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_15
# 879 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 880 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 881 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8:
# 884 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12, MSGBOX_YESNO
# 887 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_18
# 909 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 910 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 911 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_9:
# 914 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13, MSGBOX_YESNO
# 917 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_21
# 939 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 940 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 941 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_10:
# 944 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14, MSGBOX_YESNO
# 947 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_24
# 969 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 970 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 971 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_12:
# 833 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_15:
# 858 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 1000
# 859 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_28
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_27:
# 867 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 1000
# 868 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 50
# 869 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 870 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 871 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 872 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 873 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 876 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_18:
# 888 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 4500
# 889 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_31
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_30:
# 897 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 4500
# 898 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 250
# 899 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 900 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 901 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 902 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 903 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 906 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_21:
# 918 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 16000
# 919 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_34
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33:
# 927 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 16000
# 928 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 1000
# 929 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 930 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 931 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 932 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 933 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 936 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_24:
# 948 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkmoney 40000
# 949 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_37
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36:
# 957 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	removemoney 40000
# 958 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	addcoins 4000
# 959 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatemoneybox
# 960 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	updatecoinsbox 18, 1
# 961 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playse SE_SHOP
# 962 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	waitse
# 963 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11
# 966 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_End
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_28:
# 860 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 863 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 864 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 865 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_27

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_31:
# 890 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 893 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 894 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 895 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_30

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_34:
# 920 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 923 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 924 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 925 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_33

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_37:
# 950 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10
# 953 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidemoneybox
# 954 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	hidecoinsbox 18, 1
# 955 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	goto CoinsClerk_Exchange
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_36


ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General::
# 1001 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	lockall
# 1002 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1003 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2
# 1007 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1008 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	playslotmachine VAR_RESULT
ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1:
# 1010 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	releaseall
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2:
# 1004 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine0::
# 1014 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 0
# 1015 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine1::
# 1018 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 1
# 1019 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine2::
# 1022 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 2
# 1023 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine3::
# 1026 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 3
# 1027 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine4::
# 1030 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 4
# 1031 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine5::
# 1034 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 5
# 1035 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine6::
# 1038 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 6
# 1039 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine7::
# 1042 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 7
# 1043 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine8::
# 1046 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 8
# 1047 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine9::
# 1050 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 9
# 1051 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine10::
# 1054 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 10
# 1055 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine11::
# 1058 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	setvar VAR_0x8004, 11
# 1059 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
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
	.string "halp need coin$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_1:
# 86 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "gib coin pls$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_2:
# 92 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "wtf poor$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_3:
# 101 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "thx$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC5_Text_4:
# 106 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "wai$"

ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_NPC6_Text_0:
# 118 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Come on! Give me my non-alcoholic\n"
	.string "beverage, you stupid machine!$"

ISLANDGAME_APPLEVINE_EventScript_Gambler0_Text_0:
# 127 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "BRO WHAT DO YOU MEAN I MISSED?? MY\n"
	.string "INPUT WAS FRAME PERFECT DUDE$"

ISLANDGAME_APPLEVINE_EventScript_Gambler1_Text_0:
# 136 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "I like playing on this machine the most.\n"
	.string "I always get lucky when playing on it!$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_0:
# 148 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "I got extra coins if you want 'em, but\n"
	.string "you're gonna need a coin case.$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_1:
# 155 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Want some coins? I got tons of 'em.$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_2:
# 166 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Come back tomorrow if ya want more\n"
	.string "coins.$"

ISLANDGAME_APPLEVINE_EventScript_Gambler3_Text_0:
# 177 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "What the heck, man! It's like these\n"
	.string "things are rigged or something!$"

ISLANDGAME_APPLEVINE_EventScript_Bouncer_Text_0:
# 186 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you must have a VIP Pass in order\n"
	.string "to enter the High Limit Area.$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_0:
# 200 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "{COLOR RED}(It's a vending machine. What should I\n"
	.string "get?)$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_1:
# 203 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Nah, I'm good$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_2:
# 204 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Fresh Water - ¥500$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_3:
# 205 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Soda Pop - ¥800$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_4:
# 206 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Lemonade - ¥1200$"

ISLANDGAME_APPLEVINE_GAME_CORNER_VendingMachine_Text_5:
# 213 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "{COLOR RED}(I don't have enough money.)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0:
# 278 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! It looks\n"
	.string "like you don't have a coin case.\p"
	.string "Please pick one up from the clerk over\n"
	.string "there.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_1:
# 285 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Prize Counter! Would you\n"
	.string "like to exchange your coins for some\l"
	.string "fabulous prizes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_2:
# 296 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "This is our selection of prizes.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_3:
# 299 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "See ya!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_4:
# 300 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wide Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_5:
# 301 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Zoom Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_6:
# 302 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Scope Lens (800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_7:
# 303 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "King's Rock (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_8:
# 304 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Fang (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_9:
# 305 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Razor Claw (1600)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_10:
# 306 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Muscle Band (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_11:
# 307 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Wise Glasses (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_12:
# 308 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Loaded Dice (2400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_13:
# 309 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM06 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_14:
# 310 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM12 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_15:
# 311 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM46 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_16:
# 312 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM48 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_17:
# 313 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "TM49 (3200)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_18:
# 314 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Gimmighoul (4800)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_19:
# 315 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Eevee (6400)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_20:
# 316 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Porygon (8000)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_21:
# 317 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Mystery Box (9999)$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_22:
# 324 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you don't have enough coins for\n"
	.string "this prize.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_23:
# 329 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Wide Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_24:
# 338 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "We hope you enjoy your prize!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_25:
# 351 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Zoom Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_26:
# 373 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 800 coins\n"
	.string "for a Scope Lens?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_27:
# 395 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a King's Rock?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_28:
# 417 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Fang?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_29:
# 439 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 1600 coins\n"
	.string "for a Razor Claw?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_30:
# 461 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Muscle Band?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_31:
# 483 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a pair of Wise Glasses?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_32:
# 505 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 2400 coins\n"
	.string "for a Loaded Die?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_33:
# 527 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM06 - Toxic?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_34:
# 549 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM12 - Taunt?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_35:
# 571 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM46 - Thief?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_36:
# 593 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM48 - Skill Swap?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_37:
# 615 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 3200 coins\n"
	.string "for TM49 - Snatch?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_38:
# 637 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 4800 coins\n"
	.string "for a Gimmighoul?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_39:
# 647 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Gimmighoul!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_40:
# 669 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 6400 coins\n"
	.string "for an Eevee?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_41:
# 679 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received an Eevee!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_42:
# 701 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to exchange 8000 coins\n"
	.string "for a Porygon?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_43:
# 711 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Porygon!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_44:
# 733 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Ah, so you've decided to try your luck\n"
	.string "with one of our Mystery Boxes?$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_45:
# 753 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Ditto!$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_46:
# 777 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You received a Beldum!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0:
# 809 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Eelektrik Game Corner!\n"
	.string "Our games are entirely skill-based!\p"
	.string "Oh! Are you a new customer? Here, you'll\n"
	.string "need one of these!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1:
# 816 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Now that you've got a coin case, here is\n"
	.string "our complementary welcome bonus!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2:
# 823 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Good luck and have fun! Oop, I mean, may\n"
	.string "your skills bring you victory!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3:
# 830 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Welcome to the Eelektrik Game Corner!\n"
	.string "Would you like to purchase some coins?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4:
# 842 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "What bundle would you like to purchase?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_5:
# 847 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "50 Coins - ¥1,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_6:
# 848 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "250 Coins - ¥4,500$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_7:
# 849 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "1,000 Coins - ¥16,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_8:
# 850 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "4,000 Coins - ¥40,000$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_9:
# 855 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 50 Coins for\n"
	.string "¥1000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_10:
# 861 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Sorry, you do not have the sufficient\n"
	.string "funds for this bundle.$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_11:
# 874 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_12:
# 885 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 250 Coins\n"
	.string "for ¥4,500?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_13:
# 915 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 1,000 Coins\n"
	.string "for ¥16,000?$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_14:
# 945 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "Would you like to purchase 4,000 Coins\n"
	.string "for ¥40,000?$"

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0:
# 1004 "data/maps/ISLANDGAME_APPLEVINE_GAME_CORNER/scripts.pory"
	.string "You can't play if you don't have a COIN\n"
	.string "CASE.$"
