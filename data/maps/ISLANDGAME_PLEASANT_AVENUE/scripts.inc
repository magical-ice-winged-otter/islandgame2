ISLANDGAME_PLEASANT_AVENUE_MapScripts::
# 8 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	gettime
# 11 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 22 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setflag FLAG_TEMP_2
# 23 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setflag FLAG_TEMP_A
# 24 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	returnqueststate QUEST_GOON_GANG_ENCOUNTER
# 14 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 17 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setflag FLAG_TEMP_A
# 18 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

ISLANDGAME_PLEASANT_AVENUE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	return


ISLANDGAME_PLEASANT_AVENUE_MapScripts_Sign::
# 33 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_MapScripts_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_PLEASANT_AVENUE_NPC1::
# 41 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	faceplayer
# 43 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_NPC1_Text_0
# 48 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 49 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 50 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	closemessage
# 51 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	release
	return


ISLANDGAME_PLEASANT_AVENUE_BauBau::
# 55 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	lock
# 56 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	faceplayer
# 57 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 58 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_BauBau_Text_0
# 61 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	closemessage
# 62 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	release
	return


ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight::
# 84 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	lock
# 85 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	playse SE_PIN
# 86 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 87 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 88 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	delay 30
# 89 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_0
# 92 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	showmoneybox 17, 1
# 93 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_1
# 97 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultipush ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_2, 0
# 98 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultipush ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_3, 1
# 99 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultipush ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_4, 2
# 100 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 101 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	case 1, ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_3
# 120 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	case 2, ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_4
# 139 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	hidemoneybox
# 140 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 141 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 142 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	goto TollTriggerRight_End
ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_1:
# 145 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
TollTriggerRight_End:
# 146 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	closemessage
# 147 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	release
	return

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_3:
# 103 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	checkmoney 1000
# 104 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_7
ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_6:
# 112 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	removemoney 1000
# 113 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	updatemoneybox
# 114 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	playse SE_SHOP
# 115 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitse
# 116 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_6
# 119 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_1

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_4:
# 121 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	hidemoneybox
# 122 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_7
# 125 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	trainerbattle_no_intro TRAINER_PLEASANT_AVENUE_GOONER, ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_8
# 126 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_9
# 131 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	closemessage
# 132 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement 1, ISLANDGAME_PLEASANT_AVENUE_GoonGruntRunAway
# 133 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 134 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	removeobject 1
# 135 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setflag FLAG_TEMP_A
# 136 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	startquest QUEST_GOON_GANG_ENCOUNTER
# 137 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_1

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_7:
# 105 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_5
# 108 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 109 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 110 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	goto TollTriggerRight_End
	goto ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_6


ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft::
# 151 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	lock
# 152 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	playse SE_PIN
# 153 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 154 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 155 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	delay 30
# 156 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_0
# 159 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	showmoneybox 17, 1
# 160 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_1
# 164 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultipush ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_2, 0
# 165 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultipush ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_3, 1
# 166 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultipush ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_4, 2
# 167 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 168 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	switch VAR_RESULT
# 169 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	case 1, ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_3
# 187 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	case 2, ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_4
# 206 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	hidemoneybox
# 207 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 208 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 209 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	goto TollTriggerLeft_End
ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_1:
# 212 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
TollTriggerLeft_End:
# 213 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	closemessage
# 214 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	release
	return

ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_3:
# 170 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	checkmoney 1000
# 171 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_7
ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_6:
# 179 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	removemoney 1000
# 180 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	updatemoneybox
# 181 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	playse SE_SHOP
# 182 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitse
# 183 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_6
# 186 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_1

ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_4:
# 188 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	hidemoneybox
# 189 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_7
# 192 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	trainerbattle_no_intro TRAINER_PLEASANT_AVENUE_GOONER, ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_8
# 193 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_9
# 198 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	closemessage
# 199 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement 1, ISLANDGAME_PLEASANT_AVENUE_GoonGruntRunAway
# 200 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 201 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	removeobject 1
# 202 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setflag FLAG_TEMP_A
# 203 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	startquest QUEST_GOON_GANG_ENCOUNTER
# 204 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_1

ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_7:
# 172 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	msgbox ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_5
# 175 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 176 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	waitmovement 0
# 177 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	goto TollTriggerLeft_End
	goto ISLANDGAME_PLEASANT_AVENUE_TollTriggerLeft_6


# 217 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
ISLANDGAME_PLEASANT_AVENUE_GoonGruntRunAway:
# 218 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 218 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 218 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 219 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	jump_2_left
# 220 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_down
# 220 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_down
# 220 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_down
# 221 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 221 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 221 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 221 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
# 221 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	walk_fast_left
	step_end

ISLANDGAME_PLEASANT_AVENUE_MapScripts_Sign_Text_0:
# 34 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "PL3454NT 4V3NU3\n"
	.string "Da GoonerZ WuZ HerE!\p"
	.string "...\p"
	.string "{COLOR RED}(Looks like the sign's been vandalized.)$"

ISLANDGAME_PLEASANT_AVENUE_NPC1_Text_0:
# 44 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "I love my floofy li'l pups, but they're a\n"
	.string "real piece of work sometimes.\p"
	.string "They never seem to stop barking, no\n"
	.string "matter what I do.\p"
	.string "I just hope they'll grow out of it when\n"
	.string "they evolve.$"

ISLANDGAME_PLEASANT_AVENUE_BauBau_Text_0:
# 59 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "BAU BAU!$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_0:
# 90 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "Ayo, this is Goon Gang Turf! If ya wanna\n"
	.string "pass, yer gonna hafta pay da toll!$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_1:
# 94 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "It's gonna cost a thousand clams to\n"
	.string "pass! Are ya coughing up the dough!?$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_2:
# 97 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "Turn back$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_3:
# 98 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "{COLOR GREEN}Pay the toll$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_4:
# 99 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "{COLOR RED}“Nah, I'd win”$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_5:
# 106 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "Beat it, cheapskate!$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_6:
# 117 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "Hehe... Pleasure doin' business!$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_7:
# 123 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "You little punk! Time to teach you some\n"
	.string "manners!$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_8:
# 125 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "Nooooo! My precious little Goon!$"

ISLANDGAME_PLEASANT_AVENUE_TollTriggerRight_Text_9:
# 127 "data/maps/ISLANDGAME_PLEASANT_AVENUE/scripts.pory"
	.string "Rrgghh... You won't get away with this!\p"
	.string "I-I'm gonna call my boss, and he's gonna\n"
	.string "BEAT you up!\p"
	.string "WAAAAH! BOOOOOOOOOOOSSSSSSSS!$"
