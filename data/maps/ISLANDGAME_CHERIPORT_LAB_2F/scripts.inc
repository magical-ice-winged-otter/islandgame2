ISLANDGAME_CHERIPORT_LAB_2F_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_LAB_2F_BagInteract::
# 4 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_2F_BagInteract_Text_0
# 8 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	closemessage
# 9 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_2F_PCInteract::
# 14 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_2F_PCInteract_Text_0
# 18 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	closemessage
# 19 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_2F_BallInteract::
# 23 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_2F_BallInteract_Text_0
# 28 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	closemessage
# 29 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_2F_BagInteract_Text_0:
# 6 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	.string "{COLOR RED}(It seems to be someone's bag. I\n"
	.string "probably shouldn't be digging in it.)$"

ISLANDGAME_CHERIPORT_LAB_2F_PCInteract_Text_0:
# 16 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	.string "{COLOR RED}(It's the professor's computer. It's\n"
	.string "password protected.)$"

ISLANDGAME_CHERIPORT_LAB_2F_BallInteract_Text_0:
# 25 "data/maps/ISLANDGAME_CHERIPORT_LAB_2F/scripts.pory"
	.string "Really? You're just going to barge into\n"
	.string "your professor's lab and steal?\p"
	.string "{COLOR RED}-20 Karma.$"
