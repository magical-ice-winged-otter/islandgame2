EventScript_StartMenu::
	goto_if_set FLAG_SYS_SAFARI_MODE, EventScript_StartMenu_BuildSafariZoneMenu
	goto_if_in_battle_pyramid EventScript_StartMenu_BuildBattlePyramidMenu
	goto_if_in_battle_pike EventScript_StartMenu_BuildBattlePikeMenu
	call_if_set FLAG_SYS_POKEDEX_GET, EventScript_StartMenu_TogglePokedex
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemon
	call_if_set FLAG_SYS_BAG, EventScript_StartMenu_ToggleBag
	call_if_set FLAG_SYS_POKENAV_GET, EventScript_StartMenu_TogglePokenav
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCard
	call_if_set FLAG_SYS_SAVE, EventScript_StartMenu_ToggleSave
	dynmultipush StartMenu_Text_Option, 6
	dynmultipush StartMenu_Text_Exit, 7
	special PlayRainStoppingSoundEffect
	dynmultistack 22, 0, 18, FALSE, 8, FALSE, VAR_START_MENU_CURSOR_POS, 2, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_2
	case 1, EventScript_StartMenu_3
	case 2, EventScript_StartMenu_4
	case 3, EventScript_StartMenu_5
	case 4, EventScript_StartMenu_6
	case 5, EventScript_StartMenu_7
	case 6, EventScript_StartMenu_8
	case 7, EventScript_StartMenu_9
	case MULTI_B_PRESSED, EventScript_StartMenu_10
	return

EventScript_StartMenu_2:
	goto EventScript_StartMenu_PokedexAccess
	return

EventScript_StartMenu_3:
	goto EventScript_StartMenu_PokemonAccess
	return

EventScript_StartMenu_4:
	goto EventScript_StartMenu_BagAccess
	return

EventScript_StartMenu_5:
	goto EventScript_StartMenu_PokenavAccess
	return

EventScript_StartMenu_6:
	goto EventScript_StartMenu_TrainerCardAccess
	return

EventScript_StartMenu_7:
	goto EventScript_StartMenu_SaveAccess
	return

EventScript_StartMenu_8:
	goto EventScript_StartMenu_OptionAccess
	return

EventScript_StartMenu_9:
	goto EventScript_StartMenu_ExitAccess
	return

EventScript_StartMenu_10:
	goto EventScript_StartMenu_ExitAccess
	return


EventScript_StartMenu_TogglePokedex::
	dynmultipush StartMenu_Text_Pokedex, 0
	return


EventScript_StartMenu_TogglePokemon::
	dynmultipush StartMenu_Text_Pokemon, 1
	return


EventScript_StartMenu_ToggleBag::
	dynmultipush StartMenu_Text_Bag, 2
	return


EventScript_StartMenu_TogglePokenav::
	dynmultipush StartMenu_Text_Pokenav, 3
	return


EventScript_StartMenu_ToggleTrainerCard::
	dynmultipush StartMenu_Text_TrainerCard, 4
	return


EventScript_StartMenu_ToggleSave::
	dynmultipush StartMenu_Text_Save, 5
	return


EventScript_StartMenu_PokedexAccess::
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenPokedexMenu
	return


EventScript_StartMenu_PokemonAccess::
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenPokemonMenu
	return


EventScript_StartMenu_BagAccess::
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenBagMenu
	return


EventScript_StartMenu_PokenavAccess::
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenPokenavMenu
	return


EventScript_StartMenu_TrainerCardAccess::
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenTrainerCardMenu
	return


EventScript_StartMenu_SaveAccess::
	special RemoveExtraStartMenuWindows
	call Common_EventScript_SaveGame
	releaseall
	return


EventScript_StartMenu_OptionAccess::
	special RemoveExtraStartMenuWindows
	fadescreen FADE_TO_BLACK
	special Script_StartMenu_OpenOptionsMenu
	return


EventScript_StartMenu_ExitAccess::
	special RemoveExtraStartMenuWindows
	return


