ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts::
	.byte 0


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
