ISLANDGAME_SS_RAIN_ROOM3_MapScripts::
# 6 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SS_Rain_EventScript_InvadeRoom
	.2byte 0


SS_Rain_EventScript_InvadeRoom::
# 15 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lockall
# 16 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_set FLAG_ROOM3_GAVE_WATER, SS_Rain_EventScript_InvadeRoom_2
# 21 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	playse SE_PIN
# 22 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement 1, ExclaimFacePlayer
# 23 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 24 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_InvadeRoomReaction_Text
# 25 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmessage
# 26 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 27 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 29 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	case 0, SS_Rain_EventScript_InvadeRoom_6
# 31 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	case 1, SS_Rain_EventScript_InvadeRoom_7
SS_Rain_EventScript_InvadeRoom_4:
# 33 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	releaseall
	return

SS_Rain_EventScript_InvadeRoom_2:
# 18 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	releaseall
	return

SS_Rain_EventScript_InvadeRoom_6:
# 30 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto SS_Rain_EventScript_HasNoWater
	goto SS_Rain_EventScript_InvadeRoom_4

SS_Rain_EventScript_InvadeRoom_7:
# 31 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto SS_Rain_EventScript_HasWater
	goto SS_Rain_EventScript_InvadeRoom_4


# 36 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
ExclaimFacePlayer:
# 37 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	emote_exclamation_mark
# 38 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	face_player
# 39 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	step_end

# 42 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
WalkToPlayer:
# 43 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_left
# 44 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_up
# 45 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_up
# 46 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	step_end

# 48 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
RunAway:
# 49 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_in_place_faster_up
# 50 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	step_end

SS_Rain_EventScript_HasNoWater::
# 58 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RunAway
# 59 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 60 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	warpdoor MAP_SS_RAIN_HALLWAY, 19, 8
	return


SS_Rain_EventScript_HasWater::
# 64 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_EventScript_HasWater_Text_0
# 65 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmessage
# 66 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement 1, WalkToPlayer
# 67 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 68 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_EventScript_HasWater_Text_1
# 70 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setflag FLAG_ROOM3_GAVE_WATER
# 71 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 72 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement 1, RunAway
# 73 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 74 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_CalmGentleman_Text
# 75 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitbuttonpress
# 76 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
	return


SS_Rain_EventScript_Talk::
# 80 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lockall
# 81 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	faceplayer
# 82 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_CalmGentleman_Text
# 83 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	releaseall
	return


SS_Rain_EventScript_HasWater_Text_0:
# 64 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh?$"

SS_Rain_EventScript_HasWater_Text_1:
# 68 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}My nephew sent you to give me water?$"

SS_Rain_InvadeRoomReaction_Text::
# 53 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey! What are you doing in my room? Get\n"
	.string "out!$"

SS_Rain_CalmGentleman_Text::
# 86 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}I apologize for my rudeness. Please,\n"
	.string "make yourself at home.$"
