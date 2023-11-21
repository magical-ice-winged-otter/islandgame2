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


ISLANDGAME_TIDALCOVE_Interact_RarePkmnSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_RarePkmnSign_Text_0, MSGBOX_SIGN
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
	waitmoncry
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachParent::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachParent_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


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


ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0:
	.string "Welcome to Tidalcove!\p"
	.string "Check out the beach while you're here!$"

ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0:
	.string "LOSER LANDING$"

ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0:
	.string "BIKE PATH - TO LUMINE ISLAND$"

ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0:
	.string "TIDALCOVE BIKE SHOP$"

ISLANDGAME_TIDALCOVE_Interact_RarePkmnSign_Text_0:
	.string "THE POKEMON COLLECTOR$"

ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0:
	.string "TIDALCOVE GYM\p"
	.string "Leader: Ruka\n"
	.string "Specialty: Hail$"

ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0:
	.string "I'm sorry, but we cannot allow anyone\n"
	.string "else inside for the day.$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0:
	.string "Let us in, old geezer! As the owners of\n"
	.string "Prim's Fan Club, we DEMAND entry!$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0:
	.string "Yeah! We gotta be cheering her on the\n"
	.string "front lines!$"

ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0:
	.string "It's a bike - brand new, polished to a\n"
	.string "shine.$"

ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0:
	.string "Yayyy, sand!$"

ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0:
	.string "We don't really have a proper lifeguard\n"
	.string "tower, so I watch from up here instead.\p"
	.string "With the amount of tourists we get,\n"
	.string "ocean safety is our priority!\p"
	.string "If someone is in trouble, me and my\n"
	.string "Floatzel swim out there to save them!$"

ISLANDGAME_TIDALCOVE_Interact_BeachParent_Text_0:
	.string "Beach days are the best.$"

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
	.string "I'm getting ready for the Festival\n"
	.string "Trialthalon!\p"
	.string "I can swim, I can run...\p"
	.string "If only I could afford a bike...$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0:
	.string "Tidalcove is the best.\p"
	.string "No bugs, no angry Pokemon...\p"
	.string "I don't think I'm traveling back through\n"
	.string "Central Oranna anytime soon.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0:
	.string "Man, cycling looks so fun!\p"
	.string "It's a shame the bikes are so\n"
	.string "expensive...$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0:
	.string "The guy who lives in this house is a nut\n"
	.string "for rare Pokemon from Oranna...\p"
	.string "I heard he also collects stones that\n"
	.string "can make your Pokemon evolve!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0:
	.string "I've lived in Tidalcove for a long time...\p"
	.string "Only two things are consistent:\p"
	.string "The popularity of the beach, and the\n"
	.string "popularity of Ruka!$"

ISLANDGAME_TIDALCOVE_THANKYOUFORPLAYINGTHEDEMO_Text_0:
	.string "Hello player! Thank you for playing the\n"
	.string "demo of Pokémon: Isles of Mariyama!\p"
	.string "We hope you enjoyed playing through.\n"
	.string "Stay tuned for future updates! :D$"
