ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_Clear::
# 4 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 6 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	setvar VAR_TEMP_1, 0
# 7 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck::
# 11 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	lock
# 12 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 14 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2
# 23 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 24 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1, MSGBOX_NPC
# 25 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 26 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	setvar VAR_TEMP_1, 1
ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1:
# 29 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2:
# 15 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 16 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0, MSGBOX_NPC
# 19 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Applevine_Movement_PushPlayerFromCounter
# 20 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	waitmovement 0
	goto ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1


# 32 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
Applevine_Movement_PushPlayerFromCounter:
# 33 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	walk_right
	step_end

# 36 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
Applevine_MadHops:
# 37 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	jump_in_place_down
# 38 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	jump_in_place_left
# 39 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	jump_in_place_up
# 40 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	jump_in_place_right
	step_end

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC::
# 44 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	faceplayer
# 46 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_0
# 49 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement 2, Applevine_MadHops
# 50 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	waitmovement 0
# 51 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 52 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	waitmovement 0
# 53 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_1
# 57 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	closemessage
# 58 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0:
# 17 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	.string "Hey! It's too dangerous to go on the\n"
	.string "bike path without a bike!$"

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1:
# 24 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	.string "Welcome to the Seaside Bike Path!\n"
	.string "Please be aware of other bikers.$"

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_0:
# 47 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	.string "Hey! Check out my mad hops!$"

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_1:
# 54 "data/maps/ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING/scripts.pory"
	.string "See those sick moves? You can't do that\n"
	.string "with one of those lame Mach Bikes.\p"
	.string "If you wanna be fly like me, you'll have\n"
	.string "to hit up the shop on Minerva Island!$"
