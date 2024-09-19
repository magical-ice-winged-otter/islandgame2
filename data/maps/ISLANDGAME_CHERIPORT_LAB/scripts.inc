ISLANDGAME_CHERIPORT_LAB_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa::
	lock
	faceplayer
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa_Text_0
	closemessage
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Gible::
	lock
	faceplayer
	playmoncry SPECIES_GIBLE, CRY_MODE_NORMAL
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Gible_Text_0
	closemessage
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk::
	lock
	faceplayer
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_3
	returnqueststate QUEST_POKEDEX_COMPLETION
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_13
	goto_if_unset FLAG_TEMP_10, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_21
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6
	goto Palm_CheckPokedex
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1:
Palm_CheckPokedex:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	buffernumberstring STR_VAR_1, VAR_0x8008
	buffernumberstring STR_VAR_2, VAR_0x8009
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_8
	compare VAR_0x8009, 30
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7:
	compare VAR_0x8009, 60
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_17
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16:
	compare VAR_0x8009, 90
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_25
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_24:
	compare VAR_0x8009, 120
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_39
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_38:
	compare VAR_0x8009, 150
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_44
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_43:
	compare VAR_0x8009, 180
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_49
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_48:
	compare VAR_0x8009, 210
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_54
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_53:
	compare VAR_0x8009, 240
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_59
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_58:
	compare VAR_0x8009, 270
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_64
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_63:
	compare VAR_0x8009, 300
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_69
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_68:
	compare VAR_0x8009, 330
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_74
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_73:
	compare VAR_0x8009, 360
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_79
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_78:
	compare VAR_0x8009, 400
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_84
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_83:
Palm_End:
	closemessage
	release
	return

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2:
	msgbox ProfTalk_First_Text
	setflag FLAG_PROF_GAVE_EEVEE
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, , , , , , , , , , , , , , MOVE_TACKLE, MOVE_MUD_SLAP, MOVE_WORK_UP, MOVE_REFRESH, FALSE
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	msgbox ReceivedEevee_Text
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_11
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_10:
	msgbox ProfTalk_Second_Text
	playfanfare MUS_OBTAIN_ITEM
	msgbox Prof_Recieved_Pokedex_Text
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	msgbox ProfTalk_Third_Text
	giveitem ITEM_POKE_BALL, 10
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_0
	startquest QUEST_POKEDEX_COMPLETION
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_1
	setrespawn HEAL_LOCATION_CHERIPORT
	startquest QUEST_MINTY_MEADOWS_MELISSA
	goto Palm_End
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_3:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_2
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_19
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_10

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_13:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_3
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_17:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_27
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_19:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_9
	giveitem ITEM_TM53
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_21:
	setflag FLAG_TEMP_10
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_35
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_33:
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_32
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_31:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_25:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_24

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_27:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_10
	giveitem ITEM_NEST_BALL, 15
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_29:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_4
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_30:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_5
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_32:
	goto_if_unset FLAG_LUMINE_CAVE_AGGRON_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_30
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_31

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_35:
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_29
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_33

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_39:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_38

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_11
	giveitem ITEM_RARE_CANDY, 5
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_24

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_44:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_43

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_12
	giveitem ITEM_LEVEL_BALL, 30
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_38

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_49:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_48

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_13
	giveitem ITEM_ABILITY_CAPSULE, 7
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_43

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_54:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_53

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_14
	giveitem ITEM_ULTRA_BALL, 45
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_48

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_59:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_58

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_15
	giveitem ITEM_ABILITY_PATCH, 9
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_53

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_64:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_63

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_16
	giveitem ITEM_QUICK_BALL, 60
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_58

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_69:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_68

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_17
	giveitem ITEM_CATCHING_CHARM
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_63

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_74:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_73

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_18
	giveitem ITEM_EXP_CHARM
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_68

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_79:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_78

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_19
	giveitem ITEM_OVAL_CHARM
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_73

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_84:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_13
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_88
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_83

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_20
	giveitem ITEM_MASTER_BALL
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_21
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_78

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_88:
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_22
	giveitem ITEM_AURORA_TICKET
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
	completequest QUEST_PERSI_BERRY_MANIAC
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_83


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist1Talk::
	lock
	faceplayer
	msgbox Scientist1Talk_Text
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk::
	lock
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0
	playse SE_PIN
	applymovement 3, ExclaimFacePlayer
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1
	applymovement 3, Common_Movement_QuestionMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_CocoTalk::
	lock
	msgbox CocoTalk_Text
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Vigoroth::
	lock
	msgbox ISLANDGAME_CHERIPORT_LAB_VigorothTalk
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_PikaDoll::
	lock
	msgbox ISLANDGAME_CHERIPORT_LAB_PikaDollTalk
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa_Text_0:
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hiya, {PLAYER}!{PAUSE 60} You wanted\n"
	.string "to come see us before taking on Ruka?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Gible_Text_0:
	.string "Gib-dayo! {COLOR BLUE}(The next time we fight, I'll\n"
	.string "be stronger! Believe it!)$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_0:
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}These are Pokéballs. They're\n"
	.string "a special tool that you can use to\l"
	.string "catch wild Pokémon!\p"
	.string "And with that, {PLAYER}, you're all set\n"
	.string "to begin your journey!\p"
	.string "Get out there, explore all that the\n"
	.string "isles have to offer, and aid me in\l"
	.string "completing the Maryan Pokédex!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_1:
	.string "{COLOR DARK_GRAY}I suggest you meet up with my other\n"
	.string "student first, though.\p"
	.string "{COLOR DARK_GRAY}Her name is Melissa, and she's been\n"
	.string "helping me out for about a week or two!\p"
	.string "{COLOR DARK_GRAY}She knows her way around Oranna better\n"
	.string "than me, so she can help you navigate\l"
	.string "the island and give you some pointers!\p"
	.string "{COLOR DARK_GRAY}Melissa should be somewhere in the\n"
	.string "Minty Meadows right now. It'll be to the\l"
	.string "east of her hometown of Maplegrove!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_2:
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Melissa should be somewhere\n"
	.string "in the Minty Meadows right now.{PAUSE 30} It'll be\l"
	.string "to the east of her hometown of\l"
	.string "Maplegrove!\p"
	.string "Oh, did you want me to check on the\n"
	.string "progress of your Pokédex so far?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_3:
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Your name will be etched in\n"
	.string "Marya's history, as well as our hearts,\l"
	.string "forever, {PLAYER}.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_4:
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again! I see you and Melissa have\l"
	.string "finally met.\p"
	.string "She told me that the two of you fought\n"
	.string "a ferocious Mightyena and saved Old\l"
	.string "Man Paulie's Mareep!\p"
	.string "That must've been very frightening as\n"
	.string "two trainers just starting their\l"
	.string "journey. I'm glad you're both alright.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_5:
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again! Congrats on getting your\l"
	.string "first gym badge in the Marya League!\p"
	.string "You're growing so fast as a trainer\n"
	.string "already, I'm thoroughly impressed!\p"
	.string "Melissa's already gone ahead to Lumine\n"
	.string "Island, if you were wondering.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6:
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7:
	.string "Let's see how you're doing with your\n"
	.string "Pokédex...$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_8:
	.string "It looks like you've seen a total of\n"
	.string "{STR_VAR_1} Pokémon, and caught a\l"
	.string "total of {STR_VAR_2} Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_9:
	.string "Oh? You've caught at least 30 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take this Technical Machine as a\n"
	.string "little reward. It'll be very useful for\l"
	.string "catching Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_10:
	.string "Oh? You've caught at least 60 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Nest Balls as a\n"
	.string "little reward!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_11:
	.string "Oh? You've caught at least 90 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Rare Candies\n"
	.string "as a little reward. Each one packs\l"
	.string "enough power to instantly level your\l"
	.string "Pokémon up!\p"
	.string "Just don't try and eat one yourself.\n"
	.string "They're not very delectable to humans.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_12:
	.string "Oh? You've caught at least 120\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Level Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_13:
	.string "Oh? You've caught at least 150\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ability\n"
	.string "Capsules as a little reward. When given\l"
	.string "to a Pokémon, it will change their basic\l"
	.string "ability to their other possible ability,\l"
	.string "if they have another one!\p"
	.string "However, they can't be used to change a\n"
	.string "Pokémon's ability to their hidden one.\l"
	.string "You'll need another type of item to do\l"
	.string "that, perhaps one that you'll get as a\l"
	.string "later reward...$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_14:
	.string "Oh? You've caught at least 180\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ultra Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_15:
	.string "Oh? You've caught at least 210\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these super rare\n"
	.string "Ability Patches as a reward.\p"
	.string "By using them on a Pokémon, you'll grant\n"
	.string "them their hidden ability!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_16:
	.string "Oh? You've caught at least 240\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Quick Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_17:
	.string "Oh? You've caught at least 270\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chance of a “critical capture” to\l"
	.string "occur when you use any Pokéball!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_18:
	.string "Oh? You've caught at least 300\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "experience your Pokémon gain!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_19:
	.string "Oh? You've caught at least 330\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chances of getting a Pokémon egg from\l"
	.string "the daycare at Fresa Farms!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_20:
	.string "Oh? You've caught at least 360 Pokémon\n"
	.string "now? Amazing work, {PLAYER}! You're\l"
	.string "nearing completion of the Pokédex!\l"
	.string "Here, this Master Ball was gifted to me\l"
	.string "by Poe Industries. I'm sure a seasoned\l"
	.string "trainer such as yourself will be able to\l"
	.string "make use of it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_21:
	.string "You're nearly there, {PLAYER}! I know\n"
	.string "you can do it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_22:
	.string "I cannot believe my aging eyes... You've\n"
	.string "done it! You've seen and caught all\l"
	.string "{STR_VAR_1} Pokémon, {PLAYER}!\p"
	.string "At last... my lifelong dream of\n"
	.string "completing the Pokédex has come true.\p"
	.string "I'm not quite sure what to say,\n"
	.string "{PLAYER}. I truly can't thank you\l"
	.string "enough for your help.\p"
	.string "Here, please take this as your final\n"
	.string "reward. A mysterious stranger handed\l"
	.string "it to me many years ago. He told me to\l"
	.string "give it to the world's strongest\l"
	.string "trainer, and I see no other recipient\l"
	.string "more worthy of that title than you!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0:
	.string "Heheh...{PAUSE 60} Yeah...{PAUSE 120} H-Huh?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1:
	.string "I-It's not what you think! I was just\n"
	.string "doing research!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2:
	.string "Huh? You're not the professor...{PAUSE 60} G-Go\n"
	.string "away! I'm doing grown-up stuff!$"

