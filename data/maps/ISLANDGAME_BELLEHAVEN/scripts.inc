ISLANDGAME_BELLEHAVEN_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_BELLEHAVEN_Interact_Sign::
# 19 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_LumineCave_Sign::
# 26 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_PokeShelterSign::
# 32 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PokeShelterSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Azurill::
# 42 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 45 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Azurill_Text_0
# 48 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Bonsly::
# 53 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Bonsly_Text_0
# 59 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_BONSLY, CRY_MODE_NORMAL
# 60 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	waitmoncry
# 61 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 62 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Herriman::
# 66 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Herriman_Text_0
# 71 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 72 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1::
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2::
# 79 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 80 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 81 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0, MSGBOX_YESNO
# 84 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2
# 90 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2
ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1:
# 96 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 97 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2:
# 85 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1
	goto ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1


ISLANDGAME_BELLEHAVEN_MapScripts_Snorunt::
# 101 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 102 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 103 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 104 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Snorunt_Text_0
# 107 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 108 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Jonas::
# 112 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 113 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 114 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	goto_if_unset FLAG_BELLEHAVEN_SPOKE_TO_JONAS, ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_2
# 128 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_2
ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_1:
# 132 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	pokemart Bellehaven_JonasMart
# 133 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_3
# 136 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 137 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_2:
# 115 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_0
# 122 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_1
# 125 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_BELLEHAVEN_SPOKE_TO_JONAS
	goto ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_1


	.align 2
# 140 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
Bellehaven_JonasMart:
# 141 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 142 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 143 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 144 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 145 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_POWER_HERB
# 146 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 147 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_HP_UP
# 148 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_PROTEIN
# 149 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_IRON
# 150 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_CALCIUM
# 151 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_ZINC
# 152 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_CARBOS
# 153 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0:
# 20 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "BELLEHAVEN\p"
	.string "{LEFT_ARROW} AETHERIA / VALLEY OF PEACE {RIGHT_ARROW}\n"
	.string "{UP_ARROW} APPLEVINE / ARBORIA {DOWN_ARROW}$"

ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0:
# 27 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "LUMINE CAVE$"

ISLANDGAME_BELLEHAVEN_PokeShelterSign_Text_0:
# 33 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Bellehaven Pokémon Foster Care\n"
	.string "Change a life today!$"

ISLANDGAME_BELLEHAVEN_MapScripts_Azurill_Text_0:
# 46 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Azu... {COLOR BLUE}(Mr. Herriman is such a killjoy. I\n"
	.string "can't have any fun around here...)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Bonsly_Text_0:
# 55 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "{COLOR RED}(It looks like a small bonsai tree.) {COLOR DARK_GRAY}...\n"
	.string "{COLOR RED}(Wait, no. That's a Pokémon.)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Herriman_Text_0:
# 68 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Good heavens, am I exhausted! I had to\n"
	.string "deal with Master Azurill's tomfoolery\l"
	.string "all day!\p"
	.string "I hope Master Mac comes back from\n"
	.string "schooling soon. I'm not sure how much of\l"
	.string "this trouble-maker I can take...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0:
# 82 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hey...{PAUSE 60} do you think ghosts are real?$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1:
# 86 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hmm...{PAUSE 30} I wonder if ghost Pokémon also\n"
	.string "count as real ghosts or not...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2:
# 91 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "You don't? I must be imagining that\n"
	.string "white hand on your shoulder then...\p"
	.string "...\p"
	.string "Ha! Made you look!$"

ISLANDGAME_BELLEHAVEN_MapScripts_Snorunt_Text_0:
# 105 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Sno!{COLOR BLUE} (You're a special trainer, just like\n"
	.string "my owner!)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_0:
# 116 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "{COLOR GREEN}Jonas:{COLOR DARK_GRAY} Ah, fancy seeing you here,\n"
	.string "{PLAYER}! How's your Pokémon journey\l"
	.string "been going along?\p"
	.string "...\p"
	.string "Oh? You're completing Marya's Gym\n"
	.string "Challenge to qualify for the Silverwing\l"
	.string "Festival Tournament?\p"
	.string "I see. I take it you've already gotten\n"
	.string "your first badge by the looks of it?\p"
	.string "Hmh. You're growing at quite the\n"
	.string "accelerated pace, {PLAYER}. I knew\l"
	.string "there was something about you that\l"
	.string "intrigued me when we first met.$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_1:
# 123 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "I'm currently just doing my rounds\n"
	.string "around Lumine, selling herbs and\l"
	.string "medicine. Perhaps you'd like to take a\l"
	.string "look at my wares?$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_2:
# 129 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Looking to purchase some herbs\n"
	.string "or medicine, {PLAYER}?$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_3:
# 134 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "May Lugia be with you, {PLAYER}.$"
