ISLANDGAME_MAPLEGROVE_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor::
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	faceplayer
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorIntro
# 9 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	showmoneybox 0, 0
# 10 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorOffer, MSGBOX_YESNO
# 11 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_1
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	checkmoney 1500
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_5
ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_4:
# 21 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorWhichMon
# 22 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	special ChooseMonForMoveTutor
# 24 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	waitstate
# 25 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_8
ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_7:
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	showmoneybox 0, 0
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorMoveLearned
# 31 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	closemessage
# 32 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	removemoney 1500
# 33 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	updatemoneybox
# 34 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	playse SE_SHOP
# 35 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	waitse
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	goto HPTutor_End
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_1:
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_0
# 13 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	goto HPTutor_End
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_5:
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_1
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	goto HPTutor_End
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_4

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_8:
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_0
# 27 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	goto HPTutor_End
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_7


HPTutor_End::
# 41 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	hidemoneybox
# 42 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_PKMN::
# 72 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	lock
# 73 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	faceplayer
# 74 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 75 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_PKMNTalk
# 76 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_NPC::
# 88 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	lock
# 89 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	faceplayer
# 90 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_NPCTalk
# 91 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_0:
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}What a shame... All that hidden\n"
	.string "potential gone to waste.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_1:
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}My services do not come cheap... Come\n"
	.string "back when you have sufficient funds.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorIntro::
# 45 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}Hmm... Your Pokémon possess a dormant\n"
	.string "power within them...\p"
	.string "{COLOR DARK_GRAY}Hidden potential just waiting to be\n"
	.string "unlocked...\p"
	.string "{COLOR DARK_GRAY}I can help them obtain this hidden\n"
	.string "power... provided you have the funds...$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorOffer::
# 53 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}I will teach your Pokémon its hidden\n"
	.string "power for ¥1500... How's that sound?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorWhichMon::
# 59 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}Excellent... Whose hidden power do you\n"
	.string "want unlocked...?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorMoveLearned::
# 65 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}Your Pokémon's hidden power has been\n"
	.string "unlocked... I will take my payment now.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_PKMNTalk::
# 79 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}Togepi! {COLOR BLUE}(Hello hooman!)\p"
	.string "{COLOR DARK_GRAY}Togi-togi! {COLOR BLUE}(Wow! You can understand me?\n"
	.string "That's amazing!)\p"
	.string "{COLOR DARK_GRAY}Pi-pi. {COLOR BLUE}(You must be really special.)$"

ISLANDGAME_MAPLEGROVE_HOUSE1_NPCTalk::
# 94 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "{COLOR DARK_GRAY}My Togepi is very talkative. I wish I\n"
	.string "could understand what he was saying...$"
