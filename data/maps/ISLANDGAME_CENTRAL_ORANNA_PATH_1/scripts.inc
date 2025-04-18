ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts::
# 17 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 19 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	case 4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 21 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 4, 0, 55
# 22 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 5, 0, 55
# 23 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 6, 0, 55
# 24 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 1, 41, 38
# 25 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 3, 0, 55
# 26 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 2, 0, 55
# 27 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 14, 0, 55
# 28 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 15, 0, 55
# 29 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 16, 0, 55
# 30 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return


# 35 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
Movement_PlayerPushBack:
# 36 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	walk_down
	step_end

# 39 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
Movement_MightyenaGrowl:
# 40 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	jump_in_place_down
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous::
# 44 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_NORMAL
# 46 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 4, Movement_MightyenaGrowl
# 47 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 48 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmoncry
# 49 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	playse SE_PIN
# 50 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 51 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 52 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 53 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 54 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_Delay32
# 55 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
# 56 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	closemessage
# 57 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 58 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 59 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerPushBack
# 60 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 61 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1::
# 65 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1
# 69 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2::
# 73 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC2, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3::
# 81 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC3, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4::
# 89 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1
# 93 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger::
# 97 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 98 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	case 4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	faceplayer
# 111 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
# 112 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 113 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1:
# 115 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	closemessage
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3:
# 99 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	faceplayer
# 100 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign::
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign::
# 123 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1::
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 128 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0
# 129 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2::
# 133 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 134 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0
# 135 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster::
# 139 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 140 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	faceplayer
# 142 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC1
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_4
ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1:
# 174 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_PATHMASTER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_23
# 180 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_5
ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_22:
# 186 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
Coranna_PathMaster_End:
# 187 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	closemessage
# 188 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_2:
# 153 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_0, MSGBOX_YESNO
# 158 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_26
# 168 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_3
# 171 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	goto Coranna_PathMaster_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_3:
# 144 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC3
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_8
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_4:
# 143 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC2
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_3
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_7:
# 146 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_CAMPER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_12
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_8:
# 145 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC4
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_7
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_11:
# 148 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_BIKER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_16
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_12:
# 147 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_MANIAC
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_11
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_15:
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_MINTY_MEADOWS_5
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_19
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_16:
# 149 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_FISHERMAN
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_15
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_19:
# 151 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_PATHMASTER
	goto_if 0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_2
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_23:
# 175 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_4
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_22

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_26:
# 159 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_no_intro TRAINER_CORANNA_PATHMASTER, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_1
# 160 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_2
# 164 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	giveitem ITEM_PETAYA_BERRY
# 165 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	goto Coranna_PathMaster_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0:
# 55 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Hey! It's too dangerous to go any\n"
	.string "further! Please let us deal with this!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0:
# 66 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Take a look at my darling Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1:
# 67 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Oh dear...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2:
# 69 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Are you headed to Tidalcove? It's a\n"
	.string "fairly long journey ahead. Good luck!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0:
# 74 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "According to all known laws of aviation,\n"
	.string "there's no way that a non-flying type\l"
	.string "Bug Pokémon should be able to fly.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1:
# 75 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "The Bug Pokémon of course, flies \nanyways.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2:
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Bug Pokémon don't care what humans\n"
	.string "think is impossible.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0:
# 82 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "My glasses! Where are my glasses? I\n"
	.string "can't see anything without my glasses!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1:
# 83 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Oh, here they are.{PAUSE 60} They were in my\n pocket the entire time.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2:
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Sorry. I'm kinda forgetful. Umm... What\n"
	.string "was I doing again?\p"
	.string "I knew I came down here for a reason...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0:
# 90 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Argh! Not again! Why do these damn\n"
	.string "Ralts keep teleporting away!?\p"
	.string "Time to take my frustration on you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1:
# 91 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Mrgrgrgr...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2:
# 93 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "I'm sorry. It was rude of me to subject\n"
	.string "you to my anger.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0:
# 102 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
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
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "CENTRAL ORANNA PATH\n"
	.string "MAPLEGROVE{RIGHT_ARROW}$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign_Text_0:
# 123 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Hi! I'm a sentient sign. Below me is a\n"
	.string "hidden grotto!\p"
	.string "Hidden grottoes can sometimes have\n"
	.string "items or even special Pokémon!\p"
	.string "Don't worry if you don't find anything.\n"
	.string "You can always check back tomorrow!\p"
	.string "- Billy The Board (Not a Pokémon)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0:
# 128 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Linoone! Use slash!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0:
# 134 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Watch out, Ariados!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_0:
# 154 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Wow! You beat every other trainer on\n"
	.string "this path!\p"
	.string "As a reward, I'll give you this ultra rare\n"
	.string "Petaya berry!\p"
	.string "...but only if you can beat me in a\n"
	.string "battle! Are you ready?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_1:
# 159 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "GG! You won!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_2:
# 161 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Well, a deal's a deal! I pass this berry\n"
	.string "onto you, as well as the title of Central\l"
	.string "Oranna Path's Path Master!\p"
	.string "It's kind of mouthful, I know.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_3:
# 169 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Okay. Let me know when you are\n"
	.string "prepared!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_4:
# 176 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "With skills like that, I've no doubt\n"
	.string "you'll be ready to take on Ruka!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_5:
# 181 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Greetings, trainer! I am what's known as\n"
	.string "a Path Master!\p"
	.string "If you manage to defeat all the other\n"
	.string "trainers on this path, return to me!$"
