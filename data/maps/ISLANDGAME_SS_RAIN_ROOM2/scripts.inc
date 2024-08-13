ISLANDGAME_SS_RAIN_ROOM2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_unset FLAG_ROSEVALE_AMULET_COIN_GIFT, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_TEMP_1, 7
	goto ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_TEMP_1
	return

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 7, SS_Rain_EventScript_Intro
	.2byte 0


SS_Rain_EventScript_Intro::
	lockall
	playse SE_DING_DONG
	waitse
	setvar VAR_TEMP_1, 3
	msgbox SS_Rain_EventScript_Intro_Text_0
	waitmessage
	closemessage
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	releaseall
	return


ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll1::
	lock
	msgbox ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll1_Text_0
	release
	return


ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll2::
	lock
	msgbox ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll2_Text_0
	release
	return


SS_Rain_EventScript_Intro_Text_0:
	.string "Ladies and gentlemen, this is your\n"
	.string "devilishly handsome captain speaking!\p"
	.string "I'm delighted to announce that we've\n"
	.string "finally reached our destination!\p"
	.string "On behalf of the entire crew, I'd like to\n"
	.string "thank you for choosing to sail with us.\p"
	.string "Now, go out there and explore all that\n"
	.string "the Maryan Isles has to offer!\p"
	.string "We'll be patiently waiting here for your\n"
	.string "return! Until next time, buh-bye!$"

ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll1_Text_0:
	.string "{COLOR RED}(It's the Pikachu Doll I got when I was\n"
	.string "only six years old.)\p"
	.string "(I can't believe it's already been ten\n"
	.string "years...)$"

ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll2_Text_0:
	.string "{COLOR RED}(It's the Azurill Doll I got from\n"
	.string "Arthur's Sister during the night I\l"
	.string "stayed over at their inn.)\p"
	.string "(It's not shiny like hers, though.)$"
