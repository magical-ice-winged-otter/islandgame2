ISLANDGAME_APPLEVINE_RESTAURANT_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC1::
# 5 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC1_Text_0
# 9 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	closemessage
# 10 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC2::
# 14 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC2_Text_0
# 18 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	closemessage
# 19 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC3::
# 23 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC3_Text_0
# 27 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	closemessage
# 28 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC4::
# 32 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC4_Text_0
# 37 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	closemessage
# 38 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee::
# 42 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_0
# 47 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	pokemart ISLANDGAME_APPLEVINE_CONFECTIONERY_MartItems
# 48 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_1
# 51 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	closemessage
# 52 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	release
	return


	.align 2
# 56 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
ISLANDGAME_APPLEVINE_CONFECTIONERY_MartItems:
# 57 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 58 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 59 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 60 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 61 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 62 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 63 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 64 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 65 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 66 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 67 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 68 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC1_Text_0:
# 7 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.string "I WANNA LOLLIPOP MOM! I WANNA I WANNA I\n"
	.string "WANNAAAAAAAA$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC2_Text_0:
# 16 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.string "No! The last time I got you a lollipop,\n"
	.string "you spent the entire day counting how\l"
	.string "many licks it took to get to the center!$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC3_Text_0:
# 25 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.string "Hmm, what should I decorate my Alcremie\n"
	.string "with...?$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_NPC4_Text_0:
# 35 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.string "Be sure to check out our booth at the\n"
	.string "Silverwing Festival. We will be selling\l"
	.string "some of our limited-time premium mochi!$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_0:
# 45 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.string "Welcome to La Cucina Dolche, the\n"
	.string "sweetest shop in Marya.$"

ISLANDGAME_APPLEVINE_CONFECTIONERY_Employee_Text_1:
# 49 "data/maps/ISLANDGAME_APPLEVINE_RESTAURANT/scripts.pory"
	.string "Have a blessed day.$"
