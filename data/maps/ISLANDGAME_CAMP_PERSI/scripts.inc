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
	goto_if_lt ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 21 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1::
# 49 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text
# 50 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle2::
# 72 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text
# 73 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle3::
# 94 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text
# 95 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle4::
# 116 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text
# 117 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle5::
# 142 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text
# 143 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage::
# 173 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0
# 174 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage::
# 179 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasIntro
# 180 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text
# 181 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text
# 182 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 183 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text2
# 184 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup::
# 189 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject 13, MAP_ISLANDGAME_CAMP_PERSI
# 190 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 191 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 192 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	releaseall
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterMiddle::
# 199 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 200 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 201 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 202 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
# 203 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 205 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 207 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 208 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 209 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 210 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
# 211 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 213 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 214 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterLeft::
# 220 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 221 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 222 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 223 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
# 224 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 227 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 229 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 231 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 232 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 233 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 235 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 236 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 238 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarLeft::
# 242 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 243 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 244 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 245 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
# 246 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 247 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 249 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 251 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 252 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 253 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 254 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 255 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 257 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 258 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 260 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterRight::
# 264 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 265 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 266 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 267 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
# 268 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 269 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 271 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 273 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 274 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 275 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 276 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 277 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 279 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 280 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 282 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarRight::
# 286 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lockall
# 287 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
# 288 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
# 289 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
# 290 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 291 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 293 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
# 295 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 296 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
# 298 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
# 299 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 301 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 302 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 304 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


# 307 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro:
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro:
# 312 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 313 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro:
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 317 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 318 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

# 321 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro:
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
	step_end

# 326 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro:
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

# 331 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro:
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 332 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_right
	step_end

# 336 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro:
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 337 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 340 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave:
# 341 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 341 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 342 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl::
# 400 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 401 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 403 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_COOKIE_GIRL_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1:
# 408 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 409 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1, MSGBOX_YESNO
# 411 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4:
# 416 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 418 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7:
# 423 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 425 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10:
# 430 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_COOKIE_GIRL_SALE
# 431 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 432 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 433 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4
# 434 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 435 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 437 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CookieGirl_End:
# 438 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 439 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 440 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 441 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_2:
# 404 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0
# 405 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_5:
# 412 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_8:
# 419 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2
# 420 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_11:
# 426 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3
# 427 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CookieGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy::
# 452 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 453 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 455 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_CANDY_BOY_SALE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1:
# 460 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 461 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1, MSGBOX_YESNO
# 463 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4:
# 468 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkmoney 250
# 470 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7:
# 475 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitemspace ITEM_RAGE_CANDY_BAR
# 477 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10:
# 482 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_CANDY_BOY_SALE
# 483 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 484 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 485 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 486 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4
# 487 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
# 489 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
CandyBoy_End:
# 490 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 491 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 492 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 493 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_2:
# 456 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0
# 457 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_5:
# 464 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1
# 465 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_4

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_8:
# 471 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2
# 472 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_7

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_11:
# 478 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3
# 479 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto CandyBoy_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_10


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC1::
# 502 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 503 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 504 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk
# 505 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC2::
# 517 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 518 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 519 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk
# 520 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC3::
# 530 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 531 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 532 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk
# 533 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC4::
# 544 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 545 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 546 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk
# 547 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC5::
# 558 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 559 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk
# 560 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC6::
# 570 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 571 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk
# 572 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC7::
# 582 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 583 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 584 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk
# 585 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC8::
# 595 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 596 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 597 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk
# 598 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 599 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 600 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC9::
# 610 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 611 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk
# 612 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC10::
# 623 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 624 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 625 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk
# 626 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC11::
# 639 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 640 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 641 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk
# 642 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC12::
# 652 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 653 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 654 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk
# 655 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC13::
# 666 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 667 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 668 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk
# 669 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14::
# 680 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 681 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 682 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 684 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 685 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3
# 695 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4
# 710 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1:
# 714 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3:
# 686 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0, MSGBOX_YESNO
# 688 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6
# 693 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4:
# 696 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	checkitem ITEM_ISLANDGAME_TRADING_CARD
# 698 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9
# 708 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_5:
# 711 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_6:
# 689 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1
# 690 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_9:
# 699 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeitem ITEM_ISLANDGAME_TRADING_CARD
# 700 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3
# 704 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 705 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
# 718 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 719 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 720 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 721 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0
# 722 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 723 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement 0
# 724 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl::
# 728 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 729 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 730 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2
# 741 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1:
# 744 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
WaterGirl_End:
# 745 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_2:
# 731 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1, MSGBOX_YESNO
# 732 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5:
# 736 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2
# 737 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 738 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_6:
# 733 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0
# 734 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto WaterGirl_End
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_5


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN1::
# 772 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 773 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC
# 774 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN2::
# 785 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 786 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC
# 787 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN3::
# 798 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 799 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC
# 800 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN4::
# 810 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 811 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC
# 812 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN5::
# 823 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 824 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC
# 825 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7::
# 835 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 836 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0
# 837 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance::
# 841 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 842 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0, MSGBOX_YESNO
# 844 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_2
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1:
# 848 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_2:
# 845 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 0
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0:
# 173 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_0:
# 404 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}We can only sell one cookie per day!\p"
	.string "We don't have many cookies left...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_1:
