ISLANDGAME_APPLEVINE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 12 + 6
	goto_if_gt ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_3
	return

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_2
	return


ISLANDGAME_APPLEVINE_StoreSign::
	msgbox ISLANDGAME_APPLEVINE_StoreSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_CitySign::
	msgbox ISLANDGAME_APPLEVINE_CitySign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_NPC1::
	lock
	faceplayer
	goto_if_unset FLAG_APPLEVINE_SWEETHEART_GIFT, ISLANDGAME_APPLEVINE_NPC1_2
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_1
ISLANDGAME_APPLEVINE_NPC1_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_NPC1_2:
	msgbox ISLANDGAME_APPLEVINE_NPC1_Text_0
	giveitem ITEM_SWEET_HEART
	goto ISLANDGAME_APPLEVINE_NPC1_1


ISLANDGAME_APPLEVINE_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_NPC2_2
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_2
ISLANDGAME_APPLEVINE_NPC2_1:
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return

ISLANDGAME_APPLEVINE_NPC2_2:
	msgbox ISLANDGAME_APPLEVINE_NPC2_Text_1
	playmoncry SPECIES_KYOGRE, CRY_MODE_NORMAL
	waitmoncry
	goto ISLANDGAME_APPLEVINE_NPC2_1


ISLANDGAME_APPLEVINE_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC3_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC4::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_NPC4_Text_0
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC5::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC5_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC6::
	lock
	msgbox ISLANDGAME_APPLEVINE_NPC6_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC7::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC7_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_StoreSign_Text_0:
	.string "LA CUCINA DOLCHE\n"
	.string "We also offer Milcery makeovers!$"

ISLANDGAME_APPLEVINE_CitySign_Text_0:
	.string "APPLEVINE\n"
	.string "Where the trees are Applin-free!$"

ISLANDGAME_APPLEVINE_NPC1_Text_0:
	.string "Welcome to Lumine Island, trainer! You\n"
	.string "must be famished from your travels.\p"
	.string "Here, take one of these. It is a sample\n"
	.string "from our confectionery.\p"
	.string "$"

ISLANDGAME_APPLEVINE_NPC1_Text_1:
	.string "We are located south of here. Come and\n"
	.string "stop by if you like our Sweet Hearts!$"

ISLANDGAME_APPLEVINE_NPC2_Text_0:
	.string "Hey... if we catch them all... does that\n"
	.string "mean... we'll finally be free?$"

ISLANDGAME_APPLEVINE_NPC2_Text_1:
	.string "I see...$"

ISLANDGAME_APPLEVINE_NPC2_Text_2:
	.string "Ah... I apologize, then.$"

ISLANDGAME_APPLEVINE_NPC3_Text_0:
	.string "I'm trying to teach my Zigzagoon how to\n"
	.string "surf on the water.\p"
	.string "So far, it hasn't been very successful...$"

ISLANDGAME_APPLEVINE_NPC4_Text_0:
	.string "Goon... {COLOR BLUE}(The ocean is just a really big\n"
	.string "bath tub, and I hate baths.)$"

ISLANDGAME_APPLEVINE_NPC5_Text_0:
	.string "I love my big Marill beach ball!$"

ISLANDGAME_APPLEVINE_NPC6_Text_0:
	.string "{COLOR RED}(It's a big beach ball of a Marill.)$"

ISLANDGAME_APPLEVINE_NPC7_Text_0:
	.string "I hate swimming during Luvdisc mating\n"
	.string "season.\p"
	.string "It just reminds me that I'm all alone on\n"
	.string "this crummy island...$"
