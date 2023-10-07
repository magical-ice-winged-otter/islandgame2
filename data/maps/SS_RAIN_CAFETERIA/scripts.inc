SS_RAIN_CAFETERIA_MapScripts::
	.byte 0


SS_RAIN_CAFETERIA_NPC1_TALK::
	lock
	msgbox SS_RAIN_CAFETERIA_NPC1_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC2_TALK::
	lock
	msgbox SS_RAIN_CAFETERIA_NPC2_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC3_TALK::
	lock
	msgbox SS_RAIN_CAFETERIA_NPC3_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC4_TALK::
	lock
	faceplayer
	msgbox SS_RAIN_CAFETERIA_NPC4_TEXT
	waitmessage
	release
	return


SS_RAIN_CAFETERIA_NPC1_TEXT::
	.string "{COLOR DARK_GRAY}Today's menu choices are great! I love\n"
	.string "the burgers here!$"

SS_RAIN_CAFETERIA_NPC2_TEXT::
	.string "{COLOR DARK_GRAY}An extra large pinap... Who puts PINAP\n"
	.string "BERRIES on a PIZZA?$"

SS_RAIN_CAFETERIA_NPC3_TEXT::
	.string "{COLOR DARK_GRAY}He probably won't notice if I just take\n"
	.string "a couple of these fries for myself...$"

SS_RAIN_CAFETERIA_NPC4_TEXT::
	.string "{COLOR DARK_GRAY}What's your favorite flavor of ice\n"
	.string "cream? I like orange sherbet.$"
