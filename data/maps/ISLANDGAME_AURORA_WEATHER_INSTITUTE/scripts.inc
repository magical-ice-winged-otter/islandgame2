ISLANDGAME_AURORA_WEATHER_INSTITUTE_MapScripts::
	.byte 0


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist::
	goto_if_unset FLAG_RECEIVED_CASTFORM, ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2, MSGBOX_NPC
	return

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0, MSGBOX_NPC
	callnative CheckDexCount
	compare VAR_0x8000, 20
	goto_if_ge ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_4
	return

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_4:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1, MSGBOX_NPC
	givemon SPECIES_CASTFORM, 18
	return


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0:
	.string "Hello there!\p"
	.string "I am one of Professor Palm's aides,\n"
	.string "studying Mt. Aurora from this facility.\p"
	.string "If you can catch 20 different Pokemon,\n"
	.string "I can give you a reward!$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1:
	.string "Wow, you've caught over 20 Pokemon!\p"
	.string "Here, take this Castform!$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2:
	.string "Mt. Aurora is a fascinating place to\n"
	.string "study.\p"
	.string "The effects of it on the ecosystem is\n"
	.string "unmatched on Oranna.$"
