ISLANDGAME_LUMINE_CAVE_1F_3_MapScripts::
	.byte 0


ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1::
	trainerbattle_single TRAINER_LUMINE_CAVE_14, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2::
	trainerbattle_single TRAINER_LUMINE_CAVE_14, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_3_NPC::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_1F_3_NPC_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_0:
	.string "Oi! Can a young couple get a li'l privacy\n"
	.string "here!?$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_1:
	.string "Great... Now you've spoiled the mood.$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_2:
	.string "This was my one chance, and you ruined\n"
	.string "for me!\p"
	.string "After all these years... I was finally\n"
	.string "gonna do it! I was finally going to show\l"
	.string "off my new shiny Steelix, but now it's\l"
	.string "limp and unconscious!$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_0:
	.string "Eeeeep!{PAUSE 60} Who's there!?$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_1:
	.string "D-Do you mind!?$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_2:
	.string "I'm feel so embarrassed... I can't\n"
	.string "believe someone saw me fawning over a\l"
	.string "shiny Steelix...$"

ISLANDGAME_LUMINE_CAVE_1F_3_NPC_Text_0:
	.string "Oh-ho-ho! What have we here? Two\n"
	.string "youngins sneaking into a cave to do\l"
	.string "Lugia knows what? How taboo!$"
