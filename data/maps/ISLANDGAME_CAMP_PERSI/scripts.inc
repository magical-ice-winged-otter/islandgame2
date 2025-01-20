ISLANDGAME_CAMP_PERSI_MapScripts::
# 15 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	gettime
# 22 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 26 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 30 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 31 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1::
# 56 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_0, ISLANDGAME_CAMP_PERSI_HanzoKatana
# 57 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_1
	return


ISLANDGAME_CAMP_PERSI_HanzoKatana::
# 70 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 71 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_MACHETE
# 72 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_HanzoKatana_Text_0
# 77 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ISLANDGAME_MACHETE
# 78 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 79 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle2::
# 85 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text
# 86 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle3::
# 107 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text
# 108 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle4::
# 129 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text
# 130 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle5::
# 155 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text
# 156 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage::
# 186 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0
# 187 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage::
# 192 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_0
# 203 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text
# 204 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_3
# 216 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_2
# 220 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 221 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playfanfare MUS_HEAL
# 222 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitfanfare
# 223 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	special HealPlayerParty
# 224 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_3
# 227 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_1:
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_4
# 239 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_3:
# 207 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_1
# 211 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
# 212 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playfanfare MUS_HEAL
# 213 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitfanfare
# 214 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	special HealPlayerParty
	goto ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_1


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup::
# 244 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 13, MAP_ISLANDGAME_CAMP_PERSI
# 245 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 31, MAP_ISLANDGAME_CAMP_PERSI
# 246 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 247 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 248 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	releaseall
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterMiddle::
# 255 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 256 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 257 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 258 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 259 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 260 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 262 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 264 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 265 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 266 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 267 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 268 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 269 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 271 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 272 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 274 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterLeft::
# 278 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 279 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 280 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 281 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 282 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 283 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 284 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 286 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 288 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 289 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 290 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 291 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 292 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 293 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 295 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 296 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 298 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarLeft::
# 302 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 303 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 304 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 305 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 306 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 307 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
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
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 320 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterRight::
# 326 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 329 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 330 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 331 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 336 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 340 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 341 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 346 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarRight::
# 350 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 351 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 352 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 353 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 355 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 356 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 358 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 360 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 361 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 362 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 363 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 364 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 31, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 365 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 367 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 368 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 370 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro:
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 377 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro:
# 378 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 382 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro:
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

# 387 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro:
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 388 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
	step_end

# 392 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro:
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 394 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

# 397 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro:
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 399 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_right
	step_end

# 402 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro:
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 406 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave:
# 407 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 407 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl::
# 432 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 433 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 435 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_COOKIE_GIRL_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1:
# 440 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 441 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1, MSGBOX_YESNO
# 443 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4:
# 448 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 450 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7:
# 455 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 457 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10:
# 462 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_COOKIE_GIRL_SALE
# 463 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 464 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 465 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4
# 466 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 467 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 469 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CookieGirl_End:
# 470 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 471 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 472 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 473 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2:
# 436 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0
# 437 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5:
# 444 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1
# 445 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8:
# 451 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2
# 452 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11:
# 458 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3
# 459 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy::
# 484 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 485 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 487 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_CANDY_BOY_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1:
# 492 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 493 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1, MSGBOX_YESNO
# 495 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4:
# 500 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 502 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7:
# 507 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_RAGE_CANDY_BAR
# 509 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10:
# 514 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_CANDY_BOY_SALE
# 515 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 516 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 517 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 518 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4
# 519 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 521 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CandyBoy_End:
# 522 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 523 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 524 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 525 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2:
# 488 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0
# 489 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5:
# 496 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1
# 497 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8:
# 503 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2
# 504 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11:
# 510 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3
# 511 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC1::
# 534 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 535 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 536 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk
# 537 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC2::
# 549 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 550 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 551 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk
# 552 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC3::
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 563 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 564 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk
# 565 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC4::
# 576 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 577 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 578 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk
# 579 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC5::
# 590 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 591 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk
# 592 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC6::
# 602 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 603 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk
# 604 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC7::
# 614 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 615 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 616 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk
# 617 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC8::
# 627 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 628 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 629 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk
# 630 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 631 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 632 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC9::
# 642 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 643 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk
# 644 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC10::
# 655 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 656 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 657 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk
# 658 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC11::
# 671 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 672 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 673 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk
# 674 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC12::
# 684 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 685 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 686 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk
# 687 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC13::
# 698 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 699 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 700 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk
# 701 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14::
# 712 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 713 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 714 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 716 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 717 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3
# 732 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4
# 749 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1:
# 757 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3:
# 718 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0, MSGBOX_YESNO
# 725 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6
# 730 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4:
# 733 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_TRADING_CARD
# 735 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9
# 747 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5:
# 750 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6:
# 726 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1
# 727 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9:
# 736 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeitem ITEM_ISLANDGAME_TRADING_CARD
# 737 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3
# 743 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 744 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
# 761 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 762 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 763 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 764 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0
# 765 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 766 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 767 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl::
# 771 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 772 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 773 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2
# 784 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1:
# 787 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
WaterGirl_End:
# 788 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2:
# 774 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1, MSGBOX_YESNO
# 775 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5:
# 779 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2
# 780 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 781 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6:
# 776 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0
# 777 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto WaterGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WARNING::
# 815 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 816 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WARNING_Text_0, MSGBOX_SIGN
# 822 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN1::
# 826 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 827 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC
# 828 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN2::
# 839 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 840 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC
# 841 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN3::
# 852 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 853 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC
# 854 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN4::
# 864 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 865 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC
# 866 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN5::
# 877 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 878 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC
# 879 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7::
# 889 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 890 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0
# 891 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance::
# 895 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 896 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0, MSGBOX_YESNO
# 898 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1
# 902 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1:
# 899 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 0
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_0:
# 56 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text_1:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I may not be worthy of my blade now, but\n"
	.string "I will be back for it later! Believe it!$"

