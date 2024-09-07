ISLANDGAME_APPLEVINE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	setflag FLAG_TEMP_2
ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_set FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	goto_if_set FLAG_APPLEVINE_MELISSA_CALL, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_3
	goto ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	setvar VAR_TEMP_2, 1
	return


ISLANDGAME_APPLEVINE_StoreSign::
	msgbox ISLANDGAME_APPLEVINE_StoreSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_CitySign::
	msgbox ISLANDGAME_APPLEVINE_CitySign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_GameCornerSign::
	msgbox ISLANDGAME_APPLEVINE_GameCornerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_SierraPathSign::
	msgbox ISLANDGAME_APPLEVINE_SierraPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_RockyPathSign::
	msgbox ISLANDGAME_APPLEVINE_RockyPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_MelissaCall::
	lock
	playse SE_POKENAV_CALL
	msgbox ISLANDGAME_APPLEVINE_MelissaCall_Text_0
	msgbox ISLANDGAME_APPLEVINE_MelissaCall_Text_1
	playse SE_POKENAV_HANG_UP
	waitse
	setflag FLAG_APPLEVINE_MELISSA_CALL
	setvar VAR_TEMP_2, 1
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_CocoInteract::
	lock
	faceplayer
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_CocoInteract_2
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_1
ISLANDGAME_APPLEVINE_CocoInteract_1:
	release
	return

ISLANDGAME_APPLEVINE_CocoInteract_2:
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
	applymovement 19, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
	giveitem ITEM_ITEMFINDER
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
	setvar VAR_TEMP_1, 1
	closemessage
	goto ISLANDGAME_APPLEVINE_CocoInteract_1


ISLANDGAME_APPLEVINE_CocoTrigger1::
	lock
	playse SE_PIN
	applymovement 19, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
	closemessage
	applymovement 19, CocoWalkOver1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
	applymovement 19, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
	giveitem ITEM_ITEMFINDER
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
	closemessage
	applymovement 19, CocoLeave
	waitmovement 0
	removeobject 19
	release
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_APPLEVINE_CocoTrigger2::
	lock
	playse SE_PIN
	applymovement 19, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
	closemessage
	applymovement 19, CocoWalkOver2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
	applymovement 19, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
	giveitem ITEM_ITEMFINDER
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
	closemessage
	applymovement 19, CocoLeave
	waitmovement 0
	removeobject 19
	release
	setvar VAR_TEMP_1, 1
	return


CocoWalkOver1:
	walk_right
	walk_right
	walk_right
	step_end

CocoWalkOver2:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

CocoLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ISLANDGAME_APPLEVINE_NPC1::
	lock
	faceplayer
	goto_if_unset FLAG_APPLEVINE_SWEETHEART_GIFT, ISLANDGAME_APPLEVINE_NPC1_2
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_1
ISLANDGAME_APPLEVINE_NPC1_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_NPC1_2:
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_0
	giveitem ITEM_SWEET_HEART
	setflag FLAG_APPLEVINE_SWEETHEART_GIFT
	goto ISLANDGAME_APPLEVINE_NPC1_1


ISLANDGAME_APPLEVINE_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC2_2
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_2
ISLANDGAME_APPLEVINE_NPC2_1:
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return

ISLANDGAME_APPLEVINE_NPC2_2:
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_1
	playmoncry SPECIES_KYOGRE, CRY_MODE_NORMAL
	waitmoncry
	goto ISLANDGAME_APPLEVINE_NPC2_1


ISLANDGAME_APPLEVINE_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC3_Text_0, MSGBOX_NPC
	applymovement 8, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC4::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_NPC4_Text_0
	applymovement 9, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC5::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC5_Text_0, MSGBOX_NPC
	applymovement 7, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC6::
	lock
	msgbox ISLANDGAME_APPLEVINE_NPC6_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC7::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC7_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC8::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC8_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC9::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC9_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC10::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC10_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC11::
	lock
	faceplayer
	goto_if_unset FLAG_APPLEVINE_COIN_CASE, ISLANDGAME_APPLEVINE_NPC11_2
ISLANDGAME_APPLEVINE_NPC11_1:
	goto_if_unset FLAG_TEMP_4, ISLANDGAME_APPLEVINE_NPC11_5
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_2, MSGBOX_YESNO
ISLANDGAME_APPLEVINE_NPC11_4:
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_9
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_3
	goto Applevine_CandyMan_End
