ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay::
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 21 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 23 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight::
# 31 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 33 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 34 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0
# 37 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny::
# 42 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster::
# 53 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 55 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	goto_if_unset FLAG_TEMP_3, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2
# 61 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1
ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1:
# 66 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 67 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_2:
# 56 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0
	goto ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_1


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie::
# 71 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0
# 75 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 76 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo::
# 81 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 82 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0
# 85 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 86 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman::
# 90 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	lock
# 91 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	faceplayer
# 92 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0
# 95 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	closemessage
# 96 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuDay_Text_0:
# 24 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "I LIEK CEREAL!!!!!!!!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_PichuNight_Text_0:
# 35 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Mmmmmm...{PAUSE 60} chocolat melk$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Happiny_Text_0:
# 46 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "COCO COCO COCO COCO!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_0:
# 57 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Oh-ho-ho, these baby Pokémon are\n"
	.string "always so full of energy. I envy it.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MadameFoster_Text_1:
# 62 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "Hello dearie! All of the Pokémon have\n"
	.string "gone to bed.\p"
	.string "I'm afraid you'll have to come back\n"
	.string "during the day if you'd like to adopt.$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Frankie_Text_0:
# 73 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "BLOO!!!{PAUSE 30} GET YOUR BOUNCY BEHIND OVER\n"
	.string "HERE AND CLEAN UP THE MESS YOU MADE!!!$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_Sudowoodo_Text_0:
# 83 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "{COLOR RED}(Contrary to its appearance, it's just a\n"
	.string "toy that looks like a Sudowoodo.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_MrHerriman_Text_0:
# 93 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME/scripts.pory"
	.string "$"
