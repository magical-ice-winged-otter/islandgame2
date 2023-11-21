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
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerApproach
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement 2, Movement_Surprise
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_2
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_3
	closemessage
	trainerbattle_single TRAINER_SPECIAL_THIEF_EDEA, ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_4, ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_5, ThiefDefeated
	return


Movement_ThiefRunAway:
	emote_exclamation_mark
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
	msgbox ThiefDefeated_Text_1
	msgbox ThiefDefeated_Text_2
	closemessage
	fadescreen FADE_TO_WHITE
	addobject 4
	setobjectxy 4, 15, 29
	fadescreen FADE_FROM_WHITE
	delay 30
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
	applymovement 2, Movement_ThiefRunAway
	waitmovement 0
	removeobject 2
	delay 30
	fadescreen FADE_TO_WHITE
	removeobject 4
	fadescreen FADE_FROM_WHITE
	msgbox ThiefDefeated_Text_3
	msgbox ThiefDefeated_Text_4
	setvar VAR_ROSEVALE_STATE, 2
	warp MAP_ISLANDGAME_ROSEVALE, 17, 25
	return


ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_0:
	.string "Arthur: You thief! I won't let you leave\n"
	.string "with that Marill!$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_1:
	.string "Edea: Kid, you already lost. Give it up\n"
	.string "already.\p"
	.string "Edea: Besides, this Marill is going to\n"
	.string "make me rich!\p"
	.string "Edea: There's a collector in Tidalcove\n"
	.string "who would pay good money for this...$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_2:
	.string "Edea: And who is this?\p"
	.string "Edea: Listen, I got to this Marill first.\n"
	.string "If you want it, you'll have to take it\l"
	.string "from me.$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_3:
	.string "Arthur: Please, you have to stop her! I\n"
	.string "tried my best, but she's really strong...$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_4:
	.string "Edea: Whatever. If you're anything like\n"
	.string "the kid, this should be quick.$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_5:
	.string "...$"

ThiefDefeated_Text_0:
	.string "Arthur: Ha! You lost! Give us back the\n"
	.string "Marill!$"

ThiefDefeated_Text_1:
	.string "Edea: I don't think so. There's no\n"
	.string "chance of that happening.$"

ThiefDefeated_Text_2:
	.string "Arthur: What are we gonna do?\p"
	.string "Arthur: Wait, did you hear something?$"

ThiefDefeated_Text_3:
	.string "Arthur: Woah, what just happened?\p"
	.string "Arthur: Oh, the thief left behind Marill\n"
	.string "when running away!$"

ThiefDefeated_Text_4:
	.string "Arthur: I'm Arthur by the way!\p"
	.string "Arthur: Thanks for helping us deal with\n"
	.string "that thief...\p"
	.string "Arthur: It's pretty late - we should\n"
	.string "probably head back to Rosevale.$"
