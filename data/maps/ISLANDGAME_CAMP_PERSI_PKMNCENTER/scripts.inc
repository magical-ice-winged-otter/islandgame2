ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts::
# 4 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_CAMP_PERSI
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerKid::
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	lock
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerKid_Text_0
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerWatcher::
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	faceplayer
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerWatcher_Text_0
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	waitmovement 0
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_OldPerson::
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	faceplayer
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_PERSI_PKMNCENTER_EventScript_OldPerson_Text_0
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerKid_Text_0:
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	.string "Man, the connection here sucks!$"

ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerWatcher_Text_0:
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	.string "My parents didn't let me bring my Game\n"
	.string "Boy, so I watch other people play.$"

ISLANDGAME_PERSI_PKMNCENTER_EventScript_OldPerson_Text_0:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_PKMNCENTER/scripts.pory"
	.string "This is the only place with internet\n"
	.string "access in the whole camp.\p"
	.string "The kids can get loud in here at times...$"
