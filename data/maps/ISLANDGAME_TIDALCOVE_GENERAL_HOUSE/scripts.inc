ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPC::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPC_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_Pumpkaboo::
	lock
	faceplayer
	playmoncry SPECIES_PUMPKABOO, CRY_MODE_NORMAL
	msgbox ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_Pumpkaboo_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPC_Text_0:
	.string "The size of your Pumpkaboo will affect\n"
	.string "its stats!\p"
	.string "Smaller Pumpkaboo are faster, and have\n"
	.string "higher special attack and special\l"
	.string "defense, but have lower physical\l"
	.string "attack and physical defense.\p"
	.string "The opposite is true for larger\n"
	.string "Pumpkaboo!\p"
	.string "If you want to catch a Pumpkaboo,\n"
	.string "they're most active during the night.\p"
	.string "You might find one just roaming around\n"
	.string "up north!$"

ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_Pumpkaboo_Text_0:
	.string "{COLOR RED}(This Pumpkaboo is pretty chubby.)$"
