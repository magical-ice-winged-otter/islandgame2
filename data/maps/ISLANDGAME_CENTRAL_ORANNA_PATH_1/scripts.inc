ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts::
# 21 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 23 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
# 24 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
# 26 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 27 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	case 4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 28 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 29 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 4, 0, 55
# 30 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 5, 0, 55
# 31 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 6, 0, 55
# 32 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 1, 41, 38
# 33 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 3, 0, 55
# 34 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 2, 0, 55
# 35 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 14, 0, 55
# 36 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 15, 0, 55
# 37 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectxyperm 16, 0, 55
# 38 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return


# 43 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
Movement_PlayerPushBack:
# 44 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
Movement_MightyenaGrowl:
# 48 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	jump_in_place_down
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous::
# 52 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 53 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	playmoncry SPECIES_MIGHTYENA, CRY_MODE_NORMAL
# 54 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 4, Movement_MightyenaGrowl
# 55 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 56 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmoncry
# 57 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	playse SE_PIN
# 58 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 59 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 60 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 61 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 62 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_Delay32
# 63 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
# 64 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	closemessage
# 65 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 66 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 67 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerPushBack
# 68 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
# 69 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1::
# 73 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2::
# 81 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC2, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3::
# 89 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC3, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1
# 93 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4::
# 97 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_single TRAINER_CORANNA_1_NPC4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger::
# 105 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	switch VAR_MINTY_MEADOWS_STATE
# 106 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	case 4, ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3
# 118 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	faceplayer
# 119 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
# 120 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 121 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	waitmovement 0
ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1:
# 123 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	closemessage
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3:
# 107 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	faceplayer
# 108 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign::
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign::
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1::
# 135 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0
# 137 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2::
# 141 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 142 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0
# 143 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster::
# 147 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	lock
# 148 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	faceplayer
# 150 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC1
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_4
ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1:
# 182 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_PATHMASTER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_23
# 188 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_5
ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_22:
# 194 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
Coranna_PathMaster_End:
# 195 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	closemessage
# 196 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	release
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_2:
# 161 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_0, MSGBOX_YESNO
# 166 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_26
# 176 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_3
# 179 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	goto Coranna_PathMaster_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_3:
# 152 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC3
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_8
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_4:
# 151 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC2
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_3
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_7:
# 154 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_CAMPER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_12
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_8:
# 153 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_1_NPC4
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_7
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_11:
# 156 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_BIKER
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_16
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_12:
# 155 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_MANIAC
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_11
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_15:
# 158 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_MINTY_MEADOWS_5
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_19
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_16:
# 157 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_2_FISHERMAN
	goto_if 1, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_15
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_19:
# 159 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	checktrainerflag TRAINER_CORANNA_PATHMASTER
	goto_if 0, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_2
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_23:
# 183 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_4
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_22

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_26:
# 167 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	trainerbattle_no_intro TRAINER_CORANNA_PATHMASTER, ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_1
# 168 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_2
# 172 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	giveitem ITEM_PETAYA_BERRY
# 173 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	goto Coranna_PathMaster_End
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0:
# 63 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Hey! It's too dangerous to go any\n"
	.string "further! Please let us deal with this!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0:
# 74 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Take a look at my darling Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1:
# 75 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Oh dear...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2:
# 77 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Are you headed to Tidalcove? It's a\n"
	.string "fairly long journey ahead. Good luck!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0:
# 82 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "According to all known laws of aviation,\n"
	.string "there's no way that a non-flying type\l"
	.string "Bug Pokémon should be able to fly.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1:
# 83 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "The Bug Pokémon of course, flies \nanyways.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2:
# 85 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Bug Pokémon don't care what humans\n"
	.string "think is impossible.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0:
# 90 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "My glasses! Where are my glasses? I\n"
	.string "can't see anything without my glasses!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1:
# 91 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Oh, here they are.{PAUSE 60} They were in my\n pocket the entire time.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2:
# 93 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Sorry. I'm kinda forgetful. Umm... What\n"
	.string "was I doing again?\p"
	.string "I knew I came down here for a reason...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0:
# 98 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Argh! Not again! Why do these damn\n"
	.string "Ralts keep teleporting away!?\p"
	.string "Time to take my frustration on you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1:
# 99 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Mrgrgrgr...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2:
# 101 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "I'm sorry. It was rude of me to subject\n"
	.string "you to my anger.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0:
# 110 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
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
# 127 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "CENTRAL ORANNA PATH\n"
	.string "MAPLEGROVE{RIGHT_ARROW}$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_GrottoSign_Text_0:
# 131 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Hi! I'm a sentient sign. Below me is a\n"
	.string "hidden grotto!\p"
	.string "Hidden grottoes can sometimes have\n"
	.string "items or even special Pokémon!\p"
	.string "Don't worry if you don't find anything.\n"
	.string "You can always check back tomorrow!\p"
	.string "- Billy The Board (Not a Pokémon)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0:
# 136 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Linoone! Use slash!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0:
# 142 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Watch out, Ariados!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_0:
# 162 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Wow! You beat every other trainer on\n"
	.string "this path!\p"
	.string "As a reward, I'll give you this ultra rare\n"
	.string "Petaya berry!\p"
	.string "...but only if you can beat me in a\n"
	.string "battle! Are you ready?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_1:
# 167 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "GG! You won!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_2:
# 169 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Well, a deal's a deal! I pass this berry\n"
	.string "onto you, as well as the title of Central\l"
	.string "Oranna Path's Path Master!\p"
	.string "It's kind of mouthful, I know.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_3:
# 177 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Okay. Let me know when you are\n"
	.string "prepared!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_4:
# 184 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "With skills like that, I've no doubt\n"
	.string "you'll be ready to take on Ruka!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_RouteMaster_Text_5:
# 189 "data/maps/ISLANDGAME_CENTRAL_ORANNA_PATH_1/scripts.pory"
	.string "Greetings, trainer! I am what's known as\n"
	.string "a Path Master!\p"
	.string "If you manage to defeat all the other\n"
	.string "trainers on this path, return to me!$"
