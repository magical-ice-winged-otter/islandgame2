ISLANDGAME_MT_AURORA_3F_MapScripts::
	.byte 0


ISLANDGAME_MT_AURORA_3F_SignInteract::
	lock
	msgbox ISLANDGAME_MT_AURORA_3F_SignInteract_Text_0
	closemessage
	release
	return


ISLANDGAME_MT_AURORA_3F_SignInteract_Text_0:
	.string "LADDER CLOSED FOR RENOVATIONS\n"
	.string "(Come back at a later patch :D)$"
