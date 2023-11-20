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


ISLANDGAME_MINTY_MEADOWS_Trainer1::
	trainerbattle_double TRAINER_MINTY_MEADOWS_9, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer1_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer2::
	trainerbattle_single TRAINER_MINTY_MEADOWS_10, ISLANDGAME_MINTY_MEADOWS_Trainer2_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer2_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer2_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer3::
	trainerbattle_single TRAINER_MINTY_MEADOWS_11, ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer3_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer4::
	trainerbattle_single TRAINER_MINTY_MEADOWS_12, ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer4_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer5::
	trainerbattle_single TRAINER_MINTY_MEADOWS_13, ISLANDGAME_MINTY_MEADOWS_Trainer5_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer5_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer5_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer6::
	trainerbattle_single TRAINER_MINTY_MEADOWS_14, ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer6_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer7::
	trainerbattle_single TRAINER_MINTY_MEADOWS_15, ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer7_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer8::
	trainerbattle_single TRAINER_MINTY_MEADOWS_16, ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer8_Loss
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_0:
	.string "{COLOR DARK_GRAY}Hey, let's battle together!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_1:
	.string "{COLOR DARK_GRAY}You don't have enough Pokemon to fight\n"
	.string "us.$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Text_2:
	.string "{COLOR DARK_GRAY}Oh no, we lost!$"

ISLANDGAME_MINTY_MEADOWS_Trainer2_Text_0:
	.string "{COLOR DARK_GRAY}Battling feels heavy today...$"

ISLANDGAME_MINTY_MEADOWS_Trainer2_Text_1:
	.string "{COLOR DARK_GRAY}I couldn't overcome the weight. It's a\n"
	.string "struggle, isn't it?$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_0:
	.string "{COLOR DARK_GRAY}Ready for a match? Let the excitement\n"
	.string "begin!$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Text_1:
	.string "{COLOR DARK_GRAY}Wow, you're strong! That was a blast of\n"
	.string "a battle!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_0:
	.string "{COLOR DARK_GRAY}In the meadow's embrace, let our\n"
	.string "Pokémon bloom in battle!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Text_1:
	.string "{COLOR DARK_GRAY}Alas, my Pokémon couldn't bloom to\n"
	.string "victory this time. Your team flourished\l"
	.string "beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer5_Text_0:
	.string "{COLOR DARK_GRAY}Hello! Let's explore the wonders of this\n"
	.string "lovely meadow together!$"

ISLANDGAME_MINTY_MEADOWS_Trainer5_Text_1:
	.string "{COLOR DARK_GRAY}Oh, our meadow journey had its\n"
	.string "challenges. Nature's charm is truly\l"
	.string "enchanting, isn't it?$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_0:
	.string "{COLOR DARK_GRAY}Greetings! Let's revel in the marvels of\n"
	.string "bug Pokémon amidst this incredible\l"
	.string "setting!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Text_1:
	.string "{COLOR DARK_GRAY}Ah, my enthusiasm didn't secure\n"
	.string "success! Your Pokémon shine like rare\l"
	.string "gems!$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_0:
	.string "{COLOR DARK_GRAY}Hey there! Ready for a stroll through\n"
	.string "nature's wonders?$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Text_1:
	.string "{COLOR DARK_GRAY}Whoops! Things didn't quite go as\n"
	.string "planned, but hey, that's life, right?$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_0:
	.string "{COLOR DARK_GRAY}Hey! Ready for a laid-back time\n"
	.string "outdoors?$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Text_1:
	.string "{COLOR DARK_GRAY}Your easygoing spirit is refreshing!$"

ISLANDGAME_MINTY_MEADOWS_Trainer1_Loss::
	.string "{COLOR DARK_GRAY}We'll get you next time!$"

ISLANDGAME_MINTY_MEADOWS_Trainer2_Loss::
	.string "{COLOR DARK_GRAY}Your strength is a beacon. I'll find my\n"
	.string "own light in this darkness.$"

ISLANDGAME_MINTY_MEADOWS_Trainer3_Loss::
	.string "{COLOR DARK_GRAY}You're a powerhouse! Let's battle again\n"
	.string "sometime!$"

ISLANDGAME_MINTY_MEADOWS_Trainer4_Loss::
	.string "{COLOR DARK_GRAY}Even in defeat, the meadow whispers\n"
	.string "tales of growth and renewal.$"

ISLANDGAME_MINTY_MEADOWS_Trainer5_Loss::
	.string "{COLOR DARK_GRAY}I will see you again!$"

ISLANDGAME_MINTY_MEADOWS_Trainer6_Loss::
	.string "{COLOR DARK_GRAY}The problem is that I can't find any Bug\n"
	.string "Pokémon here.$"

ISLANDGAME_MINTY_MEADOWS_Trainer7_Loss::
	.string "{COLOR DARK_GRAY}Whoops! Things didn't quite go as\n"
	.string "planned, but hey, that's life, right?$"

ISLANDGAME_MINTY_MEADOWS_Trainer8_Loss::
	.string "{COLOR DARK_GRAY}I couldn't wait to go on this camping\n"
	.string "trip that I didn't sleep.$"
