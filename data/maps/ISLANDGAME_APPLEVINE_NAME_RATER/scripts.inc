ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts::
# 2 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC::
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPCCase::
# 33 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPCCase_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract::
# 39 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0, MSGBOX_YESNO
# 44 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2
ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1:
# 108 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 109 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2:
# 46 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	random 100
# 48 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_4
# 58 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_5
# 71 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_6
# 84 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_7
# 97 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_9
# 100 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 101 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_10
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_4:
# 49 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1
# 52 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 53 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_2
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_5:
# 59 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_3
# 62 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 63 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_4
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_6:
# 72 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_5
# 75 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 76 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_6
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_7:
# 85 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_7
# 88 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 89 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_8
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1


ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract::
# 113 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	lock
# 114 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 115 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	faceplayer
# 116 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract_Text_0
# 120 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 121 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 122 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract::
# 126 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	lock
# 127 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	goto_if_unset FLAG_TEMP_2, ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_2
ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_1:
# 145 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	faceplayer
# 146 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_2
# 149 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 150 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	waitmovement 0
# 151 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 152 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_2:
# 128 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_0
# 131 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 132 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playse SE_PIN
# 133 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 134 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	waitmovement 0
# 135 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	faceplayer
# 136 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 137 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	waitmovement 0
# 138 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_1
# 143 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	setflag FLAG_TEMP_2
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_1


ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPCCase_Text_0:
# 34 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR RED}(It's Coco's fancy new PC. It's big\n"
	.string "enough to fit her Pikachu inside.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0:
# 41 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR RED}(It's some sort of smart speaker shaped\n"
	.string "like a Porygon2.)\p"
	.string "(Its name is apparently Subaru. Should\n"
	.string "I give it a request?)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1:
# 50 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "> You asked if Subaru is a duck.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_2:
# 54 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}NO DUCK!!! AM ROBOT!!!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_3:
# 60 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "> You asked Subaru about STARLIGHT.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_4:
# 64 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}STARLIGHT is an idol group\n"
	.string "based in the Maryan Isles consisting of\l"
	.string "five members: Lucia as its front and\l"
	.string "center, Camille, Azalea, Serafina, and\l"
	.string "its newest member, Primrose. STARLIGHT\l"
	.string "is managed by Eden Productions, a\l"
	.string "talent agency stationed in the big city\l"
	.string "of Aetheria.\p"
	.string "Currently, their official PokéTube\n"
	.string "channel holds the number two spot for\l"
	.string "most subscribers on the website, only\l"
	.string "topped by Paldea's very own Iono!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_5:
# 73 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "> You asked Subaru about Ruka.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_6:
# 77 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}Ruka, colloqially known as\n"
	.string "Tidalcove's Precious Pearl, is a Maryan\l"
	.string "Gym Leader and supermodel.\p"
	.string "Ruka specializes in ice Pokémon,\n"
	.string "utilizing a snow-based strategy that\l"
	.string "takes full advantage of her Pokémon's\l"
	.string "type.\p"
	.string "According to interviews, Ruka used to\n"
	.string "have a bitter rivalry with famous idol\l"
	.string "Lucia, stating that the two of them\l"
	.string "viciously competed against one another\l"
	.string "when they were younger, but have since\l"
	.string "then mended their relationship.\p"
	.string "One of the most commonly asked\n"
	.string "questions about Ruka are her\l"
	.string "measurements, and as such, I will\l"
	.string "display them here: B90, W56, H86.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_7:
# 86 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "> You asked Subaru to tell you a joke.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_8:
# 90 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}Sure. What Pokemon does Swalot\n"
	.string "evolve from?\p"
	.string "...\p"
	.string "Hello? Are you still there? I need you\n"
	.string "to respond to complete my joke!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_9:
# 98 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "> You asked Subaru for trainer tips.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_10:
# 102 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}If you're not sure how to build\n"
	.string "your Pokémon team, you might want to\l"
	.string "try and form a three-type core!\p"
	.string "The most popular core is\n"
	.string "Fire-Grass-Water, but other viable\l"
	.string "cores you can try out are\l"
	.string "Steel-Fairy-Dragon and\l"
	.string "Psychic-Fighting-Dark. Hope I helped!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract_Text_0:
# 117 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "Pika Pika! {COLOR BLUE}(I'm helping my trainer build a\n"
	.string "new PC!)\p"
	.string "{COLOR DARK_GRAY}Pika Pi... {COLOR BLUE}(I could really use some help.\n"
	.string "The motherboard keeps shocking me.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_0:
# 129 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}Hm...{PAUSE 60} this goes here...{PAUSE 60} and that\n"
	.string "goes there...{PAUSE 60}$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_1:
# 139 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}Oh! Hiya {PLAYER}! Sorry, I was\n"
	.string "too engrossed in my work to see you.\p"
	.string "I'm currently working on another one of\n"
	.string "my inventions: A special scope that can\l"
	.string "reveal invisible Pokémon!\p"
	.string "It's still in the early stages of\n"
	.string "development though.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_2:
# 147 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "If you're interested in being my little\n"
	.string "Minccino, I'll let you know when it's\l"
	.string "ready to be tested!$"
