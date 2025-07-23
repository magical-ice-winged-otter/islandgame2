ISLANDGAME_AETHERIA_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_WelcomeSign::
# 152 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WelcomeSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FanClubSign::
# 159 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FanClubSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_EmptyTrash::
# 165 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EmptyTrash_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_IceCreamLady::
# 174 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 175 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 176 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_0
	return


ISLANDGAME_AETHERIA_NPC1::
# 186 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 187 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 188 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_0
# 193 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 194 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WelcomeSign_Text_0:
# 153 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA\n"
	.string "Where stars are born!$"

ISLANDGAME_AETHERIA_FanClubSign_Text_0:
# 160 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "STARLIGHT FAN CLUB\n"
	.string "We stan the Queens of Marya!$"

ISLANDGAME_AETHERIA_EmptyTrash_Text_0:
# 166 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(There's nothing but garbage in here.)$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_0:
# 177 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "$"

ISLANDGAME_AETHERIA_NPC1_Text_0:
# 189 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ugggg... I'm tired of waking up at the\n"
	.string "crack of dawn just to sail this darn\l"
	.string "detective out into the great blue sea\l"
	.string "for the entire day...\p"
	.string "All in search of some secret island\n"
	.string "where the “global elite” supposedly\l"
	.string "gather to discuss world domination...?\p"
	.string "I ain't even sure why we even\n"
	.string "entertainin' him. We found 'em washed\l"
	.string "ashore the beaches, and he's been\l"
	.string "nonstop yappin' bout this ever since.\p"
	.string "$"
