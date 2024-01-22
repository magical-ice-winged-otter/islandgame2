ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts::
	.byte 0


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign::
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast::
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest::
	lock
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_2
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_2, MSGBOX_NPC
ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_1:
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_2:
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_1, MSGBOX_NPC
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_1


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1::
	trainerbattle_single TRAINER_NORANNA_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2::
	trainerbattle_double TRAINER_NORANNA_2, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3::
	trainerbattle_single TRAINER_NORANNA_3, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4::
	trainerbattle_single TRAINER_NORANNA_4, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5::
	trainerbattle_single TRAINER_NORANNA_5, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6::
	trainerbattle_single TRAINER_NORANNA_6, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7::
	trainerbattle_single TRAINER_NORANNA_7, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest::
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0:
	.string "NORTHERN ORANNA PATH\n"
	.string "TIDALCOVE{RIGHT_ARROW}$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0:
	.string "My buddy across the lake thinks he can\n"
	.string "catch more than me!\p"
	.string "Heh... I've been fishing in this lake my\n"
	.string "entire life. He's going down!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0:
	.string "I challenged my mate to a fishing\n"
	.string "contest today. Can I tell you a secret?$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_1:
	.string "Well... I just got my custom-built\n"
	.string "fishing rod from Arnie's today...\p"
	.string "My mate over there still uses his crusty\n"
	.string "Old Rod. He's done for!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_2:
	.string "Appreciate the honesty.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0:
	.string "My girlfriend just broke up with me, so\n"
	.string "I'm sulking in here.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1:
	.string "Today's just not my day...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2:
	.string "Whelp... Time to head back home. Some\n"
	.string "PokéLive videos oughta cheer me up.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0:
	.string "May: Ruka is mid at best. I don't see the\n"
	.string "appeal about her.\p"
	.string "Rue: I know right? She's so overrated.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1:
	.string "May: Ugh, I can't even with this right\nnow.\pRue: For real, battling is such an\neffort.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2:
	.string "May: We aren't fighting you unless you\n"
	.string "got two Pokémon, dork.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3:
	.string "May: Leave us alone.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0:
	.string "The same species of Pokémon can have\n"
	.string "different forms in different regions.\p"
	.string "I can show you some of them right now!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1:
	.string "Did you enjoy seeing them?$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2:
	.string "Historians believe that the Maryan\n"
	.string "Isles were once a part of the Alola.\p"
	.string "That's supposedly why our island has so\n"
	.string "many of their regional variants.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0:
	.string "Hiiiiya! You won't stand a chance\n"
	.string "against me and my Pokémon!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1:
	.string "Noooo! Lucario!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2:
	.string "Looks like we still have a lot to learn.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0:
	.string "I feel it... I'm about to hit my runner's\n"
	.string "high! I won't let you stop me!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1:
	.string "But I was so close...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2:
	.string "Now I'm going to have to start all over.\n"
	.string "Thanks a lot.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0:
	.string "The only path to success is through\n"
	.string "practice! No shortcuts!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1:
	.string "I can tell you put in the work!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2:
	.string "There's a dude called the “Fitness\n"
	.string "Freak” over there in that house.\p"
	.string "He thinks he can get stronger by taking\n"
	.string "vitamins...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0:
	.string "My victory is near... I am manifesting it!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1:
	.string "The power of the cosmos have failed me\nonce more...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2:
	.string "I will need to purchase some more\n"
	.string "psychic stones.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0:
	.string "STAY AWAY FROM MY PUDDLE!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1:
	.string "NOOOOO MY PUDDLE$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2:
	.string "...I'm still not gonna share it with you.$"
