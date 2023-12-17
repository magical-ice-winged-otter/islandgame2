ISLANDGAME_ROSEVALE_INN_2F_ROOM2_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC::
	lock
	faceplayer
	goto_if_unset FLAG_ROSEVALE_TM_GIFT, ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_2
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_3
ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_1:
	release
	return

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_2:
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_5
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_2
	goto ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_1

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_5:
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_1
	giveitem ITEM_TM_ATTRACT
	setflag FLAG_ROSEVALE_TM_GIFT
	goto ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_1


ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_0:
	.string "Am I attractive?$"

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_1:
	.string "Aww, thank you! For being so\n"
	.string "thoughtful, I'll give you this TM!$"

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_2:
	.string "How rude! -smack- That'll teach you to\n"
	.string "say that to a cute girl like me!$"

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_3:
	.string "Don't try and use that move on me,\n"
	.string "you're not my type. -giggle-$"
