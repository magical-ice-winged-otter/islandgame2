SS_RAIN_Hallway_MapScripts::
# 4 "data/maps/SS_RAIN_Hallway/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SS_RAIN_Hallway/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SS_RAIN_Hallway/scripts.pory"
	setobjectxyperm 1, 25, 8
# 7 "data/maps/SS_RAIN_Hallway/scripts.pory"
	addobject 1
	return


SS_RAIN_Hallway_GirlTalk::
# 14 "data/maps/SS_RAIN_Hallway/scripts.pory"
	lock
# 15 "data/maps/SS_RAIN_Hallway/scripts.pory"
	faceplayer
# 16 "data/maps/SS_RAIN_Hallway/scripts.pory"
	msgbox NPCGirl_Text
# 17 "data/maps/SS_RAIN_Hallway/scripts.pory"
	waitmessage
# 18 "data/maps/SS_RAIN_Hallway/scripts.pory"
	release
	return


SS_RAIN_Hallway_ElectricianTalk::
# 22 "data/maps/SS_RAIN_Hallway/scripts.pory"
	lock
# 23 "data/maps/SS_RAIN_Hallway/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, SS_RAIN_Hallway_ElectricianTalk_2
# 32 "data/maps/SS_RAIN_Hallway/scripts.pory"
	msgbox SS_RAIN_Hallway_ElectricianTalk_Text_1
SS_RAIN_Hallway_ElectricianTalk_1:
# 38 "data/maps/SS_RAIN_Hallway/scripts.pory"
	waitmessage
# 39 "data/maps/SS_RAIN_Hallway/scripts.pory"
	release
	return

SS_RAIN_Hallway_ElectricianTalk_2:
# 24 "data/maps/SS_RAIN_Hallway/scripts.pory"
	msgbox SS_RAIN_Hallway_ElectricianTalk_Text_0
	goto SS_RAIN_Hallway_ElectricianTalk_1


SS_RAIN_Hallway_ElectricianTalk_Text_0:
# 25 "data/maps/SS_RAIN_Hallway/scripts.pory"
	.string "Oh hey, you're back!\p"
	.string "Unfortunately, we still haven't figured\n"
	.string "out what's going on with the lights...\p"
	.string "We're on our break right now, so you can\n"
	.string "check it out for yourself if you want.\p"
	.string "Just watch your step though... It's\n"
	.string "pretty dark.$"

SS_RAIN_Hallway_ElectricianTalk_Text_1:
# 33 "data/maps/SS_RAIN_Hallway/scripts.pory"
	.string "{COLOR DARK_GRAY}We're currently doing some maintenance,\n"
	.string "so I can't let you downstairs for now.\p"
	.string "{COLOR DARK_GRAY}For some reason, the lights just keep\n"
	.string "turning on and off by themselves.\p"
	.string "{COLOR DARK_GRAY}It's almost like they're being\n"
	.string "possessed by a {COLOR LIGHT_BLUE}ghost {COLOR DARK_GRAY}or something...$"

NPCGirl_Text::
# 42 "data/maps/SS_RAIN_Hallway/scripts.pory"
	.string "{COLOR DARK_GRAY}It's too hot outside. I'm staying in\n"
	.string "here until it's cooler.$"
