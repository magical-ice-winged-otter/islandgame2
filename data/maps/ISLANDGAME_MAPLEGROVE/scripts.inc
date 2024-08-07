ISLANDGAME_MAPLEGROVE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	return

ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_3
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1::
	lock
	faceplayer
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	goto_if_unset FLAG_MAPLEGROVE_BUNEARY_GIFT, ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_2
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_1
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_1:
PKMN1Event_End:
	release
	return

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_2:
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN1Talk, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_6
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_5:
	checkitemspace ITEM_NORMAL_GEM
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_9
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_8:
	giveitem ITEM_NORMAL_GEM
	setflag FLAG_MAPLEGROVE_BUNEARY_GIFT
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_1

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_6:
	goto PKMN1Event_End
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_5

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_9:
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_0
	goto PKMN1Event_End
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_8


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN2::
	lock
	faceplayer
	playmoncry SPECIES_BUIZEL, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN2Talk
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN3::
	lock
	faceplayer
	playmoncry SPECIES_SURSKIT, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN3Talk
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN4::
	lock
	faceplayer
	playmoncry SPECIES_COTTONEE, CRY_MODE_WEAK
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN4Talk
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN5::
	lock
	faceplayer
	playmoncry SPECIES_FLETCHLING, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN5Talk
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC1Talk
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC2Talk
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3::
	lock
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_2
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_Text_0
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_1:
	release
	return

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_2:
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC3Talk
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_1


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_SIGN::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_SIGNText
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_0:
	.string "{COLOR RED}(I don't have enough space to carry it.)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_1:
	.string "{COLOR DARK_GRAY}Konpeko Konpeko Konpeko!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_Text_0:
	.string "These two Pokémon don't get along at\n"
	.string "all. I don't know why.$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN1Talk::
	.string "{COLOR RED}(Huh? It looks like Buneary is trying to\n"
	.string "give me something.)\p"
	.string "{COLOR RED}(Should I take it?)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN2Talk::
	.string "{COLOR DARK_GRAY}Bui-bui!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN3Talk::
	.string "{COLOR DARK_GRAY}A$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN4Talk::
	.string "{COLOR DARK_GRAY}Nee...\p"
	.string "{COLOR RED}(It seems like Cottonee is trying to\n"
	.string "tell me something.)\p"
	.string "{COLOR RED}(She says her name is CJ and that she\n"
	.string "hates the Fletchling over there.)\p"
	.string "{COLOR RED}(She says it's because she stole her\n"
	.string "boyfriend from her.)\p"
	.string "{COLOR RED}(...How does that even work?)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN5Talk::
	.string "{COLOR DARK_GRAY}Chirp chirp...\p"
	.string "{COLOR RED}(It seems like Fletchling is trying to\n"
	.string "tell me something.)\p"
	.string "{COLOR RED}(She says her name is Margaret and that\n"
	.string "she hates the Cottonee over there.)\p"
	.string "{COLOR RED}(She says it's because she stole her\n"
	.string "boyfriend from her.)\p"
	.string "{COLOR RED}(...How does that even work?)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC1Talk::
	.string "{COLOR DARK_GRAY}Be kind to Pokémon, and they'll be kind\n"
	.string "to you.\p"
	.string "{COLOR DARK_GRAY}That's what my big sister told me. Now\n"
	.string "I'm friends with all the Pokémon here!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC2Talk::
	.string "{COLOR DARK_GRAY}Maplegrove has been one with nature\n"
	.string "since its construction many years ago.\p"
	.string "{COLOR DARK_GRAY}Our bond with the Pokémon here is\n"
	.string "unbreakable.$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC3Talk::
	.string "{COLOR DARK_GRAY}Hrm... Only two of you little ones here\n"
	.string "today?\p"
	.string "{COLOR DARK_GRAY}That pack of savage Mightyena must be\n"
	.string "frightening the little critters...\p"
	.string "{COLOR DARK_GRAY}I do hope something gets done about\n"
	.string "them. Those feral beasts have been\l"
	.string "terrorizing this place for long enough!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_SIGNText::
	.string "{COLOR DARK_GRAY}MAPLEGROVE\n"
	.string "{COLOR DARK_GRAY}The Sylvan Sanctuary$"
