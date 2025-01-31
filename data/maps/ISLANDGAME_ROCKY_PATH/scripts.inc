ISLANDGAME_ROCKY_PATH_MapScripts::
# 6 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	gettime
# 9 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto_if_unset FLAG_DAILY_ROCKY_PATH_ROCKRUFF, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 20 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 0, 72
ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 23 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto_if_set FLAG_ROCKY_PATH_ESCAPE_ROPE, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 0
	goto ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 24 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 30 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway1:
# 31 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	jump_2_up
# 32 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 33 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 33 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 33 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 33 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
	step_end

# 36 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway2:
# 37 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	jump_2_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 38 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
	step_end

# 41 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway3:
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 42 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
	step_end

# 45 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway4:
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 47 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 47 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 47 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 47 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
	step_end

# 50 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway5:
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 52 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 53 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
	step_end

# 56 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway6:
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 57 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
	step_end

ISLANDGAME_ROCKY_PATH_Rockruff::
# 62 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	switch VAR_ROCKY_PATH_STATE
# 63 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 0, ISLANDGAME_ROCKY_PATH_Rockruff_2
# 81 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 1, ISLANDGAME_ROCKY_PATH_Rockruff_3
# 93 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 2, ISLANDGAME_ROCKY_PATH_Rockruff_4
# 107 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 3, ISLANDGAME_ROCKY_PATH_Rockruff_5
# 120 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	faceplayer
# 121 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 122 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ROCKRUFF_OWN_TEMPO, 23, ITEM_WIKI_BERRY, NATURE_JOLLY, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_TOMB, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_SUCKER_PUNCH
# 123 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 124 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 125 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 126 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	dowildbattle
# 127 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 128 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 130 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_ROCKY_PATH_Rockruff_8
# 134 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_ROCKY_PATH_Rockruff_9
	return

ISLANDGAME_ROCKY_PATH_Rockruff_2:
# 64 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 65 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 67 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 68 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 69 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 71 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_WalkUp2
# 72 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 73 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_LEDGE
# 74 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway1
# 75 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 76 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_LEDGE
# 77 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway2
# 78 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 79 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 46, 45
# 80 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 1
	return

ISLANDGAME_ROCKY_PATH_Rockruff_3:
# 82 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 83 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 84 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 85 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 86 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 87 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 88 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 89 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway3
# 90 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 91 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 72, 64
# 92 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 2
	return

ISLANDGAME_ROCKY_PATH_Rockruff_4:
# 94 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 95 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 96 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 97 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 98 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 99 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 100 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 101 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway4
# 102 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 103 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway5
# 104 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 105 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 14, 65
# 106 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 3
	return

ISLANDGAME_ROCKY_PATH_Rockruff_5:
# 108 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 109 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 110 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 111 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 112 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 114 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 115 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway6
# 116 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 117 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 43, 52
# 118 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 4
	return

ISLANDGAME_ROCKY_PATH_Rockruff_8:
# 132 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_DAILY_ROCKY_PATH_ROCKRUFF
# 133 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

ISLANDGAME_ROCKY_PATH_Rockruff_9:
# 135 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_DAILY_ROCKY_PATH_ROCKRUFF
# 136 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


ISLANDGAME_ROCKY_PATH_Sign::
# 145 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_LumineCaveEntrance::
# 151 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_LumineCaveEntrance_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_Ranger::
# 157 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	lock
# 158 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	faceplayer
# 159 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto_if_unset FLAG_ROCKY_PATH_ESCAPE_ROPE, ISLANDGAME_ROCKY_PATH_Ranger_2
# 167 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_1
ISLANDGAME_ROCKY_PATH_Ranger_1:
# 171 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	closemessage
# 172 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_Ranger_2:
# 160 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_0
# 163 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 164 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_ROCKY_PATH_ESCAPE_ROPE
	goto ISLANDGAME_ROCKY_PATH_Ranger_1


ISLANDGAME_ROCKY_PATH_RangerTrigger::
# 176 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	lock
# 177 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 178 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 179 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 180 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 181 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 182 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 19, Common_Movement_FaceRight
# 183 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 184 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_0
# 187 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 188 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_ROCKY_PATH_ESCAPE_ROPE
# 189 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_TEMP_0, 1
# 190 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	release
	return


