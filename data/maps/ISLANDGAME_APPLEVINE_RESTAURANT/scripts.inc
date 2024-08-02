ISLANDGAME_APPLEVINE_RESTAURANT_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC1::
	lock
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC1_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC2::
	lock
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC2_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC3::
	lock
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC3_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC4::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC4_Text_0
	closemessage
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_0
	pokemart ISLANDGAME_APPLEVINE_CONFECTIONERY_MartItems
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_1
	closemessage
	release
	return


	.align 2
ISLANDGAME_APPLEVINE_CONFECTIONERY_MartItems:
	.2byte ITEM_SWEET_HEART
	.2byte ITEM_OLD_GATEAU
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_STAR_SWEET
	.2byte ITEM_LOVE_SWEET
	.2byte ITEM_BERRY_SWEET
	.2byte ITEM_CLOVER_SWEET
	.2byte ITEM_FLOWER_SWEET
	.2byte ITEM_RIBBON_SWEET
	.2byte ITEM_STRAWBERRY_SWEET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC1_Text_0:
	.string "I WANNA LOLLIPOP MOM! I WANNA I WANNA I\n"
	.string "WANNAAAAAAAA$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC2_Text_0:
	.string "No! The last time I got you a lollipop,\n"
	.string "you spent the entire day counting how\l"
	.string "many licks it took to get to the\l"
	.string "center!$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC3_Text_0:
	.string "Hmm, what should I decorate my Alcremie\n"
	.string "with...?$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC4_Text_0:
	.string "Be sure to check out our booth at the\n"
	.string "Silverwing Festival. We will be selling\l"
	.string "some of our limited-time premium mochi!$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_0:
	.string "Welcome to La Cucina Dolche, the\n"
	.string "sweetest shop in Marya.$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_1:
	.string "Have a blessed day.$"
