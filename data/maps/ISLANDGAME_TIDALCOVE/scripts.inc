ISLANDGAME_TIDALCOVE_MapScripts::
# 6 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	gettime
# 13 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 13 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 17 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_TIDALCOVE_Interact_EntranceSign::
# 23 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BehindGymSign::
# 27 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign::
# 31 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BikeShopSign::
# 35 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_GymSign::
# 39 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking::
# 43 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0
# 45 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 46 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_PrimFan1::
# 50 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0
# 52 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 53 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_PrimFan2::
# 57 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 58 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0
# 59 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 60 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_Bike::
# 64 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl::
# 68 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 69 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 70 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0, MSGBOX_NPC
# 71 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard::
# 75 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 77 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0, MSGBOX_NPC
# 82 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 83 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel::
# 87 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 88 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 89 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	playmoncry SPECIES_FLOATZEL, CRY_MODE_NORMAL
# 90 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel_Text_0, MSGBOX_NPC
# 91 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 92 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachDude::
# 96 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 97 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 98 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_0, MSGBOX_YESNO
# 102 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_BeachDude_2
# 108 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_2
ISLANDGAME_TIDALCOVE_Interact_BeachDude_1:
# 110 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 111 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 112 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_Interact_BeachDude_2:
# 103 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1
# 104 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 105 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmoncry
	goto ISLANDGAME_TIDALCOVE_Interact_BeachDude_1


ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer::
# 117 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 118 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 119 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto_if_set FLAG_DAILY_TIDALCOVE_YACHE_GIRL, ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_2
# 126 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_1, MSGBOX_NPC
# 128 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	checkitemspace ITEM_YACHE_BERRY
# 130 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_5
# 136 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_3, MSGBOX_NPC
ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_1:
# 139 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 140 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_2:
# 120 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_0
	goto ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_1

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_5:
# 131 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_2, MSGBOX_NPC
# 132 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	giveitem ITEM_YACHE_BERRY
# 133 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_DAILY_TIDALCOVE_YACHE_GIRL
	goto ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_1


ISLANDGAME_TIDALCOVE_Interact_BeachFisher::
# 144 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 145 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 146 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BeachGazer::
# 150 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 151 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 152 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0
# 153 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad::
# 157 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 158 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 159 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0, MSGBOX_NPC
# 165 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance::
# 169 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 170 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 171 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop::
# 178 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 179 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 180 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle::
# 189 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 190 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 191 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top::
# 197 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 198 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 199 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BikeDude::
# 209 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 210 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 211 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BikeDude_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_Squirtle::
# 222 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 223 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 224 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 226 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto_if_unset FLAG_TIDALCOVE_SQUIRTLE_GIFT, ISLANDGAME_TIDALCOVE_Interact_Squirtle_2
# 247 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_2
ISLANDGAME_TIDALCOVE_Interact_Squirtle_1:
# 251 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
SquirtleGiftEvent_End:
# 252 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmoncry
# 253 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_Interact_Squirtle_2:
# 227 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_0, MSGBOX_YESNO
# 233 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_Squirtle_6
ISLANDGAME_TIDALCOVE_Interact_Squirtle_5:
# 237 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	checkitemspace ITEM_WATER_GEM
# 238 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_Squirtle_9
ISLANDGAME_TIDALCOVE_Interact_Squirtle_8:
# 243 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	giveitem ITEM_WATER_GEM
# 244 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TIDALCOVE_SQUIRTLE_GIFT
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_1

ISLANDGAME_TIDALCOVE_Interact_Squirtle_6:
# 234 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto SquirtleGiftEvent_End
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_5

