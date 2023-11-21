ISLANDGAME_ROSEVALE_INN_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxy 2, 18, 6
	setobjectxy 3, 11, 2
	setobjectxy 1, 14, 5
	setobjectxy 4, 3, 4
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_0, MSGBOX_NPC
	return


ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister::
	lock
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0, MSGBOX_NPC
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_ROSEVALE_INN_Interact_Marill::
	lock
	faceplayer
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Marill_Text_0, MSGBOX_NPC
	applymovement 5, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_ROSEVALE_INN_Interact_Arthur::
	lock
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_Arthur_3
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_Arthur_1:
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_3:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0
	closemessage
	goto ISLANDGAME_ROSEVALE_INN_Interact_Arthur_1


ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad::
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_2
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1, MSGBOX_NPC
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_2:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0
	closemessage
	return


ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_0:
	.string "{COLOR GREEN}Arthur's Mom: If you ever need\n"
	.string "anything, just let us know!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0:
	.string "{COLOR GREEN}Arthur's Sister: My Marill is the\n"
	.string "bestest Pokémon ever!$"

ISLANDGAME_ROSEVALE_INN_Interact_Marill_Text_0:
	.string "Marill! (Thanks for saving me!)$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Why can't I take on the\n"
	.string "Mariyama Gym Challenge? It's not fair!$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1:
	.string "{COLOR GREEN}Arthur: Hey! I'm getting way stronger.\n"
	.string "We'll battle again soon!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0:
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}After recklessly running\n"
	.string "off to Mt. Aurora like that? How can I\l"
	.string "trust you to travel across the isles?$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1:
	.string "{COLOR GREEN}Arthur's Dad: Arthur has been working\n"
	.string "really hard lately.\p"
	.string "You're a great influence, {PLAYER}.$"
