ISLANDGAME_MT_AURORA_2F_3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_ROSEVALE_STATE, 1
	goto_if_ne ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return

ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	compare VAR_ROSEVALE_STATE, 5
	goto_if_ne ISLANDGAME_MT_AURORA_2F_3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


WalkInPlaceUp:
	walk_in_place_up
	step_end

JumpInPlaceDown2:
	jump_in_place_down
	jump_in_place_down
	step_end

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene::
	lock
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement 3, Common_Movement_WalkInPlaceDown
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_0
	closemessage
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
	applymovement 4, JumpInPlaceDown2
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	applymovement 5, WalkInPlaceUp
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_1
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_2
	closemessage
	applymovement 3, Common_Movement_QuestionMark
	applymovement 5, Common_Movement_Delay48
	applymovement 3, Common_Movement_WalkInPlaceDown
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_3
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceDown
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4
	closemessage
	fadedefaultbgm
	setvar VAR_ROSEVALE_STATE, 5
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
	release
	return


ISLANDGAME_MT_AURORA_2F_3_Arthur_Interact::
	lock
	faceplayer
	msgbox ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4
	release
	return


ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact::
	lock
	faceplayer
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
	msgbox ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact_Text_0
	release
	return


ISLANDGAME_MT_AURORA_2F_3_EdeaInteract::
	lock
	faceplayer
	trainerbattle_single TRAINER_MT_AURORA_EDEA, ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_0, ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_1, ThiefDefeated
	return


Movement_AzurillOutOfWay:
	walk_faster_left
	face_right
	step_end

Movement_ThiefRunAway:
	delay_16
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

Movement_AzurillHappy:
	jump_in_place_right
	jump_in_place_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	face_right
	step_end

ThiefDefeated:
	lock
	applymovement 5, Common_Movement_FaceUp
	applymovement 5, WalkInPlaceUp
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	msgbox ThiefDefeated_Text_0
	closemessage
	applymovement 3, Common_Movement_FaceDown
	msgbox ThiefDefeated_Text_1
	closemessage
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
	waitmoncry
	applymovement 3, Common_Movement_QuestionMark
	applymovement 5, Common_Movement_QuestionMark
	applymovement 4, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	msgbox ThiefDefeated_Text_2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	fadescreen FADE_TO_WHITE
	addobject 2
	setobjectxy 2, 12, 11
	fadescreen FADE_FROM_WHITE
	delay 30
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
	msgbox ThiefDefeated_Text_3
	closemessage
	applymovement 3, Common_Movement_FaceUp
	applymovement 4, Common_Movement_FaceUp
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox ThiefDefeated_Text_4
	closemessage
	applymovement 4, Movement_AzurillOutOfWay
	applymovement 3, Movement_ThiefRunAway
	waitmovement 0
	applymovement 5, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 4, Common_Movement_FaceDown
	removeobject 3
	waitmovement 0
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
	msgbox ThiefDefeated_Text_5
	closemessage
	applymovement 5, Common_Movement_FaceUp
	applymovement 4, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	delay 30
	fadescreen FADE_TO_WHITE
	removeobject 2
	fadescreen FADE_FROM_WHITE
	applymovement 5, WalkInPlaceUp
	applymovement 5, Common_Movement_Delay32
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	msgbox ThiefDefeated_Text_6
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	applymovement 4, Movement_AzurillHappy
	waitmovement 0
	applymovement 5, Common_Movement_FaceLeft
	msgbox ThiefDefeated_Text_7
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	msgbox ThiefDefeated_Text_8
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox ThiefDefeated_Text_9
	setvar VAR_ROSEVALE_STATE, 2
	warp MAP_ISLANDGAME_ROSEVALE, 13, 26
	return


ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_0:
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Pfft. THAT was your attempt at\n"
	.string "battling? You didn't even land a single\l"
	.string "hit on any of my Pokémon!\p"
	.string "{COLOR DARK_GRAY}And you came ALL this way just to try\n"
	.string "and stop me? How pathetic.$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_1:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Mgrgrgr...$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_2:
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Haha, this shiny Azurill is gonna\n"
	.string "snag me a fortune on the black market!\p"
	.string "As for you... quit moping and just and\n"
	.string "get a new one for your little sis.\p"
	.string "She's just a dumb child, she probably\n"
	.string "won't even notice the difference.\p"
	.string "Country bumpkins like you don't\n"
	.string "understand the value of shiny Pokémon.$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_3:
	.string "{COLOR DARK_GRAY}Hm? And just who are you? A friend of\n"
	.string "this his?\p"
	.string "{COLOR DARK_GRAY}Beat it, kid! Unless you want to get\n"
	.string "demolished like this loser!$"

ISLANDGAME_MT_AURORA_2F_3_Trigger_ThiefCutscene_Text_4:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Please! You have to stop her!\n"
	.string "That Azurill means everything to my\l"
	.string "little sister!\p"
	.string "I-I tried my best... but it just wasn't\n"
	.string "enough...$"

ISLANDGAME_MT_AURORA_2F_3_Azurill_Interact_Text_0:
	.string "Azu... {COLOR BLUE}(pls saef me from mean lady)$"

ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_0:
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}-sigh- This is why I hate kids.\n"
	.string "You brats just never listen!$"

ISLANDGAME_MT_AURORA_2F_3_EdeaInteract_Text_1:
	.string "I-Impossible! Just who are you!?$"

ThiefDefeated_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Ha! You lost! Now, give me back\n"
	.string "my sister's Azurill!$"

ThiefDefeated_Text_1:
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}In your dreams, squirt! I'm not\n"
	.string "giving this Pokémon up! It's worth more\l"
	.string "than your dinky little inn!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}H-Huh? But you have to! We beat\n"
	.string "you, fair and square!\p"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}And? What are you gonna do, tell\n"
	.string "on me to the Pokémon gods? I'm taking\l"
	.string "this Azurill with me! Peace out, losers!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}W-Wait!$"

ThiefDefeated_Text_2:
	.string "{COLOR RED}(Huh? What was that sound?)$"

ThiefDefeated_Text_3:
	.string "Cuuuuun!$"

ThiefDefeated_Text_4:
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}W-What!? Articuno!? Where in the\n"
	.string "blazes did you come from!?\p"
	.string "Ngggh... F-Fine! I'll give back their\n"
	.string "stupid Azurill!\p"
	.string "You punks got lucky this time! Now... if\n"
	.string "you don't mind me... I'm outta here!$"

ThiefDefeated_Text_5:
	.string "Cuuuuun...$"

ThiefDefeated_Text_6:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Holy heck... Was that Articuno\n"
	.string "in the flesh just now!?\p"
	.string "It left before we could say anything...\n"
	.string "T-Thank you for the help, Articuno!$"

ThiefDefeated_Text_7:
	.string "Azurill! I'm so sorry for not being more\n"
	.string "watchful. I should've never left you\l"
	.string "and my little sister out of sight.$"

ThiefDefeated_Text_8:
	.string "Oh, and thank you too! Er...$"

ThiefDefeated_Text_9:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}? Well, I owe you big\n"
	.string "and Articuno big time for helping me.\p"
	.string "I couldn't do anything... If it weren't\n"
	.string "for you and Articuno, Azurill would've\l"
	.string "been lost forever!\p"
	.string "Ah... Ah... Achoo! Brrr... It's freezing in\n"
	.string "here. Let's head back to Rosevale.$"
