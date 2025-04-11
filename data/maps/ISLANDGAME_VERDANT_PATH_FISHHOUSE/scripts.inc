ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts::
# 9 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_unset FLAG_DAILY_VERDANT_PATH_ARNIE_ROLL, ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 34 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, VAR_VERDANT_PATH_STATE
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	random 100
# 13 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, VAR_RESULT
# 14 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_DAILY_VERDANT_PATH_ARNIE_ROLL
# 16 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 20 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50 + 30
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 24 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_VERDANT_PATH_STATE, 50 + 30 + 15
	goto_if_lt ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 29 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, 3
# 30 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 3
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, 0
# 18 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 0
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, 1
# 22 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 1
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 25 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_TEMP_A, 2
# 26 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_VERDANT_PATH_STATE, 2
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie::
# 42 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_ROD_RECEIVED, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 45 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 0, 0
# 46 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro, MSGBOX_YESNO
# 47 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline
# 48 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2500
# 49 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke
# 50 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2500
# 51 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 52 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub
# 53 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 54 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 55 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_ROD_RECEIVED
# 56 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro
# 57 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 58 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived::
# 62 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
# 64 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieServices:
# 65 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0
# 68 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_1, 1
# 69 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_2, 2
# 70 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_3, 3
# 71 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_4, 4
# 72 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultipush ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_5, 5
# 73 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 75 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_3
# 78 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_4
# 83 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_5
# 89 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 4, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_6
# 93 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices_End
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1:
# 96 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieCatchOfTheDay:
# 97 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 17, 1
# 98 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	switch VAR_TEMP_A
# 99 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 1, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_10
# 135 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 2, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_11
# 170 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	case 3, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_12
# 207 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_17, MSGBOX_YESNO
# 211 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_23
# 237 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 238 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8:
# 242 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
ArnieServices_End:
# 243 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_19
# 246 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_3:
# 77 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieCatchOfTheDay
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_4:
# 79 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_6
# 82 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_5:
# 84 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_7
# 88 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_6:
# 90 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_8
# 91 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_1

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_10:
# 100 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_9, MSGBOX_YESNO
# 106 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_14
# 132 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 133 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_11:
# 136 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_13, MSGBOX_YESNO
# 141 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_17
# 167 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 168 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_12:
# 171 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_15, MSGBOX_YESNO
# 177 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_20
# 203 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 204 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_14:
# 107 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 1000
# 108 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_26
# 115 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 1000
# 116 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 117 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 118 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 119 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_WISHIWASHI, 5
# 120 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WISHIWASHI
# 122 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_11
# 123 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 124 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12
# 127 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 128 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_17:
# 142 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 1500
# 143 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_29
# 150 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 1500
# 151 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 152 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 153 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 154 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_SLOWPOKE, 5, , , , 2
# 155 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLOWPOKE
# 157 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_14
# 158 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 159 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12
# 162 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 163 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_20:
# 178 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2000
# 179 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_32
# 186 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2000
# 187 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 188 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 189 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 190 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_SHELLDER, 5, , , , 1, , , , , , , , , , , , , , MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_RAPID_SPIN, MOVE_TWINEEDLE
# 191 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHELLDER
# 193 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_16
# 194 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 195 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12
# 198 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 199 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_23:
# 212 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 500
# 213 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_35
# 220 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 500
# 221 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 222 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playse SE_PIN
# 223 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitse
# 224 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 225 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 226 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 227 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18
# 228 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitfanfare
# 229 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12
# 232 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 233 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_26:
# 109 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10
# 112 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_29:
# 144 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10
# 147 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_32:
# 180 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10
# 183 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_35:
# 214 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10
# 217 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ArnieServices
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_8


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline::
# 257 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0
# 258 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 259 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke::
# 263 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0
# 264 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 265 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade::
# 283 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 284 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 285 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_TRADE_DONE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished
# 286 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_STARYU
# 287 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 288 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 289 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 290 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk
# 291 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special ChoosePartyMon
# 292 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 293 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 294 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 295 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 296 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 297 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 298 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 299 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0, MSGBOX_YESNO
# 303 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_2
ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_1:
# 306 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 307 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 308 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special CreateInGameTradePokemon
# 309 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special DoInGameTradeScene
# 310 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 311 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 312 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1
# 313 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_TRADE_DONE
# 314 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_2:
# 304 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
	goto ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_1


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished::
# 327 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1
# 328 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong::
# 332 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0
# 333 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline::
# 337 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0
# 340 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_NPC::
# 343 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 344 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 345 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk
# 346 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0:
# 66 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "How's it hangin'?$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_1:
# 68 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Catch of the Day$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_2:
# 69 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Fishing Quests$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_3:
# 70 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Trading$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_4:
# 71 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "How to fish$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_5:
# 72 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Later, dude$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_6:
# 80 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "blah$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_7:
# 85 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "This club is a great place to trade with\n"
	.string "other fellow fishing fanatics!\p"
	.string "There's always new faces popping in and\n"
	.string "out, so be sure to check in often!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_8:
