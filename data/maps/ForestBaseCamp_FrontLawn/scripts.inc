ForestBaseCamp_FrontLawn_MapScripts::
	.byte 0


ForestBaseCamp_FrontLawn_BlindGuy::
	checkitem ITEM_BLACK_GLASSES, 1
	compare VAR_RESULT, 1
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_1
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_3, MSGBOX_NPC
	return

ForestBaseCamp_FrontLawn_BlindGuy_1:
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_4
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_2, MSGBOX_NPC
	trainerbattle_single TRAINER_CALVIN_1, ForestBaseCamp_FrontLawn_BlindGuyIntro, ForestBaseCamp_FrontLawn_BlindGuyDefeated, ForestBaseCamp_FrontLawn_BlindGuyPostBattle
	return

ForestBaseCamp_FrontLawn_BlindGuy_4:
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_1, MSGBOX_NPC
	removeitem ITEM_BLACK_GLASSES, 1
	return


ForestBaseCamp_FrontLawn_BlindGuyPostBattle::
	return


ForestBaseCamp_FrontLawn_BlindGuy_Text_0:
	.string "Oh! You found my glasses! Can I have\n"
	.string "them back?$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_1:
	.string "Thank you so much! I will never forget\n"
	.string "this moment.$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_2:
	.string "How dare you! Thief! I'll make you pay\n"
	.string "for this!$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_3:
	.string "By any chance, have you seen a pair of\n"
	.string "glasses around here?$"

ForestBaseCamp_FrontLawn_BlindGuyIntro::
	.string "Thiefs like you need to be taught a\n"
	.string "lesson.$"

ForestBaseCamp_FrontLawn_BlindGuyDefeated::
	.string "...$"
