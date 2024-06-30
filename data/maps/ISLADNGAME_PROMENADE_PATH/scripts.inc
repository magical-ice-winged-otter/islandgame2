ISLADNGAME_PROMENADE_PATH_MapScripts::
	.byte 0


ISLANDGAME_PROMENADE_PATH_TrainerBattle1::
	trainerbattle_single TRAINER_PROMENADE_1, ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_1
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle2::
	trainerbattle_single TRAINER_PROMENADE_2, ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_1
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle3::
	trainerbattle_single TRAINER_PROMENADE_3, ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_1
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle4::
	trainerbattle_single TRAINER_PROMENADE_4, ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_0, ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_1
	msgbox ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_PROMENADE_PATH_OldLady::
	lock
	faceplayer
	msgbox ISLANDGAME_PROMENADE_PATH_OldLady_Text_0, MSGBOX_NPC
	applymovement 11, Common_Movement_FaceRight
	waitmovement 0
	release
	return


ISLANDGAME_PROMENADE_PATH_Abra::
	lock
	faceplayer
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	msgbox ISLANDGAME_PROMENADE_PATH_Abra_Text_0, MSGBOX_NPC
	applymovement 12, Common_Movement_FaceRight
	waitmovement 0
	release
	return


ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_0:
	.string "GOING FAST, MAKES ME FEEL ALIVE!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_1:
	.string "MY HEART BEATS, IN HYPER DRIVE!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle1_Text_2:
	.string "I'm cosplaying as my favorite Pokémon\n"
	.string "trainer! Can you guess who he is?$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_0:
	.string "My boyfriend dragged me along him on\n"
	.string "the bike path so he can reenact a\l"
	.string "scene from his favorite anime...\p"
	.string "Can we battle, please? I'm so bored out\n"
	.string "of my mind.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_1:
	.string "Thank you, that was rather refreshing.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle2_Text_2:
	.string "When my boyfriend asked me if I wanted\n"
	.string "to roleplay with him, this wasn't really\l"
	.string "what I was expecting...\p"
	.string "But I envy his child-like innocence.\n"
	.string "It's kind of why I fell in love with him.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_0:
	.string "GOTTA GO FAST!\p"
	.string "GOTTA GO FAST!\p"
	.string "GOTTA GO FASTER FASTER\n"
	.string "FA-FA-FA-FASTER!!!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_1:
	.string "Darn, guess I was too slow.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle3_Text_2:
	.string "I'm gonna have to step up my game if I\n"
	.string "want to have a shot at winning the\l"
	.string "festival triathlon.$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_0:
	.string "Yeah that's right. I'm on the bike path\n"
	.string "without a bike! I'm different, man!$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_1:
	.string "B-B-But I'm so quirky...$"

ISLANDGAME_PROMENADE_PATH_TrainerBattle4_Text_2:
	.string "Okay, I admit it. I'm not riding a bike\n"
	.string "because I never learned how to.\p"
	.string "I only pretended to be riding on one to\n"
	.string "get past the guard.$"

ISLANDGAME_PROMENADE_PATH_OldLady_Text_0:
	.string "My legs are no good, so I had my trusty\n"
	.string "Abra teleport me onto the path.$"

ISLANDGAME_PROMENADE_PATH_Abra_Text_0:
	.string "Abra... {COLOR BLUE}(I wish I knew other moves, but\n"
	.string "this old hag doesn't teach me any.)$"
