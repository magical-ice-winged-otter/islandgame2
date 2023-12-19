ISLANDGAME_TIDALCOVE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	gettime
	compare VAR_0x8000, 12 + 6
	goto_if_gt ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_1
	goto ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_TEMP_2
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
	return

ISLANDGAME_TIDALCOVE_Interact_BeachDude_2:
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1
	playmoncry SPECIES_WAILORD, CRY_MODE_NORMAL
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
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachGazer::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
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


ISLANDGAME_TIDALCOVE_THANKYOUFORPLAYINGTHEDEMO::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_THANKYOUFORPLAYINGTHEDEMO_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_jujalos::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_jujalos_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0:
	.string "TIDALCOVE\n"
	.string "Crack open a cold one on our beach!$"

ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0:
	.string "LOSER LANDING\n"
	.string "u r noob$"

ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0:
	.string "SEASIDE BIKE PATH\n"
	.string "Your express way to Lumine!$"

ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0:
	.string "RANDIEZ HOT WHEELZ\n"
	.string "“ZOOM ZOOM MOTHER TRUCKERS”$"

ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0:
	.string "TIDALCOVE GYM\n"
	.string "LEADER: RUKA\p"
	.string "Home of Tidalcove's Precious Pearl!$"

ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0:
	.string "I am sorry, but I cannot let anyone else\n"
	.string "inside the gym for the day.$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0:
	.string "Let us in, old geezer! As Prim's two\n"
	.string "biggest fans, we DEMAND entry!$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0:
	.string "We need to be cheering our queen on the\n"
	.string "front lines! Move aside, loser!$"

ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0:
	.string "It's a bike - brand new, polished to a\n"
	.string "shine.$"

ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0:
	.string "Yayyy, sand!$"

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
	.string "Yache Berries are the best on a hot day.$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_2:
	.string "Try one!$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_3:
	.string "I'd give you one if you had more room!$"

ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0:
	.string "My pals went off to the Northern Oranna\n"
	.string "Lake to fish without me...$"

ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0:
	.string "Do you ever wonder what's out there,\n"
	.string "just over the horizon?$"

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
	.string "Ruka is the face of Tidalcove. Without\n"
	.string "her, we'd still be a fishing village!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0:
	.string "Man, cycling looks fun. It's a shame the\n"
	.string "store ran out of rentals for the week.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0:
	.string "Would be weird if I asked Ruka to sign\n"
	.string "my body pillow of her?\p"
	.string "Its value would skyrocket on the\n"
	.string "second-hand market!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0:
	.string "We get so many visitors here in\n"
	.string "Tidalcove.\p"
	.string "Whether they're here for Ruka, the gym\n"
	.string "challenge, or our beautiful beaches.\p"
	.string "I'm all for it. I'm glad to see so many\n"
	.string "people enthusiastic about our city!$"

ISLANDGAME_TIDALCOVE_THANKYOUFORPLAYINGTHEDEMO_Text_0:
	.string "Hello player! Thank you for playing the\n"
	.string "demo of Pokémon: Wings of Chaos!\p"
	.string "We hope you enjoyed it. Stay tuned for\n"
	.string "future updates! :D$"

ISLANDGAME_TIDALCOVE_jujalos_Text_0:
	.string "janx 4 plein$"
