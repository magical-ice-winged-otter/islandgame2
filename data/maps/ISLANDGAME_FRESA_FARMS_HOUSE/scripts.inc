ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC3::
	lock
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC3_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC4::
	lock
	faceplayer
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC4_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1_Text_0:
	.string "Life on a farm is soooooo boring. I hope\n"
	.string "something exciting happens soon.\p"
	.string "I don't care what. It could even be like,\n"
	.string "some sorta world-ending event.\p"
	.string "Just SOMETHING!$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2_Text_0:
	.string "I wish we got the good channels. I'm\n"
	.string "tired of no shows after dark.$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC3_Text_0:
	.string "{COLOR RED}(Looks like he's admiring his Torchic\n"
	.string "plush.)$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC4_Text_0:
	.string "Hi sweetie! If you're hear for our\n"
	.string "famous milk, come back during the day.$"
