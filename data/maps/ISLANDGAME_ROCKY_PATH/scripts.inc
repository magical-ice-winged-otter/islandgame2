ISLANDGAME_ROCKY_PATH_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	setflag FLAG_TEMP_2
ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_unset FLAG_DAILY_ROCKY_PATH_ROCKRUFF, ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	setobjectxyperm 8, 0, 72
	return

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_3
	goto ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ROCKY_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setvar VAR_ROCKY_PATH_STATE, 0
	return


RockyPath_RunAway1:
	jump_2_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

RockyPath_RunAway2:
	jump_2_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

RockyPath_RunAway3:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

RockyPath_RunAway4:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RockyPath_RunAway5:
	jump_2_up
	walk_fast_left
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RockyPath_RunAway6:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ISLANDGAME_ROCKY_PATH_Rockruff::
	switch VAR_ROCKY_PATH_STATE
	case 0, ISLANDGAME_ROCKY_PATH_Rockruff_2
	case 1, ISLANDGAME_ROCKY_PATH_Rockruff_3
	case 2, ISLANDGAME_ROCKY_PATH_Rockruff_4
	case 3, ISLANDGAME_ROCKY_PATH_Rockruff_5
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_ROCKRUFF_OWN_TEMPO, 23, ITEM_WIKI_BERRY, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_TOMB, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_SUCKER_PUNCH
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_WON, ISLANDGAME_ROCKY_PATH_Rockruff_8
	case B_OUTCOME_CAUGHT, ISLANDGAME_ROCKY_PATH_Rockruff_9
	return

ISLANDGAME_ROCKY_PATH_Rockruff_2:
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	applymovement 8, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
	waitmoncry
	applymovement 8, Common_Movement_WalkUp2
	waitmovement 0
	playse SE_LEDGE
	applymovement 8, RockyPath_RunAway1
	waitmovement 0
	playse SE_LEDGE
	applymovement 8, RockyPath_RunAway2
	waitmovement 0
	setobjectxyperm 8, 46, 45
	setvar VAR_ROCKY_PATH_STATE, 1
	return

ISLANDGAME_ROCKY_PATH_Rockruff_3:
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	applymovement 8, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
	waitmoncry
	applymovement 8, RockyPath_RunAway3
	waitmovement 0
	playse SE_LEDGE
	applymovement 8, RockyPath_RunAway2
	waitmovement 0
	setobjectxyperm 8, 72, 64
	setvar VAR_ROCKY_PATH_STATE, 2
	return

ISLANDGAME_ROCKY_PATH_Rockruff_4:
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	applymovement 8, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
	waitmoncry
	applymovement 8, RockyPath_RunAway4
	waitmovement 0
	playse SE_LEDGE
	applymovement 8, RockyPath_RunAway5
	waitmovement 0
	setobjectxyperm 8, 14, 65
	setvar VAR_ROCKY_PATH_STATE, 3
	return

ISLANDGAME_ROCKY_PATH_Rockruff_5:
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	applymovement 8, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
	waitmoncry
	applymovement 8, RockyPath_RunAway6
	waitmovement 0
	setobjectxyperm 8, 43, 52
	setvar VAR_ROCKY_PATH_STATE, 4
	return

ISLANDGAME_ROCKY_PATH_Rockruff_8:
	setflag FLAG_DAILY_ROCKY_PATH_ROCKRUFF
	goto Common_EventScript_RemoveStaticPokemon
	return

ISLANDGAME_ROCKY_PATH_Rockruff_9:
	setflag FLAG_DAILY_ROCKY_PATH_ROCKRUFF
	goto Common_EventScript_RemoveStaticPokemon
	return


ISLANDGAME_ROCKY_PATH_Sign::
	msgbox ISLANDGAME_ROCKY_PATH_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_LumineCaveEntrance::
	msgbox ISLANDGAME_ROCKY_PATH_LumineCaveEntrance_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROCKY_PATH_Ranger::
	lock
	faceplayer
	goto_if_unset FLAG_ROCKY_PATH_ESCAPE_ROPE, ISLANDGAME_ROCKY_PATH_Ranger_2
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_1
ISLANDGAME_ROCKY_PATH_Ranger_1:
	closemessage
	release
	return

