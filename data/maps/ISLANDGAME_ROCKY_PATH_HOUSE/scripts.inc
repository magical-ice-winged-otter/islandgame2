ISLANDGAME_ROCKY_PATH_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_ROCKY_PATH_HOUSE_Nurse::
# 4 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	returnqueststate QUEST_ROCKY_PATH_NURSE
# 7 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_3
# 30 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_4
# 70 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_5
ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1:
# 77 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 78 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_3:
# 9 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_0
# 14 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 15 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 16 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 17 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 18 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 19 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 20 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_1
# 29 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	startquest QUEST_ROCKY_PATH_NURSE
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_4:
# 31 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	checkitem ITEM_BALM_MUSHROOM
# 32 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_6
# 65 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 66 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_7
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_5:
# 71 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 72 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_8
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_6:
# 33 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_2, MSGBOX_YESNO
# 36 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_9
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_9:
# 37 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 38 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 39 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 40 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_3
# 43 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 44 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 45 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 47 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 48 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_4
# 51 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 52 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_5
# 56 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	giveitem ITEM_POKEVIAL
# 57 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_6
# 61 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	completequest QUEST_ROCKY_PATH_NURSE
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1


ISLANDGAME_ROCKY_PATH_HOUSE_Happiny::
# 83 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	lock
# 84 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 85 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 86 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	goto_if_unset FLAG_ROCKY_PATH_HAPPINY_GIFT, ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_2
# 94 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_1
ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_1:
# 98 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 99 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_2:
# 87 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_0
# 90 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	giveitem ITEM_FULL_RESTORE
# 91 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	setflag FLAG_ROCKY_PATH_HAPPINY_GIFT
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_1


ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_0:
# 10 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Mmngh... where am I going to find a Balm\n"
	.string "Mushroom of all things...?\p"
	.string "It's the last ingredient I need to\n"
	.string "complete my medicine!\p"
	.string "Hmmn?$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_1:
# 21 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
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
# 34 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "{COLOR RED}(Should I give my Balm Mushroom to\n"
	.string "Nurse Joy...?)$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_3:
# 41 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "O-Oh!{PAUSE 30} You managed to find one!? I am\n"
	.string "forever in your debt, trainer!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_4:
# 49 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "{PAUSE 60}Alright... {PAUSE 60}Just a little more...{PAUSE 60} annnd...{PAUSE 60}\n"
	.string "voila!{PAUSE 30} It is finished!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_5:
# 53 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Trainer, I present to you, the newest\n"
	.string "breakthrough in Pokémon Medicine...\p"
	.string "The PokéVial!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_6:
# 58 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
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
# 67 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Until I find a Balm Mushroom, my\n"
	.string "concoction will never be complete...$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_8:
# 73 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Thank you for your assistance, trainer.\n"
	.string "Your contribution will save the lives of\l"
	.string "countless future Pokémon in need.$"

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_0:
# 88 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Hapi! {COLOR BLUE}(I might not have healing\n"
	.string "capabilities, but this does!)$"

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_1:
# 95 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Hapi Hapi. {COLOR BLUE}(I hope it will be useful in\n"
	.string "your journey. :D)$"