ProfTalk_First_Text::
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's a pleasure\n"
	.string "to finally meet you in person!\p"
	.string "{COLOR DARK_GRAY}How are you enjoying the isles so far?\n"
	.string "Hopefully the trip was smooth sailing.\p"
	.string "{COLOR DARK_GRAY}The weather will probably take some\n"
	.string "getting used to though. It's a lot more\l"
	.string "humid here than what you're used to,\l"
	.string "isn't it?\p"
	.string "{COLOR DARK_GRAY}Anyways, I bet you're itching to begin\n"
	.string "your adventure, so I'll save the small\l"
	.string "talk for later and present you with\l"
	.string "your very first companion!$"

ProfTalk_Second_Text::
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Haha, I see it's already\n"
	.string "taken a liking to you! Treat it with\l"
	.string "care and respect, and it'll do the same\l"
	.string "for you!\p"
	.string "{COLOR DARK_GRAY}Along with your new friend, I'll also be\n"
	.string "entrusting you with this Pokédex!$"

Prof_Recieved_Pokedex_Text::
	.string "{COLOR DARK_GRAY}{PLAYER} recieved the Pokédex!$"

ProfTalk_Third_Text::
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}The Pokédex is a highly\n"
	.string "advanced piece of tech that will\l"
	.string "automatically record the data of any\l"
	.string "Pokémon you see or catch, making it an\l"
	.string "essential piece of tech to have with\l"
	.string "you while you're conducting fieldwork!\l"
	.string "{COLOR DARK_GRAY}Wahaha, isn't the power of science just\l"
	.string "amazing?\p"
	.string "{COLOR DARK_GRAY}Oh, you'll also need some of these too!$"

Scientist1Talk_Text::
	.string "{COLOR DARK_GRAY}You kids are lucky. While you're outside\n"
	.string "traveling and exploring, I'm stuck here.\p"
	.string "{COLOR DARK_GRAY}Sorting bookshelves, writing research\n"
	.string "papers, and programming software.$"

CocoTalk_Text::
	.string "{COLOR RED}(She seems preoccupied... I should leave\n"
	.string "her be.)$"

ReceivedEevee_Text::
	.string "{COLOR DARK_GRAY}{PLAYER} recieved an {STR_VAR_1}!$"

ISLANDGAME_CHERIPORT_LAB_VigorothTalk::
	.string "{COLOR RED}(It looks like the Pokémon is hard at\n"
	.string "work.)$"

ISLANDGAME_CHERIPORT_LAB_PikaDollTalk::
	.string "{COLOR RED}(Wow! This stuffed Pikachu is a lot\n"
	.string "bigger than mine.)$"
