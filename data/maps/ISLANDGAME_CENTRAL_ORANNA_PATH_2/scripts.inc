ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_NORANNA_PRIM_CUTSCENE_FINISHED, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_0, 1
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayCamper::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayCamper_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman::
	trainerbattle_single TRAINER_CORANNA_2_FISHERMAN, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1::
	trainerbattle_single TRAINER_CORANNA_2_CAMPER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac::
	trainerbattle_single TRAINER_CORANNA_2_MANIAC, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker::
	trainerbattle_single TRAINER_CORANNA_2_BIKER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2, MSGBOX_NPC
	return


Movement_LuxrayAttack:
	jump_right
	step_end

Movement_PrimWalkAway:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_LuxrayWalkAway:
	walk_down
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Fan1WalkAway:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Fan2WalkAway:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

Movement_Fan3WalkAway:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Movement_Fan4WalkAway:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene::
	lock
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_0
	closemessage
	applymovement 8, Movement_LuxrayAttack
	waitmovement 8
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
	waitmoncry
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_1
	closemessage
	applymovement 1, Movement_PrimWalkAway
	applymovement 8, Movement_LuxrayWalkAway
	applymovement 3, Movement_Fan1WalkAway
	applymovement 4, Movement_Fan2WalkAway
	waitmovement 1
	waitmovement 8
	waitmovement 3
	waitmovement 4
	removeobject 1
	removeobject 8
	removeobject 3
	removeobject 4
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_2
	closemessage
	applymovement 5, Movement_Fan3WalkAway
	applymovement 7, Movement_Fan4WalkAway
	waitmovement 5
	waitmovement 7
	removeobject 5
	removeobject 7
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
	setvar VAR_TEMP_0, 1
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0:
	.string "Swimming looks so fun!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayCamper_Text_0:
	.string "Howdy trainer! Nice job on making it\n"
	.string "this far.\p"
	.string "You're 'bout halfway to Tidalcove!\p"
	.string "I'll let you in on a little secret...\n"
	.string "Oranna's gym leader, Ruka, specializes\l"
	.string "in ice-type Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0:
	.string "Oh, are you interesting in seeing some\n"
	.string "of my catches?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1:
	.string "Back to fishing.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2:
	.string "This is a nice place to fish since it's so\n"
	.string "remote.\p"
	.string "Nothing like waking up early to the\n"
	.string "sounds of nature and fishing!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1_Text_0:
	.string "Isn't it nice for someone to build a\n"
	.string "house in the middle of the woods?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1_Text_1:
	.string "Wow, you beat me!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper1_Text_2:
	.string "Camping is nice and all, but nothing\n"
	.string "beats a warm bed...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0:
	.string "Hehe... let's battle!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1:
	.string "Impossible!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2:
	.string "Listen. Wild routes like this attract a\n"
	.string "lot of bug catchers and grass-type\l"
	.string "enthusiasts. Is it so wrong to bring a\l"
	.string "little heat?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0:
	.string "Hey, check out my new ride! I love going\n"
	.string "fast!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1:
	.string "How did you outspeed me?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2:
	.string "Like, you should totally get a bike! The\n"
	.string "guy in Tidalcove is the best!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_0:
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Time to end this, Delcatty!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_1:
	.string "Prim: Man, that was a waste of time! You\n"
	.string "should have just given me the spot...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_2:
	.string "{COLOR DARK_GRAY}Wait for us!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0:
	.string "Man, I lost so bad...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0:
	.string "Prim is really good... if only she could\n"
	.string "wake up earlier.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0:
	.string "It doesn't matter how good Prim is; she\n"
	.string "still has no chance against Ruka.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0:
	.string "Since so many people come by to\n"
	.string "challenge Ruka, she can only accept a\l"
	.string "limited amount of people each day. Prim\l"
	.string "was just fighting for the last spot.$"
