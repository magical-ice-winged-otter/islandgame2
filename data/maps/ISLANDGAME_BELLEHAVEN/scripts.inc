ISLANDGAME_BELLEHAVEN_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_Interact_Sign::
	msgbox ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1::
	lock
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0
	release
	return


ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0:
	.string "Bellehaven$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0:
	.string "This is a quiet town. Mostly, everyone stays indoors.$"
