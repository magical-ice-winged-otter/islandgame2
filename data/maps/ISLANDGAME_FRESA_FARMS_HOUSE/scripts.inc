ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts::
# 6 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	gettime
# 10 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 10 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 14 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1::
# 20 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	lock
# 21 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1_Text_0
# 25 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2::
# 29 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	faceplayer
# 31 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2_Text_0
# 32 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 33 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	waitmovement 0
# 34 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC3::
# 38 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC3_Text_0
# 40 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC4::
# 44 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	faceplayer
# 46 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC4_Text_0
# 49 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1_Text_0:
# 23 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "Be sure to check our booth out at the\n"
	.string "Silverwing Festival when the time\l"
	.string "comes!$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2_Text_0:
# 31 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "I wish we got the good channels. I'm\n"
	.string "tired of no shows after dark.$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC3_Text_0:
# 39 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "{COLOR RED}(Looks like he's admiring his Torchic\n"
	.string "plush.)$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC4_Text_0:
# 47 "data/maps/ISLANDGAME_FRESA_FARMS_HOUSE/scripts.pory"
	.string "Hi sweetie! If you're hear for our\n"
	.string "famous milk, come back during the day.$"
