ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts::
# 9 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	compare VAR_SPOOKY_HOUSE_STATE, 3
	goto_if_gt ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 0
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 10 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	compare VAR_SPOOKY_HOUSE_STATE, 4
	goto_if_lt ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 15 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 1
# 16 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 2
# 17 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 3
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut::
# 23 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 25 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmoncry
# 26 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 1
# 27 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut_Text_0
# 28 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	closemessage
# 29 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


# 32 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookyApproach:
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
# 33 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_down
	step_end

# 36 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookySpin:
# 37 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 38 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 39 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 40 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 41 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 42 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 43 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 44 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 45 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 46 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 47 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 48 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 49 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 50 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 51 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 52 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 53 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 54 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 55 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 56 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 57 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 58 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 59 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 60 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 61 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 62 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 63 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 64 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 65 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 66 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 67 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 68 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 69 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 70 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 71 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 72 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 73 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_right
# 74 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 75 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_down
# 76 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 77 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_left
# 78 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 79 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 80 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_2
# 81 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_player
# 82 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	step_end

# 85 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookyTP:
# 86 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	face_up
# 87 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	disable_anim
# 88 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 89 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 90 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 91 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 92 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 93 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 94 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	step_end

# 97 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
spookyHover:
# 98 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	slide_up
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_16
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_16
# 99 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	delay_16
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
# 100 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	walk_right
	step_end

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1::
# 104 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 105 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 106 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitse
# 107 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 108 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 109 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	addobject 1
# 110 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxy 1, 4, 8
# 111 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	addobject 2
# 112 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxy 2, 5, 8
# 113 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement 1, spookyApproach
# 114 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement 2, spookyApproach
# 115 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 116 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Text_0
# 120 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 122 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 1
# 123 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 2
# 124 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxyperm 1, -3, 1
# 125 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxyperm 2, -3, 1
# 126 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 3
# 127 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 128 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3::
# 145 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 146 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 147 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 148 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 149 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 150 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement 3, spookyHover
# 151 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 152 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 3
# 153 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxyperm 3, -3, 1
# 154 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3_Text_0
# 155 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook4::
# 159 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	lock
# 160 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playse SE_M_NIGHTMARE
# 162 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	addobject 4
# 163 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxy 4, 19, 3
# 164 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 166 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 167 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 168 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 169 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 170 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	playmoncry SPECIES_GOTHITELLE, CRY_MODE_NORMAL
# 171 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmoncry
# 172 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement 4, spookySpin
# 173 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 174 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	applymovement 4, spookyTP
# 175 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	waitmovement 0
# 176 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	removeobject 4
# 177 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setobjectxyperm 4, -3, 1
# 178 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	setvar VAR_SPOOKY_HOUSE_STATE, 4
# 179 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut_Text_0:
# 27 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	.string "LeAVe mY HoUSE nOW NoW nOW NOw NOW\n"
	.string "grAWUghhH$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Text_0:
# 117 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	.string "Leave this place...\p"
	.string "While you still can...$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3_Text_0:
# 154 "data/maps/ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE/scripts.pory"
	.string "{COLOR RED}(Huh...?)$"
