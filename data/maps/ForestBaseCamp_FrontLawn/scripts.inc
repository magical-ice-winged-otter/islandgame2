ForestBaseCamp_FrontLawn_MapScripts::
	.byte 0


ForestBaseCamp_FrontLawn_LocationSign::
# 7 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_LocationSign_Text_0, MSGBOX_SIGN
	return


ForestBaseCamp_FrontLawn_BasecampSign::
# 12 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_BasecampSignText, MSGBOX_SIGN
	return


ForestBaseCamp_FrontLawn_Novice::
# 23 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_Novice_Text_0, MSGBOX_NPC
	return


ForestBaseCamp_FrontLawn_NervousGuy::
# 39 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_NervousGuy_Text_0, MSGBOX_NPC
	return


ForestBaseCamp_FrontLawn_BlindGuy::
# 44 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	checkitem ITEM_BLACK_GLASSES, 1
# 46 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_1
# 52 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_1, MSGBOX_YESNO
# 54 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ForestBaseCamp_FrontLawn_BlindGuy_4
# 61 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_3, MSGBOX_NPC
	return

ForestBaseCamp_FrontLawn_BlindGuy_1:
# 48 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_0, MSGBOX_NPC
	return

ForestBaseCamp_FrontLawn_BlindGuy_4:
# 56 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	msgbox ForestBaseCamp_FrontLawn_BlindGuy_Text_2, MSGBOX_NPC
# 57 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	removeitem ITEM_BLACK_GLASSES, 1
	return


ForestBaseCamp_FrontLawn_LocationSign_Text_0:
# 7 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "NATIONAL RESERVE AHEAD\n"
	.string "{COLOR GREEN}Cloudroot Forest$"

ForestBaseCamp_FrontLawn_Novice_Text_0:
# 23 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "They won't let me into the basecamp\n"
	.string "because I'm too young. It's so unfair!$"

ForestBaseCamp_FrontLawn_NervousGuy_Text_0:
# 39 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "I can't believe I let me friend talk me\n"
	.string "into this...$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_0:
# 48 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "By any chance, have you seen a pair of\n"
	.string "glasses around here?$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_1:
# 52 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "Oh! You found my glasses! Can I have\n"
	.string "them back?$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_2:
# 56 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "Thank you so much! I will never forget\n"
	.string "this moment.$"

ForestBaseCamp_FrontLawn_BlindGuy_Text_3:
# 61 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "How dare you! Thief! I'll make you pay\n"
	.string "for this!$"

ForestBaseCamp_FrontLawn_BasecampSignText::
# 15 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "Welcome to the {COLOR GREEN}Cloudroot{COLOR DARK_GRAY} Basecamp!\n"
	.string "{COLOR RED}ADVENTURERS WANTED INSIDE$"

ForestBaseCamp_FrontLawn_IntroText::
# 27 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "You are gonna get destroyed!$"

ForestBaseCamp_FrontLawn_DefeatedText::
# 32 "data/maps/ForestBaseCamp_FrontLawn/scripts.pory"
	.string "Man, I totally got destroyed.$"
