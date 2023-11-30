ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC::
	lock
	goto_if_unset FLAG_CAMP_PERSI_SNACK_THIEF_BUSTED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_2
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1:
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_2:
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0
	playse SE_PIN
	applymovement 1, ExclaimFacePlayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_NPCTalk
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_1


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll::
	lock
	goto_if_unset FLAG_CAMP_PERSI_SNACK_THIEF_BUSTED, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_2
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_1
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_1:
GulpinDollInspect_End:
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_2:
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_GulpinDollInspect, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_6
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_5:
	giveitem ITEM_LAVA_COOKIE, 3
	giveitem ITEM_RAGE_CANDY_BAR, 3
	setflag FLAG_CAMP_PERSI_SNACK_THIEF_BUSTED
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_6:
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_0
	goto GulpinDollInspect_End
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_5


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_0:
	.string "I can't believe those kids didn't see me\n"
	.string "swipe those cookies and candy bars!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_NPC_Text_1:
	.string "I'm sorry... My mommy doesn't let me have\n"
	.string "sweets, so I couldn't help myself.\p"
	.string "Please don't tell on me!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_0:
	.string "Wow. Really? You're gonna let him get\n"
	.string "away with it?$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_EventScript_GulpinDoll_Text_1:
	.string "{COLOR RED}(It looks like a regular old Guplin doll.)$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_NPCTalk::
	.string "W-Where did you come from? I was just\n"
	.string "kidding! I don't have anything on me!\p"
	.string "There's nothing in this room either, so\n"
	.string "go away!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_GulpinDollInspect::
	.string "{COLOR RED}(It looks like a regular old Guplin doll.)\p"
	.string "{COLOR RED}(Huh? Instead of stuffing, there's a\n"
	.string "bunch of smuggled goods inside of it.)\p"
	.string "{COLOR DARK_GRAY}Take them?$"
