ISLANDGAME_Southern_Oranna_Path_MapScripts::
	.byte 0


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


TrainerBattle1_Text::
	.string "You look weird and UGLY$"

TrainerBattle1_Defeated_Text::
	.string "How$"

TrainerBattle1_PostDefeated_Text::
	.string "What did I just watch$"
