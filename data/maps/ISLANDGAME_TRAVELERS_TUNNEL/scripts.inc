ISLANDGAME_TRAVELERS_TUNNEL_MapScripts::
	.byte 0


ISLANDGAME_TRAVELERS_TUNNEL_Hiker::
	lock
	faceplayer
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_HikerTalk
	release
	return


ISLANDGAME_TRAVELERS_TUNNEL_HikerTalk::
	.string "{COLOR DARK_GRAY}Phew... I've been wandering in this\n"
	.string "tunnel for hours!\p"
	.string "{COLOR DARK_GRAY}I thought I'd never see light again, but\n"
	.string "I managed to feel my way over here.\p"
	.string "{COLOR DARK_GRAY}If only I had a lantern...$"
