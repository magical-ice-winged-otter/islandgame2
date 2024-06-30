ISLANDGAME_APPLEVINE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	setflag FLAG_TEMP_2
ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_set FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_3
	goto ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_APPLEVINE_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_APPLEVINE_StoreSign::
	msgbox ISLANDGAME_APPLEVINE_StoreSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_CitySign::
	msgbox ISLANDGAME_APPLEVINE_CitySign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_GameCornerSign::
	msgbox ISLANDGAME_APPLEVINE_GameCornerSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_SierraPathSign::
	msgbox ISLANDGAME_APPLEVINE_SierraPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_RockyPathSign::
	msgbox ISLANDGAME_APPLEVINE_RockyPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_CocoInteract::
	lock
	faceplayer
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_CocoInteract_2
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_1
ISLANDGAME_APPLEVINE_CocoInteract_1:
	release
	return

ISLANDGAME_APPLEVINE_CocoInteract_2:
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
	applymovement 19, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
	giveitem ITEM_ITEMFINDER
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
	setvar VAR_TEMP_1, 1
	closemessage
	goto ISLANDGAME_APPLEVINE_CocoInteract_1


ISLANDGAME_APPLEVINE_CocoTrigger1::
	lock
	playse SE_PIN
	applymovement 19, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
	closemessage
	applymovement 19, CocoWalkOver1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
	applymovement 19, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
	giveitem ITEM_ITEMFINDER
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
	closemessage
	applymovement 19, CocoLeave
	waitmovement 0
	removeobject 19
	release
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_APPLEVINE_CocoTrigger2::
	lock
	playse SE_PIN
	applymovement 19, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoInteract_Text_0
	closemessage
	applymovement 19, CocoWalkOver2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk1
	applymovement 19, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	applymovement 19, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 19, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_APPLEVINE_CocoTalk2
	giveitem ITEM_ITEMFINDER
	setflag FLAG_APPLEVINE_ITEMFINDER_RECEIVED
	msgbox ISLANDGAME_APPLEVINE_CocoTalk3
	msgbox ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0
	closemessage
	applymovement 19, CocoLeave
	waitmovement 0
	removeobject 19
	release
	setvar VAR_TEMP_1, 1
	return


CocoWalkOver1:
	walk_right
	walk_right
	walk_right
	step_end

CocoWalkOver2:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

CocoLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

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
	setflag FLAG_APPLEVINE_SWEETHEART_GIFT
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
	applymovement 8, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC4::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_APPLEVINE_NPC4_Text_0
	applymovement 9, Common_Movement_FaceOriginalDirection
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC5::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC5_Text_0, MSGBOX_NPC
	applymovement 7, Common_Movement_FaceOriginalDirection
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


ISLANDGAME_APPLEVINE_NPC8::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC8_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC9::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC9_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC10::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC10_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC11::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_0
	msgbox ISLANDGAME_APPLEVINE_NPC11_Text_1
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC12::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC12_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_NPC13::
	lock
	faceplayer
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
	goto_if_unset FLAG_APPLEVINE_MANECTRIC_GIFT, ISLANDGAME_APPLEVINE_NPC13_2
	msgbox ISLANDGAME_APPLEVINE_NPC13_Text_1
ISLANDGAME_APPLEVINE_NPC13_1:
ManectricGiftEvent_End:
	release
	return

ISLANDGAME_APPLEVINE_NPC13_2:
	msgbox ISLANDGAME_APPLEVINE_NPC13_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_APPLEVINE_NPC13_6
ISLANDGAME_APPLEVINE_NPC13_5:
	giveitem ITEM_POKE_TOY
	setflag FLAG_APPLEVINE_MANECTRIC_GIFT
	goto ISLANDGAME_APPLEVINE_NPC13_1

ISLANDGAME_APPLEVINE_NPC13_6:
	goto ManectricGiftEvent_End
	goto ISLANDGAME_APPLEVINE_NPC13_5


ISLANDGAME_APPLEVINE_NPC14::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_NPC14_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_StoreSign_Text_0:
	.string "LA CUCINA DOLCHE\n"
	.string "We also offer Milcery makeovers!$"

ISLANDGAME_APPLEVINE_CitySign_Text_0:
	.string "APPLEVINE\n"
	.string "Where the trees are Applin-free!$"

ISLANDGAME_APPLEVINE_GameCornerSign_Text_0:
	.string "Eelektrik Game Corner\n"
	.string "It's not gambling if it takes skill! :)$"

ISLANDGAME_APPLEVINE_SierraPathSign_Text_0:
	.string "SIERRA PATH\n"
	.string "The next gym is this-a-way!$"

ISLANDGAME_APPLEVINE_RockyPathSign_Text_0:
	.string "ROCKY PATH\n"
	.string "Wanna see the big city? Go here!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_0:
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Oh, hello {PLAYER}! Fancy seeing\n"
	.string "you here!$"

ISLANDGAME_APPLEVINE_CocoInteract_Text_1:
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It'll be worth checking your\n"
	.string "surroundings for hidden goodies!$"

ISLANDGAME_APPLEVINE_CocoTrigger1_Text_0:
	.string "Toodles!$"

ISLANDGAME_APPLEVINE_NPC1_Text_0:
	.string "Welcome to Lumine Island, trainer! You\n"
	.string "must be famished from your travels.\p"
	.string "Here, take one of these. It is a sample\n"
	.string "from our confectionery.$"

ISLANDGAME_APPLEVINE_NPC1_Text_1:
	.string "We are located south of here. Come and\n"
	.string "stop by if you like our Sweet Hearts!$"

