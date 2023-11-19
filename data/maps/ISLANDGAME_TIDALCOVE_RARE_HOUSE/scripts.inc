ISLANDGAME_TIDALCOVE_RARE_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector::
	lock
	msgbox ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_0
End:
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_RARE_HOUSE_Interact_Collector_Text_0:
	.string "I have traveled all of the Isles of\n"
	.string "Mariyama in search of exotic Pokemon.\p"
	.string "If you can show me some rare Pokemon\n"
	.string "from this island, I could offer you\l"
	.string "some rare stones in return!$"
