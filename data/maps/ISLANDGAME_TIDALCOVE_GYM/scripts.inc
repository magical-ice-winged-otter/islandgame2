ISLANDGAME_TIDALCOVE_GYM_MapScripts::
# 13 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
	return

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_RESUME:
# 17 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	return

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_LOAD:
# 20 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	call CheckSetStairMetatiles
# 21 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
	return

ISLANDGAME_TIDALCOVE_GYM_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, UnlockNextStairs
# 9 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, UnlockNextStairs
# 10 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, UnlockNextStairs
# 11 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, FallThroughIce
	.2byte 0


ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor::
# 26 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	faceplayer
# 28 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_2
# 42 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	goto_if_unset FLAG_TIDALCOVE_GYM_SPONSOR_TALK, ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_7
# 59 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_3
ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_1:
# 62 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	closemessage
# 63 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_2:
# 29 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_0
# 33 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	goto_if_unset FLAG_TIDALCOVE_GYM_SPONSOR_TALK, ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_5
	goto ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_1

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_5:
# 34 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_1
# 37 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 38 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setflag FLAG_TIDALCOVE_GYM_SPONSOR_TALK
	goto ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_1

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_7:
# 43 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_2
# 55 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 56 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setflag FLAG_TIDALCOVE_GYM_SPONSOR_TALK
	goto ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_1


ISLANDGAME_TIDALCOVE_GYM_Trainer1::
# 67 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	trainerbattle_single TRAINER_TIDALCOVE_GYM_1, ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_1
# 71 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Trainer2::
# 75 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	trainerbattle_single TRAINER_TIDALCOVE_GYM_2, ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_1
# 79 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Trainer3::
# 83 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	trainerbattle_single TRAINER_TIDALCOVE_GYM_3, ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_1
# 87 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Trainer4::
# 91 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	trainerbattle_single TRAINER_TIDALCOVE_GYM_4, ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_0, ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_1
# 95 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka::
# 99 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	checktrainerflag TRAINER_TIDALCOVE_GYM_RUKA
	goto_if 0, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_1
# 127 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_4, MSGBOX_NPC
	return

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_1:
# 100 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_ELITE_FOUR, FALSE
# 101 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	lock
# 102 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	faceplayer
# 103 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_0, MSGBOX_NPC
# 108 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	closemessage
# 110 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	playfanfare MUS_HEAL
# 111 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	waitfanfare
# 112 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_1
# 124 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	trainerbattle_single TRAINER_TIDALCOVE_GYM_RUKA, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_2, ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_3, RukaDefeated, NO_MUSIC
	return


# 134 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
Movement_Surprised:
# 135 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	emote_exclamation_mark
# 136 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay_16
# 136 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay_16
# 136 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay_16
# 136 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay_16
	step_end

RukaDefeated:
# 140 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	message RukaDefeated_Text_0
# 141 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	waitmessage
# 142 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setflag FLAG_TIDALCOVE_RUKA_DEFEATED
# 143 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 144 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MARYA_GYM_CHALLENGE, 0
# 145 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 146 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox RukaDefeated_Text_1, MSGBOX_NPC
# 152 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	giveitem ITEM_TM07
# 153 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox RukaDefeated_Text_2
# 158 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	giveitem ITEM_BIKE_VOUCHER
# 160 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	msgbox RukaDefeated_Text_3
# 167 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	closemessage
	return


CheckSetStairMetatiles:
# 172 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 8
	goto_if_ge CheckSetStairMetatiles_2
CheckSetStairMetatiles_1:
# 176 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 28
	goto_if_ge CheckSetStairMetatiles_5
CheckSetStairMetatiles_4:
# 180 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 67
	goto_if_ge CheckSetStairMetatiles_7
	return

CheckSetStairMetatiles_2:
# 173 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 174 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
	goto CheckSetStairMetatiles_1

CheckSetStairMetatiles_5:
# 177 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 178 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
	goto CheckSetStairMetatiles_4

CheckSetStairMetatiles_7:
# 181 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 182 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
	return


# 186 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
Movement_PlayerFall:
# 187 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	set_invisible
	step_end

FallThroughIce:
# 191 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	lock
# 192 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay 20
# 193 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFall
# 194 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	waitmovement 0
# 195 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	playse SE_FALL
# 196 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay 60
# 197 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	warp MAP_ISLANDGAME_TIDALCOVE, 25, 13
# 198 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	waitstate
# 199 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	release
	return


UnlockNextStairs:
# 203 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 204 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	delay 40
# 205 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	playse SE_ICE_STAIRS
# 206 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	call CheckSetStairMetatiles
# 207 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	special DrawWholeMapView
	return


ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_0:
# 30 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "That was a great battle you had with\n"
	.string "Ruka, kid! Good luck on the rest of the\l"
	.string "two gyms of Marya!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_1:
# 35 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Here, I didn't have a chance to give\n"
	.string "this to you earlier. You can take it as a\l"
	.string "little prize for your victory.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_2:
# 44 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
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

