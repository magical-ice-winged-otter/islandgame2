ISLANDGAME_CAMP_PERSI_MapScripts::
# 14 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	gettime
# 21 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 25 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 29 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 30 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1::
# 55 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text
# 56 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_MACHETE
# 57 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TrainerBattle1_2
# 63 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_1
# 68 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ISLANDGAME_MACHETE
ISLANDGAME_CAMP_PERSI_TrainerBattle1_1:
# 70 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 71 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TrainerBattle1_2:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_0
	goto ISLANDGAME_CAMP_PERSI_TrainerBattle1_1


ISLANDGAME_CAMP_PERSI_TrainerBattle2::
# 89 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text
# 90 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle3::
# 111 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text
# 112 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle4::
# 133 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text
# 134 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle5::
# 159 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text
# 160 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage::
# 190 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0
# 191 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage::
# 196 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasIntro
# 197 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text
# 198 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text
# 199 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 200 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text2
# 201 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup::
# 206 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 13, MAP_ISLANDGAME_CAMP_PERSI
# 207 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 208 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 209 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	releaseall
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterMiddle::
# 216 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 217 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 218 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 219 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 220 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 222 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 224 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 225 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 226 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 227 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 228 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 231 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 233 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterLeft::
# 237 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 238 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 239 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 240 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 241 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 242 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 244 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 246 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 247 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 248 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 249 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 250 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 252 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 253 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 255 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarLeft::
# 259 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 260 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 261 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 262 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 263 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 264 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 266 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 268 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 269 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 270 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 271 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 272 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 274 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 275 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 277 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterRight::
# 281 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 282 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 283 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 284 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 285 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 286 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 288 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 290 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 291 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 292 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 293 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 294 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 296 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 299 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarRight::
# 303 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 304 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 305 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 306 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 307 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 310 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 312 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 316 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 318 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 321 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


# 324 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro:
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro:
# 329 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro:
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 335 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro:
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 340 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
	step_end

# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro:
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 345 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

# 348 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro:
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 350 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_right
	step_end

# 353 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro:
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 357 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave:
# 358 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 358 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 359 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl::
# 417 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 418 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 420 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_COOKIE_GIRL_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1:
# 425 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 426 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1, MSGBOX_YESNO
# 428 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4:
# 433 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 435 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7:
# 440 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 442 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10:
# 447 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_COOKIE_GIRL_SALE
# 448 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 449 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 450 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4
# 451 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 452 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 454 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CookieGirl_End:
# 455 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 456 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 457 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 458 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2:
# 421 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0
# 422 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5:
# 429 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1
# 430 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8:
# 436 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2
# 437 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11:
# 443 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3
# 444 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy::
# 469 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 470 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 472 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_CANDY_BOY_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1:
# 477 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 478 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1, MSGBOX_YESNO
# 480 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4:
# 485 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 487 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7:
# 492 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_RAGE_CANDY_BAR
# 494 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10:
# 499 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_CANDY_BOY_SALE
# 500 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 501 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 502 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 503 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4
# 504 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 506 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CandyBoy_End:
# 507 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 508 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 509 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 510 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2:
# 473 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0
# 474 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5:
# 481 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1
# 482 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8:
# 488 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2
# 489 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11:
# 495 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3
# 496 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC1::
# 519 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 520 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 521 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk
# 522 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC2::
# 534 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 535 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 536 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk
# 537 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC3::
# 547 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 548 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 549 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk
# 550 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC4::
# 561 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 563 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk
# 564 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC5::
# 575 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 576 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk
# 577 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC6::
# 587 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 588 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk
# 589 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC7::
# 599 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 600 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 601 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk
# 602 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC8::
# 612 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 613 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 614 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk
# 615 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 616 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 617 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC9::
# 627 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 628 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk
# 629 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC10::
# 640 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 641 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 642 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk
# 643 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC11::
# 656 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 657 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 658 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk
# 659 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC12::
# 669 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 670 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 671 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk
# 672 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC13::
# 683 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 684 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 685 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk
# 686 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14::
# 697 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 698 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 699 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 701 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 702 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3
# 717 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4
# 734 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1:
# 742 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3:
# 703 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0, MSGBOX_YESNO
# 710 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6
# 715 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4:
# 718 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_TRADING_CARD
# 720 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9
# 732 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5:
# 735 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6:
# 711 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1
# 712 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9:
# 721 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeitem ITEM_ISLANDGAME_TRADING_CARD
# 722 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3
# 728 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 729 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
# 746 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 747 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 748 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 749 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0
# 750 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 751 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 752 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl::
# 756 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 757 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 758 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2
# 769 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1:
# 772 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
WaterGirl_End:
# 773 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2:
# 759 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1, MSGBOX_YESNO
# 760 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5:
# 764 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2
# 765 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 766 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6:
# 761 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0
# 762 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto WaterGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN1::
# 800 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 801 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC
# 802 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN2::
# 813 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 814 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC
# 815 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN3::
# 826 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 827 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC
# 828 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN4::
# 838 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 839 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC
# 840 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN5::
# 851 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 852 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC
# 853 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7::
# 863 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 864 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0
# 865 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance::
# 869 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 870 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0, MSGBOX_YESNO
# 872 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1
# 876 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1:
# 873 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 0
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_0:
# 59 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I may not be worthy of my blade now, but\n"
	.string "I will be back for it later! Believe it!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_1:
