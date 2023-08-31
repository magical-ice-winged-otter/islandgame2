SS_RAIN_Hallway_MapScripts::
	.byte 0


SS_RAIN_Hallway_GirlTalk::
	lock
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
	.string "{COLOR DARK_GRAY}HellO! I am npc nyumber 1$"

ElectricianTalk_Text::
	.string "{COLOR DARK_GRAY}I am the captain's second in command,\n"
	.string "and I'm in charge of the ship's\l"
	.string "electronics.\p"
	.string "{COLOR DARK_GRAY}The basement?\p"
	.string "{COLOR DARK_GRAY}Just between you and me, there's\n"
	.string "something off with the washing\l"
	.string "machine.\p"
	.string "Like a {COLOR LIGHT_BLUE}ghost {COLOR DARK_GRAY}possessed it. {COLOR DARK_GRAY}Of course, I\n"
	.string "don't believe in superstitions, but I\l"
	.string "can't let you down there for now.$"
