ISLANDGAME_MINTY_MEADOWS_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_MINTY_MEADOWS_OnLoad
	.2byte 0


ISLANDGAME_MINTY_MEADOWS_OnLoad::
	setvar VAR_TEMP_0, 1
	removeobject 11, MAP_ISLANDGAME_MINTY_MEADOWS_2
	removeobject 12, MAP_ISLANDGAME_MINTY_MEADOWS_2
	return


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign::
	msgbox ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_MINTY_MEADOWS_Trainer1::
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer3::
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer4::
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer6::
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer7::
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer8::
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Interact_EntranceSign_Text_0:
	.string "{LEFT_ARROW} MAPLEGROVE\n"
	.string "{RIGHT_ARROW} MINTY MEADOWS$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0:
	.string "{COLOR DARK_GRAY}Hey, let's battle together!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
	.string "Oh no, we lost!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
	.string "{COLOR DARK_GRAY}You don't have enough Pokemon to fight\n"
	.string "us.$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3:
	.string "{COLOR DARK_GRAY}We'll get you next time!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
	.string "Oi! Get out of my way! I'm trying to keep\n"
	.string "up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2:
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0:
	.string "{COLOR DARK_GRAY}Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1:
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_2:
	.string "{COLOR DARK_GRAY}I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0:
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1:
	.string "How dare you come between me and Her\nMajesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_2:
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Queen Combee!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0:
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1:
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_2:
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0:
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1:
	.string "It's hard to concentrate in battle when\nyou're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_2:
	.string "{COLOR DARK_GRAY}Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
