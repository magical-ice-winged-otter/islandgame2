ISLANDGAME_BELLEHAVEN_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_4
ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	destroyfollower
	return

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	returnqueststate QUEST_VALLEY_OF_PEACE_CUBONE
# 11 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 13 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_4
	goto ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	goto ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ISLANDGAME_BELLEHAVEN_Interact_Sign::
# 25 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_LumineCave_Sign::
# 32 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_PokeShelterSign::
# 38 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PokeShelterSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Frankie::
# 46 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Frankie_Text_0
# 52 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 53 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Azurill::
# 57 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 58 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 59 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 60 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Azurill_Text_0
# 63 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 64 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Tyrogue::
# 68 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 69 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 70 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Tyrogue_Text_0
# 73 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 74 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Herriman::
# 78 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 79 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Herriman_Text_0
# 83 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 84 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1::
# 88 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 89 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 90 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0
# 94 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 95 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_3::
# 99 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 101 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_3_Text_0
# 104 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 105 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	waitmovement 0
# 106 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 107 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Litten::
# 111 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 112 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 113 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 114 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Litten_Text_0
# 117 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 118 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	waitmovement 0
# 119 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 120 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_4::
# 124 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 125 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 126 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_4_Text_0
# 130 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 131 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2::
# 135 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 136 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 137 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0, MSGBOX_YESNO
# 140 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2
# 146 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2
ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1:
# 152 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 153 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2:
# 141 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1
	goto ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1


ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0:
# 26 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "BELLEHAVEN\n"
	.string "Peace and Harmony$"

ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0:
# 33 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "LUMINE CAVE$"

ISLANDGAME_BELLEHAVEN_PokeShelterSign_Text_0:
# 39 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Bellehaven Pokémon Foster Care\n"
	.string "Change a life today!$"

ISLANDGAME_BELLEHAVEN_MapScripts_Frankie_Text_0:
# 49 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Excuse me, have you seen a Cubone\n"
	.string "anywhere by chance?\p"
	.string "We took one in earlier this morning, but\n"
	.string "I couldn't find it anywhere when it came\l"
	.string "dinner time!\p"
	.string "Ooh, I hope he's alright... I found him\n"
	.string "wandering around the Valley of Peace\l"
	.string "all by himself at night.\p"
	.string "Maybe he's returned there to look for\n"
	.string "his parents?$"

ISLANDGAME_BELLEHAVEN_MapScripts_Azurill_Text_0:
# 61 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Azu... {COLOR BLUE}(Mr. Herriman is such a killjoy. I\n"
	.string "can't have any fun around here...)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Tyrogue_Text_0:
# 71 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Tyro! {COLOR BLUE}(Heya! My name's Wilt. How's it\n"
	.string "hangin'?)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Herriman_Text_0:
# 80 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Good heavens, am I exhausted! I had to\n"
	.string "deal with Master Bloo's tomfoolery all\l"
	.string "day!\p"
	.string "I hope Master Mac comes back from\n"
	.string "schooling soon. I'm not sure how much of\l"
	.string "this trouble-maker I can take...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0:
# 91 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "To the east is the Valley of Peace, a\n"
	.string "sacred burial ground where people may\l"
	.string "go to pay their respects to the fallen.\p"
	.string "In the center of the valley is a shrine,\n"
	.string "where you can communicate with those\l"
	.string "in the afterlife, or so it is believed.$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_3_Text_0:
# 102 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "That's the last time I take my litty\n"
	.string "kitty out for a walk in Lumine Cave...$"

ISLANDGAME_BELLEHAVEN_MapScripts_Litten_Text_0:
# 115 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Mreow... {COLOR BLUE}(I hate mondays.)$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_4_Text_0:
# 127 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "I sense a premonition of impending\n"
	.string "doom... Can you feel it too?\p"
	.string "Ah, of course you cannot. You are not a\n"
	.string "cosmic adept like me.$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0:
# 138 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hey...{PAUSE 60} do you think ghosts are real?$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1:
# 142 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hmm...{PAUSE 30} I wonder if ghost Pokémon also\n"
	.string "count as real ghosts or not...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2:
# 147 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "You don't? I must be imagining that\n"
	.string "white hand on your shoulder then...\p"
	.string "...\p"
	.string "Ha! Made you look!$"
