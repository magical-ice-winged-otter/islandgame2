ISLANDGAME_CHERIPORT_LAB_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk::
	lock
	faceplayer
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2
	msgbox ProfTalk_Normal_Text
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1:
	release
	return

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2:
	msgbox ProfTalk_First_Text
	setflag FLAG_PROF_GAVE_EEVEE
	setflag FLAG_SYS_POKEMON_GET
	givecustommon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_PREMIER_BALL, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_SAND_ATTACK, MOVE_HELPING_HAND, FALSE
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	msgbox ReceivedEevee_Text
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_6
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_5:
	msgbox ProfTalk_Second_Text
	playfanfare MUS_OBTAIN_ITEM
	msgbox Prof_Recieved_Pokedex_Text
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	msgbox ProfTalk_Third_Text
	giveitem ITEM_POKE_BALL, 5
	msgbox ProfTalk_Fourth_Text
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_6:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_5


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist1Talk::
	lock
	faceplayer
	msgbox Scientist1Talk_Text
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk::
	lock
	msgbox Scientist2Talk_Text
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist3Talk::
	lock
	faceplayer
	msgbox Scientist3Talk_Text
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
	.string "{COLOR DARK_GRAY}I suggest you meet up with my\n"
	.string "assistant first though.\p"
	.string "{COLOR DARK_GRAY}Her name is Audrey, and she's been\n"
	.string "helping me out for about a week or two.\p"
	.string "{COLOR DARK_GRAY}She knows her way around Oranna better\n"
	.string "than me, so she can help you navigate\l"
	.string "the island and give you some pointers!\p"
	.string "{COLOR DARK_GRAY}Audrey should be somewhere near her\n"
	.string "hometown, Maplegrove, right now.$"

ProfTalk_Normal_Text::
	.string "{COLOR DARK_GRAY}Audrey should be somewhere near her\n"
	.string "hometown, Maplegrove, right now.$"

Scientist1Talk_Text::
	.string "{COLOR DARK_GRAY}You kids are lucky. While you're outside\n"
	.string "traveling and exploring, I'm stuck here.\p"
	.string "{COLOR DARK_GRAY}Sorting bookshelves, writing research\n"
	.string "papers, and programming software.\p"
	.string "{COLOR DARK_GRAY}If only we had the Starter Program when\n"
	.string "I was a teen...$"

Scientist2Talk_Text::
	.string "{COLOR DARK_GRAY}Heheh.... Yeah... H-Huh? I-It's not what\n"
	.string "you think! I was just doing research!\p"
	.string "{COLOR DARK_GRAY}Huh? You're not the professor... Go\n"
	.string "away! I'm doing grown-up stuff!$"

Scientist3Talk_Text::
	.string "{COLOR DARK_GRAY}The professor used to go outside and\n"
	.string "conduct all his fieldwork himself.\p"
	.string "{COLOR DARK_GRAY}That's actually how we met. He was\n"
	.string "getting chased around by a Zigzagoon.\p"
	.string "{COLOR DARK_GRAY}Ah, memories...$"

ReceivedEevee_Text::
	.string "{COLOR DARK_GRAY}{PLAYER} recieved an {STR_VAR_1}!$"

ISLANDGAME_CHERIPORT_LAB_VigorothTalk::
	.string "{COLOR RED}It looks like the Pokémon is hard at\n"
	.string "work.$"

ISLANDGAME_CHERIPORT_LAB_PikaDollTalk::
	.string "{COLOR RED}Wow! It looks like an actual Pikachu,\n"
	.string "but it's just a plush!$"
