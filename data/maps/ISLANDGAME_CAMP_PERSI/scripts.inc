ISLANDGAME_CAMP_PERSI_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_TrainerBattle1::
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CookieGirl::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlDecline
	checkmoney 250
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBroke
	checkitemspace ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, TRUE, ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlPay
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBagFull
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlDecline::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlDecline_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBroke::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBroke_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlPay::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlPay_Text_0
	removemoney 250
	updatemoneybox
	giveitem ITEM_LAVA_COOKIE
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBagFull::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBagFull_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_CandyBoy::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyDecline
	checkmoney 250
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBroke
	checkitemspace ITEM_RAGE_CANDY_BAR
	goto_if_eq VAR_RESULT, TRUE, ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyPay
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBagFull
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyDecline::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyDecline_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBroke::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBroke_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyPay::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyPay_Text_0
	removemoney 250
	updatemoneybox
	giveitem ITEM_RAGE_CANDY_BAR
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBagFull::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBagFull_Text_0
	hidemoneybox
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC4::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC5::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC6::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC7::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC8::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk
	face_original_direction
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC9::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC10::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC11::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC12::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC13::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_ZigzagTalk
	face_original_direction
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN1::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN2::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN3::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlDecline_Text_0:
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBroke_Text_0:
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlPay_Text_0:
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBagFull_Text_0:
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyDecline_Text_0:
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBroke_Text_0:
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyPay_Text_0:
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBagFull_Text_0:
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Heh... You've fallen right into my trap!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text::
	.string "Darn it... I guess you came prepared!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}You may have beaten me now, but I'll get\n"
	.string "stronger! I WILL become a grandmaster!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1::
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Lava\n"
	.string "Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Rage Candy\n"
	.string "Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC1Talk::
	.string "{COLOR DARK_GRAY}I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "{COLOR DARK_GRAY}Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "{COLOR DARK_GRAY}Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC2Talk::
	.string "{COLOR DARK_GRAY}My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC3Talk::
	.string "{COLOR DARK_GRAY}I'm taking the campers on a nature hike\n"
	.string "later today.\p"
	.string "{COLOR DARK_GRAY}Hopefully this time we don't come into\n"
	.string "contact with any Stunky...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC4Talk::
	.string "{COLOR DARK_GRAY}I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "{COLOR DARK_GRAY}It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC5Talk::
	.string "{COLOR DARK_GRAY}Um... do you mind?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC6Talk::
	.string "{COLOR DARK_GRAY}Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC7Talk::
	.string "{COLOR DARK_GRAY}I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC8Talk::
	.string "{COLOR DARK_GRAY}When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC9Talk::
	.string "{COLOR DARK_GRAY}Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "{COLOR DARK_GRAY}I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC10Talk::
	.string "{COLOR DARK_GRAY}Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "{COLOR DARK_GRAY}I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "{COLOR DARK_GRAY}To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "{COLOR DARK_GRAY}I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC11Talk::
	.string "{COLOR DARK_GRAY}That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC12Talk::
	.string "{COLOR DARK_GRAY}When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "{COLOR DARK_GRAY}One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC13Talk::
	.string "{COLOR DARK_GRAY}The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_ZigzagTalk::
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN1_DESC::
	.string "{COLOR DARK_GRAY}CAMP PERSI\n"
	.string "{COLOR DARK_GRAY}The greatest summer camp in Mariyama!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}THE WILD SIDE\n"
	.string "{COLOR DARK_GRAY}! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN3_DESC::
	.string "{COLOR DARK_GRAY}PERSI LAKE$"
