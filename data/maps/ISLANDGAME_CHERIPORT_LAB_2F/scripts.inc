ISLANDGAME_CHERIPORT_LAB_2F_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_LAB_2F_BagInteract::
	lock
	msgbox ISLANDGAME_CHERIPORT_LAB_2F_BagInteract_Text_0
	closemessage
	release
	return


ISLANDGAME_CHERIPORT_LAB_2F_PCInteract::
	lock
	msgbox ISLANDGAME_CHERIPORT_LAB_2F_PCInteract_Text_0
	closemessage
	release
	return


ISLANDGAME_CHERIPORT_LAB_2F_BallInteract::
	lock
	msgbox ISLANDGAME_CHERIPORT_LAB_2F_BallInteract_Text_0
	closemessage
	release
	return


ISLANDGAME_CHERIPORT_LAB_2F_BagInteract_Text_0:
	.string "{COLOR RED}(It's the professor's bag. There seems\n"
	.string "to be three Pokéballs inside.)$"

ISLANDGAME_CHERIPORT_LAB_2F_PCInteract_Text_0:
	.string "{COLOR RED}(It's the professor's computer. It's\n"
	.string "password protected.)$"

ISLANDGAME_CHERIPORT_LAB_2F_BallInteract_Text_0:
	.string "Really? You're just going to barge into\n"
	.string "your professor's lab and steal?\p"
	.string "{COLOR RED}-20 Karma.$"
