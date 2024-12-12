ISLADNGAME_PROMENADE_PATH_MapScripts::
	.byte 0


ISLANDGAME_PROMENADE_PATH_TrainerBattle1::
# 5 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	trainerbattle_single TRAINER_PROMENADE_1, ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_1
# 9 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle2::
# 13 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	trainerbattle_single TRAINER_PROMENADE_2, ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_1
# 17 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle3::
# 21 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	trainerbattle_single TRAINER_PROMENADE_3, ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_1
# 25 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle4::
# 29 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	trainerbattle_single TRAINER_PROMENADE_4, ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_1
# 33 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_OldLady::
# 38 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	lock
# 39 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	faceplayer
# 40 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	msgbox ISLANDGAME_PROMENADE_PATH_OldLady_Text_0, MSGBOX_NPC
# 43 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 44 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	waitmovement 0
# 45 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	release
	return


ISLANDGAME_PROMENADE_PATH_Abra::
# 49 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	lock
# 50 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	faceplayer
# 51 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
# 52 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	msgbox ISLANDGAME_PROMENADE_PATH_Abra_Text_0, MSGBOX_NPC
# 55 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 56 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	waitmovement 0
# 57 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	release
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_0:
# 6 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "GOING FAST, MAKES ME FEEL ALIVE!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_1:
# 7 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "MY HEART BEATS, IN HYPER DRIVE!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_2:
# 9 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "I'm cosplaying as my favorite Pokémon\n"
	.string "trainer! Can you guess who he is?$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_0:
# 14 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "My boyfriend dragged me along him on\n"
	.string "the bike path so he can reenact a scene\l"
	.string "from his favorite anime...\p"
	.string "Can we battle, please? I'm so bored out\n"
	.string "of my mind.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_1:
# 15 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "Thank you, that was rather refreshing.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_2:
# 17 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "When my boyfriend asked me if I wanted\n"
	.string "to roleplay with him, this wasn't really\l"
	.string "what I was expecting...\p"
	.string "But I envy his child-like innocence.\n"
	.string "It's kind of why I fell in love with him.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_0:
# 22 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "GOTTA GO FAST!\p"
	.string "GOTTA GO FAST!\p"
	.string "GOTTA GO FASTER FASTER\n"
	.string "FA-FA-FA-FASTER!!!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_1:
# 23 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "Darn, guess I was too slow.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_2:
# 25 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "I'm gonna have to step up my game if I\n"
	.string "want to have a shot at winning the\l"
	.string "festival triathlon.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_0:
# 30 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "Yeah that's right. I'm on the bike path\n"
	.string "without a bike! I'm different, man!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_1:
# 31 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "B-B-But I'm so quirky...$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_2:
# 33 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "Okay, I admit it. I'm not riding a bike\n"
	.string "because I never learned how to.\p"
	.string "I only pretended to be riding on one to\n"
	.string "get past the guard.$"

ISLANDGAME_PROMENADE_PATH_OldLady_Text_0:
# 41 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "My legs are no good, so I had my trusty\n"
	.string "Abra teleport me onto the path.$"

ISLANDGAME_PROMENADE_PATH_Abra_Text_0:
# 53 "data/maps/ISLADNGAME_PROMENADE_PATH/scripts.pory"
	.string "Abra... {COLOR BLUE}(I wish I knew other moves, but\n"
	.string "this old hag doesn't teach me any.)$"
