ISLANDGAME_CHERIPORT_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_MrBriney::
	lock
	msgbox MrBrineyTalk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Peeko::
	lock
	faceplayer
	msgbox PeekoTalk
	face_down
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC1::
	lock
	msgbox NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC2::
	lock
	msgbox NPC2_TALK
	release
	return


MrBrineyTalk::
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, {COLOR BLUE}Peeko?$"

PeekoTalk::
	.string "{COLOR BLUE}Wrooooar!$"

NPC1_TALK::
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

NPC2_TALK::
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"
