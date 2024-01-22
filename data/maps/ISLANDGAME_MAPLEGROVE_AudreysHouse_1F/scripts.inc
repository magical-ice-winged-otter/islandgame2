ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyDad::
	lock
	faceplayer
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyDadTalk
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom::
	lock
	faceplayer
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_2
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomSecondTalk
ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_1:
	release
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_2:
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomFirstTalk
	goto ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_1


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyDadTalk::
	.string "{COLOR DARK_GRAY}Feels like just yesterday, I was taking\n"
	.string "Audrey to her first day of school.\p"
	.string "{COLOR DARK_GRAY}Now she's exploring the vast wilderness\n"
	.string "of Marya all on her own.\p"
	.string "{COLOR DARK_GRAY}Kids grow up so fast, don't they? Blink\n"
	.string "and you'll miss it!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomFirstTalk::
	.string "{COLOR DARK_GRAY}Hello dearie! You must be {PLAYER},\n"
	.string "right? My daughter told me about you.\p"
	.string "{COLOR DARK_GRAY}She was very excited to finally have a\n"
	.string "colleague in the Trainer Program!\p"
	.string "{COLOR DARK_GRAY}I hope you two get along well. She can\n"
	.string "be a little ditzy and too bubbly at\l"
	.string "times, but she's a warm and caring girl.\p"
	.string "{COLOR DARK_GRAY}Oh, where is she right now? She should\n"
	.string "be in the Minty Meadows doing research.\p"
	.string "{COLOR DARK_GRAY}I'm sure she'd be more than happy to\n"
	.string "show you around Oranna.$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomSecondTalk::
	.string "It's good to see you again, dearie!\n"
	.string "Audrey just stopped by earlier.\p"
	.string "She told me all about how you two helped\n"
	.string "the owner of Fresa Farms find his\l"
	.string "missing Mareep!\p"
	.string "You were both very kind and brave to\n"
	.string "stand up to that wild Mightyena.\p"
	.string "Thank you for being with my daughter.\n"
	.string "She gets ahead of herself a lot, so I'm\l"
	.string "glad neither of you were hurt.$"