ISLANDGAME_ROCKY_PATH_Trainer1::
# 196 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_1, ISLANDGAME_ROCKY_PATH_Trainer1_Text_0, ISLANDGAME_ROCKY_PATH_Trainer1_Text_1
# 203 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer2::
# 209 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_2, ISLANDGAME_ROCKY_PATH_Trainer2_Text_0, ISLANDGAME_ROCKY_PATH_Trainer2_Text_1
# 216 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer3::
# 222 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_3, ISLANDGAME_ROCKY_PATH_Trainer3_Text_0, ISLANDGAME_ROCKY_PATH_Trainer3_Text_1
# 229 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer4::
# 236 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_4, ISLANDGAME_ROCKY_PATH_Trainer4_Text_0, ISLANDGAME_ROCKY_PATH_Trainer4_Text_1
# 243 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer5::
# 249 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_5, ISLANDGAME_ROCKY_PATH_Trainer5_Text_0, ISLANDGAME_ROCKY_PATH_Trainer5_Text_1
# 259 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer6::
# 265 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_6, ISLANDGAME_ROCKY_PATH_Trainer6_Text_0, ISLANDGAME_ROCKY_PATH_Trainer6_Text_1
# 273 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer7::
# 280 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_7, ISLANDGAME_ROCKY_PATH_Trainer7_Text_0, ISLANDGAME_ROCKY_PATH_Trainer7_Text_1
# 289 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer8::
# 297 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_8, ISLANDGAME_ROCKY_PATH_Trainer8_Text_0, ISLANDGAME_ROCKY_PATH_Trainer8_Text_1
# 305 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer9::
# 312 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_9, ISLANDGAME_ROCKY_PATH_Trainer9_Text_0, ISLANDGAME_ROCKY_PATH_Trainer9_Text_1
# 319 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer10::
# 325 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_10, ISLANDGAME_ROCKY_PATH_Trainer10_Text_0, ISLANDGAME_ROCKY_PATH_Trainer10_Text_1
# 332 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer10_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_PathMaster::
# 339 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	lock
# 340 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	faceplayer
# 342 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_1
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_4
ISLANDGAME_ROCKY_PATH_PathMaster_1:
# 376 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATHMASTER
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_25
# 382 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_6
ISLANDGAME_ROCKY_PATH_PathMaster_24:
# 388 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_PathMaster_End:
# 389 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	closemessage
# 390 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_PathMaster_2:
# 354 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_0, MSGBOX_YESNO
# 358 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROCKY_PATH_PathMaster_28
# 370 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_4
# 373 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto RockyPath_PathMaster_End
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_3:
# 344 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_3
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_8
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_4:
# 343 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_2
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_3
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_7:
# 346 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_5
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_12
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_8:
# 345 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_4
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_7
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_11:
# 348 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_7
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_16
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_12:
# 347 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_6
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_11
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_15:
# 350 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_9
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_20
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_16:
# 349 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_8
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_15
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_19:
# 352 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATHMASTER
	goto_if 0, ISLANDGAME_ROCKY_PATH_PathMaster_2
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_20:
# 351 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_10
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_19
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_25:
# 377 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_5
	goto ISLANDGAME_ROCKY_PATH_PathMaster_24

ISLANDGAME_ROCKY_PATH_PathMaster_28:
# 359 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_1
# 362 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_no_intro TRAINER_ROCKY_PATHMASTER, ISLANDGAME_ROCKY_PATH_PathMaster_Text_2
# 363 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_3
# 366 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	giveitem ITEM_JABOCA_BERRY
# 367 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto RockyPath_PathMaster_End
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1


ISLANDGAME_ROCKY_PATH_Sign_Text_0:
# 146 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "ROCKY PATH\n"
	.string "{LEFT_ARROW}APPLEVINE / LUMINE CAVE{DOWN_ARROW}$"

ISLANDGAME_ROCKY_PATH_LumineCaveEntrance_Text_0:
# 152 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "LUMINE CAVE\n"
	.string "When in doubt, follow the sand!$"

ISLANDGAME_ROCKY_PATH_Ranger_Text_0:
# 161 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "It's easy to get lost in Lumine's\n"
	.string "enormous cave system, so I'm handing\l"
	.string "out these handy dandy escape ropes to\l"
	.string "journeying trainers! Here, take one!$"

ISLANDGAME_ROCKY_PATH_Ranger_Text_1:
# 168 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "With one of those, you'll be able to find\n"
	.string "your way to the entrance of any cave!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_0:
# 198 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "I'm almost done setting my picnic up! I\n"
	.string "won't have you interfere!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_1:
# 201 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Maybe I shouldn't have set up a picnic\n"
	.string "at the path entrance...$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_2:
# 204 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "This is my first time trying to setup a\n"
	.string "picnic. I've been trying to follow along\l"
	.string "this guide online, but it's just talking\l"
	.string "about making sandwiches.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_0:
