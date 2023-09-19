ISLANDGAME_CHERIPORT_PKMNCENTER_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2::
	lock
	msgbox ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC2_TALK
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC3_TALK
	release
	return


ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC1_TALK::
	.string "{COLOR DARK_GRAY}It's dangerous to wander outside\n"
	.string "Cheriport without a Pokémon.\p"
	.string "{COLOR DARK_GRAY}Even if you don't have one though,\n"
	.string "there's still lots to do in Cheriport!\p"
	.string "{COLOR DARK_GRAY}One of my favorite things to do is take\n"
	.string "long walks on the beach.\p"
	.string "{COLOR DARK_GRAY}Candle-lit dinners aren't half bad\n"
	.string "either.\p"
	.string "{COLOR DARK_GRAY}Perhaps you'd like to take me to one?\p"
	.string "{COLOR DARK_GRAY}Aha, I am just kidding.$"

ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC2_TALK::
	.string "{COLOR DARK_GRAY}They really need to update their\n"
	.string "selection of literature here.\p"
	.string "{COLOR DARK_GRAY}I've already read 'Skitty & Wailord' like\n"
	.string "a hundred times!$"

ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC3_TALK::
	.string "{COLOR DARK_GRAY}Man, I'm glad there's a Pokémon Center\n"
	.string "here...\p"
	.string "{COLOR DARK_GRAY}Trainers and wild Pokémon here are way\n"
	.string "tougher than at home!$"
