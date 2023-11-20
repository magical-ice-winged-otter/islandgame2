ISLANDGAME_SS_RAIN_ROOM2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_SET_WALL_CLOCK, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_1, 7
	return

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 7, SS_Rain_EventScript_SetClock
	.2byte 0


SS_Rain_EventScript_NeedRunningShoes::
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, SS_Rain_EventScript_NeedRunningShoes_2
SS_Rain_EventScript_NeedRunningShoes_1:
	releaseall
	return

SS_Rain_EventScript_NeedRunningShoes_2:
	lockall
	msgbox NeedRunningShoes_Text
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, NeedRunningShoes_Movement
	waitmovement 0
	goto SS_Rain_EventScript_NeedRunningShoes_1


SS_Rain_EventScript_SetClock::
	lockall
	setvar VAR_TEMP_1, 3
	fadescreen FADE_TO_BLACK
	msgbox ArrivedAtCheriport_Text
	waitmessage
	special StartWallClock
	waitstate
	delay 30
	setflag FLAG_SET_WALL_CLOCK
	releaseall
	return


SS_Rain_EventScript_ItemRunningShoes::
	lockall
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox SwitchedRunningShoes_Text
	removeobject VAR_LAST_TALKED
	setflag FLAG_SYS_B_DASH
	releaseall
	return


NeedRunningShoes_Movement:
	walk_down
	face_down
	step_end

NeedRunningShoes_Text::
	.string "{COLOR DARK_GRAY}I should get my Running Shoes...$"

SwitchedRunningShoes_Text::
	.string "{COLOR DARK_GRAY}You switched your shoes with the\n"
	.string "{COLOR DARK_GRAY}Running Shoes!$"

ArrivedAtCheriport_Text::
	.string "{COLOR DARK_GRAY}This is the captain of SS Rain, and we\n"
	.string "have arrived at Cheriport earlier than\l"
	.string "our expected time of...?$"
