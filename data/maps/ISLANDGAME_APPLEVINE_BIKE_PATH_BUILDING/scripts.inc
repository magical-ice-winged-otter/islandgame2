ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_Clear::
	lock
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	release
	return


ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck::
	lock
	specialvar VAR_RESULT, GetPlayerAvatarBike
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1, MSGBOX_NPC
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1:
	release
	return

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, Applevine_Movement_PushPlayerFromCounter
	waitmovement 0
	goto ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_1


Applevine_Movement_PushPlayerFromCounter:
	walk_right
	step_end

Applevine_MadHops:
	jump_in_place_down
	jump_in_place_left
	jump_in_place_up
	jump_in_place_right
	step_end

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_0
	applymovement 2, Applevine_MadHops
	waitmovement 0
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_1
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_0:
	.string "Hey! It's too dangerous to go on the\n"
	.string "bike path without a bike!$"

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_Trigger_BikeCheck_Text_1:
	.string "Welcome to the Seaside Bike Path!\n"
	.string "Please be aware of other bikers.$"

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_0:
	.string "Hey! Check out my mad hops!$"

ISLANDGAME_APPLEVINE_BIKE_PATH_BUILDING_NPC_Text_1:
	.string "See those sick moves? You can't do that\n"
	.string "with one of those lame Mach Bikes.\p"
	.string "If you wanna be fly like me, you'll have\n"
	.string "to hit up the shop on Minerva Island!$"
