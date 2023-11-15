ISLANDGAME_FRESA_FARMS_MapScripts::
	.byte 0


ISLANDGAME_FRESA_FARMS_OldMan_Request::
	lock
	applymovement 12, Common_Movement_FaceLeft
	waitmovement 12
	applymovement 12, Common_Movement_ExclamationMark
	waitmovement 12
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk
	return


ISLANDGAME_FRESA_FARMS_OldMan_Talk::
	lock
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_FRESA_FARMS_OldMan_Talk_3
	case 4, ISLANDGAME_FRESA_FARMS_OldMan_Talk_4
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage
ISLANDGAME_FRESA_FARMS_OldMan_Talk_1:
	release
	return

ISLANDGAME_FRESA_FARMS_OldMan_Talk_3:
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage
	startquest QUEST_FRESA_FARMS_LOST_MAREEP
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk_1

ISLANDGAME_FRESA_FARMS_OldMan_Talk_4:
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestFulfilledMessage
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk_1


ISLANDGAME_FRESA_FARMS_DayCareSign_Interact::
	msgbox ISLANDGAME_FRESA_FARMS_DayCareSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_FRESA_FARMS_FarmhouseSign_Interact::
	msgbox ISLANDGAME_FRESA_FARMS_FarmhouseSign_Interact_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_FRESA_FARMS_Miltank_Interact::
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_Chansey_Interact::
	lock
	faceplayer
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep_Interact::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Mareep_Interact_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_MareepScared_Interact::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, CRY_MODE_GROWL_1
	msgbox ISLANDGAME_FRESA_FARMS_MareepScared_Interact_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_DayCareSign_Interact_Text_0:
	.string "DAY CARE$"

ISLANDGAME_FRESA_FARMS_FarmhouseSign_Interact_Text_0:
	.string "FARMHOUSE$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0:
	.string "The Miltank is lazing around.$"

ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0:
	.string "The Chansey seems happy to just wander\n"
	.string "around.$"

ISLANDGAME_FRESA_FARMS_Mareep_Interact_Text_0:
	.string "The Mareep appears to be well fed.$"

ISLANDGAME_FRESA_FARMS_MareepScared_Interact_Text_0:
	.string "The Mareep keeps glancing up at the\n"
	.string "nearby Herdier.$"

ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage::
	.string "Oh, its you!\p"
	.string "I couldn't help but notice your battle\n"
	.string "earlier.\p"
	.string "I was wondering if you could help us\n"
	.string "with our missing Mareep.\p"
	.string "She usually goes off by herself to the\n"
	.string "center of the plains, but we haven't\l"
	.string "seen her since.$"

ISLANDGAME_FRESA_FARMS_OldMan_RequestFulfilledMessage::
	.string "{COLOR DARK_GRAY}Thank you very much!$"
