ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_LUMINE_CAVE_ALBA_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_set FLAG_LUMINE_CAVE_AGGRON_DEFEATED, ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm 1, 10, 11
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 9, 11
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_TEMP_1F
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT::
	lock
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0
	closemessage
ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_2:
	giveitem ITEM_SHOAL_SALT
	setmetatile 11, 19, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_DAILY_LUMINE_CAVE_SALT_4
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2::
	lock
	faceplayer
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract::
	lock
	faceplayer
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2
	playmoncry SPECIES_PORYGON2, CRY_MODE_WEAK
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_2:
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract::
	lock
	goto_if_unset FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2
	checktrainerflag TRAINER_LUMINE_CAVE_ALBA
	goto_if 0, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10
ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2:
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0
	closemessage
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	applymovement 11, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 11, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceRight
	waitmovement 0
	applymovement 11, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5
	setflag FLAG_LUMINE_CAVE_SPOKE_TO_ALBA
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_3:
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_7:
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7
	trainerbattle_no_intro TRAINER_LUMINE_CAVE_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	setobjectxyperm 1, 10, 11
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 9, 11
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setflag FLAG_LUMINE_CAVE_ALBA_DEFEATED
	savebgm MUS_DUMMY
	fadedefaultbgm
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl::
	lock
	faceplayer
	goto_if_set FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1:
	applymovement 11, Common_Movement_FaceRight
	waitmovement 0
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2:
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Aron::
	lock
	faceplayer
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert::
	lock
	playmoncry SPECIES_SWAMPERT, CRY_MODE_WEAK
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6::
	lock
	goto_if_unset FLAG_DAILY_LUMINE_CAVE_SALT_4, ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_2:
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_1


ISLANDGAME_LUMINE_CAVE_B1F_2_Litten::
	lock
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setflag FLAG_NO_CATCHING
	setflag FLAG_NO_RUNNING
	setcwildbattle 0, SPECIES_SHADOW_AGGRON, 45, ITEM_SHELL_BELL, NATURE_RELAXED, 2, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_METAL_BURST, MOVE_CURSE, MOVE_HEAD_SMASH, MOVE_HEAVY_SLAM
	setwilddoublebattle TRUE
	playmoncry SPECIES_AGGRON, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	clearflag FLAG_NO_CATCHING
	clearflag FLAG_NO_RUNNING
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
	case B_OUTCOME_RAN, ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight
ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1:
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_3:
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_ShadowAggron_1


AlbaWalkToPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittenGirlZoom:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	jump_in_place_up
	jump_in_place_up
	step_end

LittenGirlWalkToPlayer:
	walk_down
	walk_down
	walk_left
	step_end

LittenHop:
	jump_in_place_down
	jump_in_place_down
	step_end

LittenWalkToGirl:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

