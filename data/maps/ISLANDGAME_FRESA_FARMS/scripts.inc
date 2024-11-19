ISLANDGAME_FRESA_FARMS_MapScripts::
# 7 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 26 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_A
# 27 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_B
# 28 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	gettime
# 30 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 30 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 35 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 31 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_1
# 32 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectxyperm 6, 18, 6
	return


ISLANDGAME_FRESA_FARMS_Daycare_Mon1::
# 43 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text, MSGBOX_NPC
# 45 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Daycare_Mon2::
# 53 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text, MSGBOX_NPC
# 55 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Sign::
# 100 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_FRESA_FARMS_Miltank_Interact::
# 111 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Miltank_Interact_2
# 116 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 117 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 118 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 119 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1
ISLANDGAME_FRESA_FARMS_Miltank_Interact_1:
# 121 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 122 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Miltank_Interact_2:
# 112 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 113 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0
	goto ISLANDGAME_FRESA_FARMS_Miltank_Interact_1


ISLANDGAME_FRESA_FARMS_Chansey_Interact::
# 126 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 127 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 128 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 129 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0
# 130 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep1::
# 134 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 135 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 136 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Mareep1_2
# 149 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_2
ISLANDGAME_FRESA_FARMS_Mareep1_1:
# 152 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Mareep1_2:
# 137 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_0
# 138 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 139 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_PIN
# 140 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 141 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 2, Common_Movement_Delay32
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
# 144 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_1
# 145 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 146 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
	goto ISLANDGAME_FRESA_FARMS_Mareep1_1


ISLANDGAME_FRESA_FARMS_Mareep2::
# 156 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 157 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 158 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 159 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep2_Text_0
# 160 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 161 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep3::
# 165 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 166 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 167 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 168 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_unset FLAG_FRESA_FARMS_MAREEP_GIFT, ISLANDGAME_FRESA_FARMS_Mareep3_2
# 180 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_2
ISLANDGAME_FRESA_FARMS_Mareep3_1:
# 183 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Mareep3_2:
# 169 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_0
# 170 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	checkitemspace ITEM_ELECTRIC_GEM
# 171 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_Mareep3_5
# 175 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_FRESA_FARMS_MAREEP_GIFT
# 176 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto ISLANDGAME_FRESA_FARMS_Mareep3_1

ISLANDGAME_FRESA_FARMS_Mareep3_5:
# 172 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_1
	goto ISLANDGAME_FRESA_FARMS_Mareep3_1


ISLANDGAME_FRESA_FARMS_Mareep4::
# 187 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 188 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 189 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 190 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep4_Text_0
# 191 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 192 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor::
# 196 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 197 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 198 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0
# 201 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	showmoneybox 0, 0
# 202 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1, MSGBOX_YESNO
# 205 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_2
ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1:
# 226 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
MilkVendor_End:
# 227 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
# 228 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 229 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_2:
# 206 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	checkmoney 7000
# 207 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_4
# 214 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	removemoney 7000
# 215 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_SHOP
# 216 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitse
# 217 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	updatemoneybox
# 218 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
# 219 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 6
# 220 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_3
	goto ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_4:
# 208 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_2
# 211 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto MilkVendor_End
	goto ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1


ISLANDGAME_FRESA_FARMS_Torchic::
# 233 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 234 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 235 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 236 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_FRESA_FARMS_Torchic_2
ISLANDGAME_FRESA_FARMS_Torchic_1:
# 241 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 242 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Torchic_2:
# 237 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Torchic_Text_0
	goto ISLANDGAME_FRESA_FARMS_Torchic_1


ISLANDGAME_FRESA_FARMS_Tepig::
# 246 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 247 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_FRESA_FARMS_Tepig_2
# 253 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 254 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_NORMAL
# 255 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Tepig_Text_1
ISLANDGAME_FRESA_FARMS_Tepig_1:
# 259 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 260 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Tepig_2:
# 248 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Tepig_Text_0
	goto ISLANDGAME_FRESA_FARMS_Tepig_1


