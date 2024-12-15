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
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle2::
# 78 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text
# 79 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle3::
# 100 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text
# 101 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle4::
# 122 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text
# 123 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle5::
# 148 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text
# 149 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage::
# 179 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0
# 180 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage::
# 185 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasIntro
# 186 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text
# 187 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text
# 188 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 189 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text2
# 190 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup::
# 195 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 13, MAP_ISLANDGAME_CAMP_PERSI
# 196 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 197 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 198 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	releaseall
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterMiddle::
# 205 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 206 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 207 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 208 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 209 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 211 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 213 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 214 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 215 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 216 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 217 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 219 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 220 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 222 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterLeft::
# 226 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 227 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 228 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 229 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 231 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 233 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 235 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 236 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 237 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 238 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 239 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 241 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 242 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 244 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarLeft::
# 248 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 249 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 250 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 251 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 252 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 253 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 255 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 257 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 258 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 259 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 260 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 261 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 263 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 264 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterRight::
# 270 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 271 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 272 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 273 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 274 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 275 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 277 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 279 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 280 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 281 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 282 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 283 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 285 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 286 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 288 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarRight::
# 292 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 293 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 294 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 295 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 296 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 299 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 301 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 302 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 303 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 304 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 305 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 307 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 310 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro:
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro:
# 318 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 319 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro:
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 324 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro:
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 329 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
	step_end

# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro:
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro:
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 338 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro:
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 346 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave:
# 347 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 347 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 348 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl::
# 406 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 407 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 409 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_COOKIE_GIRL_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1:
# 414 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 415 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1, MSGBOX_YESNO
# 417 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4:
# 422 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 424 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7:
# 429 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 431 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10:
# 436 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_COOKIE_GIRL_SALE
# 437 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 438 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 439 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4
# 440 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 441 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 443 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CookieGirl_End:
# 444 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 445 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 446 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 447 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2:
# 410 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0
# 411 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5:
# 418 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1
# 419 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8:
# 425 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2
# 426 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11:
# 432 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3
# 433 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy::
# 458 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 459 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 461 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_CANDY_BOY_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1:
# 466 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 467 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1, MSGBOX_YESNO
# 469 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4:
# 474 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 476 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7:
# 481 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_RAGE_CANDY_BAR
# 483 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10:
# 488 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_CANDY_BOY_SALE
# 489 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 490 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 491 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 492 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4
# 493 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 495 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CandyBoy_End:
# 496 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 497 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 498 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 499 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2:
# 462 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0
# 463 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5:
# 470 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1
# 471 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8:
# 477 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2
# 478 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11:
# 484 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3
# 485 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC1::
# 508 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 509 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 510 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk
# 511 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC2::
# 523 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 524 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 525 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk
# 526 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC3::
# 536 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 537 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 538 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk
# 539 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC4::
# 550 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 551 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 552 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk
# 553 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC5::
# 564 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 565 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk
# 566 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC6::
# 576 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 577 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk
# 578 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC7::
# 588 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 589 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 590 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk
# 591 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC8::
# 601 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 602 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 603 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk
# 604 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 605 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 606 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC9::
# 616 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 617 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk
# 618 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC10::
# 629 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 630 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 631 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk
# 632 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC11::
# 645 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 646 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 647 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk
# 648 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC12::
# 658 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 659 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 660 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk
# 661 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC13::
# 672 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 673 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 674 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk
# 675 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14::
# 686 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 687 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 688 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 690 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 691 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3
# 706 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4
# 723 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1:
# 731 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3:
# 692 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0, MSGBOX_YESNO
# 699 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6
# 704 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4:
# 707 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_TRADING_CARD
# 709 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9
# 721 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5:
# 724 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6:
# 700 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1
# 701 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9:
# 710 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeitem ITEM_ISLANDGAME_TRADING_CARD
# 711 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3
# 717 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 718 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
# 735 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 736 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 737 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 738 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0
# 739 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 740 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 741 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl::
# 745 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 746 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 747 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2
# 758 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1:
# 761 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
WaterGirl_End:
# 762 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2:
# 748 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1, MSGBOX_YESNO
# 749 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5:
# 753 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2
# 754 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 755 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6:
# 750 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0
# 751 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto WaterGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN1::
# 789 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 790 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC
# 791 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN2::
# 802 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 803 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC
# 804 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN3::
# 815 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 816 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC
# 817 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN4::
# 827 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 828 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC
# 829 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN5::
# 840 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 841 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC
# 842 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7::
# 852 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 853 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0
# 854 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance::
# 858 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 859 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0, MSGBOX_YESNO
# 861 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1:
# 865 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_2:
# 862 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 0
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0:
# 179 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0:
# 410 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}We can only sell one cookie per day!\p"
	.string "We don't have many cookies left...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1:
