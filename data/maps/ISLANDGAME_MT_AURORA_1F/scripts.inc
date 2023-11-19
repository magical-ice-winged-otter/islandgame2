ISLANDGAME_MT_AURORA_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_ROSEVALE_STATE, 1
	goto_if_ne ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return

ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	compare VAR_ROSEVALE_STATE, 5
	goto_if_ne ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


Movement_PlayerApproach:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Movement_Surprise:
	emote_exclamation_mark
	step_end

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene::
	lock
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerApproach
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement 2, Movement_Surprise
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_1
	closemessage
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_2, ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_3, ThiefDefeated
	return


Movement_ThiefRunAway:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ThiefDefeated:
	msgbox ThiefDefeated_Text_0
	closemessage
	fadescreen FADE_TO_WHITE
	addobject 4
	setobjectxy 4, 15, 29
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
	msgbox ThiefDefeated_Text_1
	closemessage
	applymovement 2, Movement_ThiefRunAway
	waitmovement 0
	removeobject 2
	msgbox ThiefDefeated_Text_2
	closemessage
	fadescreen FADE_TO_WHITE
	removeobject 4
	fadescreen FADE_FROM_WHITE
	msgbox ThiefDefeated_Text_3
	setvar VAR_ROSEVALE_STATE, 2
	warp MAP_ISLANDGAME_ROSEVALE, 17, 24
	return


ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_0:
	.string "thief trash talk$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_1:
	.string "thief player convo$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_2:
	.string "intro$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_3:
	.string "loss$"

ThiefDefeated_Text_0:
	.string "refusal to surrender$"

ThiefDefeated_Text_1:
	.string "thief is scard$"

ThiefDefeated_Text_2:
	.string "wow, thanks articuno!$"

ThiefDefeated_Text_3:
	.string "can you believe what happened? lets go\n"
	.string "home!$"
