ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts::
# 4 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_APPLEVINE
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC1::
# 11 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	lock
# 12 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	faceplayer
# 13 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC1_Text_0
# 16 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 17 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	waitmovement 0
# 18 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	closemessage
# 19 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2::
# 23 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_0
# 27 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	closemessage
# 28 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	waitmovement 0
# 30 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 31 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	waitmovement 0
# 32 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	faceplayer
# 33 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_1
# 39 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 40 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	waitmovement 0
# 41 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	closemessage
# 42 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3::
# 46 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_2
# 62 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_2
ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_1:
# 66 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	closemessage
# 67 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_2:
# 53 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_1
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_1


ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor::
# 71 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	lock
# 72 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	faceplayer
# 73 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_0
# 76 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_2
# 83 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_2, MSGBOX_YESNO
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_1:
# 90 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_6
# 170 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_22
# 173 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	goto Applevine_TutorEnd
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5:
# 176 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
Applevine_TutorEnd:
# 177 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	closemessage
# 178 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_2:
# 77 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_1, MSGBOX_YESNO
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_1

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_6:
# 91 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 92 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_9
# 92 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_9
# 164 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_26
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_9:
# 93 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_3
# 96 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_4, 0
# 97 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_5, 1
# 98 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_6, 2
# 99 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_7, 3
# 100 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_8, 4
# 101 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_9, 5
# 102 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_10, 6
# 103 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_11, 7
# 104 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_12, 8
# 105 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_13, 9
# 106 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_14, 10
# 107 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_15, 11
# 108 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_16, 12
# 109 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_17, 13
# 110 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_18, 14
# 111 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_19, 15
# 112 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_20, 16
# 113 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_21, 17
# 114 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 115 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_16
# 117 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_17
# 118 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_18
# 119 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_19
# 120 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 5, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_20
# 121 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 6, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_21
# 122 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 7, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_22
# 123 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 8, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_23
# 124 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 9, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_24
# 125 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 10, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_25
# 126 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 11, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_26
# 127 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 12, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_27
# 128 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 13, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_28
# 129 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 14, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_29
# 130 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 15, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_30
# 131 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 16, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_31
# 132 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	case 17, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_32
# 134 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_22
# 137 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	goto Applevine_TutorEnd
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14:
# 139 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_23
# 142 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	special ChooseMonForMoveTutor
# 143 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	waitstate
# 144 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_35
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_34:
# 150 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_37
# 157 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_25
# 160 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	removeitem ITEM_HEART_SCALE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_16:
# 116 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_17:
# 117 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_SNARL
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_18:
# 118 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_19:
# 119 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_SWEEP
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_20:
# 120 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_FLAME_CHARGE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_21:
# 121 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_22:
# 122 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_COVET
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_23:
# 123 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_24:
# 124 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLDOZE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_25:
# 125 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_POWER
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_26:
# 126 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_27:
# 127 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_FALSE_SWIPE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_28:
# 128 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_VENOSHOCK
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_29:
# 129 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_RECYCLE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_30:
# 130 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_SMACK_DOWN
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_31:
# 131 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_32:
# 132 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setvar VAR_0x8005, MOVE_DUAL_CHOP
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_35:
# 145 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_22
# 148 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	goto Applevine_TutorEnd
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_34

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_37:
# 151 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_24
# 154 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	setflag FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC1_Text_0:
# 14 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Man, the news channel sucks! Who cares\n"
	.string "about this politics crap? Where are the\l"
	.string "hot babes and cool explosions?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_0:
# 25 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Hmm. Yes... Shallow and pedantic...$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_1:
# 34 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Hey, trainer! Your Pokémon are shallow\n"
	.string "and pedantic!\p"
	.string "...\p"
	.string "Huh? I shouldn't use words that I just\n"
	.string "learned on TV and don't know the\l"
	.string "meaning of yet?\p"
	.string "You must be one of those conspiracy\n"
	.string "theorists!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_0:
# 49 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Hmm...{PAUSE 60} Very interesting!\p"
	.string "Hi there! Wanna hear a cool trainer tip I\n"
	.string "just learned from this book?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_1:
# 54 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "When building your Pokémon team, you\n"
	.string "should make sure each of them cover's\l"
	.string "the weaknesses of another!\p"
	.string "So if you have a Pokémon that's weak to\n"
	.string "electric moves, you should put a\l"
	.string "ground-type Pokémon on your team so\l"
	.string "you can switch into it and get a free\l"
	.string "turn!\p"
	.string "“The most powerful move in Pokemon is\n"
	.string "switching.”\p"
	.string "Wow... Zeale truly has a way with words.\n"
	.string "No wonder he's been League Champion\l"
	.string "for three consecutive years!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_2:
# 63 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Aww. I wanted to flex my newfound\n"
	.string "knowledge.$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_0:
# 74 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Hiya trainer! I'm one of Marya's\n"
	.string "legendary all-purpose Move Tutors!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_1:
# 78 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Normally I'd like a heart scale for my\n"
	.string "services, but since you're a new\l"
	.string "customer, you get your first move\l"
	.string "taught for free! Isn't that swell?\p"
	.string "Would you like me to teach one of your\n"
	.string "Pokémon a move?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_2:
# 84 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "I'll teach your Pokémon a variety of\n"
	.string "moves just for a heart scale!\p"
	.string "How's that sound?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_3:
# 94 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Splendid! Which move would you like to\n"
	.string "teach?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_4:
# 96 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "I'll decide later!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_5:
# 97 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Bug Bite$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_6:
# 98 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Snarl$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_7:
# 99 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Thunder Wave$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_8:
# 100 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Low Sweep$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_9:
# 101 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Flame Charge$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_10:
# 102 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Tailwind$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_11:
# 103 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Covet$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_12:
# 104 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Grass Knot$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_13:
# 105 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Bulldoze$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_14:
# 106 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Secret Power$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_15:
# 107 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Icy Wind$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_16:
# 108 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "False Swipe$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_17:
# 109 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Venoshock$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_18:
# 110 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Recycle$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_19:
# 111 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Smack Down$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_20:
# 112 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Swagger$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_21:
# 113 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Dual Chop$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_22:
# 135 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Aw, alright. You should totally come to\n"
	.string "me if you change your mind though!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_23:
# 140 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Okie. Which Pokémon do you want to\n"
	.string "learn this move?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_24:
# 152 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Hope you enjoy your free move!\n"
	.string "Definitely come back if you have a\l"
	.string "heart scale, though!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_25:
# 158 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "> You handed a heart scale in exchange\n"
	.string "for her services.$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_26:
# 165 "data/maps/ISLANDGAME_APPLEVINE_PKMNCENTER/scripts.pory"
	.string "Sorry, I will need a heart scale from\n"
	.string "you.\p"
	.string "I'm sure you can find a Luvdisc swimming\n"
	.string "around town with one!$"
