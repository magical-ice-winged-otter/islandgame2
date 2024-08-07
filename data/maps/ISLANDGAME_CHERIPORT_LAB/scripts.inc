ISLANDGAME_CHERIPORT_LAB_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk::
	lock
	faceplayer
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1:
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_5
	msgbox ProfTalk_CheckPokedex
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_4:
	release
	return

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2:
	msgbox ProfTalk_First_Text
	setflag FLAG_PROF_GAVE_EEVEE
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, , , , , , , , , , , , , , MOVE_TACKLE, MOVE_MUD_SLAP, MOVE_SAND_ATTACK, MOVE_TAIL_WHIP, FALSE
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	msgbox ReceivedEevee_Text
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_9
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8:
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
	giveitem ITEM_POKE_BALL, 5
	msgbox ProfTalk_Fourth_Text
	setrespawn HEAL_LOCATION_CHERIPORT
	setflag FLAG_BADGE01_GET
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_5:
	msgbox ProfTalk_AudreyNotDefeated
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_4

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_9:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8


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


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0:
	.string "Heheh...{PAUSE 60} Yeah...{PAUSE 120} H-Huh?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1:
	.string "I-It's not what you think! I was just\n"
	.string "doing research!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2:
	.string "Huh? You're not the professor...{PAUSE 60} Go\n"
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

ProfTalk_Fourth_Text::
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}These are Pokéballs. They're\n"
	.string "a special tool that you can use to\l"
	.string "catch wild Pokémon!\p"
	.string "{COLOR DARK_GRAY}And with that, {PLAYER}, you're all set\n"
	.string "to begin your journey!\p"
	.string "{COLOR DARK_GRAY}I suggest you meet up with my other\n"
	.string "student first, though.\p"
	.string "{COLOR DARK_GRAY}Her name is Melissa, and she's been\n"
	.string "helping me out for about a week or two.\p"
	.string "{COLOR DARK_GRAY}She knows her way around Oranna better\n"
	.string "than me, so she can help you navigate\l"
	.string "the island and give you some pointers!\p"
	.string "{COLOR DARK_GRAY}Melissa should be somewhere near her\n"
	.string "hometown, Maplegrove, right now.$"

ProfTalk_AudreyNotDefeated::
	.string "{COLOR DARK_GRAY}Melissa should be somewhere near her\n"
	.string "hometown, Maplegrove, right now.$"

ProfTalk_CheckPokedex::
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again. How have you been?\p"
	.string "Let's see the progress you've made on\n"
	.string "completing your Pokédex...\p"
	.string "You've seen a total of {COLOR RED}(X) Pokémon... and\n"
	.string "caught a total of {COLOR RED}(Y) of them!\p"
	.string "Not too shabby at all, {PLAYER}! Keep\n"
	.string "up the good work!$"

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
