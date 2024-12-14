ISLANDGAME_ROSEVALE_RALTS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker::
# 4 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_0, MSGBOX_YESNO
# 10 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_2
# 26 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_9
ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1:
# 28 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_2:
# 11 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_1
# 14 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 15 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_NONE, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_6
# 17 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_1_TO_49, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_7
# 18 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_50_TO_99, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_8
# 19 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_100_TO_149, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_9
# 20 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_150_TO_199, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_10
# 21 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_200_TO_254, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_11
# 22 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	case FRIENDSHIP_MAX, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_12
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_6:
# 16 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_2
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_7:
# 17 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_3
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_8:
# 18 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_4
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_9:
# 19 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_5
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_10:
# 20 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_6
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_11:
# 21 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_7
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_12:
# 22 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_8
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1


ISLANDGAME_ROSEVALE_RALTS_HOUSE_Ralts::
# 32 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 35 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_Ralts_Text_0
# 36 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl::
# 40 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	lock
# 41 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	faceplayer
# 42 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	goto_if_unset FLAG_ROSEVALE_GALLADITE, ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_2
ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_1:
# 53 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_Text_1
# 58 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_2:
# 43 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_Text_0
# 50 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	giveitem ITEM_GALLADITE
# 51 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	setflag FLAG_ROSEVALE_GALLADITE
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_1


ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_0:
# 7 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Ohmmmm... I am the Pokemon Fortune\n"
	.string "Teller! With my mystical powers, I can\l"
	.string "tell you how strong your bond is with\l"
	.string "your Pokémon!\p"
	.string "Would you like to see how strong your\n"
	.string "friendship is?$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_1:
# 12 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Ohmmm... Let's see your bond with your\n"
	.string "lead Pokémon...$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_2:
# 16 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Oh dear... Your lead Pokémon absolutely\n"
	.string "despises you. That is very worrying!\p"
	.string "You must treat it with better care, or\n"
	.string "else it will be consumed with hatred...$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_3:
# 17 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Oh... your lead Pokémon doesn't seem to\n"
	.string "like you at all.\p"
	.string "You really need to show it more care. It\n"
	.string "is straying towards a dark path...$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_4:
# 18 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Hm... your lead Pokémon seems\n"
	.string "indifferent towards you.\p"
	.string "You should spend more time with it.$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_5:
# 19 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Ah... your lead Pokémon appears to be\n"
	.string "getting used to you.\p"
	.string "You're making good progress with your\n"
	.string "friendship!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_6:
# 20 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Ah... your lead Pokémon seems to like\n"
	.string "you quite a lot.\p"
	.string "Your bond is quite strong. Keep at it!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_7:
# 21 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Ah... your lead Pokémon is very close\n"
	.string "with you!\p"
	.string "It seems very happy to be with you.$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_8:
# 22 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Amazing... the bond between you and\n"
	.string "your lead Pokémon is unbreakable!\p"
	.string "It trusts you with all its heart. It very\n"
	.string "clearly loves being with you!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_9:
# 26 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Ooooohm... Let me know if you have a\n"
	.string "change of heart!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_Ralts_Text_0:
# 35 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "Garde! {COLOR BLUE}(I know your deepest, darkest\n"
	.string "secret trainer!)\p"
	.string "{COLOR DARK_GRAY}Garde... {COLOR BLUE}(It's that you can understand\n"
	.string "what Pokémon are saying, right?)\p"
	.string "{COLOR DARK_GRAY}Garde? {COLOR BLUE}(Huh? You have even darker\n"
	.string "ones? What are they? Can you tell me?)\p"
	.string "{COLOR DARK_GRAY}G-Garde!? {COLOR BLUE}(E-Eh!? Some humans think\n"
	.string "WHAT about me!? H-How frightening...)$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_Text_0:
# 45 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "I thought my Kirlia was going to evolve\n"
	.string "into a Gallade, but I didn't realize that\l"
	.string "I'd need a Dawn Stone for that to\l"
	.string "happen...\p"
	.string "Now I just have this Galladite rolling\n"
	.string "around in my drawer doing nothing...\p"
	.string "Oh, you're a trainer? Perhaps you can\n"
	.string "make use of it.$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_Text_1:
# 54 "data/maps/ISLANDGAME_ROSEVALE_RALTS_HOUSE/scripts.pory"
	.string "You'll need a Mega Ring in order to use\n"
	.string "that Galladite.\p"
	.string "Oh, and I should inform you that only a\n"
	.string "male Kirlia can evolve into a Gallade.\p"
	.string "Don't forget to use a Dawn Stone like I\n"
	.string "did!$"
