ISLANDGAME_TRAVELERS_TUNNEL_2_MapScripts::
	.byte 0


ISLANDGAME_TRAVELERS_TUNNEL_2_Maniac::
	lock
	faceplayer
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_ManiacTalk
	release
	return


ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer::
	trainerbattle_single TRAINER_TRAVELERS_TUNNEL_1, ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_0, ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Loss
	msgbox ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_0:
	.string "Boo!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Text_1:
	.string "Did I startle you?$"

ISLANDGAME_TRAVELERS_TUNNEL_2_ManiacTalk::
	.string "Hey there trainer. I have a SUPER\n"
	.string "special item on me. It's VERY rare.\p"
	.string "It's an Aggronite. If you have an\n"
	.string "Aggron, it'll MEGA EVOLVE it!\p"
	.string "It's all yours... if you just slide me a\n"
	.string "couple buckaroos...\p"
	.string "How does ¥50,000 sound?\p"
	.string "Huh? You don't have the money? Go away\n"
	.string "then! Shoo! Serious buyers ONLY!$"

ISLANDGAME_TRAVELERS_TUNNEL_2_Trainer_Loss::
	.string "Booooo.$"