ISLANDGAME_TIDALCOVE_GYM_Interact_Sponsor_Text_3:
# 59 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Good luck, and remember to have fun!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_0:
# 68 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "This is your first gym challenge, huh?\n"
	.string "If you're expecting to breeze right\l"
	.string "through, you're in for a rude awakening!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_1:
# 69 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "You're not half-bad!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer1_Text_2:
# 71 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "You've made it past the first level,\n"
	.string "trainer!\p"
	.string "But do you have what it takes to stand\n"
	.string "before Tidalcove's Precious Pearl?\p"
	.string "Only one way to find out...$"

ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_0:
# 76 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Freeze! Get it? 'Cause like, I stopped\n"
	.string "you, and we're in an ice-themed gym?$"

ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_1:
# 77 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Not a fan of puns, I see...$"

ISLANDGAME_TIDALCOVE_GYM_Trainer2_Text_2:
# 79 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "It was “ice” to meet you!\p"
	.string "...Alright I'll stop. My mom says the best\n"
	.string "way to make friends is to make them\l"
	.string "laugh. I guess I need better material.$"

ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_0:
# 84 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "You're almost at the peak, but I have to\n"
	.string "stop you here. My apologies.$"

ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_1:
# 85 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Your Pokémon fight with elegance.$"

ISLANDGAME_TIDALCOVE_GYM_Trainer3_Text_2:
# 87 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Ruka is my close friend, so I offer to\n"
	.string "help her out at her gym time to time.$"

ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_0:
# 92 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "I see you staring at me with a confused\n"
	.string "look on your face!\p"
	.string "You're wondering why an older woman\n"
	.string "such as myself is here, aren't you!?\p"
	.string "I'll have you know, I used to be a\n"
	.string "fashion model in my prime!$"

ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_1:
# 93 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "I used to rule the world...$"

ISLANDGAME_TIDALCOVE_GYM_Trainer4_Text_2:
# 95 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Oh.. how I long for the days where I was\n"
	.string "on the cover of every magazine...$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_0:
# 104 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "You've finally reached the top,\n"
	.string "challenger! Congrats on getting this\l"
	.string "far!\p"
	.string "I'm Ruka, Tidalcove's Gym Leader! But\n"
	.string "I'm sure you knew that already. My face\l"
	.string "is on everything here after all, aha.\p"
	.string "Here, your Pokémon must be tired from\n"
	.string "venturing up here. Let me heal them up.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_1:
# 115 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
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
	.string "Some even know exact my height,weight,\n"
	.string "and body measurements by heart...\p"
	.string "Meanwhile, I haven't even learned what\n"
	.string "their name is yet. Isn't that crazy?\p"
	.string "Personally, the best way for me to get\n"
	.string "to know a trainer is through a battle.$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_2:
# 124 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "So please, challenger.{PAUSE 60} Show me\n"
	.string "everything about you, right here!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_3:
# 124 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Ah...{PAUSE 60} It seems that I've learned more\n"
	.string "than enough about you.\p"
	.string "Your ability to communicate with your\n"
	.string "Pokémon...{PAUSE 60} It's almost telepathic!\p"
	.string "You're quite the special trainer, aren't\n"
	.string "you, {PLAYER}?\p"
	.string "For your victory over me, I reward you\n"
	.string "with the Tidalcove Badge!$"

ISLANDGAME_TIDALCOVE_GYM_Interact_Ruka_Text_4:
# 128 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "{COLOR GREEN}Ruka: {COLOR DARK_GRAY}-yawn-{PAUSE 60} Being a gym leader really\n"
	.string "drains all the energy away from me.\p"
	.string "I think I'll go for a relaxing swim over\n"
	.string "to Applevine after work.$"

RukaDefeated_Text_0:
# 140 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "You received the Tidalcove Badge!$"

RukaDefeated_Text_1:
# 147 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "{COLOR GREEN}Ruka: {COLOR DARK_GRAY}That was an amazing match,\n"
	.string "{PLAYER}!\p"
	.string "It was enough to make me sweat in this\n"
	.string "refrigerator of a gym! Haha.\p"
	.string "Oh, on top of your shiny new badge, take\n"
	.string "this TM as well! It's got the Ruka seal\l"
	.string "of approval autographed on it!$"

RukaDefeated_Text_2:
# 154 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "Inside that TM is my signature move,\n"
	.string "Snowscape! With it, you too can unleash\l"
	.string "the true beauty of ice Pokemon!\p"
	.string "Now that you've completed the first\n"
	.string "step towards the Marya Gym Challenge, I\l"
	.string "present you with this!$"

RukaDefeated_Text_3:
# 161 "data/maps/ISLANDGAME_TIDALCOVE_GYM/scripts.pory"
	.string "That right there will get you a free\n"
	.string "bike over at Randy's bike shop!\p"
	.string "You'll need one in order to ride on the\n"
	.string "Seaside Bike Path to get to Lumine\l"
	.string "Island, where your next challenge\l"
	.string "awaits!\p"
	.string "Ah...{PAUSE 30} The end of a gym challenge is\n"
	.string "always so bittersweet.\p"
	.string "Right as I've just begun to get to know\n"
	.string "you, I have to bid you farewell.\p"
	.string "But such is the life of a gym leader...$"
