ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_VERDANT_WOODS_MIMIKYU_DEFEATED, ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_SPOOKY_HOUSE_STATE, 2
	goto_if_eq ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_SPOOKY_HOUSE_STATE, 0
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	compare VAR_SPOOKY_HOUSE_STATE, 1
	goto_if_eq ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	removeobject 2
	removeobject 3
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut::
	lock
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
	setvar VAR_SPOOKY_HOUSE_STATE, 1
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut_Text_0
	closemessage
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_LockedDoor::
	lock
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_LockedDoor_Text_0
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
	waitmoncry
	closemessage
	release
	return


spookyApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

spookySpin:
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_2
	face_up
	delay_2
	face_player
	step_end

spookyTP:
	face_up
	disable_anim
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	step_end

spookyHover:
	delay_16
	delay_16
	delay_16
	slide_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1::
	lock
	playse SE_M_NIGHTMARE
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement 2, spookyApproach
	applymovement 3, spookyApproach
	waitmovement 0
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Text_0
	fadescreen FADE_TO_BLACK
	playse SE_M_NIGHTMARE
	waitse
	removeobject 2
	removeobject 3
	setobjectxyperm 2, -3, 1
	setobjectxyperm 3, -3, 1
	setvar VAR_SPOOKY_HOUSE_STATE, 2
	fadescreen FADE_FROM_BLACK
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook2::
	lock
	playse SE_M_NIGHTMARE
	waitse
	applymovement 1, spookySpin
	waitmovement 0
	playse SE_M_EXPLOSION
	msgbox ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook2_Text_0
	applymovement 1, spookyTP
	waitmovement 0
	removeobject 1
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook3::
	lock
	applymovement 4, spookyHover
	waitmovement 0
	removeobject 4
	release
	return


ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_GetOut_Text_0:
	.string "LeAVe mY HoUSE nOW NoW nOW NOw NOW\n"
	.string "grAWUghhH$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_LockedDoor_Text_0:
	.string "(The door is locked. I can feel an eerie\n"
	.string "presence behind it.. Brr...)\p"
	.string "$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook1_Text_0:
	.string "Leave this place...\p"
	.string "While you still can...$"

ISLANDGAME_VERDANT_WOODS_SPOOKY_HOUSE_Spook2_Text_0:
	.string "$"
