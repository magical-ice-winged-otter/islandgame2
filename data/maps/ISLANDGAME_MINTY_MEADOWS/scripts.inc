ISLANDGAME_MINTY_MEADOWS_MapScripts::
	.byte 0


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
	.string "{COLOR DARK_GRAY}Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
	.string "Lizzy: Ugh! Worst date ever!\pOwen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
	.string "{COLOR DARK_GRAY}Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_3:
	.string "{COLOR DARK_GRAY}Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_2:
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

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
	.string "for my lovely Vespiquen!$"

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
