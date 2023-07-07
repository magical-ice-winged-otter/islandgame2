ForestBaseCamp_FrontLawn_MapScripts::
	.byte 0


ForestBaseCamp_FrontLawn_LocationSign::
	msgbox ForestBaseCamp_FrontLawn_LocationSign_Text_0, MSGBOX_SIGN
	return


ForestBaseCamp_FrontLawn_BasecampSign::
	msgbox ForestBaseCamp_FrontLawn_BasecampSignText, MSGBOX_SIGN
	return


ForestBaseCamp_FrontLawn_Novice::
	msgbox ForestBaseCamp_FrontLawn_Novice_Text_0, MSGBOX_NPC
	return


ForestBaseCamp_FrontLawn_NervousGuy::
	msgbox ForestBaseCamp_FrontLawn_NervousGuy_Text_0, MSGBOX_NPC
	return


ForestBaseCamp_FrontLawn_BlindGuy::
	checkitem ITEM_BLACK_GLASSES, 1
	compare VAR_RESULT, 0
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_1
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_4
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_3, MSGBOX_NPC
	return

ForestBaseCamp_FrontLawn_BlindGuy_1:
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_0, MSGBOX_NPC
	return

ForestBaseCamp_FrontLawn_BlindGuy_4:
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_2, MSGBOX_NPC
	removeitem ITEM_BLACK_GLASSES, 1
	return


ForestBaseCamp_FrontLawn_LocationSign_Text_0:
	.string "NATIONAL RESERVE AHEAD\n"
	.string "{COLOR GREEN}Cloudroot Forest$"

ForestBaseCamp_FrontLawn_Novice_Text_0:
	.string "They won't let me into the basecamp\n"
	.string "because I'm too young. It's so unfair!$"

ForestBaseCamp_FrontLawn_NervousGuy_Text_0:
	.string "I can't believe I let me friend talk me\n"
	.string "into this...$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_0:
	.string "By any chance, have you seen a pair of\n"
	.string "glasses around here?$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_1:
	.string "Oh! You found my glasses! Can I have\n"
	.string "them back?$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_2:
	.string "Thank you so much! I will never forget\n"
	.string "this moment.$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_3:
	.string "How dare you! Thief! I'll make you pay\n"
	.string "for this!$"

ForestBaseCamp_FrontLawn_BasecampSignText::
	.string "Welcome to the {COLOR GREEN}Cloudroot{COLOR DARK_GRAY} Basecamp!\n"
	.string "{COLOR RED}{SHADOW RED}ADVENTURERS WANTED INSIDE$"