# 211 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Curses, my mortal enemy...{PAUSE 60} LEDGES.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_1:
# 214 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "My second mortal enemy...{PAUSE 60} LOSING!$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_2:
# 217 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Whose idea was it to have all these darn\n"
	.string "ledges!?\p"
	.string "I'd like to speak to them directly and\n"
	.string "give them a piece of my mind!$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_0:
# 224 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Don'chu fuggle with my Shuckle!$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_1:
# 227 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Aw, shucks. My strat didn't work.$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_2:
# 230 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Did you know Shuckle can deal the most\n"
	.string "damage out of any Pokémon?\p"
	.string "Yup! You heard me right! My little\n"
	.string "Shuckie has the potential to pack a\l"
	.string "bigger punch than any of the Isle\l"
	.string "Guardians, or even Lugia!$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_0:
# 238 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Oi! What're you doing in me line o' sight?$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_1:
# 241 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "It's all over now...$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_2:
# 244 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Me and my merry band of Pokémon are on\n"
	.string "our way to see Arboria down south!$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_0:
# 251 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hey! Have you heard about my SUPER\n"
	.string "COOL RATTATA!?\p"
	.string "IT IS VERY DIFFERENT FROM OTHER\n"
	.string "RATTATAS!!\p"
	.string "IT'S IN THE TOP PERCENTAGE OF\n"
	.string "RATTATAS, IN FACT!!!\p"
	.string "1 V 1 M E B R O$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_1:
# 257 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "No fair! 1 v 1 me like a REAL trainer!$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_2:
# 260 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "You must've cheated! There's no way I\n"
	.string "could lose with my perfect setup!$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_0:
# 267 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hoo! Haa! Hee! Haa! Hoo! Haa! Hee! Haa!\p"
	.string "Who shall be next to challenge me!?$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_1:
# 271 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hoo... Haa... Hee...$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_2:
# 274 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "I train with my Hariyama every day in\n"
	.string "close quarters combat!\p"
	.string "I'll be getting first place at this\n"
	.string "year's festival martial arts tournament\l"
	.string "for sure!$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_0:
# 282 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Inside of me are two Lycanrocs\n"
	.string "fighting...\p"
	.string "One is Midday... the other is Midnight...\p"
	.string "Which one will win...? I'll show you right\n"
	.string "here!{PAUSE 60} RAAAAAAAAAAUUUGHHHH!$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_1:
# 287 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "M-My inner Lycanroc...{PAUSE 30} wasn't strong\n"
	.string "enough?$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_2:
# 290 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Inside of every trainer are two\n"
	.string "Lycanrocs...\p"
	.string "One is Midday... the other is Midnight...\p"
	.string "Which one will win...? The one that the\n"
	.string "trainer chooses to train...$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_0:
# 299 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Ah, did you think I couldn't see you\n"
	.string "walking by, trainer?\p"
	.string "Thanks to my psychic powers, I can see\n"
	.string "what the human eye cannot!$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_1:
# 303 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "My vision... It is fading...$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_2:
# 306 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Argh... My mana reserves are running\n"
	.string "low...\p"
	.string "Perhaps I should have saved them for\n"
	.string "our battle...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_0:
# 314 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hmm, yes, exquisite...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_1:
# 317 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "You are quite the fine specimen\n"
	.string "indeed...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_2:
# 320 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "You are no ordinary trainer. My analysis\n"
	.string "has made that abundantly clear...$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_0:
# 327 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Have you heard?$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_1:
# 330 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Ah... it was with my understanding that\n"
	.string "everyone had heard.$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_2:
# 333 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Come on, don't you know? About the...?$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_0:
# 355 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Well, bite my biscuits, ya beat all the\n"
	.string "trainers of Rocky Path!\p"
	.string "This super rare Jaboca Berry is all\n"
	.string "yours!... If you can take it from me.$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_1:
# 360 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Let's see if you've got what it takes\n"
	.string "against my FREAKING MASSIVE WALLS!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_2:
# 362 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Ack! It seems I've met the unstoppable\nforce to my unbreakable shield...$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_3:
# 364 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Rip in pepperonis. Looks like I gotta\n"
	.string "give this over to ya.$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_4:
# 371 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Understandable, have a nice day!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_5:
# 378 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Looks like you're the master of Rocky\n"
	.string "Path now!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_6:
# 383 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hey, hey, hey! I'm the rock hard Path\n"
	.string "Master of Rocky Path!\p"
	.string "If ya manage to conquer all the\n"
	.string "trainers here, I'll give ya a reward!$"