# 418 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2:
# 425 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3:
# 432 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4:
# 439 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0:
# 462 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, we're running low on candy bars,\n"
	.string "so we can only give one per person.\p"
	.string "Come again tomorrow!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1:
# 470 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2:
# 477 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3:
# 484 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4:
# 492 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0:
# 693 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "WAAAAAAH!\p"
	.string "I lost my super rare Charizard trading\n"
	.string "card!\p"
	.string "It was in my deck this morning, but now\n"
	.string "it's gone!\p"
	.string "I've looked everywhere for it, but I\n"
	.string "can't find it anywhere! Please help me!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1:
# 700 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "My deck won't work without that\n"
	.string "Charizard card!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2:
# 704 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PLZZZZZZZZZ$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3:
# 712 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yaaaay! You found it! Where was it?\p"
	.string "...\p"
	.string "Huh? It was just under my bed? But I\n"
	.string "checked under there a million times...\p"
	.string "Oh well. All that matters is I have my\n"
	.string "card back!\p"
	.string "Here, take this. I made it during arts\n"
	.string "and crafts!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4:
# 721 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5:
# 726 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Now I'm ready for my duel! Do you like\n"
	.string "playing the trading card game too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0:
# 738 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0:
# 750 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Aww. That's a shame. I was going to\n"
	.string "share this Squirt Bottle with you.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0:
# 853 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CHERIPORT{LEFT_ARROW}\nCAMP PERSI{UP_ARROW}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0:
# 859 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's a slight opening in the tree!\n"
	.string "Want to climb inside?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
# 59 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "{COLOR DARK_GRAY}But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text::
# 66 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text::
# 71 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}You may have beaten me now, but I'll get\n"
	.string "stronger! Believe it!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text::
# 82 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text::
# 88 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text::
# 93 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text::
# 104 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text::
# 110 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text::
# 115 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text::
# 126 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "{COLOR DARK_GRAY}So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text::
# 133 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text::
# 138 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon battles aren't really my thing,\n"
	.string "to be frank. {COLOR DARK_GRAY}Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text::
# 152 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "{COLOR DARK_GRAY}Please, help me with my research!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text::
# 159 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text::
# 164 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "{COLOR DARK_GRAY}But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text::
# 352 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ah... \p"
	.string "Your aptitude for battle is...{PAUSE 60}\n"
	.string "quite remarkable.{PAUSE 30}$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text::
# 359 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the exciting\n"
	.string "battle, {PLAYER}. Your Pokémon\l"
	.string "fought with grace and grit!\p"
	.string "{COLOR DARK_GRAY}Here, take this. It will heal your\n"
	.string "Pokémon from our battle.$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text2::
# 367 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
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
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
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
# 398 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Girl\n"
	.string "Scout Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
# 450 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Boy Scout\n"
	.string "Candy Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk::
# 514 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "{COLOR DARK_GRAY}Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "{COLOR DARK_GRAY}Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk::
# 529 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk::
# 542 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm taking the campers on a nature hike\n"
	.string "later today.\p"
	.string "{COLOR DARK_GRAY}Hopefully this time we don't come into\n"
	.string "contact with any Stunky...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk::
# 556 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "{COLOR DARK_GRAY}It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk::
# 569 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Um... do you mind?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk::
# 581 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk::
# 594 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk::
# 609 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk::
# 621 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "{COLOR DARK_GRAY}I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk::
# 635 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "{COLOR DARK_GRAY}I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "{COLOR DARK_GRAY}To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "{COLOR DARK_GRAY}I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk::
# 651 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk::
# 664 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "{COLOR DARK_GRAY}One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk::
# 678 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1::
# 765 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like gardening. Do you like\n"
	.string "gardening too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2::
# 771 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hooray! Here, take one of these and we\n"
	.string "can become gardening buddies!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3::
# 777 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}It's important to give your plants\n"
	.string "water! Remember to take care of them!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC::
# 794 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}CAMP PERSI\n"
	.string "{COLOR DARK_GRAY}The greatest summer camp in Marya!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC::
# 807 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE WILD SIDE\n"
	.string "{COLOR DARK_GRAY}! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC::
# 820 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}PERSI LAKE\n"
	.string "NO SWIMMING WITHOUT A COUNSELOR!!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC::
# 832 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE BERRY GOOD BERRY SHOP\n"
	.string "{COLOR DARK_GRAY}Contribute to our garden! (Please)$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC::
# 845 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}(What is this music? It sounds like\n"
	.string "dududududududuDUDUDUDUDU...)$"
