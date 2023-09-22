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
	release
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack
	waitmovement 0
	return


WalkBack:
	walk_left
	step_end

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
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC2::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC3::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC4::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC5::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC5_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC6::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC7::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC8::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC9::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN1::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN2::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN3::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN4::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC
	release
	return


NeedPokemon_Text::
	.string "{COLOR RED}Hello I need pokemon first.$"

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

MrBrineyTalk::
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, {COLOR BLUE}Peeko?$"

PeekoTalk::
	.string "{COLOR BLUE}Wrooooar!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK::
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK::
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK::
	.string "{COLOR DARK_GRAY}Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK::
	.string "{COLOR DARK_GRAY}Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC5_TALK::
	.string "{COLOR DARK_GRAY}Welcome to the island of Oranna,\n"
	.string "traveler.\p"
	.string "{COLOR DARK_GRAY}We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK::
	.string "{COLOR DARK_GRAY}Hiya! This is Cheriport. We get a lot of\n"
	.string "visitors from other regions here.\p"
	.string "{COLOR DARK_GRAY}I actually moved here from the Johto\n"
	.string "region not too long ago.$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK::
	.string "{COLOR DARK_GRAY}Come on... Come on... Argh! Not another\n"
	.string "Magikarp! I need a Barboach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK::
	.string "{COLOR DARK_GRAY}Cheriport is home to the Cheri Berry!\p"
	.string "{COLOR DARK_GRAY}They may not taste good to us, but\n"
	.string "Pokémon sure love them!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK::
	.string "{COLOR DARK_GRAY}-sigh- If only you were still here with\n"
	.string "us...$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC::
	.string "{COLOR DARK_GRAY}WELCOME TO CHERIPORT\n"
	.string "{COLOR DARK_GRAY}Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}PROFESSOR PALM'S LABORATORY$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC::
	.string "{COLOR DARK_GRAY}SEASIDE SERVICES\n"
	.string "{COLOR DARK_GRAY}Have a drink, it's on us!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC::
	.string "{COLOR DARK_GRAY}! WARNING !\n"
	.string "{COLOR DARK_GRAY}NO LIFEGUARD; SWIM AT YOUR OWN RISK!$"