# 64 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Naruhodo... It appears I still have a lot\n"
	.string "to learn...\p"
	.string "{PLAYER}-san! As my first battle and\n"
	.string "only loss, please take my ka-ta-na.\p"
	.string "It will serve you well in your journey, I\n"
	.string "know of it!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0:
# 190 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0:
# 421 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}We can only sell one cookie per day!\p"
	.string "We don't have many cookies left...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1:
# 429 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2:
# 436 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3:
# 443 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4:
# 450 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0:
# 473 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, we're running low on candy bars,\n"
	.string "so we can only give one per person.\p"
	.string "Come again tomorrow!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1:
# 481 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2:
# 488 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3:
# 495 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4:
# 503 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0:
# 704 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "WAAAAAAH!\p"
	.string "I lost my super rare Charizard trading\n"
	.string "card!\p"
	.string "It was in my deck this morning, but now\n"
	.string "it's gone!\p"
	.string "I've looked everywhere for it, but I\n"
	.string "can't find it anywhere! Please help me!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1:
# 711 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "My deck won't work without that\n"
	.string "Charizard card!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2:
# 715 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PLZZZZZZZZZ$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3:
# 723 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yaaaay! You found it! Where was it?\p"
	.string "...\p"
	.string "Huh? It was just under my bed? But I\n"
	.string "checked under there a million times...\p"
	.string "Oh well. All that matters is I have my\n"
	.string "card back!\p"
	.string "Here, take this. I made it during arts\n"
	.string "and crafts!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4:
# 732 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5:
# 737 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Now I'm ready for my duel! Do you like\n"
	.string "playing the trading card game too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0:
# 749 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0:
# 761 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Aww. That's a shame. I was going to\n"
	.string "share this Squirt Bottle with you.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0:
# 864 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CHERIPORT{LEFT_ARROW}\nCAMP PERSI{UP_ARROW}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0:
# 870 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's a slight opening in the tree!\n"
	.string "Want to climb inside?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
# 74 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "{COLOR DARK_GRAY}But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text::
# 81 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text::
# 93 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text::
# 99 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text::
# 104 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text::
# 115 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text::
# 121 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text::
# 126 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text::
# 137 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "{COLOR DARK_GRAY}So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text::
# 144 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text::
# 149 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon battles aren't really my thing,\n"
	.string "to be frank. {COLOR DARK_GRAY}Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text::
# 163 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "{COLOR DARK_GRAY}Please, help me with my research!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text::
# 170 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text::
# 175 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "{COLOR DARK_GRAY}But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text::
# 363 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ah... \p"
	.string "Your aptitude for battle is...{PAUSE 60}\n"
	.string "quite remarkable.{PAUSE 30}$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text::
