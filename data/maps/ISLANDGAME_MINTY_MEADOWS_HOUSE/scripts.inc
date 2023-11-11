ISLANDGAME_MINTY_MEADOWS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_HOUSE_Person1::
	lock
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_PersonText
	waitmessage
	release
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_PersonText::
	.string "{DARK_GRAY}How do I pass the time? Well...$"
