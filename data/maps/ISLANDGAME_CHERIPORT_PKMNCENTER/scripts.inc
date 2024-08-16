ISLANDGAME_CHERIPORT_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_OnTransition::
	setrespawn HEAL_LOCATION_CHERIPORT
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse::
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_1
	lock
	msgbox ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_Text_0
	closemessage
	release
	return

ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_1:
	call IslandGame_Common_PokemonCenter_1F_EventScript_Nurse
	return


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


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_Text_0:
	.string "I'm sorry, you don't have any Pokemon!\p"
	.string "If you visit Professor Palm, he might be\n"
	.string "able to give you one.$"

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
