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
	givecustommon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_PREMIER_BALL, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	msgbox ReceivedEevee_Text
	waitfanfare
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
