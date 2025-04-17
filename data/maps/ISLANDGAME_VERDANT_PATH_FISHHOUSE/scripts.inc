ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts::
# 13 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_unset FLAG_DAILY_VERDANT_PATH_ARNIE_ROLL, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 38 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, VAR_VERDANT_PATH_STATE
ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 41 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	quest_emote_on_warp 3, QUEST_ARNIE_FISHING_QUESTS
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	random 100
# 17 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, VAR_RESULT
# 18 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_DAILY_VERDANT_PATH_ARNIE_ROLL
# 20 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 24 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50 + 30
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 28 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50 + 30 + 15
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 33 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 3
# 34 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 3
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 0
# 22 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 0
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 25 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 1
# 26 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 1
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 29 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_E, 2
# 30 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 2
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie::
# 48 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 49 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 50 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_ROD_RECEIVED, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 51 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 0, 0
# 52 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro, MSGBOX_YESNO
# 53 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline
# 54 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2500
# 55 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke
# 56 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2500
# 57 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 58 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub
# 59 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 60 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 61 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_ROD_RECEIVED
# 62 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro
# 63 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 64 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived::
# 68 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
# 70 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieServices:
# 71 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0
# 74 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_1, 1
# 75 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_2, 2
# 76 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_3, 3
# 77 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_4, 4
# 78 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_5, 5
# 79 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 81 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_3
# 84 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_4
# 108 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_5
# 114 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 4, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_6
# 118 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1:
# 121 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieFishingQuest:
# 122 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_B, 0
# 123 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, SUB_QUEST_COUNT_ARNIE
# 124 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_C, QUEST_ARNIE_FISHING_QUESTS
# 125 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	call Common_NextSubQuest
# 132 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_B
# 133 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 0, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_10
# 134 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_11
# 135 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_12
# 136 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_13
# 137 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 4, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_14
# 138 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 5, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_15
# 139 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_RELICANTH
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8:
# 141 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	callnative CheckPartyMon
# 142 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_21
# 180 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_B
# 181 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 0, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_39
# 186 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_40
# 191 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_41
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37:
# 202 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_20:
# 205 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieCatchOfTheDay:
# 206 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 17, 1
# 207 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_E
# 208 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_29
# 245 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_30
# 281 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_31
# 319 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_25, MSGBOX_YESNO
# 323 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_51
# 350 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 351 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27:
# 354 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieServices_End:
# 355 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_27
# 358 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_3:
# 83 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieCatchOfTheDay
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_4:
# 85 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	returnqueststate QUEST_ARNIE_FISHING_QUESTS
# 86 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_17
# 106 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieFishingQuest
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_5:
# 109 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_8
# 113 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_6:
# 115 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_9
# 116 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_10:
# 133 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_MUDKIP
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_11:
# 134 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_FEEBAS_MARYAN
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_12:
# 135 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_LUMINEON
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_13:
# 136 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_SEADRA
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_14:
# 137 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_PALAFIN
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_15:
# 138 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8000, SPECIES_CLAMPERL
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_17:
# 87 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_6, MSGBOX_YESNO
# 92 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_24
# 102 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_21:
# 143 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_B
# 144 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 0, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_35
# 157 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_36
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_33:
# 177 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_20

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_24:
# 93 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	startquest QUEST_ARNIE_FISHING_QUESTS
# 94 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_7
# 99 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_29:
# 209 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_17, MSGBOX_YESNO
# 215 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_42
# 242 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 243 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_30:
# 246 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_21, MSGBOX_YESNO
# 251 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_45
# 278 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 279 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_31:
# 282 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_23, MSGBOX_YESNO
# 288 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_48
# 315 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 316 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_35:
# 145 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10
# 149 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 150 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARNIE_FISHING_QUESTS, VAR_TEMP_B
# 151 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	addvar VAR_TEMP_B, 1
# 152 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_11
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_33

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_36:
# 158 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12
# 162 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_PRISM_SCALE
# 163 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARNIE_FISHING_QUESTS, VAR_TEMP_B
# 164 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	addvar VAR_TEMP_B, 1
# 165 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_13
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_33

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_39:
# 182 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_14
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_40:
# 187 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_15
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_41:
# 192 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_16
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_37

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_42:
# 216 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 1000
# 217 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_54
# 225 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 1000
# 226 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 227 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 228 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 229 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_WISHIWASHI, 5
# 230 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 231 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WISHIWASHI
# 232 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_19
# 233 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 234 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 237 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 238 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_45:
# 252 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 1500
# 253 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_57
# 261 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 1500
# 262 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 263 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 264 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 265 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_SLOWPOKE, 5, , , , 2
# 266 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 267 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLOWPOKE
# 268 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_22
# 269 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 270 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 273 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 274 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_48:
# 289 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2000
# 290 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_60
# 298 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2000
# 299 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 300 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 301 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 302 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_SHELLDER, 5, , , , 1, , , , , , , , , , , , , , MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_RAPID_SPIN, MOVE_TWINEEDLE
# 303 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 304 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHELLDER
# 305 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_24
# 306 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 307 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 310 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 311 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_51:
# 324 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 500
# 325 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_63
# 333 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 500
# 334 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 335 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 336 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 337 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 338 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 339 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 340 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_26
# 341 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 342 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20
# 345 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 346 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_54:
# 218 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 221 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 222 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_57:
# 254 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 257 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 258 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_60:
# 291 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 294 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 295 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_63:
# 326 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 329 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 330 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_27


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline::
# 369 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0
# 370 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 371 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke::
# 375 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0
# 376 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 377 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade::
# 395 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 396 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 397 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_TRADE_DONE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished
# 398 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_STARYU
# 399 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 400 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 401 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 402 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk
# 403 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special ChoosePartyMon
# 404 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 405 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 406 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 407 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 408 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 409 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 410 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 411 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0, MSGBOX_YESNO
# 415 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_2
ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_1:
# 418 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 419 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 420 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special CreateInGameTradePokemon
# 421 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special DoInGameTradeScene
# 422 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 423 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 424 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1
# 425 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_TRADE_DONE
# 426 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_2:
# 416 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_1


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished::
# 439 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1
# 440 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong::
# 444 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0
# 445 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline::
# 449 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0
# 452 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_NPC::
# 455 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 456 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 457 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk
# 458 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0:
# 72 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "How's it hangin'?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_1:
# 74 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Catch of the Day$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_2:
# 75 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Fishing Quest$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_3:
# 76 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Trading$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_4:
# 77 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "How to fish$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_5:
# 78 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Later, dude$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_6:
# 88 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Ah, so you think you're ready to take on\n"
	.string "my famous fishing challenge, do ye?\p"
	.string "The format is pretty simple. I ask you\n"
	.string "for a specific Pokémon, and you show me\l"
	.string "it. I'll even throw in a little reward for\l"
	.string "each one you show!\p"
	.string "So how 'bout it? Think you're up to the\n"
	.string "task?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_7:
