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
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomTalk
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyDadTalk::
	.string "{COLOR DARK_GRAY}Feels like just yesterday, I was taking\n"
	.string "Audrey to her first day of school. {COLOR DARK_GRAY}Now\l"
	.string "she's exploring the vast wilderness of\l"
	.string "Mariyama all on her own. {COLOR DARK_GRAY}Kids grow up so\l"
	.string "fast, don't they? Blink and you'll miss\l"
	.string "it!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomTalk::
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