ISLANDGAME_FRESA_FARMS_Mudsdale::
# 264 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 265 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 266 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 267 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mudsdale_Text_0
# 270 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 271 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Dude::
# 275 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 276 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 277 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Dude_Text_0
# 280 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 281 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Boy::
# 285 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 286 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 287 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Boy_Text_0
# 292 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 293 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Girl::
# 298 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 299 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 300 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_FRESA_FARMS_TRADE_DONE, ISLANDGAME_FRESA_FARMS_Girl_2
ISLANDGAME_FRESA_FARMS_Girl_1:
# 305 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_FRESA_FARMS_Girl_5
ISLANDGAME_FRESA_FARMS_Girl_4:
# 317 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_2
# 321 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 322 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setvar VAR_0x8000, SPECIES_EEVEE
# 323 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	callnative CheckPartyMon
# 324 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_Girl_8
ISLANDGAME_FRESA_FARMS_Girl_7:
# 343 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeEnd
# 346 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FresaFarms_TradeInitiate:
# 347 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FIDOUGH
# 348 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 349 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 350 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 351 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	special ChoosePartyMon
# 352 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitstate
# 353 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 354 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_FRESA_FARMS_Girl_14
ISLANDGAME_FRESA_FARMS_Girl_13:
# 357 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 358 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 359 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 360 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne ISLANDGAME_FRESA_FARMS_Girl_20
ISLANDGAME_FRESA_FARMS_Girl_19:
# 366 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 367 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 368 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	special CreateInGameTradePokemon
# 369 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	special DoInGameTradeScene
# 370 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitstate
# 371 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 372 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_4
# 375 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_FRESA_FARMS_TRADE_DONE
# 377 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FresaFarms_TradeDecline:
# 378 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_5
# 381 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FresaFarms_TradeEnd:
# 382 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 383 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Girl_2:
# 301 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_0
	goto ISLANDGAME_FRESA_FARMS_Girl_1

ISLANDGAME_FRESA_FARMS_Girl_5:
# 306 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_1, MSGBOX_YESNO
# 310 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_Girl_10
# 314 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeDecline
	goto ISLANDGAME_FRESA_FARMS_Girl_4

ISLANDGAME_FRESA_FARMS_Girl_8:
# 325 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_3
# 326 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_PIN
# 327 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 328 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
# 329 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 1, Common_Movement_Delay32
# 330 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
# 331 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_1, MSGBOX_YESNO
# 335 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_Girl_16
# 339 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeDecline
	goto ISLANDGAME_FRESA_FARMS_Girl_7

ISLANDGAME_FRESA_FARMS_Girl_10:
# 311 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeInitiate
	goto ISLANDGAME_FRESA_FARMS_Girl_4

ISLANDGAME_FRESA_FARMS_Girl_14:
# 355 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeDecline
	goto ISLANDGAME_FRESA_FARMS_Girl_13

ISLANDGAME_FRESA_FARMS_Girl_16:
# 336 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeInitiate
	goto ISLANDGAME_FRESA_FARMS_Girl_7

ISLANDGAME_FRESA_FARMS_Girl_20:
# 361 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_3
# 364 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeEnd
	goto ISLANDGAME_FRESA_FARMS_Girl_19


ISLANDGAME_FRESA_FARMS_Sign_Text_0:
# 100 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "FRESA FARMS\n"
	.string "Paulie and Marion$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0:
# 113 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR RED}(Miltank is fast asleep.)$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1:
# 119 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Moo. {COLOR BLUE}(Moo.)$"

ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0:
# 129 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Chansey. {COLOR BLUE}(Most humans can't understand\n"
	.string "us, but some are born with a special\l"
	.string "ability to comprehend what Pokémon are\l"
	.string "saying.)\p"
	.string "{COLOR DARK_GRAY}Chansey. {COLOR BLUE}(You're one of them,{PAUSE 30} aren't\n"
	.string "you?)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_0:
# 137 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reeep. {COLOR BLUE}(Heh. That dumb dog's snoozing\n"
	.string "on his job again!)\p"
	.string "{COLOR DARK_GRAY}Reep reep. {COLOR BLUE}(Time to sneak out and have\n"
	.string "some fun with Chansey...)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh?)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_1:
