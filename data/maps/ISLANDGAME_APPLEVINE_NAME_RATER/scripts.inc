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
# 11 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC2::
# 17 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC2_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC3::
# 23 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC3_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract::
# 29 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0, MSGBOX_YESNO
# 34 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2
ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1:
# 98 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 99 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2:
# 36 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	random 100
# 38 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_4
# 48 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_5
# 61 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_6
# 74 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_7
# 87 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_9
# 90 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 91 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_10
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_4:
# 39 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1
# 42 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 43 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_2
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_5:
# 49 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_3
# 52 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 53 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_4
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_6:
# 62 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_5
# 65 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 66 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_6
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_7:
# 75 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_7
# 78 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
# 79 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_8
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1


ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract::
# 103 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	lock
# 104 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 105 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	faceplayer
# 106 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract_Text_0
# 110 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 111 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 112 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract::
# 116 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	lock
# 117 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	goto_if_unset FLAG_TEMP_2, ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_2
ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_1:
# 135 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	faceplayer
# 136 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_2
# 139 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 140 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	waitmovement 0
# 141 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 142 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_2:
# 118 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_0
# 121 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	closemessage
# 122 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	playse SE_PIN
# 123 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 124 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	waitmovement 0
# 125 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	faceplayer
# 126 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 127 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	waitmovement 0
# 128 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_1
# 133 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	setflag FLAG_TEMP_2
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_1


ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC_Text_0:
# 12 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR RED}(It's Coco's gaming setup. This looks\n"
	.string "like it cost a lot of money.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC2_Text_0:
# 18 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR RED}(Wow, there are like, fifty tabs open on\n"
	.string "this computer.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_InspectPC3_Text_0:
# 24 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR RED}(It's a really fancy PC see-through\n"
	.string "tower case with RGB lights.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0:
# 31 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR RED}(It's some sort of smart speaker shaped\n"
	.string "like a Porygon2.)\p"
	.string "(Its name is apparently Subaru. Should\n"
	.string "I give it a request?)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1:
# 40 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}> You asked if Subaru is a duck.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_2:
# 44 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}NO DUCK!!! AM ROBOT!!!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_3:
# 50 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}> You asked Subaru about STARLIGHT.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_4:
# 54 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
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
# 63 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}> You asked Subaru about Ruka.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_6:
# 67 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
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
# 76 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}> You asked Subaru to tell you a joke.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_8:
# 80 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}Sure. What Pokemon does Swalot\n"
	.string "evolve from?\p"
	.string "...\p"
	.string "Hello? Are you still there? I need you\n"
	.string "to respond to complete my joke!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_9:
# 88 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}> You asked Subaru for trainer tips.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_10:
# 92 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}If you're not sure how to build\n"
	.string "your Pokémon team, you might want to\l"
	.string "try and form a three-type core!\p"
	.string "The most popular core is\n"
	.string "Fire-Grass-Water, but other viable\l"
	.string "cores you can try out are\l"
	.string "Steel-Fairy-Dragon and\l"
	.string "Psychic-Fighting-Dark. Hope I helped!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract_Text_0:
# 107 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "Pika Pika! {COLOR BLUE}(I'm helping my trainer build a\n"
	.string "new PC!)\p"
	.string "{COLOR DARK_GRAY}Pika Pi... {COLOR BLUE}(I could really use some help. I\n"
	.string "have no idea where anything goes.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_0:
# 119 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}Hm...{PAUSE 60} this goes here...{PAUSE 60} and that\n"
	.string "goes there...{PAUSE 60}$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_1:
# 129 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}Oh! Hiya {PLAYER}! Sorry, I was\n"
	.string "too engrossed in my work to see you.\p"
	.string "I'm currently working on another one of\n"
	.string "my inventions: A special scope that can\l"
	.string "reveal invisible Pokémon!\p"
	.string "It's still in the early stages of\n"
	.string "development though.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_2:
# 137 "data/maps/ISLANDGAME_APPLEVINE_NAME_RATER/scripts.pory"
	.string "If you're interested in being my little\n"
	.string "Minccino, I'll let you know when it's\l"
	.string "ready to be tested!$"