ISLANDGAME_APPLEVINE_NPC2_Text_0:
	.string "Hey...{PAUSE 30} if we catch them all...{PAUSE 60} does that\n"
	.string "mean...{PAUSE 60} we'll finally be free?$"

ISLANDGAME_APPLEVINE_NPC2_Text_1:
	.string "I see...$"

ISLANDGAME_APPLEVINE_NPC2_Text_2:
	.string "Ah...{PAUSE 60} I apologize, then.$"

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
	.string "this crummy island...\p"
	.string "I'll always have you though, my signed\n"
	.string "swimsuit photo of Ruka.$"

ISLANDGAME_APPLEVINE_NPC8_Text_0:
	.string "The Island Guardian of Lumine is none\n"
	.string "other than Zapdos!\p"
	.string "When it flaps its wings, it can generate\n"
	.string "enough electricity to power all of\l"
	.string "Marya!\p"
	.string "But it mostly stays cooped up in its\n"
	.string "nest atop Mount Therion.\p"
	.string "$"

ISLANDGAME_APPLEVINE_NPC9_Text_0:
	.string "Did you know that in Galar and Paldea,\n"
	.string "their trees can have wild Pokemon\l"
	.string "hiding in apples?\p"
	.string "That's pretty wild, man. Imagine you're\n"
	.string "apple picking, you snag one of 'em, bite\l"
	.string "into it, and a wild Pokémon pops out!\p"
	.string "I'd be traumatized for life bro. Good\n"
	.string "thing we don't have 'em over here.$"

ISLANDGAME_APPLEVINE_NPC10_Text_0:
	.string "It's said that a Luvdisc's heart scale\n"
	.string "will help you find your lover!$"

ISLANDGAME_APPLEVINE_NPC11_Text_0:
	.string "Hey, kid! Over here! Shhh! Be quiet! Stop\n"
	.string "attracting attention!\p"
	.string "You're a Pokémon trainer, yeah? I uh,\n"
	.string "bet you want some of those rare prizes\l"
	.string "from the Game Corner, don'cha?\p"
	.string "Ho-ho! Well you're in luck pal, cause\n"
	.string "I've got stacks 'n stacks of coins!\p"
	.string "They're all yours... if you're willin' to\n"
	.string "help a brotha out...\p"
	.string "See uh, I'm in need of some “candy”, and\n"
	.string "I hear y'all trainers got tons of 'em.\p"
	.string "So with that being said... you got the\n"
	.string "stuffs?$"

ISLANDGAME_APPLEVINE_NPC11_Text_1:
	.string "Ayo, you don't got nothin'! I only work\n"
	.string "with serious customers! Buzz off!$"

ISLANDGAME_APPLEVINE_NPC12_Text_0:
	.string "That gaudy Game Corner is a stain on\n"
	.string "our once beautiful town.\p"
	.string "It's corrupting our youth, I tell you!\n"
	.string "Won't anyone think of the children!?\p"
	.string "I hear it's being run by some hooligans\n"
	.string "too... Just what we need. More crime!\p"
	.string "What's happened to this world I once\n"
	.string "knew and loved?$"

ISLANDGAME_APPLEVINE_NPC13_Text_0:
	.string "{COLOR RED}(Huh? It looks like Manectric is trying\n"
	.string "to give me something.)\p"
	.string "{COLOR RED}(Should I take it?)$"

ISLANDGAME_APPLEVINE_NPC13_Text_1:
	.string "{COLOR DARK_GRAY}Borf! {COLOR BLUE}(I have lots of toys, so I'll give\n"
	.string "you one. :D)$"

ISLANDGAME_APPLEVINE_NPC14_Text_0:
	.string "I became an officer to get in the line\n"
	.string "of action, but all the chief's been\l"
	.string "having me do is lame paperwork.\p"
	.string "I should've just joined my friend in the\n"
	.string "merchant guild instead...\p"
	.string "They get to travel all around the isles,\n"
	.string "meanwhile I'm stuck listening to a\l"
	.string "jaded old man complain about the Game\l"
	.string "Corner for three hours.\p"
	.string "What's the big deal? It's not like it's\n"
	.string "gambling or anything. There's skill\l"
	.string "involved. It says it on the sign!$"

ISLANDGAME_APPLEVINE_CocoTalk1::
	.string "My name is Coco. I'm a friend of\n"
	.string "Professor Palm's, and the creator of\l"
	.string "Marya's Pokémon Storage System!\p"
	.string "Hopefully it's been convenient and\n"
	.string "helpful to you in your journey. Let me\l"
	.string "know if you ever have any issues!\p"
	.string "I actually wanted to ask a favor of you,\n"
	.string "if that's alright.$"

ISLANDGAME_APPLEVINE_CocoTalk2::
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}This here is a prototype for a new\n"
	.string "dowsing machine I'm developing, and I\l"
	.string "figured you'd be the perfect one to\l"
	.string "help test it for me, since you're\l"
	.string "roaming the isles anyways!$"

ISLANDGAME_APPLEVINE_CocoTalk3::
	.string "{COLOR GREEN}Coco: {COLOR DARK_GRAY}It's super easy to use! All you\n"
	.string "have to do is turn it on, and it'll tell\l"
	.string "you if there are any hidden items\l"
	.string "nearby.\p"
	.string "It'll even tell you the direction and\n"
	.string "closeness of the item!\p"
	.string "Just like my storage system, I've\n"
	.string "designed it with the intention to be as\l"
	.string "user-friendly as possible! Hee-hee.\p"
	.string "But that's enough blabbering from me.\n"
	.string "You've got a Pokédex to fill, and a\l"
	.string "league to qualify for, as I've heard!\p"
	.string "If you ever have the time to chat\n"
	.string "though, you can find me at my house\l"
	.string "here in Applevine.$"
