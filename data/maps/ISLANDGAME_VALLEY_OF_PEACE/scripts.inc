ISLANDGAME_VALLEY_OF_PEACE_MapScripts::
# 5 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_6
# 16 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_7
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_4
# 11 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_5
	return


ISLANDGAME_VALLEY_OF_PEACE_Sign::
# 23 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC1::
# 30 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 31 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0
# 34 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 35 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC2::
# 39 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0
# 43 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	closemessage
# 44 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer1::
# 51 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_1, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1
# 58 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer2::
# 64 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_2, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1
# 71 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer3::
# 77 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_3, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1
# 84 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer4::
# 90 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_4, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1
# 99 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5::
# 105 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1
# 112 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2::
# 118 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1
# 125 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer6::
# 131 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_6, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1
# 138 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer7::
# 145 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_7, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1
# 152 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer8::
# 160 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_8, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1
# 168 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer9::
# 177 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_9, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1
# 184 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1::
# 194 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 195 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 196 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 197 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 0
# 198 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 199 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 200 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 201 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 202 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 203 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3
# 208 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4
# 210 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5
# 212 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6
# 215 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1:
# 217 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_5:
# 211 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_6:
# 213 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2::
# 221 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 222 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 223 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 224 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_SINISTEA_PHONY, 27, ITEM_NONE, NUM_NATURES, 1
# 225 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_SINISTEA, CRY_MODE_ENCOUNTER
# 226 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 227 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 228 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 229 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 230 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 232 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3
# 235 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4
# 237 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5
# 239 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6
# 242 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1:
# 244 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_5:
# 238 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_6:
# 240 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Sinistea2_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1::
# 248 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 249 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 250 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 251 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 0
# 252 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 253 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 254 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 255 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 256 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 257 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 259 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3
# 262 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4
# 264 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5
# 266 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6
# 269 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1:
# 271 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_5:
# 265 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_6:
# 267 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2::
# 275 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 276 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	faceplayer
# 277 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 278 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setcwildbattle 0, SPECIES_POLTCHAGEIST_COUNTERFEIT, 27, ITEM_NONE, NUM_NATURES, 1
# 279 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_ENCOUNTER
# 280 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	waitmoncry
# 281 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 282 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	dowildbattle
# 283 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 284 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 286 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3
# 289 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4
# 291 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5
# 293 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6
# 296 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1:
# 298 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_5:
# 292 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_6:
# 294 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Poltchageist2_1


ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0:
# 24 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "VALLEY OF PEACE\n"
	.string "May the departed find tranquility$"

ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0:
# 32 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "{COLOR RED}(He's mourning the loss of his wife it\n"
	.string "seems. I should leave him be.)$"

ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0:
# 41 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "My darling Clefable...{PAUSE 30} Sometimes I still\n"
	.string "see your shadows around the valley.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0:
# 53 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This valley exudes a powerful aura... Do\n"
	.string "not interrupt my aura farming!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1:
# 56 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "No... my precious aura...!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2:
# 59 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I don't actually know what aura is. I\n"
	.string "just heard kids talking about it and I\l"
	.string "wanted to get with the times.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0:
# 66 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Knowledge is power, and I know a lot.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1:
# 69 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Even in defeat, my knowledge increases!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2:
# 72 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Every loss is an opportunity to learn.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0:
# 79 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Have you also come here to pay\n"
	.string "respects to your fallen comrades?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1:
# 82 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This battle was for you, Aquilla.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2:
# 85 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aquilla was the name of my Staraptor. I\n"
	.string "bet she's flying in the heavens now.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0:
# 92 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Yoooo chat, y'all won't believe what I\n"
	.string "found in the woods!\p"
	.string "AN UN-ALIVED TRAINER!!!\p"
	.string "Huh? Outta my way! Can't you see I'm\n"
	.string "tryna record a video!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1:
# 97 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Bro! Relax! It's not that serious! It's\n"
	.string "just a Pokémon battle!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2:
# 100 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "S-Shut up, chat! Stop spamming that I\n"
	.string "got destroyed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0:
# 107 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "We're here to honor our ol' Miltank for\n"
	.string "providin' milk to our family fer decades.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1:
# 110 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heh... yer as tough of a fighter as she\n"
	.string "was.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2:
# 113 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Remember to cherish the time you spend\n"
	.string "with yer Pokémon. You never know when\l"
	.string "that time will end.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0:
# 120 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I miss our Miltank already... Maybe a\n"
	.string "battle will get my mind off her...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1:
# 123 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "-sniff-\n"
	.string "Well now I just feel even worse...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2:
# 126 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I've known our Miltank since I was just\n"
	.string "a wee li'l sprout... I used to ride on top\l"
	.string "o' her every day. Good times...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0:
# 133 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This is MY territory, punk! I'll teach\n"
	.string "you to come here uninvited!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1:
# 136 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Tch... you got lucky, punk!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2:
# 139 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Those jerks from the Goon Gang didn't\n"
	.string "let me join their gang 'cause my bike\l"
	.string "wasn't “hip” enough...\p"
	.string "W-Well, I'll show those Gooners! I'll\n"
	.string "just start my own gang, one where ALL\l"
	.string "bikes are allowed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0:
# 147 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heehee... do you see something unique\n"
	.string "about my adorable little ceramics?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1:
# 150 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Mhm! They're both a hundred percent\n"
	.string "authentic!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2:
# 153 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Despite the similarities between\n"
	.string "Sinistea and Poltchageist, they are\l"
	.string "actually completely different species!\p"
	.string "Both of these species also have a\n"
	.string "“fake” and “authentic” form, depending\l"
	.string "on if they have a special seal or not!\p"
	.string "And that's not the only thing special\n"
	.string "about authentic ones...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0:
# 162 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Young trainer-san! I have brought\n"
	.string "great dishonor to my Pokémon!\p"
	.string "Please! Face me in a duel so that I may\n"
	.string "claim redemption!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1:
# 166 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "A shameful performance...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2:
# 169 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I am no longer worthy to wield Pokémon...\p"
	.string "I am sorry, my Gallade. Your master has\n"
	.string "failed you, just like he has failed his\l"
	.string "Bisharp.\p"
	.string "It is time for you to seek a new master.\n"
	.string "One with the strength to protect you.\p"
	.string "Those scoundrels... I will never forgive\n"
	.string "them!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0:
# 179 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aiiiiiiiiiiiiiiiie!{PAUSE 30}\n"
	.string "A g-g-g-g-g-g-g-g-g-GHOOOOOOST!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1:
# 182 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Zoinks!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2:
# 185 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Like, you just totally scared the pants\n"
	.string "off of me, man!$"
