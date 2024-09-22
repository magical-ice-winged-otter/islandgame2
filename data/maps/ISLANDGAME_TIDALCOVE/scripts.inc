ISLANDGAME_TIDALCOVE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	setflag FLAG_TEMP_2
	return

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_1
	goto ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_TEMP_3
	return


ISLANDGAME_TIDALCOVE_Interact_EntranceSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BehindGymSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BikeShopSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_GymSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking::
	lock
	msgbox ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_Interact_PrimFan1::
	lock
	msgbox ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_Interact_PrimFan2::
	lock
	msgbox ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0
	closemessage
	release
	return


ISLANDGAME_TIDALCOVE_Interact_Bike::
	msgbox ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0, MSGBOX_NPC
	release
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel::
	lock
	faceplayer
	playmoncry SPECIES_FLOATZEL, CRY_MODE_NORMAL
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachDude::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_BeachDude_2
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_2
ISLANDGAME_TIDALCOVE_Interact_BeachDude_1:
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return

ISLANDGAME_TIDALCOVE_Interact_BeachDude_2:
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
	waitmoncry
	goto ISLANDGAME_TIDALCOVE_Interact_BeachDude_1


ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_TIDALCOVE_YACHE_GIRL, ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_2
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_1, MSGBOX_NPC
	checkitemspace ITEM_YACHE_BERRY
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_5
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_3, MSGBOX_NPC
ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_1:
	closemessage
	release
	return

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_2:
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_0
	goto ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_1

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_5:
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_2, MSGBOX_NPC
	giveitem ITEM_YACHE_BERRY
	setflag FLAG_DAILY_TIDALCOVE_YACHE_GIRL
	goto ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_1


ISLANDGAME_TIDALCOVE_Interact_BeachFisher::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BeachGazer::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0
	closemessage
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BikeDude::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BikeDude_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_Squirtle::
	lock
	faceplayer
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
	goto_if_unset FLAG_TIDALCOVE_SQUIRTLE_GIFT, ISLANDGAME_TIDALCOVE_Interact_Squirtle_2
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_2
ISLANDGAME_TIDALCOVE_Interact_Squirtle_1:
SquirtleGiftEvent_End:
	release
	return

ISLANDGAME_TIDALCOVE_Interact_Squirtle_2:
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_Squirtle_6
ISLANDGAME_TIDALCOVE_Interact_Squirtle_5:
	checkitemspace ITEM_WATER_GEM
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_Squirtle_9
ISLANDGAME_TIDALCOVE_Interact_Squirtle_8:
	giveitem ITEM_WATER_GEM
	setflag FLAG_TIDALCOVE_SQUIRTLE_GIFT
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_1

ISLANDGAME_TIDALCOVE_Interact_Squirtle_6:
	goto SquirtleGiftEvent_End
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_5

