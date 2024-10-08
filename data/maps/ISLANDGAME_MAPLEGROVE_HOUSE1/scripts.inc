ISLANDGAME_MAPLEGROVE_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorIntro
	showmoneybox 0, 0
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorOffer, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_1
	checkmoney 1500
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_5
ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_4:
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorWhichMon
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_8
ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_7:
	showmoneybox 0, 0
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorMoveLearned
	closemessage
	removemoney 1500
	updatemoneybox
	playse SE_SHOP
	waitse
	goto HPTutor_End
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_1:
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_0
	goto HPTutor_End
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_5:
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_1
	goto HPTutor_End
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_4

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_8:
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_0
	goto HPTutor_End
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_7


HPTutor_End::
	hidemoneybox
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_PKMN::
	lock
	faceplayer
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_PKMNTalk
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_NPC::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_NPCTalk
	release
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_0:
	.string "{COLOR DARK_GRAY}What a shame... All that hidden\n"
	.string "potential gone to waste.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_EventScript_HPTutor_Text_1:
	.string "{COLOR DARK_GRAY}My services do not come cheap... Come\n"
	.string "back when you have sufficient funds.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorIntro::
	.string "{COLOR DARK_GRAY}Hmm... Your Pokémon possess a dormant\n"
	.string "power within them...\p"
	.string "{COLOR DARK_GRAY}Hidden potential just waiting to be\n"
	.string "unlocked...\p"
	.string "{COLOR DARK_GRAY}I can help them obtain this hidden\n"
	.string "power... provided you have the funds...$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorOffer::
	.string "{COLOR DARK_GRAY}I will teach your Pokémon its hidden\n"
	.string "power for ¥1500... How's that sound?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorWhichMon::
	.string "{COLOR DARK_GRAY}Excellent... Whose hidden power do you\n"
	.string "want unlocked...?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_HPTutorMoveLearned::
	.string "{COLOR DARK_GRAY}Your Pokémon's hidden power has been\n"
	.string "unlocked... I will take my payment now.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_PKMNTalk::
	.string "{COLOR DARK_GRAY}Togepi! {COLOR BLUE}(Hello hooman!)\p"
	.string "{COLOR DARK_GRAY}Togi-togi! {COLOR BLUE}(Wow! You can understand me?\n"
	.string "That's amazing!)\p"
	.string "{COLOR DARK_GRAY}Pi-pi. {COLOR BLUE}(You must be really special.)$"

ISLANDGAME_MAPLEGROVE_HOUSE1_NPCTalk::
	.string "{COLOR DARK_GRAY}My Togepi is very talkative. I wish I\n"
	.string "could understand what he was saying...$"
