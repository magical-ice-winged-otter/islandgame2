ISLANDGAME_CAMP_PERSI_LODGE_2_MapScripts::
	.byte 0


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC1Talk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC2Talk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_NPC3::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_EventScript_Doll::
	lock
	faceplayer
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_2_NPC1Talk::
	.string "I hope Scoutmaster Lumpus is doing\n"
	.string "alright. Those boys can be so rowdy.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC2Talk::
	.string "Camp is lame, nature is gross, and we\n"
	.string "don't even have air conditioning here!\p"
	.string "They took away my phone too! How am I\n"
	.string "going to stay up to date on my shows!?$"

ISLANDGAME_CAMP_PERSI_LODGE_2_NPC3Talk::
	.string "The boys are so lucky to have a game\n"
	.string "console. I wanted to get one for our\l"
	.string "cabin too, but I got outvoted by\l"
	.string "everyone else.\p"
	.string "So now we just have a stupid kitchen in\n"
	.string "here.$"

ISLANDGAME_CAMP_PERSI_LODGE_2_DollInteract::
	.string "{COLOR RED}(It's a doll of an Azurill. It looks\n"
	.string "neglected.)$"
