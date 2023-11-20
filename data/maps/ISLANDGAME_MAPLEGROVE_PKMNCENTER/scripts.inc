ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ISLANDGAME_MAPLEGROVE
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_PKMN1::
	lock
	faceplayer
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_PKMN1Talk
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_PKMN2::
	lock
	faceplayer
	playmoncry SPECIES_SKIDDO, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_PKMN2Talk
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_NPC1Talk
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_Ball::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_BallText
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_PKMN1Talk::
	.string "{COLOR DARK_GRAY}Pip-pip!$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_PKMN2Talk::
	.string "{COLOR DARK_GRAY}Baah.$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_NPC1Talk::
	.string "{COLOR DARK_GRAY}Waaah! Those Mightyena are a bunch of\n"
	.string "mean bullies!\p"
	.string "{COLOR DARK_GRAY}They beat my precious Pokémon up!\p"
	.string "{COLOR DARK_GRAY}Our butts would've been toast if it\n"
	.string "wasn't for Mr. Pokémon Ranger!$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_BallText::
	.string "{COLOR DARK_GRAY}A Pokémon seems to be resting inside\n"
	.string "the Pokéball. It seems hurt.$"
