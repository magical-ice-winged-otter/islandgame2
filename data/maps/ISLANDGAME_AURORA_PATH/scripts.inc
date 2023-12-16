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
	.string "AURORA PATH\n"
	.string "MT. AURORA{UP_ARROW}$"

ISLANDGAME_AURORA_PATH_Interact_MtSign_Text_0:
	.string "MT. AURORA\n"
	.string "BEWARE OF SUBZERO TEMPERATURES$"

ISLANDGAME_AURORA_PATH_Interact_WeatherInstitute_Text_0:
	.string "MT. AURORA WEATHER INSTITUTE\n"
	.string "Please visit, I'm very lonely$"