ISLANDGAME_TIDALCOVE_Interact_Squirtle_9:
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_1
	goto SquirtleGiftEvent_End
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_8


ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0:
	.string "TIDALCOVE\n"
	.string "Crack open a cold one on our beach!\p"
	.string "(By cold one, we mean a non-alcoholic\n"
	.string "beverage, obviously.)$"

ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0:
	.string "LOSER LANDING\n"
	.string "git gud brah$"

ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0:
	.string "SEASIDE BIKE PATH\n"
	.string "Your most convenient way to Lumine!$"

ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0:
	.string "RANDEEZ HOT WHEELZ\n"
	.string "“ZOOM ZOOM MOTHER TRUCKERS”$"

ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0:
	.string "TIDALCOVE GYM\n"
	.string "LEADER: RUKA\p"
	.string "Home of Tidalcove's Precious Pearl!$"

ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0:
	.string "I am sorry, but I cannot let anyone else\n"
	.string "inside the gym for the day.\p"
	.string "{COLOR RED}(Hmm. It seems like the gym has reached\n"
	.string "its limit of challengers for the day...)\p"
	.string "(I should see what else Oranna has to\n"
	.string "offer in the meantime.)\p"
	.string "(Perhaps there's something west I can\n"
	.string "check out?)$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0:
	.string "Let us in, old geezer! As Prim's two\n"
	.string "biggest fans, we DEMAND entry!$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0:
	.string "We need to be cheering our queen on the\n"
	.string "front lines! Move aside, loser!$"

ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0:
	.string "{COLOR RED}(It's a bike. It's shiny and brand-new.\n"
	.string "The price tag is absurd, though.)$"

ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0:
	.string "I like sand! It's soft, smooth, and fun\n"
	.string "to play with!$"

ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0:
	.string "We don't have a lifeguard tower yet, so\n"
	.string "I watch from up here instead.\p"
	.string "With the amount of tourists we get,\n"
	.string "beach safety is our priority!\p"
	.string "If someone is in trouble, me and my\n"
	.string "Floatzel will swim out to save them!$"

ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel_Text_0:
	.string "{COLOR RED}(Floatzel is wearing a lifeguard shirt.)$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_0:
	.string "If I lose it all, slip and fall, will you\n"
	.string "laugh at me?$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1:
	.string "I will remember that.$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_2:
	.string "If I lose it all, lose it all, lose it all...$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_0:
	.string "I usually pick my berries right after I\n"
	.string "wake up!\p"
	.string "If you want, I can give you another one\n"
	.string "tommorrow.$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_1:
	.string "Yache Berries are a great way to cool\n"
	.string "off in Marya's sweltering heat.$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_2:
	.string "Try one for yourself!$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_3:
	.string "I'd give you one if you had more room!$"

ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0:
	.string "Hm... Your sense of fashion is severely\n"
	.string "lacking.$"

ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0:
	.string "Did you know Galarians can't say\n"
	.string "“bottle of water”?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0:
	.string "I'm training for the festival\n"
	.string "trialthalon!\p"
	.string "I got swimming down, just about got\n"
	.string "running down too, all that's left is...\p"
	.string "Cycling! But I wasn't able to snag a\n"
	.string "bike at the bike shop.\p"
	.string "I hope they get some in stock soon. I'm\n"
	.string "going to fall behind otherwise!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0:
	.string "{COLOR LIGHT_BLUE}Ruka's Milotic {COLOR DARK_GRAY}is so pretty. I wish I one\n"
	.string "too, but I heard they're notoriously\l"
	.string "hard to find.\p"
	.string "It's rumored that they only reside at\n"
	.string "the bottom of the Maryan Sea.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0:
	.string "Ruka is an ice-type specialist. Just\n"
	.string "like that one gym leader from Sinnoh!\p"
	.string "Ummm.. what was her name again?\p"
	.string "...\p"
	.string "Drats. You're too hip to fall for that.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0:
	.string "Would be weird if I asked Ruka to sign\n"
	.string "my body pillow of her?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0:
	.string "Ruka's presence has garnered a lot of\n"
	.string "foot traffic into Tidalcove.\p"
	.string "I think it's neat seeing so many\n"
	.string "tourists stop by just to see her.\p"
	.string "I can't help but feel a tad envious\n"
	.string "though... I wish I had all that\l"
	.string "attention.\p"
	.string "Oh, by the way, I'm Ruka's sister. I\n"
	.string "thought you should know that.\p"
	.string "Don't you want to ask me questions\n"
	.string "about her? Yes? No? Maybe?$"

ISLANDGAME_TIDALCOVE_Interact_BikeDude_Text_0:
	.string "Welcome to the Seaside Bike Path,\n"
	.string "trainer! Lumine Island is just up\l"
	.string "ahead.\p"
	.string "Remember to stay on your bike! Oh, and\n"
	.string "please watch where you're going.\p"
	.string "Trust me, the last thing you want is to\n"
	.string "take a dip in the Sharpedo-infested\l"
	.string "waters below.\p"
	.string "Haha, I'm just kidding! No but seriously,\n"
	.string "use your eyes.\p"
	.string "I already had to fish one knucklehead\n"
	.string "out of the waters earlier today...$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_0:
	.string "{COLOR RED}(Huh? It looks like Squirtle is trying to\n"
	.string "give me something.)\p"
	.string "{COLOR RED}(Should I take it?)$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_1:
	.string "{COLOR RED}(I don't have enough space to carry it.)$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_2:
	.string "{COLOR DARK_GRAY}Squirtle!$"