ISLANDGAME_ROCKY_PATH_Ranger_2:
	msgbox ISLANDGAME_ROCKY_PATH_Ranger_Text_0
	giveitem ITEM_ESCAPE_ROPE
	setflag FLAG_ROCKY_PATH_ESCAPE_ROPE
	goto ISLANDGAME_ROCKY_PATH_Ranger_1


ISLANDGAME_ROCKY_PATH_Trainer1::
	trainerbattle_single TRAINER_ROCKY_PATH_1, ISLANDGAME_ROCKY_PATH_Trainer1_Text_0, ISLANDGAME_ROCKY_PATH_Trainer1_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer2::
	trainerbattle_single TRAINER_ROCKY_PATH_2, ISLANDGAME_ROCKY_PATH_Trainer2_Text_0, ISLANDGAME_ROCKY_PATH_Trainer2_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer3::
	trainerbattle_single TRAINER_ROCKY_PATH_3, ISLANDGAME_ROCKY_PATH_Trainer3_Text_0, ISLANDGAME_ROCKY_PATH_Trainer3_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer4::
	trainerbattle_single TRAINER_ROCKY_PATH_4, ISLANDGAME_ROCKY_PATH_Trainer4_Text_0, ISLANDGAME_ROCKY_PATH_Trainer4_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer5::
	trainerbattle_single TRAINER_ROCKY_PATH_5, ISLANDGAME_ROCKY_PATH_Trainer5_Text_0, ISLANDGAME_ROCKY_PATH_Trainer5_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer6::
	trainerbattle_single TRAINER_ROCKY_PATH_6, ISLANDGAME_ROCKY_PATH_Trainer6_Text_0, ISLANDGAME_ROCKY_PATH_Trainer6_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer7::
	trainerbattle_single TRAINER_ROCKY_PATH_7, ISLANDGAME_ROCKY_PATH_Trainer7_Text_0, ISLANDGAME_ROCKY_PATH_Trainer7_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer8::
	trainerbattle_single TRAINER_ROCKY_PATH_8, ISLANDGAME_ROCKY_PATH_Trainer8_Text_0, ISLANDGAME_ROCKY_PATH_Trainer8_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer9::
	trainerbattle_single TRAINER_ROCKY_PATH_9, ISLANDGAME_ROCKY_PATH_Trainer9_Text_0, ISLANDGAME_ROCKY_PATH_Trainer9_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_Trainer10::
	trainerbattle_single TRAINER_ROCKY_PATH_10, ISLANDGAME_ROCKY_PATH_Trainer10_Text_0, ISLANDGAME_ROCKY_PATH_Trainer10_Text_1
	msgbox ISLANDGAME_ROCKY_PATH_Trainer10_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ROCKY_PATH_PathMaster::
	lock
	faceplayer
	checktrainerflag TRAINER_ROCKY_PATH_1
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_4
ISLANDGAME_ROCKY_PATH_PathMaster_1:
	checktrainerflag TRAINER_ROCKY_PATHMASTER
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_25
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_6
ISLANDGAME_ROCKY_PATH_PathMaster_24:
RockyPath_PathMaster_End:
	closemessage
	release
	return

