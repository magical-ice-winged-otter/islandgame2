ISLANDGAME_TIDALCOVE_CYCLE_SHOP_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner::
# 4 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_2
# 10 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_1, MSGBOX_NPC
# 16 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	checkitem ITEM_BIKE_VOUCHER
# 18 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_5
ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1:
# 25 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	closemessage
# 26 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_2:
# 7 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_0, MSGBOX_NPC
	goto ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_5:
# 19 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_2, MSGBOX_NPC
# 20 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 21 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	removeitem ITEM_BIKE_VOUCHER
# 22 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
	goto ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_1


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC1::
# 31 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC1_Text_0
# 33 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	closemessage
# 34 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC2::
# 38 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC2_Text_0
# 40 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	closemessage
# 41 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_0:
# 7 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	.string "With my bike, you'll be riding through\n"
	.string "the winds, faster than a Ninjask!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_1:
# 11 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	.string "Wazzzzzup! I'm Randy, welcome to my\n"
	.string "bike shop!\p"
	.string "My bikes are the fastest, most\n"
	.string "comfortable and high-tech in the isles!\p"
	.string "Unfortunately due to high demand, I can\n"
	.string "only give 'em out to trainers who've got\l"
	.string "vouchers for beating Ruka.$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_Interact_Owner_Text_2:
# 19 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	.string "Yooo, you got a voucher? That means\n"
	.string "you got your first badge! Grats, brah!\p"
	.string "Ight, here's your ELITE bike, carefully\n"
	.string "crafted by yours truly!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC1_Text_0:
# 32 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	.string "Woooah... Woooooah!$"

ISLANDGAME_TIDALCOVE_CYCLE_SHOP_InteractNPC2_Text_0:
# 39 "data/maps/ISLANDGAME_TIDALCOVE_CYCLE_SHOP/scripts.pory"
	.string "That's right... maintain your balance!$"
