ISLANDGAME_CHERIPORT_MapScripts::
# 6 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_LEFT_SS_RAIN, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	gettime
# 22 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 22 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 26 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_LEFT_SS_RAIN
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor::
# 32 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	showmoneybox 0, 0
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_0, MSGBOX_YESNO
# 37 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_2
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_1:
# 42 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	checkmoney 600
# 44 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_5
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_4:
# 49 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	removemoney 600
# 50 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	updatemoneybox
# 51 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_3
# 52 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	hidemoneybox
# 53 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_SODA_POP
# 55 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
NightBeachSodaVendor_End:
# 56 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	hidemoneybox
# 57 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_2:
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_1
# 39 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_1

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_5:
# 45 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_2
# 46 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto NightBeachSodaVendor_End
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_4


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning::
# 61 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1:
# 62 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NeedPokemon_Text
# 64 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmessage
# 65 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
# 66 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack
# 67 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
	return


# 76 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
WalkBack:
# 77 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_left
# 78 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_LeaveIsles::
# 82 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 83 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_StayHere
# 84 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmessage
# 85 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
# 86 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack2
# 87 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
	return


# 95 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
WalkBack2:
# 96 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_right
# 97 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_MrBriney::
# 111 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 112 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox MrBrineyTalk
# 113 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Girl3::
# 117 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 118 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 119 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NPCGirl_Talk
# 120 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Boy4::
# 128 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 129 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 130 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NPCBoy_Talk
# 131 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Peeko::
# 145 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 146 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 147 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 148 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox PeekoTalk
# 149 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC1::
# 157 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 158 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK
# 159 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC2::
# 167 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 168 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK
# 169 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC3::
# 177 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 178 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK
# 179 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC4::
# 187 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 188 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK
# 189 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC6::
# 198 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 199 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 200 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK
# 201 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC7::
# 212 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 213 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK
# 214 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC8::
# 223 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 224 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 225 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK
# 226 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC9::
# 237 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 238 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK
# 239 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter::
# 250 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 251 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 252 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2
# 260 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1:
# 264 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 265 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 266 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
# 267 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2:
# 253 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
# 257 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter2::
# 271 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 272 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_PIN
# 273 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 274 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
# 275 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_Delay32
# 276 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
# 277 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 278 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
# 282 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 283 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 284 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
# 285 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 286 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN1::
# 298 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 299 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC
# 300 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN2::
# 311 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 312 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC
# 313 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN3::
# 323 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 324 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC
# 325 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN4::
# 336 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 337 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC
# 338 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_0:
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Premium Cheri-Cola made with REAL\n"
	.string "sugar, only ¥600 a pop!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_1:
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Huh? You're missin' out, bud!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_2:
# 45 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Oi, this is PREMIUM soda. If you can't\n"
	.string "afford it, then beat it!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NightBeachSodaVendor_Text_3:
# 51 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Here ya go, friend!$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0:
# 254 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1:
# 261 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

NeedPokemon_Text::
# 72 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave the city.)$"

ISLANDGAME_CHERIPORT_OUTSIDE_StayHere::
# 91 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"

NPCGirl_Talk::
# 123 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}The islands are known for their tropical\n"
	.string "weather, though at times there have\l"
	.string "been bad storms that have even scared\l"
	.string "POKéMON.$"

NPCBoy_Talk::
# 134 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}While I was exploring the Southern\n"
	.string "Oranna Path at night, I was attacked by\l"
	.string "a Pokémon on the mountains.\p"
	.string "{COLOR DARK_GRAY}I've never seen anything like it...{PAUSE 60} and\n"
	.string "I'm too scared to see it again.$"

MrBrineyTalk::
# 140 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

PeekoTalk::
# 152 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Wrooooar! {COLOR BLUE}(I'm Peeko. Ahoy!)$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK::
# 162 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK::
# 172 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK::
# 182 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK::
# 192 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC6_TALK::
# 204 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Hiya! This is Cheriport. We get a lot of\n"
	.string "visitors from other regions here.\p"
	.string "{COLOR DARK_GRAY}I actually moved here from the Johto\n"
	.string "region not too long ago.$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK::
# 217 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp! I need a Horsea!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK::
# 229 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Cheriport is home to the Cheri Berry!\p"
	.string "{COLOR DARK_GRAY}They may not taste good to us, but\n"
	.string "Pokémon sure love them!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK::
# 242 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC::
# 303 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}WELCOME TO CHERIPORT\n"
	.string "{COLOR DARK_GRAY}Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC::
# 316 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}PROFESSOR PALM'S LABORATORY$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC::
# 328 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}SEASIDE SERVICES\n"
	.string "{COLOR DARK_GRAY}Have a drink, it's on us!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC::
# 341 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}! WARNING !\n"
	.string "{COLOR DARK_GRAY}NO LIFEGUARD; SWIM AT YOUR OWN RISK!$"
