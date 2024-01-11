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
	map_script_2 VAR_ICE_STEP_COUNT, 67, UnlockNextStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, FallThroughIce
	.2byte 0


ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor::
	lock
	faceplayer
	goto_if_unset FLAG_TIDALCOVE_GYM_SPONSOR_TALK, ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_2
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_1
ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_1:
	release
	return

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_2:
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_0
	giveitem ITEM_FRESH_WATER
	setflag FLAG_TIDALCOVE_GYM_SPONSOR_TALK
	goto ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_1


ISLANDGAME_TIDALCOVE_GYM_Trainer1::
	trainerbattle_single TRAINER_TIDALCOVE_GYM_1, ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_1
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Trainer2::
	trainerbattle_single TRAINER_TIDALCOVE_GYM_2, ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_1
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Trainer3::
	trainerbattle_single TRAINER_TIDALCOVE_GYM_3, ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_1
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Trainer4::
	trainerbattle_single TRAINER_TIDALCOVE_GYM_4, ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_1
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka::
	checktrainerflag TRAINER_TIDALCOVE_GYM_RUKA
	goto_if 0, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_1
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_4, MSGBOX_NPC
	return

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_1:
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_0, MSGBOX_NPC
	closemessage
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_1
	trainerbattle_single TRAINER_TIDALCOVE_GYM_RUKA, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_2, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_3, RukaDefeated, NO_MUSIC
	return


Movement_Surprised:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

RukaDefeated:
	message RukaDefeated_Text_0
	waitmessage
	setflag FLAG_TIDALCOVE_RUKA_DEFEATED
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RukaDefeated_Text_1, MSGBOX_NPC
	giveitem ITEM_TM07
	msgbox RukaDefeated_Text_2
	giveitem ITEM_BIKE_VOUCHER
	msgbox RukaDefeated_Text_3
	closemessage
	return


CheckSetStairMetatiles:
	compare VAR_ICE_STEP_COUNT, 8
	goto_if_ge CheckSetStairMetatiles_2
CheckSetStairMetatiles_1:
	compare VAR_ICE_STEP_COUNT, 28
	goto_if_ge CheckSetStairMetatiles_5
