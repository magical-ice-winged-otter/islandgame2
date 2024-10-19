ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts::
	.byte 0


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie::
# 5 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_ROD_RECEIVED, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
# 8 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	showmoneybox 0, 0
# 9 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro, MSGBOX_YESNO
# 10 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline
# 11 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	checkmoney 2500
# 12 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke
# 13 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	removemoney 2500
# 14 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	updatemoneybox
# 15 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub
# 16 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 17 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 18 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_ROD_RECEIVED
# 19 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro
# 20 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie_Text_0
# 21 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived::
# 25 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie_Text_0
# 26 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline::
# 37 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0
# 38 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 39 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke::
# 43 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0
# 44 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	hidemoneybox
# 45 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade::
# 63 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 65 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_set FLAG_VERDANT_PATH_TRADE_DONE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished
# 66 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_STARYU
# 67 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 68 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 69 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 70 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk, MSGBOX_YESNO
# 71 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
# 72 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special ChoosePartyMon
# 73 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 74 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 75 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
# 76 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 77 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 78 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 79 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
# 80 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 81 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 82 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special CreateInGameTradePokemon
# 83 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	special DoInGameTradeScene
# 84 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	waitstate
# 85 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 86 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0
# 87 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	setflag FLAG_VERDANT_PATH_TRADE_DONE
# 88 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished::
# 100 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0
# 101 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline::
# 105 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0
# 106 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong::
# 110 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0
# 111 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_NPC::
# 115 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	lock
# 116 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	faceplayer
# 117 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk
# 118 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie_Text_0:
# 20 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}If you're confused about how to use my\n"
	.string "super special rod, I'll teach you!\p"
	.string "The second you get a bite, you gotta\n"
	.string "reel it in only once so you don't break\l"
	.string "your line.\p"
	.string "Then keep at it every time 'till a\n"
	.string "Pokémon's on the line!\p"
	.string "It takes a lot of practice and a little\n"
	.string "bit of luck, but with enough time, you'll\l"
	.string "become a true Fishing Fanatic!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0:
# 37 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Well, if you ever change your mind, I'll\n"
	.string "always be here!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0:
# 43 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Sorry, I can't sell them for any less\n"
	.string "than 2500¥.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0:
# 86 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Thanks for the swap, friend! Let's both\n"
	.string "take care of our Pokémon!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0:
# 105 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Are you sure? This Staryu belonged to a\n"
	.string "very famous man. You're missing out!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0:
# 110 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? That's not a Horsea. Don't try and\n"
	.string "scam me with that!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro::
# 29 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Howdy there, trainer! I'm Arnie,\n"
	.string "renowned fishing guru and president of\l"
	.string "the Fishing Fanatics!\p"
	.string "{COLOR DARK_GRAY}Would you like to join us? It's only\n"
	.string "2500¥ for a membership!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub::
# 49 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Congrats! You're a Fishing Fanatic now!\n"
	.string "Here's a little welcome gift from me.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro::
# 55 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}That right there is a custom-made\n"
	.string "fishing rod built by yours truly.\p"
	.string "{COLOR DARK_GRAY}It's proof of your admission to our\n"
	.string "wonderful club!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk::
# 91 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey there, do you happen to have a\n"
	.string "Horsea by chance?\p"
	.string "{COLOR DARK_GRAY}I've been looking everywhere for one,\n"
	.string "but I can't seem to find any.\p"
	.string "{COLOR DARK_GRAY}Will you find me one? I'll trade you this\n"
	.string "super rare Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk::
# 121 "data/maps/ISLANDGAME_VERDANT_PATH_FISHHOUSE/scripts.pory"
	.string "{COLOR DARK_GRAY}Nothing beats Arnie's custom-made\n"
	.string "rods. They're positively remarkable.$"