# 90 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "The second you get a bite, you gotta\n"
	.string "reel it in only once so you don't break\l"
	.string "your line.\p"
	.string "Then keep at it every time 'till a\n"
	.string "Pokémon's on the line!\p"
	.string "It takes a lot of practice and a little\n"
	.string "bit of luck, but with enough time, you'll\l"
	.string "become a master baiter!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_9:
# 101 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is known as “the\n"
	.string "demon of the sea” in Alola and Galar...\p"
	.string "The small fry Pokémon, Wishiwashi!\p"
	.string "Don't let its size fool you, though, for\n"
	.string "when they come together into their\l"
	.string "School Form, a single water gun is more\l"
	.string "powerful than a hydro pump!\p"
	.string "For just ¥1000, you too can get a taste\n"
	.string "of this lil sea demon!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_10:
# 110 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Sorry, ya don't got enough clams.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_11:
# 122 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Wishiwashi!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_12:
# 125 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Enjoy the fresh catch!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_13:
# 137 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is a fisherman's\n"
	.string "best bud, the dopey Pokémon Slowpoke!\p"
	.string "Its tail not only serves as a tasty\n"
	.string "treat, but also a lure for fishing too!\p"
	.string "For ¥1500, this absentminded animal is\n"
	.string "all yours!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_14:
# 157 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Slowpoke!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_15:
# 172 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is courtesy of\n"
	.string "Tidalcove's sandy shore...\p"
	.string "Shellder, the Bivalve Pokémon!\p"
	.string "Its tender, soft body is enveloped by\n"
	.string "diamond-hard shell, said to have once\l"
	.string "been used by our ancestors to craft\l"
	.string "shields!\p"
	.string "For ¥2,000, this tiny tanky mollusk is\n"
	.string "all yours for the taking!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_16:
# 193 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Shellder!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_17:
# 208 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Our catch of the day is none other than\n"
	.string "the king of losers himself, Magikarp!\p"
	.string "For the low-low price of ¥500, you too\n"
	.string "can wear the crown of loserdom!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_18:
# 227 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "You received a Magikarp!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_19:
# 244 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Tight lines!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0:
# 257 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Well, if you ever change your mind, I'll\n"
	.string "always be here!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0:
# 263 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, I can't sell them for any less\n"
	.string "than 2500¥.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0:
# 300 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "W-What!? Could it be...!? The LEGENDARY\n"
	.string "Gyarados in all of its glory!? T-Trainer!\l"
	.string "You MUST let me have it! H-Here, I'll\l"
	.string "even give you my prized Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_1:
# 312 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Finally... I have a Gyarados all of my\n"
	.string "own... I can rest easy now, knowing that\l"
	.string "I have one of the rarest water Pokémon\l"
	.string "known to mankind!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0:
# 332 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "Unless you've a Gyarados to show me, go\n"
	.string "away!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0:
# 338 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "C-Come on, man! Do me a solid!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro::
# 249 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy there, trainer! I'm Arnie,\n"
	.string "renowned fishing guru and president of\l"
	.string "the Fishing Fanatics!\p"
	.string "{COLOR DARK_GRAY}Would you like to join us? It's only\n"
	.string "¥2500 for a membership!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub::
# 269 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Congrats! You're a Fishing Fanatic now!\n"
	.string "Here's a little welcome gift from me.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro::
# 275 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}That right there is a custom-made\n"
	.string "fishing rod hand-crafted by yours\l"
	.string "truly.\p"
	.string "{COLOR DARK_GRAY}It's proof of your admission to our\n"
	.string "AWEsome club!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk::
# 317 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
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
# 349 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Nothing beats Arnie's custom-made\n"
	.string "rods. They're positively remarkable.$"
