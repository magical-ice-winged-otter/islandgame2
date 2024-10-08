ISLANDGAME_LUMINE_CAVE_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	copyvar VAR_ICE_STEP_COUNT, 1
	goto_if_set FLAG_LUMINE_CAVE_SABLEYE_DEFEATED, ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_CRACKED_FLOOR
	return

ISLANDGAME_LUMINE_CAVE_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ICE_STEP_COUNT, 0, ISLANDGAME_LUMINE_CAVE_B3F_FallDownHole
	.2byte 0


ISLANDGAME_LUMINE_CAVE_B3F_FallDownHole:
	lock
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFallLumine
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_ISLANDGAME_LUMINE_CAVE_B4F
	waitstate
	release
	return


ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_SABLEYE, 25, ITEM_SABLENITE, NUM_NATURES, 2, , , , , , , 31, 31, 31, 31, 31, 31, MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_FLATTER
	playmoncry SPECIES_SABLEYE, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_3
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_4
	case B_OUTCOME_CAUGHT, ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_5
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_3:
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_4:
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1

ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_5:
	setflag FLAG_LUMINE_CAVE_SABLEYE_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_LUMINE_CAVE_B3F_SableyeInteract_1


ISLANDGAME_LUMINE_CAVE_B3F_Trainer::
	trainerbattle_single TRAINER_LUMINE_CAVE_8, ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_0, ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_0:
	.string "Boo!$"

ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_1:
	.string "Boooooo.$"

ISLANDGAME_LUMINE_CAVE_B3F_Trainer_Text_2:
	.string "Did I scare you?$"
