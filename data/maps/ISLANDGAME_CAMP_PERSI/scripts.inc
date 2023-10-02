ISLANDGAME_CAMP_PERSI_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_INTRO_SIGN::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_INTRO_SIGN_Text_0
	waitmessage
	release
	return


ISLANDGAME_CAMP_PERSI_INTRO_SIGN_Text_0:
	.string "Hello!$"
