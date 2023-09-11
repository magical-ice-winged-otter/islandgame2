SS_RAIN_STAIRS_MapScripts::
	.byte 0


SS_RAIN_STAIRS_NPC::
	lock
	faceplayer
	msgbox SS_RAIN_STAIRS_NPC_TALK
	release
	return


SS_RAIN_STAIRS_NPC_TALK::
	.string "{COLOR DARK_GRAY}My mom is taking us to the beach later!$"
