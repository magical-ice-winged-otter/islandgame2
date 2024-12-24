ISLANDGAME_CAMP_PERSI_LODGE_2_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC1::
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC1Talk
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2::
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_GIRL_SCOUT, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_2
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_1
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	random 7
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 1, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_6
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 2, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_7
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 3, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_8
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 4, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_9
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 5, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_10
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	case 6, ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_11
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_MOON_BALL
ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4:
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	setflag FLAG_DAILY_PERSI_GIRL_SCOUT
# 41 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_2:
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_0
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_6:
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_HEAVY_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_7:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LURE_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_8:
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_FRIEND_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_9:
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LOVE_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_10:
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_LEVEL_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_11:
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	giveitem ITEM_FAST_BALL
	goto ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_4


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC3::
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk
# 49 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_Doll::
# 60 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 61 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_0:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "If you want another one, come back\n"
	.string "tomorrow! :D$"

ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2_Text_1:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I made an extra one of these during\n"
	.string "arts and crafts! You can have it!$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC1Talk::
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I hope Scoutmaster Lumpus is doing\n"
	.string "alright. Those boys can be so rowdy.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk::
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "The boys are so lucky to have a game\n"
	.string "console. I wanted to get one for our\l"
	.string "cabin too, but I got outvoted by\l"
	.string "everyone else.\p"
	.string "So now we just have a stupid kitchen in\n"
	.string "here.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract::
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "{COLOR RED}(It's a doll of a Chikorita. It looks\n"
	.string "neglected.)$"
