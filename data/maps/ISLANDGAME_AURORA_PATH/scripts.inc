ISLANDGAME_AURORA_PATH_MapScripts::
	.byte 0


ISLANDGAME_AURORA_PATH_Interact_EntranceSign::
	msgbox ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_MtSign::
	msgbox ISLANDGAME_AURORA_PATH_Interact_MtSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute::
	msgbox ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AURORA_PATH_Interact_EntranceSign_Text_0:
	.string "AURORA PATH$"

ISLANDGAME_AURORA_PATH_Interact_MtSign_Text_0:
	.string "MT. AURORA\p"
	.string "Peak Elevation: Very High$"

ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0:
	.string "Weather Institute$"
