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
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0, MSGBOX_NPC
# 44 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest::
# 49 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 50 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0
# 56 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 57 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmovement 0
# 58 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1::
# 65 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1
# 69 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2::
# 73 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_double TRAINER_NORANNA_2, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2
# 78 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3::
# 82 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_3, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1
# 86 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4::
# 90 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_4, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1
# 94 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5::
# 98 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_5, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1
# 102 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6::
# 106 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_6, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1
# 110 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7::
# 114 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_7, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1
# 118 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest::
# 122 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1
# 126 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average::
# 131 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 132 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 133 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 134 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_PUMPKABOO_AVERAGE, 18, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 135 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_AVERAGE, CRY_MODE_ENCOUNTER
# 136 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 137 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 138 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 139 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 140 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 142 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3
# 145 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4
# 147 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5
# 149 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6
# 152 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1:
# 154 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5:
# 148 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6:
# 150 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large::
# 158 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 159 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 160 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 161 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_PUMPKABOO_LARGE, 19, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 162 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_LARGE, CRY_MODE_ENCOUNTER
# 163 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 164 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 165 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 166 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 167 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 169 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3
# 172 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4
# 174 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5
# 176 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6
# 179 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1:
# 181 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5:
# 175 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6:
# 177 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small::
# 185 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 186 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 187 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 188 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_PUMPKABOO_SMALL, 17, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 189 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SMALL, CRY_MODE_ENCOUNTER
# 190 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 191 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 192 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 193 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 194 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 196 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3
# 199 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4
# 201 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5
# 203 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6
# 206 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1:
# 208 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5:
# 202 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6:
# 204 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super::
# 212 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	lock
# 213 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	faceplayer
# 214 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 215 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setcwildbattle 0, SPECIES_PUMPKABOO_SUPER, 20, ITEM_COLBUR_BERRY, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
# 216 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SUPER, CRY_MODE_ENCOUNTER
# 217 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	waitmoncry
# 218 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 219 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	dowildbattle
# 220 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 221 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 223 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3
# 226 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4
# 228 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5
# 230 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6
# 233 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1:
# 235 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5:
# 229 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6:
# 231 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
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
# 40 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "My buddy across the lake thinks he can\n"
	.string "catch more Pokémon than me!\p"
	.string "I've been fishing in this lake since I\n"
	.string "was a little Tympole. He's toast!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0:
# 51 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I challenged my mate to a fishing\n"
	.string "contest today.\p"
	.string "He doesn't know I have a super special\n"
	.string "fishing rod from Arnie's.\p"
	.string "Meanwhile he's still using his crusty old\n"
	.string "weathered rod! He's done for!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0:
# 66 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "My girlfriend just broke up with me, so\n"
	.string "I'm sulking in here.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1:
# 67 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Today's just not my day...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2:
# 69 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Whelp... Time to head back home. Some\n"
	.string "livestreams oughta cheer me up.\p"
	.string "I've been really enjoying Serafina's\n"
	.string "streams recently.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0:
# 74 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Ruka is mid at best. I don't see\n"
	.string "what's so great about a 6/10.\p"
	.string "Rue: I know right? She's so overrated.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1:
# 75 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Ugh, I can't even with this right\nnow.\pRue: For real, battling is such an\neffort.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2:
# 76 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: We aren't fighting you unless you\n"
	.string "got two Pokémon, dork.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3:
# 78 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mai: Leave us alone, dorkahauntus.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0:
# 83 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Mweheheh, I've gotta whole heap of\n"
	.string "spooky scary Pumpkaboos!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1:
# 84 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Party pooper.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2:
# 86 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I've been tryin'ta find me a super\n"
	.string "Pumpkaboo all gosh darn day.\p"
	.string "They've gots to be hidin' somewhere\n"
	.string "here...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0:
# 91 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Hooh! Haah! Hooh! Haah! I'm in the middle\n"
	.string "of my training arc!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1:
# 92 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Looks like I still have a lot to learn.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2:
# 94 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Just a few more training montages and\n"
	.string "filler episodes, and I'll be ready!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0:
# 99 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "MOVE! MOVE! GET OUT THE WAY! GET OUT\n"
	.string "THE WAY GET OUT THE WAY$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1:
# 100 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Wow, it's a lot harder to battle while\nyou're running.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2:
# 102 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I can't achieve Ruka status unless I\n"
	.string "run a mile every day.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0:
# 107 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Take a look at my Pokémon! Don't be shy!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1:
# 108 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Hooh. That was fun!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2:
# 110 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I have to keep my dialogue\n"
	.string "family-friendly and generic because of\l"
	.string "my kid.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0:
# 115 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "I have seen the future! You will lose!\n"
	.string "IT'S NO USE!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1:
# 116 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "B-But how? This was not in my vision...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2:
# 118 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "Could it be... that my vision was false?\n"
	.string "I will need to consult my manual.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0:
# 123 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "STAY AWAY FROM MY PUDDLE!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1:
# 124 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "NOOOOO MY PUDDLE$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2:
# 126 "data/maps/ISLANDGAME_NORTHERN_ORANNA_PATH/scripts.pory"
	.string "...I'm still not gonna share it with you.$"
