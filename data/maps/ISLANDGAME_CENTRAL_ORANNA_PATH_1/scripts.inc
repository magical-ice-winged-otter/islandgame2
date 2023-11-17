ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts::
	.byte 0


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_MightyenaBlocker::
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_NORMAL
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_MightyenaBlocker_Text_0
	closemessage
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0:
	.string "These Mightyena are blocking the path!\p"
	.string "I'm trying my best to clear them out,\n"
	.string "come back later.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_MightyenaBlocker_Text_0:
	.string "The Mightyena looks very agitated.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0:
	.string "CENTRAL ORANNA PATH\p"
	.string "Warning: wildlife out of control$"