ISLANDGAME_APPLEVINE_NPC11_8:
CandyMan_Exchange:
	showcoinsbox 18, 1
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_4, 0
	checkitem ITEM_RARE_CANDY
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_13
ISLANDGAME_APPLEVINE_NPC11_12:
	checkitem ITEM_EXP_CANDY_XS
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_16
ISLANDGAME_APPLEVINE_NPC11_15:
	checkitem ITEM_EXP_CANDY_S
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_19
ISLANDGAME_APPLEVINE_NPC11_18:
	checkitem ITEM_EXP_CANDY_M
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_22
ISLANDGAME_APPLEVINE_NPC11_21:
	checkitem ITEM_EXP_CANDY_L
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_25
ISLANDGAME_APPLEVINE_NPC11_24:
	checkitem ITEM_EXP_CANDY_XL
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_NPC11_28
ISLANDGAME_APPLEVINE_NPC11_27:
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
	switch VAR_RESULT
	case 102, ISLANDGAME_APPLEVINE_NPC11_32
	case 103, ISLANDGAME_APPLEVINE_NPC11_33
	case 104, ISLANDGAME_APPLEVINE_NPC11_34
	case 105, ISLANDGAME_APPLEVINE_NPC11_35
	case 106, ISLANDGAME_APPLEVINE_NPC11_36
	case 107, ISLANDGAME_APPLEVINE_NPC11_37
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	hidecoinsbox 18, 1
	goto Applevine_CandyMan_End
ISLANDGAME_APPLEVINE_NPC11_30:
Applevine_CandyMan_End:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_NPC11_2:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_0
	goto Applevine_CandyMan_End
	goto ISLANDGAME_APPLEVINE_NPC11_1

ISLANDGAME_APPLEVINE_NPC11_5:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_1, MSGBOX_YESNO
	setflag FLAG_TEMP_4
	goto ISLANDGAME_APPLEVINE_NPC11_4

ISLANDGAME_APPLEVINE_NPC11_9:
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_8

ISLANDGAME_APPLEVINE_NPC11_13:
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_5, 102
	goto ISLANDGAME_APPLEVINE_NPC11_12

ISLANDGAME_APPLEVINE_NPC11_16:
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_6, 103
	goto ISLANDGAME_APPLEVINE_NPC11_15

ISLANDGAME_APPLEVINE_NPC11_19:
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_7, 104
	goto ISLANDGAME_APPLEVINE_NPC11_18

ISLANDGAME_APPLEVINE_NPC11_22:
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_8, 105
	goto ISLANDGAME_APPLEVINE_NPC11_21

ISLANDGAME_APPLEVINE_NPC11_25:
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_9, 106
	goto ISLANDGAME_APPLEVINE_NPC11_24

ISLANDGAME_APPLEVINE_NPC11_28:
	dynmultipush ISLANDGAME_APPLEVINE_NPC11_Text_10, 107
	goto ISLANDGAME_APPLEVINE_NPC11_27

ISLANDGAME_APPLEVINE_NPC11_32:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_11, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_39
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_33:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_14, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_42
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_34:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_15, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_45
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_35:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_16, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_48
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_36:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_17, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_51
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_37:
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_18, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC11_54
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_13
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_39:
	addcoins 4000
	updatecoinsbox 18, 1
	removeitem ITEM_RARE_CANDY
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_42:
	addcoins 100
	updatecoinsbox 18, 1
	removeitem ITEM_EXP_CANDY_XS
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_45:
	addcoins 500
	updatecoinsbox 18, 1
	removeitem ITEM_EXP_CANDY_S
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_48:
	addcoins 1000
	updatecoinsbox 18, 1
	removeitem ITEM_EXP_CANDY_M
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_51:
	addcoins 2000
	updatecoinsbox 18, 1
	removeitem ITEM_EXP_CANDY_L
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30

ISLANDGAME_APPLEVINE_NPC11_54:
	addcoins 8000
	updatecoinsbox 18, 1
	removeitem ITEM_EXP_CANDY_XL
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_12
	goto CandyMan_Exchange
	goto ISLANDGAME_APPLEVINE_NPC11_30