EventScript_StartMenu_BuildSafariZoneMenu::
	dynmultipush StartMenu_Text_Retire, 0
	call_if_set FLAG_SYS_POKEDEX_GET, EventScript_StartMenu_TogglePokedexInSafari
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemonInSafari
	call_if_set FLAG_SYS_BAG, EventScript_StartMenu_ToggleBagInSafari
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCardInSafari
	dynmultipush StartMenu_Text_Option, 5
	dynmultipush StartMenu_Text_Exit, 6
	special PlayRainStoppingSoundEffect
	special ShowSafariBallsWindow
	dynmultistack 22, 0, 16, TRUE, 8, FALSE, VAR_START_MENU_CURSOR_POS, 2, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_BuildSafariZoneMenu_2
	case 1, EventScript_StartMenu_BuildSafariZoneMenu_3
	case 2, EventScript_StartMenu_BuildSafariZoneMenu_4
	case 3, EventScript_StartMenu_BuildSafariZoneMenu_5
	case 4, EventScript_StartMenu_BuildSafariZoneMenu_6
	case 5, EventScript_StartMenu_BuildSafariZoneMenu_7
	case 6, EventScript_StartMenu_BuildSafariZoneMenu_8
	case MULTI_B_PRESSED, EventScript_StartMenu_BuildSafariZoneMenu_9
	return

EventScript_StartMenu_BuildSafariZoneMenu_2:
	goto EventScript_StartMenu_RetireSafariAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_3:
	goto EventScript_StartMenu_PokedexAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_4:
	goto EventScript_StartMenu_PokemonAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_5:
	goto EventScript_StartMenu_BagAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_6:
	goto EventScript_StartMenu_TrainerCardAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_7:
	goto EventScript_StartMenu_OptionAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_8:
	goto EventScript_StartMenu_ExitAccess
	return

EventScript_StartMenu_BuildSafariZoneMenu_9:
	goto EventScript_StartMenu_ExitAccess
	return


EventScript_StartMenu_TogglePokedexInSafari::
	dynmultipush StartMenu_Text_Pokedex, 1
	return


EventScript_StartMenu_TogglePokemonInSafari::
	dynmultipush StartMenu_Text_Pokemon, 2
	return


EventScript_StartMenu_ToggleBagInSafari::
	dynmultipush StartMenu_Text_Bag, 3
	return


EventScript_StartMenu_ToggleTrainerCardInSafari::
	dynmultipush StartMenu_Text_TrainerCard, 4
	return


EventScript_StartMenu_RetireSafariAccess::
	special Script_StartMenu_OpenRetireSafari
	return


EventScript_StartMenu_BuildBattlePyramidMenu::
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemonInBattlePyramid
	call_if_set FLAG_SYS_BAG, EventScript_StartMenu_ToggleBagInBattlePyramid
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCardInBattlePyramid
	dynmultipush StartMenu_Text_Rest, 3
	dynmultipush StartMenu_Text_Retire, 4
	dynmultipush StartMenu_Text_Option, 5
	dynmultipush StartMenu_Text_Exit, 6
	special PlayRainStoppingSoundEffect
	special ShowPyramidFloorWindow
	dynmultistack 22, 0, 16, TRUE, 8, FALSE, VAR_START_MENU_CURSOR_POS, 2, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_BuildBattlePyramidMenu_2
	case 1, EventScript_StartMenu_BuildBattlePyramidMenu_3
	case 2, EventScript_StartMenu_BuildBattlePyramidMenu_4
	case 3, EventScript_StartMenu_BuildBattlePyramidMenu_5
	case 4, EventScript_StartMenu_BuildBattlePyramidMenu_6
	case 5, EventScript_StartMenu_BuildBattlePyramidMenu_7
	case 6, EventScript_StartMenu_BuildBattlePyramidMenu_8
	case MULTI_B_PRESSED, EventScript_StartMenu_BuildBattlePyramidMenu_9
	return

EventScript_StartMenu_BuildBattlePyramidMenu_2:
	goto EventScript_StartMenu_PokemonAccess
	return

EventScript_StartMenu_BuildBattlePyramidMenu_3:
	goto EventScript_StartMenu_BagAccess
	return

EventScript_StartMenu_BuildBattlePyramidMenu_4:
	goto EventScript_StartMenu_TrainerCardAccess
	return

EventScript_StartMenu_BuildBattlePyramidMenu_5:
	goto EventScript_StartMenu_Rest
	return

EventScript_StartMenu_BuildBattlePyramidMenu_6:
	goto EventScript_StartMenu_RetireBattlePyramidAccess
	return

