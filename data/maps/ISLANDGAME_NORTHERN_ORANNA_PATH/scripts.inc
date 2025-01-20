ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts::
# 5 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_4
# 14 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_5
# 15 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_6
# 16 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_7
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign::
# 26 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign::
# 30 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch::
# 34 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast::
# 39 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 41 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0, MSGBOX_NPC
# 46 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 47 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest::
# 51 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 52 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 53 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0
# 59 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 60 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmovement 0
# 61 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1::
# 68 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1
# 72 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2::
# 76 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_double TRAINER_NORANNA_2, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2
# 81 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3::
# 85 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_3, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1
# 89 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4::
# 93 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_4, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1
# 97 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5::
# 101 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_5, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1
# 105 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6::
# 109 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_6, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1
# 113 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7::
# 117 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_7, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1
# 121 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest::
# 125 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1
# 129 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average::
# 134 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 135 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 136 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 137 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_AVERAGE, 18, ITEM_NONE, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 138 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_AVERAGE, CRY_MODE_ENCOUNTER
# 139 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 140 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 141 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 142 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 143 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 145 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3
# 148 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4
# 150 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5
# 152 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6
# 155 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1:
# 157 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5:
# 151 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6:
# 153 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large::
# 161 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 162 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 163 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 164 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_LARGE, 19, ITEM_NONE, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 165 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_LARGE, CRY_MODE_ENCOUNTER
# 166 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 167 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 168 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 169 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 170 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 172 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3
# 175 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4
# 177 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5
# 179 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6
# 182 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1:
# 184 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5:
# 178 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6:
# 180 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small::
# 188 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 189 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 190 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 191 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_SMALL, 17, ITEM_NONE, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 192 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SMALL, CRY_MODE_ENCOUNTER
# 193 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 194 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 195 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 196 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 197 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 199 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 200 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3
# 202 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4
# 204 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5
# 206 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6
# 209 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1:
# 211 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5:
# 205 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6:
# 207 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super::
# 215 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 216 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 217 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 218 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_SUPER, 20, ITEM_COLBUR_BERRY, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 219 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SUPER, CRY_MODE_ENCOUNTER
# 220 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 221 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 222 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 223 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 224 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 226 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 227 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3
# 229 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4
# 231 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5
# 233 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6
# 236 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1:
# 238 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5:
# 232 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6:
# 234 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0:
# 26 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "NORTHERN ORANNA PATH\n"
	.string "{LEFT_ARROW}ROSEVALE / TIDALCOVE{RIGHT_ARROW}$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign_Text_0:
# 30 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "XTREEM FITNESS AREA\n"
	.string "DO NOT TOUCH EQUIPMENT!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch_Text_0:
# 34 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "tuch$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0:
# 42 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "My buddy across the lake thinks he can\n"
	.string "catch more Pokémon than me!\p"
	.string "I've been fishing in this lake since I\n"
	.string "was a little Tympole. He's toast!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0:
# 54 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I challenged my mate to a fishing\n"
	.string "contest today.\p"
	.string "He doesn't know I have a super special\n"
	.string "fishing rod from Arnie's.\p"
	.string "Meanwhile he's still using his crusty old\n"
	.string "weathered rod! He's done for!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0:
# 69 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "My girlfriend just broke up with me, so\n"
	.string "I'm sulking in here.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1:
# 70 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Today's just not my day...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2:
# 72 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Whelp... Time to head back home. Some\n"
	.string "livestreams oughta cheer me up.\p"
	.string "I've been really enjoying Serafina's\n"
	.string "streams recently.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0:
# 77 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Ruka is mid at best. I don't see\n"
	.string "what's so great about a 6/10.\p"
	.string "Rue: I know right? She's so overrated.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1:
# 78 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Ugh, I can't even with this right\nnow.\pRue: For real, battling is such an\neffort.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2:
# 79 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: We aren't fighting you unless you\n"
	.string "got two Pokémon, dork.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3:
# 81 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Leave us alone, dorkahauntus.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0:
# 86 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mweheheh, I've gotta whole heap of\n"
	.string "spooky scary Pumpkaboos!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1:
# 87 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Party pooper.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2:
# 89 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I've been tryin'ta find me a super\n"
	.string "Pumpkaboo all gosh darn day.\p"
	.string "They've gots to be hidin' somewhere\n"
	.string "here...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0:
# 94 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Hooh! Haah! Hooh! Haah! I'm in the middle\n"
	.string "of my training arc!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1:
# 95 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Looks like I still have a lot to learn.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2:
# 97 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Just a few more training montages and\n"
	.string "filler episodes, and I'll be ready!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0:
# 102 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "MOVE! MOVE! GET OUT THE WAY! GET OUT\n"
	.string "THE WAY GET OUT THE WAY$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1:
# 103 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Wow, it's a lot harder to battle while\nyou're running.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2:
# 105 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I can't achieve Ruka status unless I\n"
	.string "run a mile every day.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0:
# 110 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Take a look at my Pokémon! Don't be shy!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1:
# 111 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Hooh. That was fun!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2:
# 113 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I have to keep my dialogue\n"
	.string "family-friendly and generic because of\l"
	.string "my kid.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0:
# 118 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I have seen the future! You will lose!\n"
	.string "IT'S NO USE!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1:
# 119 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "B-But how? This was not in my vision...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2:
# 121 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Could it be... that my vision was false?\n"
	.string "I will need to consult my manual.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0:
# 126 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "STAY AWAY FROM MY PUDDLE!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1:
# 127 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "NOOOOO MY PUDDLE$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2:
# 129 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "...I'm still not gonna share it with you.$"
