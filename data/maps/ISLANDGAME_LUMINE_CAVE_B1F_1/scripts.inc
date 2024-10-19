ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts::
# 6 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD
# 2 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SHELL_4, ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 16 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	setmetatile 3, 29, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, ISLANDGAME_LUMINE_CAVE_B1F_1_FallDownHole
	.2byte 0


ISLANDGAME_LUMINE_CAVE_B1F_1_Shell::
# 22 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	lock
# 23 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SHELL_4, ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_2
# 30 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_Text_0
# 33 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	closemessage
ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_1:
# 35 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_2:
# 24 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 25 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	setmetatile 3, 29, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 26 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	setflag FLAG_DAILY_LUMINE_CAVE_SHELL_4
	goto ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_1


ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse::
# 39 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	faceplayer
# 41 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_0, MSGBOX_YESNO
# 44 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_2
ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_1:
# 52 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	closemessage
# 53 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_2:
# 45 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	playfanfare MUS_HEAL
# 46 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	waitfanfare
# 47 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	special HealPlayerParty
# 48 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_1
	goto ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_1


ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey::
# 57 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	lock
# 58 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	faceplayer
# 59 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 60 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_CHANSEY_GIFT, ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_2
# 68 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_1:
# 72 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	closemessage
# 73 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_2:
# 61 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_0
# 64 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	giveitem ITEM_MAX_REPEL
# 65 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	setflag FLAG_LUMINE_CAVE_CHANSEY_GIFT
	goto ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_1


# 76 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
Movement_PlayerFallLumine:
# 77 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	set_invisible
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_1_FallDownHole:
# 81 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	lock
# 82 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	delay 20
# 83 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFallLumine
# 84 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	waitmovement 0
# 85 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	playse SE_FALL
# 86 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	delay 60
# 87 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	warphole MAP_ISLANDGAME_LUMINE_CAVE_B2F
# 88 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	waitstate
# 89 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1::
# 101 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_9, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_1
# 108 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2::
# 115 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_10, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_1
# 123 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3::
# 130 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_11, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_1
# 137 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4::
# 144 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_12, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_1
# 151 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5::
# 157 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	trainerbattle_single TRAINER_LUMINE_CAVE_13, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_0, ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_1
# 164 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_LUMINE_CAVE_B1F_1_Shell_Text_0:
# 31 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "{COLOR RED}(No shells here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_0:
# 42 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Your Pokémon look tired. Would you like\n"
	.string "me to nurse them back to full health?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Nurse_Text_1:
# 49 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Remember to exercise caution while\n"
	.string "roaming the cave.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_0:
# 62 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Chansey! {COLOR BLUE}(You're halfway there, trainer!\n"
	.string "Here, take this!)$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Chansey_Text_1:
# 69 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Chansey! {COLOR BLUE}(Hopefully that'll keep those\n"
	.string "pesky Zubats at bay for a while. :D)$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_0:
# 103 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Oi, I wouldn't go down there if I were\n"
	.string "you, sport.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_1:
# 106 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Well... maybe ya got what it takes.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer1_Text_2:
# 109 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "I just tryna do a little minin' fer iron\n"
	.string "when a giant rock Pokémon came outta\l"
	.string "nowhere and attacked me!\p"
	.string "I didn't have no choice but to leave my\n"
	.string "pickaxe and haul butt outta there...$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_0:
# 117 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "-tweet!-\p"
	.string "NO RUNNING IN THE CAVES!!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_1:
# 121 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "No gloating in victory either!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer2_Text_2:
# 124 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "And don't even THINK about using your\n"
	.string "bike in here!\p"
	.string "Do you have ANY idea how dangerous\n"
	.string "that is!?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_0:
# 132 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Underground lakes are where all the\n"
	.string "exotic water Pokémon are!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_1:
# 135 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Binacles...$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer3_Text_2:
# 138 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "I wish people would stop tossing their\n"
	.string "garbage in the lake.\p"
	.string "Earlier today someone threw away a\n"
	.string "perfectly fine unopened can of soda!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_0:
# 146 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Ah ah ah!{PAUSE 60} Where do you think you're\n"
	.string "going?{PAUSE 30} Trying to escape destiny?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_1:
# 149 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "This was not the future I foresaw...$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer4_Text_2:
# 152 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Well, ya got me. By all accounts it\n"
	.string "doesn't make sense.$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_0:
# 159 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Dragons are the best!$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_1:
# 162 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Dragons are the best...?$"

ISLANDGAME_LUMINE_CAVE_B1F_1_Trainer5_Text_2:
# 165 "data/maps/ISLANDGAME_LUMINE_CAVE_B1F_1/scripts.pory"
	.string "Just you wait until my dragons reach\n"
	.string "their final form!$"
