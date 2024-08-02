ISLANDGAME_AURORA_WEATHER_INSTITUTE_MapScripts::
	.byte 0


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist::
	lock
	faceplayer
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_2
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1
	goto Scientist_End
ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1:
Scientist_End:
	closemessage
	release
	return

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_2:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_5
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_LAPRAS
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_8
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_3
	goto Scientist_End
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_5:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1
	goto Scientist_End
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_8:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0:
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
	.string "Ah, no worries. They're a pretty rare\n"
	.string "sight in the cavern.$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2:
	.string "Wow! That is a Lapras! Here is your\n"
	.string "reward! (placeholder)$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_3:
	.string "Hm, I'm afraid that's not a Lapras. They\n"
	.string "can be found deep in Mt. Aurora.$"
