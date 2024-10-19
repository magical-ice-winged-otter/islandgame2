SS_RAIN_STAIRS_MapScripts::
	.byte 0


SS_RAIN_STAIRS_NPC::
# 5 "data/maps/SS_RAIN_STAIRS/scripts.pory"
	lock
# 6 "data/maps/SS_RAIN_STAIRS/scripts.pory"
	faceplayer
# 7 "data/maps/SS_RAIN_STAIRS/scripts.pory"
	msgbox SS_RAIN_STAIRS_NPC_TALK
# 8 "data/maps/SS_RAIN_STAIRS/scripts.pory"
	release
	return


SS_RAIN_STAIRS_NPC_TALK::
# 11 "data/maps/SS_RAIN_STAIRS/scripts.pory"
	.string "{COLOR DARK_GRAY}My mom is taking me to the beach later!$"
