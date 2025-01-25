ISLANDGAME_BELLEHAVEN_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_4
	return

ISLANDGAME_BELLEHAVEN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_BELLEHAVEN_Interact_Sign::
# 20 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_LumineCave_Sign::
# 27 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_PokeShelterSign::
# 33 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PokeShelterSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Frankie::
# 41 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 43 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Frankie_Text_0
# 47 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 48 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Azurill::
# 52 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 53 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 54 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 55 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Azurill_Text_0
# 58 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Tyrogue::
# 63 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 65 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Tyrogue_Text_0
# 68 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 69 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Herriman::
# 73 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 74 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Herriman_Text_0
# 78 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 79 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1::
# 83 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 84 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 85 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0
# 89 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 90 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_3::
# 94 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 95 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 96 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_3_Text_0
# 99 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 100 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	waitmovement 0
# 101 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 102 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_Litten::
# 106 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 107 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 108 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 109 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_Litten_Text_0
# 112 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 113 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	waitmovement 0
# 114 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 115 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_4::
# 119 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 120 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 121 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_4_Text_0
# 125 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 126 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2::
# 130 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	lock
# 131 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	faceplayer
# 132 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0, MSGBOX_YESNO
# 135 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2
# 141 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2
ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1:
# 147 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	closemessage
# 148 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	release
	return

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_2:
# 136 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1
	goto ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_1


ISLANDGAME_BELLEHAVEN_Interact_Sign_Text_0:
# 21 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "BELLEHAVEN\n"
	.string "Peace and Tranquility$"

ISLANDGAME_BELLEHAVEN_LumineCave_Sign_Text_0:
# 28 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "LUMINE CAVE$"

ISLANDGAME_BELLEHAVEN_PokeShelterSign_Text_0:
# 34 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Bellehaven Pokémon Foster Care\n"
	.string "Change a life today!$"

ISLANDGAME_BELLEHAVEN_MapScripts_Frankie_Text_0:
# 44 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Excuse me, have you seen a Cubone\n"
	.string "anywhere by chance? We took one in\l"
	.string "earlier this morning, but I couldn't find\l"
	.string "it anywhere when it came dinner time!\p"
	.string "Ooh, I hope he's alright. I found him\n"
	.string "weeping alone in the Valley of Peace.\l"
	.string "Maybe he's returned there to look for\l"
	.string "his parents?$"

ISLANDGAME_BELLEHAVEN_MapScripts_Azurill_Text_0:
# 56 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Azu... {COLOR BLUE}(Mr. Herriman is such a killjoy. I\n"
	.string "can't have any fun around here...)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Tyrogue_Text_0:
# 66 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Tyro! {COLOR BLUE}(Heya! My name's Wilt. How's it\n"
	.string "hangin'?)$"

ISLANDGAME_BELLEHAVEN_MapScripts_Herriman_Text_0:
# 75 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Good heavens, am I exhausted! I had to\n"
	.string "deal with Master Bloo's tomfoolery all\l"
	.string "day!\p"
	.string "I hope Master Mac comes back from\n"
	.string "schooling soon. I'm not sure how much of\l"
	.string "this trouble-maker I can take...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_1_Text_0:
# 86 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "To the east is the Valley of Peace, a\n"
	.string "sacred burial ground where people may\l"
	.string "go to pay their respects to the fallen.\p"
	.string "In the center of the valley is a shrine,\n"
	.string "where you can communicate with those\l"
	.string "in the afterlife, or so it is believed.$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_3_Text_0:
# 97 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "That's the last time I take my litty\n"
	.string "kitty out for a walk in Lumine Cave...$"

ISLANDGAME_BELLEHAVEN_MapScripts_Litten_Text_0:
# 110 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Mreow... (I hate mondays.)$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_4_Text_0:
# 122 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "I sense a premonition of impending\n"
	.string "doom... Can you feel it too?\p"
	.string "Ah, of course you cannot. You are not a\n"
	.string "cosmic adept like me.$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_0:
# 133 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hey...{PAUSE 60} do you think ghosts are real?$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_1:
# 137 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "Hmm...{PAUSE 30} I wonder if ghost Pokémon also\n"
	.string "count as real ghosts or not...$"

ISLANDGAME_BELLEHAVEN_MapScripts_NPC_2_Text_2:
# 142 "data/maps/ISLANDGAME_BELLEHAVEN/scripts.pory"
	.string "You don't? I must be imagining that\n"
	.string "white hand on your shoulder then...\p"
	.string "...\p"
	.string "Ha! Made you look!$"
