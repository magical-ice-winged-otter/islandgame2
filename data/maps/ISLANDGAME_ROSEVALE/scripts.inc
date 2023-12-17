ISLANDGAME_ROSEVALE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_ROSEVALE_STATE
	case 1, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	case 5, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_ROSEVALE_STATE, 3
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setobjectxyperm 4, 0, 0
	setobjectxyperm 6, 0, 0
	setobjectxyperm 5, 0, 0
	setobjectxyperm 1, 14, 14
	addobject 1
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setobjectxyperm 4, 20, 25
	setobjectxyperm 5, 18, 24
	setobjectxyperm 6, 19, 24
	setobjectxyperm 1, 20, 26
	addobject 4
	addobject 5
	addobject 6
	addobject 1
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	turnobject 4, DIR_WEST
	turnobject 1, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 0, 0
	setobjectxyperm 6, 0, 0
	setobjectxyperm 1, 0, 0
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	setobjectxyperm 4, 0, 0
	setobjectxyperm 6, 0, 0
	setobjectxyperm 5, 0, 0
	setobjectxyperm 1, 14, 14
	addobject 1
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setobjectxyperm 5, 19, 24
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	addobject 5
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROSEVALE_STATE, 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	setvar VAR_ROSEVALE_STATE, 3
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_NPC
	giveitem ITEM_AMULET_COIN
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_NPC
	special HealPlayerParty
	setrespawn HEAL_LOCATION_ISLANDGAME_ROSEVALE
	warp MAP_ISLANDGAME_ROSEVALE_INN, 5, 3
	return


ISLANDGAME_ROSEVALE_Interact_PuddleMon::
	lock
	faceplayer
	playmoncry SPECIES_CHARMANDER, CRY_MODE_ENCOUNTER
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleMon_Text_0
	release
	return


Movement_TrainerJump:
	jump_in_place_left
	jump_in_place_up
	jump_in_place_right
	jump_in_place_down
	jump_in_place_left
	step_end

Movement_MonWatch:
	face_right
	step_end

Movement_MonJump:
	jump_in_place_right
	step_end

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer::
	lock
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0
	closemessage
	applymovement 3, Movement_MonWatch
	applymovement 2, Movement_TrainerJump
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1
	closemessage
	applymovement 3, Movement_MonJump
	playmoncry SPECIES_CHARMANDER, CRY_MODE_WEAK
	waitmoncry
	waitmovement 0
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC1_Text_0
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC2::
	lock
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC2_Text_0
	release
	return


ISLANDGAME_ROSEVALE_Interact_Talonflame::
	lock
	faceplayer
	playmoncry SPECIES_TALONFLAME, CRY_MODE_NORMAL
	msgbox ISLANDGAME_ROSEVALE_Interact_Talonflame_Text_0
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC3_Text_0
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


ISLANDGAME_ROSEVALE_Interact_NPC4::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_Interact_NPC4_Text_0
	release
	return


ISLANDGAME_ROSEVALE_Interact_EntranceSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_InnSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_ArthurSister::
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0, MSGBOX_NPC
	return


ISLANDGAME_ROSEVALE_Interact_ArthurDad::
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0, MSGBOX_NPC
	return


Movement_ArthurSister_RunUpToPath:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest::
	lock
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest_Text_0
	closemessage
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	addobject 1
	setobjectxy 1, 20, 14
	applymovement 1, Movement_ArthurSister_RunUpToPath
	waitmovement 1
	msgbox Text_ArthurSister_PleaseHelp
	setvar VAR_ROSEVALE_STATE, 1
	release
	return


Movement_Arthur_WalkUpToExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight::
	lock
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0
	addobject 4
	setobjectxy 4, 25, 12
	applymovement 4, Movement_Arthur_WalkUpToExit
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1, MSGBOX_NPC
	trainerbattle_single TRAINER_SPECIAL_ARTHUR_1, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_3, ArthurDefeated
	release
	return


Movement_ArthurDad_WalkUpToArthur:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Arthur_SeesDad:
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	emote_exclamation_mark
	step_end

Movement_ArthurDad_WalkAway:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Arthur_WalkAway:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

ArthurDefeated:
	msgbox ArthurDefeated_Text_0, MSGBOX_NPC
	addobject 5
	setobjectxy 5, 25, 12
	applymovement 5, Movement_ArthurDad_WalkUpToArthur
	applymovement 4, Movement_Arthur_SeesDad
	waitmovement 5
	waitmovement 4
	msgbox ArthurDefeated_Text_1, MSGBOX_NPC
	applymovement 5, Movement_ArthurDad_WalkAway
	applymovement 4, Movement_Arthur_WalkAway
	waitmovement 4
	waitmovement 5
	removeobject 4
	removeobject 5
	setvar VAR_ROSEVALE_STATE, 4
	release
	return


ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "{COLOR GREEN}Arthur's Sister: {COLOR DARK_GRAY}Yay! Fank you for\n"
	.string "getting Marill back!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "{COLOR DARK_GRAY}Here! You can have this.$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}How can we ever repay you,\n"
	.string "{PLAYER}?$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}Please, stay the night at\n"
	.string "our inn. It's the least we can do.$"

