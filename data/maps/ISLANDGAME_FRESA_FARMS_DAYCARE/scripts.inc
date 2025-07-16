ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts::
# 8 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	quest_emote_on_warp 2, QUEST_FRESA_FARMS_TORCHIC_EGG
# 10 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	gettime
# 12 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 15 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 19 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder::
# 25 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	faceplayer
# 28 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 30 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_2
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_1:
# 35 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	returnqueststate QUEST_FRESA_FARMS_TORCHIC_EGG
# 37 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case 1, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_6
# 56 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case 2, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_7
# 112 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case 4, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_8
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4:
# 116 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_2:
# 31 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Route117_EventScript_DaycareEggWaiting
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_1

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_6:
# 39 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_0, MSGBOX_YESNO
# 48 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case TRUE, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_10
# 53 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case FALSE, ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_11
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_7:
# 57 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setvar VAR_0x8000, SPECIES_TORCHIC
# 58 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	callnative CheckPartyMon
# 59 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_13
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_12:
# 70 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setvar VAR_0x8000, SPECIES_COMBUSKEN
# 71 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	callnative CheckPartyMon
# 72 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_16
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_15:
# 81 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLAZIKEN
# 82 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	callnative CheckPartyMon
# 83 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_19
# 87 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_5
ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_18:
# 89 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Torchic_End
# 91 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
Torchic_Reward:
# 92 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_6
# 99 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 100 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_7
# 107 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	completequest QUEST_FRESA_FARMS_TORCHIC_EGG
# 109 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
Torchic_End:
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_8:
# 113 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_8
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_10:
# 50 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_1
# 51 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	giveegg SPECIES_TORCHIC, NUM_NATURES, 2, 18, 18, 18, 18, 18, 18
# 52 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	startquest QUEST_FRESA_FARMS_TORCHIC_EGG
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_11:
# 54 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_2
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_13:
# 60 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_3
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_12

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_16:
# 73 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_4
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_15

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_19:
# 84 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Torchic_Reward
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_18


ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_NPC::
# 121 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	lock
# 122 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	faceplayer
# 123 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_NPC_Text_0
# 126 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_0:
# 41 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
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
# 50 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "Excellent! The Pokémon will be yours to\n"
	.string "keep, of course!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_2:
# 54 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "Ah, I understand. If you ever change\n"
	.string "your mind though, I'll always be here!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_3:
# 62 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
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
# 75 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Waha, that little Torchic has\n"
	.string "grown up into a Combusken already?\p"
	.string "Childhood really just zooms right by,\n"
	.string "doesn't it? I'm looking forward to\l"
	.string "seeing it fully evolved!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_5:
# 87 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Let me know what the egg\n"
	.string "hatches into later, young trainer!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_TorchicBreeder_Text_6:
# 94 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
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
# 102 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
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
# 113 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}I wish you the best of luck on\n"
	.string "the rest of your adventure. If you ever\l"
	.string "need a place to stay, our gate is always\l"
	.string "open.$"

ISLANDGAME_FRESA_FARMS_DAYCARE_EventScripts_NPC_Text_0:
# 124 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "The farm life is pretty alright.\p"
	.string "Might be a lotta hard work, but you\n"
	.string "don't gotta worry 'bout much.$"
