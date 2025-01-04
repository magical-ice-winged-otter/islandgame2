ISLANDGAME_MINTY_MEADOWS_MapScripts::
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_FIXED
	return


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign::
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_Trainer1::
# 18 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2
# 19 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer3::
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer4::
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1
# 39 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer6::
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer7::
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer8::
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_FlabebeRed::
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_RED, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1:
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5:
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6:
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1


ISLANDGAME_MINTY_MEADOWS_FlabebeOrange::
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_ORANGE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 104 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 105 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 107 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6
# 120 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1:
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5:
# 116 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6:
# 118 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1


ISLANDGAME_MINTY_MEADOWS_FlabebeYellow::
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_YELLOW, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 131 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 134 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6
# 147 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1:
# 149 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5:
# 143 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6:
# 145 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1


ISLANDGAME_MINTY_MEADOWS_FlabebeBlue::
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_BLUE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 157 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 158 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 161 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6
# 174 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1:
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5:
# 170 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6:
# 172 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1


ISLANDGAME_MINTY_MEADOWS_FlabebeWhite::
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_WHITE, 8, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 185 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 188 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3
# 194 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6
# 201 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1:
# 203 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5:
# 197 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6:
# 199 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0:
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{LEFT_ARROW} MAPLEGROVE\n"
	.string "{RIGHT_ARROW} MINTY MEADOWS$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0:
# 18 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
# 18 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Lizzy: Ugh! Worst date ever!\pOwen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
# 18 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3:
# 19 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2:
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0:
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1:
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2:
# 39 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "How dare you come between me and Her\nMajesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Vespiquen!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0:
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1:
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0:
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1:
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "It's hard to concentrate in battle when\nyou're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
