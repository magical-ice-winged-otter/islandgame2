ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay::
# 19 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 21 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0
# 25 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 28 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight::
# 32 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 35 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 39 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitmovement 0
# 40 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 41 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny::
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 46 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 47 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0
# 51 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 52 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster::
# 56 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 57 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 58 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_unset FLAG_TEMP_3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2
# 64 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1:
# 69 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 70 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2:
# 59 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie::
# 74 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 75 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0
# 78 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 79 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo::
# 84 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 85 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0
# 88 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 89 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman::
# 93 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 94 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 95 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_set FLAG_DAILY_BELLEHAVEN_ADOPTION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_2
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_1:
# 102 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_1, MSGBOX_YESNO
# 106 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_5
# 112 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3
# 115 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_4:
# 118 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
MrHerriman_AdoptionList:
# 119 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	showmoneybox 17, 1
# 120 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_4, 0
# 121 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_5, 1
# 122 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_6, 2
# 123 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_7, 3
# 124 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_8, 4
# 125 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultipush ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_9, 5
# 126 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 127 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	switch VAR_RESULT
# 128 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 1, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_10
# 155 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 2, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_11
# 182 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_12
# 209 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 4, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_13
# 236 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	case 5, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_14
# 263 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3
# 266 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8:
# 269 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
MrHerriman_End:
# 270 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 271 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 272 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_2:
# 96 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0
# 99 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_1

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_5:
# 107 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_2
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_4

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_10:
# 129 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 130 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_17
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_16:
# 136 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 137 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 138 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 139 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 140 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 141 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 142 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 143 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_PICHU, 1, ITEM_ORAN_BERRY, , NUM_NATURES, 2, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_VOLT_TACKLE, MOVE_SURF, MOVE_FLY
# 144 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PICHU
# 146 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_11
# 147 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 148 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 150 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 153 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 154 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_11:
# 156 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 157 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_20
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_19:
# 163 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 164 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 165 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 166 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 167 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 168 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 169 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 170 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_AZURILL, 1, ITEM_LEPPA_BERRY, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_BELLY_DRUM, MOVE_SUPERPOWER, MOVE_WATER_GUN
# 171 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
# 173 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_13
# 174 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 175 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 177 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 180 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 181 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_12:
# 183 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 184 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_23
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_22:
# 190 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 191 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 192 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 193 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 194 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 195 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 196 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 197 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_TOGEPI, 1, ITEM_RAGE_CANDY_BAR, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_NASTY_PLOT, MOVE_GROWL, MOVE_CHARM, MOVE_NONE
# 198 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_14
# 201 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 202 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 204 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 207 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 208 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_13:
# 210 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 211 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_26
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_25:
# 217 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 218 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 219 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 220 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 221 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 222 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 223 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 224 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_WYNAUT, 1, ITEM_LIECHI_BERRY, , NUM_NATURES, 0, , , , , , , , , , , , , 
# 225 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 226 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WYNAUT
# 227 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_15
# 228 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 229 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 231 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 234 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 235 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_14:
# 237 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	checkmoney 10000
# 238 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_29
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_28:
# 244 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	removemoney 10000
# 245 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	updatemoneybox
# 246 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_SHOP
# 247 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 248 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playse SE_VEND
# 249 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitse
# 250 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	hidemoneybox
# 251 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	givemon SPECIES_TYROGUE, 1, ITEM_FOCUS_BAND, , NUM_NATURES, 1, , , , , , , , 31, 31, 31, 31, 31, 31, MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN
# 252 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 253 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
# 254 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_16
# 255 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	waitfanfare
# 256 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 257 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12
# 260 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_DAILY_BELLEHAVEN_ADOPTION
# 261 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_8

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_17:
# 131 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 134 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_16

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_20:
# 158 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 161 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_19

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_23:
# 185 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 188 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_22

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_26:
# 212 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 215 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_25

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_29:
# 239 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10
# 242 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto MrHerriman_End
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_28


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0:
# 23 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I LIEK CEREAL!!!!!!!!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0:
# 36 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Mmmmmm...{PAUSE 60} chocolat melk$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0:
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "COCO COCO COCO COCO!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0:
# 60 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Oh-ho-ho, these baby Pokémon are\n"
	.string "always so full of energy. I envy it.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1:
# 65 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Hello dearie! All of the Pokémon have\n"
	.string "gone to bed.\p"
	.string "I'm afraid you'll have to come back\n"
	.string "during the day if you'd like to adopt.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0:
# 76 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "BLOO!!!{PAUSE 30} GET YOUR BOUNCY BEHIND OVER\n"
	.string "HERE AND CLEAN UP THE MESS YOU MADE!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0:
# 86 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{COLOR RED}(Contrary to its appearance, it's just a\n"
	.string "toy that looks like a Sudowoodo.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0:
# 97 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Our policy is one adoption per customer\n"
	.string "per day. Please come back tomorrow if\l"
	.string "you would like to adopt another.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_1:
# 103 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Good day, young trainer. I am Mr.\n"
	.string "Herriman, the head of this foster home.\p"
	.string "Are you looking to adopt a Pokémon? The\n"
	.string "fee is ¥10,000.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_2:
# 108 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Splendid! Who shall be your choice?$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_3:
# 113 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Righty oh. Inform me when you have made\n"
	.string "a decision.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_4:
# 120 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I'll choose later!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_5:
# 121 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Pichu$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_6:
# 122 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Azurill$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_7:
# 123 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Togepi$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_8:
# 124 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Wynaut$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_9:
# 125 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Tyrogue$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_10:
# 132 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "My apologies, but you must have the\n"
	.string "necessary funds to pay the fee.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_11:
# 146 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Pichu!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_12:
# 151 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I wish all the best for you and your new\n"
	.string "companion, young trainer.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_13:
# 173 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted an Azurill!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_14:
# 200 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Togepi!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_15:
# 227 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Wynaut!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_16:
# 254 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "You adopted a Tyrogue!$"
