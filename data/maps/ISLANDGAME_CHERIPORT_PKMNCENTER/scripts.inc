ISLANDGAME_CHERIPORT_PKMNCENTER_MapScripts::
# 4 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_OnTransition
# 5 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_OnTransition::
# 9 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_CHERIPORT
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse::
# 14 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_1
# 17 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_Text_0
# 19 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 20 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_1:
# 15 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	call IslandGame_Common_PokemonCenter_1F_EventScript_Nurse
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1::
# 26 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 28 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC1_TALK
# 29 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2::
# 44 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC2_TALK
# 46 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3::
# 57 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 58 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 59 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC3_TALK
# 60 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC1_EventScript_Nurse_Text_0:
# 18 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "I'm sorry, you don't have any Pokemon!\p"
	.string "If you visit Professor Palm, he might be\n"
	.string "able to give you one.$"

ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC1_TALK::
# 32 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
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
# 49 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "{COLOR DARK_GRAY}They really need to update their\n"
	.string "selection of literature here.\p"
	.string "{COLOR DARK_GRAY}I've already read 'Skitty & Wailord' like\n"
	.string "a hundred times!$"

ISLAND_GAME_CHERIPORT_PKMNCENTER_NPC3_TALK::
# 63 "data/maps/ISLANDGAME_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "{COLOR DARK_GRAY}Man, I'm glad there's a Pokémon Center\n"
	.string "here...\p"
	.string "{COLOR DARK_GRAY}Trainers and wild Pokémon here are way\n"
	.string "tougher than at home!$"
