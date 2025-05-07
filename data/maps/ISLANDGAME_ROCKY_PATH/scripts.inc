ISLANDGAME_ROCKY_PATH_MapScripts::
# 14 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 16 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 17 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 18 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 20 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	gettime
# 22 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 22 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 26 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto_if_unset FLAG_DAILY_ROCKY_PATH_ROCKRUFF, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 33 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 0, 72
ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 36 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto_if_set FLAG_ROCKY_PATH_ESCAPE_ROPE, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 30 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 0
	goto ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 37 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 43 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway1:
# 44 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	jump_2_up
# 45 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 46 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
	step_end

# 49 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway2:
# 50 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	jump_2_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 51 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
	step_end

# 54 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway3:
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
# 55 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_right
	step_end

# 58 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway4:
# 59 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 59 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 59 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 59 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 59 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 59 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 60 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 60 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 60 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 60 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
	step_end

# 63 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway5:
# 64 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 65 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
# 66 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_left
	step_end

# 69 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_RunAway6:
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
# 70 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	walk_fast_up
	step_end

ISLANDGAME_ROCKY_PATH_Rockruff::
# 75 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	switch VAR_ROCKY_PATH_STATE
# 76 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 0, ISLANDGAME_ROCKY_PATH_Rockruff_2
# 94 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 1, ISLANDGAME_ROCKY_PATH_Rockruff_3
# 106 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 2, ISLANDGAME_ROCKY_PATH_Rockruff_4
# 120 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case 3, ISLANDGAME_ROCKY_PATH_Rockruff_5
# 133 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	faceplayer
# 134 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 135 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ROCKRUFF_OWN_TEMPO, 23, ITEM_WIKI_BERRY, NATURE_JOLLY, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_TOMB, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_SUCKER_PUNCH
# 136 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 137 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 138 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 139 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	dowildbattle
# 140 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 141 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_ROCKY_PATH_Rockruff_8
# 147 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_ROCKY_PATH_Rockruff_9
	return

ISLANDGAME_ROCKY_PATH_Rockruff_2:
# 77 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 78 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 79 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 80 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 81 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 82 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 83 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 84 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_WalkUp2
# 85 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 86 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_LEDGE
# 87 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway1
# 88 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 89 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_LEDGE
# 90 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway2
# 91 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 92 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 46, 45
# 93 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 1
	return

ISLANDGAME_ROCKY_PATH_Rockruff_3:
# 95 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 96 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 97 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 98 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 99 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 100 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 101 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 102 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway3
# 103 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 104 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 72, 64
# 105 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 2
	return

ISLANDGAME_ROCKY_PATH_Rockruff_4:
# 107 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 108 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 109 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 110 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 111 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 112 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 113 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 114 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway4
# 115 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 116 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway5
# 117 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 118 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 14, 65
# 119 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 3
	return

ISLANDGAME_ROCKY_PATH_Rockruff_5:
# 121 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 122 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 123 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitse
# 124 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 125 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 126 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 127 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmoncry
# 128 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 8, RockyPath_RunAway6
# 129 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 130 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setobjectxyperm 8, 43, 52
# 131 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_ROCKY_PATH_STATE, 4
	return

ISLANDGAME_ROCKY_PATH_Rockruff_8:
# 145 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_DAILY_ROCKY_PATH_ROCKRUFF
# 146 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

ISLANDGAME_ROCKY_PATH_Rockruff_9:
# 148 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_DAILY_ROCKY_PATH_ROCKRUFF
# 149 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return


ISLANDGAME_ROCKY_PATH_Sign::
# 158 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_LumineCaveEntrance::
# 164 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_LumineCaveEntrance_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_Ranger::
# 170 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	lock
# 171 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	faceplayer
# 172 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto_if_unset FLAG_ROCKY_PATH_ESCAPE_ROPE, ISLANDGAME_ROCKY_PATH_Ranger_2
# 180 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_1
ISLANDGAME_ROCKY_PATH_Ranger_1:
# 184 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	closemessage
# 185 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_Ranger_2:
# 173 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_0
# 176 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 177 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_ROCKY_PATH_ESCAPE_ROPE
	goto ISLANDGAME_ROCKY_PATH_Ranger_1


ISLANDGAME_ROCKY_PATH_RangerTrigger::
# 189 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	lock
# 190 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	playse SE_PIN
# 191 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 192 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 193 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 194 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 195 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	applymovement 19, Common_Movement_FaceRight
# 196 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	waitmovement 0
# 197 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_0
# 200 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 201 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setflag FLAG_ROCKY_PATH_ESCAPE_ROPE
# 202 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	setvar VAR_TEMP_0, 1
# 203 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	release
	return


