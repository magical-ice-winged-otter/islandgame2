ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	copyvar VAR_ICE_STEP_COUNT, 1
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_CRACKED_FLOOR
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_4, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 3, 29, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ICE_STEP_COUNT, 0, ISLANDGAME_LUMINE_CAVE_B1F_1_FallDownHole
	.2byte 0


ISLANDGAME_LUMINE_CAVE_B1F_1_Shell::
	lock
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_4, ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_2
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_2:
	giveitem ITEM_SHOAL_SHELL
	setmetatile 3, 29, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_4
	goto ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_1


ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_2
ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_1:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_2:
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_1
	goto ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_1


ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey::
	lock
	faceplayer
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	goto_if_unset FLAG_LUMINE_CAVE_CHANSEY_GIFT, ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_2
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_1:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_2:
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_0
	giveitem ITEM_MAX_REPEL
	setflag FLAG_LUMINE_CAVE_CHANSEY_GIFT
	goto ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_1


Movement_PlayerFallLumine:
	set_invisible
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_1_FallDownHole:
	lock
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFallLumine
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_ISLANDGAME_LUMINE_CAVE_B2F
	waitstate
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1::
	trainerbattle_single TRAINER_LUMINE_CAVE_9, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2::
	trainerbattle_single TRAINER_LUMINE_CAVE_10, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3::
	trainerbattle_single TRAINER_LUMINE_CAVE_11, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4::
	trainerbattle_single TRAINER_LUMINE_CAVE_12, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5::
	trainerbattle_single TRAINER_LUMINE_CAVE_13, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_1
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_Text_0:
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_0:
	.string "Your Pokémon look tired. Would you like\n"
	.string "me to nurse them back to full health?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_1:
	.string "Remember to exercise caution while\n"
	.string "roaming the cave.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_0:
	.string "Chansey! {COLOR BLUE}(You're halfway there, trainer!\n"
	.string "Here, take this!)$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_1:
	.string "Chansey! {COLOR BLUE}(Hopefully that'll keep those\n"
	.string "pesky Zubats at bay for a while. :D)$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_0:
	.string "Oi, I wouldn't go down there if I were\n"
	.string "you, sport.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_1:
	.string "Well... maybe ya got what it takes.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_2:
	.string "I just tryna do a little minin' fer coal\n"
	.string "when a giant rock Pokémon came outta\l"
	.string "nowhere and attacked me!\p"
	.string "I didn't have no choice but to leave my\n"
	.string "pickaxe and haul butt outta there...$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_0:
	.string "-tweet!-\p"
	.string "NO RUNNING IN THE CAVES!!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_1:
	.string "No gloating in victory either!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_2:
	.string "And don't even THINK about using your\n"
	.string "bike in here!\p"
	.string "Do you have ANY idea how dangerous\n"
	.string "that is!?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_0:
	.string "Underground lakes are where all the\n"
	.string "exotic water Pokémon are!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_1:
	.string "Binacles...$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_2:
	.string "I wish people would stop tossing their\n"
	.string "garbage in the lake.\p"
	.string "Earlier today someone threw away a\n"
	.string "perfectly fine unopened can of soda!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_0:
	.string "Ah ah ah!{PAUSE 60} Where do you think you're\n"
	.string "going?{PAUSE 30} Trying to escape destiny?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_1:
	.string "This was not the future I foresaw...$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_2:
	.string "Well, ya got me. By all accounts it\n"
	.string "doesn't make sense.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_0:
	.string "Dragons are the best!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_1:
	.string "Dragons are the best...?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_2:
	.string "Just you wait until my dragons reach\n"
	.string "their final form!$"
