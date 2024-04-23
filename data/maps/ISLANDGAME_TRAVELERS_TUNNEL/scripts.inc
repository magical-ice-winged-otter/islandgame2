ISLANDGAME_TRAVELERS_TUNNEL_MapScripts::
	.byte 0


ISLANDGAME_TRAVELERS_TUNNEL_Hiker::
	lock
	faceplayer
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_HikerTalk
	applymovement 6, Common_Movement_FaceRight
	release
	return


ISLANDGAME_TRAVELERS_TUNNEL_HikerTalk::
	.string "Man, what's up with all this pink swirly\n"
	.string "mist in here?\p"
	.string "I think it's coming from deeper in the\n"
	.string "cave...\p"
	.string "Eh? I'm not going down there! You go\n"
	.string "down there! I've uh, got more important\l"
	.string "things to attend to!\p"
	.string "Like polishing this rock right here!\n"
	.string "Gotta shine it reeeeal good!$"