# 412 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_2:
# 419 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_3:
# 426 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl_Text_4:
# 433 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_0:
# 456 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, we're running low on candy bars,\n"
	.string "so we can only give one per person.\p"
	.string "Come again tomorrow!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_1:
# 464 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_2:
# 471 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_3:
# 478 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy_Text_4:
# 486 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_0:
# 686 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "WAAAAAH!\p"
	.string "I lost my favorite Charizard trading\n"
	.string "card in Verdant Woods!\p"
	.string "Please help me find it!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_1:
# 689 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yay! That card means everything to me!\n"
	.string "I need it back!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_2:
# 693 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PLZZZZZZZZZ$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_3:
# 701 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "You found my card! Thank you so much!\p"
	.string "I bought this Soothe Bell to help me\n"
	.string "calm down...\p"
	.string "But now I don't need it, so here!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_4:
# 708 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_Text_5:
# 711 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I'm never taking my card outside again...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag_Text_0:
# 721 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_WaterGirl_Text_0:
# 733 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Aww. That's a shame. I was going to\n"
	.string "share this Squirt Bottle with you.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN7_Text_0:
# 836 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CHERIPORT{LEFT_ARROW}\nCAMP PERSI{UP_ARROW}$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_MacheteTreeEntrance_Text_0:
# 842 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's a slight opening in the tree!\n"
	.string "Want to climb inside?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
# 53 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "{COLOR DARK_GRAY}But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text::
# 60 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text::
# 65 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}You may have beaten me now, but I'll get\n"
	.string "stronger! Believe it!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text::
# 76 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text::
# 82 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text::
# 87 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text::
# 98 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text::
# 104 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text::
# 109 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text::
# 120 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "{COLOR DARK_GRAY}So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text::
# 127 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text::
# 132 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon battles aren't really my thing,\n"
	.string "to be frank. {COLOR DARK_GRAY}Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text::
# 146 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "{COLOR DARK_GRAY}Please, help me with my research!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text::
# 153 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text::
# 158 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "{COLOR DARK_GRAY}But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text::
# 346 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ah... \p"
	.string "Your aptitude for battle is...{PAUSE 60}\n"
	.string "quite remarkable.{PAUSE 30}$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text::
# 353 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the exciting\n"
	.string "battle, {PLAYER}. Your Pokémon\l"
	.string "fought with grace and grit!\p"
	.string "{COLOR DARK_GRAY}Here, take this. It will heal your\n"
	.string "Pokémon from our battle.$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text2::
# 361 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
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
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
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
# 392 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Girl\n"
	.string "Scout Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
# 444 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Boy Scout\n"
	.string "Candy Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk::
# 508 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "{COLOR DARK_GRAY}Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "{COLOR DARK_GRAY}Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk::
# 523 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk::
# 536 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm taking the campers on a nature hike\n"
	.string "later today.\p"
	.string "{COLOR DARK_GRAY}Hopefully this time we don't come into\n"
	.string "contact with any Stunky...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk::
# 550 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "{COLOR DARK_GRAY}It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk::
# 563 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Um... do you mind?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk::
# 575 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk::
# 588 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk::
# 603 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk::
# 615 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "{COLOR DARK_GRAY}I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk::
# 629 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "{COLOR DARK_GRAY}I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "{COLOR DARK_GRAY}To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "{COLOR DARK_GRAY}I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk::
# 645 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk::
# 658 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "{COLOR DARK_GRAY}One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk::
# 672 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk1::
# 748 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}I really like gardening. Do you like\n"
	.string "gardening too?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk2::
# 754 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}Hooray! Here, take one of these and we\n"
	.string "can become gardening buddies!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_WaterGirlTalk3::
# 760 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}It's important to give your plants\n"
	.string "water! Remember to take care of them!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC::
# 777 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}CAMP PERSI\n"
	.string "{COLOR DARK_GRAY}The greatest summer camp in Marya!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC::
# 790 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE WILD SIDE\n"
	.string "{COLOR DARK_GRAY}! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC::
# 803 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}PERSI LAKE\n"
	.string "NO SWIMMING WITHOUT A COUNSELOR!!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC::
# 815 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR DARK_GRAY}THE BERRY GOOD BERRY SHOP\n"
	.string "{COLOR DARK_GRAY}Contribute to our garden! (Please)$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN5_DESC::
# 828 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}(What is this music? It sounds like\n"
	.string "dududududududuDUDUDUDUDU...)$"
