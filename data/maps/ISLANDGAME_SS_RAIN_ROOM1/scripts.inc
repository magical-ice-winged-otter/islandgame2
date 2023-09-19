ISLANDGAME_SS_RAIN_ROOM1_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_ROOM1_EventScript_OldWomanTalk::
	lock
	faceplayer
	msgbox SmallTalk_Text
	waitmessage
	release
	return


SmallTalk_Text::
	.string "{COLOR DARK_GRAY}It's been almost twenty years since the\n"
	.string "last time I came here.\p"
	.string "{COLOR DARK_GRAY}A lot sure has changed since then.$"
