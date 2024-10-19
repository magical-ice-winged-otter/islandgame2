ISLANDGAME_CHERIPORT_MapScripts::
# 6 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	gettime
# 23 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 23 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 27 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 17 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 24 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor::
# 33 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	showmoneybox 0, 0
# 36 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_0, MSGBOX_YESNO
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_2
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_1:
# 43 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	checkmoney 600
# 45 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_5
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_4:
# 50 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 52 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_8
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_7:
# 57 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	removemoney 600
# 58 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	updatemoneybox
# 59 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_4
# 60 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	hidemoneybox
# 61 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_SODA_POP
# 63 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
NightBeachSodaVendor_End:
# 64 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	hidemoneybox
# 65 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_2:
# 39 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_1
# 40 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_1

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_5:
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_2
# 47 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_4

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_8:
# 53 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_3
# 54 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_7


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning::
# 69 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1:
# 70 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 71 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NeedPokemon_Text
# 72 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmessage
# 73 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
# 74 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack
# 75 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
	return


# 84 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
WalkBack:
# 85 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_left
# 86 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_LeaveIsles::
# 90 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 91 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_StayHere
# 92 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmessage
# 93 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
# 94 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack2
# 95 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
	return


# 103 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
WalkBack2:
# 104 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_right
# 105 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_MrBriney::
# 119 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 120 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox MrBrineyTalk
# 121 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Girl3::
# 125 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 126 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 127 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NPCGirl_Talk
# 128 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Boy4::
# 136 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 137 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 138 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NPCBoy_Talk
# 139 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Peeko::
# 153 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 154 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 155 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 156 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox PeekoTalk
# 157 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC1::
# 165 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 166 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK
# 167 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC2::
# 175 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 176 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK
# 177 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC3::
# 185 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 186 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK
# 187 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC4::
# 195 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 196 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK
# 197 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC6::
# 206 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 207 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 208 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK
# 209 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC7::
# 220 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 221 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK
# 222 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC8::
# 231 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 232 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 233 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK
# 234 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC9::
# 245 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 246 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK
# 247 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter::
# 258 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 259 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 260 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2
# 268 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1:
# 272 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 273 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 274 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
# 275 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2:
# 261 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
# 265 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter2::
# 279 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 280 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_PIN
# 281 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 282 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
# 283 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_Delay32
# 284 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
# 285 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 286 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
# 290 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 291 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 292 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
# 293 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 294 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN1::
# 306 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 307 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC
# 308 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN2::
# 319 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 320 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC
# 321 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN3::
# 331 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 332 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC
# 333 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN4::
# 344 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 345 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC
# 346 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_0:
# 36 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Premium Cheri-Cola made with REAL\n"
	.string "sugar, only ¥600 a pop!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_1:
# 39 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Huh? You're missin' out, bud!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_2:
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi, this is PREMIUM soda. If you can't\n"
	.string "afford it, then beat it!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_3:
# 53 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi, you need to make some space for this\n"
	.string "PREMIUM soda.$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_4:
# 59 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Here ya go, friend!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0:
# 262 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1:
# 269 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

NeedPokemon_Text::
# 80 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave the city.)$"

ISLANDGAME_CHERIPORT_OUTSIDE_StayHere::
# 99 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"

NPCGirl_Talk::
# 131 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}The islands are known for their tropical\n"
	.string "weather, though at times there have\l"
	.string "been bad storms that have even scared\l"
	.string "POKéMON.$"

NPCBoy_Talk::
# 142 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}While I was exploring the Southern\n"
	.string "Oranna Path at night, I was attacked by\l"
	.string "a Pokémon on the mountains.\p"
	.string "{COLOR DARK_GRAY}I've never seen anything like it...{PAUSE 60} and\n"
	.string "I'm too scared to see it again.$"

MrBrineyTalk::
# 148 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

PeekoTalk::
# 160 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Wrooooar! {COLOR BLUE}(I'm Peeko. Ahoy!)$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK::
# 170 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK::
# 180 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK::
# 190 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK::
# 200 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK::
# 212 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Hiya! This is Cheriport. We get a lot of\n"
	.string "visitors from other regions here.\p"
	.string "{COLOR DARK_GRAY}I actually moved here from the Johto\n"
	.string "region not too long ago.$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK::
# 225 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp! I need a Horsea!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK::
# 237 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Cheriport is home to the Cheri Berry!\p"
	.string "{COLOR DARK_GRAY}They may not taste good to us, but\n"
	.string "Pokémon sure love them!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK::
# 250 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC::
# 311 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}WELCOME TO CHERIPORT\n"
	.string "{COLOR DARK_GRAY}Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC::
# 324 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}PROFESSOR PALM'S LABORATORY$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC::
# 336 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}SEASIDE SERVICES\n"
	.string "{COLOR DARK_GRAY}Have a drink, it's on us!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC::
# 349 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}! WARNING !\n"
	.string "{COLOR DARK_GRAY}NO LIFEGUARD; SWIM AT YOUR OWN RISK!$"
