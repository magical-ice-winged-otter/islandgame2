ISLANDGAME_MINTY_MEADOWS_2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_MINTY_MEADOWS_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad
	.2byte 0


ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad::
	setvar VAR_TEMP_0, 1
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_2
	case 1, ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_2
	case 4, ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_2
	case 2, ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_3
	case 3, ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_3
	return

ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_2:
	removeobject 11
	removeobject 12
	return

ISLANDGAME_MINTY_MEADOWS_2_Mareep_OnLoad_3:
	goto ISLANDGAME_MINTY_MEADOWS_2_PrepareEncounter_Mightyena
	return


ISLANDGAME_MINTY_MEADOWS_2_PrepareEncounter_Mightyena::
	addobject 11
	addobject 12
	setobjectxy 11, 46, 16
	setobjectxy 12, 41, 16
	turnobject 11, DIR_EAST
	turnobject 12, DIR_WEST
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_1::
	lock
	setvar VAR_MINTY_MEADOWS_STATE, 2
	addobject 11
	addobject 12
	setobjectxy 11, 32, 37
	setobjectxy 12, 32, 37
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	addobject 11
	addobject 12
	applymovement 11, Phase1_MareepRun_1
	waitmovement 11
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
	applymovement 11, Common_Movement_Delay48
	waitmovement 11
	applymovement 11, Common_Movement_Delay48
	waitmovement 11
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_ENCOUNTER
	applymovement 11, Phase1_MareepRun_2
	waitmovement 11
	applymovement 11, Phase1_MareepRun_3
	applymovement 12, Phase1_MightyenaChase
	waitmovement 12
	removeobject 11
	removeobject 12
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_SeeMareep_2::
	lock
	setvar VAR_MINTY_MEADOWS_STATE, 3
	release
	return


ISLANDGAME_MINTY_MEADOWS_2_BattleMightyena::
	lock
	setvar VAR_MINTY_MEADOWS_STATE, 4
	release
	return


Phase1_MareepRun_1:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Phase1_MareepRun_2:
	face_down
	emote_exclamation_mark
	delay_16
	step_end

Phase1_MareepRun_3:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Phase1_MightyenaChase:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end
