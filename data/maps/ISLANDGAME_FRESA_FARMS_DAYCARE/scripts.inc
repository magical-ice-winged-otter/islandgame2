ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts::
# 6 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	gettime
# 10 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 13 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 17 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder::
# 23 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	faceplayer
# 26 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 28 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_2
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_1:
# 33 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	returnqueststate QUEST_FRESA_FARMS_TORCHIC_EGG
# 35 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case 1, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_6
# 54 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case 2, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_7
# 110 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case 4, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_8
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4:
# 114 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_2:
# 29 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Route117_EventScript_DaycareEggWaiting
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_1

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_6:
# 37 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_0, MSGBOX_YESNO
# 46 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case TRUE, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_10
# 51 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case FALSE, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_11
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_7:
# 55 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setvar VAR_0x8000, SPECIES_TORCHIC
# 56 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	callnative CheckPartyMon
# 57 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_13
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_12:
# 68 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setvar VAR_0x8000, SPECIES_COMBUSKEN
# 69 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	callnative CheckPartyMon
# 70 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_16
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_15:
# 79 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLAZIKEN
# 80 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	callnative CheckPartyMon
# 81 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_19
# 85 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_5
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_18:
# 87 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Torchic_End
# 89 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
Torchic_Reward:
# 90 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_6
# 97 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 98 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_7
# 105 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	completequest QUEST_FRESA_FARMS_TORCHIC_EGG
# 107 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
Torchic_End:
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_8:
# 111 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_8
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_10:
# 48 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_1
# 49 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	giveegg SPECIES_TORCHIC, NUM_NATURES, 2, 18, 18, 18, 18, 18, 18
# 50 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	startquest QUEST_FRESA_FARMS_TORCHIC_EGG
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_11:
# 52 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_2
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_13:
# 58 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_3
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_12

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_16:
# 71 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_4
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_15

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_19:
# 82 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Torchic_Reward
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_18


ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_NPC::
# 119 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	lock
# 120 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	faceplayer
# 121 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_NPC_Text_0
# 124 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_0:
# 39 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Ah, young trainer! It's good to\n"
	.string "see you again!\p"
	.string "I actually have another favor I wish to\n"
	.string "ask of you. Fret not, it is a relatively\l"
	.string "simple and easy one!\p"
	.string "I have a very special egg that I'd like\n"
	.string "you to take along on your journey!\p"
	.string "All I ask is for you to help me hatch and\n"
	.string "show it to me later. Is that alright?$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_1:
# 48 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "Excellent! The Pokémon will be yours to\n"
	.string "keep, of course!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_2:
# 52 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "Ah, I understand. If you ever change\n"
	.string "your mind though, I'll always be here!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_3:
# 60 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Oh! It finally hatched? Let me\n"
	.string "take a closer look at it...\p"
	.string "Ah, so it hatched into a Torchic?\n"
	.string "Welcome to parenthood, young trainer!\p"
	.string "That Torchic you have is no ordinary\n"
	.string "one either. It has a hidden ability!\p"
	.string "Take good care of Torchic! If you come\n"
	.string "back to me when it's fully evolved, I'll\l"
	.string "give you a little something special!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_4:
# 73 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Waha, that little Torchic has\n"
	.string "grown up into a Combusken already?\p"
	.string "Childhood really just zooms right by,\n"
	.string "doesn't it? I'm looking forward to\l"
	.string "seeing it fully evolved!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_5:
# 85 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Let me know what the egg\n"
	.string "hatches into later, young trainer!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_6:
# 92 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Young trainer! It's been quite a\n"
	.string "while! Since you're here, I assume your\l"
	.string "Torchic has matured into a\l"
	.string "fully-fledged Blaziken now, hm?\p"
	.string "Wow... Magnificent. Simply magnificent.\n"
	.string "Quite the majestic Pokémon, isn't it?\p"
	.string "Well, a promise is a promise! Here is\n"
	.string "something I've been holding onto for a\l"
	.string "few years, just waiting for the right\l"
	.string "trainer to give it to, and I see no\l"
	.string "better recipient than you!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_7:
# 100 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}You certainly are something\n"
	.string "special, young trainer. It hadn't even\l"
	.string "occurred to me that I never even\l"
	.string "learned your name.\p"
	.string "Ah... {PLAYER} is it? Well, you have my\n"
	.string "sincerest of gratitudes, {PLAYER}.\p"
	.string "I wish you the best of luck on the rest\n"
	.string "of your adventure. If you ever need a\l"
	.string "place to stay, our gate is always open.$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_8:
# 111 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}I wish you the best of luck on\n"
	.string "the rest of your adventure. If you ever\l"
	.string "need a place to stay, our gate is always\l"
	.string "open.$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_NPC_Text_0:
# 122 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "The farm life is pretty alright.\p"
	.string "Might be a lotta hard work, but you\n"
	.string "don't gotta worry 'bout much.$"