LumineCaveWalkAway:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight::
	lock
	setflag FLAG_LUMINE_CAVE_AGGRON_DEFEATED
	fadescreen FADE_TO_BLACK
	removeobject 8
	removeobject 22
	removeobject 23
	removeobject 24
	removeobject 25
	removeobject 26
	removeobject 27
	removeobject 28
	addobject 1
	addobject 2
	addobject 11
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 6
	setobjectxyperm 8, 47, 0
	setobjectxyperm 20, 47, 0
	setobjectxyperm 21, 47, 0
	setobjectxyperm 22, 47, 0
	setobjectxyperm 23, 47, 0
	setobjectxyperm 24, 47, 0
	setobjectxyperm 25, 47, 0
	setobjectxyperm 26, 47, 0
	setobjectxy 1, 26, 12
	setobjectxy 2, 26, 13
	setobjectxy 11, 28, 12
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	fadescreen FADE_FROM_BLACK
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0
	closemessage
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, TRUE
	applymovement 1, AlbaWalkToPlayer
	applymovement 2, AlbaWalkToPlayer
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1
	closemessage
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	applymovement 11, LittenGirlZoom
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5
	closemessage
	applymovement 16, LittenHop
	waitmovement 0
	playmoncry SPECIES_LITTEN, CRY_MODE_WEAK
	waitmoncry
	applymovement 11, LittenGirlWalkToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6
	giveitem ITEM_QUICK_CLAW
	closemessage
	applymovement 16, LittenWalkToGirl
	waitmovement 0
	applymovement 11, Common_Movement_FaceRight
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 11, LumineCaveWalkAway
	applymovement 16, LumineCaveWalkAway
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8
	closemessage
	applymovement 1, Common_Movement_WalkDown
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	applymovement 1, LumineCaveWalkAway
	applymovement 2, LumineCaveWalkAway
	waitmovement 0
	removeobject 1
	removeobject 2
	removeobject 11
	removeobject 16
	setobjectxyperm 1, 47, 0
	setobjectxyperm 2, 47, 0
	setobjectxyperm 11, 47, 0
	setobjectxyperm 16, 47, 0
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_SALT_Text_0:
	.string "{COLOR RED}(No more salt here.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Cringe_Text_0:
	.string "STICKING OUT YOUR GYATT FOR THE\n"
	.string "GRAVELER\p"
	.string "YOU'RE SO CARBINK\n"
	.string "YOU'RE SO GIGALITH\p"
	.string "I JUST WANNA BE YOUR CRADILY\p"
	.string "C'MON, SING IT WITH ME!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC1_Text_0:
	.string "We heard there was a mass outbreak\n"
	.string "blocking the cave, but it seems like\l"
	.string "it's already been resolved...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_TempNPC2_Text_0:
	.string "Doryuzu... {COLOR BLUE}(What a shame... I was ready\n"
	.string "to GROUND POUND that Aggron!)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0:
	.string "I AM DESIGNATED AS PORYGON2:\n"
	.string "DEFINITIVE EDITION REMASTERED!\p"
	.string "WHAT'S QUACKALACKIN'?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_1:
	.string "YOU REALLY DUCKED US UP, TRAINER! I\n"
	.string "WILL REMEMBER OUR FIGHT!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0:
	.string "Fascinating...{PAUSE 60} the sheer ferocity of an\n"
	.string "Aggron is truly without parallel...\p"
	.string "Their adamantine iron hide that serves\n"
	.string "as both sword and shield, compounded\l"
	.string "with their instinctive territorial\l"
	.string "nature...\p"
	.string "Yes...{PAUSE 60} This mass outbreak has proved\n"
	.string "rather beneficial in realizing the\l"
	.string "potential of Pokémon...\p"
	.string "Oh?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1:
	.string "Ah,{PAUSE 60} please excuse my ramblings, trainer.{PAUSE 60}\n"
	.string "I was simply enamored by the majesty\l"
	.string "of the Aggron over there.\p"
	.string "I do advise that you keep a safe\n"
	.string "distance, however.\p"
	.string "They have claimed this cavern as their\n"
	.string "home, and will not show mercy to those\l"
	.string "who dare trespass it.\p"
	.string "It is in everyone's best interest to\n"
	.string "stay put until the authorities arrive.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2:
	.string "Eeeh?{PAUSE 60} But my poor little Litten is\n"
	.string "getting picked on by those meanies!\p"
	.string "Please, can't you save her?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3:
	.string "I understand your frustrations, but it\n"
	.string "is too dangerous for any of us to tread\l"
	.string "onto their territory.\p"
	.string "Even I do not possess the capabilities\n"
	.string "to surmount a mighty Aggron.\p"
	.string "All we can do is hope for the best and\n"
	.string "await the Silverwing Order.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4:
	.string "B-But!...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5:
	.string "You still wish to pass to rescue her\n"
	.string "Litten,{PAUSE 60} despite my warnings?\p"
	.string "Hm...{PAUSE 60} I cannot in good faith let such a\n"
	.string "young trainer go on alone...\p"
	.string "But if you are that confident in your\n"
	.string "abilities, I would like to verify them\l"
	.string "first in a battle.\p"
	.string "If you can best me, I will grant you\n"
	.string "passage to save her Pokémon.\p"
	.string "I will give you a moment to prepare.\n"
	.string "Speak to me when you are ready.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_6:
	.string "Have you made the necessary\n"
	.string "preparations for our battle?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_7:
	.string "Very well. Prove to me that you have\n"
	.string "what it takes!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_8:
	.string "Intriguing...\pYou've exceeded my expectations,{PAUSE 60}\nthat's for sure...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_9:
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}I must applaud you for your\n"
	.string "tactical prowess, trainer.\p"
	.string "As agreed upon, I will allow you to\n"
	.string "engage the Aggron by yourself.\p"
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer,\l"
	.string "but a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_10:
	.string "Please do take extreme care. Your next\n"
	.string "battle will not be against a trainer,\l"
	.string "but a truly savage beast.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0:
	.string "Please save my litty kitty! D:$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1:
	.string "Waaaah!{PAUSE 30} My Litten is trapped over there\n"
	.string "with those big bad bullies!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0:
	.string "See that big strong Aggron, buddy?\n"
	.string "That's what you're gonna grow up to be!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0:
	.string "Ron... {COLOR BLUE}(I'm glad to be owned by a trainer.\n"
	.string "The wild Pokémon world is scary.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0:
	.string "{COLOR RED}(Looks like Swampert is out of\n"
	.string "commission.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0:
	.string "The horns of an Aggron are strong\n"
	.string "enough to pierce steel with ease, while\l"
	.string "their claws can shred through the\l"
	.string "strongest of bedrock.\p"
	.string "It's believed that ancient generals\n"
	.string "used to wear armor made from the\l"
	.string "plating of an Aggron as a symbol of\l"
	.string "strength.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0:
	.string "I could easily take down an Aggron by\n"
	.string "myself.{PAUSE 60} Just give me enough prep time!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0:
	.string "Swampert! Are you alright?\p"
	.string "Argh... We couldn't even put a dent on\n"
	.string "that Aggron...\p"
	.string "It doesn't add up. Why weren't water or\n"
	.string "ground moves super effective on it...?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0:
	.string "Heck... I'm gonna miss out on meeting\n"
	.string "STARLIGHT cause of this DUMB Aggron!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0:
	.string "Eureka! A deposit of Sodium Chloride!\n"
	.string "This will go great with my french fries!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_1:
	.string "Huh? What do you mean, this isn't the\n"
	.string "same salt you put on food?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Litten_Text_0:
	.string "Mew... {COLOR BLUE}(git mes out)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_0:
	.string "{COLOR RED}(Phew...{PAUSE 60} Seems like defeating the Aggron\n"
	.string "caused the other Pokémon to flee...)\p"
	.string "(That Aggron...{PAUSE 60} it was exuding the same\n"
	.string "shadowy aura as the Mightyena I\l"
	.string "fought with Melissa...)\p"
	.string "(What's going on here...?){PAUSE 60}\p"
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}Incredible...{PAUSE 60} I cannot believe my\n"
	.string "very own eyes...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_1:
	.string "My apologies, but I never caught your\n"
	.string "name.{PAUSE 60} May I ask it by chance?\p"
	.string "...\p"
	.string "Ah, {PLAYER},{PAUSE 30} is it?\p"
	.string "Tell me, {PLAYER},{PAUSE 30} what is it that\n"
	.string "allows you to bring forth the latent\l"
	.string "power of your Pokémon?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_2:
	.string "Hm...{PAUSE 60} I see...{PAUSE 60} You believe it is your\n"
	.string "ability to understand and talk to\l"
	.string "Pokémon that enables you to form\l"
	.string "stronger bonds with them, thereby\l"
	.string "drawing out their maximum potential?\p"
	.string "An interesting prospect, {PLAYER}.{PAUSE 60}\n"
	.string "Your response mirrors that of an old\l"
	.string "colleague I once worked with...\p"
	.string "I too hypothesize that the power of\n"
	.string "emotions is the key to unlocking a\l"
	.string "Pokémon's true strength...\p"
	.string "But which emotion specifically? I still\n"
	.string "have yet to figure out...\p"
	.string "Until then, my research on the mind of\n"
	.string "Pokémon continues...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_3:
	.string "Hm? Did I notice anything strange\n"
	.string "about the Aggron?\p"
	.string "Not particularly...{PAUSE 60} Did you happen to\n"
	.string "see something that I did not?\p"
	.string "...\p"
	.string "Is that so...?\p"
	.string "Hmm...{PAUSE 60} A menacing dark aura emanating\n"
	.string "from a Pokémon acting unnaturally...{PAUSE 60}\l"
	.string "Only for it to fade away when they are\l"
	.string "defeated in battle...\p"
	.string "...and you say you encountered a\n"
	.string "Mightyena with the same traits as well?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_4:
	.string "That is rather worrisome, if what you\n"
	.string "say is true...{PAUSE 60} I was unable to observe\l"
	.string "anything like that from the Aggron.\p"
	.string "Perhaps your ability to perceive its\n"
	.string "aura is related to your innate ability?\p"
	.string "This is all very unorthodox...{PAUSE 60} What could\n"
	.string "be the cause of such a phenomenon?\p"
	.string "Perhaps I should take the Aggron in for\n"
	.string "further analysis...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_5:
	.string "My precious little Litten! I'm never\n"
	.string "gonna let you out of my sight again!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_6:
	.string "Thank you, thank you, thank you,\n"
	.string "trainer!{PAUSE 60} Here, I know it's not much, but\l"
	.string "please take it for saving my Litten!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_7:
	.string "The first thing we'll be doing at\n"
	.string "Bellehaven is getting you a leash!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AggronPostFight_Text_8:
	.string "{COLOR GREEN}Alba: {COLOR DARK_GRAY}...and with that, I believe it is\n"
	.string "about time I take my leave as well.\p"
	.string "Our battle was quite fruitful,\n"
	.string "{PLAYER}.{PAUSE 60} I've little opportunities\l"
	.string "to interact with trainers of your...{PAUSE 60}\l"
	.string "expertise.\p"
	.string "Perhaps we shall meet again in the\n"
	.string "future.{PAUSE 60} Hopefully by then, I will have\l"
	.string "found the answer to my hypothesis...{PAUSE 60} as\l"
	.string "well as the answer to yours.$"
