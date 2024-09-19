ISLANDGAME_FRESA_FARMS_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	return

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	setobjectxyperm 6, 18, 6
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


ISLANDGAME_FRESA_FARMS_Sign::
	msgbox ISLANDGAME_FRESA_FARMS_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_FRESA_FARMS_Miltank_Interact::
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Miltank_Interact_2
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1
ISLANDGAME_FRESA_FARMS_Miltank_Interact_1:
	closemessage
	release
	return

ISLANDGAME_FRESA_FARMS_Miltank_Interact_2:
	lock
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
	waitmovement 0
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_1
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	goto ISLANDGAME_FRESA_FARMS_Mareep1_1


ISLANDGAME_FRESA_FARMS_Mareep2::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Mareep2_Text_0
	closemessage
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
	closemessage
	release
	return


ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor::
	lock
	faceplayer
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0
	showmoneybox 0, 0
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_2
ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1:
MilkVendor_End:
	hidemoneybox
	closemessage
	release
	return

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_2:
	checkmoney 7000
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_4
	removemoney 7000
	playse SE_SHOP
	waitse
	updatemoneybox
	hidemoneybox
	giveitem ITEM_MOOMOO_MILK, 6
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_3
	goto ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_4:
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_2
	goto MilkVendor_End
	goto ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1


ISLANDGAME_FRESA_FARMS_Torchic::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Torchic_Text_0
	closemessage
	release
	return


ISLANDGAME_FRESA_FARMS_Tepig::
	lock
	faceplayer
	playmoncry SPECIES_TEPIG, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Tepig_Text_0
	closemessage
	release
	return


ISLANDGAME_FRESA_FARMS_Mudsdale::
	lock
	faceplayer
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
	msgbox ISLANDGAME_FRESA_FARMS_Mudsdale_Text_0
	closemessage
	release
	return


ISLANDGAME_FRESA_FARMS_Sign_Text_0:
	.string "FRESA FARMS\n"
	.string "Paulie and Marion$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0:
	.string "{COLOR RED}(Miltank is fast asleep.)$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1:
	.string "Moo. {COLOR BLUE}(Moo.)$"

ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0:
	.string "Chansey. {COLOR BLUE}(Most humans can't understand\n"
	.string "us, but some are born with a special\l"
	.string "ability to comprehend what Pokémon are\l"
	.string "saying.)\p"
	.string "{COLOR DARK_GRAY}Chansey. {COLOR BLUE}(You're one of them,{PAUSE 30} aren't\n"
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
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(This mutt is a pain in my fluffy\n"
	.string "behind...)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(I got important business to\n"
	.string "attend to at night!)$"

ISLANDGAME_FRESA_FARMS_Mareep2_Text_0:
	.string "Reep. {COLOR BLUE}(I'm just saying man, if it was me\n"
	.string "against that Mightyena, hoo boy.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(I would'a messed that Mightyena\n"
	.string "up real good, ya feel me?)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh? Why are you looking me like\n"
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
	.string "GIRIGIRI WARUKUNAI WATAME!!!$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0:
	.string "Our milk is sourced from the healthiest\n"
	.string "Miltank in all of Marya, Lady Moona!$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1:
	.string "We are selling it in packs of six for\n"
	.string "only ¥7000! Would you like a pack?{PAUSE 30}$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_2:
	.string "Oh dear, you don't have enough money,\n"
	.string "sweetie.$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_3:
	.string "Thank you for your patronage!$"

ISLANDGAME_FRESA_FARMS_Torchic_Text_0:
	.string "Kikiriki! {COLOR BLUE}(Guten Tag!)$"

ISLANDGAME_FRESA_FARMS_Tepig_Text_0:
	.string "Oink! {COLOR BLUE}(hois im pepa pigi)$"

ISLANDGAME_FRESA_FARMS_Mudsdale_Text_0:
	.string "Hee-haw! {COLOR BLUE}(Hee-ho!)$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text::
	.string "{STR_VAR_1} looks happy!$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text::
	.string "{STR_VAR_2} stares at you intently.$"
