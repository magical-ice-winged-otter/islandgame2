ISLANDGAME_ROSEVALE_INN_2F_ROOM2_MapScripts::
	.byte 0


ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC::
# 4 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	goto_if_unset FLAG_ROSEVALE_TM_GIFT, ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_2
# 20 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_3
ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_1:
# 22 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	release
	return

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_2:
# 7 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_0, MSGBOX_YESNO
# 10 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_5
# 16 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_2
	goto ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_1

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_5:
# 11 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_1
# 12 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	giveitem ITEM_TM_ATTRACT
# 13 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	setflag FLAG_ROSEVALE_TM_GIFT
	goto ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_1


ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_0:
# 8 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	.string "Am I attractive?$"

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_1:
# 11 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	.string "Aww, thank you! For being so\n"
	.string "thoughtful, I'll give you this TM!$"

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_2:
# 16 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	.string "How rude!{PAUSE 60} -smack- {PAUSE 60}That'll teach you to\n"
	.string "say that to a cute girl like me!$"

ISLANDGAME_ROSEVALE_INN_2F_ROOM2_NPC_Text_3:
# 20 "data/maps/ISLANDGAME_ROSEVALE_INN_2F_ROOM2/scripts.pory"
	.string "Don't try and use that move on me,\n"
	.string "you're not my type. {PAUSE 30}-giggle-$"
