ISLANDGAME_ROSEVALE_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_Interact_EntranceSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_InnSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_AuroraPathSign::
	msgbox ISLANDGAME_ROSEVALE_Interact_AuroraPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ROSEVALE_Interact_ArthurSister::
	switch VAR_ROSEVALE_STATE
	case 0, ISLANDGAME_ROSEVALE_Interact_ArthurSister_2
	case 1, ISLANDGAME_ROSEVALE_Interact_ArthurSister_3
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_1
	return

ISLANDGAME_ROSEVALE_Interact_ArthurSister_2:
	msgbox Text_ArthurSister_PleaseHelp, MSGBOX_NPC
	setvar VAR_ROSEVALE_STATE, 1
	return

ISLANDGAME_ROSEVALE_Interact_ArthurSister_3:
	msgbox ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0
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
	addobject 3
	setobjectxy 3, 30, 13
	applymovement 3, Movement_ArthurSister_RunUpToPath
	waitmovement 3
	msgbox Text_ArthurSister_PleaseHelp, MSGBOX_NPC
	setvar VAR_ROSEVALE_STATE, 1
	return


ISLANDGAME_ROSEVALE_Interact_EntranceSign_Text_0:
	.string "Welcome to Rosevale!$"

ISLANDGAME_ROSEVALE_Interact_InnSign_Text_0:
	.string "ROSEVALE INN$"

ISLANDGAME_ROSEVALE_Interact_AuroraPathSign_Text_0:
	.string "Mt. Aurora Path$"

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_0:
	.string "I'm scared. Is everything going to be\n"
	.string "ok?$"

ISLANDGAME_ROSEVALE_Interact_ArthurSister_Text_1:
	.string "Thanks for saving the day!$"

Text_ArthurSister_PleaseHelp::
	.string "Please, you have to help! Someone stole\n"
	.string "my Marill and my brother chased them! I\l"
	.string "don't want anyone to get hurt...$"