ISLANDGAME_ROSEVALE_Interact_PuddleMon_Text_0:
	.string "Char... {COLOR BLUE}(save me from this purgatory)$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0:
	.string "It's ok! The water isn't going to hurt\n"
	.string "you...\n"
	.string "Watch!$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1:
	.string "See?\n"
	.string "It's shallow!$"

ISLANDGAME_ROSEVALE_Interact_NPC1_Text_0:
	.string "The air here is nice and fresh thanks to\n"
	.string "our Isle Guardian, Articuno.\p"
	.string "I'm glad I moved here from Tidalcove.\n"
	.string "The city life just isn't for me.$"

ISLANDGAME_ROSEVALE_Interact_NPC2_Text_0:
	.string "Brrr... The winds are always so chilly\n"
	.string "here.\p"
	.string "Talonflame! Warm up my hands, will ya? I\n"
	.string "hate being on watch duty...$"

ISLANDGAME_ROSEVALE_Interact_Talonflame_Text_0:
	.string "Talooon!$"

ISLANDGAME_ROSEVALE_Interact_NPC3_Text_0:
	.string "La dee dum... I love the sweet fragrance\n"
	.string "of flowers!$"

ISLANDGAME_ROSEVALE_Interact_NPC4_Text_0:
	.string "My gramma said I needed to “touch\n"
	.string "grass” more, so here I am.$"

ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0:
	.string "ROSEVALE\n"
	.string "The village under the alps$"

ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0:
	.string "PEACHY SWEET INN\n"
	.string "We're positively peachy keen!\n"
	.string "$"

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0:
	.string "My bwother went that-a-way. I think he\n"
	.string "went into the mountain!$"

ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0:
	.string "Where in the world could that boy be...?$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest_Text_0:
	.string "Hewwo, I need your help!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1:
	.string "Before you go, I... I...\p"
	.string "I want to challenge you to a Pokémon\n"
	.string "battle!\p"
	.string "I-I couldn't do anything against that\n"
	.string "thief... If it wasn't for you and\l"
	.string "Articuno... My little sister's Pokémon\l"
	.string "would've been lost forever!\p"
	.string "I need to get stronger, so when the\n"
	.string "time comes, I'll be able to protect her!\p"
	.string "I wanna be just like you, and take on\n"
	.string "the Mariyama Gym Challenge to hone my\l"
	.string "skills!\p"
	.string "But Dad says I'm not ready yet...\p"
	.string "$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2:
	.string "So I'll prove it to him! Right here and\n"
	.string "now! Prepare yourself, {PLAYER}!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_3:
	.string "...\pI lost again...\pWhy do I keep losing?$"

ArthurDefeated_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}...\p"
	.string "{COLOR DARK_GRAY}Heh... You're a great trainer,\n"
	.string "{PLAYER}. You can definitely take on\l"
	.string "Ruka.\p"
	.string "{COLOR DARK_GRAY}Me on the other hand? I should just\n"
	.string "give up.\p"
	.string "{COLOR DARK_GRAY}I'm not cut out to be a Pokémon trainer.\n"
	.string "I'm a failure.\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}No, Arthur, that's not\n"
	.string "true.\p"
	.string "$"

ArthurDefeated_Text_1:
	.string "Just because you haven't been\n"
	.string "successful with your first few\l"
	.string "battles, doesn't mean you're a failure.\p"
	.string "I watched your battle with {PLAYER}.\n"
	.string "The bond you share with your Pokémon\l"
	.string "is strong, and shows me that do you\l"
	.string "have potential.\p"
	.string "But you need more time. You can't\n"
	.string "expect to be a good trainer without\l"
	.string "putting in the effort.\p"
	.string "Listen, if you spend the next week\n"
	.string "training hard with your Pokémon, I'll\l"
	.string "let you challenge Ruka, alright?\p"
	.string "{COLOR GREEN}Arthur: -sniff- Okay. {COLOR GREEN}Arthur's Dad:\n"
	.string "{COLOR DARK_GRAY}Good luck on the rest of your journey,\l"
	.string "{PLAYER}. {COLOR DARK_GRAY}Our door will always be open\l"
	.string "to you.$"

Text_ArthurSister_PleaseHelp::
	.string "You're a twainer, right? Someone stole\n"
	.string "my A-zoo-ril!\p"
	.string "My bwother Arfur ran after the thief,\n"
	.string "but he still hasn't come back!\p"
	.string "He told me not to worry or tell Mom or\n"
	.string "Dad... but I'm getting worried!\p"
	.string "I don't wanna tell Mom and Dad. They'll\n"
	.string "be weally mad at him if they find out...\p"
	.string "Pwease help me find him and get my\n"
	.string "A-zoo-ril back!$"