# 95 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Heh. I like your enthusiasm, kiddo! Let's\n"
	.string "kick this gauntlet off with something\l"
	.string "sweet and simple!\p"
	.string "Your first trial will be... to catch and\n"
	.string "show me a Mudkip! I hear many trainers\l"
	.string "are quite fond of them.\p"
	.string "They're pretty rare sights in the wild,\n"
	.string "but you might be able to find one in the\l"
	.string "ponds of Oranna.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_8:
# 110 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "This club is a great place to trade with\n"
	.string "other fellow fishing fanatics!\p"
	.string "There's always new faces popping in and\n"
	.string "out, so be sure to check in often!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_9:
# 115 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "The second you get a bite, you gotta\n"
	.string "reel it in only once so you don't break\l"
	.string "your line.\p"
	.string "Then keep at it every time 'till a\n"
	.string "Pokémon's on the line!\p"
	.string "It takes a lot of practice and a little\n"
	.string "bit of luck, but with enough time, you'll\l"
	.string "become a master hooker!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10:
# 146 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Ah, looks like you found a Kipperino!\n"
	.string "Not too bad for a rookie.\p"
	.string "Here's your reward for completing the\n"
	.string "trial!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_11:
# 153 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Now that you've gotten your feet wet,\n"
	.string "why don't we swim out a little farther?\p"
	.string "For your next trial, you'll need to\n"
	.string "venture into the subzero caves of Mt.\l"
	.string "Aurora, where you'll find and show me\l"
	.string "the shabbiest swimmer of them all,\l"
	.string "Feebas!\p"
	.string "Don't be too quick to judge it by its\n"
	.string "appearance... like many Pokémon in the\l"
	.string "world, they can be quite deceiving!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12:
# 159 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Heh, looks like you're startin' to get\n"
	.string "the hang of things! That's a pretty\l"
	.string "darn ugly lookin' Feebas, ain't it?\p"
	.string "Here's your reward for completing the\n"
	.string "trial!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_13:
# 166 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Don't get too comfortable yet... You're\n"
	.string "still a ways away from the finish line!\p"
	.string "Your next hunt will be the Maryan fish\n"
	.string "of the forest, Lumineon!\p"
	.string "Their home lies in the freshwater lakes\n"
	.string "of the lush Arborian Thicket, found\l"
	.string "only on Lumine Island.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_14:
