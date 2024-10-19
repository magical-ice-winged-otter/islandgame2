ISLANDGAME_CAMP_PERSI_LODGE_2_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC1::
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC1Talk
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2::
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC2Talk
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC3::
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_Doll::
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract
# 49 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_NPC1Talk::
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "I hope Scoutmaster Lumpus is doing\n"
	.string "alright. Those boys can be so rowdy.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC2Talk::
# 24 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "Camp is lame, nature is gross, and we\n"
	.string "don't even have air conditioning here!\p"
	.string "They took away my phone too! How am I\n"
	.string "going to stay up to date on my shows!?$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk::
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "The boys are so lucky to have a game\n"
	.string "console. I wanted to get one for our\l"
	.string "cabin too, but I got outvoted by\l"
	.string "everyone else.\p"
	.string "So now we just have a stupid kitchen in\n"
	.string "here.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract::
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_2/scripts.pory"
	.string "{COLOR RED}(It's a doll of an Azurill. It looks\n"
	.string "neglected.)$"
