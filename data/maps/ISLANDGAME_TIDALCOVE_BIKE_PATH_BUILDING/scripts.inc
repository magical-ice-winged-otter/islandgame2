ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Interact_Employee::
	msgbox ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Interact_Employee_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_Clear::
	lock
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	release
	return


ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck::
	lock
	specialvar VAR_RESULT, GetPlayerAvatarBike
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2
	msgbox ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1, MSGBOX_NPC
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1:
	release
	return

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2:
	msgbox ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PushPlayerFromCounter
	waitmovement 0
	goto ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1


Movement_PushPlayerFromCounter:
	walk_left
	step_end

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Interact_Employee_Text_0:
	.string "On the Bike Path, you can go really\n"
	.string "fast!\p"
	.string "Try to not hit other bikers.$"

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0:
	.string "Oh, you can't enter the Bike Path\n"
	.string "without a bike!\p"
	.string "It's too dangerous.$"

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1:
	.string "Welcome to the bike road!$"
