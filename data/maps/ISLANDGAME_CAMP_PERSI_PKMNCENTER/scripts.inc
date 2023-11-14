ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ISLANDGAME_CAMP_PERSI
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerKid::
	lock
	msgbox ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerKid_Text_0
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerWatcher::
	lock
	faceplayer
	msgbox ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerWatcher_Text_0
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_OldPerson::
	lock
	faceplayer
	msgbox ISLANDGAME_PERSI_PKMNCENTER_EventScript_OldPerson_Text_0
	release
	return


ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerKid_Text_0:
	.string "Man, the connection here sucks!$"

ISLANDGAME_PERSI_PKMNCENTER_EventScript_GamerWatcher_Text_0:
	.string "My parents didn't let me bring my\n"
	.string "GameBoy, so I watch other people play...$"

ISLANDGAME_PERSI_PKMNCENTER_EventScript_OldPerson_Text_0:
	.string "This is the only place with internet\n"
	.string "access in the whole camp.\p"
	.string "The kids can get loud in here at times...$"
