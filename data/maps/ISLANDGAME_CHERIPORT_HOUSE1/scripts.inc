ISLANDGAME_CHERIPORT_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_TOWN1_EventScript_NPC1Talk::
	lock
	faceplayer
	msgbox NPC1_Text
	release
	return


ISLANDGAME_CHERIPORT_TOWN1_EventScript_NPC2Talk::
	lock
	faceplayer
	msgbox NPC2_Text
	release
	return


NPC1_Text::
	.string "{COLOR DARK_GRAY}Oranna is home to one of Mariyama's\n"
	.string "legendary Isle Guardians.\p"
	.string "{COLOR DARK_GRAY}The mythical Pokémon: Articuno!\p"
	.string "{COLOR DARK_GRAY}I've never seen it in person, but they\n"
	.string "say its wings can cause a blizzard!\p"
	.string "$"

NPC2_Text::
	.string "{COLOR DARK_GRAY}I used to go to the beach every day,\n"
	.string "but ever since Cheriport became a hot\l"
	.string "new vacation spot, it's been hard to\l"
	.string "find space on the sand...$"
