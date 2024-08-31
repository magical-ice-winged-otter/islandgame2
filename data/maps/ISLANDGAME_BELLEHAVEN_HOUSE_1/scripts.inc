ISLANDGAME_BELLEHAVEN_HOUSE_1_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_1::
	lock
	faceplayer
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_1_Text_0
	release
	return


ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_2::
	lock
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_2_Text_0
	release
	return


ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_1_Text_0:
	.string "We moved here from Applevine, and we\n"
	.string "are liking it so far.\p"
	.string "It's much quieter and peaceful\n"
	.string "compared to there, except we hate\l"
	.string "moving!$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_2_Text_0:
	.string "The building is pretty old.... Looks like\n"
	.string "we need a water filter.$"
