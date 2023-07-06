ForestBaseCamp_FrontLawn_MapScripts::
	.byte 0


ForestBaseCamp_FrontLawn_BlindGuy::
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_0, MSGBOX_NPC
	checkitem ITEM_BLACK_GLASSES, 1
	compare VAR_RESULT, 1
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_1
	return

ForestBaseCamp_FrontLawn_BlindGuy_1:
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_1, MSGBOX_NPC
	return


ForestBaseCamp_FrontLawn_BlindGuy_Text_0:
	.string "By any chance, have you seen a pair of\n"
	.string "glasses around here?$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_1:
	.string "Oh! You found them!$"
