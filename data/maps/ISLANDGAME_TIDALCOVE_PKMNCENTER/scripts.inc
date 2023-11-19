ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ISLANDGAME_CAMP_PERSI
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1::
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2::
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_0:
	.string "I spend a lot of time in the Pokemon\n"
	.string "Center.\p"
	.string "I think the Nurse knows me by name!$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2_Text_0:
	.string "This Pokemon center gets a lot more\n"
	.string "traffic than other ones.\p"
	.string "We have our gym leader, Ruka, to thank\n"
	.string "for that.$"
