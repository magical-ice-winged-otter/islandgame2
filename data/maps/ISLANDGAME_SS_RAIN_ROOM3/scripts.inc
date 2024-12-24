ISLANDGAME_SS_RAIN_ROOM3_MapScripts::
# 6 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setvar VAR_TEMP_0, 0
# 8 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_unset FLAG_LEFT_SS_RAIN, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SS_Rain_EventScript_InvadeRoom
	.2byte 0


SS_Rain_EventScript_InvadeRoom::
# 18 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lockall
# 19 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setvar VAR_TEMP_0, 1
# 20 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_set FLAG_ROOM3_GAVE_WATER, SS_Rain_EventScript_InvadeRoom_2
# 24 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	playse SE_PIN
# 25 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement 1, ExclaimFacePlayer
# 26 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 27 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_InvadeRoomReaction_Text
# 28 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmessage
# 29 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 31 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_set FLAG_LEFT_SS_RAIN, SS_Rain_EventScript_InvadeRoom_6
SS_Rain_EventScript_InvadeRoom_4:
# 35 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 38 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	case 0, SS_Rain_EventScript_InvadeRoom_11
# 40 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	case 1, SS_Rain_EventScript_InvadeRoom_12
SS_Rain_EventScript_InvadeRoom_9:
# 42 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	releaseall
	return

SS_Rain_EventScript_InvadeRoom_2:
# 21 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	releaseall
	return

SS_Rain_EventScript_InvadeRoom_5:
# 32 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto SS_Rain_EventScript_HasNoWater
	goto SS_Rain_EventScript_InvadeRoom_4

SS_Rain_EventScript_InvadeRoom_6:
# 31 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto_if_unset FLAG_ROOM3_GAVE_WATER, SS_Rain_EventScript_InvadeRoom_5
	goto SS_Rain_EventScript_InvadeRoom_4

SS_Rain_EventScript_InvadeRoom_11:
# 39 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto SS_Rain_EventScript_HasNoWater
	goto SS_Rain_EventScript_InvadeRoom_9

SS_Rain_EventScript_InvadeRoom_12:
# 40 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	goto SS_Rain_EventScript_HasWater
	goto SS_Rain_EventScript_InvadeRoom_9


# 45 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
ExclaimFacePlayer:
# 46 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	emote_exclamation_mark
# 47 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	face_player
# 48 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	step_end

# 51 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
WalkToPlayer:
# 52 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_left
# 53 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_up
# 54 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_up
# 55 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	step_end

# 57 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
RunAway:
# 58 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	walk_in_place_faster_up
# 59 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	step_end

SS_Rain_EventScript_HasNoWater::
# 67 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RunAway
# 68 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 69 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	warpdoor MAP_SS_RAIN_HALLWAY, 19, 8
	return


SS_Rain_EventScript_HasWater::
# 73 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_EventScript_HasWater_Text_0
# 74 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmessage
# 75 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 76 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement 1, WalkToPlayer
# 77 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 78 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_EventScript_HasWater_Text_1
# 79 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 81 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	setflag FLAG_ROOM3_GAVE_WATER
# 82 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 83 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	applymovement 1, RunAway
# 84 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitmovement 0
# 85 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_CalmGentleman_Text
# 86 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	waitbuttonpress
# 87 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
	return


SS_Rain_EventScript_Talk::
# 91 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lockall
# 92 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	faceplayer
# 93 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox SS_Rain_CalmGentleman_Text
# 94 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	releaseall
	return


ISLANDGAME_SS_RAIN_ROOM3_Boy::
# 102 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	lock
# 103 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	faceplayer
# 104 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	msgbox ISLANDGAME_SS_RAIN_ROOM3_Boy_Text_0
# 107 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	closemessage
# 108 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	release
	return


SS_Rain_EventScript_HasWater_Text_0:
# 73 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh?$"

SS_Rain_EventScript_HasWater_Text_1:
# 78 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}My nephew sent you to give me water?$"

ISLANDGAME_SS_RAIN_ROOM3_Boy_Text_0:
# 105 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "I don't get many chances to see\n"
	.string "pristine seas like the ones here often.$"

SS_Rain_InvadeRoomReaction_Text::
# 62 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey! What are you doing in my room? Get\n"
	.string "out!$"

SS_Rain_CalmGentleman_Text::
# 97 "data/maps/ISLANDGAME_SS_RAIN_ROOM3/scripts.pory"
	.string "{COLOR DARK_GRAY}I apologize for my rudeness. Please,\n"
	.string "make yourself at home.$"
