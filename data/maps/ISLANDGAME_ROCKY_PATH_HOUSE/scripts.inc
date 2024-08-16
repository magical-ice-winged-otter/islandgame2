ISLANDGAME_ROCKY_PATH_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_ROCKY_PATH_HOUSE_Nurse::
	lock
	returnqueststate QUEST_ROCKY_PATH_NURSE
	switch VAR_RESULT
	case QUEST_INACTIVE, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_3
	case QUEST_ACTIVE, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_4
	case QUEST_COMPLETED, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_5
ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1:
	closemessage
	release
	return

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_3:
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_0
	closemessage
	faceplayer
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_1
	startquest QUEST_ROCKY_PATH_NURSE
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_4:
	checkitem ITEM_BALM_MUSHROOM
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_6
	faceplayer
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_7
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_5:
	faceplayer
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_8
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_6:
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_9
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_9:
	faceplayer
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_3
	closemessage
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_4
	faceplayer
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_5
	giveitem ITEM_POKEVIAL
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_6
	completequest QUEST_ROCKY_PATH_NURSE
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1


ISLANDGAME_ROCKY_PATH_HOUSE_Happiny::
	lock
	faceplayer
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
	goto_if_unset FLAG_ROCKY_PATH_HAPPINY_GIFT, ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_2
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_1
ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_1:
	closemessage
	release
	return

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_2:
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_0
	giveitem ITEM_FULL_RESTORE
	setflag FLAG_ROCKY_PATH_HAPPINY_GIFT
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_1


ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_0:
	.string "Mmngh... where am I going to find a Balm\n"
	.string "Mushroom of all things...?\p"
	.string "It's the last ingredient I need to\n"
	.string "complete my medicine!\p"
	.string "Hmmn?$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_1:
	.string "My apologies, trainer. This is not a\n"
	.string "center, so I cannot heal your Pokémon.\p"
	.string "...\p"
	.string "...Oh?{PAUSE 30} You're interested in what I'm\n"
	.string "working on?\p"
	.string "I am currently in the works of\n"
	.string "developing a concoction that can be\l"
	.string "distributed to trainers to heal their\l"
	.string "Pokémon without going to a center.\p"
	.string "After weeks of experimentation, I was\n"
	.string "able to craft a formula, but there is\l"
	.string "one rather cumbersome issue.\p"
	.string "In order for my concoction to work, I\n"
	.string "need a Balm Mushroom, which are\l"
	.string "extremely difficult to find in the wild.\p"
	.string "-sigh- I would sooner find a Pokémon\n"
	.string "with Pokérus before one of those...$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_2:
	.string "{COLOR RED}(Should I give my Balm Mushroom to\n"
	.string "Nurse Joy...?)$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_3:
	.string "O-Oh!{PAUSE 30} You managed to find one!? I am\n"
	.string "forever in your debt, trainer!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_4:
	.string "{PAUSE 60}Alright... {PAUSE 60}Just a little more...{PAUSE 60} annnd...{PAUSE 60}\n"
	.string "voila!{PAUSE 30} It is finished!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_5:
	.string "Trainer, I present to you, the newest\n"
	.string "breakthrough in Pokémon Medicine...\p"
	.string "The PokéVial!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_6:
	.string "Inside of this vial is enough of my\n"
	.string "special concoction that will heal all\l"
	.string "Pokémon in your party to full health,\l"
	.string "just a trip to the Pokémon Center!\p"
	.string "Oh, and don't worry about running out of\n"
	.string "it, either! I plan on stocking up every\l"
	.string "center in Marya with my medicine, so\l"
	.string "you'll be able to get a refill whenever\l"
	.string "you get a normal heal!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_7:
	.string "Until I find a Balm Mushroom, my\n"
	.string "concoction will never be complete...$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_8:
	.string "Thank you for your assistance, trainer.\n"
	.string "Your contribution will save the lives\l"
	.string "of countless future Pokémon in need.$"

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_0:
	.string "Hapi! {COLOR BLUE}(I might not have healing\n"
	.string "capabilities, but this does!)$"

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_1:
	.string "Hapi Hapi. {COLOR BLUE}(I hope it will be useful in\n"
	.string "your journey. :D)$"
