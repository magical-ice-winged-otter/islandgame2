ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts::
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_RIGGED_TV
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_ACTIVE
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_5
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster::
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	faceplayer
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_ScoutmasterTalk
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1::
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_RIGGED_TV
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_3
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_1, MSGBOX_NPC
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_1:
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_3:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_0, MSGBOX_NPC
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2::
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_RIGGED_TV
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_3
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_1, MSGBOX_NPC
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_1:
# 59 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_3:
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_0, MSGBOX_NPC
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3::
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_RIGGED_TV
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_3
# 72 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_1, MSGBOX_NPC
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_1:
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_3:
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_0, MSGBOX_NPC
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning::
# 80 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 81 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 83 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 84 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning_Text_0
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_End::
# 93 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 96 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
	return


# 100 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Movement_PorygonAppear:
# 101 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	face_up
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock_facing_direction
# 104 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	walk_fast_down
	step_end

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene::
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	message ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene_Text_0
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmessage
# 110 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 111 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 112 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 30
# 114 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	closemessage
# 115 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_TEMP_5
# 116 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 117 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 119 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 120 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Movement_PorygonAppear
# 121 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2::
# 126 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 127 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	gettime
# 128 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8003
# 129 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_RIGGED_TV
# 130 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_8
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_7:
# 137 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_3
# 141 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_ACTIVE
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_4
# 144 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning
# 145 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_End
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_1:
# 147 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_2:
# 131 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 132 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 133 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning
# 134 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene
# 135 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	startquest QUEST_PERSI_RIGGED_TV
# 136 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_1

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_3:
# 138 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning
# 140 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_End
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_1

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_4:
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_1

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_8:
# 130 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_INACTIVE
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_2
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_2_7


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1::
# 150 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 151 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	gettime
# 152 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8003
# 153 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_RIGGED_TV
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_8
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_7:
# 159 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_3
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_ACTIVE
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_4
# 166 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning
# 167 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_End
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_1:
# 169 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_2:
# 155 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning
# 156 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene
# 157 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	startquest QUEST_PERSI_RIGGED_TV
# 158 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_1

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_3:
# 160 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning
# 161 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu
# 162 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_End
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_1

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_4:
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_1

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_8:
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_INACTIVE
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_2
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_1_7


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_DramaticFlashing::
# 173 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 174 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 175 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 176 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 177 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 179 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonBattle::
# 185 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 186 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 187 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_NO_CATCHING
# 188 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_NO_RUNNING
# 189 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setvar VAR_BATTLE_SPEED, OPTIONS_BATTLE_SCENE_4X
# 190 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setcwildbattle 0, SPECIES_PORYGON, 10, ITEM_LEFTOVERS, NUM_NATURES, 1, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_AGILITY, MOVE_SHARPEN, MOVE_TACKLE, MOVE_NONE
# 192 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_DramaticFlashing
# 193 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 194 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 195 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmoncry
# 196 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dowildbattle
# 197 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setvar VAR_BATTLE_SPEED, OPTIONS_BATTLE_SCENE_1X
# 198 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 199 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 200 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 202 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 203 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	switch VAR_RESULT
# 204 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonBattle_2
# 206 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonBattle_3
# 209 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 210 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_TEMP_5
# 211 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	removeobject 5
# 212 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 213 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	completequest QUEST_PERSI_RIGGED_TV
# 214 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonBattle_2:
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonBattle_3:
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight::
# 219 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 220 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	faceplayer
# 221 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight_Text_0, MSGBOX_YESNO
# 222 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight_2
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight_1:
# 225 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight_2:
# 223 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonBattle
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu::
# 229 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_0, OPTIONS_BATTLE_SCENE_1X
# 231 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_1, OPTIONS_BATTLE_SCENE_2X
# 232 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_2, OPTIONS_BATTLE_SCENE_3X
# 233 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_3, OPTIONS_BATTLE_SCENE_4X
# 234 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_4, OPTIONS_BATTLE_SCENE_DISABLED
# 235 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultistack 20, 8, TRUE, 5, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 236 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_BATTLE_SPEED, VAR_RESULT
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_2
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_1:
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_2:
# 237 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	copyvar VAR_BATTLE_SPEED, VAR_RESULT
# 238 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_HIGH_PITCH
# 239 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmoncry
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_0:
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Give me the controller! The scoutmaster\n"
	.string "said it's MY turn! Play this set on {COLOR GREEN}1.1x\l"
	.string "speed{COLOR DARK_GRAY} now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_1:
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Give me the controller! The scoutmaster\n"
	.string "said it's MY turn now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_0:
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Quit bothering me! I'm in an intense\n"
	.string "game right now!\p"
	.string "It's so {COLOR GREEN}fast{COLOR DARK_GRAY}!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_1:
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Quit bothering me! I'm in an intense\n"
	.string "game right now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_0:
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Dude stop spamming that move!!! -.-\p"
	.string "You {COLOR GREEN}can't{COLOR DARK_GRAY} see the animation!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_1:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Dude stop spamming that move!!! -.-$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning_Text_0:
# 87 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "GET YOUR BIG FAT HEAD OUT OF THE\n"
	.string "FREAKING WAY!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene_Text_0:
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Huh?$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonFight_Text_0:
# 221 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Porygon stares at you intently. Fight it?$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_0:
# 229 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "あ¥T3Mß¥Í%¥¥T$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_1:
# 231 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "01001100 01001111 01001100$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_2:
# 232 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "▶▶▶▶▶ÄÄ▶▶$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_3:
# 233 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "<!--FATAL_ERROR-->$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_4:
# 234 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "ergo$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_ScoutmasterTalk::
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}I sent Hanzo to clean up the camp tree\n"
	.string "house hours ago.\p"
	.string "{COLOR DARK_GRAY}What could be taking him so long!? He\n"
	.string "better not be horsing around with that\l"
	.string "machete in there like last time...\p"
	.string "{COLOR DARK_GRAY}-sigh- I don't get paid enough for this.\n"
	.string "This is a CAMP, not a DAYCARE!$"