ISLANDGAME_ROCKY_PATH_Trainer1::
# 209 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_1, ISLANDGAME_ROCKY_PATH_Trainer1_Text_0, ISLANDGAME_ROCKY_PATH_Trainer1_Text_1
# 216 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer2::
# 222 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_2, ISLANDGAME_ROCKY_PATH_Trainer2_Text_0, ISLANDGAME_ROCKY_PATH_Trainer2_Text_1
# 229 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer3::
# 235 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_3, ISLANDGAME_ROCKY_PATH_Trainer3_Text_0, ISLANDGAME_ROCKY_PATH_Trainer3_Text_1
# 242 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer4::
# 249 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_4, ISLANDGAME_ROCKY_PATH_Trainer4_Text_0, ISLANDGAME_ROCKY_PATH_Trainer4_Text_1
# 256 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer5::
# 262 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_5, ISLANDGAME_ROCKY_PATH_Trainer5_Text_0, ISLANDGAME_ROCKY_PATH_Trainer5_Text_1
# 272 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer6::
# 278 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_6, ISLANDGAME_ROCKY_PATH_Trainer6_Text_0, ISLANDGAME_ROCKY_PATH_Trainer6_Text_1
# 286 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer7::
# 293 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_7, ISLANDGAME_ROCKY_PATH_Trainer7_Text_0, ISLANDGAME_ROCKY_PATH_Trainer7_Text_1
# 302 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer8::
# 310 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_8, ISLANDGAME_ROCKY_PATH_Trainer8_Text_0, ISLANDGAME_ROCKY_PATH_Trainer8_Text_1
# 318 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer9::
# 325 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_9, ISLANDGAME_ROCKY_PATH_Trainer9_Text_0, ISLANDGAME_ROCKY_PATH_Trainer9_Text_1
# 332 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer10::
# 338 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_single TRAINER_ROCKY_PATH_10, ISLANDGAME_ROCKY_PATH_Trainer10_Text_0, ISLANDGAME_ROCKY_PATH_Trainer10_Text_1
# 345 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_Trainer10_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_PathMaster::
# 352 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	lock
# 353 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	faceplayer
# 355 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_1
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_4
ISLANDGAME_ROCKY_PATH_PathMaster_1:
# 389 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATHMASTER
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_25
# 395 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_6
ISLANDGAME_ROCKY_PATH_PathMaster_24:
# 401 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
RockyPath_PathMaster_End:
# 402 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	closemessage
# 403 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_PathMaster_2:
# 367 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_0, MSGBOX_YESNO
# 371 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROCKY_PATH_PathMaster_28
# 383 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_4
# 386 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto RockyPath_PathMaster_End
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_3:
# 357 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_3
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_8
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_4:
# 356 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_2
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_3
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_7:
# 359 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_5
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_12
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_8:
# 358 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_4
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_7
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_11:
# 361 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_7
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_16
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_12:
# 360 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_6
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_11
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_15:
# 363 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_9
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_20
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_16:
# 362 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_8
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_15
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_19:
# 365 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATHMASTER
	goto_if 0, ISLANDGAME_ROCKY_PATH_PathMaster_2
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_20:
# 364 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	checktrainerflag TRAINER_ROCKY_PATH_10
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_19
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_25:
# 390 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_5
	goto ISLANDGAME_ROCKY_PATH_PathMaster_24

ISLANDGAME_ROCKY_PATH_PathMaster_28:
# 372 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_1
# 375 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	trainerbattle_no_intro TRAINER_ROCKY_PATHMASTER, ISLANDGAME_ROCKY_PATH_PathMaster_Text_2
# 376 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_3
# 379 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	giveitem ITEM_JABOCA_BERRY
# 380 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	goto RockyPath_PathMaster_End
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1


ISLANDGAME_ROCKY_PATH_Sign_Text_0:
# 159 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "ROCKY PATH\n"
	.string "{LEFT_ARROW}APPLEVINE / LUMINE CAVE{DOWN_ARROW}$"

ISLANDGAME_ROCKY_PATH_LumineCaveEntrance_Text_0:
# 165 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "LUMINE CAVE\n"
	.string "When in doubt, follow the sand!$"

ISLANDGAME_ROCKY_PATH_Ranger_Text_0:
# 174 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "It's easy to get lost in Lumine's\n"
	.string "enormous cave system, so I'm handing\l"
	.string "out these handy dandy escape ropes to\l"
	.string "journeying trainers! Here, take one!$"

ISLANDGAME_ROCKY_PATH_Ranger_Text_1:
# 181 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "With one of those, you'll be able to find\n"
	.string "your way to the entrance of any cave!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_0:
# 211 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "I'm almost done setting my picnic up! I\n"
	.string "won't have you interfere!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_1:
# 214 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Maybe I shouldn't have set up a picnic\n"
	.string "at the path entrance...$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_2:
