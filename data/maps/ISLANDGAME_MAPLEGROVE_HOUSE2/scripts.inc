ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_Doll::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_DollText
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_EventScript_eDater::
	lock
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_eDaterText
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_DollText::
	.string "{COLOR RED}(It's a Jigglypuff plush. It's very\n"
	.string "jiggly.)$"

ISLANDGAME_MAPLEGROVE_HOUSE2_eDaterText::
	.string "Oh Katie, my dear Katie! Why has fate\n"
	.string "whisked you away from me?\p"
	.string "Tis been but only a month since you\n"
	.string "departed from Oranna, the origin of our\l"
	.string "love...\p"
	.string "...and yet, it feels you have been\n"
	.string "absent from my life for years!\p"
	.string "Oh, if only there was some way for me to\n"
	.string "speak to you once more...\p"
	.string "But I am without ways to journey to\n"
	.string "your new home of Lumine!\p"
	.string "Oh, how I wish Lugia would bestow upon\n"
	.string "us a messenger of love!\p"
	.string "Perhaps a Pokémon trainer of sorts,\n"
	.string "willing to transfer my messages...\p"
	.string "But alas, it is only a wish... Nothing\n"
	.string "more...$"
