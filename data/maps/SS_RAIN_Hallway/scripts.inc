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
	.string "{COLOR DARK_GRAY}Unfortunately, I can't let you down in\n"
	.string "the basement for now.\p"
	.string "{COLOR DARK_GRAY}I think there's something off with the\n"
	.string "washing machine...\p"
	.string "Like a {COLOR LIGHT_BLUE}ghost{COLOR DARK_GRAY} possessed it or\n"
	.string "something...$"
