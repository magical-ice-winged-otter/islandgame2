ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_MapScripts::
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_TV::
# 18 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_TV_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_BlooInteract::
# 41 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	faceplayer
# 43 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_BlooInteract_Text_0
# 47 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_CocoInteract::
# 54 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	lock
# 55 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	faceplayer
# 56 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 57 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_CocoInteract_Text_0
# 60 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	closemessage
# 61 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_EduardoInteract::
# 65 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	lock
# 66 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 68 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_EduardoInteract_Text_0
# 71 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	closemessage
# 72 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_WiltInteract::
# 76 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	lock
# 77 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	faceplayer
# 78 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 79 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_WiltInteract_Text_0
# 83 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	closemessage
# 84 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_TV_Text_0:
# 19 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	.string "“Woah, hey now, we're not going to buy\n"
	.string "your lousy overpriced bike, alright?”\p"
	.string "“Now where's my full art Pikachu!?”\p"
	.string "“Woah now, hold on. You have a choice!”\p"
	.string "“You can have the full art Pikachu... or\n"
	.string "this booster pack.”\p"
	.string "“What're ya, crazy? We'll take the\n"
	.string "Pikachu!”\p"
	.string "“Hey now, not so fast Misty, a full art\n"
	.string "Pikachu is a full art Pikachu, but the\l"
	.string "booster pack could have anything!”\p"
	.string "“It could even have the full art\n"
	.string "Pikachu! You know how much we've\l"
	.string "wanted one of those!”\p"
	.string "“Then let's just take the-”\n"
	.string "“We'll take the booster pack!”\p"
	.string "...\p"
	.string "“Oh we'll take the booster pack, you\n"
	.string "said.”\p"
	.string "“You gave up a guaranteed full art\n"
	.string "Pikachu for a bunch of bulk garbage!”\p"
	.string "“Come on Misty, you act like this is the\n"
	.string "first time I've done something stupid.\l"
	.string "You remember when I was supposed to\l"
	.string "get that full art Pikachu?”\p"
	.string "... “A full art Pikachu is a full art\n"
	.string "Pikachu, but the booster pack could\l"
	.string "have anything!”\p"
	.string "“It could even have the full art\n"
	.string "Pikachu! You know how much we've\l"
	.string "wanted one of those!”\p"
	.string "“Then let's just take the-”\n"
	.string "“We'll take the booster pack!”\p"
	.string "...\p"
	.string "“Ash, that just happened ten minutes\n"
	.string "ago.”$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_BlooInteract_Text_0:
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	.string "Azu... {COLOR BLUE}(Uggggghhhhh. Would it kill for\n"
	.string "them to give us some video games?)\p"
	.string "{COLOR BLUE}(I'm getting real bored of watching\n"
	.string "reruns of Pallet Guy.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_CocoInteract_Text_0:
# 58 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	.string "Coco Coco Coco Coco...$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_EduardoInteract_Text_0:
# 69 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	.string "¡Lax! (¡Hola entrenador! Soy Eduardo. Me\n"
	.string "gusta papas.)$"

ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F_WiltInteract_Text_0:
# 80 "data/maps/ISLANDGAME_BELLEHAVEN_FOSTER_HOME_2F/scripts.pory"
	.string "Tyro!{COLOR BLUE} (My trainer is a professional\n"
	.string "basketball player in Unova!)\p"
	.string "(I hope he comes back soon.)$"