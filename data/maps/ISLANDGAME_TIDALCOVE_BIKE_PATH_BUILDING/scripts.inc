ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Interact_Biker::
# 11 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Interact_Biker_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_Clear::
# 18 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 20 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck::
# 25 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 28 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2
# 37 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 38 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1, MSGBOX_NPC
# 39 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 40 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	setvar VAR_TEMP_1, 1
ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1:
# 43 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2:
# 29 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 30 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0, MSGBOX_NPC
# 33 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Tidalcove_Movement_PushPlayerFromCounter
# 34 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	waitmovement 0
	goto ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1


# 46 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
Tidalcove_Movement_PushPlayerFromCounter:
# 47 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	walk_left
	step_end

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Interact_Biker_Text_0:
# 12 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	.string "POKÉMON BATTLES ON BICYCLES!!!\p"
	.string "Sorry. I've been watching a lot of\n"
	.string "abridged anime lately.$"

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0:
# 31 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	.string "Hey! It's too dangerous to go on the\n"
	.string "bike path without a bike!$"

ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1:
# 38 "data/maps/ISLANDGAME_TIDALCOVE_BIKE_PATH_BUILDING/scripts.pory"
	.string "Welcome to the Seaside Bike Path!\n"
	.string "Please be aware of other bikers.$"
