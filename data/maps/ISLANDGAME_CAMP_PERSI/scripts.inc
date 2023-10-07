ISLANDGAME_CAMP_PERSI_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_INTRO_SIGN::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_INTRO_SIGN_Text_0
	waitmessage
	release
	return


ISLANDGAME_CAMP_PERSI_JONAS_BATTLE::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_JONAS_BATTLE_Text_0
	waitmessage
	release
	return


ISLANDGAME_CAMP_PERSI_INTRO_SIGN_Text_0:
	.string "Hello!$"

ISLANDGAME_CAMP_PERSI_JONAS_BATTLE_Text_0:
	.string "I am jonas! TODO: battle$"
