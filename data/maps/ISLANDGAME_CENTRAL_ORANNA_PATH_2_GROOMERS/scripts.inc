ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_MapScripts::
	.byte 0


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer::
# 5 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	goto_if_unset FLAG_DAILY_COR_GROOMERS, ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_2
# 69 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_7
ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1:
# 74 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
Groomer_End:
# 75 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	hidemoneybox
# 76 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	closemessage
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	release
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_2:
# 8 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	showmoneybox 0, 0
# 9 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_0, MSGBOX_YESNO
# 13 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_5
# 61 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_3
# 64 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	goto Groomer_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_5:
# 14 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	checkmoney 1500
# 15 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_8
# 21 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_2
# 24 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	special ChoosePartyMon
# 25 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	waitstate
# 26 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_12
ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_11:
# 32 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 33 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_15
ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_14:
# 39 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	showmoneybox 0, 0
# 40 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	removemoney 1500
# 41 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	updatemoneybox
# 42 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	playse SE_SHOP
# 43 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	waitse
# 44 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_5
# 47 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	closemessage
# 48 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	playfanfare MUS_HEAL
# 50 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	waitfanfare
# 51 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	special SalonMassageServices
# 52 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_6
# 56 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	setflag FLAG_DAILY_COR_GROOMERS
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_8:
# 16 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_1
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_1

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_12:
# 27 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_3
# 30 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	goto Groomer_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_11

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_15:
# 34 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_4
# 37 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	goto Groomer_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_14


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Growlithe::
# 84 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	lock
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	faceplayer
# 86 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 87 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Growlithe_Text_0
# 90 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	closemessage
# 91 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Purrloin::
# 95 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	lock
# 96 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	faceplayer
# 97 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
# 98 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Purrloin_Text_0
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	closemessage
# 102 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_0:
# 10 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Hiyoooo! Welcome to my salooooon! I'm\n"
	.string "Krissiiiiiiiie!\p"
	.string "For ¥1,500, I'll give your Pokémon a\n"
	.string "relaaaaaxing massaaaaage!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_1:
# 17 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Noooooo, you don't have enough\n"
	.string "moneyyyyy!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_2:
# 22 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Okiiiiiie! Who's gonna be the lucky\n"
	.string "Ducklett?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_3:
# 28 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Eeeeeeeeeh? You should pamper your\n"
	.string "Pokémon once in a whileeeee!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_4:
# 35 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "You silly Bidoooooof. I can't massage\n"
	.string "that!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_5:
# 45 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Righty-hooooooo! It's grooooooming\n"
	.string "tiiiiiime!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_6:
# 54 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Alllllll dooone! Your Pokémon looks a\n"
	.string "LOT happier noooooow!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Groomer_Text_7:
# 70 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "I'm too tireeeeeeed. Come back tomorrow\n"
	.string "pleaaaaaaase.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Growlithe_Text_0:
# 88 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "YUBI YUBI$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS_Purrloin_Text_0:
# 99 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_2_GROOMERS/scripts.pory"
	.string "Mogu mogu...$"
