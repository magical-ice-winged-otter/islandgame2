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
	.string "Life in Tidalcove is great. It's always a\n"
	.string "beautiful sunny day outside.\p"
	.string "And if it ever gets too hot, Ruka's gym\n"
	.string "is here to cool us down!$"

ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPCKid_Text_0:
	.string "Mooooom... I want to go play on the\n"
	.string "beach!$"
