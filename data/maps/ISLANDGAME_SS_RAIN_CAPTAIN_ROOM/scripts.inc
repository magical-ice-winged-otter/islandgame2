ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts_EventScript_CaptainTalk::
	lock
	faceplayer
	msgbox CaptainTalk_Text
	release
	return


CaptainTalk_Text::
	.string "{COLOR DARK_GRAY}Hello mate.$"
