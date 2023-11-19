ISLANDGAME_TIDALCOVE_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 12 + 6
	goto_if_gt ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_2
	return


ISLANDGAME_TIDALCOVE_Interact_EntranceSign::
	msgbox ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
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
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard::
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel::
	faceplayer
	playmoncry SPECIES_FLOATZEL, CRY_MODE_NORMAL
	waitmoncry
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachParent::
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachParent_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer::
	lock
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
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachGazer::
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad::
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance::
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop::
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle::
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top::
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0:
	.string "Welcome to Tidalcove!\p"
	.string "Check out the beach while you're here!$"

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
	.string "I'm very sorry, but we cannot accept\n"
	.string "any more challengers!\p"
	.string "We are closed for the day.$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0:
	.string "No! We HAVE to see Prim fight!\n"
	.string "She's totally gonna win!$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0:
	.string "I demand that you let us in right now.\p"
	.string "We're going to miss the fight at this\n"
	.string "rate!$"

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
	.string "for rare Pokemon...\p"
	.string "I bet if I could show him some cool ones\n"
	.string "he'd give me some kind of reward!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0:
	.string "I've lived in Tidalcove for a long time...\p"
	.string "Only two things are consistent:\p"
	.string "The popularity of the beach, and the\n"
	.string "popularity of Ruka!$"
