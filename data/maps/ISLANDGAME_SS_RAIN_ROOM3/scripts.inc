ISLANDGAME_SS_RAIN_ROOM3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_TEMP_0, 0
	return

ISLANDGAME_SS_RAIN_ROOM3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, SS_Rain_EventScript_InvadeRoom
	.2byte 0


SS_Rain_EventScript_InvadeRoom::
	lockall
	setvar VAR_TEMP_0, 1
	applymovement 1, ExclaimFacePlayer
	waitmovement 0
	msgbox SS_Rain_InvadeRoomReaction_Text
	waitmessage
	closemessage
	checkitem ITEM_FRESH_WATER, 1
	switch VAR_RESULT
	case 0, SS_Rain_EventScript_InvadeRoom_3
	case 1, SS_Rain_EventScript_InvadeRoom_4
SS_Rain_EventScript_InvadeRoom_1:
	releaseall
	return

SS_Rain_EventScript_InvadeRoom_3:
	goto SS_Rain_EventScript_HasNoWater
	goto SS_Rain_EventScript_InvadeRoom_1

SS_Rain_EventScript_InvadeRoom_4:
	goto SS_Rain_EventScript_HasWater
	goto SS_Rain_EventScript_InvadeRoom_1


ExclaimFacePlayer:
	emote_exclamation_mark
	face_player
	step_end

WalkToPlayer:
	walk_left
	walk_up
	walk_up
	step_end

RunAway:
	walk_in_place_faster_up
	step_end

SS_Rain_EventScript_HasNoWater::
	applymovement OBJ_EVENT_ID_PLAYER, RunAway
	waitmovement 0
	warpdoor MAP_SS_RAIN_HALLWAY, 20, 11
	return


SS_Rain_EventScript_HasWater::
	msgbox SS_Rain_EventScript_HasWater_Text_0
	waitmessage
	applymovement 1, WalkToPlayer
	waitmovement 0
	msgbox SS_Rain_EventScript_HasWater_Text_1
	setflag FLAG_ROOM3_GAVE_WATER
	removeitem ITEM_FRESH_WATER, 1
	applymovement 1, RunAway
	waitmovement 0
	msgbox SS_Rain_CalmGentleman_Text
	waitbuttonpress
	closemessage
	return


SS_Rain_EventScript_Talk::
	lockall
	faceplayer
	msgbox SS_Rain_CalmGentleman_Text
	releaseall
	return


SS_Rain_EventScript_Item::
	finditem ITEM_RARE_CANDY
	return


SS_Rain_EventScript_HasWater_Text_0:
	.string "{COLOR RED}Huh?$"

SS_Rain_EventScript_HasWater_Text_1:
	.string "{COLOR RED}He sent you to give me water?$"

SS_Rain_InvadeRoomReaction_Text::
	.string "{COLOR RED}What are you doing in my room? Get out!$"

SS_Rain_CalmGentleman_Text::
	.string "{COLOR DARK_GRAY}I apologize for my rudeness. I don't\n"
	.string "take kindly to strangers entering my\l"
	.string "room without notice.$"
