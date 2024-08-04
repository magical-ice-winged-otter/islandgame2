ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts::
	.byte 0


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Spook::
	lock
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	addobject 1
	setobjectxy 1, 9, 2
	fadescreen FADE_FROM_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Spook_Text_0
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	removeobject 1
	setobjectxyperm 1, -3, 1
	fadescreen FADE_FROM_BLACK
	setvar VAR_SPOOKY_HOUSE_STATE, 5
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Item::
	lock
	finditem ITEM_SPELL_TAG
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Item_Text_0
	setvar VAR_SPOOKY_HOUSE_STATE, 6
	release
	return


spookyInch:
	walk_down
	step_end

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1::
	lock
	setvar VAR_SPOOKY_HOUSE_STATE, 7
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
	waitmoncry
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	addobject 2
	setobjectxy 2, 21, 3
	fadescreen FADE_FROM_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	applymovement 2, spookyInch
	fadescreen FADE_FROM_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	applymovement 2, spookyInch
	fadescreen FADE_FROM_BLACK
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_MIMIKYU, 30, 0, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_SNEAK, MOVE_MIMIC, MOVE_DOUBLE_TEAM, MOVE_FEINT_ATTACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3:
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	removeobject 2
	setobjectxyperm 2, -3, 1
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2::
	lock
	setvar VAR_SPOOKY_HOUSE_STATE, 7
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
	waitmoncry
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	addobject 2
	setobjectxy 2, 22, 3
	fadescreen FADE_FROM_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	applymovement 2, spookyInch
	fadescreen FADE_FROM_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	applymovement 2, spookyInch
	fadescreen FADE_FROM_BLACK
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_MIMIKYU, 30, 0, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_SNEAK, MOVE_MIMIC, MOVE_DOUBLE_TEAM, MOVE_FEINT_ATTACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_3
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_4
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_6
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_1:
	removeobject 2
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_3:
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_4:
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_5:
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_6:
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_1


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Spook_Text_0:
	.string "This is your final chance... Please don't\n"
	.string "end up like the rest of us...$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Item_Text_0:
	.string "{COLOR RED}(Brrr... Did the air suddenly just get\n"
	.string "colder?)$"
