ISLANDGAME_SS_RAIN_ROOM2_MapScripts::
# 2 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	goto_if_unset FLAG_ROSEVALE_AMULET_COIN_GIFT, ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_SS_RAIN_ROOM2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	map_script_2 VAR_TEMP_1, 7, SS_Rain_EventScript_Intro
	.2byte 0


SS_Rain_EventScript_Intro::
# 18 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	lockall
# 19 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	playse SE_DING_DONG
# 20 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	waitse
# 21 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	setvar VAR_TEMP_1, 3
# 22 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	msgbox SS_Rain_EventScript_Intro_Text_0
# 29 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	waitmessage
# 34 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	closemessage
# 37 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	releaseall
	return


ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll1::
# 41 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	msgbox ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll1_Text_0
# 46 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	release
	return


ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll2::
# 50 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	msgbox ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll2_Text_0
# 55 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	release
	return


SS_Rain_EventScript_NeedRunningShoes::
# 59 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, SS_Rain_EventScript_NeedRunningShoes_2
SS_Rain_EventScript_NeedRunningShoes_1:
# 69 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	releaseall
	return

SS_Rain_EventScript_NeedRunningShoes_2:
# 60 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	lockall
# 61 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	msgbox SS_Rain_EventScript_NeedRunningShoes_Text_0
# 64 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	waitmessage
# 65 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	closemessage
# 66 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 67 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	waitmovement 0
	goto SS_Rain_EventScript_NeedRunningShoes_1


SS_Rain_EventScript_ItemRunningShoes::
# 73 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	lockall
# 74 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 75 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	msgbox SS_Rain_EventScript_ItemRunningShoes_Text_0
# 79 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	removeobject VAR_LAST_TALKED
# 80 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 81 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	releaseall
	return


SS_Rain_EventScript_Intro_Text_0:
# 23 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
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
# 43 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	.string "{COLOR RED}(It's the Pikachu Doll I got when I was\n"
	.string "only six years old.)\p"
	.string "(I can't believe it's already been ten\n"
	.string "years...)$"

ISLANDGAME_SS_RAIN_PLAYER_ROOM_Doll2_Text_0:
# 52 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	.string "{COLOR RED}(It's the Azurill Doll I got from\n"
	.string "Arthur's Sister during the night I\l"
	.string "stayed over at their inn.)\p"
	.string "(It's not shiny like hers, though.)$"

SS_Rain_EventScript_NeedRunningShoes_Text_0:
# 62 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	.string "{COLOR RED}(I should probably get my shoes before\n"
	.string "I leave.)$"

SS_Rain_EventScript_ItemRunningShoes_Text_0:
# 76 "data/maps/ISLANDGAME_SS_RAIN_ROOM2/scripts.pory"
	.string "You changed into your Running Shoes!\p"
	.string "Pro-Tip: You can press the “R” button\n"
	.string "to toggle auto-running!$"
