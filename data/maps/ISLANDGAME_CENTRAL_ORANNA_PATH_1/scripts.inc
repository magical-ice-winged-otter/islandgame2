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
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
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
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0
	closemessage
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
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_1, MSGBOX_NPC
ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1:
	closemessage
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_3:
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0
	goto ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_1


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_1_Trigger_MightyenaTooDangerous_Text_0:
	.string "Hey, its too dangerous to go any\n"
	.string "further! Come back later, we can handle\l"
	.string "this!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_0:
	.string "It's a lot of walking to get to\n"
	.string "Tidalcove. Let's battle instead!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC1_Text_1:
	.string "Well, good luck with the rest of your\n"
	.string "trip!$"

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
	.string "What's that? You don't care about\n"
	.string "bugs?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC3_Text_2:
	.string "I bet there are all sorts of cool bugs\n"
	.string "here in Central Oranna...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_0:
	.string "I don't know if I'm ready for this\n"
	.string "wildness yet, but I want to grow\l"
	.string "stronger! Let's train!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_1:
	.string "Thanks for the battle!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Battle_NPC4_Text_2:
	.string "It's ok to lose a couple times. Life is\n"
	.string "more of a marathon than a sprint!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_0:
	.string "We finally managed to subdue the\n"
	.string "Mightyena from earlier! Be extra\l"
	.string "careful on central path today...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceRanger_Text_1:
	.string "These Mightyena are blocking the path!\p"
	.string "I'm trying my best to clear them out,\n"
	.string "come back later.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_1_Interact_EntranceSign_Text_0:
	.string "CENTRAL ORANNA PATH\n"
	.string "MAPLEGROVE -->$"
