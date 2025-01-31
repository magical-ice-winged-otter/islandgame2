ISLANDGAME_BELLEHAVEN_HOUSE_1_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_HOUSE_1_Snorunt::
# 4 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 7 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_Snorunt_Text_0
# 10 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	closemessage
# 11 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas::
# 16 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	lock
# 17 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	faceplayer
# 18 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	goto_if_unset FLAG_BELLEHAVEN_SPOKE_TO_JONAS, ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_2
# 32 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_2
ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_1:
# 36 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	pokemart Bellehaven_JonasMart
# 37 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_3
# 40 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	closemessage
# 41 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_2:
# 19 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_0
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_1
# 29 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	setflag FLAG_BELLEHAVEN_SPOKE_TO_JONAS
	goto ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_1


	.align 2
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
Bellehaven_JonasMart:
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 46 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 47 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_POWER_HERB
# 50 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 51 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_HP_UP
# 52 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_PROTEIN
# 53 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_IRON
# 54 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_CALCIUM
# 55 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_ZINC
# 56 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_CARBOS
# 57 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

ISLANDGAME_BELLEHAVEN_HOUSE_1_IncenseNPC::
# 61 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	lock
# 62 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	faceplayer
# 63 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_IncenseNPC_Text_0
# 66 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	pokemart Bellehaven_IncenseMart
# 67 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_IncenseNPC_Text_1
# 70 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	closemessage
# 71 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	release
	return


	.align 2
# 74 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
Bellehaven_IncenseMart:
# 75 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 76 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 77 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 78 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 79 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 80 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 81 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 82 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 83 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_NONE

ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC::
# 87 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	lock
# 88 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	faceplayer
# 89 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	goto_if_set FLAG_BELLEHAVEN_CHARCOAL, ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_2
# 95 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_Text_1
# 99 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	giveitem ITEM_CHARCOAL
# 100 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	setflag FLAG_BELLEHAVEN_CHARCOAL
ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_1:
# 102 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	closemessage
# 103 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_2:
# 90 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_Text_0
	goto ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_1


ISLANDGAME_BELLEHAVEN_HOUSE_1_Snorunt_Text_0:
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "Sno!{COLOR BLUE} (You're a special trainer, just like\n"
	.string "my owner!)$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_0:
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "{COLOR GREEN}Jonas:{COLOR DARK_GRAY} Ah, fancy seeing you here,\n"
	.string "{PLAYER}! How's your Pokémon journey\l"
	.string "been going along?\p"
	.string "...\p"
	.string "Oh? You're completing Marya's Gym\n"
	.string "Challenge to qualify for the Silverwing\l"
	.string "Festival Tournament?\p"
	.string "I see. I take it you've already gotten\n"
	.string "your first badge by the looks of it?\p"
	.string "Hah. You're growing at quite the\n"
	.string "accelerated pace, {PLAYER}. I knew\l"
	.string "there was something about you that\l"
	.string "intrigued me when we first met.$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_1:
# 27 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "I'm currently just doing my rounds\n"
	.string "around Lumine, selling herbs and\l"
	.string "medicine. Perhaps you'd like to take a\l"
	.string "look at my wares?$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_2:
# 33 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Looking to purchase some herbs\n"
	.string "or medicine, {PLAYER}?$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_Jonas_Text_3:
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "May Lugia be with you, {PLAYER}.$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_IncenseNPC_Text_0:
# 64 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "Welcome, trainer. Would you like to\n"
	.string "purchase some incense?$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_IncenseNPC_Text_1:
# 68 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "May Lugia be with you.$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_Text_0:
# 91 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "Charcoal is also helpful in creating\n"
	.string "herbal medicine, and even in combat\l"
	.string "when held by your fire Pokémon.$"

ISLANDGAME_BELLEHAVEN_HOUSE_1_NPC_Text_1:
# 96 "data/maps/ISLANDGAME_BELLEHAVEN_HOUSE_1/scripts.pory"
	.string "If you visit the Valley of Peace, it is\n"
	.string "customary to burn some incense at the\l"
	.string "shrine in honor of the fallen.\p"
	.string "Here, take this. It will help you with\n"
	.string "burning incense.$"
