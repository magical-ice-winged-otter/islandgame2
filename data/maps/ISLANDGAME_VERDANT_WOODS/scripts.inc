ISLANDGAME_VERDANT_WOODS_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_VERDANT_WOODS_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	returnqueststate QUEST_VERDANT_FOREST_SKITTY
	switch VAR_RESULT
	case QUEST_INACTIVE, ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case QUEST_ACTIVE, ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case QUEST_COMPLETED, ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	gettime
	compare VAR_0x8000, 0
	goto_if_ge ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_TEMP_0, 2
	call ISLANDGAME_VERDANT_WOODS_SkittyPhase2Loc
	return

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_TEMP_0, 0
	call ISLANDGAME_VERDANT_WOODS_SkittyPhase2Loc
	return

ISLANDGAME_VERDANT_WOODS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_TEMP_0, 1
	return


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
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement 2, BattleFrontier_OutsideEast_Movement_SudowoodoShake
	waitmovement 0
	setwildbattle SPECIES_SUDOWOODO, 10
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
	goto_if_set FLAG_CAMP_PERSI_TRADING_CARD_ITEM, ISLANDGAME_VERDANT_WOODS_TrainerBattle5_1
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_1:
	msgbox ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text_0, MSGBOX_AUTOCLOSE
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
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1:
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_2:
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_1


ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement:
	face_left
	delay_4
	face_right
	delay_8
	face_up
	delay_4
	face_left
	delay_16
	delay_16
	step_end

ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2:
	face_left
	delay_4
	delay_4
	emote_exclamation_mark
	delay_16
	jump_in_place_left
	jump_in_place_left
	step_end

ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3:
	face_up
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4:
	walk_down
	walk_down
	walk_down
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2::
	compare VAR_TEMP_0, 1
	goto_if_eq ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2_1
	end

ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2_1:
	setvar VAR_TEMP_0, 2
	applymovement 5, ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement
	waitmovement 5
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	message ISLANDGAME_VERDANT_WOODS_NPC2Talk
	waitmessage
	waitbuttonpress
	waitmoncry
	playse SE_BALL
	clearflag FLAG_TEMP_1
	showobjectat 23, MAP_ISLANDGAME_VERDANT_WOODS
	addobject 23
	waitse
	playse SE_BALL_OPEN
	waitse
	removeobject 23
	setflag FLAG_TEMP_1
	playmoncry SPECIES_SKITTY, CRY_MODE_ENCOUNTER
	clearflag FLAG_TEMP_2
	showobjectat 24, MAP_ISLANDGAME_VERDANT_WOODS
	addobject 24
	waitmoncry
	applymovement 24, ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement
	waitmovement 24
	applymovement 24, ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_2
	waitmovement 24
	message ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2_Text_0
	playmoncry SPECIES_SKITTY, CRY_MODE_ENCOUNTER
	waitmessage
	waitbuttonpress
	waitmoncry
	closemessage
	delay 120
	fadescreen FADE_TO_WHITE
	delay 10
	fadescreen FADE_FROM_WHITE
	clearflag FLAG_TEMP_3
	showobjectat 25, MAP_ISLANDGAME_VERDANT_WOODS
	addobject 25
	playmoncry SPECIES_SKITTY, CRY_MODE_ENCOUNTER
	applymovement 24, ISLANDGAME_VERDANT_WOODS_EventScript_SkittyMovement_3
	waitmoncry
	playmoncry SPECIES_SKITTY, CRY_MODE_ENCOUNTER
	waitmovement 24
	waitmoncry
	removeobject 24
	setflag FLAG_TEMP_2
	applymovement 25, ISLANDGAME_VERDANT_WOODS_EventScript_HaunterMovement_4
	waitmovement 25
	removeobject 25
	setflag FLAG_TEMP_3
	call ISLANDGAME_VERDANT_WOODS_SkittyPhase2Loc
	startquest QUEST_VERDANT_FOREST_SKITTY
	return


ISLANDGAME_VERDANT_WOODS_SkittyPhase2Loc::
	clearflag FLAG_TEMP_2
	setobjectxyperm 24, 11, 40
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	showobjectat 24, MAP_ISLANDGAME_VERDANT_WOODS
	return


ISLANDGAME_VERDANT_WOODS_HaunterPhase2Loc::
	clearflag FLAG_TEMP_3
	setobjectxyperm 25, 12, 35
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_DOWN
	showobjectat 25, MAP_ISLANDGAME_VERDANT_WOODS
	addobject 25
	return


ISLANDGAME_VERDANT_WOODS_FightHaunter::
	setflag FLAG_SMART_WILD_AI
	setflag FLAG_NO_CATCHING
	setflag FLAG_NO_RUNNING
	setcwildbattle 0, SPECIES_HAUNTER, 16, ITEM_SITRUS_BERRY, NUM_NATURES, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_SHADOW_BALL, MOVE_HYPNOSIS
	setwilddoublebattle TRUE
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	clearflag FLAG_NO_CATCHING
	clearflag FLAG_NO_RUNNING
	return


