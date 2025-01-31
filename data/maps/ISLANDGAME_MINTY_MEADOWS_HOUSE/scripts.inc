ISLANDGAME_MINTY_MEADOWS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1::
# 6 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	faceplayer
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_FREE_MINT, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_2
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_3
# 30 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	showmoneybox 18, 0
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_4, MSGBOX_YESNO
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_31
# 46 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_2
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto MintShopEnd
ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_1:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
OpenMintShop:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_6, 0
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_7, 81
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_8, 82
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_9, 83
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_10, 84
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_11, 85
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_12, 86
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_13, 87
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_14, 88
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_15, 89
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_16, 90
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_17, 91
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_18, 92
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_19, 93
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_20, 94
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_21, 95
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_22, 96
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_23, 97
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_24, 98
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_25, 99
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_26, 100
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_27, 101
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 81, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_7
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 82, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_8
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 83, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_9
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 84, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_10
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 85, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_11
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 86, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_12
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 87, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_13
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 88, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_14
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 89, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_15
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 90, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_16
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 91, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_17
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 92, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_18
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 93, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_19
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 94, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_20
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 95, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_21
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 96, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_22
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 97, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_23
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 98, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_24
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 99, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_25
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 100, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_26
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	case 101, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_27
ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5:
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_35
ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_34:
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_FREE_MINT, ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_41
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_FREE_MINT
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_30
ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_40:
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
MintShopEnd:
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	closemessage
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_2:
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_0, MSGBOX_YESNO
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_28
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_2
# 23 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto MintShopEnd
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_1

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_7:
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_LONELY_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_8:
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_9:
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_10:
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_BRAVE_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_11:
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_BOLD_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_12:
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_IMPISH_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_13:
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_LAX_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_14:
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_RELAXED_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_15:
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_MODEST_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_16:
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_MILD_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_17:
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_RASH_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_18:
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_QUIET_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_19:
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_CALM_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_20:
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_GENTLE_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_21:
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_CAREFUL_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_22:
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_SASSY_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_23:
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_TIMID_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_24:
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_HASTY_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_25:
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_JOLLY_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_26:
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_NAIVE_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_27:
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_28:
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_1
# 17 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto OpenMintShop
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_1

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_31:
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	checkmoney 1000
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_37
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto OpenMintShop
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_1

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_35:
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_28
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto MintShopEnd
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_34

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_37:
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_5
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto HPTutor_End
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_1

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_41:
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	showmoneybox 18, 0
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_29
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	removemoney 1000
# 114 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	updatemoneybox
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playse SE_SHOP
# 116 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitse
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto MintShopEnd
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_40


ISLANDGAME_MINTY_MEADOWS_HOUSE_Mordecai::
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_STARLY, CRY_MODE_NORMAL
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_MordecaiText
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitmessage
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Rigby::
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 149 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_RigbyText
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitmessage
# 151 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_MMan::
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	faceplayer
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_MManText
# 163 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitmessage
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Fives::
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	faceplayer
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_FivesText
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitmessage
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Skips::
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_SLAKOTH, CRY_MODE_NORMAL
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_SkipsTalk
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitmessage
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson::
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	faceplayer
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_BLACEPHALON, CRY_MODE_NORMAL
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_0
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	closemessage
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_0:
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Salutations! My name is Pops. Would you\n"
	.string "like to try one of our Meadow Mints?\p"
	.string "They can be used to change the nature\n"
	.string "of your Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_1:
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Good show! Which scent would you like?\n"
	.string "The first one you get is free!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_2:
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Oh... bad show...$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_3:
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Welcome back, trainer! Here to try\n"
	.string "another of our fresh mints?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_4:
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "For the price of ¥1000, I will happily\n"
	.string "sell you one of them!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_5:
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Oh dear... I'm afraid I can't give you a\n"
	.string "mint if you don't have enough money.$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_6:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "I'll decide later!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_7:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Lonely Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_8:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Adamant Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_9:
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Naughty Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_10:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Brave Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_11:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Bold Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_12:
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Impish Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_13:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Lax Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_14:
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Relaxed Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_15:
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Modest Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_16:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Mild Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_17:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Rash Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_18:
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Quiet Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_19:
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Calm Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_20:
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Gentle Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_21:
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Careful Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_22:
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Sassy Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_23:
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Timid Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_24:
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Hasty Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_25:
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Jolly Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_26:
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Naive Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_27:
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Serious Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_28:
# 104 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Alright. Come back when you've made a\n"
	.string "decision!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_29:
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Jolly good show! Thank you for your\n"
	.string "patronage!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1_Text_30:
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Jolly good show! I hope your Pokémon\n"
	.string "likes it!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_0:
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "MORDECAI AND RIGBY GO AND GET US SOME\n"
	.string "FRESH MINTS OR YOU'RE BOTH FIRED!!!\p"
	.string "Huh? Oh, sorry. I didn't mean to startle\n"
	.string "you.\p"
	.string "I'm Benson, the manager of Minty\n"
	.string "Meadows. Please enjoy your stay!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_MordecaiText::
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "hueheuhuehuehue melk$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_RigbyText::
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "hueheuhuehuehue cereal$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_MManText::
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "WOOOOHOOOOO!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_FivesText::
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Wasshup?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_SkipsTalk::
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "{COLOR RED}(It looks like Slakoth is fast asleep.)$"
