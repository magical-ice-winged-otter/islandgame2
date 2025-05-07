ISLANDGAME_ROCKY_PATH_HOUSE_MapScripts::
# 4 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROCKY_PATH_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROCKY_PATH_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	quest_emote_on_warp 1, QUEST_ROCKY_PATH_NURSE
	return


ISLANDGAME_ROCKY_PATH_HOUSE_Nurse::
# 10 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	lock
# 11 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	returnqueststate QUEST_ROCKY_PATH_NURSE
# 13 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_3
# 36 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_4
# 76 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_5
ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1:
# 83 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 84 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_3:
# 15 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_0
# 20 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 21 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 23 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 24 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 25 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 26 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_1
# 35 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	startquest QUEST_ROCKY_PATH_NURSE
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_4:
# 37 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	checkitem ITEM_BALM_MUSHROOM
# 38 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_6
# 71 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 72 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_7
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_5:
# 77 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 78 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_8
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_6:
# 39 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_2, MSGBOX_YESNO
# 42 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_9
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_9:
# 43 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 45 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 46 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_3
# 49 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 51 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 52 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 53 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	waitmovement 0
# 54 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_4
# 57 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 58 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_5
# 62 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	giveitem ITEM_POKEVIAL
# 63 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_6
# 67 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	completequest QUEST_ROCKY_PATH_NURSE
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_1


ISLANDGAME_ROCKY_PATH_HOUSE_Happiny::
# 89 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	lock
# 90 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	faceplayer
# 91 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 92 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	goto_if_unset FLAG_ROCKY_PATH_HAPPINY_GIFT, ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_2
# 100 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_1
ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_1:
# 104 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	closemessage
# 105 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_2:
# 93 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	msgbox ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_0
# 96 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	giveitem ITEM_FULL_RESTORE
# 97 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	setflag FLAG_ROCKY_PATH_HAPPINY_GIFT
	goto ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_1


ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_0:
# 16 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Mmngh... where am I going to find a Balm\n"
	.string "Mushroom of all things...?\p"
	.string "It's the last ingredient I need to\n"
	.string "complete my medicine!\p"
	.string "Hmmn?$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_1:
# 27 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
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
# 40 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "{COLOR RED}(Should I give my Balm Mushroom to\n"
	.string "Nurse Joy...?)$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_3:
# 47 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "O-Oh!{PAUSE 30} You managed to find one!? I am\n"
	.string "forever in your debt, trainer!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_4:
# 55 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "{PAUSE 60}Alright... {PAUSE 60}Just a little more...{PAUSE 60} annnd...{PAUSE 60}\n"
	.string "voila!{PAUSE 30} It is finished!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_5:
# 59 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Trainer, I present to you, the newest\n"
	.string "breakthrough in Pokémon Medicine...\p"
	.string "The PokéVial!$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_6:
# 64 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
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
# 73 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Until I find a Balm Mushroom, my\n"
	.string "concoction will never be complete...$"

ISLANDGAME_ROCKY_PATH_HOUSE_Nurse_Text_8:
# 79 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Thank you for your assistance, trainer.\n"
	.string "Your contribution will save the lives of\l"
	.string "countless future Pokémon in need.$"

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_0:
# 94 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Hapi! {COLOR BLUE}(I might not have healing\n"
	.string "capabilities, but this does!)$"

ISLANDGAME_ROCKY_PATH_HOUSE_Happiny_Text_1:
# 101 "data/maps/ISLANDGAME_ROCKY_PATH_HOUSE/scripts.pory"
	.string "Hapi Hapi. {COLOR BLUE}(I hope it will be useful in\n"
	.string "your journey. :D)$"
