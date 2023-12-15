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
	setobjectxyperm 1, 46, 35
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


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0:
	.string "Hey! It's too dangerous to go any\n"
	.string "further! Please let us deal with this!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0:
	.string "It's a lot of walking to get to\n"
	.string "Tidalcove. Let's battle instead!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1:
	.string "Well, good luck with the rest of your\ntrip!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_2:
	.string "I heard that the trip is easier with a\n"
	.string "bike.\p"
	.string "But the bike shop is in Tidalcove!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_0:
	.string "There's no mountain that my team and I\n"
	.string "can't climb!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_1:
	.string "Climb higher through failure!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC2_Text_2:
	.string "One day, I'm going to climb Mt. Aurora!\p"
	.string "It'll be hard... but it's the only way to\n"
	.string "know if the rumors are true...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_0:
	.string "Hey! There's only room for one bug\n"
	.string "catcher around here!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_1:
	.string "What's that? You don't care about\nbugs?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2:
	.string "I'm looking for a cool bug around here.\n"
	.string "Have you found it yet?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0:
	.string "I don't think I'm ready for the\n"
	.string "Tidalcove Gym yet, so let's train!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1:
	.string "Thanks for the battle!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2:
	.string "It's okay to lose a couple of times. Life\n"
	.string "is a marathon, not a sprint!$"

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

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger1_Text_0:
	.string "Linoone! Use slash!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_ExtraRanger2_Text_0:
	.string "Watch out, Raticate!$"
