ISLANDGAME_ROSEVALE_RALTS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_2
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_9
ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1:
	release
	return

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_2:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_1
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_6
	case FRIENDSHIP_1_TO_49, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_7
	case FRIENDSHIP_50_TO_99, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_8
	case FRIENDSHIP_100_TO_149, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_9
	case FRIENDSHIP_150_TO_199, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_10
	case FRIENDSHIP_200_TO_254, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_11
	case FRIENDSHIP_MAX, ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_12
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_6:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_2
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_7:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_3
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_8:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_4
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_9:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_5
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_10:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_6
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_11:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_7
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_12:
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_8
	goto ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_1


ISLANDGAME_ROSEVALE_RALTS_HOUSE_Ralts::
	lock
	faceplayer
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_Ralts_Text_0
	release
	return


ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_Text_0
	return


ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_0:
	.string "Ohmmmm... I am the Pokemon Fortune\n"
	.string "Teller! With my mystical powers, I can\l"
	.string "tell you how strong your bond is with\l"
	.string "your Pokémon!\p"
	.string "Would you like to see how strong your\n"
	.string "friendship is?$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_1:
	.string "Ohmmm... Let's see your bond with your\n"
	.string "lead Pokémon...$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_2:
	.string "Oh dear... Your lead Pokémon absolutely\n"
	.string "despises you. That is very worrying!\p"
	.string "You must treat it with better care, or\n"
	.string "else it will be consumed with hatred...$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_3:
	.string "Oh... your lead Pokémon doesn't seem to\n"
	.string "like you at all.\p"
	.string "You really need to show it more care. It\n"
	.string "is straying towards a dark path...$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_4:
	.string "Hm... your lead Pokémon seems\n"
	.string "indifferent towards you.\p"
	.string "You should spend more time with it.$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_5:
	.string "Ah... your lead Pokémon appears to be\n"
	.string "getting used to you.\p"
	.string "You're making good progress with your\n"
	.string "friendship!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_6:
	.string "Ah... your lead Pokémon seems to like\n"
	.string "you quite a lot.\p"
	.string "Your bond is quite strong. Keep at it!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_7:
	.string "Ah... your lead Pokémon is very close\n"
	.string "with you!\p"
	.string "It seems very happy to be with you.$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_8:
	.string "Amazing... the bond between you and\n"
	.string "your lead Pokémon is unbreakable!\p"
	.string "It trusts you with all its heart. It very\n"
	.string "clearly loves being with you!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_FriendshipChecker_Text_9:
	.string "Ooooohm... Let me know if you have a\n"
	.string "change of heart!$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_Ralts_Text_0:
	.string "Garde! {COLOR BLUE}(I know your deepest, darkest\n"
	.string "secret trainer!)\p"
	.string "{COLOR DARK_GRAY}Garde... {COLOR BLUE}(It's that you can understand\n"
	.string "what Pokémon are saying, right?)\p"
	.string "{COLOR DARK_GRAY}Garde? {COLOR BLUE}(Huh? You have even darker\n"
	.string "ones? What are they? Can you tell me?)\p"
	.string "{COLOR DARK_GRAY}G-Garde!? {COLOR BLUE}(E-Eh!? Some humans think\n"
	.string "WHAT about me!? H-How frightening...)$"

ISLANDGAME_ROSEVALE_RALTS_HOUSE_MegaStoneGirl_Text_0:
	.string "I thought my Kirlia was going to evolve\n"
	.string "into a Gallade, but I didn't realize\l"
	.string "that I'd need a Dawn Stone for that to\l"
	.string "happen...\p"
	.string "Now I just have this Galladite rolling\n"
	.string "around in my drawer doing nothing...\p"
	.string "Honestly, if you have a Gallade of your\n"
	.string "own, I wouldn't mind giving it to you.$"
