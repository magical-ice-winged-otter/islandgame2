ISLANDGAME_ROCKY_PATH_MapScripts::
	.byte 0


ISLANDGAME_ROCKY_PATH_Sign::
	msgbox ISLANDGAME_ROCKY_PATH_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_Trainer1::
	trainerbattle_single TRAINER_ROCKY_PATH_1, ISLANDGAME_ROCKY_PATH_Trainer1_Text_0, ISLANDGAME_ROCKY_PATH_Trainer1_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer2::
	trainerbattle_single TRAINER_ROCKY_PATH_1, ISLANDGAME_ROCKY_PATH_Trainer2_Text_0, ISLANDGAME_ROCKY_PATH_Trainer2_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_KarateSis::
	return


ISLANDGAME_ROCKY_PATH_CyclerF::
	return


ISLANDGAME_ROCKY_PATH_Beauty::
	return


ISLANDGAME_ROCKY_PATH_Camper_F::
	return


ISLANDGAME_ROCKY_PATH_Gentleman::
	return


ISLANDGAME_ROCKY_PATH_PsychicF::
	return


ISLANDGAME_ROCKY_PATH_PsychicM::
	return


ISLANDGAME_ROCKY_PATH_Fisherman::
	return


ISLANDGAME_ROCKY_PATH_Sign_Text_0:
	.string "ROCKY PATH\n"
	.string "{LEFT_ARROW}APPLEVINE / LUMINE CAVE{DOWN_ARROW}$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_0:
	.string "I'm almost done setting my picnic up! I\n"
	.string "won't have you interfere!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_1:
	.string "Maybe I shouldn't have set up a picnic\n"
	.string "at the path entrance...$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_2:
	.string "This is my first time trying to setup a\n"
	.string "picnic. I've been trying to follow along\l"
	.string "this guide online, but it's just talking\l"
	.string "about making sandwiches.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_0:
	.string "Curses, my mortal enemy...{PAUSE 60} LEDGES.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_1:
	.string "My second mortal enemy...{PAUSE 60} LOSING!$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_2:
	.string "I was going to explore Lumine Cave, but\n"
	.string "after seeing all these ledges, I think\l"
	.string "I'll just hike through Sierra Path\l"
	.string "instead...$"
