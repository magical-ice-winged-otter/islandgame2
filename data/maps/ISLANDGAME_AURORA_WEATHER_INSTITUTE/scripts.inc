ISLANDGAME_AURORA_WEATHER_INSTITUTE_MapScripts::
	.byte 0


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist::
# 4 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0, MSGBOX_YESNO
# 14 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_2
# 40 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1
# 43 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	goto Scientist_End
ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1:
# 46 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
Scientist_End:
# 47 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	closemessage
# 48 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	release
	return

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_2:
# 15 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	waitstate
# 17 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_5
# 25 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 26 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	compare VAR_RESULT, SPECIES_LAPRAS
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_8
# 32 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_3
# 35 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	goto Scientist_End
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_5:
# 19 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1
# 22 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	goto Scientist_End
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_8:
# 27 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0:
# 7 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	.string "Hello! I'm one of Professor Palm's aides.\n"
	.string "You must be {PLAYER}, I assume?\p"
	.string "I'm here to conduct research on the\n"
	.string "inhabitants of Mt. Aurora.\p"
	.string "...Buuuut I didn't realize how gosh darn\n"
	.string "cold it is here, especially in the cave.\p"
	.string "I'm not very good with the cold, so I've\n"
	.string "stayed indoors for the time being.\p"
	.string "Any chance you'd be willing to help me\n"
	.string "fill out the last Pokémon entry I need?\p"
	.string "The only Pokemon I wasn't able to find\n"
	.string "was {COLOR LIGHT_BLUE}Lapras{COLOR DARK_GRAY}. Do you have one by chance?$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1:
# 20 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	.string "Ah, no worries. They're a pretty rare\n"
	.string "sight in the cavern.$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2:
# 28 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	.string "Wow! That is a Lapras! Here is your\n"
	.string "reward! (placeholder)$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_3:
# 33 "data/maps/ISLANDGAME_AURORA_WEATHER_INSTITUTE/scripts.pory"
	.string "Hm, I'm afraid that's not a Lapras. They\n"
	.string "can be found deep in Mt. Aurora.$"