# 183 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Your first trial will be... to catch and\n"
	.string "show me a Mudkip! I hear many trainers\l"
	.string "are quite fond of them.\p"
	.string "They're pretty rare sights in the wild,\n"
	.string "but you might be able to find one in the\l"
	.string "ponds of Oranna.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_15:
# 188 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "For your next trial, you'll need to\n"
	.string "venture into the subzero caves of Mt.\l"
	.string "Aurora, where you'll find and show me\l"
	.string "Marya's shabbiest swimmer, Feebas!\p"
	.string "Don't be too quick to judge it by its\n"
	.string "appearance... like many Pokémon in the\l"
	.string "world, they can be quite deceiving!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_16:
# 193 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Your next hunt will be the Maryan fish\n"
	.string "of the forest, Lumineon!\p"
	.string "Their home lies in the freshwater lakes\n"
	.string "of the lush Arborian Thicket on Lumine\l"
	.string "Island.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_17:
# 210 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is known as “the\n"
	.string "demon of the sea” in Alola and Galar...\p"
	.string "The small fry Pokémon, Wishiwashi!\p"
	.string "Don't let its size fool you, though, for\n"
	.string "when they come together into their\l"
	.string "School Form, a single water gun is more\l"
	.string "powerful than a hydro pump!\p"
	.string "For just ¥1000, you too can get a taste\n"
	.string "of this lil sea demon!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18:
# 219 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Sorry, ya don't got enough clams.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_19:
# 232 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Wishiwashi!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_20:
# 235 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Enjoy the fresh catch!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_21:
# 247 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is a fisherman's\n"
	.string "best bud, the dopey Pokémon Slowpoke!\p"
	.string "Its tail not only serves as a tasty\n"
	.string "treat, but also a lure for fishing too!\p"
	.string "For ¥1500, this absentminded animal is\n"
	.string "all yours!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_22:
# 268 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Slowpoke!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_23:
# 283 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is courtesy of\n"
	.string "Tidalcove's sandy shore...\p"
	.string "Shellder, the Bivalve Pokémon!\p"
	.string "Its tender, soft body is enveloped by\n"
	.string "diamond-hard shell, said to have once\l"
	.string "been used by our ancestors to craft\l"
	.string "shields!\p"
	.string "For ¥2,000, this tiny tanky mollusk is\n"
	.string "all yours for the taking!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_24:
# 305 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Shellder!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_25:
# 320 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is none other than\n"
	.string "the king of losers himself, Magikarp!\p"
	.string "For the low-low price of ¥500, you too\n"
	.string "can wear the crown of loserdom!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_26:
# 340 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Magikarp!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_27:
# 356 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Tight lines!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0:
# 369 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Well, if you ever change your mind, I'll\n"
	.string "always be here!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0:
# 375 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, I can't sell them for any less\n"
	.string "than 2500¥.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0:
# 412 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "W-What!? Could it be...!? The LEGENDARY\n"
	.string "Gyarados in all of its glory!? T-Trainer!\l"
	.string "You MUST let me have it! H-Here, I'll\l"
	.string "even give you my prized Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1:
# 424 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Finally... I have a Gyarados all of my\n"
	.string "own... I can rest easy now, knowing that\l"
	.string "I have one of the rarest water Pokémon\l"
	.string "known to mankind!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0:
# 444 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Unless you've a Gyarados to show me, go\n"
	.string "away!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0:
# 450 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "C-Come on, man! Do me a solid!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro::
# 361 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy there, trainer! I'm Arnie,\n"
	.string "renowned fishing guru and president of\l"
	.string "the Fishing Fanatics!\p"
	.string "{COLOR DARK_GRAY}Would you like to join us? It's only\n"
	.string "¥2500 for a membership!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub::
# 381 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Congrats! You're a Fishing Fanatic now!\n"
	.string "Here's a little welcome gift from me.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro::
# 387 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}That right there is a custom-made\n"
	.string "fishing rod hand-crafted by yours\l"
	.string "truly.\p"
	.string "{COLOR DARK_GRAY}It's proof of your admission to our\n"
	.string "AWEsome club!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk::
# 429 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Urgg... I'm convinced it doesn't exist!\p"
	.string "The legendary Gyarados... I've been\n"
	.string "searching for it for YEARS!\p"
	.string "But all I've found are these worthless\n"
	.string "Magikarps...\p"
	.string "I'd do anything to get my hands on a\n"
	.string "mythical beast like Gyarados. Heck, I'd\l"
	.string "even be willing to trade my SUPER\l"
	.string "SPECIAL Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk::
# 461 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Nothing beats Arnie's custom-made\n"
	.string "rods. They're positively remarkable.$"
