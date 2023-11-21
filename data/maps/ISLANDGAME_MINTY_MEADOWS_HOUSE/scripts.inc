ISLANDGAME_MINTY_MEADOWS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1::
	lock
	faceplayer
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_PersonText
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Mordecai::
	lock
	playmoncry SPECIES_STARLY, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_MordecaiText
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Rigby::
	lock
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_RigbyText
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_MMan::
	lock
	faceplayer
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_MManText
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Fives::
	lock
	faceplayer
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_FivesText
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Skips::
	lock
	playmoncry SPECIES_SLAKOTH, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_SkipsTalk
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson::
	lock
	playmoncry SPECIES_BLACEPHALON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_BensonTalk
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_PersonText::
	.string "{COLOR DARK_GRAY}Salutations! My name is Pops. I'm the\n"
	.string "owner of Minty Meadows.$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_MordecaiText::
	.string "{COLOR DARK_GRAY}hueheuhuehuehue melk$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_RigbyText::
	.string "{COLOR DARK_GRAY}hueheuhuehuehue cereal$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_MManText::
	.string "{COLOR DARK_GRAY}WOOOOHOOOOO!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_FivesText::
	.string "{COLOR DARK_GRAY}Wasshup?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_SkipsTalk::
	.string "{COLOR RED}(It looks like Slackoth is fast asleep.)$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_BensonTalk::
	.string "{COLOR RED}(What kind of Pokémon is this? It looks\n"
	.string "so alien...)$"