CheckSetStairMetatiles_4:
	compare VAR_ICE_STEP_COUNT, 67
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
	.string "Welcome, challenger! Sorry we couldn't\n"
	.string "get to your request yesterday.\p"
	.string "Ruka gets so many of them since she's\n"
	.string "the first of the three gym leaders.\p"
	.string "Before you can face her though, you'll\n"
	.string "have to prove your worthy...\p"
	.string "...by ascending to the top of the gym! Or\n"
	.string "as I like to refer to it as, climbing Mt.\l"
	.string "Aurora! Quite fitting, isn't it?\p"
	.string "In order to climb each floor, you'll have\n"
	.string "to step on each of the ice tiles once!\p"
	.string "Be careful though... the ice is very\n"
	.string "thin, and stepping on the same one\l"
	.string "again will result in...\p"
	.string "Certain demise!\p"
	.string "Haha, I'm just kidding. You'll simply fall\n"
	.string "down a chute that'll transport you out\l"
	.string "of the gym safely, like a fun slide!\p"
	.string "Anyways, good luck, and remember to\n"
	.string "have fun!\p"
	.string "Oh, and take one of these too! Everyone\n"
	.string "gets one for participating!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_1:
	.string "Good luck, and remember to have fun!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_0:
	.string "This is your first gym challenge, huh?\n"
	.string "If you're expecting to breeze right\l"
	.string "through, you're in for a rude\l"
	.string "awakening!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_1:
	.string "You're not half-bad!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_2:
	.string "You've made it past the first level,\n"
	.string "trainer!\p"
	.string "But do you have what it takes to stand\n"
	.string "before Tidalcove's Precious Pearl?\p"
	.string "Only one way to find out...$"

ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_0:
	.string "Freeze! Get it? 'Cause like, I stopped\n"
	.string "you, and we're in an ice-themed gym?$"

ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_1:
	.string "Not a fan of puns, I see...$"

ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_2:
	.string "I hate being in the sweltering sun, so\n"
	.string "being a gym trainer at Tidalcove was\l"
	.string "definitely the right play for me!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_0:
	.string "You're almost at the peak, but I have to\n"
	.string "stop you here. My apologies.$"

ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_1:
	.string "Your Pokémon fight with elegance.$"

ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_2:
	.string "Ruka is my close friend, so I offer to\n"
	.string "help her out at her gym time to time.\p"
	.string "$"

ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_0:
	.string "I see you staring at me with a confused\n"
	.string "look on your face!\p"
	.string "You're wondering why an older woman\n"
	.string "such as myself is here, aren't you!?\p"
	.string "I'll have you know, I used to be a\n"
	.string "fashion model in my prime!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_1:
	.string "I used to rule the world...$"

ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_2:
	.string "Oh.. how I long for the days where I was\n"
	.string "on the cover of every magazine...$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_0:
	.string "You've finally reached the top,\n"
	.string "challenger! Congrats on getting this\l"
	.string "far!\p"
	.string "I'm Ruka, Tidalcove's Gym Leader! But\n"
	.string "I'm sure you knew that already. My face\l"
	.string "is on everything here after all, aha.\p"
	.string "Here, your Pokémon must be tired from\n"
	.string "venturing up here. Let me heal them up.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_1:
	.string "You know, it's kind of surreal. For your\n"
	.string "reputation to precede you.\p"
	.string "For everyone to know everything about\n"
	.string "you.\p"
	.string "I've met so many trainers who knew\n"
	.string "every single little detail about me.\p"
	.string "My favorite Pokémon, my battle style,\n"
	.string "what commercials and billboards I've\l"
	.string "been on, what competitions I've been a\l"
	.string "part of.\p"
	.string "Some even know exact my height, weight,\n"
	.string "and body measurements by heart...\p"
	.string "Meanwhile, I haven't even learned what\n"
	.string "their name is yet. Isn't that crazy?\p"
	.string "Personally, the best way for me to get\n"
	.string "to know a trainer is through a battle.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_2:
	.string "So please, challenger. Show me\n"
	.string "everything about you, right here!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_3:
	.string "Ah... It seems that I've learned more\n"
	.string "than enough about you.\p"
	.string "Your ability to communicate with your\n"
	.string "Pokémon... It's almost telepathic!\p"
	.string "You're quite the special trainer, aren't\n"
	.string "you, {PLAYER}?\p"
	.string "For your victory over me, I reward you\n"
	.string "with the Tidalcove Badge!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_4:
	.string "{COLOR GREEN}Ruka: {COLOR DARK_GRAY}-yawn- Being a gym leader really\n"
	.string "drains all the energy away from me.\p"
	.string "I think I'll go for a relaxing swim over\n"
	.string "to Applevine after work.$"

RukaDefeated_Text_0:
	.string "You received the Tidalcove Badge!$"

RukaDefeated_Text_1:
	.string "{COLOR GREEN}Ruka: {COLOR DARK_GRAY}That was an amazing match,\n"
	.string "{PLAYER}!\p"
	.string "It was enough to make me sweat in this\n"
	.string "refrigerator of a gym! Haha.\p"
	.string "Oh, on top of your shiny new badge, take\n"
	.string "this TM as well! It's got the Ruka seal\l"
	.string "of approval autographed on it!$"

RukaDefeated_Text_2:
	.string "Inside that TM is my signature move,\n"
	.string "Hail! With it, you can unleash the true\l"
	.string "beauty of ice Pokemon!\p"
	.string "Now that you've completed the first\n"
	.string "step towards the Mariyama Gym\l"
	.string "Challenge, I present you with this!$"

RukaDefeated_Text_3:
	.string "That right there will get you a free\n"
	.string "bike over at Randy's bike shop!\p"
	.string "You'll need one in order to ride on the\n"
	.string "Seaside Bike Path to get to Lumine\l"
	.string "Island, where your next challenge\l"
	.string "awaits!\p"
	.string "Ah... The end of a gym challenge is\n"
	.string "always so bittersweet.\p"
	.string "Right as I've just begun to get to know\n"
	.string "you, I have to bid you farewell.\p"
	.string "But such is the life of a gym leader...$"
