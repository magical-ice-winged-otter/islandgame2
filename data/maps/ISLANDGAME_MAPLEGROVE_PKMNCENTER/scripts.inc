ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts::
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ISLANDGAME_MAPLEGROVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_MAPLEGROVE
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_PKMN1::
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	faceplayer
# 14 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_PKMN1Talk
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_PKMN2::
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	faceplayer
# 28 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	waitmoncry
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_NPC1::
# 35 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	lock
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	faceplayer
# 37 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_NPC1Talk
# 38 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 39 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	waitmovement 0
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_EventScript_Ball::
# 52 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	lock
# 53 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_PKMNCENTER_BallText
# 54 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_PKMNCENTER_PKMN1Talk::
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	.string "{COLOR DARK_GRAY}Chika Chika! {COLOR BLUE}(Boom Boom!)$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_NPC1Talk::
# 43 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	.string "{COLOR DARK_GRAY}Waaah! Those Mightyena are a bunch of\n"
	.string "mean bullies!\p"
	.string "{COLOR DARK_GRAY}They beat my precious Pokémon up!\p"
	.string "{COLOR DARK_GRAY}Our butts would've been toast if it\n"
	.string "wasn't for Mr. Pokémon Ranger!$"

ISLANDGAME_MAPLEGROVE_PKMNCENTER_BallText::
# 57 "data/maps/ISLANDGAME_MAPLEGROVE_PKMNCENTER/scripts.pory"
	.string "{COLOR DARK_GRAY}A Pokémon seems to be resting inside\n"
	.string "the Pokéball. It seems hurt.$"