ISLANDGAME_APPLEVINE_NPC12::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC12_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC13::
	lock
	faceplayer
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_NPC13_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC14::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC14_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC15::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC15_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_AppleRoll1::
	random 10
	switch VAR_RESULT
	case 0, ISLANDGAME_APPLEVINE_AppleRoll1_3
	case 1, ISLANDGAME_APPLEVINE_AppleRoll1_4
	case 2, ISLANDGAME_APPLEVINE_AppleRoll1_5
	case 3, ISLANDGAME_APPLEVINE_AppleRoll1_6
	case 4, ISLANDGAME_APPLEVINE_AppleRoll1_6
	case 5, ISLANDGAME_APPLEVINE_AppleRoll1_6
	case 6, ISLANDGAME_APPLEVINE_AppleRoll1_6
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll1_1:
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll1_3:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_TART_APPLE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll1_9
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll1_9
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll1_9
ISLANDGAME_APPLEVINE_AppleRoll1_9:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1

ISLANDGAME_APPLEVINE_AppleRoll1_4:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll1_11
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll1_11
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll1_11
ISLANDGAME_APPLEVINE_AppleRoll1_11:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1

ISLANDGAME_APPLEVINE_AppleRoll1_5:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll1_13
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll1_13
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll1_13
ISLANDGAME_APPLEVINE_AppleRoll1_13:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1

ISLANDGAME_APPLEVINE_AppleRoll1_6:
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll1_1


ISLANDGAME_APPLEVINE_AppleRoll2::
	random 10
	switch VAR_RESULT
	case 0, ISLANDGAME_APPLEVINE_AppleRoll2_3
	case 1, ISLANDGAME_APPLEVINE_AppleRoll2_4
	case 2, ISLANDGAME_APPLEVINE_AppleRoll2_5
	case 3, ISLANDGAME_APPLEVINE_AppleRoll2_6
	case 4, ISLANDGAME_APPLEVINE_AppleRoll2_6
	case 5, ISLANDGAME_APPLEVINE_AppleRoll2_6
	case 6, ISLANDGAME_APPLEVINE_AppleRoll2_6
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll2_1:
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll2_3:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_TART_APPLE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll2_9
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll2_9
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll2_9
ISLANDGAME_APPLEVINE_AppleRoll2_9:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1

ISLANDGAME_APPLEVINE_AppleRoll2_4:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll2_11
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll2_11
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll2_11
ISLANDGAME_APPLEVINE_AppleRoll2_11:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1

ISLANDGAME_APPLEVINE_AppleRoll2_5:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll2_13
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll2_13
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll2_13
ISLANDGAME_APPLEVINE_AppleRoll2_13:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1

ISLANDGAME_APPLEVINE_AppleRoll2_6:
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll2_1


ISLANDGAME_APPLEVINE_AppleRoll3::
	random 10
	switch VAR_RESULT
	case 0, ISLANDGAME_APPLEVINE_AppleRoll3_3
	case 1, ISLANDGAME_APPLEVINE_AppleRoll3_4
	case 2, ISLANDGAME_APPLEVINE_AppleRoll3_5
	case 3, ISLANDGAME_APPLEVINE_AppleRoll3_6
	case 4, ISLANDGAME_APPLEVINE_AppleRoll3_6
	case 5, ISLANDGAME_APPLEVINE_AppleRoll3_6
	case 6, ISLANDGAME_APPLEVINE_AppleRoll3_6
	finditem ITEM_SWEET_APPLE
ISLANDGAME_APPLEVINE_AppleRoll3_1:
	release
	return

ISLANDGAME_APPLEVINE_AppleRoll3_3:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_TART_APPLE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll3_9
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll3_9
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll3_9
ISLANDGAME_APPLEVINE_AppleRoll3_9:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1

ISLANDGAME_APPLEVINE_AppleRoll3_4:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll3_11
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll3_11
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll3_11
ISLANDGAME_APPLEVINE_AppleRoll3_11:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1

ISLANDGAME_APPLEVINE_AppleRoll3_5:
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_APPLIN, 20, ITEM_SWEET_APPLE, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_APPLIN, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_APPLEVINE_AppleRoll3_13
	case B_OUTCOME_RAN, ISLANDGAME_APPLEVINE_AppleRoll3_13
	case B_OUTCOME_CAUGHT, ISLANDGAME_APPLEVINE_AppleRoll3_13
