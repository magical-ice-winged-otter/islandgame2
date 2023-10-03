ISLANDGAME_CHERIPORT_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC2_TALK
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_EventScript_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK
	release
	return


ISLANDGAME_CHERIPORT_HOUSE2_NPC1_TALK::
	.string "{COLOR DARK_GRAY}This building was once a derelict chapel\n"
	.string "on the brink of collapse.\p"
	.string "{COLOR DARK_GRAY}We have since then renovated it and\n"
	.string "given it a new purpose.\p"
	.string "{COLOR DARK_GRAY}To provide beach amenities and\n"
	.string "complimentary drinks to those in need.$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC2_TALK::
	.string "{COLOR DARK_GRAY}I wish I was a water Pokémon. Then, I\n"
	.string "wouldn't have to wear this inner tube!\p"
	.string "{COLOR DARK_GRAY}Which water Pokémon would you wanna\n"
	.string "be? I like Luvdisc, it's cute!$"

ISLANDGAME_CHERIPORT_HOUSE2_NPC3_TALK::
	.string "{COLOR DARK_GRAY}You look thirsty. Would you like a\n"
	.string "refreshing beverage?$"
