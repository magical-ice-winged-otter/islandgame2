ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_NORANNA_PRIM_CUTSCENE_FINISHED, ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CENTRAL_ORANNA_PATH_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_0, 1
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_TempLocked::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_TempLocked_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude::
	lock
	faceplayer
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude_Text_0, MSGBOX_NPC
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman::
	trainerbattle_single TRAINER_CORANNA_2_FISHERMAN, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper::
	trainerbattle_single TRAINER_CORANNA_2_CAMPER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac::
	trainerbattle_single TRAINER_CORANNA_2_MANIAC, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker::
	trainerbattle_single TRAINER_CORANNA_2_BIKER, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger::
	trainerbattle_single TRAINER_MINTY_MEADOWS_5, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0, ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2, MSGBOX_NPC
	return


Movement_DELCATTYAttack:
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

Movement_DELCATTYWalkAway:
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
	applymovement 8, Movement_DELCATTYAttack
	waitmovement 8
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
	waitmoncry
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_1
	closemessage
	applymovement 1, Movement_PrimWalkAway
	applymovement 8, Movement_DELCATTYWalkAway
	waitmovement 1
	waitmovement 8
	removeobject 1
	removeobject 8
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_2
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_3
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_4
	closemessage
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 3
	waitmovement 5
	applymovement 3, Common_Movement_Delay32
	applymovement 3, Common_Movement_Delay32
	waitmovement 3
	waitmovement 5
	applymovement 3, Common_Movement_FaceRight
	applymovement 3, Common_Movement_FaceRight
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_5
	closemessage
	applymovement 3, Movement_Fan3WalkAway
	applymovement 5, Movement_Fan4WalkAway
	waitmovement 3
	waitmovement 5
	removeobject 3
	removeobject 5
	setflag FLAG_NORANNA_PRIM_CUTSCENE_FINISHED
	setvar VAR_TEMP_0, 1
	release
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser::
	lock
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre::
	lock
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1::
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2::
	lock
	faceplayer
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3::
	lock
	faceplayer
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_EntranceSign_Text_0:
	.string "CENTRAL ORANNA PATH\n"
	.string "TIDALCOVE{UP_ARROW}$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_RestStopSign_Text_0:
	.string "KRISSIE'S BEAUTY SALON\p"
	.string "For you and your Pokémon!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_TempLocked_Text_0:
	.string "OUT FOR LUNCH\n"
	.string "Will be back next update (:$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_SwimKid_Text_0:
	.string "Swimming looks really fun! I wanna try\n"
	.string "it when I'm older...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_HalfwayDude_Text_0:
	.string "Howdy trainer! Nice job on making it\n"
	.string "this far. You're 'bout halfway there!\p"
	.string "For getting this far, I'll let you in on\n"
	.string "some insider knowledge...\p"
	.string "Ruka, the leader of Tidalcove's Gym,\n"
	.string "specializes in ice-type Pokémon!\p"
	.string "So fighting, fire, steel, and rock moves\n"
	.string "will be super useful in the fight!\p"
	.string "Bet you're glad I filled you in on the\n"
	.string "secrets, huh?\p"
	.string "Eh? What do you mean, that was all\n"
	.string "public information?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0:
	.string "Interested in seeing some of my\n"
	.string "catches?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1:
	.string "Back to fishing.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2:
	.string "This is a nice place to fish since it's so\n"
	.string "remote.\p"
	.string "Nothing like waking up early to the\n"
	.string "sounds of nature and fishing!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0:
	.string "My Pokémon just got a massage from the\n"
	.string "salon over there, so let's battle!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1:
	.string "I could go for a haircut too.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2:
	.string "If you've got some extra cash, you\n"
	.string "should hit up the salon too!\p"
	.string "Your Pokémon will love it, trust me!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0:
	.string "Nyeh heh heh... Let me SHOW you my\n"
	.string "Pokémans!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1:
	.string "Did you like my Pokémans?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2:
	.string "My Pokémans are super rare... I'll get all\n"
	.string "the ladies with them!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0:
	.string "Hey, check out my new ride! Isn't it\n"
	.string "slick?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1:
	.string "Crap! I fell!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2:
	.string "You should totally get a bike too! You\n"
	.string "can get one at Tidalcove!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0:
	.string "I need to be alone! Go away!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1:
	.string "Sorry for being so rude. I'm just\nupset because I lost my gym battle.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2:
	.string "I thought I could beat Ruka, but her\n"
	.string "ace Pokémon... it was just too strong!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_0:
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Time to end this, Delcatty!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_1:
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}-sigh- What a waste of time. You\n"
	.string "should've just given me the spot.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_2:
	.string "{COLOR DARK_GRAY}Yeah! You should've just let her have\n"
	.string "it! She has better things to do than\l"
	.string "spender her time dealing with scrubs\l"
	.string "like you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_3:
	.string "{COLOR DARK_GRAY}Yeah! She's Prim, the greatest idol to\n"
	.string "ever exist! She and Delcatty are gonna\l"
	.string "take Marya by storm!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_4:
	.string "{COLOR DARK_GRAY}You better believe she is! We stand with\n"
	.string "Her Majesty!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene_Text_5:
	.string "{COLOR DARK_GRAY}E-Eh? W-Wait for us, Prim! C'mon Jess,\n"
	.string "let's ditch these goobers!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0:
	.string "N-No way... She beat me without taking\n"
	.string "any damage...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0:
	.string "L-Lom...\p"
	.string "{COLOR RED}(Looks like Lombre took a thrashing.)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0:
	.string "Prim is so pretty and confident. Her\n"
	.string "Pokémon fight so elegantly too.\p"
	.string "She'd be a perfect Pokémon\n"
	.string "Coordinator! I wonder why she chose to\l"
	.string "become a trainer instead...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0:
	.string "Primrose sure is incredible... She only\n"
	.string "just became an idol a few months ago,\l"
	.string "and now she's already become one of\l"
	.string "the most popular celebrities in the\l"
	.string "isles.\p"
	.string "Now, she's on her way to completing the\n"
	.string "Marya Gym Challenge so she can enter in\l"
	.string "the upcoming Silverwing Festival\l"
	.string "Tournament!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0:
	.string "Ruka gets so many challenge requests\n"
	.string "that she can only take a limited number\l"
	.string "of them per day.\p"
	.string "These two were having a battle to\n"
	.string "decide who would get the last spot.\p"
	.string "Poor kid... He never stood a chance\n"
	.string "against Prim.$"
