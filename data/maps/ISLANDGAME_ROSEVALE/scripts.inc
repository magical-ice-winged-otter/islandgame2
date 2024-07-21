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
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setobjectxyperm 4, 0, 0
	setobjectxyperm 6, 0, 0
	setobjectxyperm 5, 0, 0
	setobjectxyperm 1, 8, 14
	addobject 1
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setobjectxyperm 4, 12, 26
	setobjectxyperm 5, 13, 24
	setobjectxyperm 6, 12, 24
	setobjectxyperm 1, 14, 24
	setobjectxyperm 13, 14, 26
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	addobject 4
	addobject 5
	addobject 6
	addobject 1
	addobject 13
	turnobject 4, DIR_NORTH
	turnobject 13, DIR_NORTH
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
	setobjectxyperm 1, 8, 14
	addobject 1
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setobjectxyperm 5, 13, 24
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	addobject 5
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	compare VAR_ROSEVALE_STATE, 2
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROSEVALE_STATE, 2, ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	setvar VAR_ROSEVALE_STATE, 6
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 13, Common_Movement_FaceUp
	waitmovement 0
	applymovement 13, Common_Movement_ExclamationMark
	waitmovement 0
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	waitmoncry
	applymovement 13, Movement_AzurillRunsToSister
	waitmovement 0
	applymovement 1, Movement_SisterHappyToSee
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	applymovement 6, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
	closemessage
	applymovement 4, Common_Movement_FaceRight
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
	closemessage
	fadescreen FADE_TO_BLACK
	msgbox ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
	closemessage
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	completequest QUEST_ROSEVALE_RESCUE
	setrespawn HEAL_LOCATION_ISLANDGAME_ROSEVALE
	warp MAP_ISLANDGAME_ROSEVALE_INN_2F_ROOM1, 2, 2
	return


Movement_AzurillRunsToSister:
	jump_in_place_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	face_left
	step_end

Movement_SisterHappyToSee:
	face_right
	jump_in_place_up
	jump_in_place_up
	delay_16
	delay_16
	delay_16
	step_end

ISLANDGAME_ROSEVALE_Interact_PuddleMon::
	lock
	faceplayer
	playmoncry SPECIES_CHARMANDER, CRY_MODE_WEAK
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
	setobjectxy 1, 14, 14
	applymovement 1, Movement_ArthurSister_RunUpToPath
	waitmovement 1
	msgbox Text_ArthurSister_PleaseHelp
	startquest QUEST_ROSEVALE_RESCUE
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
	closemessage
	addobject 4
	setobjectxy 4, 19, 12
	applymovement 4, Movement_Arthur_WalkUpToExit
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1, MSGBOX_NPC
	trainerbattle_no_intro TRAINER_ROSEVALE_ARTHUR, ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_3, MSGBOX_NPC
	closemessage
	addobject 5
	setobjectxy 5, 19, 12
	applymovement 5, Movement_ArthurDad_WalkUpToArthur
	applymovement 4, Movement_Arthur_SeesDad
	waitmovement 5
	waitmovement 4
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_4, MSGBOX_NPC
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_5, MSGBOX_NPC
	applymovement 4, Common_Movement_FaceRight
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_6
	applymovement 5, Movement_ArthurDad_WalkAway
	applymovement 4, Movement_Arthur_WalkAway
	waitmovement 4
	waitmovement 5
	removeobject 4
	removeobject 5
	setvar VAR_ROSEVALE_STATE, 4
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
	return


ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "{COLOR GREEN}Arthur's Sister: {COLOR DARK_GRAY}Hooway!! You did it!\n"
	.string "You saved A-zoo-will and Arfur!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}Thank you so much for\n"
	.string "helping our son and rescuing our\l"
	.string "daughter's Pokémon, dear. How can we\l"
	.string "ever repay you?$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}Please, come stay the\n"
	.string "night at our inn, free of charge! It's\l"
	.string "the least we can do for your kindness.$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Watching your Pokémon battle...{PAUSE 30}\n"
	.string "it was incredible.\p"
	.string "They knew exactly what to do in the\n"
	.string "fight, even in the heat of the moment.\p"
	.string "You must be a pretty seasoned Pokémon\n"
	.string "trainer, right? What brings you here to\l"
	.string "Rosevale of all places?$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Oh...{PAUSE 30} you were training up your\n"
	.string "Pokemon to battle against Tidalcove's\l"
	.string "Gym Leader, Ruka?\p"
	.string "I see...{PAUSE 30} that means you're taking part in\n"
	.string "the Festival Tournament then, right?\p"
	.string "Hm...{PAUSE 30} So Pokémon trainers can get\n"
	.string "stronger by battling Gym Leaders...\p"
	.string "Oh, sorry! We should probably head\n"
	.string "inside. Let's continue this\l"
	.string "conversation after dinner!$"

ISLANDGAME_ROSEVALE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
	.string "{COLOR RED}(I spent the rest of the night talking\n"
	.string "to Arthur about my journey thus far...)$"

ISLANDGAME_ROSEVALE_Interact_PuddleMon_Text_0:
	.string "Char... {COLOR BLUE}(water scary :c)$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_0:
	.string "It's ok! The water isn't going to hurt\n"
	.string "you...\n"
	.string "Watch!$"

ISLANDGAME_ROSEVALE_Interact_PuddleTrainer_Text_1:
	.string "See?\n"
	.string "It's shallow!$"

ISLANDGAME_ROSEVALE_Interact_NPC1_Text_0:
	.string "Ew, a city-dweller. Keep your city germs\n"
	.string "away from our clean town!$"

