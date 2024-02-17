IslandGame_LoadIn_Message::
	lockall
	msgbox IslandGame_LoadIn_Msg
	additem ITEM_ISLANDGAME_RAFT
	additem ITEM_ISLANDGAME_WHISTLE
	additem ITEM_ISLANDGAME_LANTERN
	additem ITEM_ISLANDGAME_MACHETE
	additem ITEM_ISLANDGAME_PICKAXE
	additem ITEM_ISLANDGAME_POWERGLOVE
	waitbuttonpress
	releaseall
	return


TeleportMenu::
	lockall
	multichoicedefault 0, 0, MULTI_YESNO, 0, 1
	switch VAR_RESULT
	case 0, TeleportMenu_3
	case 1, TeleportMenu_4
TeleportMenu_1:
	releaseall
	end

TeleportMenu_3:
	goto TP_Yes
	goto TeleportMenu_1

TeleportMenu_4:
	goto TP_No
	goto TeleportMenu_1


TP_Yes::
	releaseall
	end


TP_No::
	releaseall
	end


IslandGame_LoadIn_Msg::
	.string "{COLOR BLUE}Added badges$"
