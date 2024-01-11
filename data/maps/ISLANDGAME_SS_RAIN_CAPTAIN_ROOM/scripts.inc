ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts::
	.byte 0


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_MapScripts_EventScript_CaptainTalk::
	lock
	faceplayer
	msgbox CaptainTalk_Text
	release
	return


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_Book::
	lock
	msgbox ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_BookInspect
	release
	return


ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_Shelf::
	lock
	msgbox ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_ShelfInspect
	release
	return


CaptainTalk_Text::
	.string "{COLOR DARK_GRAY}Ahoy there! I'm the captain of this\n"
	.string "vessel. Hope you enjoy your stay at\l"
	.string "the beautiful isles of Marya!$"

ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_BookInspect::
	.string "{COLOR RED}(It's a light novel titled “The Rising of\n"
	.string "The Aegislash Hero”.)$"

ISLANDGAME_SS_RAIN_CAPTAIN_ROOM_ShelfInspect::
	.string "{COLOR RED}(There's a large assortment of books on\n"
	.string "this shelf.)\p"
	.string "{COLOR RED}(The captain seems to be really into\n"
	.string "Pokécraft.)$"
