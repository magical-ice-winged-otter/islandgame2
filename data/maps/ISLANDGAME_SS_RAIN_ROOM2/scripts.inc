ISLANDGAME_SS_RAIN_ROOM2_MapScripts::
	.byte 0


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


SS_Rain_EventScript_ItemRunningShoes::
	lockall
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox SwitchedRunningShoes_Text
	removeobject VAR_LAST_TALKED
	setflag FLAG_RECEIVED_RUNNING_SHOES
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