ISLANDGAME_APPLEVINE_AppleRoll3_13:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1

ISLANDGAME_APPLEVINE_AppleRoll3_6:
	finditem ITEM_TART_APPLE
	goto ISLANDGAME_APPLEVINE_AppleRoll3_1


ISLANDGAME_APPLEVINE_StoreSign_Text_0:
	.string "LA CUCINA DOLCHE\n"
	.string "Give your Milcery a makeover!$"

ISLANDGAME_APPLEVINE_CitySign_Text_0:
	.string "APPLEVINE\n"
	.string "CHECK YOUR APPLES FOR APPLIN!$"

ISLANDGAME_APPLEVINE_GameCornerSign_Text_0:
	.string "Eelektrik Game Corner\p"
	.string "Fun for all ages! :)$"

ISLANDGAME_APPLEVINE_SierraPathSign_Text_0:
	.string "SIERRA PATH{UP_ARROW}\n"
	.string "$"

ISLANDGAME_APPLEVINE_RockyPathSign_Text_0:
	.string "ROCKY PATH{RIGHT_ARROW}\n"
	.string "$"

ISLANDGAME_APPLEVINE_MelissaCall_Text_0:
	.string "...{PAUSE 60}\p"
	.string "{COLOR RED}(Hm? It looks like Melissa is calling me.)\p"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hellooo?{PAUSE 60} Hii, {PLAYER}! How's\n"
	.string "it been? Did you end up making it to\l"
	.string "Tidalcove yet?\p"
	.string "Whaaaat?{PAUSE 60} You've already beaten Ruka\n"
	.string "and gotten her badge?\p"
	.string "That's amazing!{PAUSE 60} Her Pokémon really are\n"
	.string "as glamorous as she is, yeah?\p"
	.string "It took me like of five tries before I\n"
	.string "could beat her Milotic. Ice-types\l"
	.string "really aren't my Gibby's strong suit...$"

ISLANDGAME_APPLEVINE_MelissaCall_Text_1:
	.string "{COLOR DARK_GRAY}Huh?{PAUSE 60} Where am I right now?{PAUSE 60} I'm in line\n"
	.string "for a meet-and-greet with some of the\l"
	.string "members of STARLIGHT at Aetheria!\p"
	.string "I've been standing here for a while, so I\n"
	.string "figured I'd check in to see how you're\l"
	.string "doing!\p"
	.string "Eeeh?{PAUSE 60} You saw THE Primrose in Oranna?{PAUSE 60}\n"
	.string "Ugggg, I'm jealous...{PAUSE 60} She's my favorite\l"
	.string "from STARLIGHT!{PAUSE 60} Shame she's not here\l"
	.string "though... she's too busy collecting the\l"
	.string "three gym badges.\p"
	.string "Anyways, it's been a hot minute since\n"
	.string "we've seen each other... {PAUSE 60} Wanna meet up\l"
	.string "here in Aetheria? It's the biggest city\l"
	.string "in all of the Maryan Isles!\p"
	.string "You're at Applevine, right? Aetheria is\n"
	.string "just down south from there. Just take\l"
	.string "Rocky Path and go through Lumine Cave\l"
	.string "to get to Bellehaven, and Aetheria will\l"
	.string "be just to the west!\p"
	.string "I've got a little surprise to give you\n"
	.string "when you arrive! See you then!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_0:
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Oh, hello {PLAYER}! Fancy seeing\n"
	.string "you here!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_1:
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It'll be worth checking your\n"
	.string "surroundings for hidden goodies!$"

ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0:
	.string "Toodles!$"

ISLANDGAME_APPLEVINE_NPC1_Text_0:
	.string "Welcome to Lumine Island, trainer! You\n"
	.string "must be famished from your travels.\p"
	.string "Here, take one of these. It is a sample\n"
	.string "from our confectionery.$"

ISLANDGAME_APPLEVINE_NPC1_Text_1:
	.string "We are located south of here. Come and\n"
	.string "stop by if you like our Sweet Hearts!$"

ISLANDGAME_APPLEVINE_NPC2_Text_0:
	.string "Hey...{PAUSE 30} if we catch them all...{PAUSE 60} does that\n"
	.string "mean...{PAUSE 60} we'll finally be free?$"