ISLANDGAME_ROSEVALE_Interact_NPC2_Text_0:
	.string "Brrr...{PAUSE 30} The winds are always so chilly\n"
	.string "here.\p"
	.string "Talonflame! Warm up my hands, will ya? I\n"
	.string "hate being on watch duty...$"

ISLANDGAME_ROSEVALE_Interact_Talonflame_Text_0:
	.string "Talooon!$"

ISLANDGAME_ROSEVALE_Interact_NPC3_Text_0:
	.string "La dee dum... I love the sweet fragrance\n"
	.string "of flowers!\p"
	.string "Would you like to take a whiff?\p"
	.string "...Oops, sorry. I didn't know you were\n"
	.string "allergic.$"

ISLANDGAME_ROSEVALE_Interact_NPC4_Text_0:
	.string "My gramps said I needed to “touch\n"
	.string "grass” more, so here I am.\p"
	.string "I just wanna go back inside and tend to\n"
	.string "my farm on Starfdew Valley.$"

ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0:
	.string "ROSEVALE\n"
	.string "The village under the alps$"

ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0:
	.string "PEACHY SWEET INN\n"
	.string "We're positively peachy keen!\n"
	.string "$"

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0:
	.string "My bwother went that-a-way! I think he\n"
	.string "wan into Mount Awowa!$"

ISLANDGAME_ROSEVALE_Interact_ArthurDad_Text_0:
	.string "Where in the world could that boy be...?$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveWithoutQuest_Text_0:
	.string "Hewwo, I need your help!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_1:
	.string "Before you go...\p"
	.string "Please...\p"
	.string "Face me in a Pokémon battle! I couldn't\n"
	.string "do anything against that thief...{PAUSE 30} I\l"
	.string "failed my little sister...\p"
	.string "If it wasn't for you and Articuno...{PAUSE 30} My\n"
	.string "sister's Pokémon would've been lost\l"
	.string "forever!\p"
	.string "I can't something like that happen\n"
	.string "again...{PAUSE 30} I need to get stronger, so when\l"
	.string "the time comes...{PAUSE 30} I'll be able to protect\l"
	.string "her myself!\p"
	.string "And there's no better way than for me\n"
	.string "to take on Marya Gym Challenge and\l"
	.string "enter the Festival Tournament, just\l"
	.string "like you!\p"
	.string "My dad says I'm not ready yet... So I'll\n"
	.string "prove it to him! Right here and now!\l"
	.string "Prepare yourself, {PLAYER}!$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_2:
	.string "...\p"
	.string "I lost again...$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_3:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}...\p"
	.string "{COLOR DARK_GRAY}Heh...{PAUSE 30} You're truly an amazing trainer,\n"
	.string "{PLAYER}.\p"
	.string "I have no doubt that you'll be able to\n"
	.string "beat Ruka.\p"
	.string "{COLOR DARK_GRAY}Me on the other hand? I should just\n"
	.string "give up.\p"
	.string "{COLOR DARK_GRAY}Maybe I'm just not cut out to be a\n"
	.string "Pokémon trainer.\p"
	.string "I never win...{PAUSE 30} Why can't I ever win? That\n"
	.string "thief was right...{PAUSE 30} I am just a loser.\p"
	.string "...a failure.\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}No, Arthur, that's not\n"
	.string "true.$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_4:
	.string "Losing just means you have more to\n"
	.string "learn. It doesn't mean you're a failure.\p"
	.string "Failure only comes when you give up.\n"
	.string "When you stop believing.\p"
	.string "I watched your battle with {PLAYER}.\n"
	.string "I can tell you still don't trust in your\l"
	.string "Pokémon, or even yourself.\p"
	.string "And if you don't trust in yourself, how\n"
	.string "can you expect your Pokémon to?\p"
	.string "That's why you need more time. You have\n"
	.string "to build that trust with your Pokémon.\l"
	.string "Build that trust with yourself. Do you\l"
	.string "understand?\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}-sniff- Mhm.$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_5:
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}I know I may have been a\n"
	.string "little harsh on you earlier, but it's\l"
	.string "only because I want the best for you.\p"
	.string "Pokémon are a big responsibility, and I\n"
	.string "want to make sure that you can take\l"
	.string "care of both yourself and your Pokémon\l"
	.string "before you enter the Gym Challenge.\p"
	.string "In the next week, if you show me that\n"
	.string "the bond between you and your Pokemon\l"
	.string "has strengthened, I will let you\l"
	.string "challenge Ruka.\p"
	.string "And if you win, I will let you resume the\n"
	.string "rest of the gym challenge on your own.\l"
	.string "Does that sound fair?\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Okay. I'll train really really\n"
	.string "hard.\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}It has been a pleasure,\n"
	.string "{PLAYER}.\p"
	.string "I wish you all the best in your travels.$"

ISLANDGAME_ROSEVALE_Trigger_TryLeaveArthurFight_Text_6:
	.string "{COLOR GREEN}Arthur: {PLAYER}! I swear the next\n"
	.string "time we battle, I'll be stronger! And\l"
	.string "I'll win!$"

Text_ArthurSister_PleaseHelp::
	.string "You're a twainer, right? Someone stole\n"
	.string "my A-zoo-wil!\p"
	.string "My bwother Arfur wan after the thief,\n"
	.string "but he still hasn't come back!\p"
	.string "He told me not to wowwy, but I'm getting\n"
	.string "weally wowwied now!\p"
	.string "Pwease help me find him! And my\n"
	.string "A-zoo-wil!$"
