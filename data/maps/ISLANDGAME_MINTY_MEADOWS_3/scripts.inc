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
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_Aegislash::
	lock
	playmoncry SPECIES_AEGISLASH, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_3_AegislashTalk
	release
	return


ISLANDGAME_MINTY_MEADOWS_3_RessyTalk::
	.string "{COLOR RED}(He seems to be pondering in thoughts.)$"

ISLANDGAME_MINTY_MEADOWS_3_ChimechoTalk::
	.string "{COLOR DARK_GRAY}Ding dong!$"

ISLANDGAME_MINTY_MEADOWS_3_AegislashTalk::
	.string "{COLOR DARK_GRAY}Shwing! (THOU SHALL NOT PASSETH)$"
