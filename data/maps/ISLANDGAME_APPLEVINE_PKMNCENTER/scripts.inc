ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_PKMNCENTER_Interact_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return

