ISLANDGAME_SS_RAIN_ROOM1_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_ROOM1_EventScript_OldWomanTalk::
	lock
	faceplayer
	msgbox SmallTalk_Text
	release
	return


SmallTalk_Text::
	.string "{COLOR DARK_GRAY}I'm getting too old for this; I have\n"
	.string "been seasick for the entire trip.$"
