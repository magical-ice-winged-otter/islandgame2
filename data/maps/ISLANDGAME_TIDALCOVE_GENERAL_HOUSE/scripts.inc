ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPC::
# 4 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPC_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_Pumpkaboo::
# 16 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	lock
# 17 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	faceplayer
# 18 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	playmoncry SPECIES_PUMPKABOO_SUPER, CRY_MODE_NORMAL
# 19 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_Pumpkaboo_Text_0
# 20 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	closemessage
# 21 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_GENERAL_HOUSE_Interact_NPC_Text_0:
# 7 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
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
# 19 "data/maps/ISLANDGAME_TIDALCOVE_GENERAL_HOUSE/scripts.pory"
	.string "{COLOR RED}(This Pumpkaboo is pretty chonky.)$"
