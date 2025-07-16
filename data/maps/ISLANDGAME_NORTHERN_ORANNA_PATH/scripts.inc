ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts::
# 9 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 11 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 12 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 14 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	gettime
# 16 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 20 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_4
# 22 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_5
# 23 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_6
# 24 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_7
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 17 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign::
# 34 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign::
# 38 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch::
# 42 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast::
# 47 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 48 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 49 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0, MSGBOX_NPC
# 54 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 55 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest::
# 59 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 60 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 61 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0
# 67 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 68 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmovement 0
# 69 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1::
# 76 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1
# 80 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2::
# 84 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_double TRAINER_NORANNA_2, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2
# 89 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3::
# 93 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_3, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1
# 97 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4::
# 101 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_4, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1
# 105 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5::
# 109 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_5, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1
# 113 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6::
# 117 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_6, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1
# 121 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7::
# 125 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_7, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1
# 129 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest::
# 133 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1
# 137 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average::
# 142 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 143 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 144 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 145 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_AVERAGE, 18, ITEM_NONE, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 146 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_AVERAGE, CRY_MODE_ENCOUNTER
# 147 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 148 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 149 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 150 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 151 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 153 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3
# 156 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4
# 158 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5
# 160 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6
# 163 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1:
# 165 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5:
# 159 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6:
# 161 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large::
# 169 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 170 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 171 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 172 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_LARGE, 19, ITEM_NONE, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 173 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_LARGE, CRY_MODE_ENCOUNTER
# 174 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 175 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 176 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 177 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 178 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 180 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3
# 183 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4
# 185 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5
# 187 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6
# 190 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1:
# 192 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5:
# 186 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6:
# 188 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small::
# 196 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 197 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 198 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 199 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_SMALL, 17, ITEM_NONE, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 200 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SMALL, CRY_MODE_ENCOUNTER
# 201 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 202 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 203 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 204 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 205 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 207 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3
# 210 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4
# 212 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5
# 214 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6
# 217 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1:
# 219 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5:
# 213 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6:
# 215 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super::
# 223 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 224 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 225 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 226 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PUMPKABOO_SUPER, 20, ITEM_COLBUR_BERRY, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0
# 227 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SUPER, CRY_MODE_ENCOUNTER
# 228 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 229 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 230 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 231 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 232 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 234 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3
# 237 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4
# 239 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5
# 241 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6
# 244 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1:
# 246 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5:
# 240 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6:
# 242 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0:
# 34 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "NORTHERN ORANNA PATH\n"
	.string "{LEFT_ARROW}ROSEVALE / TIDALCOVE{RIGHT_ARROW}$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign_Text_0:
# 38 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "XTREEM FITNESS AREA\n"
	.string "DO NOT TOUCH EQUIPMENT!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch_Text_0:
# 42 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "tuch$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0:
# 50 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "My buddy across the lake thinks he can\n"
	.string "catch more Pokémon than me!\p"
	.string "I've been fishing in this lake since I\n"
	.string "was a little Tympole. He's toast!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0:
# 62 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I challenged my mate to a fishing\n"
	.string "contest today.\p"
	.string "He doesn't know I have a super special\n"
	.string "fishing rod from Arnie's.\p"
	.string "Meanwhile he's still using his crusty old\n"
	.string "weathered rod! He's done for!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0:
# 77 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "My girlfriend just broke up with me, so\n"
	.string "I'm sulking in here.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1:
# 78 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Today's just not my day...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2:
# 80 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Whelp... Time to head back home. Some\n"
	.string "livestreams oughta cheer me up.\p"
	.string "I've been really enjoying Serafina's\n"
	.string "streams recently.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0:
# 85 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Ruka is mid at best. I don't see\n"
	.string "what's so great about a 6/10.\p"
	.string "Rue: I know right? She's so overrated.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1:
# 86 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Ugh, I can't even with this right\nnow.\pRue: For real, battling is such an\neffort.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2:
# 87 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: We aren't fighting you unless you\n"
	.string "got two Pokémon, dork.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3:
# 89 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Leave us alone, dorkahauntus.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0:
# 94 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mweheheh, I've gotta whole heap of\n"
	.string "spooky scary Pumpkaboos!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1:
# 95 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Party pooper.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2:
# 97 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I've been tryin'ta find me a super\n"
	.string "Pumpkaboo all gosh darn day.\p"
	.string "They've gots to be hidin' somewhere\n"
	.string "here...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0:
# 102 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Hooh! Haah! Hooh! Haah! I'm in the middle\n"
	.string "of my training arc!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1:
# 103 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Looks like I still have a lot to learn.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2:
# 105 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Just a few more training montages and\n"
	.string "filler episodes, and I'll be ready!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0:
# 110 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "MOVE! MOVE! GET OUT THE WAY! GET OUT\n"
	.string "THE WAY GET OUT THE WAY$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1:
# 111 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Wow, it's a lot harder to battle while\nyou're running.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2:
# 113 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I can't achieve Ruka status unless I\n"
	.string "run a mile every day.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0:
# 118 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Take a look at my Pokémon! Don't be shy!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1:
# 119 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Hooh. That was fun!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2:
# 121 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I have to keep my dialogue\n"
	.string "family-friendly and generic because of\l"
	.string "my kid.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0:
# 126 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I have seen the future! You will lose!\n"
	.string "IT'S NO USE!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1:
# 127 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "B-But how? This was not in my vision...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2:
# 129 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Could it be... that my vision was false?\n"
	.string "I will need to consult my manual.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0:
# 134 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "STAY AWAY FROM MY PUDDLE!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1:
# 135 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "NOOOOO MY PUDDLE$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2:
# 137 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "...I'm still not gonna share it with you.$"
