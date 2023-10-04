ISLANDGAME_Southern_Oranna_Path_MapScripts::
	.byte 0


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle2::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_2, TrainerBattle2_Text, TrainerBattle2_Defeated_Text
	msgbox TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle3::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_3, TrainerBattle3_Text, TrainerBattle3_Defeated_Text
	msgbox TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle4::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_4, TrainerBattle4_Text, TrainerBattle4_Defeated_Text
	msgbox TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC1Talk
	release
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2::
	lock
	faceplayer
	goto_if_unset FLAG_S_ORANNA_PATH_NPC, ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1:
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk2
	release
	return

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2:
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk1
	giveitem ITEM_POTION
	setflag FLAG_S_ORANNA_PATH_NPC
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1


ISLANDGAME_Southern_Oranna_Path_EventScript_SIGN::
	lock
	msgbox ISLANDGAME_Southern_Oranna_Path_SIGN_DESC
	release
	return


TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Hey, you look like a newbie! You'll be\n"
	.string "easy pickings for a veteran like me!$"

TrainerBattle1_Defeated_Text::
	.string "N-No way... I lost to a newbie!?$"

TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Okay... I lied about being a veteran. I'm\n"
	.string "also just a newbie too.$"

TrainerBattle2_Text::
	.string "{COLOR DARK_GRAY}I caught some cute Pokémon. Wanna see\n"
	.string "them? They're pretty strong too!$"

TrainerBattle2_Defeated_Text::
	.string "Well shoot! Your Pokémon are cute and strong too!$"

TrainerBattle2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Where'd you get that Eevee? I'd love to\n"
	.string "have one too!$"

TrainerBattle3_Text::
	.string "{COLOR DARK_GRAY}My Pokémon is really rare! You don't\n"
	.string "stand a chance!$"

TrainerBattle3_Defeated_Text::
	.string "How did you beat me? Your Pokémon must be even rarer!$"

TrainerBattle3_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Hmmm, I guess just because a Pokémon is\n"
	.string "rare, doesn't mean it's strong...$"

TrainerBattle4_Text::
	.string "{COLOR DARK_GRAY}I'm on a crazy winning streak right now!\n"
	.string "How'd you like to be my 10th victory?$"

TrainerBattle4_Defeated_Text::
	.string "Whelp... Looks like we're back to zero.$"

TrainerBattle4_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}You ruined my perfect record today... ):$"

ISLANDGAME_Southern_Oranna_Path_NPC1Talk::
	.string "{COLOR DARK_GRAY}Have you seen any Jigglypuff yet? I\n"
	.string "like that Pokémon.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk1::
	.string "{COLOR DARK_GRAY}You're a Pokémon Trainer, right? You\n"
	.string "could probably use this.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk2::
	.string "{COLOR DARK_GRAY}I used to work part-time at the Poké\n"
	.string "Mart in Cheriport, but I got fired.\p"
	.string "{COLOR DARK_GRAY}I'm fine with it though, my manager was\n"
	.string "a real jerk anyways.$"

ISLANDGAME_Southern_Oranna_Path_SIGN_DESC::
	.string "{COLOR DARK_GRAY}<-- CHERIPORT\n"
	.string "{COLOR DARK_GRAY}CAMP PERSI -->$"
