ISLANDGAME_ROSEVALE_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ISLANDGAME_ROSEVALE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ISLANDGAME_ROSEVALE
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_0
	showmonpic SPECIES_ARTICUNO, 10, 3
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_1
	hidemonpic
	closemessage
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_2
	closemessage
	releaseall
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC2_Text_0
	release
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Cottonee::
	lock
	faceplayer
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Cottonee_Text_0
	release
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_0:
	.string "I've lived here my entire life, and I've\n"
	.string "still never seen Articuno in person.\p"
	.string "All I have this is picture of it. Wanna\n"
	.string "see?$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_1:
	.string "Voila!$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_2:
	.string "It mostly roosts at the top of Mt.\n"
	.string "Aurora, so unless you want to climb\l"
	.string "thousands of feet in a blizzard, the\l"
	.string "best you'll have are pictures.$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC2_Text_0:
	.string "Howdy there, partner! Oop, I mean,\n"
	.string "greetings, traveler!\p"
	.string "Sorry, I just joined the Silverwing\n"
	.string "Order yesterday. I'm still learning.$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Cottonee_Text_0:
	.string "Howdy there, partner!\p"
	.string "Oop, I mean, Nuuuuub! {COLOR BLUE}(Howdy there,\n"
	.string "partner!)$"
