ISLANDGAME_MINTY_MEADOWS_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign::
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_Trainer1::
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer3::
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer4::
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer6::
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer7::
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer8::
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_FlabebeRed::
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_RED, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 73 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1:
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_5:
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1

ISLANDGAME_MINTY_MEADOWS_FlabebeRed_6:
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeRed_1


ISLANDGAME_MINTY_MEADOWS_FlabebeOrange::
# 94 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 95 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 96 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_ORANGE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 99 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 100 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3
# 108 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5
# 112 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6
# 115 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1:
# 117 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_5:
# 111 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1

ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_6:
# 113 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeOrange_1


ISLANDGAME_MINTY_MEADOWS_FlabebeYellow::
# 121 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 122 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 123 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 124 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_YELLOW, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 125 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 126 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 127 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 128 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 129 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 130 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 132 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3
# 135 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4
# 137 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5
# 139 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6
# 142 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1:
# 144 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_5:
# 138 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1

ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_6:
# 140 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeYellow_1


ISLANDGAME_MINTY_MEADOWS_FlabebeBlue::
# 148 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 149 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 150 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 151 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_BLUE, 8, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
# 152 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 153 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 154 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 155 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 156 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 157 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 159 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3
# 162 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4
# 164 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5
# 166 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6
# 169 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1:
# 171 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_5:
# 165 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1

ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_6:
# 167 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBlue_1


ISLANDGAME_MINTY_MEADOWS_FlabebeWhite::
# 175 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 176 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 177 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 178 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setcwildbattle 0, SPECIES_FLABEBE_WHITE, 8, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
# 179 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE_RED, CRY_MODE_ENCOUNTER
# 180 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 181 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 182 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 183 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 184 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 186 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3
# 189 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4
# 191 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5
# 193 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6
# 196 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1:
# 198 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_3:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_4:
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_5:
# 192 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1

ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_6:
# 194 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeWhite_1


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0:
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{LEFT_ARROW} MAPLEGROVE\n"
	.string "{RIGHT_ARROW} MINTY MEADOWS$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0:
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Lizzy: Ugh! Worst date ever!\pOwen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
# 13 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3:
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2:
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0:
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1:
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2:
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0:
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1:
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "How dare you come between me and Her\nMajesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2:
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Vespiquen!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "It's hard to concentrate in battle when\nyou're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "{COLOR DARK_GRAY}Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
