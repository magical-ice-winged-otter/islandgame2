ISLANDGAME_MAPLEGROVE_MapScripts::
# 5 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_MAPLEGROVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1::
# 21 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 22 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 23 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 25 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	goto_if_unset FLAG_MAPLEGROVE_BUNEARY_GIFT, ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_2
# 41 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_1
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_1:
# 45 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
PKMN1Event_End:
# 46 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_2:
# 26 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN1Talk, MSGBOX_YESNO
# 27 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_6
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_5:
# 31 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	checkitemspace ITEM_NORMAL_GEM
# 32 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_9
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_8:
# 37 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	giveitem ITEM_NORMAL_GEM
# 38 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	setflag FLAG_MAPLEGROVE_BUNEARY_GIFT
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_1

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_6:
# 28 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	goto PKMN1Event_End
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_5

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_9:
# 33 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_0
# 34 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	goto PKMN1Event_End
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_8


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN2::
# 57 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 58 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 59 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 60 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	waitmoncry
# 61 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN3::
# 66 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 68 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_SURSKIT, CRY_MODE_NORMAL
# 69 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN3Talk
# 70 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN4::
# 80 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 81 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 82 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_COTTONEE, CRY_MODE_WEAK
# 83 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN4Talk
# 84 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN5::
# 98 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 99 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 100 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	playmoncry SPECIES_FLETCHLING, CRY_MODE_NORMAL
# 101 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN5Talk
# 102 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC1::
# 120 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 121 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 122 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC1Talk
# 123 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC2::
# 134 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 135 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 136 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC2Talk
# 137 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3::
# 148 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 149 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_2
# 153 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_Text_0
ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_1:
# 157 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_2:
# 150 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC3Talk
	goto ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_1


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_SIGN::
# 171 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	lock
# 172 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	faceplayer
# 173 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_OUTSIDE_SIGNText
# 174 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_0:
# 33 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR RED}(I don't have enough space to carry it.)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_PKMN1_Text_1:
# 41 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Konpeko Konpeko Konpeko!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_EventScript_NPC3_Text_0:
# 154 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "These two Pokémon don't get along at\n"
	.string "all. I don't know why.$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN1Talk::
# 49 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR RED}(Huh? It looks like Buneary is trying to\n"
	.string "give me something.)\p"
	.string "{COLOR RED}(Should I take it?)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN3Talk::
# 73 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}A$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN4Talk::
# 87 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Nee...\p"
	.string "{COLOR RED}(It seems like Cottonee is trying to\n"
	.string "tell me something.)\p"
	.string "{COLOR RED}(She says her name is CJ and that she\n"
	.string "hates the Fletchling over there.)\p"
	.string "{COLOR RED}(She says it's because she stole her\n"
	.string "boyfriend from her.)\p"
	.string "{COLOR RED}(...How does that even work?)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_PKMN5Talk::
# 105 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Chirp chirp...\p"
	.string "{COLOR RED}(It seems like Fletchling is trying to\n"
	.string "tell me something.)\p"
	.string "{COLOR RED}(She says her name is Margaret and that\n"
	.string "she hates the Cottonee over there.)\p"
	.string "{COLOR RED}(She says it's because she stole her\n"
	.string "boyfriend from her.)\p"
	.string "{COLOR RED}(...How does that even work?)$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC1Talk::
# 126 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Be kind to Pokémon, and they'll be kind\n"
	.string "to you.\p"
	.string "{COLOR DARK_GRAY}That's what my big sister told me. Now\n"
	.string "I'm friends with all the Pokémon here!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC2Talk::
# 140 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Maplegrove has been one with nature\n"
	.string "since its construction many years ago.\p"
	.string "{COLOR DARK_GRAY}Our bond with the Pokémon here is\n"
	.string "unbreakable.$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_NPC3Talk::
# 160 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Hrm... Only two of you little ones here\n"
	.string "today?\p"
	.string "{COLOR DARK_GRAY}That pack of savage Mightyena must be\n"
	.string "frightening the little critters...\p"
	.string "{COLOR DARK_GRAY}I do hope something gets done about\n"
	.string "them. Those feral beasts have been\l"
	.string "terrorizing this place for long enough!$"

ISLANDGAME_MAPLEGROVE_OUTSIDE_SIGNText::
# 177 "data/maps/ISLANDGAME_MAPLEGROVE/scripts.pory"
	.string "{COLOR DARK_GRAY}MAPLEGROVE\n"
	.string "{COLOR DARK_GRAY}The Sylvan Sanctuary$"
