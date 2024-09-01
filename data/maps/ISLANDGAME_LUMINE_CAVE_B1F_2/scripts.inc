ISLANDGAME_LUMINE_CAVE_B1F_2_MapScripts::
	.byte 0


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract::
	lock
	faceplayer
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0
	applymovement 6, Common_Movement_FaceRight
	waitmovement 0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract::
	lock
	goto_if_unset FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2
ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1:
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_2:
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0
	closemessage
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1
	closemessage
	applymovement 22, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 22, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement 22, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3
	closemessage
	applymovement 22, Common_Movement_WalkInPlaceRight
	waitmovement 0
	applymovement 22, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5
	setflag FLAG_LUMINE_CAVE_SPOKE_TO_ALBA
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_1


ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl::
	lock
	faceplayer
	goto_if_set FLAG_LUMINE_CAVE_SPOKE_TO_ALBA, ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1
ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1:
	applymovement 22, Common_Movement_FaceRight
	waitmovement 0
	closemessage
	release
	return

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_2:
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0
	goto ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_1


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Aron::
	lock
	faceplayer
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert::
	lock
	playmoncry SPECIES_SWAMPERT, CRY_MODE_WEAK
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5::
	lock
	faceplayer
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6::
	lock
	msgbox ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0
	closemessage
	release
	return


ISLANDGAME_LUMINE_CAVE_B1F_2_PorygonInteract_Text_0:
	.string "I AM DESIGNATED AS PORYGON:\n"
	.string "DEFINITIVE EDITION REMASTERED!\p"
	.string "WHAT'S QUACKALACKIN'?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_0:
	.string "Fascinating... the sheer ferocity of an\n"
	.string "Aggron is truly without parallel...\p"
	.string "Their adamantine iron hide that serves\n"
	.string "as both sword and shield, compounded\l"
	.string "with their instinctive territorial\l"
	.string "nature...\p"
	.string "This mass outbreak has proved quite\n"
	.string "beneficial in realizing the untapped\l"
	.string "potential of these Pokémon...\p"
	.string "Oh?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_1:
	.string "Ah,{PAUSE 60} please excuse my ramblings, trainer.\n"
	.string "I was simply enamored by the majesty\l"
	.string "of the Aron family.\p"
	.string "I do advise that you keep a safe\n"
	.string "distance, however.\p"
	.string "They have claimed this cavern as their\n"
	.string "home, and will not show mercy to those\l"
	.string "who dare trespass it.\p"
	.string "It is in everyone's best interest to\n"
	.string "stay put until the authorities arrive.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_2:
	.string "Eeeh? But my poor little Litten is\n"
	.string "getting picked on by those meanies!\p"
	.string "Please, can't you save her?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_3:
	.string "I understand your frustrations, but it\n"
	.string "is too dangerous for any of us to tread\l"
	.string "onto their territory.\p"
	.string "Even I do not possess the capabilities\n"
	.string "to surmount a mighty Aggron...\p"
	.string "All we can do is hope for the best and\n"
	.string "await the Silverwing Order.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_4:
	.string "B-But!...$"

ISLANDGAME_LUMINE_CAVE_B1F_2_AlbaInteract_Text_5:
	.string "You still wish to pass to rescue her\n"
	.string "Litten, despite my warnings?\p"
	.string "Hm... I in good faith cannot send you in\n"
	.string "there and risk your own livelihood...\p"
	.string "But if you are that confident in your\n"
	.string "abilities, I would like to verify them\l"
	.string "first in a battle.\p"
	.string "If you can best me, I will grant you\n"
	.string "passage to save her Pokémon.\p"
	.string "I will give you a moment to prepare.\n"
	.string "Speak to me when you are ready.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_0:
	.string "Please save my litty kitty! D:$"

ISLANDGAME_LUMINE_CAVE_B1F_2_LittenGirl_Text_1:
	.string "Waaaah!{PAUSE 30} My Litten is trapped over there\n"
	.string "with those big bad bullies!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC1_Text_0:
	.string "See that big strong Aggron, buddy?\n"
	.string "That's what you're gonna grow up to be!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Aron_Text_0:
	.string "Ron... {COLOR BLUE}(I'm glad to be owned by a trainer.\n"
	.string "The wild Pokémon world is scary.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_Swampert_Text_0:
	.string "{COLOR RED}(Looks like Swampert is out of\n"
	.string "commission.)$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC2_Text_0:
	.string "The horns of an Aggron are strong\n"
	.string "enough to pierce steel with ease, while\l"
	.string "their claws can shred through the\l"
	.string "strongest of bedrock.\p"
	.string "It's believed that ancient generals\n"
	.string "used to wear armor made from the\l"
	.string "plating of an Aggron as a symbol of\l"
	.string "strength.$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC3_Text_0:
	.string "I could easily take down an Aggron by\n"
	.string "myself.{PAUSE 60} Just give me enough prep time!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC4_Text_0:
	.string "Swampert! Are you alright?\p"
	.string "Argh... We couldn't even put a dent on\n"
	.string "that Aggron...\p"
	.string "It doesn't add up. Why weren't water or\n"
	.string "ground moves super effective on it...?$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC5_Text_0:
	.string "Heck... I'm gonna miss out on meeting\n"
	.string "STARLIGHT cause of this DUMB Aggron!$"

ISLANDGAME_LUMINE_CAVE_B1F_2_NPC6_Text_0:
	.string "Eureka! A deposit of Sodium Chloride!\n"
	.string "This will go great with my french fries!$"
