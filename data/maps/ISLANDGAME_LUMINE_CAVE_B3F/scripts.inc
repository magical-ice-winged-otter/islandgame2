ISLANDGAME_LUMINE_CAVE_B3F_MapScripts::
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_RESUME
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 8 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	goto_if_set FLAG_LUMINE_CAVE_SABLEYE_DEFEATED, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	setflag FLAG_ITEM_LUMINE_CAVE_SABLENITE
	return

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	setflag FLAG_TEMP_1
	return

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 17 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
	return

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, ISLANDGAME_LUMINE_CAVE_B3F_FallDownHole
	.2byte 0


ISLANDGAME_LUMINE_CAVE_B3F_FallDownHole:
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	lock
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	delay 20
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFallLumine
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	waitmovement 0
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	playse SE_FALL
# 27 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	delay 60
# 28 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	warphole MAP_ISLANDGAME_LUMINE_CAVE_B4F
# 29 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	waitstate
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract::
# 34 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	lock
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	faceplayer
# 36 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 37 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SABLEYE, 25, ITEM_NONE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_FLATTER
# 38 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_ENCOUNTER
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	waitmoncry
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	dowildbattle
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 42 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_3
# 47 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_4
# 49 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_5
# 51 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_6
# 57 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SABLEYE_DEFEATED
# 58 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	clearflag FLAG_ITEM_LUMINE_CAVE_SABLENITE
# 59 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	addobject 2
# 60 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1:
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_3:
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_4:
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_5:
# 50 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_6:
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	setflag FLAG_LUMINE_CAVE_SABLEYE_DEFEATED
# 53 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	clearflag FLAG_ITEM_LUMINE_CAVE_SABLENITE
# 54 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	addobject 2
# 55 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1


ISLANDGAME_LUMINE_CAVE_B3F_Trainer::
# 66 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_8, ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_0, ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_1
# 73 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_0:
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	.string "Boo!$"

ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_1:
# 71 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	.string "Boooooo.$"

ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_2:
# 74 "data/maps/ISLANDGAME_LUMINE_CAVE_B3F/scripts.pory"
	.string "Did I scare you?$"