# 144 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(Oh, it's just a random kid. Good\n"
	.string "thing they can't understand me.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(Go away! I've got big plans for\n"
	.string "tonight!)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Oh wait... They don't understand\n"
	.string "me.)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_2:
# 149 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(This mutt is a pain in my fluffy\n"
	.string "behind...)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(I got important business to\n"
	.string "attend to at night!)$"

ISLANDGAME_FRESA_FARMS_Mareep2_Text_0:
# 159 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(I'm just saying man, if it was me\n"
	.string "against that Mightyena, hoo boy.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(I would'a messed that Mightyena\n"
	.string "up real good, ya feel me?)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh? Why are you looking me like\n"
	.string "that? I'm fo' realzies!)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_0:
# 169 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep! {COLOR BLUE}(Hey there! Thanks for saving my\n"
	.string "butt from that scary Mightyena.)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Please take this as a gift.)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_1:
# 172 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(Oh, you don't have enough space\n"
	.string "for this.)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_2:
# 180 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(I found it wandering around\n"
	.string "today. Hope it helps you out!)$"

ISLANDGAME_FRESA_FARMS_Mareep4_Text_0:
# 190 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "GIRIGIRI WARUKUNAI WATAME!!!$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0:
# 199 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Our milk is sourced from the healthiest\n"
	.string "Miltank in all of Marya, Lady Moona!$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1:
# 203 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "We are selling it in packs of six for\n"
	.string "only ¥7000! Would you like a pack?{PAUSE 30}$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_2:
# 209 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Oh dear, you don't have enough money,\n"
	.string "sweetie.$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_3:
# 221 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_FRESA_FARMS_Torchic_Text_0:
# 238 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Kikiriki!$"

ISLANDGAME_FRESA_FARMS_Tepig_Text_0:
# 249 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR RED}(Tepig is busy chowing down a bowl of\n"
	.string "well-done berries.)$"

ISLANDGAME_FRESA_FARMS_Tepig_Text_1:
# 256 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "hois$"

ISLANDGAME_FRESA_FARMS_Mudsdale_Text_0:
# 268 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Hee-haw! {COLOR BLUE}(Hee-ho!)$"

ISLANDGAME_FRESA_FARMS_Dude_Text_0:
# 278 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "I wonder what came first... the Pokémon,\n"
	.string "or the egg?$"

ISLANDGAME_FRESA_FARMS_Boy_Text_0:
# 288 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "By breeding two Pokémon in the same\n"
	.string "family together, sometimes its child\l"
	.string "will inherit one of its parents' moves!\p"
	.string "These inherited moves are called egg\n"
	.string "moves, and most of them can't be\l"
	.string "learned any other way!\p"
	.string "My Tepig knows a “super powerful” move\n"
	.string "thanks to its mom! Isn't that awesome?$"

ISLANDGAME_FRESA_FARMS_Girl_Text_0:
# 302 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Fidough are real useful to us farmers!\n"
	.string "When they evolve into Dachsbun, their\l"
	.string "aroma helps our wheat plants grow!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_1:
# 307 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Oh! Is that a Squirtle I see?\p"
	.string "Are you willing to trade it by chance?\n"
	.string "I've gotta cute lil doggo right here to\l"
	.string "make it worth your while!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_2:
# 318 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Phew... gardening's a lot tougher than it\n"
	.string "looks!\p"
	.string "Wish I had a water Pokémon like a\n"
	.string "{COLOR LIGHT_BLUE}Squirtle {COLOR DARK_GRAY}to help me do it instead...$"

ISLANDGAME_FRESA_FARMS_Girl_Text_3:
# 362 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Eh? That's not a Squirtle.$"

ISLANDGAME_FRESA_FARMS_Girl_Text_4:
# 373 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Woooo! Thanks a ton, friend! Hope ya\n"
	.string "like your new pup as well! Careful not to\l"
	.string "stick your fingers too close to her\l"
	.string "mouth though, she's a biter!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_5:
# 379 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Aw, shucks.$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text::
# 48 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{STR_VAR_1} looks happy!$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text::
# 58 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{STR_VAR_2} stares at you intently.$"
