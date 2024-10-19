ISLANDGAME_CHERIPORT_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_TOWN1_EventScript_NPC1Talk::
# 4 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	msgbox NPC1_Text
# 7 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_TOWN1_EventScript_NPC2Talk::
# 19 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	faceplayer
# 21 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	msgbox NPC2_Text
# 22 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	release
	return


NPC1_Text::
# 10 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}Oranna is home to one of Marya's\n"
	.string "legendary Isle Guardians.\p"
	.string "{COLOR DARK_GRAY}The mythical Pokémon: Articuno!\p"
	.string "{COLOR DARK_GRAY}I've never seen it in person, but they\n"
	.string "say its wings can cause a blizzard!$"

NPC2_Text::
# 25 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}I used to go to the beach every day.\p"
	.string "{COLOR DARK_GRAY}But ever since Cheriport became a hot\n"
	.string "vacation spot, it's been hard to find\l"
	.string "space on the sand...$"