# 370 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the exciting\n"
	.string "battle, {PLAYER}. Your Pokémon\l"
	.string "fought with grace and grit!\p"
	.string "{COLOR DARK_GRAY}Here, take this. It will heal your\n"
	.string "Pokémon from our battle.$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text2::
# 378 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Unfortunately, our conversation\n"
	.string "must end here. I have a lot of ground to\l"
	.string "cover today.\p"
	.string "{COLOR DARK_GRAY}Oh, but before I go, you should know\n"
	.string "about the upcoming Silverwing Festival!\p"
	.string "{COLOR DARK_GRAY}It's a grand celebration we host each\n"
	.string "year to remember the day our great\l"
	.string "savior, Lugia, rescued us from a\l"
	.string "cataclysmic event.\p"
	.string "{COLOR DARK_GRAY}It's not for another month, but it's the\n"
	.string "largest event in all of Marya, and it\l"
	.string "would be a shame if you missed it!\p"
	.string "{COLOR DARK_GRAY}Anyways, I must get going now. It was\n"
	.string "great meeting you, {PLAYER}.\p"
	.string "{COLOR DARK_GRAY}May our paths cross again.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasIntro::
# 390 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Are you a new camper by chance? I\n"
	.string "haven't seen you around here before.\p"
	.string "{COLOR DARK_GRAY}Oh? You're a Pokémon trainer visiting\n"
	.string "the isles from overseas?\p"
	.string "{COLOR DARK_GRAY}Pardon my assumption, then. Welcome to\n"
	.string "the Isles of Marya, {PLAYER}!\p"
	.string "{COLOR DARK_GRAY}My name is Jonas. I'm a traveling\n"
	.string "merchant of The Silverwing Order.\p"
	.string "{COLOR DARK_GRAY}The Silverwing Order is in charge of\n"
	.string "governing the isles. It's our job to\l"
	.string "make sure everyone here is comfortable\l"
	.string "and safe!\p"
	.string "{COLOR DARK_GRAY}My job in particular is traveling around\n"
	.string "the islands to provide goods and\l"
	.string "services to those in need!\p"
	.string "{COLOR DARK_GRAY}But that's enough about me. You said\n"
	.string "you were a Pokémon trainer, right?\p"
	.string "{COLOR DARK_GRAY}In that case...{PAUSE 60} mind if I trouble you for\n"
	.string "a little battle?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1::
# 409 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Girl\n"
	.string "Scout Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
# 461 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Boy Scout\n"
	.string "Candy Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk::
# 525 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "{COLOR DARK_GRAY}Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "{COLOR DARK_GRAY}Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk::
# 540 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk::
# 553 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm taking the campers on a nature hike\n"
	.string "later today.\p"
	.string "{COLOR DARK_GRAY}Hopefully this time we don't come into\n"
	.string "contact with any Stunky...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk::
# 567 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "{COLOR DARK_GRAY}It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk::
# 580 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Um... do you mind?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk::
# 592 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk::
# 605 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk::
# 620 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk::
# 632 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "{COLOR DARK_GRAY}I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk::
# 646 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "{COLOR DARK_GRAY}I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "{COLOR DARK_GRAY}To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "{COLOR DARK_GRAY}I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk::
# 662 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk::
# 675 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "{COLOR DARK_GRAY}One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk::
# 689 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1::
# 776 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like gardening. Do you like\n"
	.string "gardening too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2::
# 782 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hooray! Here, take one of these and we\n"
	.string "can become gardening buddies!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3::
# 788 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}It's important to give your plants\n"
	.string "water! Remember to take care of them!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC::
# 805 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}CAMP PERSI\n"
	.string "{COLOR DARK_GRAY}The greatest summer camp in Marya!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC::
# 818 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE WILD SIDE\n"
	.string "{COLOR DARK_GRAY}! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC::
# 831 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}PERSI LAKE\n"
	.string "NO SWIMMING WITHOUT A COUNSELOR!!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC::
# 843 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE BERRY GOOD BERRY SHOP\n"
	.string "{COLOR DARK_GRAY}Contribute to our garden! (Please)$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC::
# 856 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}(What is this music? It sounds like\n"
	.string "dududududududuDUDUDUDUDU...)$"
