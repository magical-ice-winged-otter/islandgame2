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
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_2
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_2
ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_1:
	closemessage
	release
	return

ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_2:
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_1
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_1


ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_0:
	.string "Do you like gumballs?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_1:
	.string "Me too. They are yummy. I especially like\n"
	.string "blue raspberry.$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Benson_Text_2:
	.string "Huh? Why are you looking at me like\n"
	.string "that?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_PersonText::
	.string "{COLOR DARK_GRAY}Salutations! My name is Pops. Me and my\n"
	.string "Pokémon manage the meadows.$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_MordecaiText::
	.string "hueheuhuehuehue melk$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_RigbyText::
	.string "hueheuhuehuehue cereal$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_MManText::
	.string "WOOOOHOOOOO!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_FivesText::
	.string "Wasshup?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_SkipsTalk::
	.string "{COLOR RED}(It looks like Slakoth is fast asleep.)$"
