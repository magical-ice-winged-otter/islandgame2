ISLANDGAME_TRAVELERS_TUNNEL_2_MapScripts::
	.byte 0


ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac::
	lock
	faceplayer
	goto_if_unset FLAG_TRAVELERS_TUNNEL_AGGRONITE, ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_2
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_5
ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1:
Maniac_End:
	hidemoneybox
	closemessage
	release
	return

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_2:
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_0
	showmoneybox 0, 0
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_5
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_4
	goto ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_5:
	checkmoney 10000
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_8
	giveitem ITEM_AGGRONITE
	setflag FLAG_TRAVELERS_TUNNEL_AGGRONITE
	removemoney 10000
	updatemoneybox
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_3
	goto Maniac_End
	goto ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_8:
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_2
	goto ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_1


ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer::
	trainerbattle_single TRAINER_TRAVELERS_TUNNEL_1, ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_0, ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Loss
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_0:
	.string "Hey there trainer. I have a SUPER\n"
	.string "special item on me. It's VERY rare.\p"
	.string "It's an Aggronite. If you have an\n"
	.string "Aggron, it'll MEGA EVOLVE it!\p"
	.string "It's all yours... if you just slide me a\n"
	.string "couple buckaroos...$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_1:
	.string "How does ¥10,000 sound? A pretty\n"
	.string "snazzy deal, ye?$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_2:
	.string "Wuh? You don't have the money! Shoo!\n"
	.string "Serious buyers ONLY!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_3:
	.string "Heh, pleasure doin' business, stranger!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_4:
	.string "Humph. Your loss! I'll just find someone\n"
	.string "more WORTHY of it!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac_Text_5:
	.string "Ho-ho, this money'll get me a year's\n"
	.string "subscription on Serafina's PokéFans...\p"
	.string "H-Huh? Stop snooping, you nosy\n"
	.string "teenager!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_0:
	.string "Oof! Sorry, I didn't see you there!\p"
	.string "But now that we're this close... we may\n"
	.string "as well have a battle!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_1:
	.string "Maybe it wasn't such a good idea to go\n"
	.string "crawling in this cave...$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Loss::
	.string "Gah, it's too hard to battle in this\nmist.$"
