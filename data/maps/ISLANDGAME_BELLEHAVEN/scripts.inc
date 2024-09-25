ISLANDGAME_BELLEHAVEN_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_Interact_Sign::
# 4 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_LumineCave_Sign::
# 11 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1::
# 19 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0
# 21 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2::
# 25 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 27 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0, MSGBOX_YESNO
# 30 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2
# 36 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2
ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1:
# 42 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 43 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2:
# 31 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1
	goto ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1


ISLANDGAME_BELLEHAVEN_MapScripts_Snorunt::
# 46 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 49 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Snorunt_Text_0
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Jonas::
# 55 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	goto_if_unset FLAG_BELLEHAVEN_SPOKE_TO_JONAS, ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_2
# 71 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_2
ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_1:
# 75 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	pokemart Bellehaven_JonasMart
# 76 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_3
	return

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_2:
# 58 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_0
# 65 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_1
# 68 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_BELLEHAVEN_SPOKE_TO_JONAS
	goto ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_1


	.align 2
# 81 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
Bellehaven_JonasMart:
# 82 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 83 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 84 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 85 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 86 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_POWER_HERB
# 87 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 88 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_HP_UP
# 89 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_PROTEIN
# 90 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_IRON
# 91 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_CALCIUM
# 92 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_ZINC
# 93 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_CARBOS
# 94 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0:
# 5 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "BELLEHAVEN\p"
	.string "{LEFT_ARROW} AETHERIA / VALLEY OF PEACE {RIGHT_ARROW}\n"
	.string "{UP_ARROW} APPLEVINE / ARBORIA {DOWN_ARROW}$"

ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0:
# 12 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "LUMINE CAVE$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0:
# 20 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "This is a quiet town. Mostly, everyone stays indoors.$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0:
# 28 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hey...{PAUSE 60} do you think ghosts are real?\p"
	.string "$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1:
# 32 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hmm...{PAUSE 30} I wonder if ghost Pokémon also\n"
	.string "count as real ghosts or not...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2:
# 37 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "You don't? I must be imagining that\n"
	.string "white hand on your shoulder then...\p"
	.string "...\p"
	.string "Ha! Made you look!$"

ISLANDGAME_BELLEHAVEN_MapScripts_Snorunt_Text_0:
# 50 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Sno!{COLOR BLUE} (You're a special trainer, just like\n"
	.string "my owner!)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_0:
# 59 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
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
# 66 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "I'm currently just doing my rounds\n"
	.string "around Lumine, selling herbs and\l"
	.string "medicine. Perhaps you'd like to take a\l"
	.string "look at my wares?$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_2:
# 72 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Looking to purchase some herbs\n"
	.string "or medicine, {PLAYER}?$"

ISLANDGAME_BELLEHAVEN_MapScripts_Jonas_Text_3:
# 77 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "May Lugia be with you, {PLAYER}.$"
