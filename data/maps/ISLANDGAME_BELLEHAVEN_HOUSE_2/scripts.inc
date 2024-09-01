ISLANDGAME_BELLEHAVEN_HOUSE_2_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant::
	lock
	faceplayer
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_0
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_1, ITEM_SEA_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_2, ITEM_LAX_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_3, ITEM_ODD_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_4, ITEM_ROCK_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_5, ITEM_FULL_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_6, ITEM_WAVE_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_7, ITEM_ROSE_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_8, ITEM_LUCK_INCENSE
	dynmultipush ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_9, ITEM_PURE_INCENSE
	dynmultistack 0, 0, FALSE, 6, FALSE, FALSE, DYN_MULTICHOICE_CB_SHOW_ITEM
	bufferitemname STR_VAR_1, VAR_RESULT
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_2
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_14
ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_1:
	release
	return

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_2:
	showmoneybox 18, 7
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_11
	checkmoney 1000
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_5
	removemoney 1000
	playse SE_SHOP
	updatemoneybox
	waitse
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_13
	goto ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_1

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_5:
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_12
	goto ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_1


ISLANDGAME_BELLEHAVEN_HOUSE_2_NPC_2::
	lock
	faceplayer
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_2_NPC_2_Text_0
	release
	return


ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_0:
	.string "I sell incenses here, have a look at my\n"
	.string "collection.$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_1:
	.string "Sea Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_2:
	.string "Lax Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_3:
	.string "Odd Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_4:
	.string "Rock Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_5:
	.string "Full Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_6:
	.string "Wave Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_7:
	.string "Rose Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_8:
	.string "Luck Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_9:
	.string "Pure Incense$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_10:
	.string "Would you like to buy {STR_VAR_1} for ¥1000?$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_11:
	.string "Much obliged!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_12:
	.string "Oh, you don't seem to have money to pay for it. Please come back when you do!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_13:
	.string "If you want to buy more from me, please speak to me again!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_Merchant_Text_14:
	.string "I see.... Well, do come again!$"

ISLANDGAME_BELLEHAVEN_HOUSE_2_NPC_2_Text_0:
	.string "Shh! I'm hiding the remote from my\n"
	.string "grandma!$"
