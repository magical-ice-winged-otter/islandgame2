ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_WailmerPailItem::
	finditem ITEM_WAILMER_PAIL
	setflag FLAG_RECEIVED_WAILMER_PAIL
	release
	return


ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac::
	lock
	faceplayer
	returnqueststate QUEST_PERSI_BERRY_MANIAC
	switch VAR_RESULT
	case 1, ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_3
	case 2, ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_4
	case 4, ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_5
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1:
	release
	return

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_3:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_0
	startquest QUEST_PERSI_BERRY_MANIAC
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_1
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_4:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_1
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_5:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_2
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1


ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor::
	lock
	faceplayer
	goto_if_unset FLAG_CAMP_PERSI_BERRY_DONATION_RECEIVED, ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_2
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_Text_1
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_1:
	release
	return

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_2:
	setflag FLAG_CAMP_PERSI_BERRY_DONATION_RECEIVED
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_Text_0
	giveitem ITEM_PECHA_BERRY, 2
	giveitem ITEM_ORAN_BERRY, 2
	giveitem ITEM_PERSIM_BERRY, 2
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_1


ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep_Text_0
	pokemart BerryHouseItems
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep_Text_1
	release
	return


	.align 2
BerryHouseItems:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_0:
	.string "I am the berry MANIAC!!!\p"
	.string "GET ME BERRIES NOW!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_1:
	.string "DO YOU HAVE MY BERRIES?!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_2:
	.string "I HAVE ALL THE BERRIES!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_Text_0:
	.string "Oh, it looks like you're new to planting\n"
	.string "berries!\p"
	.string "Here, take these to get you started.$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_Text_1:
	.string "Planting berries is really fun.\p"
	.string "It feels like giving gifts to my future\n"
	.string "self!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep_Text_0:
	.string "Welcome to Camp Persi! Here, we sell\n"
	.string "locally-grown berry juice.$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep_Text_1:
	.string "Please come again!$"
