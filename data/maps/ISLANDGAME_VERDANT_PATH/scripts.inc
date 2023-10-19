ISLANDGAME_VERDANT_PATH_MapScripts::
	.byte 0


ISLANDGAME_VERDANT_PATH_TrainerBattle1::
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_1, ISLANDGAME_VERDANT_PATH_TrainerBattle1_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle1_Defeated_Text
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle2::
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_2, ISLANDGAME_VERDANT_PATH_TrainerBattle2_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle2_Defeated_Text
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle3::
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_3, ISLANDGAME_VERDANT_PATH_TrainerBattle3_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle3_Defeated_Text
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle4::
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_4, ISLANDGAME_VERDANT_PATH_TrainerBattle4_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle4_Defeated_Text
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle5::
	trainerbattle_double TRAINER_VERDANT_PATH_TRAINER_5, ISLANDGAME_VERDANT_PATH_TrainerBattle5_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle5_Defeated_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle5_NotEnoughMons
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle6::
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_6, ISLANDGAME_VERDANT_PATH_TrainerBattle6_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle6_Defeated_Text
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle6_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN1::
	lock
	msgbox ISLANDGAME_VERDANT_PATH_SIGN1_DESC
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN2::
	lock
	msgbox ISLANDGAME_VERDANT_PATH_SIGN2_DESC
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN3::
	lock
	msgbox ISLANDGAME_VERDANT_PATH_SIGN3_DESC
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN4::
	lock
	msgbox ISLANDGAME_VERDANT_PATH_SIGN4_DESC
	release
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Soar, my bird Pokémon!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle1_Defeated_Text::
	.string "I guess they're still not ready yet...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}There's tons of different flying\n"
	.string "Pokémon around here. It's awesome!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle2_Text::
	.string "{COLOR DARK_GRAY}Ugh! I still haven't found the Pokémon I\n"
	.string "want for my team yet!\p"
	.string "{COLOR DARK_GRAY}Hey, you! I'm gonna take my frustration\n"
	.string "out in a battle, okay? Prepare to lose!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle2_Defeated_Text::
	.string "If only I had the Pokémon I needed...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}The Pokémon I'm looking for is Yanma,\n"
	.string "but it's so hard to find one!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle3_Text::
	.string "{COLOR DARK_GRAY}I just got this shiny new rod from\n"
	.string "Arnie's! Check out what it got me!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle3_Defeated_Text::
	.string "Gah, my line snapped!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle3_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}If you want to join in on the fishing\n"
	.string "hype, you should stop by Arnie's!\p"
	.string "{COLOR DARK_GRAY}And before you ask, no, I'm not\n"
	.string "sponsored or anything.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle4_Text::
	.string "{COLOR DARK_GRAY}After 10,000 tries and 27 days... I\n"
	.string "finally struck gold!\p"
	.string "{COLOR DARK_GRAY}Witness the fruits of my labor! Go!\n"
	.string "Magikarp!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle4_Defeated_Text::
	.string "I don't even care that I lost. I just \n"
	.string "wanted to show my Magikarp.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle4_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}The greatest virtue is patience, that's\n"
	.string "for true.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_Text::
	.string "{COLOR BLUE}Mindy: {COLOR DARK_GRAY}Okay Mandy, this time follow MY\n"
	.string "lead!\p"
	.string "{COLOR BLUE}Mandy: {COLOR DARK_GRAY}Whatever...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_Defeated_Text::
	.string "Mindy: Ugh, how did we lose!? This is all \n"
	.string "your fault! \p"
	.string "Mandy: MY fault!?$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_PostDefeated_Text::
	.string "{COLOR BLUE}Mindy: {COLOR DARK_GRAY}If only Mandy was actually\n"
	.string "helping me out...\p"
	.string "{COLOR BLUE}Mandy: {COLOR DARK_GRAY}If only there was two of me\n"
	.string "instead of Mindy...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_NotEnoughMons::
	.string "{COLOR BLUE}Mindy: {COLOR DARK_GRAY}Eh? You need at least two\n"
	.string "Pokémon to take us on!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle6_Text::
	.string "{COLOR DARK_GRAY}As a member of the upper-class, it's\n"
	.string "only natural I have elite Pokémon.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle6_Defeated_Text::
	.string "Hmph, perhaps this Pokémon is not as  \n"
	.string "elite as I thought.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle6_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}I was told this was one of the most\n"
	.string "elusive Pokémon in the area.\p"
	.string "{COLOR DARK_GRAY}Clearly, I was lied to. I suppose I will\n"
	.string "be disposing of it shortly...$"

ISLANDGAME_VERDANT_PATH_SIGN1_DESC::
	.string "{COLOR DARK_GRAY}VERDANT PATH\n"
	.string "{COLOR DARK_GRAY}{DOWN_ARROW} CAMP PERSI$"

ISLANDGAME_VERDANT_PATH_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}ARNIE'S BAIT & TACKLE\n"
	.string "{COLOR DARK_GRAY}For Fishing Fanatics!$"

ISLANDGAME_VERDANT_PATH_SIGN3_DESC::
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Repellent is advised! :)$"

ISLANDGAME_VERDANT_PATH_SIGN4_DESC::
	.string "{COLOR DARK_GRAY}VERDANT PATH\n"
	.string "{COLOR DARK_GRAY}{UP_ARROW} MAPLEGROVE$"