ISLANDGAME_APPLEVINE_NPC2_Text_1:
	.string "I see...$"

ISLANDGAME_APPLEVINE_NPC2_Text_2:
	.string "Ah...{PAUSE 60} I apologize, then.$"

ISLANDGAME_APPLEVINE_NPC3_Text_0:
	.string "I'm trying to teach my Zigzagoon how to\n"
	.string "surf on the water.\p"
	.string "So far, it hasn't been very successful...$"

ISLANDGAME_APPLEVINE_NPC4_Text_0:
	.string "Goon... {COLOR BLUE}(The ocean is just a really big\n"
	.string "bath tub, and I hate baths.)$"

ISLANDGAME_APPLEVINE_NPC5_Text_0:
	.string "I love my big Marill beach ball!$"

ISLANDGAME_APPLEVINE_NPC6_Text_0:
	.string "{COLOR RED}(It's a big beach ball of a Marill.)$"

ISLANDGAME_APPLEVINE_NPC7_Text_0:
	.string "I hate swimming during Luvdisc mating\n"
	.string "season.\p"
	.string "It just reminds me that I'm all alone on\n"
	.string "this crummy island...\p"
	.string "I'll always have you though, my signed\n"
	.string "swimsuit photo of Ruka.$"

ISLANDGAME_APPLEVINE_NPC8_Text_0:
	.string "The Island Guardian of Lumine is none\n"
	.string "other than Zapdos!\p"
	.string "When it flaps its wings, it can generate\n"
	.string "enough electricity to power the entire\l"
	.string "island!\p"
	.string "But it mostly stays cooped up in its\n"
	.string "nest atop Mount Therion.$"

ISLANDGAME_APPLEVINE_NPC9_Text_0:
	.string "Earlier today I was hungry, so I picked\n"
	.string "up a random apple on the ground and\l"
	.string "took a big bite out of it, not realizing\l"
	.string "there was a Pokémon living inside! That\l"
	.string "entire event has traumatized me. I\l"
	.string "don't think I can ever eat fruit again.$"

ISLANDGAME_APPLEVINE_NPC10_Text_0:
	.string "My boyfriend gave me a Luvdisc for our\n"
	.string "two-week anniversary! Isn't that just\l"
	.string "soooo romantic?\p"
	.string "I love it soooo much, I'm gonna use it in\n"
	.string "my next Pokémon Contest in Aetheria!$"

ISLANDGAME_APPLEVINE_NPC11_Text_0:
	.string "Buzz off, kid!$"

ISLANDGAME_APPLEVINE_NPC11_Text_1:
	.string "Hey, bud! {PAUSE 30}Over here!{PAUSE 30} Shhh! Be quiet!\n"
	.string "Stop attracting attention!\p"
	.string "You're a Pokémon trainer, yeah?{PAUSE 30} I uh,\n"
	.string "bet you want some of those rare prizes\l"
	.string "from the Game Corner, don'cha?\p"
	.string "Ho-ho! Well you're in luck pal, cause\n"
	.string "I've got stacks 'n stacks of coins!\p"
	.string "They're all yours...{PAUSE 60} if you're willin' to\n"
	.string "help a brotha out...{PAUSE 60}\p"
	.string "See uh, I'm in need of some “candy”, and\n"
	.string "I hear y'all trainers got tons of 'em.\p"
	.string "So with that being said...{PAUSE 60} you got the\n"
	.string "stuffs?$"

ISLANDGAME_APPLEVINE_NPC11_Text_2:
	.string "H-Hey there... you got the stuffs now?$"

ISLANDGAME_APPLEVINE_NPC11_Text_3:
	.string "No? Go away then! Shoo! Shoo!$"

ISLANDGAME_APPLEVINE_NPC11_Text_4:
	.string "I'm outie!$"

ISLANDGAME_APPLEVINE_NPC11_Text_5:
	.string "Rare Candy$"

ISLANDGAME_APPLEVINE_NPC11_Text_6:
	.string "Exp Candy XS$"

ISLANDGAME_APPLEVINE_NPC11_Text_7:
	.string "Exp Candy S$"

ISLANDGAME_APPLEVINE_NPC11_Text_8:
	.string "Exp Candy M$"

