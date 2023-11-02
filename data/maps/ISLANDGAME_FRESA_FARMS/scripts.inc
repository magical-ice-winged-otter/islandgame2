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
	compare VAR_UNUSED_0x404E, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_OldMan_Talk_2
	compare VAR_UNUSED_0x404E, 4
	goto_if_eq ISLANDGAME_FRESA_FARMS_OldMan_Talk_3
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage
ISLANDGAME_FRESA_FARMS_OldMan_Talk_1:
	release
	return

ISLANDGAME_FRESA_FARMS_OldMan_Talk_2:
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage
	setvar VAR_UNUSED_0x404E, 1
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk_1

ISLANDGAME_FRESA_FARMS_OldMan_Talk_3:
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestFulfilledMessage
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk_1


ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage::
	.string "{COLOR DARK_GRAY}I couldn't help but notice your battle\n"
	.string "earlier, I was wondering if you could\l"
	.string "help us with our missing Mareep. {COLOR DARK_GRAY}She\l"
	.string "usually goes off by herself to the\l"
	.string "center of the plains, but we haven't\l"
	.string "seen her since.$"

ISLANDGAME_FRESA_FARMS_OldMan_RequestFulfilledMessage::
	.string "{COLOR DARK_GRAY}Thank you very much!$"
