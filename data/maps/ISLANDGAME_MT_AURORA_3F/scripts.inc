ISLANDGAME_MT_AURORA_3F_MapScripts::
	.byte 0


ISLANDGAME_MT_AURORA_3F_SignInteract::
# 4 "data/maps/ISLANDGAME_MT_AURORA_3F/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_MT_AURORA_3F/scripts.pory"
	msgbox ISLANDGAME_MT_AURORA_3F_SignInteract_Text_0
# 6 "data/maps/ISLANDGAME_MT_AURORA_3F/scripts.pory"
	closemessage
# 7 "data/maps/ISLANDGAME_MT_AURORA_3F/scripts.pory"
	release
	return


ISLANDGAME_MT_AURORA_3F_SignInteract_Text_0:
# 5 "data/maps/ISLANDGAME_MT_AURORA_3F/scripts.pory"
	.string "LADDER CLOSED FOR RENOVATIONS\n"
	.string "(Come back at a later patch :D)$"
