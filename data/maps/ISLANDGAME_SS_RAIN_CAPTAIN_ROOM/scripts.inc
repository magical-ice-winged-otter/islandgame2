ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts_EventScript_CaptainTalk::
# 5 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	msgbox CaptainTalk_Text
# 8 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	release
	return


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_Book::
# 15 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	msgbox ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_BookInspect
# 17 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	release
	return


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_Shelf::
# 26 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	msgbox ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_ShelfInspect
# 28 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	release
	return


CaptainTalk_Text::
# 10 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	.string "{COLOR DARK_GRAY}Ahoy there! I'm the captain of this\n"
	.string "vessel. Hope you enjoy your stay at the\l"
	.string "beautiful Maryan Isles!$"

ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_BookInspect::
# 19 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	.string "{COLOR RED}(It's a light novel titled “The Rising of\n"
	.string "The Aegislash Hero”.)$"

ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_ShelfInspect::
# 30 "data/maps/ISLANDGAME_SS_RAIN_CAPTAIN_ROOM/scripts.pory"
	.string "{COLOR RED}(There's a large assortment of books on\n"
	.string "this shelf.)\p"
	.string "{COLOR RED}(The captain seems to be really into\n"
	.string "Pokécraft.)$"
