ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ISLANDGAME_APPLEVINE
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_Interact_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC1_Text_0
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2::
	lock
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_0
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_1
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_2
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_2
ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_2:
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_1
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_1


ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_0
	goto_if_unset FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_2
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_2, MSGBOX_YESNO
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_1:
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_6
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_21
	goto Applevine_TutorEnd
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5:
Applevine_TutorEnd:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_2:
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_1, MSGBOX_YESNO
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_1

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_6:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_9
	goto_if_unset FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_9
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_25
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_9:
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_3
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_4, 0
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_5, 1
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_6, 2
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_7, 3
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_8, 4
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_9, 5
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_10, 6
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_11, 7
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_12, 8
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_13, 9
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_10, 10
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_14, 11
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_15, 12
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_16, 13
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_17, 14
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_18, 15
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_19, 16
	dynmultipush ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_20, 17
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 1, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_16
	case 2, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_17
	case 3, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_18
	case 4, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_19
	case 5, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_20
	case 6, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_21
	case 7, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_22
	case 8, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_23
	case 9, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_24
	case 10, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_25
	case 11, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_26
	case 12, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_27
	case 13, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_28
	case 14, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_29
	case 15, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_30
	case 16, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_31
	case 17, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_32
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_21
	goto Applevine_TutorEnd
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14:
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_22
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_35
ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_34:
	goto_if_unset FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE, ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_37
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_24
	removeitem ITEM_HEART_SCALE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_16:
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_17:
	setvar VAR_0x8005, MOVE_SNARL
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_18:
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_19:
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_20:
	setvar VAR_0x8005, MOVE_FLAME_CHARGE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_21:
	setvar VAR_0x8005, MOVE_DEFOG
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_22:
	setvar VAR_0x8005, MOVE_SPITE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_23:
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_24:
	setvar VAR_0x8005, MOVE_BULLDOZE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_25:
	setvar VAR_0x8005, MOVE_DEFOG
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_26:
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_27:
	setvar VAR_0x8005, MOVE_FALSE_SWIPE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_28:
	setvar VAR_0x8005, MOVE_VENOSHOCK
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_29:
	setvar VAR_0x8005, MOVE_COVET
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_30:
	setvar VAR_0x8005, MOVE_ROCK_POLISH
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_31:
	setvar VAR_0x8005, MOVE_WORK_UP
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_32:
	setvar VAR_0x8005, MOVE_WORRY_SEED
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_14

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_35:
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_21
	goto Applevine_TutorEnd
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_34

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_37:
	msgbox ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_23
	setflag FLAG_APPLEVINE_MOVE_TUTOR_FREEBIE
	goto ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_5


ISLANDGAME_APPLEVINE_PKMNCENTER_NPC1_Text_0:
	.string "Man, the news channel sucks! Who cares\n"
	.string "about this politics crap? Where are the\l"
	.string "hot babes and cool explosions?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_0:
	.string "Hmm. Yes... Shallow and pedantic...$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC2_Text_1:
	.string "Hey, trainer! Your Pokémon are shallow\n"
	.string "and pedantic!\p"
	.string "...\p"
	.string "Huh? I shouldn't use words that I just\n"
	.string "learned on TV and don't know the\l"
	.string "meaning of yet?\p"
	.string "You must be one of those conspiracy\n"
	.string "theorists!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_0:
	.string "Hmm...{PAUSE 60} Very interesting!\p"
	.string "Hi there! Wanna hear a cool trainer tip I\n"
	.string "just learned from this book?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_NPC3_Text_1:
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
	.string "Aww. I wanted to flex my newfound\n"
	.string "knowledge.$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_0:
	.string "Hiya trainer! I'm one of Marya's\n"
	.string "legendary all-purpose Move Tutors!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_1:
	.string "Normally I'd like a heart scale for my\n"
	.string "services, but since you're a new\l"
	.string "customer, you get your first move\l"
	.string "taught for free! Isn't that swell?\p"
	.string "Would you like me to teach one of your\n"
	.string "Pokémon a move?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_2:
	.string "I'll teach your Pokémon a variety of\n"
	.string "moves just for a heart scale! How's\l"
	.string "that sound?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_3:
	.string "Splendid! Which move would you like to\n"
	.string "teach?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_4:
	.string "I'll decide later!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_5:
	.string "Bug Bite$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_6:
	.string "Snarl$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_7:
	.string "Thunder Wave$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_8:
	.string "Low Kick$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_9:
	.string "Flame Charge$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_10:
	.string "Defog$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_11:
	.string "Spite$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_12:
	.string "Grass Knot$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_13:
	.string "Bulldoze$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_14:
	.string "Icy Wind$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_15:
	.string "False Swipe$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_16:
	.string "Venoshock$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_17:
	.string "Covet$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_18:
	.string "Rock Polish$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_19:
	.string "Work Up$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_20:
	.string "Worry Seed$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_21:
	.string "Aw, alright. You should totally come to\n"
	.string "me if you change your mind though!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_22:
	.string "Okie. Which Pokémon do you want to\n"
	.string "learn this move?$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_23:
	.string "Hope you enjoy your free move!\n"
	.string "Definitely come back if you have a\l"
	.string "heart scale, though!$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_24:
	.string "> You handed a heart scale in exchange\n"
	.string "for her services.$"

ISLANDGAME_APPLEVINE_PKMNCENTER_MoveTutor_Text_25:
	.string "Sorry, I will need a heart scale from\n"
	.string "you.\p"
	.string "I'm sure you can find a Luvdisc swimming\n"
	.string "around town with one!$"
