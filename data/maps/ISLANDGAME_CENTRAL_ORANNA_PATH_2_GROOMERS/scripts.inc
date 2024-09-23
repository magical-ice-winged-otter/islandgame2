ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_MapScripts::
	.byte 0


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer::
	lock
	faceplayer
	goto_if_unset FLAG_DAILY_COR_GROOMERS, ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_2
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_7
ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1:
Groomer_End:
	hidemoneybox
	closemessage
	release
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_2:
	showmoneybox 0, 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_5
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_3
	goto Groomer_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_5:
	checkmoney 1500
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_8
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_2
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_12
ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_11:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_15
ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_14:
	showmoneybox 0, 0
	removemoney 1500
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_5
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special SalonMassageServices
	fadescreen FADE_FROM_BLACK
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_6
	setflag FLAG_DAILY_COR_GROOMERS
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_8:
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_1
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_12:
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_3
	goto Groomer_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_11

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_15:
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_4
	goto Groomer_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_14


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Growlithe::
	lock
	faceplayer
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Growlithe_Text_0
	closemessage
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Purrloin::
	lock
	faceplayer
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Purrloin_Text_0
	closemessage
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_0:
	.string "Hiyoooo! Welcome to my salooooon! I'm\n"
	.string "Krissiiiiiiiie!\p"
	.string "For ¥1,500, I'll give your Pokémon a\n"
	.string "relaaaaaxing massaaaaage!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_1:
	.string "Noooooo, you don't have enough\n"
	.string "moneyyyyy!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_2:
	.string "Okiiiiiie! Who's gonna be the lucky\n"
	.string "Ducklett?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_3:
	.string "Eeeeeeeeeh? You should pamper your\n"
	.string "Pokémon once in a whileeeee!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_4:
	.string "You silly Bidoooooof. I can't massage\n"
	.string "that!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_5:
	.string "Righty-hooooooo! It's grooooooming\n"
	.string "tiiiiiime!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_6:
	.string "Alllllll dooone! Your Pokémon looks a\n"
	.string "LOT happier noooooow!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_7:
	.string "I'm too tireeeeeeed. Come back tomorrow\n"
	.string "pleaaaaaaase.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Growlithe_Text_0:
	.string "YUBI YUBI$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Purrloin_Text_0:
	.string "Mogu mogu...$"
