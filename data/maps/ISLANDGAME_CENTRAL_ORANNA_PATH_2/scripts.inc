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

Movement_PlayerWalkOver1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

Movement_PlayerWalkOver2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerWalkOver1
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1
	closemessage
	applymovement 8, Movement_DELCATTYAttack
	waitmovement 8
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
	waitmoncry
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2
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
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5
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
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6
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


ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerWalkOver2
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1
	closemessage
	applymovement 8, Movement_DELCATTYAttack
	waitmovement 8
	playmoncry SPECIES_DELCATTY, CRY_MODE_NORMAL
	waitmoncry
	playmoncry SPECIES_LOMBRE, CRY_MODE_WEAK
	waitmoncry
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2
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
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5
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
	msgbox ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6
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
	.string "My sister wants to be a model just like\n"
	.string "Ruka, so she's training her body.$"

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
	.string "public information?\p"
	.string "Well then, allow me to provide you with\n"
	.string "some more personal stuff about her...\p"
	.string "-whisper whisper-\p"
	.string "How'd you like them apples? I'm not so\n"
	.string "useless anymore, yeah?\p"
	.string "What? Why are you looking at me like\n"
	.string "that? Stop judging me! I'm important!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_0:
	.string "Tryna see some of my catches?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_1:
	.string "Pretty snazzy, right?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Fisherman_Text_2:
	.string "I wish the people at Tidalcove would\n"
	.string "stop tossing their trash in the sea.\p"
	.string "A lot of it ends up flowing down this\n"
	.string "river. You won't believe the things I've\l"
	.string "caught thinking I caught a Totodile.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_0:
	.string "I'm tired of facing all these sweaty\n"
	.string "trainers scurrying about.\p"
	.string "Let's just get this over with.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_1:
	.string "Humph.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Camper_Text_2:
	.string "There is a salon right there, trainer.\n"
	.string "While it's intended for Pokemon, I think\l"
	.string "they would be willing to make an\l"
	.string "exception after seeing you.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_0:
	.string "Nyeh heh heh... Let me SHOW you my\n"
	.string "Pokémans!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_1:
	.string "Did you like my Pokémans?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Maniac_Text_2:
	.string "I'll be getting all the ladies with my\n"
	.string "Pokémans...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_0:
	.string "Hey, check out my new ride! Isn't it\n"
	.string "slick?$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_1:
	.string "Crap! I fell!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Biker_Text_2:
	.string "If you want a bike, you should hit up\n"
	.string "Randy's at Tidalcove!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_0:
	.string "I need to be alone! Go away!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_1:
	.string "-sigh-$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Battle_Ranger_Text_2:
	.string "I'm just upset about losing to Ruka. Her\n"
	.string "ace Pokémon was just too strong.\p"
	.string "Now I'll have to wait until tomorrow for\n"
	.string "another chance...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_0:
	.string "KYAAA! PRIM YOU'RE SO COOL!\p"
	.string "That girl... isn't she the newest member\n"
	.string "of STARLIGHT?\p"
	.string "Her Delcatty is so pretty... I wish I had\n"
	.string "one too!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_1:
	.string "{COLOR GREEN}Primrose: {COLOR DARK_GRAY}Time to end this.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_2:
	.string "{COLOR GREEN}Primrose: {COLOR DARK_GRAY}-sigh- What a waste of time...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_3:
	.string "{COLOR DARK_GRAY}Yeah! You should've just let her have\n"
	.string "it! She has better things to do than\l"
	.string "spender her time dealing with scrubs\l"
	.string "like you!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_4:
	.string "{COLOR DARK_GRAY}Yeah! She's Lady Primrose, the greatest\n"
	.string "idol to ever exist! She and Delcatty\l"
	.string "are gonna take Marya by storm!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_5:
	.string "{COLOR DARK_GRAY}You better believe she is! We stand with\n"
	.string "Her Majesty!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Trigger_PrimFightCutscene1_Text_6:
	.string "{COLOR DARK_GRAY}E-Eh? W-Wait for us, Prim! C'mon Jess,\n"
	.string "let's ditch these goobers!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLoser_Text_0:
	.string "N-No way... She beat me without taking\n"
	.string "any damage...$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightLombre_Text_0:
	.string "L-Lom...\p"
	.string "{COLOR RED}(Looks like Lombre took a thrashing.)$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec1_Text_0:
	.string "Prim's Pokémon fight so elegantly... As\n"
	.string "expected from an idol!$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec2_Text_0:
	.string "Apparently Primrose just became a\n"
	.string "member of STARLIGHT a few months ago.\p"
	.string "Huh? You don't know what STARLIGHT is?\n"
	.string "That's wild, bro. They're the biggest\l"
	.string "idol group in Marya!\p"
	.string "Prim's gained a ton of popularity 'cause\n"
	.string "of her amazing talent as a trainer.\p"
	.string "She's definitely got this year's\n"
	.string "festival tournament in the bag.$"

ISLANDGAME_CENTRAL_ORANNA_PATH_2_Interact_PrimFightSpec3_Text_0:
	.string "Ruka gets so many challenge requests\n"
	.string "that she can only take a limited number\l"
	.string "of them per day.\p"
	.string "These two were having a battle to\n"
	.string "decide who would get the last spot.\p"
	.string "Poor kid... He never stood a chance\n"
	.string "against Prim.$"