EventScript_StartMenu_BuildBattlePyramidMenu_7:
	goto EventScript_StartMenu_OptionAccess
	return

EventScript_StartMenu_BuildBattlePyramidMenu_8:
	goto EventScript_StartMenu_ExitAccess
	return

EventScript_StartMenu_BuildBattlePyramidMenu_9:
	goto EventScript_StartMenu_ExitAccess
	return


EventScript_StartMenu_TogglePokemonInBattlePyramid::
	dynmultipush StartMenu_Text_Pokemon, 0
	return


EventScript_StartMenu_ToggleBagInBattlePyramid::
	dynmultipush StartMenu_Text_Bag, 1
	return


EventScript_StartMenu_ToggleTrainerCardInBattlePike::
	dynmultipush StartMenu_Text_TrainerCard, 2
	return


EventScript_StartMenu_ToggleTrainerCardInBattlePyramid::
	dynmultipush StartMenu_Text_TrainerCard, 2
	return


EventScript_StartMenu_Rest::
	special RemoveExtraStartMenuWindows
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, NO, EventScript_StartMenu_BuildBattlePyramidMenu
	callnative DoSoftReset
	releaseall
	return


EventScript_StartMenu_RetireBattlePyramidAccess::
	msgbox gText_BattlePyramidConfirmRetire, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_StartMenu_RebuildBattlePyramidMenu
	closemessage
	special RemoveExtraStartMenuWindows
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	return


EventScript_StartMenu_RebuildBattlePyramidMenu::
	closemessage
	goto EventScript_StartMenu_BuildBattlePyramidMenu
	return


EventScript_StartMenu_BuildBattlePikeMenu::
	call_if_set FLAG_SYS_POKEDEX_GET, EventScript_StartMenu_TogglePokedex
	call_if_set FLAG_SYS_POKEMON_GET, EventScript_StartMenu_TogglePokemon
	call_if_set FLAG_SYS_TRAINER_CARD, EventScript_StartMenu_ToggleTrainerCardInBattlePike
	dynmultipush StartMenu_Text_Option, 3
	dynmultipush StartMenu_Text_Exit, 4
	special PlayRainStoppingSoundEffect
	dynmultistack 22, 0, 16, TRUE, 8, FALSE, VAR_START_MENU_CURSOR_POS, 2, DYN_MULTICHOICE_CB_UPDATE_START_MENU_CURSOR_POS
	switch VAR_RESULT
	case 0, EventScript_StartMenu_BuildBattlePikeMenu_2
	case 1, EventScript_StartMenu_BuildBattlePikeMenu_3
	case 2, EventScript_StartMenu_BuildBattlePikeMenu_4
	case 3, EventScript_StartMenu_BuildBattlePikeMenu_5
	case 4, EventScript_StartMenu_BuildBattlePikeMenu_6
	case MULTI_B_PRESSED, EventScript_StartMenu_BuildBattlePikeMenu_7
	return

EventScript_StartMenu_BuildBattlePikeMenu_2:
	goto EventScript_StartMenu_PokedexAccess
	return

EventScript_StartMenu_BuildBattlePikeMenu_3:
	goto EventScript_StartMenu_PokemonAccess
	return

EventScript_StartMenu_BuildBattlePikeMenu_4:
	goto EventScript_StartMenu_TrainerCardAccess
	return

EventScript_StartMenu_BuildBattlePikeMenu_5:
	goto EventScript_StartMenu_OptionAccess
	return

EventScript_StartMenu_BuildBattlePikeMenu_6:
	goto EventScript_StartMenu_ExitAccess
	return

EventScript_StartMenu_BuildBattlePikeMenu_7:
	goto EventScript_StartMenu_ExitAccess
	return


StartMenu_Text_Pokedex::
	.string "Pokédex$"

StartMenu_Text_Pokemon::
	.string "Pokémon$"

StartMenu_Text_Bag::
	.string "Bag$"

StartMenu_Text_Pokenav::
	.string "Pokénav$"

StartMenu_Text_TrainerCard::
	.string "{PLAYER}$"

StartMenu_Text_Save::
	.string "Save$"

StartMenu_Text_Option::
	.string "Options$"

StartMenu_Text_Exit::
	.string "Exit$"

StartMenu_Text_Retire::
	.string "Retire$"

StartMenu_Text_Rest::
	.string "Rest$"
