ISLANDGAME_FRESA_FARMS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1::
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2::
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_MilkVendor::
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_MilkVendor_Text_0, MSGBOX_NPC
	pokemart MilkVendorItems
	msgbox ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_MilkVendor_Text_1, MSGBOX_NPC
	return


	.align 2
MilkVendorItems:
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC1_Text_0:
	.string "I am NPC 1$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_NPC2_Text_0:
	.string "I am NPC 2$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_MilkVendor_Text_0:
	.string "Welcome to Fresa Farms!\p"
	.string "Our MooMoo Milk is sourced from the\n"
	.string "happiest Miltanks around!$"

ISLANDGAME_FRESA_FARMS_HOUSE_EventScripts_MilkVendor_Text_1:
	.string "Thank you for supporting the farm!$"
