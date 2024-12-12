ISLANDGAME_SS_RAIN_ROOM1_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_ROOM1_EventScript_OldWomanTalk::
# 5 "data/maps/ISLANDGAME_SS_RAIN_ROOM1/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_SS_RAIN_ROOM1/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_SS_RAIN_ROOM1/scripts.pory"
	msgbox SmallTalk_Text
# 8 "data/maps/ISLANDGAME_SS_RAIN_ROOM1/scripts.pory"
	waitmessage
# 9 "data/maps/ISLANDGAME_SS_RAIN_ROOM1/scripts.pory"
	release
	return


SmallTalk_Text::
# 12 "data/maps/ISLANDGAME_SS_RAIN_ROOM1/scripts.pory"
	.string "{COLOR DARK_GRAY}It's been almost twenty years since the\n"
	.string "last time I came here.\p"
	.string "{COLOR DARK_GRAY}A lot sure has changed since then.$"
