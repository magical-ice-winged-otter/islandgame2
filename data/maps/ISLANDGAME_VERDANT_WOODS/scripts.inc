ISLANDGAME_VERDANT_WOODS_MapScripts::
# 22 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_VERDANT_WOODS_OnResume
	.byte 0


ISLANDGAME_VERDANT_WOODS_OnResume::
# 49 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo
	return


ISLANDGAME_VERDANT_WOODS_TryRemoveSudowoodo::
# 53 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 55 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


ISLANDGAME_VERDANT_WOODS_Sudowoodo::
# 61 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 62 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	checkitem ITEM_WAILMER_PAIL, 1
# 63 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case FALSE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_3
# 66 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case TRUE, ISLANDGAME_VERDANT_WOODS_Sudowoodo_4
ISLANDGAME_VERDANT_WOODS_Sudowoodo_1:
# 92 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_Sudowoodo_3:
# 65 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_4:
# 67 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1, MSGBOX_YESNO
# 68 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case NO, ISLANDGAME_VERDANT_WOODS_Sudowoodo_6
# 71 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case YES, ISLANDGAME_VERDANT_WOODS_Sudowoodo_7
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_6:
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_7:
# 72 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	special DoWateringBerryTreeAnim
# 73 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitstate
# 74 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitse
# 75 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 76 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	applymovement 2, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 77 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmovement 0
# 78 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 10
# 79 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 80 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
# 81 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	dowildbattle
# 83 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 84 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
# 86 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_Sudowoodo_9
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1

ISLANDGAME_VERDANT_WOODS_Sudowoodo_9:
# 87 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SUDOWOODO_DEFEATED
# 88 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_Sudowoodo_1


ISLANDGAME_VERDANT_WOODS_TrainerBattle1::
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_double TRAINER_VERDANT_WOODS_1, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle2::
# 130 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_2, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text
# 131 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle3::
# 156 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_3, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text
# 157 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle4::
# 181 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_4, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text
# 182 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle5::
# 206 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_5, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text
# 208 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
# 235 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 236 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 237 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
# 238 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
# 250 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 251 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 252 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2
# 257 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1:
# 259 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2:
# 253 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
# 254 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 255 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1


# 268 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement:
# 269 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 270 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 271 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_right
# 272 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_8
# 273 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 274 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 275 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 276 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 276 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
	step_end

# 279 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2:
# 280 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 281 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 281 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 282 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 283 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 284 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
# 284 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
	step_end

# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3:
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 289 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 290 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 290 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 290 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
	step_end

# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4:
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 296 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 297 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 298 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
	step_end

ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2::
	return


ISLANDGAME_VERDANT_WOODS_SkittyPhase2Loc::
	return


ISLANDGAME_VERDANT_WOODS_HaunterPhase2Loc::
	return


ISLANDGAME_VERDANT_WOODS_FightHaunter::
	return


ISLANDGAME_VERDANT_WOODS_SkittyPhase2::
	return


ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty::
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC3::
# 484 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 485 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 486 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_set FLAG_VERDANT_WOODS_SEED_RECEIVED, ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven
# 487 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3Talk
# 488 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 489 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 490 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SEED_RECEIVED
# 491 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven::
# 495 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0
# 496 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
# 511 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 512 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
# 513 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
# 524 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 525 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2
# 531 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1:
# 533 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2:
# 526 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
# 527 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 528 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1


ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0:
# 65 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)$"

ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1:
# 67 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)\p"
	.string "{COLOR DARK_GRAY}Water the strange-looking tree?$"

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0:
# 257 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Owww, my head, it hurts...$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
# 495 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0:
# 531 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "NO TRESPASSING$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
# 102 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Bug Pokémon are the best! They evolve\n"
	.string "early, so they become powerful fast!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
# 108 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I guess bug Pokémon aren't very strong, \n"
	.string "so evolving early doesn't matter.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
# 114 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Even still, I think bug Pokémon are\n"
	.string "awesome!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons::
# 121 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You need at least two Pokémon to\n"
	.string "face me!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text::
# 134 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Mark my words, I will become the Bug\n"
	.string "King!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text::
# 140 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I guess I'll just be the Bug Prince for  \n"
	.string "now.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text::
# 146 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}To become the Bug King, I have to\n"
	.string "capture that giant bug Pokémon first.\p"
	.string "{COLOR DARK_GRAY}I hear it's the only one of its kind\n"
	.string "here, which makes it perfect for a king!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text::
# 160 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm tired of battling my brother. It's so\n"
	.string "boring.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text::
# 166 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "On second thought, battling him wasn't \n"
	.string "THAT bad...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text::
# 172 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}I just wish he would use a Pokémon that\n"
	.string "wasn't a bug for once.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
# 185 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
# 191 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "The only thing I hate more than forests \n"
	.string "is losing.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
# 197 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "This place gives me the\n"
	.string "heebie-jeebies...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text::
# 211 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Sic 'em, boy!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text::
# 217 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yo! Chill out! It was just a prank, bro!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text::
# 222 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I'm just tryna go viral on PikPok, man.$"

ISLANDGAME_VERDANT_WOODS_NPC1Talk::
# 241 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}When I was trying to find a Joltik here,\n"
	.string "I came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
# 262 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}get out of my head get out of my head\n"
	.string "get out of my head GeT oUT oF mY hEaD$"

ISLANDGAME_VERDANT_WOODS_NPC3Talk::
# 499 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oh, are you a trainer? I found this while\n"
	.string "foraging for herbs. Take it!$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
# 516 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
# 536 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
