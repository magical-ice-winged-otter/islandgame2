ISLANDGAME_CAMP_PERSI_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle1::
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle2::
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle3::
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle4::
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TrainerBattle5::
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text, ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage::
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage::
	msgbox ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_0
	trainerbattle_no_intro TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text
	msgbox ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text
	closemessage
	return


ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup::
	hideobjectat 13, MAP_ISLANDGAME_CAMP_PERSI
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	releaseall
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterMiddle::
	lockall
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro
	waitmovement 0
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
	setvar VAR_TEMP_1, 1
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro
	waitmovement 0
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterLeft::
	lockall
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
	setvar VAR_TEMP_1, 1
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
	waitmovement 0
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarLeft::
	lockall
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
	setvar VAR_TEMP_1, 1
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
	waitmovement 0
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterRight::
	lockall
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
	setvar VAR_TEMP_1, 1
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
	waitmovement 0
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasEncounterFarRight::
	lockall
	call ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage
	setvar VAR_TEMP_1, 1
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave
	applymovement 13, ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro
	waitmovement 0
	call ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleCleanup
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleIntro:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementMiddleOutro:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementLeftIntro:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarLeftIntro:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementRightIntro:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_right
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementFarRightIntro:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_JonasMovementSideOutro:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ISLANDGAME_CAMP_PERSI_OUTSIDE_WatchJonasLeave:
	delay_16
	delay_16
	face_down
	step_end

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
	applymovement 10, Common_Movement_FaceOriginalDirection
	waitmovement 0
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


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_LostCardItem::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_LostCardItem_Text_0
	finditem ITEM_ISLANDGAME_TRADING_CARD
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14::
	lock
	faceplayer
	returnqueststate QUEST_PERSI_FAVORITE_CARD
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_2
	compare VAR_RESULT, 2
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3
	compare VAR_RESULT, 4
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4
ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1:
	release
	return

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_2:
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestInactive, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_8
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestReject
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_3:
	checkitem ITEM_ISLANDGAME_TRADING_CARD
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_11
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestActive
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_4:
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestCompleted
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_8:
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestAccept
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_11:
	removeitem ITEM_ISLANDGAME_TRADING_CARD
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestReward
	giveitem ITEM_SOOTHE_BELL
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_NPC14_1


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_Zigzag::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_ZigzagTalk
	applymovement 14, Common_Movement_FaceOriginalDirection
	waitmovement 0
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


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_SIGN4::
	lock
	msgbox ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC
	release
	return


ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_JonasIntroMessage_Text_0:
	.string "{COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_EventScript_JonasBattleEngage_Text_0:
	.string "{COLOR DARK_GRAY}Jonas battle intro$"

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

ISLANDGAME_CAMP_PERSI_OUTSIDE_EventScript_LostCardItem_Text_0:
	.string "Its a trading card of extremely high\n"
	.string "quality!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "{COLOR DARK_GRAY}But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_Defeated_Text::
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}You may have beaten me now, but I'll get\n"
	.string "stronger! Believe it!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Text::
	.string "{COLOR DARK_GRAY}What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_Defeated_Text::
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Text::
	.string "{COLOR DARK_GRAY}There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_Defeated_Text::
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle3_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Text::
	.string "{COLOR DARK_GRAY}If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "{COLOR DARK_GRAY}So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_Defeated_Text::
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_TrainerBattle4_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Pokémon battles aren't really my thing,\n"
	.string "to be frank. {COLOR DARK_GRAY}Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Text::
	.string "{COLOR DARK_GRAY}I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "{COLOR DARK_GRAY}Please, help me with my research!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_Defeated_Text::
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_TrainerBattle5_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "{COLOR DARK_GRAY}But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_Jonas_Defeated_Text::
	.string "Ah... \p"
	.string "Your aptitude for battle is... \n"
	.string "quite remarkable.$"

ISLANDGAME_CAMP_PERSI_Jonas_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}post defeat$"

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

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestInactive::
	.string "{COLOR DARK_GRAY}I lost my favorite trading card\n"
	.string "somewhere in Verdant Woods!\p"
	.string "{COLOR DARK_GRAY}Can you help me get it back?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestAccept::
	.string "{COLOR DARK_GRAY}Awesome! I dont know much longer I can\n"
	.string "go on without it...$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestReject::
	.string "{COLOR DARK_GRAY}Aww, seriously?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestActive::
	.string "{COLOR DARK_GRAY}Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestReward::
	.string "{COLOR DARK_GRAY}You found it! Thank you so much!\p"
	.string "{COLOR DARK_GRAY}I bought this Soothe Bell to help me\n"
	.string "calm down...\p"
	.string "{COLOR DARK_GRAY}But now I dont need it, so here!$"

ISLANDGAME_CAMP_PERSI_OUTSIDE_NPC14Talk_QuestCompleted::
	.string "{COLOR DARK_GRAY}I'm never taking my card outside again...$"

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

ISLANDGAME_CAMP_PERSI_OUTSIDE_SIGN4_DESC::
	.string "{COLOR DARK_GRAY}CAMP GARDEN\n"
	.string "{COLOR DARK_GRAY}Feel free to contribute! (Please do.)$"
