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


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_ItemBallTop::
	finditem ITEM_DAMP_ROCK
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_ItemBallBottom::
	finditem ITEM_HYPER_POTION
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC::
	trainerbattle_single TRAINER_NORANNA_ENTRANCE_NPC, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs::
	trainerbattle_double TRAINER_NORANNA_FENCE_PARTNER_NPCS, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_2
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_3, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast::
	trainerbattle_single TRAINER_NORANNA_UPPER_NPC_EAST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle::
	trainerbattle_single TRAINER_NORANNA_UPPER_NPC_MIDDLE, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest::
	trainerbattle_single TRAINER_NORANNA_UPPER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast::
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_EAST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle::
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_MIDDLE, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest::
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0:
	.string "NORTHERN ORANNA PATH$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0:
	.string "My buddy is across the lake - he thinks\n"
	.string "he can catch more than me!\p"
	.string "I've been fishing this lake my whole\n"
	.string "life. He's definitely going to lose.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0:
	.string "I challenged my friend to a fishing\n"
	.string "contest today.\p"
	.string "Can you keep a secret?$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_1:
	.string "My custom-order fishing rod just got\n"
	.string "shipped from Arnie's!\p"
	.string "There's no way I can lose to somebody\n"
	.string "using an Old Rod...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_2:
	.string "Well, thanks for being honest!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC_Text_0:
	.string "Forget camping - let's battle!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC_Text_1:
	.string "Today's just not my day...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_EntranceNPC_Text_2:
	.string "I was looking for a nice place to pitch a\n"
	.string "tent, but it's all rained out!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_0:
	.string "Isn't it a nice day for a battle?$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_1:
	.string "Thanks for the battle!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_2:
	.string "A nice day is better with more Pokemon!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_FencePartnerNPCs_Text_3:
	.string "Y'know, I don't really feel like battling\n"
	.string "anymore.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast_Text_0:
	.string "I feel like I can battle batter when\n"
	.string "moving around. Watch!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast_Text_1:
	.string "Phew, I need to rest for a bit!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCEast_Text_2:
	.string "You should try running while battling\n"
	.string "sometime!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle_Text_0:
	.string "Hey you! Me and my team have been\n"
	.string "training here, let's see how far we've\l"
	.string "come!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle_Text_1:
	.string "Looks like we still have some more\n"
	.string "training to do.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCMiddle_Text_2:
	.string "Lot's of people train to defeat Ruka. I\n"
	.string "train for myself of course!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest_Text_0:
	.string "The only path to strength is through\n"
	.string "practice! No shortcuts!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest_Text_1:
	.string "I can tell you put in the work!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_UpperNPCWest_Text_2:
	.string "That 'Fitness Freak' fellow thinks he\n"
	.string "can become stronger just by taking\l"
	.string "vitamins...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast_Text_0:
	.string "Hey, did you get rejected from the\n"
	.string "Tidalcove Gym too? Let's train\l"
	.string "together!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast_Text_1:
	.string "Man, I'm so far away from beating Ruka...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCEast_Text_2:
	.string "Let me know how your challenge goes!\n"
	.string "I'm rooting for you!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle_Text_0:
	.string "I wanted to hike over to Rosevale\n"
	.string "today, but I also don't want my shoes\l"
	.string "to get wet...\p"
	.string "I think I'm gonna battle you instead!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle_Text_1:
	.string "Ah...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCMiddle_Text_2:
	.string "Let me know how deep the water is over\n"
	.string "there.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0:
	.string "STAY AWAY FROM MY PUDDLE!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1:
	.string "NOT MY PUDDLE!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2:
	.string "...I'm still not gonna share it with you.$"
