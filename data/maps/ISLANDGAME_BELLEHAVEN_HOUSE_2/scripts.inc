ISLANDGAME_BELLEHAVEN_HOUSE_2_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_0
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_1, ITEM_SEA_INCENSE
# 10 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_2, ITEM_LAX_INCENSE
# 11 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_3, ITEM_ODD_INCENSE
# 12 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_4, ITEM_ROCK_INCENSE
# 13 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_5, ITEM_FULL_INCENSE
# 14 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_6, ITEM_WAVE_INCENSE
# 15 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_7, ITEM_ROSE_INCENSE
# 16 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_8, ITEM_LUCK_INCENSE
# 17 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_9, ITEM_PURE_INCENSE
# 18 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, FALSE, DYN_MULTICHOICE_CB_SHOW_ITEM
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_RESULT
# 21 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_10, MSGBOX_YESNO
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_2
# 36 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_14
ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_1:
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_2:
# 23 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	showmoneybox 18, 7
# 24 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_11
# 25 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	checkmoney 1000
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_5
# 29 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	removemoney 1000
# 30 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	playse SE_SHOP
# 31 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	updatemoneybox
# 32 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	waitse
# 33 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_13
	goto ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_1

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_5:
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_12
	goto ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_1


ISLANDGAME_BELLEHAVEN_HOUSE_2_NPC_2::
# 43 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	faceplayer
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_NPC_2_Text_0
# 46 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_0:
# 7 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "I sell incenses here, have a look at my\n"
	.string "collection.$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_1:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Sea Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_2:
# 10 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Lax Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_3:
# 11 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Odd Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_4:
# 12 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Rock Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_5:
# 13 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Full Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_6:
# 14 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Wave Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_7:
# 15 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Rose Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_8:
# 16 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Luck Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_9:
# 17 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Pure Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_10:
# 21 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Would you like to buy {STR_VAR_1} for ¥1000?$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_11:
# 24 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Much obliged!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_12:
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Oh, you don't seem to have money to pay for it. Please come back when you do!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_13:
# 33 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "If you want to buy more from me, please speak to me again!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_14:
# 36 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "I see.... Well, do come again!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_NPC_2_Text_0:
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_2/scripts.pory"
	.string "Shh! I'm hiding the remote from my\n"
	.string "grandma!$"
