ISLANDGAME_CHERIPORT_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_CHERIPORT_ONLOAD
	.2byte 0


ISLANDGAME_CHERIPORT_ONLOAD::
	setvar VAR_TEMP_0, 1
	goto_if_unset FLAG_LEFT_SHIP, ISLANDGAME_CHERIPORT_ONLOAD_1
	return

ISLANDGAME_CHERIPORT_ONLOAD_1:
	setflag FLAG_LEFT_SHIP
	return


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
