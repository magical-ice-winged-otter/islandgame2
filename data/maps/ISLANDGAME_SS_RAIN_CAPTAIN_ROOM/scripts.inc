ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts_EventScript_CaptainTalk::
	lock
	faceplayer
	msgbox CaptainTalk_Text
	face_down
	release
	return


CaptainTalk_Text::
	.string "{COLOR DARK_GRAY}Ahoy there! I'm the captain of this\n"
	.string "vessel. Hope you enjoy your stay at\l"
	.string "the beautiful Isles of Mariyama!$"