ISLANDGAME_TIDALCOVE_Interact_Squirtle_9:
# 239 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_1
# 240 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto SquirtleGiftEvent_End
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_8


ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0:
# 23 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "TIDALCOVE\n"
	.string "Crack open a cold one on our beach!\p"
	.string "(By cold one, we mean a non-alcoholic\n"
	.string "beverage, obviously.)$"

ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0:
# 27 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "LOSER LANDING\n"
	.string "git gud brah$"

ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0:
# 31 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "SEASIDE BIKE PATH\n"
	.string "Your most convenient way to Lumine!$"

ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0:
# 35 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "RANDEEZ HOT WHEELZ\n"
	.string "“ZOOM ZOOM MOTHER TRUCKERS”$"

ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0:
# 39 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "TIDALCOVE GYM\n"
	.string "LEADER: RUKA\p"
	.string "Home of Tidalcove's Precious Pearl!$"

ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0:
# 44 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I am sorry, but I cannot let anyone else\n"
	.string "inside the gym for the day.\p"
	.string "{COLOR RED}(Hmm. It seems like the gym has reached\n"
	.string "its limit of challengers for the day...)\p"
	.string "(I should see what else Oranna has to\n"
	.string "offer in the meantime.)\p"
	.string "(Perhaps there's something west I can\n"
	.string "check out?)$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0:
# 51 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Let us in, old geezer! As Prim's two\n"
	.string "biggest fans, we DEMAND entry!$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0:
# 58 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "We need to be cheering our queen on the\n"
	.string "front lines! Move aside, loser!$"

ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0:
# 64 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(It's a bike. It's shiny and brand-new.\n"
	.string "The price tag is absurd, though.)$"

ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0:
# 70 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I like sand! It's soft, smooth, and fun\n"
	.string "to play with!$"

ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0:
# 78 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "We don't have a lifeguard tower yet, so\n"
	.string "I watch from up here instead.\p"
	.string "With the amount of tourists we get,\n"
	.string "beach safety is our priority!\p"
	.string "If someone is in trouble, me and my\n"
	.string "Floatzel will swim out to save them!$"

ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel_Text_0:
# 90 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(Floatzel is wearing a lifeguard shirt.)$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_0:
# 99 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "If I lose it all, slip and fall, will you\n"
	.string "laugh at me?$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1:
# 103 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I will remember that.$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_2:
# 108 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "If I lose it all, lose it all, lose it all...$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_0:
# 121 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I usually pick my berries right after I\n"
	.string "wake up!\p"
	.string "If you want, I can give you another one\n"
	.string "tommorrow.$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_1:
# 126 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Yache Berries are a great way to cool\n"
	.string "off in Marya's sweltering heat.$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_2:
# 131 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Try one for yourself!$"

ISLANDGAME_TIDALCOVE_Interact_BeachMiddleWanderer_Text_3:
# 136 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I'd give you one if you had more room!$"

ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0:
# 146 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Hm... Your sense of fashion is severely\n"
	.string "lacking.$"

ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0:
# 152 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Did you know Galarians can't say\n"
	.string "“bottle of water”?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0:
# 160 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I'm training for the festival\n"
	.string "trialthalon!\p"
	.string "I got swimming down, just about got\n"
	.string "running down too, all that's left is...\p"
	.string "Cycling! But I wasn't able to snag a\n"
	.string "bike at the bike shop.\p"
	.string "I hope they get some in stock soon. I'm\n"
	.string "going to fall behind otherwise!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0:
# 172 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR LIGHT_BLUE}Ruka's Milotic {COLOR DARK_GRAY}is so pretty. I wish I one\n"
	.string "too, but I heard they're notoriously\l"
	.string "hard to find.\p"
	.string "It's rumored that they only reside at\n"
	.string "the bottom of the Maryan Sea.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0:
# 181 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Ruka is an ice-type specialist. Just\n"
	.string "like that one gym leader from Sinnoh!\p"
	.string "Ummm.. what was her name again?\p"
	.string "...\p"
	.string "Drats. You're too hip to fall for that.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0:
# 192 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Would be weird if I asked Ruka to sign\n"
	.string "my body pillow of her?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0:
# 200 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
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
# 212 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Welcome to the Seaside Bike Path,\n"
	.string "trainer! Lumine Island is just up ahead.\p"
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
# 229 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(Huh? It looks like Squirtle is trying to\n"
	.string "give me something.)\p"
	.string "{COLOR RED}(Should I take it?)$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_1:
# 239 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(I don't have enough space to carry it.)$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_2:
# 247 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Squirtle!$"
