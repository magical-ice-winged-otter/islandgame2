ISLANDGAME_CHERIPORT_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_CHERIPORT_OnLoad
	.2byte 0


ISLANDGAME_CHERIPORT_OnLoad::
	setvar VAR_TEMP_0, 1
	goto_if_unset FLAG_LEFT_SHIP, ISLANDGAME_CHERIPORT_OnLoad_2
ISLANDGAME_CHERIPORT_OnLoad_1:
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_OnLoad_4
	return

ISLANDGAME_CHERIPORT_OnLoad_2:
	setflag FLAG_LEFT_SHIP
	goto ISLANDGAME_CHERIPORT_OnLoad_1

ISLANDGAME_CHERIPORT_OnLoad_4:
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning::
	lock
	msgbox NeedPokemon_Text
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown
	waitmovement 0
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_MrBriney::
	lock
	msgbox MrBrineyTalk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Girl3::
	lock
	faceplayer
	msgbox NPCGirl_Talk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Boy4::
	lock
	faceplayer
	msgbox NPCBoy_Talk
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


WalkDown:
	walk_down
	step_end

NPCGirl_Talk::
	.string "{COLOR DARK_GRAY}The islands are known for their tropical\n"
	.string "weather, though at times there have\l"
	.string "been bad storms that have even scared\l"
	.string "POKéMON.$"

NPCBoy_Talk::
	.string "{COLOR DARK_GRAY}While I was out exploring Southern\n"
	.string "Oranna Path during dusk, one of the\l"
	.string "mountain POKéMON attacked me. I've\l"
	.string "never seen one like it before, but I'm\l"
	.string "too scared to try to see it again.$"

NeedPokemon_Text::
	.string "{COLOR RED}Hello I need pokemon first.$"

MrBrineyTalk::
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, {COLOR BLUE}Peeko?$"

PeekoTalk::
	.string "{COLOR BLUE}Wrooooar!$"

NPC1_TALK::
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

NPC2_TALK::
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"
