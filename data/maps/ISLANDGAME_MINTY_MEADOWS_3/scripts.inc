ISLANDGAME_MINTY_MEADOWS_3_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_3_Ressy::
	lock
	msgbox ISLANDGAME_MINTY_MEADOWS_3_RessyTalk
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_Chimecho::
	lock
	faceplayer
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_3_ChimechoTalk
	applymovement 2, Common_Movement_FaceOriginalDirection
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_Aegislash::
	lock
	playmoncry SPECIES_AEGISLASH, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_3_AegislashTalk
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_RessyTalk::
	.string "The mysterious man stares blankly into\n"
	.string "the vast horizon.\p"
	.string "He points, as if he was attempting to\n"
	.string "reenact an iconic scene from a show.\p"
	.string "What a loser. You should like, just\n"
	.string "forget he exists and stuff.\p"
	.string "Definitely don't come back here later.\n"
	.string "It would be a huge waste of time.\p"
	.string "Yup.$"

ISLANDGAME_MINTY_MEADOWS_3_ChimechoTalk::
	.string "{COLOR DARK_GRAY}Ding dong!$"

ISLANDGAME_MINTY_MEADOWS_3_AegislashTalk::
	.string "{COLOR DARK_GRAY}Shwing! (THOU SHALL NOT PASSETH)$"
