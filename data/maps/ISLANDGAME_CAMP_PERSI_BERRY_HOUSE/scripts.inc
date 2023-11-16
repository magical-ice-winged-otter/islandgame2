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
BerryManiac_CheriStep:
	checkitem ITEM_CHERI_BERRY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_7
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_6:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_4
	checkitemspace ITEM_BERRY_JUICE
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_10
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_9:
	removeitem ITEM_CHERI_BERRY
	giveitem ITEM_BERRY_JUICE
	completesubquest QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_2
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_5
	goto BerryManiac_End
BerryManiac_AspearStep:
	checkitem ITEM_ASPEAR_BERRY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_13
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_12:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_7
	checkitemspace ITEM_RARE_CANDY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_16
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_15:
	removeitem ITEM_ASPEAR_BERRY
	giveitem ITEM_RARE_CANDY
	completesubquest QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_3
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_8
	goto BerryManiac_End
BerryManiac_LeppaStep:
	checkitem ITEM_LEPPA_BERRY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_19
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_18:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_7
	checkitemspace ITEM_EXP_SHARE
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_22
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_21:
	removeitem ITEM_LEPPA_BERRY
	giveitem ITEM_EXP_SHARE
	completesubquest QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_4
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_10
	goto BerryManiac_End
BerryManiac_SitrusStep:
	checkitem ITEM_SITRUS_BERRY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_25
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_24:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_7
	checkitemspace ITEM_FULL_RESTORE
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_28
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_27:
	removeitem ITEM_SITRUS_BERRY
	giveitem ITEM_FULL_RESTORE
	completesubquest QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_5
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_12
	goto BerryManiac_End
BerryManiac_LumStep:
	checkitem ITEM_LUM_BERRY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_31
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_30:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_13
	checkitemspace ITEM_PP_MAX
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_34
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_33:
	removeitem ITEM_LUM_BERRY
	giveitem ITEM_PP_MAX
	completesubquest QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_6
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_14
	goto BerryManiac_End
BerryManiac_LiechiStep:
	checkitem ITEM_LIECHI_BERRY
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_37
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_36:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_16
	checkitemspace ITEM_MAX_REVIVE
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_40
ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_39:
	removeitem ITEM_LIECHI_BERRY
	giveitem ITEM_MAX_REVIVE
	completequest QUEST_PERSI_BERRY_MANIAC
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_2
	goto BerryManiac_End
BerryManiac_NotEnoughRoom:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_17
BerryManiac_End:
	release
	return

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_3:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_0
	startquest QUEST_PERSI_BERRY_MANIAC
	completesubquest QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_1
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_4:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_1
	goto_if_subquest_not_complete QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_2, BerryManiac_CheriStep
	goto_if_subquest_not_complete QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_3, BerryManiac_AspearStep
	goto_if_subquest_not_complete QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_4, BerryManiac_LeppaStep
	goto_if_subquest_not_complete QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_5, BerryManiac_SitrusStep
	goto_if_subquest_not_complete QUEST_PERSI_BERRY_MANIAC, SUB_QUEST_PERSI_BERRY_6, BerryManiac_LumStep
	goto BerryManiac_LiechiStep
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_5:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_2
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_1

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_7:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_3
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_6

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_10:
	goto BerryManiac_NotEnoughRoom
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_9

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_13:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_6
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_12

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_16:
	goto BerryManiac_NotEnoughRoom
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_15

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_19:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_9
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_18

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_22:
	goto BerryManiac_NotEnoughRoom
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_21

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_25:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_11
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_24

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_28:
	goto BerryManiac_NotEnoughRoom
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_27

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_31:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_11
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_30

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_34:
	goto BerryManiac_NotEnoughRoom
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_33

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_37:
	msgbox ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_15
	goto BerryManiac_End
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_36

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_40:
	goto BerryManiac_NotEnoughRoom
	goto ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_39


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
	.string "I AM BARRY, THE BERRY MANIAC. I LOVE\n"
	.string "BERRIES. GET ME A CHERI BERRY NOW!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_1:
	.string "DO YOU POSSESS THE BERRY I YEARN FOR!?$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_2:
	.string "FINALLY. IT'S COMPLETE. I HAVE ALL THE\n"
	.string "BERRIES NEEDED FOR MY COLLECTION!!!\p"
	.string "AHAHAHAHAHAHA$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_3:
	.string "NO, NO, NO, THAT WON'T DO. I NEED A CHERI\n"
	.string "BERRY!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_4:
	.string "YES! YES! THE CHERI BERRY! IT IS MINE!\n"
	.string "THANK YOU VERY MUCH. TAKE THIS!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_5:
	.string "NOW GET ME AN ASPEAR BERRY. QUICKLY!\n"
	.string "TIME IS WASTING AWAY, MY FRIEND!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_6:
	.string "NO, NO, NO, THAT WON'T DO. I NEED AN\n"
	.string "ASPEAR BERRY!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_7:
	.string "YES! YES! THE ASPEAR BERRY! IT IS MINE!\n"
	.string "THANK YOU VERY MUCH. TAKE THIS!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_8:
	.string "NOW GET ME A LEPPA BERRY. QUICKLY! TIME\n"
	.string "IS WASTING AWAY, MY FRIEND!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_9:
	.string "NO, NO, NO, THAT WON'T DO. I NEED A LEPPA\n"
	.string "BERRY!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_10:
	.string "NOW GET ME A SITRUS BERRY. QUICKLY!\n"
	.string "TIME IS WASTING AWAY, MY FRIEND!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_11:
	.string "NO, NO, NO, THAT WON'T DO. I NEED A\n"
	.string "SITRUS BERRY!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_12:
	.string "NOW GET ME A LUM BERRY. QUICKLY! TIME\n"
	.string "IS WASTING AWAY, MY FRIEND!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_13:
	.string "YES! YES! THE LUM BERRY! IT IS MINE!\n"
	.string "THANK YOU VERY MUCH. TAKE THIS!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_14:
	.string "FINALLY, I NEED THE LEGENDARY LIECHI\n"
	.string "BERRY! FIND IT FOR ME. FIND IT NOW!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_15:
	.string "NO, NO, NO, THAT WON'T DO. I NEED THE\n"
	.string "LEGENDARY LIECHI BERRY!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_16:
	.string "YES... YES!!! YOU FOUND IT! AHAHAHAHA!\n"
	.string "TAKE THIS TAKE THIS TAKE THIS!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryManiac_Text_17:
	.string "YOU DON'T HAVE ENOUGH ROOM FOR YOUR\n"
	.string "REWARD. MAKE SOME ROOM!!!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_Text_0:
	.string "Oh, it looks like you're new to planting\n"
	.string "berries!\p"
	.string "Here, take these to get you started.$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryDonor_Text_1:
	.string "Planting berries is really fun.\p"
	.string "It feels like giving gifts to my future\n"
	.string "self!$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep_Text_0:
	.string "Welcome to the Berry House. Here, we\n"
	.string "sell locally grown berries and juice.$"

ISLANDGAME_CAMP_PERSI_BERRY_HOUSE_EventScript_BerryShopkeep_Text_1:
	.string "May the peace be with you.$"
