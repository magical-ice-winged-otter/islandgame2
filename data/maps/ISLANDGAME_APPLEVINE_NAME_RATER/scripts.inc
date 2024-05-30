ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract::
	lock
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2
ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2:
	random 100
	compare VAR_RESULT, 20
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_4
	compare VAR_RESULT, 40
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_5
	compare VAR_RESULT, 60
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_6
	compare VAR_RESULT, 80
	goto_if_lt ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_7
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_9
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_10
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_4:
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_2
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_5:
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_3
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_4
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_6:
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_5
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_6
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_7:
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_7
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_8
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1


ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract::
	lock
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract_Text_0
	applymovement 2, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract::
	lock
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_0
	closemessage
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	faceplayer
	applymovement 3, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_1
	applymovement 3, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0:
	.string "{COLOR RED}(It's some sort of smart speaker shaped\n"
	.string "like a Porygon2.)\p"
	.string "(Its name is apparently Subaru. Should\n"
	.string "I give it a request?)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1:
	.string "> You asked if Subaru is a duck.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_2:
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}NO DUCK!!! AM ROBOT!!!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_3:
	.string "> You asked Subaru about STARLIGHT.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_4:
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}STARLIGHT is an idol group\n"
	.string "based in the Maryan Isles consisting\l"
	.string "of five members: Lucia as its front and\l"
	.string "center, Camille, Azalea, Serafina, and\l"
	.string "its newest member, Primrose. STARLIGHT\l"
	.string "is managed by Eden Productions, a\l"
	.string "talent agency stationed in the big\l"
	.string "city of Aetheria.\p"
	.string "Currently, their official PokéTube\n"
	.string "channel holds the number one spot for\l"
	.string "most subscribers on the website!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_5:
	.string "> You asked Subaru about Ruka.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_6:
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
	.string "viciously competed against one\l"
	.string "another when they were younger, but\l"
	.string "have since then mended their\l"
	.string "relationship.\p"
	.string "One of the most commonly asked\n"
	.string "questions about Ruka are her\l"
	.string "measurements, and as such, I will\l"
	.string "display them here: B90, W56, H86.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_7:
	.string "> You asked Subaru to tell you a joke.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_8:
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}Sure. Can you tell me the 316th\n"
	.string "Pokémon in the national Pokédex?\p"
	.string "> You told Subaru that you're too savvy\n"
	.string "to fall for that.\p"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}Drats. It was worth a try.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_9:
	.string "> You asked Subaru for trainer tips.$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_10:
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}If you're not sure how to build\n"
	.string "your Pokémon team, you might want to\l"
	.string "try and form a three-type core!\p"
	.string "The most popular core is\n"
	.string "Fire-Grass-Water, but other viable\l"
	.string "cores you can try out are\l"
	.string "Steel-Fairy-Dragon and\l"
	.string "Psychic-Fighting-Dark. Hope I helped!$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_PikachuInteract_Text_0:
	.string "Pika Pika! {COLOR BLUE}(I'm helping my trainer build a\n"
	.string "new PC!)\p"
	.string "{COLOR DARK_GRAY}Pika Pi... {COLOR BLUE}(I could really use some help. I\n"
	.string "have no idea where anything goes.)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_0:
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}Hm...{PAUSE 60} this goes here...{PAUSE 60} and that\n"
	.string "goes there...{PAUSE 60}\p"
	.string "$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_CocoInteract_Text_1:
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}Oh! Hiya {PLAYER}! Sorry, I was\n"
	.string "too engrossed in my work to see you.\p"
	.string "I'm currently working on another one of\n"
	.string "my inventions: A special scope that\l"
	.string "can reveal invisible Pokémon!\p"
	.string "It's still in the early stages of\n"
	.string "development though. If you're\l"
	.string "interested in being my little Minccino,\l"
	.string "I'll let you know when it's ready to be\l"
	.string "tested!$"
