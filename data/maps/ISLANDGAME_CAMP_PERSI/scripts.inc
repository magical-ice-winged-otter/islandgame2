ISLANDGAME_CAMP_PERSI_MapScripts::
	.byte 0


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


ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlDecline_Text_0:
	.string "{COLOR DARK_GRAY}Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBroke_Text_0:
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough money? Phooey...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlPay_Text_0:
	.string "{COLOR DARK_GRAY}Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlBagFull_Text_0:
	.string "{COLOR DARK_GRAY}Eeeh? You don't have enough room for this cookie?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyDecline_Text_0:
	.string "{COLOR DARK_GRAY}Drats. I need more sales for that skateboard...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBroke_Text_0:
	.string "{COLOR DARK_GRAY}Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyPay_Text_0:
	.string "{COLOR DARK_GRAY}Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyBagFull_Text_0:
	.string "{COLOR DARK_GRAY}Huh? You don't have room for this candy bar?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CookieGirlTalk1::
	.string "{COLOR DARK_GRAY}Hi there! I'm selling delicious Lava\n"
	.string "Cookies to support Troop 115.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_CandyBoyTalk1::
	.string "{COLOR DARK_GRAY}Hi there! I'm selling tasty Rage Candy\n"
	.string "Bars to support Troop 117.\p"
	.string "{COLOR DARK_GRAY}Would you like to buy one for ¥250?$"
