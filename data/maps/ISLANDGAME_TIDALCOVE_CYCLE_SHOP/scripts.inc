ISLANDGAME_TIDALCOVE_CYCLE_SHOP_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_2
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_1, MSGBOX_NPC
	checkitem ITEM_BIKE_VOUCHER
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_5
ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1:
	closemessage
	release
	return

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_2:
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_0, MSGBOX_NPC
	goto ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_5:
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_2, MSGBOX_NPC
	giveitem ITEM_ACRO_BIKE
	removeitem ITEM_BIKE_VOUCHER
	setflag FLAG_RECEIVED_BIKE
	goto ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC1::
	lock
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC1_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC2::
	lock
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_0:
	.string "With my bike, you'll be riding through\n"
	.string "the winds, faster than a Ninjask!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_1:
	.string "Wazzzzzup! I'm Randy, welcome to my\n"
	.string "bike shop!\p"
	.string "My bikes are the fastest, most\n"
	.string "comfortable and high-tech in the\l"
	.string "isles!\p"
	.string "Unfortunately due to high demand, I can\n"
	.string "only give 'em out to trainers who've got\l"
	.string "vouchers for beating Ruka.$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_2:
	.string "Yooo, you got a voucher? That means\n"
	.string "you got your first badge! Grats, brah!\p"
	.string "Ight, here's your ELITE bike, carefully\n"
	.string "crafted by yours truly!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC1_Text_0:
	.string "Woooah... Woooooah!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC2_Text_0:
	.string "That's right... maintain your balance!$"