ISLANDGAME_CAMP_PERSI_HanzoKatana_Text_0:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Naruhodo... It appears I still have a lot\n"
	.string "to learn...\p"
	.string "{PLAYER}-san! As my first battle and\n"
	.string "only loss, please take my ka-ta-na.\p"
	.string "It will serve you well in your journey, I\n"
	.string "know of it!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0:
# 186 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_0:
# 193 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "You don't look like you're from around\n"
	.string "here. Are you a tourist by chance?\p"
	.string "...\p"
	.string "Oh? You've come to aid Professor Palm in\n"
	.string "his research and become a Pokémon\l"
	.string "trainer?\p"
	.string "Well, pardon my assumption, then!\n"
	.string "Welcome to the Maryan Isles,\l"
	.string "{PLAYER}!\p"
	.string "My name is Jonas. I'm a traveling\n"
	.string "merchant of The Silverwing Order.\p"
	.string "The Silverwing Order is in charge of\n"
	.string "governing the isles. It's our job to\l"
	.string "make sure everyone here is comfortable\l"
	.string "and safe!\p"
	.string "My role in particular is traveling\n"
	.string "around to provide goods and inform\l"
	.string "visitors of the Marya region!\p"
	.string "But that's enough about me. You said\n"
	.string "you were a Pokémon trainer, right?\p"
	.string "In that case...{PAUSE 60} mind if I trouble you for\n"
	.string "a little battle?$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_1:
# 208 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the exciting\n"
	.string "battle, {PLAYER}. You possess\l"
	.string "exceptional talent for a beginner!\p"
	.string "Here, allow me to heal our Pokémon.$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_2:
# 217 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the battle,\n"
	.string "{PLAYER}. Your Pokémon fought as\l"
	.string "hard as they could!\p"
	.string "Here, allow me to heal our Pokémon.$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_3:
# 225 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}I'd also like to give you this.\n"
	.string "It'll be of great use to you as a\l"
	.string "beginner!$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_4:
# 231 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Unfortunately, this is where our\n"
	.string "conversation must end. I've got a long\l"
	.string "day ahead of me, a-ha.\p"
	.string "But before I depart, I thought I'd let\n"
	.string "you know about our upcoming Silverwing\l"
	.string "Festival!\p"
	.string "It is a grand celebration we host\n"
	.string "annually to honor our lord and savior,\l"
	.string "Lugia, who rescued Marya from\l"
	.string "destruction thousands of years ago!\p"
	.string "It's not for another month, but I\n"
	.string "implore you to stick around for it!\p"
	.string "Ah, I must get going now, lest I fall\n"
	.string "even further behind schedule.\p"
	.string "It was a pleasure meeting you,\n"
	.string "{PLAYER}.\p"
	.string "By Lugia, may our paths cross again.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0:
# 436 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}We can only sell one cookie per day!\p"
	.string "We don't have many cookies left...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1:
