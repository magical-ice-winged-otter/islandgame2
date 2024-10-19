ISLANDGAME_ROSEVALE_PKMNCENTER_MapScripts::
# 4 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ISLANDGAME_ROSEVALE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_ROSEVALE
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1::
# 11 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	lock
# 12 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	faceplayer
# 13 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_0
# 18 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	showmonpic SPECIES_ARTICUNO, 10, 3
# 19 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_1
# 20 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	hidemonpic
# 21 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	closemessage
# 22 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_2
# 23 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	closemessage
# 24 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	releaseall
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC2::
# 29 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	faceplayer
# 31 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC2_Text_0
# 32 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Cottonee::
# 36 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	lock
# 37 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	faceplayer
# 38 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 39 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Cottonee_Text_0
# 40 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_0:
# 14 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	.string "I've lived here my entire life, and I've\n"
	.string "still never seen Articuno in person.\p"
	.string "All I have this is picture of it. Wanna\n"
	.string "see?$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_1:
# 19 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	.string "Voila!$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC1_Text_2:
# 22 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	.string "It mostly roosts at the top of Mt.\n"
	.string "Aurora, so unless you want to climb\l"
	.string "thousands of feet in a blizzard, the\l"
	.string "best you'll have are pictures.$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_NPC2_Text_0:
# 31 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	.string "Howdy there, partner! Oop, I mean,\n"
	.string "greetings, traveler!\p"
	.string "Sorry, I just joined the Silverwing\n"
	.string "Order yesterday. I'm still learning.$"

ISLANDGAME_ROSEVALE_PKMNCENTER_EventScript_Cottonee_Text_0:
# 39 "data/maps/ISLANDGAME_ROSEVALE_PKMNCENTER/scripts.pory"
	.string "Howdy there, partner!\p"
	.string "Oop, I mean, Nuuuuub! {COLOR BLUE}(Howdy there,\n"
	.string "partner!)$"