ISLANDGAME_APPLEVINE_NPC11_Text_9:
	.string "Exp Candy L$"

ISLANDGAME_APPLEVINE_NPC11_Text_10:
	.string "Exp Candy XL$"

ISLANDGAME_APPLEVINE_NPC11_Text_11:
	.string "Oooo, is that rare candy I see? I'll give\n"
	.string "you 4,000 coins for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_12:
	.string "Heheh... Thank ye kindly!$"

ISLANDGAME_APPLEVINE_NPC11_Text_13:
	.string "Huh? You holdin' out on me, bud??$"

ISLANDGAME_APPLEVINE_NPC11_Text_14:
	.string "Just an Exp Candy XS? Humph... 100 coins\n"
	.string "is all I'm givin' for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_15:
	.string "An Exp Candy S? How's 500 coins sound?$"

ISLANDGAME_APPLEVINE_NPC11_Text_16:
	.string "An Exp Candy M? I'll give ya 1,000 coins\n"
	.string "for it.$"

ISLANDGAME_APPLEVINE_NPC11_Text_17:
	.string "Ho-ho, an Exp Candy L? I'll give you\n"
	.string "2,000 coins for it!$"

ISLANDGAME_APPLEVINE_NPC11_Text_18:
	.string "An EXP Candy XL!? I'll give you a\n"
	.string "whopping 8,000 coins for that gem!!$"

ISLANDGAME_APPLEVINE_NPC12_Text_0:
	.string "That gaudy Game Corner is a stain on\n"
	.string "our once beautiful town.\p"
	.string "It's corrupting our youth, I tell you!\n"
	.string "Won't anyone think of the children!?\p"
	.string "I hear it's being run by some hooligans\n"
	.string "too... Just what we need. More crime!\p"
	.string "What's happened to this world I once\n"
	.string "knew and loved?$"

ISLANDGAME_APPLEVINE_NPC13_Text_0:
	.string "Borf!$"

ISLANDGAME_APPLEVINE_NPC14_Text_0:
	.string "I became an officer to get in the line\n"
	.string "of action, but all the chief's been\l"
	.string "having me do is lame paperwork.\p"
	.string "I should've just joined my friend in the\n"
	.string "merchant guild instead...\p"
	.string "They get to travel all around the isles,\n"
	.string "meanwhile I'm stuck listening to a\l"
	.string "jaded old man complain about the Game\l"
	.string "Corner for three hours.\p"
	.string "What's even the big deal? It's not like\n"
	.string "there's anything illegal going on inside\l"
	.string "or anything. They've broken no laws!$"

ISLANDGAME_APPLEVINE_NPC15_Text_0:
	.string "Out of the three main islands, Lumine is\n"
	.string "the largest and most populated one!$"

ISLANDGAME_APPLEVINE_CocoTalk1::
	.string "My name is Coco. I'm a friend of\n"
	.string "Professor Palm's, and the creator of\l"
	.string "Marya's Pokémon Storage System!\p"
	.string "Hopefully it's been convenient and\n"
	.string "helpful to you in your journey. Let me\l"
	.string "know if you ever have any issues!\p"
	.string "I actually wanted to ask a favor of you,\n"
	.string "if that's alright.$"

ISLANDGAME_APPLEVINE_CocoTalk2::
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}This here is a prototype for a new\n"
	.string "dowsing machine I'm developing, and I\l"
	.string "figured you'd be the perfect one to\l"
	.string "help test it for me, since you're\l"
	.string "roaming the isles anyways!$"

ISLANDGAME_APPLEVINE_CocoTalk3::
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It's super easy to use! All you\n"
	.string "have to do is turn it on, and it'll tell\l"
	.string "you if there are any hidden items\l"
	.string "nearby.\p"
	.string "It'll even tell you the direction and\n"
	.string "closeness of the item!\p"
	.string "Just like my storage system, I've\n"
	.string "designed it with the intention to be as\l"
	.string "user-friendly as possible! Hee-hee.\p"
	.string "But that's enough blabbering from me.\n"
	.string "You've got a Pokédex to fill, and a\l"
	.string "league to qualify for, as I've heard!\p"
	.string "If you ever have the time to chat\n"
	.string "though, you can find me at my house\l"
	.string "here in Applevine.$"
