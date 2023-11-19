ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCMom::
	msgbox ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCMom_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCKid::
	lock
	msgbox ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCKid_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCMom_Text_0:
	.string "Life in Tidalcove is very relaxed.\p"
	.string "It's always sunny, and if we need to\n"
	.string "cool down Ruka can bring down some\l"
	.string "hail!$"

ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCKid_Text_0:
	.string "Mom... I want to go play on the beach!$"
