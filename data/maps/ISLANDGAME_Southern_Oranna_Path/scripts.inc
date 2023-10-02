ISLANDGAME_Southern_Oranna_Path_MapScripts::
	.byte 0


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle2::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_2, TrainerBattle2_Text, TrainerBattle2_Defeated_Text
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Hey, you look like a newbie! You'll be\n"
	.string "easy pickings for a veteran like me!$"

TrainerBattle1_Defeated_Text::
	.string "N-No way... I lost to a newbie!?$"

TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Okay... I lied about being a veteran. I'm\n"
	.string "also just a newbie too.$"

TrainerBattle2_Text::
	.string "{COLOR DARK_GRAY}I caught some cute Pokémon. Wanna see\n"
	.string "them? They're pretty strong too!$"

TrainerBattle2_Defeated_Text::
	.string "Well shoot! Your Pokémon are cute and strong too!$"

TrainerBattle2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Where'd you get that Eevee? I'd love to\n"
	.string "have one too!$"