ISLANDGAME_ROCKY_PATH_PathMaster_2:
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROCKY_PATH_PathMaster_28
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_4
	goto RockyPath_PathMaster_End
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_3:
	checktrainerflag TRAINER_ROCKY_PATH_3
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_8
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_4:
	checktrainerflag TRAINER_ROCKY_PATH_2
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_3
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_7:
	checktrainerflag TRAINER_ROCKY_PATH_5
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_12
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_8:
	checktrainerflag TRAINER_ROCKY_PATH_4
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_7
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_11:
	checktrainerflag TRAINER_ROCKY_PATH_7
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_16
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_12:
	checktrainerflag TRAINER_ROCKY_PATH_6
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_11
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_15:
	checktrainerflag TRAINER_ROCKY_PATH_9
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_20
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_16:
	checktrainerflag TRAINER_ROCKY_PATH_8
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_15
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_19:
	checktrainerflag TRAINER_ROCKY_PATHMASTER
	goto_if 0, ISLANDGAME_ROCKY_PATH_PathMaster_2
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_20:
	checktrainerflag TRAINER_ROCKY_PATH_10
	goto_if 1, ISLANDGAME_ROCKY_PATH_PathMaster_19
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1

ISLANDGAME_ROCKY_PATH_PathMaster_25:
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_5
	goto ISLANDGAME_ROCKY_PATH_PathMaster_24

ISLANDGAME_ROCKY_PATH_PathMaster_28:
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_1
	trainerbattle_no_intro TRAINER_ROCKY_PATHMASTER, ISLANDGAME_ROCKY_PATH_PathMaster_Text_2
	msgbox ISLANDGAME_ROCKY_PATH_PathMaster_Text_3
	giveitem ITEM_JABOCA_BERRY
	goto RockyPath_PathMaster_End
	goto ISLANDGAME_ROCKY_PATH_PathMaster_1


ISLANDGAME_ROCKY_PATH_Sign_Text_0:
	.string "ROCKY PATH\n"
	.string "{LEFT_ARROW}APPLEVINE / LUMINE CAVE{DOWN_ARROW}$"

ISLANDGAME_ROCKY_PATH_LumineCaveEntrance_Text_0:
	.string "LUMINE CAVE\n"
	.string "When in doubt, follow the sand!$"

ISLANDGAME_ROCKY_PATH_Ranger_Text_0:
	.string "It's easy to get lost in Lumine's\n"
	.string "enormous cave system, so I'm handing\l"
	.string "out these handy dandy escape ropes to\l"
	.string "journeying trainers! Here, take one!$"

ISLANDGAME_ROCKY_PATH_Ranger_Text_1:
	.string "With one of those, you'll be able to find\n"
	.string "your way to the entrance of any cave!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_0:
	.string "I'm almost done setting my picnic up! I\n"
	.string "won't have you interfere!$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_1:
	.string "Maybe I shouldn't have set up a picnic\n"
	.string "at the path entrance...$"

ISLANDGAME_ROCKY_PATH_Trainer1_Text_2:
	.string "This is my first time trying to setup a\n"
	.string "picnic. I've been trying to follow along\l"
	.string "this guide online, but it's just talking\l"
	.string "about making sandwiches.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_0:
	.string "Curses, my mortal enemy...{PAUSE 60} LEDGES.$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_1:
	.string "My second mortal enemy...{PAUSE 60} LOSING!$"

ISLANDGAME_ROCKY_PATH_Trainer2_Text_2:
	.string "Whose idea was it to have all these darn\n"
	.string "ledges!?\p"
	.string "I'd like to speak to them directly and\n"
	.string "give them a piece of my mind!$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_0:
	.string "Don'chu fuggle with my Shuckle!$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_1:
	.string "Aw, shucks. My strat didn't work.$"

ISLANDGAME_ROCKY_PATH_Trainer3_Text_2:
	.string "Did you know Shuckle can deal the most\n"
	.string "damage out of any Pokémon?\p"
	.string "Yup! You heard me right! My little\n"
	.string "Shuckie has the potential to pack a\l"
	.string "bigger punch than any of the Isle\l"
	.string "Guardians, or even Lugia!$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_0:
	.string "Oi! What're you doing in me line o' sight?$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_1:
	.string "It's all over now...$"

