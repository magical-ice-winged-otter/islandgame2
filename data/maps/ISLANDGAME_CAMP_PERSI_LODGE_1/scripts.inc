ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_ScoutmasterTalk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC1Talk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC2Talk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC3Talk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4::
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC4Talk, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV::
	lock
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Text_0:
	.string "GET YOUR BIG FAT HEAD OUT OF THE\n"
	.string "FREAKING WAY!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_ScoutmasterTalk::
	.string "{COLOR DARK_GRAY}I sent Hanzo to clean up the camp tree\n"
	.string "house hours ago.\p"
	.string "{COLOR DARK_GRAY}What could be taking him so long!? He\n"
	.string "better not be horsing around with that\l"
	.string "machete in there like last time...\p"
	.string "{COLOR DARK_GRAY}-sigh- I don't get paid enough for this.\n"
	.string "This is a CAMP, not a DAYCARE!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC1Talk::
	.string "{COLOR DARK_GRAY}Give me the controller! The scoutmaster\n"
	.string "said it's MY turn now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC2Talk::
	.string "{COLOR DARK_GRAY}Quit bothering me! I'm in an intense\n"
	.string "game right now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC3Talk::
	.string "{COLOR DARK_GRAY}Dude stop spamming that move!!! -.-$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_NPC4Talk::
	.string "{COLOR DARK_GRAY}We only brought 2 controllers...\p"
	.string "So I get to take over for whoever\n"
	.string "loses!$"
