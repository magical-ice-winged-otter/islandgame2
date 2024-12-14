ISLANDGAME_MINTY_MEADOWS_3_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_3_Ressy::
# 5 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_3_RessyTalk
# 7 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_Chimecho::
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	lock
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	playmoncry SPECIES_GALLADE, CRY_MODE_NORMAL
# 23 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_3_ChimechoTalk
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_Aegislash::
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	playmoncry SPECIES_AEGISLASH, CRY_MODE_NORMAL
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_3_AegislashTalk
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_RessyTalk::
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	.string "The mysterious man stares blankly into\n"
	.string "the vast horizon.\p"
	.string "What a loser. You should like, just\n"
	.string "forget he exists and stuff.\p"
	.string "Definitely don't come back here later.\n"
	.string "It would be a huge waste of time.\p"
	.string "Yup.$"

ISLANDGAME_MINTY_MEADOWS_3_ChimechoTalk::
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	.string "{COLOR DARK_GRAY}Gallade! {COLOR BLUE}(I long for a worthy\n"
	.string "adversary!)$"

ISLANDGAME_MINTY_MEADOWS_3_AegislashTalk::
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_3/scripts.pory"
	.string "{COLOR DARK_GRAY}Shwing! {COLOR BLUE}(THOU SHALL NOT PASSETH)$"
