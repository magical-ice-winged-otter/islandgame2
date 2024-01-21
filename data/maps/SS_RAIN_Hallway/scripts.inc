SS_RAIN_Hallway_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 1, 25, 11
	addobject 1
	return


SS_RAIN_Hallway_GirlTalk::
	lock
	faceplayer
	msgbox NPCGirl_Text
	waitmessage
	release
	return


SS_RAIN_Hallway_ElectricianTalk::
	lock
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, SS_RAIN_Hallway_ElectricianTalk_2
	msgbox SS_RAIN_Hallway_ElectricianTalk_Text_1
SS_RAIN_Hallway_ElectricianTalk_1:
	waitmessage
	release
	return

SS_RAIN_Hallway_ElectricianTalk_2:
	msgbox SS_RAIN_Hallway_ElectricianTalk_Text_0
	goto SS_RAIN_Hallway_ElectricianTalk_1


SS_RAIN_Hallway_ElectricianTalk_Text_0:
	.string "Oh hey, you're back!\p"
	.string "Unfortunately, we still haven't figured\n"
	.string "out what's going on with the lights...\p"
	.string "We're on our break right now, so you can\n"
	.string "check it out for yourself if you want.\p"
	.string "Just watch your step though... It's\n"
	.string "pretty dark.$"

SS_RAIN_Hallway_ElectricianTalk_Text_1:
	.string "{COLOR DARK_GRAY}We're currently doing some maintenance,\n"
	.string "so I can't let you downstairs for now.\p"
	.string "{COLOR DARK_GRAY}For some reason, the lights just keep\n"
	.string "turning on and off by themselves.\p"
	.string "{COLOR DARK_GRAY}It's almost like they're being\n"
	.string "possessed by a {COLOR LIGHT_BLUE}ghost {COLOR DARK_GRAY}or something...$"

NPCGirl_Text::
	.string "{COLOR DARK_GRAY}It's too hot outside. I'm staying in\n"
	.string "here until it's cooler.$"
