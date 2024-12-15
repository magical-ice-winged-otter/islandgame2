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
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_double TRAINER_VERDANT_WOODS_1, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle2::
# 128 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_2, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text
# 129 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle3::
# 154 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_3, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text
# 155 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle4::
# 178 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_4, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text
# 179 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_TrainerBattle5::
# 203 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_WOODS_5, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text
# 205 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
# 232 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 233 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 234 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
# 235 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
# 247 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 248 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 249 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2
# 254 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1:
# 256 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2:
# 250 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
# 251 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 252 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1


# 265 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement:
# 266 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 267 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 268 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_right
# 269 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_8
# 270 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 271 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 272 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 273 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 273 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
	step_end

# 276 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2:
# 277 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 278 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 278 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_4
# 279 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 280 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 281 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
# 281 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	jump_in_place_left
	step_end

# 284 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3:
# 285 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_up
# 286 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	emote_exclamation_mark
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 287 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
# 288 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_fast_down
	step_end

# 291 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4:
# 292 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 292 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 292 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 293 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	face_left
# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 294 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	delay_16
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	walk_down
# 295 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
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
# 481 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 482 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	faceplayer
# 483 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_set FLAG_VERDANT_WOODS_SEED_RECEIVED, ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven
# 484 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3Talk
# 485 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 486 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 487 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	setflag FLAG_VERDANT_WOODS_SEED_RECEIVED
# 488 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven::
# 492 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0
# 493 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
# 508 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 509 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
# 510 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
# 521 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	lock
# 522 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2
# 528 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1:
# 530 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2:
# 523 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
# 524 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 525 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
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
# 254 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Owww, my head, it hurts...$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
# 492 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0:
# 528 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "NO TRESPASSING$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
# 101 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yay! My Spewpa finally evolved!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
# 107 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Waaah!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
# 112 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Bug Pokémon are really fragile...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_NotEnoughMons::
# 119 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Huh? You need at least two Pokémon to\n"
	.string "face me!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Text::
# 132 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Mark my words, I WILL become the Bug\n"
	.string "King!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_Defeated_Text::
# 138 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I guess I'll just be the Bug Prince for  \n"
	.string "now.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle2_PostDefeated_Text::
# 144 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}To become the Bug King, I have to\n"
	.string "capture that giant bug Pokémon first.\p"
	.string "{COLOR DARK_GRAY}I hear it's the only one of its kind\n"
	.string "here, which makes it perfect for a king!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Text::
# 158 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Give me a challenge!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_Defeated_Text::
# 164 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Finally... a worthy opponent...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle3_PostDefeated_Text::
# 169 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Our battle was legendary!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
# 182 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
# 188 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "The only thing I hate more than forests \n"
	.string "is losing...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
# 194 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "This place gives me the\n"
	.string "heebie-jeebies...$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text::
# 208 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Sic 'em, boy!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Defeated_Text::
# 214 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "Yo! Chill out! It was just a prank, bro!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text::
# 219 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "I'm just tryna go viral on PikPok, man.$"

ISLANDGAME_VERDANT_WOODS_NPC1Talk::
# 238 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}When I was trying to find a Joltik here,\n"
	.string "I came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
# 259 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}get out of my head get out of my head\n"
	.string "get out of my head GeT oUT oF mY hEaD$"

ISLANDGAME_VERDANT_WOODS_NPC3Talk::
# 496 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}Oh, are you a trainer? I found this while\n"
	.string "foraging for herbs. Take it!$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
# 513 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
# 533 "data/maps/ISLANDGAME_VERDANT_WOODS/scripts.pory"
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
