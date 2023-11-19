ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_NORANNA_PRIM_CUTSCENE_FINISHED, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_0, 1
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_RestHouseSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_RestHouseSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_TidalCoveApproachSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_TidalCoveApproachSign_Text_0, MSGBOX_SIGN
	return


Movement_LuxrayAttack:
	walk_right
	step_end

Movement_PrimWalkAway:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_LuxrayWalkAway:
	walk_down
	face_right
	delay_16
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Fan1WalkAway:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Fan2WalkAway:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene::
	lock
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_0
	closemessage
	applymovement 8, Movement_LuxrayAttack
	waitmovement 8
	playmoncry SPECIES_LUXRAY, CRY_MODE_NORMAL
	waitmoncry
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_1
	closemessage
	applymovement 1, Movement_PrimWalkAway
	applymovement 8, Movement_LuxrayWalkAway
	applymovement 7, Movement_Fan1WalkAway
	applymovement 5, Movement_Fan2WalkAway
	waitmovement 1
	waitmovement 8
	waitmovement 7
	waitmovement 5
	removeobject 1
	removeobject 8
	removeobject 7
	removeobject 5
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
	setvar VAR_TEMP_0, 1
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_RestHouseSign_Text_0:
	.string "REST HOUSE$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_TidalCoveApproachSign_Text_0:
	.string "PATH TO TIDALCOVE$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_0:
	.string "Prim: Luxray, finish things up here.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_1:
	.string "Prim: Man, that was a waste of time! You\n"
	.string "should have just given me the spot...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0:
	.string "Man, I lost so bad...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0:
	.string "Prim is really good... if only she could\n"
	.string "wake up earlier.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0:
	.string "It doesn't matter how good Prim is; she\n"
	.string "still has no chance against Ruka.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0:
	.string "Since so many people come by to\n"
	.string "challenge Ruka, she can only accept a\l"
	.string "limited amount of people each day. Prim\l"
	.string "was just fighting for the last spot.$"
