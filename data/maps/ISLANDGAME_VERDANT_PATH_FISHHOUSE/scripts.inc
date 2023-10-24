ISLANDGAME_VERDANT_PATH_FISHHOUSE_MapScripts::
	.byte 0


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Arnie::
	lock
	faceplayer
	goto_if_set FLAG_VERDANT_PATH_ROD_RECEIVED, ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived
	showmoneybox 0, 0
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline
	checkmoney 2500
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke
	removemoney 2500
	updatemoneybox
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub
	hidemoneybox
	giveitem ITEM_SUPER_ROD
	setflag FLAG_VERDANT_PATH_ROD_RECEIVED
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived::
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline::
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke::
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade::
	lock
	faceplayer
	goto_if_set FLAG_VERDANT_PATH_TRADE_DONE, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished
	setvar VAR_0x8008, INGAME_TRADE_STARYU
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0
	setflag FLAG_VERDANT_PATH_TRADE_DONE
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeFinished::
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline::
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong::
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_NPC::
	lock
	faceplayer
	msgbox ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk
	release
	return


ISLANDGAME_VERDANT_PATH_FISHHOUSE_RodReceived_Text_0:
	.string "{COLOR DARK_GRAY}Be sure to spread word about us on your\n"
	.string "journey! We could use more members!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieDecline_Text_0:
	.string "{COLOR DARK_GRAY}Well, if you ever change your mind, I'll\n"
	.string "always be here!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieBroke_Text_0:
	.string "{COLOR DARK_GRAY}Sorry, I can't sell them for any less\n"
	.string "than 2500¥.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_EventScript_Trade_Text_0:
	.string "{COLOR DARK_GRAY}Thanks for the swap, friend! Let's both\n"
	.string "take care of our Pokémon!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeDecline_Text_0:
	.string "{COLOR DARK_GRAY}Are you sure? This Staryu belonged to a\n"
	.string "very famous man. You're missing out!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeWrong_Text_0:
	.string "{COLOR DARK_GRAY}Huh? That's not a Barboach. Don't try\n"
	.string "and scam me with that!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieIntro::
	.string "{COLOR DARK_GRAY}Howdy there, trainer! I'm Arnie,\n"
	.string "renowned fishing guru and president of\l"
	.string "the Fishing Fanatics!\p"
	.string "{COLOR DARK_GRAY}Would you like to join us? It's only\n"
	.string "2500¥ for a membership!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_JoinClub::
	.string "{COLOR DARK_GRAY}Congrats! You're a Fishing Fanatic now!\n"
	.string "Here's a little welcome gift from me.$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_ArnieOutro::
	.string "{COLOR DARK_GRAY}That right there is a custom-made\n"
	.string "fishing rod built by yours truly.\p"
	.string "{COLOR DARK_GRAY}It's proof of your admission to our\n"
	.string "wonderful club!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_TradeTalk::
	.string "{COLOR DARK_GRAY}Hey there, do you happen to have a\n"
	.string "Barboach by chance?\p"
	.string "{COLOR DARK_GRAY}I've been looking everywhere for one,\n"
	.string "but I can't seem to find any.\p"
	.string "{COLOR DARK_GRAY}Will you find me one? I'll trade you this\n"
	.string "super rare Staryu for it!$"

ISLANDGAME_VERDANT_PATH_FISHHOUSE_NPCTalk::
	.string "{COLOR DARK_GRAY}Nothing beats Arnie's custom-made\n"
	.string "rods. They're positively remarkable.$"
