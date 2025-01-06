ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts::
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_2, ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_2, ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setmetatile 42, 5, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setmetatile 14, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Salt::
# 13 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_2, ISLANDGAME_LUMINE_CAVE_1F_2_Salt_2
# 21 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Salt_Text_0
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_1F_2_Salt_1:
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Salt_2:
# 15 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 16 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setmetatile 42, 5, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 17 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	special DrawWholeMapView
# 18 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_2
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Salt_1


ISLANDGAME_LUMINE_CAVE_1F_2_Shell::
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 31 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_2, ISLANDGAME_LUMINE_CAVE_1F_2_Shell_2
# 38 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Shell_Text_0
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_1F_2_Shell_1:
# 43 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Shell_2:
# 32 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 33 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setmetatile 14, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 34 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	special DrawWholeMapView
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_2
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Shell_1


ISLANDGAME_LUMINE_CAVE_1F_2_NPC1::
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_NPC1_Text_0
# 55 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	closemessage
# 56 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_2_NPC2::
# 60 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 61 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_NPC2_Text_0
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	closemessage
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_2_NPC3::
# 69 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 70 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_NPC3_Text_0
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	closemessage
# 75 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr::
# 79 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 80 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	faceplayer
# 81 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	playmoncry SPECIES_GURDURR, CRY_MODE_NORMAL
# 82 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_GURDURR_GIFT, ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_2
# 90 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_1
ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_1:
# 94 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	closemessage
# 95 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_2:
# 83 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_0
# 86 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
# 87 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_LUMINE_CAVE_GURDURR_GIFT
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_1


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1::
# 105 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_3, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_1
# 112 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2::
# 118 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_4, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_1
# 125 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3::
# 132 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_5, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_1
# 139 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4::
# 147 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_6, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_1
# 154 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5::
# 161 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_7, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_1
# 170 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1::
# 181 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 182 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	faceplayer
# 183 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 184 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setcwildbattle 0, SPECIES_ROGGENROLA, 23, ITEM_NONE, NUM_NATURES, 0
# 185 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	playmoncry SPECIES_ROGGENROLA, CRY_MODE_ENCOUNTER
# 186 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	waitmoncry
# 187 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 188 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	dowildbattle
# 189 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 190 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 192 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_3
# 195 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_4
# 197 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_5
# 200 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_6
# 204 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_1
# 205 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_1:
# 207 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_5:
# 198 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_1
# 199 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_6:
# 201 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_1
# 202 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola1_1


ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2::
# 211 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 212 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	faceplayer
# 213 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 214 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setcwildbattle 0, SPECIES_ROGGENROLA, 23, ITEM_NONE, NUM_NATURES, 1
# 215 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	playmoncry SPECIES_ROGGENROLA, CRY_MODE_ENCOUNTER
# 216 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	waitmoncry
# 217 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 218 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	dowildbattle
# 219 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 220 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 222 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_3
# 225 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_4
# 227 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_5
# 230 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_6
# 234 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_2
# 235 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_1:
# 237 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_5:
# 228 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_2
# 229 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_6:
# 231 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_2
# 232 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola2_1


ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3::
# 241 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	lock
# 242 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	faceplayer
# 243 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 244 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setcwildbattle 0, SPECIES_ROGGENROLA, 23, ITEM_HARD_STONE, NUM_NATURES, 2
# 245 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	playmoncry SPECIES_ROGGENROLA, CRY_MODE_ENCOUNTER
# 246 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	waitmoncry
# 247 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 248 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	dowildbattle
# 249 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 250 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 252 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_3
# 255 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_4
# 257 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_5
# 260 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_6
# 264 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_3
# 265 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_1:
# 267 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_3:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_4:
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_5:
# 258 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_3
# 259 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_1

ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_6:
# 261 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	setflag FLAG_TEMP_3
# 262 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Roggenrola3_1


ISLANDGAME_LUMINE_CAVE_1F_2_Salt_Text_0:
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_Shell_Text_0:
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_NPC1_Text_0:
# 53 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Timmy! Take that rock out of your mouth\n"
	.string "this instant!$"

ISLANDGAME_LUMINE_CAVE_1F_2_NPC2_Text_0:
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Bleugh! This doesn't taste like candy\n"
	.string "at all! Brett lied to me!$"

ISLANDGAME_LUMINE_CAVE_1F_2_NPC3_Text_0:
# 71 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Hah! What an idiot! Kids will believe\n"
	.string "anything you tell them!\p"
	.string "I bet he'd believe me if I told him this\n"
	.string "pile of sand is actually sugar...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_0:
# 84 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Durr... {COLOR BLUE}(I found this while mining for\n"
	.string "ore. You can have it.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_1:
# 91 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Durr. {COLOR BLUE}(Chaperoning kids is tough work. I\n"
	.string "hope my trainer is being paid well.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_0:
# 107 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "You thought it was a pile of Cave Salt,\n"
	.string "but it was me, Ninja Boy Dioh!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_1:
# 110 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "WRRRRRRRYYYYY$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_2:
# 113 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "I'm parodying my favorite animated\n"
	.string "show. It's fun to reference it.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_0:
# 120 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "I'm on my way to see Serafina in\n"
	.string "Aetheria. She's hosting a stream!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_1:
# 123 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "I guess I could just watch it on my\n"
	.string "phone...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_2:
# 126 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "This cave is soooo long. I don't know\n"
	.string "why we can't just have a direct path\l"
	.string "from Applevine to Aetheria.\p"
	.string "Seems like a major design flaw to me...\n"
	.string "but I'm no engineer.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_0:
# 134 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Contrary to popular opinion, I quite\n"
	.string "enjoy the abundance of Zubat in caves.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_1:
# 137 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "I see you have a differing view...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_2:
# 140 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Zubat are quite the fascinating\n"
	.string "Pokémon, utilizing echolocation to\l"
	.string "navigate around rather than the\l"
	.string "traditional sense of sight and smell.\p"
	.string "Interestingly enough, its evolutions of\n"
	.string "Golbat and Crobat do possess eyes, a\l"
	.string "physical feature that is noticeably\l"
	.string "absent from Zubat.\p"
	.string "Pokémon evolution is quite strange, is\n"
	.string "it not?$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_0:
# 149 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Nwehehehehe! You stand no chance\n"
	.string "against my army of RARE Pokémon!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_1:
# 152 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "I-Inconceivable...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_2:
# 155 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "Impossible, impossible, impossible!\p"
	.string "How could I have lost with these\n"
	.string "premium Pokémon!?$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_0:
# 163 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "-ding ding-\p"
	.string "That means get out of my way!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_1:
# 167 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "-ding ding-\p"
	.string "That means I surrender.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_2:
# 171 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_2/scripts.pory"
	.string "-ding ding-\p"
	.string "That didn't mean anything. It's just fun\n"
	.string "to ring the bell.\p"
	.string "-ding ding-$"
