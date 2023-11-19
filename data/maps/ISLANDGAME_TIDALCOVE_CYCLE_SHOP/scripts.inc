ISLANDGAME_TIDALCOVE_CYCLE_SHOP_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner::
	lock
	goto_if_set FLAG_RECEIVED_BIKE, ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_2
	checkitem ITEM_BIKE_VOUCHER
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_5
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_2, MSGBOX_NPC
ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1:
	closemessage
	release
	return

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_2:
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_0, MSGBOX_NPC
	goto ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_5:
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_1, MSGBOX_NPC
	giveitem ITEM_MACH_BIKE
	removeitem ITEM_BIKE_VOUCHER
	setflag FLAG_RECEIVED_BIKE
	goto ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_0:
	.string "I hope you've enjoyed your bike!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_1:
	.string "Oh, that voucher you have!\n"
	.string "Let me cache it in for a free bike!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_2:
	.string "Welcome to my cycling shop!\n"
	.string "All the bikes here are custom-made!\p"
	.string "However, we're only giving them away to\n"
	.string "people with vouchers due to high\l"
	.string "demand...$"
