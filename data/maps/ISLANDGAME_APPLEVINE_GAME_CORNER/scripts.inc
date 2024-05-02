ISLANDGAME_APPLEVINE_GAME_CORNER_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_EventScript_Gambler0::
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler0_Text_0
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler1::
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler1_Text_0
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler2::
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_0
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler3::
	msgbox ISLANDGAME_APPLEVINE_EventScript_Gambler3_Text_0
	return


ISLANDGAME_APPLEVINE_EventScript_Bouncer::
	msgbox ISLANDGAME_APPLEVINE_EventScript_Bouncer_Text_0
	return


ISLANDGAME_APPLEVINE_EventScript_PrizeClerk::
	msgbox ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0
	return


ISLANDGAME_APPLEVINE_AddCoins_50::
	checkcoins VAR_TEMP_1
	compare VAR_TEMP_1, MAX_COINS + 1 - 50
	goto_if_ge ISLANDGAME_APPLEVINE_AddCoins_50_2
	checkmoney 50
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_AddCoins_50_5
	addcoins 50
	removemoney 50
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox Applevine_HereAreCoins
	return

ISLANDGAME_APPLEVINE_AddCoins_50_2:
	msgbox Applevine_NoRoomForCoins
	end

ISLANDGAME_APPLEVINE_AddCoins_50_5:
	msgbox Applevine_NoMoney
	end


ISLANDGAME_APPLEVINE_AddCoins_500::
	checkcoins VAR_TEMP_1
	compare VAR_TEMP_1, MAX_COINS + 1 - 500
	goto_if_ge ISLANDGAME_APPLEVINE_AddCoins_500_2
	checkmoney 500
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_AddCoins_500_5
	addcoins 500
	removemoney 500
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox Applevine_HereAreCoins
	return

ISLANDGAME_APPLEVINE_AddCoins_500_2:
	msgbox Applevine_NoRoomForCoins
	end

ISLANDGAME_APPLEVINE_AddCoins_500_5:
	msgbox Applevine_NoMoney
	end


ISLANDGAME_APPLEVINE_EventScript_CoinsClerk::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2
	showmoneybox 0, 0
	showcoinsbox 1, 6
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
	switch VAR_RESULT
	case 0, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7
	case 1, ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5:
	hidemoneybox
	hidecoinsbox 1, 6
ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1:
	release
	return

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_2:
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_1

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_7:
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3
	call ISLANDGAME_APPLEVINE_AddCoins_50
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_8:
	msgbox ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3
	call ISLANDGAME_APPLEVINE_AddCoins_500
	goto ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_5


ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1:
	releaseall
	return

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_2:
	msgbox ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0
	goto ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_1


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine0::
	setvar VAR_0x8004, 0
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine1::
	setvar VAR_0x8004, 1
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine2::
	setvar VAR_0x8004, 2
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine3::
	setvar VAR_0x8004, 3
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine4::
	setvar VAR_0x8004, 4
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine5::
	setvar VAR_0x8004, 5
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine6::
	setvar VAR_0x8004, 6
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine7::
	setvar VAR_0x8004, 7
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine8::
	setvar VAR_0x8004, 8
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine9::
	setvar VAR_0x8004, 9
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine10::
	setvar VAR_0x8004, 10
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_GAME_CORNER_EventScript_SlotMachine11::
	setvar VAR_0x8004, 11
	call ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General
	return


ISLANDGAME_APPLEVINE_EventScript_Gambler0_Text_0:
	.string "Wow, these things are rigged...$"

ISLANDGAME_APPLEVINE_EventScript_Gambler1_Text_0:
	.string "Have you won anything yet?$"

ISLANDGAME_APPLEVINE_EventScript_Gambler2_Text_0:
	.string "GOTTA KEEP PLAYING!!!$"

ISLANDGAME_APPLEVINE_EventScript_Gambler3_Text_0:
	.string "(They've fallen asleep at the machine)$"

ISLANDGAME_APPLEVINE_EventScript_Bouncer_Text_0:
	.string "Yep, this is the VIP lounge.\n"
	.string "It's so exclusive we removed the door\l"
	.string "earlier...\n"
	.string "Check back later. Maybe we'll bring it\l"
	.string "back.$"

ISLANDGAME_APPLEVINE_EventScript_PrizeClerk_Text_0:
	.string "We are sold out. Come back later!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_0:
	.string "Welcome to Applevine Game Corner!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_1:
	.string "Hey, you need a coin case!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_2:
	.string "Let's get you some coins!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_3:
	.string "Here you go!$"

ISLANDGAME_APPLEVINE_EventScript_CoinsClerk_Text_4:
	.string "Oh. you don't need coins.$"

ISLANDGAME_APPLEVINE_GAME_CORNER_SlotMachine_General_Text_0:
	.string "You can't play if you don't have a COIN\n"
	.string "CASE.$"

Applevine_NoRoomForCoins::
	.string "You don't have room for coins!$"

Applevine_NoMoney::
	.string "You dont' have enough money!$"

Applevine_HereAreCoins::
	.string "Here are your coins.$"
