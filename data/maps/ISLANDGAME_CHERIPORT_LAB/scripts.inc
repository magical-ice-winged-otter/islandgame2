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
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_5
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_5:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist1Talk::
	lock
	faceplayer
	msgbox Scientist1Talk_Text
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk::
	lock
	faceplayer
	msgbox Scientist2Talk_Text
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist3Talk::
	lock
	faceplayer
	msgbox Scientist3Talk_Text
	release
	return


ProfTalk_First_Text::
	.string "{COLOR DARK_GRAY}HelloProfFirst$"

ProfTalk_Normal_Text::
	.string "{COLOR DARK_GRAY}HelloProfNOrmal$"

Scientist1Talk_Text::
	.string "{COLOR DARK_GRAY}Hello1$"

Scientist2Talk_Text::
	.string "{COLOR DARK_GRAY}Hello2$"

Scientist3Talk_Text::
	.string "{COLOR DARK_GRAY}Hello3$"

ReceivedEevee_Text::
	.string "{COLOR DARK_GRAY}{PLAYER} recieved an {STR_VAR_1}!$"
