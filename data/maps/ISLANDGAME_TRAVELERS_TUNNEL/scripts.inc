ISLANDGAME_TRAVELERS_TUNNEL_MapScripts::
	.byte 0


ISLANDGAME_TRAVELERS_TUNNEL_Hiker::
# 6 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL/scripts.pory"
	faceplayer
# 8 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_HikerTalk
# 9 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 10 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL/scripts.pory"
	release
	return


ISLANDGAME_TRAVELERS_TUNNEL_HikerTalk::
# 13 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL/scripts.pory"
	.string "Man, what's up with all this pink swirly\n"
	.string "mist in here?\p"
	.string "I think it's coming from deeper in the\n"
	.string "cave...\p"
	.string "Huh? I'm not going down there! You go\n"
	.string "down there! I've uh, got more important\l"
	.string "things to attend to!\p"
	.string "Like polishing this rock right here!\n"
	.string "Gotta shine it reeeeal good!$"
