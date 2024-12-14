ISLANDGAME_TRAVELERS_TUNNEL_2_MapScripts::
	.byte 0


ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac::
# 4 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	goto_if_unset FLAG_TRAVELERS_TUNNEL_STEELIXITE, ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_2
# 41 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_5
ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1:
# 46 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
Maniac_End:
# 47 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	hidemoneybox
# 48 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	release
	return

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_2:
# 7 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_0
# 12 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	showmoneybox 0, 0
# 13 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_1, MSGBOX_YESNO
# 16 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_5
# 35 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_4
	goto ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_5:
# 17 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	checkmoney 10000
# 18 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_8
# 24 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	giveitem ITEM_STEELIXITE
# 25 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	setflag FLAG_TRAVELERS_TUNNEL_STEELIXITE
# 26 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	removemoney 10000
# 27 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	updatemoneybox
# 28 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_3
# 31 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	goto Maniac_End
	goto ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_8:
# 19 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_2
	goto ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1


ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer::
# 54 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	trainerbattle_single TRAINER_TRAVELERS_TUNNEL_1, ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_0, ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Loss
# 55 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_0:
# 8 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Hey there trainer. I have a SUPER\n"
	.string "special item on me. It's VERY rare.\p"
	.string "It's an Steelixite. If you have an\n"
	.string "Steelix, it'll MEGA EVOLVE it!\p"
	.string "It's all yours... if you just slide me a\n"
	.string "couple buckaroos...$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_1:
# 14 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "How does ¥10,000 sound? A pretty\n"
	.string "snazzy deal, ye?$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_2:
# 20 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Wuh? You don't have the money! Shoo!\n"
	.string "Serious buyers ONLY!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_3:
# 29 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Heh, pleasure doin' business, stranger!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_4:
# 36 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Humph. Your loss! I'll just find someone\n"
	.string "more WORTHY of it!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_5:
# 42 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Ho-ho, this money'll get me a year's\n"
	.string "subscription on Serafina's PokéFans...\p"
	.string "H-Huh? Stop snooping, you nosy\n"
	.string "teenager!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_0:
# 54 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Oof! Sorry, I didn't see you there!\p"
	.string "But now that we're this close... we may\n"
	.string "as well have a battle!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_1:
# 55 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Maybe it wasn't such a good idea to go\n"
	.string "crawling in this cave...$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Loss::
# 58 "data/maps/ISLANDGAME_TRAVELERS_TUNNEL_2/scripts.pory"
	.string "Gah, it's too hard to battle in this\nmist.$"
