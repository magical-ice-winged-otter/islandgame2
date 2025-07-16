ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts::
# 2 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 6
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 3 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	compare VAR_SPOOKY_HOUSE_STATE, 7
	goto_if_eq ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV::
# 17 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	goto_if_set FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV_1
# 23 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV_Text_1, MSGBOX_SIGN
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV_1:
# 18 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Spook::
# 31 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playse SE_M_NIGHTMARE
# 34 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	addobject 1
# 35 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxy 1, 9, 2
# 36 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 38 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 39 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 40 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 41 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 42 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Spook_Text_0
# 43 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	closemessage
# 44 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playse SE_M_NIGHTMARE
# 46 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 1
# 47 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 1, -3, 1
# 48 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 5
# 50 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Item::
# 54 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	lock
# 55 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	finditem ITEM_MIMIKIUM_Z
# 56 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 57 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 58 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 60 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Item_Text_0
# 61 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	closemessage
# 62 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 6
# 63 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	release
	return


# 66 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
spookyInch:
# 67 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	walk_down
	step_end

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1::
# 71 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 7
# 73 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 74 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmoncry
# 75 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 76 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 77 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 78 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	addobject 2
# 80 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxy 2, 21, 3
# 81 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 82 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 83 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 84 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement 2, spookyInch
# 86 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 88 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 89 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement 2, spookyInch
# 91 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 94 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 95 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_MIMIKYU, 30, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_SNEAK, MOVE_MIMIC, MOVE_COPYCAT, MOVE_FEINT_ATTACK
# 96 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmoncry
# 101 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 102 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	dowildbattle
# 103 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 104 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_2
# 108 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_2
# 111 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3
# 114 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_4
# 119 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 120 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_2:
# 109 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 110 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_3:
# 112 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 113 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu1_4:
# 115 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 116 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
# 117 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2::
# 126 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	lock
# 127 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 7
# 128 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 129 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmoncry
# 130 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 131 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 132 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 133 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playse SE_M_NIGHTMARE
# 135 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitse
# 136 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	addobject 2
# 137 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxy 2, 22, 3
# 138 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 139 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 140 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 141 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playse SE_M_NIGHTMARE
# 143 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitse
# 144 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement 2, spookyInch
# 145 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 146 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 147 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 148 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playse SE_M_NIGHTMARE
# 150 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitse
# 151 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement 2, spookyInch
# 152 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 155 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 156 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_MIMIKYU, 30, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_SNEAK, MOVE_MIMIC, MOVE_COPYCAT, MOVE_FEINT_ATTACK
# 157 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 158 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 159 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmovement 0
# 160 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 161 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	waitmoncry
# 162 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 163 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	dowildbattle
# 164 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 165 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 167 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_2
# 169 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_2
# 172 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_3
# 175 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_4
# 180 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 181 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_2:
# 170 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 171 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_3:
# 173 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 174 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Mimikyu2_4:
# 176 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	removeobject 2
# 177 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setobjectxyperm 2, -3, 1
# 178 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	setflag FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV_Text_0:
# 19 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	.string "{COLOR RED}(There's nothing but static. Why is the\n"
	.string "TV even turned on...?)$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_TV_Text_1:
# 24 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	.string "ThIS roOm wiLl bE yOUR ToMB ThIS roOm\n"
	.string "wiLl bE yOUR ToMB gWauhAUhauahAHAHA$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Spook_Text_0:
# 42 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	.string "This is your final chance... Please don't\n"
	.string "end up like the rest of us...$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2_Item_Text_0:
# 60 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE2/scripts.pory"
	.string "{COLOR RED}(Brrr...{PAUSE 60} Did the air suddenly just get\n"
	.string "colder?)$"
