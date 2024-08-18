ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_2, ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2
ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_2, ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 42, 5, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	goto ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1

ISLANDGAME_LUMINE_CAVE_1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	setmetatile 14, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Salt::
	lock
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_2, ISLANDGAME_LUMINE_CAVE_1F_2_Salt_2
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Salt_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_1F_2_Salt_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Salt_2:
	giveitem ITEM_SHOAL_SALT
	setmetatile 42, 5, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_2
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Salt_1


ISLANDGAME_LUMINE_CAVE_1F_2_Shell::
	lock
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_2, ISLANDGAME_LUMINE_CAVE_1F_2_Shell_2
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Shell_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_1F_2_Shell_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Shell_2:
	giveitem ITEM_SHOAL_SHELL
	setmetatile 14, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_2
	goto ISLANDGAME_LUMINE_CAVE_1F_2_Shell_1


ISLANDGAME_LUMINE_CAVE_1F_2_NPC1::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_NPC1_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_2_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_NPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_1F_2_NPC3::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_NPC3_Text_0
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr::
	lock
	faceplayer
	playmoncry SPECIES_GURDURR, CRY_MODE_NORMAL
	goto_if_unset FLAG_LUMINE_CAVE_GURDURR_GIFT, ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_1
	return

ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_1:
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_0
	giveitem ITEM_FIGHTING_GEM
	setflag FLAG_LUMINE_CAVE_GURDURR_GIFT
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1::
	trainerbattle_single TRAINER_LUMINE_CAVE_3, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2::
	trainerbattle_single TRAINER_LUMINE_CAVE_4, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3::
	trainerbattle_single TRAINER_LUMINE_CAVE_5, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4::
	trainerbattle_single TRAINER_LUMINE_CAVE_6, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5::
	trainerbattle_single TRAINER_LUMINE_CAVE_7, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_0, ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_1F_2_Salt_Text_0:
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_Shell_Text_0:
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_NPC1_Text_0:
	.string "Timmy! Take that rock out of your mouth\n"
	.string "this instant!$"

ISLANDGAME_LUMINE_CAVE_1F_2_NPC2_Text_0:
	.string "Bleugh! This doesn't taste like candy\n"
	.string "at all! Brett lied to me!$"

ISLANDGAME_LUMINE_CAVE_1F_2_NPC3_Text_0:
	.string "Hah! What an idiot! Kids will believe\n"
	.string "anything you tell them!\p"
	.string "I bet he'd believe me if I told him this\n"
	.string "pile of sand is actually sugar...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_0:
	.string "Durr... {COLOR BLUE}(I found this while mining for\n"
	.string "ore. You can have it.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_Gurdurr_Text_1:
	.string "Durr. {COLOR BLUE}(Chaperoning kids is tough work. I\n"
	.string "hope my trainer is being paid well.)$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_0:
	.string "You thought it was a pile of Cave Salt,\n"
	.string "but it was me, Ninja Boy Dioh!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_1:
	.string "WRRRRRRRYYYYY$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer1_Text_2:
	.string "I'm parodying my favorite animated\n"
	.string "show. It's fun to reference it.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_0:
	.string "I'm on my way to see Serafina in\n"
	.string "Aetheria. I hear she's hosting a\l"
	.string "stream!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_1:
	.string "I guess I could just watch it on my\n"
	.string "phone...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer2_Text_2:
	.string "This cave is soooo long. I don't know\n"
	.string "why we can't just have a direct path\l"
	.string "from Applevine to Aetheria.\p"
	.string "Seems like a major design flaw to me...\n"
	.string "but I'm no engineer.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_0:
	.string "Contrary to popular opinion, I quite\n"
	.string "enjoy the abundance of Zubat in caves.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_1:
	.string "I see you have a differing view...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer3_Text_2:
	.string "Zubat are quite the fascinating\n"
	.string "Pokémon, utilizing echolocation to\l"
	.string "navigate around rather than the\l"
	.string "traditional sense of sight and smell.\p"
	.string "Interestingly enough, its evolutions of\n"
	.string "Golbat and Crobat do possess eyes, a\l"
	.string "physical feature that is noticeably\l"
	.string "absent from Zubat.\p"
	.string "Pokémon evolution is quite strange, is\n"
	.string "it not?$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_0:
	.string "Nwehehehehe! You stand no chance\n"
	.string "against my army of RARE Pokémon!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_1:
	.string "I-Inconceivable...$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer4_Text_2:
	.string "Impossible, impossible, impossible!\p"
	.string "How could I have lost with these\n"
	.string "premium Pokémon!?$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_0:
	.string "-ding ding-\p"
	.string "That means get out of my way!$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_1:
	.string "-ding ding-\p"
	.string "That means I surrender.$"

ISLANDGAME_LUMINE_CAVE_1F_2_Trainer5_Text_2:
	.string "-ding ding-\p"
	.string "That didn't mean anything. It's just fun\n"
	.string "to ring the bell.\p"
	.string "-ding ding-$"
