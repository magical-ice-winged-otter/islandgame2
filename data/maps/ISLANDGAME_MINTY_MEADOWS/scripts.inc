ISLANDGAME_MINTY_MEADOWS_MapScripts::
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 11 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
	return


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign::
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_Trainer1::
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer3::
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer4::
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer6::
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer7::
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer8::
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_FlabebeRed::
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_RED, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_1
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1:
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5:
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_1
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6:
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_1
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1


ISLANDGAME_MINTY_MEADOWS_FlabebeOrange::
# 104 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 105 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 107 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_ORANGE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_2
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1:
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5:
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_2
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6:
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_2
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1


ISLANDGAME_MINTY_MEADOWS_FlabebeYellow::
# 134 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 136 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_YELLOW, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 141 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6
# 157 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_3
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1:
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5:
# 151 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_3
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6:
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_3
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1


ISLANDGAME_MINTY_MEADOWS_FlabebeBlue::
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_BLUE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 168 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 173 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_4
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1:
# 190 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5:
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_4
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6:
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_4
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1


ISLANDGAME_MINTY_MEADOWS_FlabebeWhite::
# 194 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 195 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_WHITE, 8, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 200 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 202 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3
# 208 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4
# 210 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5
# 213 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6
# 217 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_5
# 218 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1:
# 220 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5:
# 211 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_5
# 212 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6:
# 214 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_TEMP_5
# 215 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{LEFT_ARROW} MAPLEGROVE\n"
	.string "{RIGHT_ARROW} MINTY MEADOWS$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Lizzy: Ugh! Worst date ever!\pOwen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3:
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2:
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0:
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1:
# 40 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2:
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "How dare you come between me and Her\nMajesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Vespiquen!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2:
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "It's hard to concentrate in battle when\nyou're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2:
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
