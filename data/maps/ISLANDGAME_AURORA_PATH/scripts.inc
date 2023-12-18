ISLANDGAME_AURORA_PATH_MapScripts::
	.byte 0


ISLANDGAME_AURORA_PATH_Interact_EntranceSign::
	msgbox ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute::
	msgbox ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0:
	.string "AURORA PATH\n"
	.string "{UP_ARROW}MT. AURORA$"

ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0:
	.string "MT. AURORA WEATHER INSTITUTE\n"
	.string "Please visit, I'm very lonely$"
