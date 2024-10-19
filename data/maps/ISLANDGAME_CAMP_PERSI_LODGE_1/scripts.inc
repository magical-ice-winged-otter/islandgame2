ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster::
# 4 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_ScoutmasterTalk
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1::
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC1Talk
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2::
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC2Talk
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3::
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC3Talk
# 45 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4::
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC4Talk, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV::
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 69 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 72 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Text_0
# 75 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	closemessage
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 77 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Text_0:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "GET YOUR BIG FAT HEAD OUT OF THE\n"
	.string "FREAKING WAY!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_ScoutmasterTalk::
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}I sent Hanzo to clean up the camp tree\n"
	.string "house hours ago.\p"
	.string "{COLOR DARK_GRAY}What could be taking him so long!? He\n"
	.string "better not be horsing around with that\l"
	.string "machete in there like last time...\p"
	.string "{COLOR DARK_GRAY}-sigh- I don't get paid enough for this.\n"
	.string "This is a CAMP, not a DAYCARE!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC1Talk::
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Give me the controller! The scoutmaster\n"
	.string "said it's MY turn now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC2Talk::
# 36 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Quit bothering me! I'm in an intense\n"
	.string "game right now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC3Talk::
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Dude stop spamming that move!!! -.-$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC4Talk::
# 58 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}We only brought 2 controllers...\p"
	.string "So I get to take over for whoever\n"
	.string "loses!$"