ISLANDGAME_ROCKY_PATH_Trainer4_Text_2:
	.string "Me and my merry band of Pokémon are on\n"
	.string "our way to see Arboria down south!$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_0:
	.string "Hey! Have you heard about my SUPER\n"
	.string "COOL RATTATA!?\p"
	.string "IT IS VERY DIFFERENT FROM OTHER\n"
	.string "RATTATAS!!\p"
	.string "IT'S IN THE TOP PERCENTAGE OF\n"
	.string "RATTATAS, IN FACT!!!\p"
	.string "1 V 1 M E B R O$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_1:
	.string "No fair! 1 v 1 me like a REAL trainer!$"

ISLANDGAME_ROCKY_PATH_Trainer5_Text_2:
	.string "You must've cheated! There's no way I\n"
	.string "could lose with my perfect setup!$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_0:
	.string "Hoo! Haa! Hee! Haa! Hoo! Haa! Hee! Haa!\p"
	.string "Who shall be next to challenge me!?$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_1:
	.string "Hoo... Haa... Hee...$"

ISLANDGAME_ROCKY_PATH_Trainer6_Text_2:
	.string "I train with my Hariyama every day in\n"
	.string "close quarters combat!\p"
	.string "I'll be getting first place at this\n"
	.string "year's festival martial arts\l"
	.string "tournament for sure!$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_0:
	.string "Inside of me are two Lycanrocs\n"
	.string "fighting...\p"
	.string "One is Midday... the other is Midnight...\p"
	.string "Which one will win...? I'll show you right\n"
	.string "here!{PAUSE 60} RAAAAAAAAAAUUUGHHHH!$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_1:
	.string "M-My inner Lycanroc...{PAUSE 30} wasn't strong\n"
	.string "enough?$"

ISLANDGAME_ROCKY_PATH_Trainer7_Text_2:
	.string "Inside of every trainer are two\n"
	.string "Lycanrocs...\p"
	.string "One is Midday... the other is Midnight...\p"
	.string "Which one will win...? The one that the\n"
	.string "trainer chooses to train...$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_0:
	.string "Ah, did you think I couldn't see you\n"
	.string "walking by, trainer?\p"
	.string "Thanks to my psychic powers, I can see\n"
	.string "what the human eye cannot!$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_1:
	.string "My vision... It is fading...$"

ISLANDGAME_ROCKY_PATH_Trainer8_Text_2:
	.string "Argh... My mana reserves are running\n"
	.string "low...\p"
	.string "Perhaps I should have saved them for\n"
	.string "our battle...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_0:
	.string "Hmm, yes, exquisite...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_1:
	.string "You are quite the fine specimen\n"
	.string "indeed...$"

ISLANDGAME_ROCKY_PATH_Trainer9_Text_2:
	.string "You are no ordinary trainer. My analysis\n"
	.string "has made that abundantly clear...$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_0:
	.string "Have you heard?$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_1:
	.string "Ah... it was with my understanding that\n"
	.string "everyone had heard.$"

ISLANDGAME_ROCKY_PATH_Trainer10_Text_2:
	.string "Come on, don't you know? About the...?$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_0:
	.string "Well, bite my biscuits, ya beat all the\n"
	.string "trainers of Rocky Path!\p"
	.string "This super rare Jaboca Berry is all\n"
	.string "yours!... If you can take it from me.$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_1:
	.string "Let's see if you've got what it takes\n"
	.string "against my FREAKING MASSIVE WALLS!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_2:
	.string "Ack! It seems I've met the unstoppable\nforce to my unbreakable shield...$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_3:
	.string "Rip in pepperonis. Looks like I gotta\n"
	.string "give this over to ya.$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_4:
	.string "Understandable, have a nice day!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_5:
	.string "Looks like you're the master of Rocky\n"
	.string "Path now!$"

ISLANDGAME_ROCKY_PATH_PathMaster_Text_6:
	.string "Hey, hey, hey! I'm the rock hard Path\n"
	.string "Master of Rocky Path!\p"
	.string "If ya manage to conquer all the\n"
	.string "trainers here, I'll give ya a reward!$"
