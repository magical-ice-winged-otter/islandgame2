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
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_0, MSGBOX_NPC
	return


ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister::
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0, MSGBOX_NPC
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
	.string "Thanks for helping our family out\n"
	.string "earlier.\p"
	.string "If there's ever a way we can help you,\n"
	.string "let us know.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0:
	.string "My Marill is the best Pokemon ever!$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0:
	.string "Why can't I go to the festival\n"
	.string "tournament?\p"
	.string "It's not fair!$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1:
	.string "Hey! I'm getting way stronger, you know.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0:
	.string "Arthur, you know why you can't go to the\n"
	.string "festival.\p"
	.string "You were too reckless yesterday,\n"
	.string "running into Mt. Aurora like that.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1:
	.string "Arthur has been working really hard\n"
	.string "lately.\p"
	.string "Thanks for motivating him.$"