ISLANDGAME_VERDANT_WOODS_SkittyPhase2::
	lock
	returnqueststate QUEST_VERDANT_FOREST_SKITTY
	switch VAR_RESULT
	case QUEST_COMPLETED, ISLANDGAME_VERDANT_WOODS_SkittyPhase2_3
ISLANDGAME_VERDANT_WOODS_SkittyPhase2_1:
	msgbox ISLANDGAME_VERDANT_WOODS_SkittyPhase2_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	applymovement 24, Common_Movement_FaceUp
	waitmovement 24
	playmoncry SPECIES_SKITTY, CRY_MODE_ENCOUNTER
	delay 120
	waitmoncry
	fadescreen FADE_TO_WHITE
	delay 10
	call ISLANDGAME_VERDANT_WOODS_HaunterPhase2Loc
	applymovement 25, Common_Movement_FaceDown
	waitmovement 25
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	applymovement 25, Common_Movement_WalkDown
	waitmovement 25
	delay 10
	applymovement 25, Common_Movement_WalkDown
	waitmovement 25
	delay 20
	applymovement 25, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 25
	delay 30
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	waitmoncry
	call ISLANDGAME_VERDANT_WOODS_FightHaunter
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_SkittyPhase2_6
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_SkittyPhase2_6
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_SkittyPhase2_7
ISLANDGAME_VERDANT_WOODS_SkittyPhase2_4:
	release
	return

ISLANDGAME_VERDANT_WOODS_SkittyPhase2_3:
	goto ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty
	goto ISLANDGAME_VERDANT_WOODS_SkittyPhase2_1

ISLANDGAME_VERDANT_WOODS_SkittyPhase2_6:
	goto ISLANDGAME_VERDANT_WOODS_SkittyPhase2_4

ISLANDGAME_VERDANT_WOODS_SkittyPhase2_7:
	removeobject 25
	setflag FLAG_TEMP_3
	completequest QUEST_VERDANT_FOREST_SKITTY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceOriginalDirection
	setvar VAR_TEMP_0, 0
	waitmovement OBJ_EVENT_ID_PLAYER
	call ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty
	goto ISLANDGAME_VERDANT_WOODS_SkittyPhase2_4


ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty::
	lock
	faceplayer
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_Text_0, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_3
	case NO, ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_4
ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_1:
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_3:
	givemon SPECIES_SKITTY, 10, ITEM_NONE, ITEM_PREMIER_BALL, 1, 1, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_FAKE_OUT, MOVE_SING, MOVE_TACKLE, MOVE_DISARMING_VOICE, FALSE
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_Text_1
	waitfanfare
	closemessage
	removeobject 24
	setflag FLAG_TEMP_2
	goto ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_1

ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_4:
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_Text_2
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_1


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
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2
	msgbox ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0
ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1:
	release
	return

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_2:
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	waitmoncry
	goto ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_1


ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_0:
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)$"

ISLANDGAME_VERDANT_WOODS_Sudowoodo_Text_1:
	.string "{COLOR RED}(It's a strange-looking tree. Its trunk\n"
	.string "doesn't feel like wood at all...)\p"
	.string "{COLOR DARK_GRAY}Water the strange-looking tree?$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle5_Text_0:
	.string "Hey! You found it! You've got pretty\n"
	.string "sharp eyes.$"

ISLANDGAME_VERDANT_WOODS_EventScript_NPC2_Text_0:
	.string "Owww, my head, it hurts...$"

ISLANDGAME_VERDANT_WOODS_EventScript_Trigger_NPC2_Text_0:
	.string "The Skitty seems frightened.$"

ISLANDGAME_VERDANT_WOODS_SkittyPhase2_Text_0:
	.string "Skitty seems frightened.$"

ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_Text_0:
	.string "Skitty wants to join your team. Accept?$"

ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_Text_1:
	.string "{COLOR DARK_GRAY}{PLAYER} recieved an {STR_VAR_1}!$"

ISLANDGAME_VERDANT_WOODS_EventScript_ObtainSkitty_Text_2:
	.string "Skitty became dejected.$"

ISLANDGAME_VERDANT_WOODS_NPC3_MiracleSeedGiven_Text_0:
	.string "{COLOR DARK_GRAY}That's a Miracle Seed. It's not good for\n"
	.string "cooking, but it's great for powering up\l"
	.string "grass-type Pokémon in a battle!$"

ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2_Text_0:
	.string "NO TRESPASSING$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Bug Pokémon are the best! They evolve\n"
	.string "early, so they become powerful fast!$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_Defeated_Text::
	.string "I guess bug Pokémon aren't very strong, \n"
	.string "so evolving early doesn't matter.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Even still, I think bug Pokémon are\n"
	.string "awesome!$"

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
	.string "wasn't a bug for once.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Text::
	.string "{COLOR DARK_GRAY}Ugh... I hate forests. They're dirty and\n"
	.string "full of icky bugs.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_Defeated_Text::
	.string "The only thing I hate more than forests \n"
	.string "is losing.$"

ISLANDGAME_VERDANT_WOODS_TrainerBattle4_PostDefeated_Text::
	.string "This place gives me the\n"
	.string "heebie-jeebies...$"

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
	.string "{COLOR DARK_GRAY}When I was trying to find a Joltik here,\n"
	.string "I came across this HUGE bug Pokémon.\p"
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
