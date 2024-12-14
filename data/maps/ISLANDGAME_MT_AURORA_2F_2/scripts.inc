ISLANDGAME_MT_AURORA_2F_2_MapScripts::
# 8 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MT_AURORA_2F_2_MapScripts_MAP_SCRIPT_ON_RESUME
# 11 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_MT_AURORA_2F_2_MapScripts_MAP_SCRIPT_ON_LOAD
# 2 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_MT_AURORA_2F_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_MT_AURORA_2F_2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	setstepcallback STEP_CB_ICE
	return

ISLANDGAME_MT_AURORA_2F_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	special SetIcefallCaveCrackedIceMetatiles
	return

ISLANDGAME_MT_AURORA_2F_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FallThroughIceAurora
	.2byte 0


# 16 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
Movement_PlayerFallAurora:
# 17 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	set_invisible
	step_end

FallThroughIceAurora:
# 21 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	lock
# 22 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	delay 20
# 23 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFallAurora
# 24 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	waitmovement 0
# 25 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	playse SE_FALL
# 26 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	delay 60
# 27 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	warphole MAP_ISLANDGAME_MT_AURORA_3F
# 28 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	waitstate
# 29 "data/maps/ISLANDGAME_MT_AURORA_2F_2/scripts.pory"
	release
	return

