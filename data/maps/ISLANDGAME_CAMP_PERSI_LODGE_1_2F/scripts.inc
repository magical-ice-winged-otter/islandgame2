ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC::
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	lock
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_SNACK_THIEF_BUSTED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_2
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_2:
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_6
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_5:
# 15 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	faceplayer
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_NPCTalk
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_6:
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	playse SE_PIN
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	applymovement 1, ExclaimFacePlayer
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_5


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll::
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	lock
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_SNACK_THIEF_BUSTED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_4
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_3:
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_1
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_1:
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
GulpinDollInspect_End:
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_2:
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_GulpinDollInspect, MSGBOX_YESNO
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_8
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_7:
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 3
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR, 3
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setflag FLAG_CAMP_PERSI_SNACK_THIEF_BUSTED
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_4:
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_2
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_3

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_8:
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_0
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	goto GulpinDollInspect_End
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_7


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0:
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I can't believe those kids didn't see me\n"
	.string "swipe those cookies and candy bars!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1:
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I'm sorry... My mommy doesn't let me have\n"
	.string "sweets, so I couldn't help myself.\p"
	.string "Please don't tell on me!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_0:
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Wow. Really? You're gonna let him get\n"
	.string "away with it?$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_1:
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "{COLOR RED}(It looks like a regular old Guplin doll.)$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_NPCTalk::
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "W-Where did you come from? I was just\n"
	.string "kidding! I don't have anything on me!\p"
	.string "There's nothing in this room either, so\n"
	.string "go away!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_GulpinDollInspect::
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "{COLOR RED}(It looks like a regular old Guplin doll.)\p"
	.string "{COLOR RED}(Huh? Instead of stuffing, there's a\n"
	.string "bunch of smuggled goods inside of it.)\p"
	.string "{COLOR DARK_GRAY}Take them?$"
