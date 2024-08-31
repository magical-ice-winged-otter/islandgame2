ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Togepi_NPC::
	lock
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Togepi_NPC_Text_0
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_NPC_1::
	lock
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_NPC_1_Text_0
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Spoink::
	playmoncry SPECIES_SPOINK, CRY_MODE_NORMAL
	waitmoncry
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Cubone::
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
	waitmoncry
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Phanpy::
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
	waitmoncry
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Togepi_NPC_Text_0:
	.string "Oh dear... that SPOINK is about to make a bigger mess than it already has.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_NPC_1_Text_0:
	.string "I like taking care of this CUBONE. It sits still and never causes a mess, mostly because.... nevermind.$"
