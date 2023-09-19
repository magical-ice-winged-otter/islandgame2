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
	.string "{COLOR DARK_GRAY}Take a rest on our beach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}PROFESSOR PALM'S LABORATORY\n"
	.string "{COLOR DARK_GRAY}Just follow this path!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC::
	.string "{COLOR DARK_GRAY}SEASIDE CHAPEL\n"
	.string "{COLOR DARK_GRAY}We also provide beach supplies!$"
