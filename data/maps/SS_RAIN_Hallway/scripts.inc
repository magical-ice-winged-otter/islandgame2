SS_RAIN_Hallway_MapScripts::
	.byte 0


SS_RAIN_Hallway_GirlTalk::
	lock
	faceplayer
	msgbox NPCGirl_Text
	waitmessage
	release
	return


SS_RAIN_Hallway_ElectricianTalk::
	lock
	msgbox ElectricianTalk_Text
	waitmessage
	release
	return


NPCGirl_Text::
	.string "{COLOR DARK_GRAY}It's too hot outside. I'm staying in\n"
	.string "here until it's cooler.$"

ElectricianTalk_Text::
	.string "{COLOR DARK_GRAY}I'm the captain's second in command and\n"
	.string "in charge of the ship's electronics.\p"
	.string "{COLOR DARK_GRAY}We're doing some maintainence right\n"
	.string "now, so I can't let you downstairs.\p"
	.string "{COLOR DARK_GRAY}Apparently there's something wrong\n"
	.string "with the washing machine.\p"
	.string "{COLOR DARK_GRAY}It's acting as if it was possessed by a\n"
	.string "{COLOR LIGHT_BLUE}ghost{COLOR DARK_GRAY}...$"
