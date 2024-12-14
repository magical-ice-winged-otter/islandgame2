ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts::
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_MelissaSister::
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	faceplayer
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_MelissaSister_Text_0
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	closemessage
# 24 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_Buneary::
# 28 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	lock
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	faceplayer
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 31 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_Buneary_Text_0
# 34 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	closemessage
# 35 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyDad::
# 39 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	faceplayer
# 41 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyDadTalk
# 42 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	release
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom::
# 54 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	lock
# 55 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	faceplayer
# 56 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_2
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomSecondTalk
ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_1:
# 62 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_2:
# 57 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomFirstTalk
	goto ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_AudreyMom_1


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_MelissaSister_Text_0:
# 21 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "I can't wait to be a Pokémon trainer\n"
	.string "like you and my big sister!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_EventScript_Buneary_Text_0:
# 32 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "HA{UP_ARROW} HA{RIGHT_ARROW} HA{DOWN_ARROW} HA{LEFT_ARROW}$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyDadTalk::
# 45 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "{COLOR DARK_GRAY}Feels like just yesterday, I was taking\n"
	.string "Melissa to her first day of school.\p"
	.string "{COLOR DARK_GRAY}Now she's exploring the vast wilderness\n"
	.string "of Marya all on her own.\p"
	.string "{COLOR DARK_GRAY}Kids grow up so fast, don't they? Blink\n"
	.string "and you'll miss it!$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_AudreyMomFirstTalk::
# 65 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
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
# 75 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "It's good to see you again, dearie!\n"
	.string "Melissa just stopped by earlier.\p"
	.string "She told me all about how you two helped\n"
	.string "the owner of Fresa Farms find his\l"
	.string "missing Mareep!\p"
	.string "You were both very kind and brave to\n"
	.string "stand up to that wild Mightyena.\p"
	.string "Thank you for being with my daughter.\n"
	.string "She gets ahead of herself a lot, so I'm\l"
	.string "glad neither of you were hurt.$"
