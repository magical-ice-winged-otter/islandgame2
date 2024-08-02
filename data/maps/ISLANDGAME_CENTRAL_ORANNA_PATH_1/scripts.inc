ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_MINTY_MEADOWS_STATE
	case 4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_TEMP_0, 1
	setobjectxyperm 4, 0, 0
	setobjectxyperm 5, 0, 0
	setobjectxyperm 6, 0, 0
	setobjectxyperm 1, 37, 27
	setobjectxyperm 3, 0, 0
	setobjectxyperm 2, 0, 0
	setobjectxyperm 16, 0, 0
	setobjectxyperm 17, 0, 0
	setobjectxyperm 18, 0, 0
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


Movement_PlayerPushBack:
	walk_down
	step_end

Movement_MightyenaGrowl:
	jump_in_place_down
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous::
	lock
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_NORMAL
	applymovement 4, Movement_MightyenaGrowl
	waitmovement 0
	waitmoncry
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 1, Common_Movement_Delay32
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerPushBack
	waitmovement 0
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1::
	trainerbattle_single TRAINER_CORANNA_1_NPC1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2::
	trainerbattle_single TRAINER_CORANNA_1_NPC2, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3::
	trainerbattle_single TRAINER_CORANNA_1_NPC3, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4::
	trainerbattle_single TRAINER_CORANNA_1_NPC4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger::
	switch VAR_MINTY_MEADOWS_STATE
	case 4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3
	faceplayer
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1:
	closemessage
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3:
	faceplayer
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1::
	lock
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2::
	lock
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster::
	lock
	faceplayer
	checktrainerflag TRAINER_CORANNA_1_NPC1
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_4
ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1:
	checktrainerflag TRAINER_CORANNA_PATHMASTER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_23
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_5
ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_22:
	closemessage
	release
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_2:
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_26
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_3
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_3:
	checktrainerflag TRAINER_CORANNA_1_NPC3
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_8
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_4:
	checktrainerflag TRAINER_CORANNA_1_NPC2
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_3
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_7:
	checktrainerflag TRAINER_CORANNA_2_CAMPER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_12
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_8:
	checktrainerflag TRAINER_CORANNA_1_NPC4
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_7
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_11:
	checktrainerflag TRAINER_CORANNA_2_BIKER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_16
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_12:
	checktrainerflag TRAINER_CORANNA_2_MANIAC
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_11
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_15:
	checktrainerflag TRAINER_MINTY_MEADOWS_5
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_19
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_16:
	checktrainerflag TRAINER_CORANNA_2_FISHERMAN
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_15
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_19:
	checktrainerflag TRAINER_CORANNA_PATHMASTER
	goto_if 0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_2
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_23:
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_4
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_22

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_26:
	trainerbattle_no_intro TRAINER_CORANNA_PATHMASTER, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_2
	giveitem ITEM_PETAYA_BERRY
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0:
	.string "Hey! It's too dangerous to go any\n"
	.string "further! Please let us deal with this!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0:
	.string "Take a look at my darling Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1:
	.string "Oh dear...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2:
	.string "Are you headed to Tidalcove? It's a\n"
	.string "fairly long journey ahead. Good luck!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0:
	.string "According to all known laws of aviation,\n"
	.string "there's no way that a non-flying type\l"
	.string "Bug Pokémon should be able to fly.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1:
	.string "The Bug Pokémon of course, flies \nanyways.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2:
	.string "Bug Pokémon don't care what humans\n"
	.string "think is impossible.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0:
	.string "My glasses! Where are my glasses? I\n"
	.string "can't see anything without my glasses!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1:
	.string "Oh, here they are.{PAUSE 60} They were in my\n pocket the entire time.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2:
	.string "Sorry. I'm kinda forgetful. Umm... What\n"
	.string "was I doing again?\p"
	.string "I knew I came down here for a reason...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0:
	.string "Argh! Not again! Why do these Abra keep\n"
	.string "teleporting away!?\p"
	.string "Time to take my frustration on you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1:
	.string "Mrgrgrgr...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2:
	.string "I'm sorry. It was rude of me to subject\n"
	.string "you to my anger.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0:
	.string "Phew, we finally managed to get rid of\n"
	.string "that pack of wild Mightyena...\p"
	.string "The leader of the pack was especially\n"
	.string "vicious and aggressive.\p"
	.string "I've never seen anything like it,\n"
	.string "especially around these parts.\p"
	.string "When it ran off, the other members of\n"
	.string "its pack followed suit.\p"
	.string "I hope no one is in danger. Please be\n"
	.string "extra careful when traveling!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0:
	.string "CENTRAL ORANNA PATH\n"
	.string "MAPLEGROVE{RIGHT_ARROW}$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign_Text_0:
	.string "Hi! I'm a sentient sign. Below me is a\n"
	.string "hidden grotto!\p"
	.string "Hidden grottoes can sometimes have\n"
	.string "items or even special Pokémon!\p"
	.string "Don't worry if you don't find anything.\n"
	.string "You can always check back tomorrow!\p"
	.string "- Billy The Board (Not a Pokémon)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0:
	.string "Linoone! Use slash!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0:
	.string "Watch out, Ariados!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_0:
	.string "Wow! You beat every other trainer on\n"
	.string "this path!\p"
	.string "As a reward, I'll give you this ultra rare\n"
	.string "Petaya berry!\p"
	.string "...but only if you can beat me in a\n"
	.string "battle! Are you ready?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_1:
	.string "GG! You won!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_2:
	.string "Well, a deal's a deal! I pass this berry\n"
	.string "onto you, as well as the title of\l"
	.string "Central Oranna Path's Path Master!\p"
	.string "It's kind of mouthful, I know.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_3:
	.string "Okay. Let me know when you are\n"
	.string "prepared!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_4:
	.string "With skills like that, I've no doubt\n"
	.string "you'll be ready to take on Ruka!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_5:
	.string "Greetings, trainer! I am what's known as\n"
	.string "a Path Master!\p"
	.string "If you manage to defeat all the other\n"
	.string "trainers on this path, return to me!$"