# 444 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2:
# 451 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3:
# 458 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4:
# 465 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0:
# 488 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, we're running low on candy bars,\n"
	.string "so we can only give one per person.\p"
	.string "Come again tomorrow!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1:
# 496 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2:
# 503 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3:
# 510 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4:
# 518 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0:
# 719 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "WAAAAAAH!\p"
	.string "I lost my super rare Charizard trading\n"
	.string "card!\p"
	.string "It was in my deck this morning, but now\n"
	.string "it's gone!\p"
	.string "I've looked everywhere for it, but I\n"
	.string "can't find it anywhere! Please help me!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1:
# 726 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "My deck won't work without that\n"
	.string "Charizard card!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2:
# 730 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PLZZZZZZZZZ$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3:
# 738 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yaaaay! You found it! Where was it?\p"
	.string "...\p"
	.string "Huh? It was just under my bed? But I\n"
	.string "checked under there a million times...\p"
	.string "Oh well. All that matters is I have my\n"
	.string "card back!\p"
	.string "Here, take this. I made it during arts\n"
	.string "and crafts!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4:
# 747 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5:
# 752 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Now I'm ready for my duel! Do you like\n"
	.string "playing the trading card game too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0:
# 764 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0:
# 776 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Aww. That's a shame. I was going to\n"
	.string "share this Squirt Bottle with you.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WARNING_Text_0:
# 817 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hi! I'm a sentient sign. I'm here to warn\n"
	.string "you about the dangers of Nuzlocke.\p"
	.string "I uh, I just wouldn't try it. Trust me,\n"
	.string "it's not going to end well...\p"
	.string "...but if you think you've got what it\n"
	.string "takes hotshot, prove me wrong...\p"
	.string "- Billy The Board$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0:
# 890 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CHERIPORT{LEFT_ARROW}\nCAMP PERSI{UP_ARROW}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0:
# 896 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's a slight opening in the tree!\n"
	.string "Want to climb inside?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
# 62 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "{COLOR DARK_GRAY}But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text::
# 89 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text::
# 95 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text::
# 100 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text::
# 111 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text::
# 117 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text::
# 122 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text::
# 133 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "{COLOR DARK_GRAY}So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text::
# 140 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text::
# 145 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon battles aren't really my thing,\n"
	.string "to be frank. {COLOR DARK_GRAY}Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text::
# 159 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "{COLOR DARK_GRAY}Please, help me with my research!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text::
# 166 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text::
# 171 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "{COLOR DARK_GRAY}But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text::
# 412 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ah... \p"
	.string "Your aptitude for battle is...{PAUSE 60}\n"
	.string "quite remarkable.{PAUSE 30}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1::
# 424 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Girl\n"
	.string "Scout Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
# 476 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Boy Scout\n"
	.string "Candy Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk::
# 540 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "{COLOR DARK_GRAY}Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "{COLOR DARK_GRAY}Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk::
# 555 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk::
# 568 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm taking the campers on a nature hike\n"
	.string "later today.\p"
	.string "{COLOR DARK_GRAY}Hopefully this time we don't come into\n"
	.string "contact with any Stunky...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk::
# 582 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "{COLOR DARK_GRAY}It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk::
# 595 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Um... do you mind?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk::
# 607 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk::
# 620 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk::
# 635 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk::
# 647 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "{COLOR DARK_GRAY}I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk::
# 661 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "{COLOR DARK_GRAY}I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "{COLOR DARK_GRAY}To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "{COLOR DARK_GRAY}I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk::
# 677 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk::
# 690 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "{COLOR DARK_GRAY}One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk::
# 704 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1::
# 791 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like gardening. Do you like\n"
	.string "gardening too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2::
# 797 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hooray! Here, take one of these and we\n"
	.string "can become gardening buddies!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3::
# 803 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}It's important to give your plants\n"
	.string "water! Remember to take care of them!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC::
# 831 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}CAMP PERSI\n"
	.string "{COLOR DARK_GRAY}The greatest summer camp in Marya!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC::
# 844 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE WILD SIDE\n"
	.string "{COLOR DARK_GRAY}! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC::
# 857 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}PERSI LAKE\n"
	.string "NO SWIMMING WITHOUT A COUNSELOR!!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC::
# 869 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE BERRY GOOD BERRY SHOP\n"
	.string "{COLOR DARK_GRAY}Contribute to our garden! (Please)$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC::
# 882 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}(What is this music? It sounds like\n"
	.string "dududududududuDUDUDUDUDU...)$"
