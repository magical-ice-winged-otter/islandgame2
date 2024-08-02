ISLANDGAME_CHERIPORT_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	setflag FLAG_TEMP_2
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_TEMP_2, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_2
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_1:
	checkmoney 600
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_5
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_4:
	checkitemspace ITEM_SODA_POP
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_8
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_7:
	removemoney 600
	updatemoneybox
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_4
	hidemoneybox
	giveitem ITEM_SODA_POP
NightBeachSodaVendor_End:
	hidemoneybox
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_2:
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_1
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_1

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_5:
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_2
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_4

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_8:
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_3
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_7


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning::
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1:
	lock
	msgbox NeedPokemon_Text
	waitmessage
	release
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack
	waitmovement 0
	return


WalkBack:
	walk_left
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_LeaveIsles::
	lock
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_StayHere
	waitmessage
	release
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack2
	waitmovement 0
	return


WalkBack2:
	walk_right
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_MrBriney::
	lock
	msgbox MrBrineyTalk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Girl3::
	lock
	faceplayer
	msgbox NPCGirl_Talk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Boy4::
	lock
	faceplayer
	msgbox NPCBoy_Talk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Peeko::
	lock
	faceplayer
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox PeekoTalk
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC1::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC2::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC3::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC4::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC6::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC7::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC8::
	lock
	faceplayer
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC9::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1:
	closemessage
	setvar VAR_TEMP_2, 1
	setflag FLAG_RECEIVED_TOWN_MAP
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2:
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
	giveitem ITEM_TOWN_MAP
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter2::
	lock
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay32
	waitmovement 0
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
	giveitem ITEM_TOWN_MAP
	setvar VAR_TEMP_2, 1
	setflag FLAG_RECEIVED_TOWN_MAP
	closemessage
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN1::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN2::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN3::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN4::
	lock
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_0:
	.string "{COLOR DARK_GRAY}Premium Cheri-Cola made with REAL\n"
	.string "sugar, only ¥600 a pop!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_1:
	.string "Huh? You're missin' out, bud!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_2:
	.string "{COLOR DARK_GRAY}Oi, this is PREMIUM soda. If you can't\n"
	.string "afford it, then beat it!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_3:
	.string "{COLOR DARK_GRAY}Oi, you need to make some space for this\n"
	.string "PREMIUM soda.$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_4:
	.string "Here ya go, friend!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0:
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1:
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

NeedPokemon_Text::
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave the city.)$"

ISLANDGAME_CHERIPORT_OUTSIDE_StayHere::
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"

NPCGirl_Talk::
	.string "{COLOR DARK_GRAY}The islands are known for their tropical\n"
	.string "weather, though at times there have\l"
	.string "been bad storms that have even scared\l"
	.string "POKéMON.$"

NPCBoy_Talk::
	.string "{COLOR DARK_GRAY}While I was exploring the Southern\n"
	.string "Oranna Path at night, I was attacked\l"
	.string "by a Pokémon on the mountains.\p"
	.string "{COLOR DARK_GRAY}I've never seen anything like it...{PAUSE 60} and\n"
	.string "I'm too scared to see it again.$"

MrBrineyTalk::
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

PeekoTalk::
	.string "Wrooooar! {COLOR BLUE}(I'm Peeko. Ahoy!)$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK::
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK::
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK::
	.string "{COLOR DARK_GRAY}Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK::
	.string "{COLOR DARK_GRAY}Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK::
	.string "{COLOR DARK_GRAY}Hiya! This is Cheriport. We get a lot of\n"
	.string "visitors from other regions here.\p"
	.string "{COLOR DARK_GRAY}I actually moved here from the Johto\n"
	.string "region not too long ago.$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK::
	.string "{COLOR DARK_GRAY}Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp! I need a {COLOR LIGHT_BLUE}Horsea!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK::
	.string "{COLOR DARK_GRAY}Cheriport is home to the Cheri Berry!\p"
	.string "{COLOR DARK_GRAY}They may not taste good to us, but\n"
	.string "Pokémon sure love them!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK::
	.string "{COLOR DARK_GRAY}-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC::
	.string "{COLOR DARK_GRAY}WELCOME TO CHERIPORT\n"
	.string "{COLOR DARK_GRAY}Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}PROFESSOR PALM'S LABORATORY$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC::
	.string "{COLOR DARK_GRAY}SEASIDE SERVICES\n"
	.string "{COLOR DARK_GRAY}Have a drink, it's on us!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC::
	.string "{COLOR DARK_GRAY}! WARNING !\n"
	.string "{COLOR DARK_GRAY}NO LIFEGUARD; SWIM AT YOUR OWN RISK!$"
