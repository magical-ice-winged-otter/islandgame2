ISLANDGAME_LUMINE_CAVE_1F_3_MapScripts::
	.byte 0


ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1::
# 4 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_14, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_1
# 11 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2::
# 18 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_14, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_1
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_3_NPC::
# 31 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_1F_3_NPC_Text_0
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	closemessage
# 36 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_0:
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "Oi! Can a young couple get a li'l privacy\n"
	.string "here!?$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_1:
# 9 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "Great... Now you've spoiled the mood.$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer1_Text_2:
# 12 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "This was my one chance, and you ruined\n"
	.string "for me!\p"
	.string "After all these years... I was finally\n"
	.string "gonna do it! I was finally going to show\l"
	.string "off my new shiny Steelix, but now it's\l"
	.string "limp and unconscious!$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_0:
# 20 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "Eeeeep!{PAUSE 60} Who's there!?$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_1:
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "D-Do you mind!?$"

ISLANDGAME_LUMINE_CAVE_1F_3_Trainer2_Text_2:
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "I'm feel so embarrassed... I can't\n"
	.string "believe someone saw me fawning over a\l"
	.string "shiny Steelix...$"

ISLANDGAME_LUMINE_CAVE_1F_3_NPC_Text_0:
# 33 "data/maps/ISLANDGAME_LUMINE_CAVE_1F_3/scripts.pory"
	.string "Oh-ho-ho! What have we here? Two\n"
	.string "youngins sneaking into a cave to do\l"
	.string "Lugia knows what? How taboo!$"
