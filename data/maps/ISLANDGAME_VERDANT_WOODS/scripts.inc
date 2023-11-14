ISLANDGAME_VERDANT_WOODS_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_VERDANT_WOODS_OnResume
	.byte 0


ISLANDGAME_VERDANT_WOODS_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo
	return


ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return


ISLANDGAME_VERDANT_WOODS_Sudowoodo::
	lock
	checkitem ITEM_WAILMER_PAIL, 1
	switch VAR_RESULT
	case FALSE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_3
	case TRUE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_4
ISLANDGAME_VERDANT_WOODS_Sudowoodo_1:
	release
	return

ISLANDGAME_VERDANT_WOODS_Sudowoodo_3:
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_4:
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, ISLANDGAME_VERDANT_WOODS_Sudowoodo_6
	case YES, ISLANDGAME_VERDANT_WOODS_Sudowoodo_7
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_6:
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_7:
	setwildbattle SPECIES_SUDOWOODO, 15
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_9:
	setflag FLAG_VERDANT_WOODS_SUDOWOODO_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1


ISLANDGAME_VERDANT_WOODS_TrainerBattle1::
	trainerbattle_double TRAINER_VERDANT_WOODS_1, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle2::
	trainerbattle_single TRAINER_VERDANT_WOODS_2, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle3::
	trainerbattle_single TRAINER_VERDANT_WOODS_3, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle4::
	trainerbattle_single TRAINER_VERDANT_WOODS_4, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle5::
	trainerbattle_single TRAINER_VERDANT_WOODS_5, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	waitmoncry
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC3::
	lock
	faceplayer
	goto_if_set FLAG_VERDANT_WOODS_SEED_RECEIVED, ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3Talk
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_VERDANT_WOODS_SEED_RECEIVED
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven::
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
	lock
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
	lock
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	waitmoncry
	release
	return


ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0:
	.string "{COLOR DARK_GRAY}It's a tree.$"

ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1:
	.string "{COLOR DARK_GRAY}It's a tree. Water it?$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Bug Pokémon are the best! They evolve\n"
	.string "early, so they become powerful fast!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
	.string "I guess bug Pokémon aren't very strong, \n"
	.string "so evolving early doesn't matter.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Even still, I think bug Pokémon are\n"
	.string "awesome!\p"
	.string "{COLOR DARK_GRAY}I'm the most popular kid at camp thanks\n"
	.string "to Butterfree and Beedrill!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons::
	.string "{COLOR DARK_GRAY}Huh? You need at least two Pokémon to\n"
	.string "face me!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text::
	.string "{COLOR DARK_GRAY}Mark my words, I will become the Bug\n"
	.string "King!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text::
	.string "I guess I'll just be the Bug Prince for  \n"
	.string "now.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}To become the Bug King, I have to\n"
	.string "capture that giant bug Pokémon first.\p"
	.string "{COLOR DARK_GRAY}I hear it's the only one of its kind\n"
	.string "here, which makes it perfect for a king!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text::
	.string "{COLOR DARK_GRAY}I'm tired of battling my brother. It's so\n"
	.string "boring.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text::
	.string "On second thought, battling him wasn't \n"
	.string "THAT bad...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}I just wish he would use a Pokémon that\n"
	.string "wasn't a bug for once.\p"
	.string "{COLOR DARK_GRAY}They have an unfair advantage against\n"
	.string "my Shroomish!\p"
	.string "{COLOR DARK_GRAY}Hmm, maybe I'll just get a Pokémon\n"
	.string "that's good against his.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs and poisonous plants.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
	.string "The only thing I hate more than forests  \n"
	.string "is losing.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}If you're going to Maplegrove, you\n"
	.string "should go the other way instead.\p"
	.string "{COLOR DARK_GRAY}There's nothing past here except some\n"
	.string "weird girl talking to herself.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text::
	.string "{COLOR DARK_GRAY}Trying to find this trading card is like\n"
	.string "looking for a needle in a haystack...\p"
	.string "{COLOR DARK_GRAY}I'm taking a break from all this\n"
	.string "searching! Let's battle!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text::
	.string "Wow... Maybe you could help me find my \n"
	.string "friend's trading card?$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}His trading card should be around here\n"
	.string "somewhere.\p"
	.string "{COLOR DARK_GRAY}Me and Poochyena have been looking for\n"
	.string "an hour!$"

ISLANDGAME_VERDANT_WOODS_NPC1Talk::
	.string "{COLOR DARK_GRAY}When I was trying to find a Tepig here, I\n"
	.string "came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
	.string "{COLOR DARK_GRAY}get out of my head get out of my head\n"
	.string "get out of my head GeT oUT oF mY hEaD$"

ISLANDGAME_VERDANT_WOODS_NPC3Talk::
	.string "{COLOR DARK_GRAY}Oh, are you a trainer? I found this while\n"
	.string "foraging for herbs. Take it!$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
