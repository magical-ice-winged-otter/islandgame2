ISLANDGAME_TIDALCOVE_GYM_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_ICE_STEP_COUNT, 1
	return

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	return

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_LOAD:
	call CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	return

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ICE_STEP_COUNT, 8, UnlockNextStairs
	map_script_2 VAR_ICE_STEP_COUNT, 28, UnlockNextStairs
	map_script_2 VAR_ICE_STEP_COUNT, 66, UnlockNextStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, FallThroughIce
	.2byte 0


ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor::
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka::
	checktrainerflag TRAINER_LEADER_RUKA
	goto_if 0, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_1
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_3, MSGBOX_NPC
	return

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_1:
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_0, MSGBOX_NPC
	trainerbattle_single TRAINER_LEADER_RUKA, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_1, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_2, RukaDefeated, NO_MUSIC
	return


Movement_Surprised:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

RukaDefeated:
	msgbox RukaDefeated_Text_0, MSGBOX_NPC
	message RukaDefeated_Text_1
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE01_GET
	msgbox RukaDefeated_Text_2, MSGBOX_NPC
	giveitem ITEM_TM07
	msgbox RukaDefeated_Text_3, MSGBOX_NPC
	applymovement 0, Movement_Surprised
	waitmovement 0
	msgbox RukaDefeated_Text_4, MSGBOX_NPC
	giveitem ITEM_BIKE_VOUCHER
	closemessage
	return


CheckSetStairMetatiles:
	compare VAR_ICE_STEP_COUNT, 8
	goto_if_ge CheckSetStairMetatiles_2
CheckSetStairMetatiles_1:
	compare VAR_ICE_STEP_COUNT, 28
	goto_if_ge CheckSetStairMetatiles_5
CheckSetStairMetatiles_4:
	compare VAR_ICE_STEP_COUNT, 66
	goto_if_ge CheckSetStairMetatiles_7
	return

CheckSetStairMetatiles_2:
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
	goto CheckSetStairMetatiles_1

CheckSetStairMetatiles_5:
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
	goto CheckSetStairMetatiles_4

CheckSetStairMetatiles_7:
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
	return


Movement_PlayerFall:
	set_invisible
	step_end

FallThroughIce:
	lock
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFall
	waitmovement 0
	playse SE_FALL
	delay 60
	warp MAP_ISLANDGAME_TIDALCOVE, 25, 13
	waitstate
	release
	return


UnlockNextStairs:
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call CheckSetStairMetatiles
	special DrawWholeMapView
	return


ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_0:
	.string "Welcome, Challenger! You must climb the\n"
	.string "slope to fight Ruka.\p"
	.string "If you step on ice too much, it'll break!\p"
	.string "But don't worry, there is a chute\n"
	.string "underneath that will carry you safely\l"
	.string "to the back.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_0:
	.string "Hi there! You made it all the way past\n"
	.string "that ice, good job!\p"
	.string "Now, let's see what you can do in battle.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_1:
	.string "Let's go!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_2:
	.string "That was fun!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_3:
	.string "Lumine is a wonderful island.\p"
	.string "I'm sure you'll find lots of cool stuff\n"
	.string "to do over there!$"

RukaDefeated_Text_0:
	.string "Wow, that doesn't happen very often!\n"
	.string "Congrats on beating me!\p"
	.string "To remember your victory: take this!$"

RukaDefeated_Text_1:
	.string "You received the Tidalcove Badge!$"

RukaDefeated_Text_2:
	.string "Also, take this with you:$"

RukaDefeated_Text_3:
	.string "It's my favorite move HAIL!\n"
	.string "People look down on it, but it can do\l"
	.string "some cool stuff!$"

RukaDefeated_Text_4:
	.string "What's that?\n"
	.string "You're trying to travel to Lumine\l"
	.string "Island?\p"
	.string "I personally love the swim over there,\n"
	.string "but it is pretty hard without a\l"
	.string "Pokemon...\p"
	.string "I guess a bike the second best way!\n"
	.string "Luckily, we have an amazing bike shop\l"
	.string "here in Tidalcove.\p"
	.string "Here, take a voucher!\n"
	.string "This gets you a free bike.\p"
	.string "Yeah, I won it from a raffle a while ago,\n"
	.string "but never had a use for it...$"
