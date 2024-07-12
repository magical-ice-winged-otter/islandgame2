ISLANDGAME_FRESA_FARMS_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


ISLANDGAME_FRESA_FARMS_Daycare_Mon1::
	lock
	msgbox ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text, MSGBOX_NPC
	release
	return


ISLANDGAME_FRESA_FARMS_Daycare_Mon2::
	lock
	msgbox ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text, MSGBOX_NPC
	release
	return


ISLANDGAME_FRESA_FARMS_OldMan_Request::
	lock
	applymovement 12, Common_Movement_FaceLeft
	waitmovement 12
	applymovement 12, Common_Movement_ExclamationMark
	waitmovement 12
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk
	return


ISLANDGAME_FRESA_FARMS_OldMan_Talk::
	lock
	switch VAR_MINTY_MEADOWS_STATE
	case 0, ISLANDGAME_FRESA_FARMS_OldMan_Talk_3
	case 4, ISLANDGAME_FRESA_FARMS_OldMan_Talk_4
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage
ISLANDGAME_FRESA_FARMS_OldMan_Talk_1:
	release
	return

ISLANDGAME_FRESA_FARMS_OldMan_Talk_3:
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage
	startquest QUEST_FRESA_FARMS_LOST_MAREEP
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk_1

ISLANDGAME_FRESA_FARMS_OldMan_Talk_4:
	msgbox ISLANDGAME_FRESA_FARMS_OldMan_RequestFulfilledMessage
	goto ISLANDGAME_FRESA_FARMS_OldMan_Talk_1


ISLANDGAME_FRESA_FARMS_Sign::
	msgbox ISLANDGAME_FRESA_FARMS_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_FRESA_FARMS_Man::
	lock
	faceplayer
	msgbox ISLANDGAME_FRESA_FARMS_Man_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_Miltank_Interact::
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Miltank_Interact_2
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1
ISLANDGAME_FRESA_FARMS_Miltank_Interact_1:
	release
	return

ISLANDGAME_FRESA_FARMS_Miltank_Interact_2:
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0
	goto ISLANDGAME_FRESA_FARMS_Miltank_Interact_1


ISLANDGAME_FRESA_FARMS_Chansey_Interact::
	lock
	faceplayer
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep1::
	lock
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Mareep1_2
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_2
ISLANDGAME_FRESA_FARMS_Mareep1_1:
	release
	return

ISLANDGAME_FRESA_FARMS_Mareep1_2:
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_0
	faceplayer
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay32
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_1
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	goto ISLANDGAME_FRESA_FARMS_Mareep1_1


ISLANDGAME_FRESA_FARMS_Mareep2::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Mareep2_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep3::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	goto_if_unset FLAG_FRESA_FARMS_MAREEP_GIFT, ISLANDGAME_FRESA_FARMS_Mareep3_2
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_2
ISLANDGAME_FRESA_FARMS_Mareep3_1:
	release
	return

ISLANDGAME_FRESA_FARMS_Mareep3_2:
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_0
	checkitemspace ITEM_ELECTRIC_GEM
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_Mareep3_5
	setflag FLAG_FRESA_FARMS_MAREEP_GIFT
	giveitem ITEM_ELECTRIC_GEM
	goto ISLANDGAME_FRESA_FARMS_Mareep3_1

ISLANDGAME_FRESA_FARMS_Mareep3_5:
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_1
	goto ISLANDGAME_FRESA_FARMS_Mareep3_1


ISLANDGAME_FRESA_FARMS_Mareep4::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Mareep4_Text_0
	release
	return


ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor::
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0, MSGBOX_NPC
	pokemart MilkVendorItems
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1, MSGBOX_NPC
	return


	.align 2
MilkVendorItems:
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

ISLANDGAME_FRESA_FARMS_Sign_Text_0:
	.string "FRESA FARMS\n"
	.string "Leave your Pokémon to us!$"

ISLANDGAME_FRESA_FARMS_Man_Text_0:
	.string "My parents established this farm a long\n"
	.string "time ago.\p"
	.string "One day, it'll be all mine...$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0:
	.string "Moo. {COLOR BLUE}(If you want some of my milk, you'll\n"
	.string "have to come here during the day.)$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1:
	.string "Moo. {COLOR BLUE}(Moo.)$"

ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0:
	.string "Chansey. {COLOR BLUE}(Most humans can't understand\n"
	.string "us, but some are born with a special\l"
	.string "ability to comprehend what Pokémon are\l"
	.string "saying.)\p"
	.string "Chansey. {COLOR BLUE}(You're one of them, aren't\n"
	.string "you?)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_0:
	.string "Reeep. {COLOR BLUE}(Heh. That dumb dog's snoozing\n"
	.string "on his job again!)\p"
	.string "{COLOR DARK_GRAY}Reep reep. {COLOR BLUE}(Time to sneak out and have\n"
	.string "some fun with Chansey...)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh?)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_1:
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(Oh, it's just a random kid. Good\n"
	.string "thing they can't understand me.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(Go away! I've got big plans for\n"
	.string "tonight!)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Oh wait... They don't understand\n"
	.string "me.)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_2:
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(Tch, this mutt is a pain in my\n"
	.string "fluffy behind!)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(I got important business to\n"
	.string "attend to at night!)$"

ISLANDGAME_FRESA_FARMS_Mareep2_Text_0:
	.string "Reep. {COLOR BLUE}(I'm just saying man, if it was me\n"
	.string "against that Mightyena, hoo boy.)\p"
	.string "Reep! {COLOR BLUE}(I would'a messed that Mightyena\n"
	.string "up real good, ya feel me?)\p"
	.string "Reep? {COLOR BLUE}(Huh? Why are you looking me like\n"
	.string "that? I'm fo' realzies!)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_0:
	.string "Reep! {COLOR BLUE}(Hey there! Thanks for saving my\n"
	.string "butt from that scary Mightyena.)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Please take this as a gift.)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_1:
	.string "Reep. {COLOR BLUE}(Oh, you don't have enough space\n"
	.string "for this.)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_2:
	.string "Reep. {COLOR BLUE}(I found it wandering around\n"
	.string "today. Hope it helps you out!)$"

ISLANDGAME_FRESA_FARMS_Mareep4_Text_0:
	.string "Reep. {COLOR BLUE}(My little brother always strays\n"
	.string "away from the herd to explore.)\p"
	.string "Reep. {COLOR BLUE}(Hopefully he's finally learned his\n"
	.string "lesson.)$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0:
	.string "Welcome to Fresa Farms!\p"
	.string "Our milk is sourced from the healthiest\n"
	.string "Miltanks in Marya!$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1:
	.string "Thank you for supporting us!$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text::
	.string "{STR_VAR_1} looks happy!$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text::
	.string "{STR_VAR_2} stares at you intently.$"

ISLANDGAME_FRESA_FARMS_OldMan_RequestMessage::
	.string "Oh, its you!\p"
	.string "I couldn't help but notice your battle\n"
	.string "earlier.\p"
	.string "I was wondering if you could help us\n"
	.string "with our missing Mareep.\p"
	.string "She usually goes off by herself to the\n"
	.string "center of the plains, but we haven't\l"
	.string "seen her since.$"

ISLANDGAME_FRESA_FARMS_OldMan_RequestFulfilledMessage::
	.string "{COLOR DARK_GRAY}Thank you very much!$"
