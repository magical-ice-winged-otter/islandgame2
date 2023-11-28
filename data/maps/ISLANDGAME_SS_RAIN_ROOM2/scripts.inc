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
	closemessage
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

ISLANDGAME_SS_RAIN_PLAYER_ROOM_Plush::
	lock
	msgbox ISLANDGAME_SS_RAIN_PLAYER_ROOM_PlushInspect
	release
	return


NeedRunningShoes_Text::
	.string "{COLOR RED}(I should also change into my Running\n"
	.string "Shoes before I leave.)$"

SwitchedRunningShoes_Text::
	.string "{COLOR DARK_GRAY}You switched into your Running Shoes!$"

ArrivedAtCheriport_Text::
	.string "{COLOR DARK_GRAY}Ladies and gentleman, this is your\n"
	.string "captain speaking!\p"
	.string "{COLOR DARK_GRAY}I'm happy to announce to you that we've\n"
	.string "finally reached our destination!\p"
	.string "{COLOR DARK_GRAY}On behalf of the entire crew, I'd like to\n"
	.string "thank you for choosing to sail with us.\p"
	.string "{COLOR DARK_GRAY}Now, set forth and explore the isles of\n"
	.string "Mariyama! Until next time. Buh-bye!\p"
	.string "{COLOR RED}(I've finally arrived. I should set my\n"
	.string "watch to the correct time.)$"

ISLANDGAME_SS_RAIN_PLAYER_ROOM_PlushInspect::
	.string "{COLOR RED}(Farewell, stuffed Pikachu. My Pokémon\n"
	.string "adventure starts today!)\p"
	.string "{COLOR RED}(Don't worry though, I'll be back. Look\n"
	.string "after my room in the meantime.)$"