# 217 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "This is my first time trying to setup a\n"
	.string "picnic. I've been trying to follow along\l"
	.string "this guide online, but it's just talking\l"
	.string "about making sandwiches.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_0:
# 224 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Curses, my mortal enemy...{PAUSE 60} LEDGES.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_1:
# 227 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "My second mortal enemy...{PAUSE 60} LOSING!$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_2:
# 230 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Whose idea was it to have all these darn\n"
	.string "ledges!?\p"
	.string "I'd like to speak to them directly and\n"
	.string "give them a piece of my mind!$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_0:
# 237 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Don'chu fuggle with my Shuckle!$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_1:
# 240 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Aw, shucks. My strat didn't work.$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_2:
# 243 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Did you know Shuckle can deal the most\n"
	.string "damage out of any Pokémon?\p"
	.string "Yup! You heard me right! My little\n"
	.string "Shuckie has the potential to pack a\l"
	.string "bigger punch than any of the Isle\l"
	.string "Guardians, or even Lugia!$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_0:
# 251 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Oi! What're you doing in me line o' sight?$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_1:
# 254 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "It's all over now...$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_2:
# 257 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Me and my merry band of Pokémon are on\n"
	.string "our way to see Arboria down south!$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_0:
# 264 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hey! Have you heard about my SUPER\n"
	.string "COOL RATTATA!?\p"
	.string "IT IS VERY DIFFERENT FROM OTHER\n"
	.string "RATTATAS!!\p"
	.string "IT'S IN THE TOP PERCENTAGE OF\n"
	.string "RATTATAS, IN FACT!!!\p"
	.string "1 V 1 M E B R O$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_1:
# 270 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "No fair! 1 v 1 me like a REAL trainer!$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_2:
# 273 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "You must've cheated! There's no way I\n"
	.string "could lose with my perfect setup!$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_0:
# 280 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hoo! Haa! Hee! Haa! Hoo! Haa! Hee! Haa!\p"
	.string "Who shall be next to challenge me!?$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_1:
# 284 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hoo... Haa... Hee...$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_2:
# 287 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "I train with my Hariyama every day in\n"
	.string "close quarters combat!\p"
	.string "I'll be getting first place at this\n"
	.string "year's festival martial arts tournament\l"
	.string "for sure!$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_0:
# 295 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Inside of me are two Lycanrocs\n"
	.string "fighting...\p"
	.string "One is Midday... the other is Midnight...\p"
	.string "Which one will win...? I'll show you right\n"
	.string "here!{PAUSE 60} RAAAAAAAAAAUUUGHHHH!$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_1:
# 300 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "M-My inner Lycanroc...{PAUSE 30} wasn't strong\n"
	.string "enough?$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_2:
# 303 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Inside of every trainer are two\n"
	.string "Lycanrocs...\p"
	.string "One is Midday... the other is Midnight...\p"
	.string "Which one will win...? The one that the\n"
	.string "trainer chooses to train...$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_0:
# 312 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Ah, did you think I couldn't see you\n"
	.string "walking by, trainer?\p"
	.string "Thanks to my psychic powers, I can see\n"
	.string "what the human eye cannot!$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_1:
# 316 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "My vision... It is fading...$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_2:
# 319 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Argh... My mana reserves are running\n"
	.string "low...\p"
	.string "Perhaps I should have saved them for\n"
	.string "our battle...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_0:
# 327 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hmm, yes, exquisite...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_1:
# 330 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "You are quite the fine specimen\n"
	.string "indeed...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_2:
# 333 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "You are no ordinary trainer. My analysis\n"
	.string "has made that abundantly clear...$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_0:
# 340 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Have you heard?$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_1:
# 343 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Ah... it was with my understanding that\n"
	.string "everyone had heard.$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_2:
# 346 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Come on, don't you know? About the...?$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_0:
# 368 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Well, bite my biscuits, ya beat all the\n"
	.string "trainers of Rocky Path!\p"
	.string "This super rare Jaboca Berry is all\n"
	.string "yours!... If you can take it from me.$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_1:
# 373 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Let's see if you've got what it takes\n"
	.string "against my FREAKING MASSIVE WALLS!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_2:
# 375 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Ack! It seems I've met the unstoppable\nforce to my unbreakable shield...$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_3:
# 377 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Rip in pepperonis. Looks like I gotta\n"
	.string "give this over to ya.$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_4:
# 384 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Understandable, have a nice day!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_5:
# 391 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Looks like you're the master of Rocky\n"
	.string "Path now!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_6:
# 396 "data/maps/ISLANDGAME_ROCKY_PATH/scripts.pory"
	.string "Hey, hey, hey! I'm the rock hard Path\n"
	.string "Master of Rocky Path!\p"
	.string "If ya manage to conquer all the\n"
	.string "trainers here, I'll give ya a reward!$"
