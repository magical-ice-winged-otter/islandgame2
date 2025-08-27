ISLANDGAME_AETHERIA_MapScripts::
# 20 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	gettime
# 23 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 23 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 27 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_AETHERIA_WelcomeSign::
# 166 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WelcomeSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FanClubSign::
# 173 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FanClubSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CondoSign::
# 179 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CondoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CardShop::
# 185 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CardShop_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_EmptyTrash::
# 193 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EmptyTrash_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_VendingMachine::
	return


ISLANDGAME_AETHERIA_TheRecruiter::
	return


ISLANDGAME_AETHERIA_IceCreamLady::
# 227 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 228 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 229 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmoneybox 18, 1
# 230 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_0, MSGBOX_YESNO
# 233 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_IceCreamLady_2
ISLANDGAME_AETHERIA_IceCreamLady_1:
# 254 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 255 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 256 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_IceCreamLady_2:
# 234 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkmoney 500
# 235 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_IceCreamLady_4
# 249 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_2
	goto ISLANDGAME_AETHERIA_IceCreamLady_1

ISLANDGAME_AETHERIA_IceCreamLady_4:
# 236 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	removemoney 500
# 237 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	updatemoneybox
# 238 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_SHOP
# 239 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 240 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_VEND
# 241 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 242 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 243 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_1
# 246 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_CASTELIACONE
	goto ISLANDGAME_AETHERIA_IceCreamLady_1


ISLANDGAME_AETHERIA_Trainer1::
	return


ISLANDGAME_AETHERIA_NPC1::
# 282 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 283 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 284 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_0
# 289 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 290 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC2::
# 295 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 296 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 297 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC2_Text_0
# 300 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 301 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC3::
# 307 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 308 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC3_Text_0
# 312 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 313 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC4::
# 318 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 319 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_AETHERIA_NPC4_2
# 325 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 326 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_1
ISLANDGAME_AETHERIA_NPC4_1:
# 330 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 331 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC4_2:
# 320 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_0
	goto ISLANDGAME_AETHERIA_NPC4_1


ISLANDGAME_AETHERIA_NPC5::
# 336 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 337 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC5_Text_0
# 340 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 341 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC6::
# 346 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 347 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC6_Text_0
# 350 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 351 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC7::
# 356 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 357 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 358 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC7_Text_0
# 366 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 367 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_StrayPurrloin::
# 371 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 372 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 373 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
# 374 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 375 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WallyDad::
# 388 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 389 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 390 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_WallyDad_2
# 396 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_1
ISLANDGAME_AETHERIA_WallyDad_1:
# 401 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 402 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WallyDad_2:
# 391 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_0
	goto ISLANDGAME_AETHERIA_WallyDad_1


ISLANDGAME_AETHERIA_Scott::
# 406 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 407 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Scott_2
# 414 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_1
ISLANDGAME_AETHERIA_Scott_1:
# 418 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 419 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Scott_2:
# 408 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 409 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_0
	goto ISLANDGAME_AETHERIA_Scott_1


ISLANDGAME_AETHERIA_May::
# 423 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 424 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 425 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_May_2
# 431 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_1
ISLANDGAME_AETHERIA_May_1:
# 435 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 436 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_May_2:
# 426 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_0
	goto ISLANDGAME_AETHERIA_May_1


ISLANDGAME_AETHERIA_Brendan::
# 440 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 441 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 442 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Brendan_2
# 448 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_1
ISLANDGAME_AETHERIA_Brendan_1:
# 452 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 453 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Brendan_2:
# 443 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_0
	goto ISLANDGAME_AETHERIA_Brendan_1


ISLANDGAME_AETHERIA_Observer1::
# 457 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 458 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 459 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer1_Text_0
# 462 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 463 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer2::
# 467 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 468 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 469 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer2_Text_0
# 472 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 473 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Wally::
# 477 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 478 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 479 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Wally_2
ISLANDGAME_AETHERIA_Wally_1:
# 485 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_1, MSGBOX_YESNO
# 489 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Wally_5
# 565 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 568 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
ISLANDGAME_AETHERIA_Wally_4:
# 571 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
Aetheria_CameoBattle_End:
# 572 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 573 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Wally_2:
# 480 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_0
# 483 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_1

ISLANDGAME_AETHERIA_Wally_5:
# 490 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SavePlayerParty
# 491 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 492 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special ChooseHalfPartyForBattle
# 493 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
# 494 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_Wally_8
# 502 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 503 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 63
# 504 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 57
# 505 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 506 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 66, 58
# 507 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 508 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 509 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 510 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 511 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 512 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 513 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 514 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_3
# 517 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_4
# 527 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	multi_2_vs_2 TRAINER_AETHERIA_BRENDAN, ISLANDGAME_AETHERIA_Wally_Text_5, TRAINER_AETHERIA_MAY, ISLANDGAME_AETHERIA_Wally_Text_6, PARTNER_AETHERIA_WALLY
# 528 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_RESULT
# 529 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Wally_12
# 555 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 556 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SetCB2WhiteOut
# 557 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_8:
# 495 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special LoadPlayerParty
# 496 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 499 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_12:
# 530 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 531 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 66
# 532 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 58
# 533 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 534 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 535 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 536 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 537 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 538 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_7
# 541 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 542 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 543 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 544 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 545 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 546 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 547 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_8
# 551 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 552 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_DAILY_AETHERIA_CAMEO_BATTLE
# 553 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4


ISLANDGAME_AETHERIA_WelcomeSign_Text_0:
# 167 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA\n"
	.string "Where stars are born!$"

ISLANDGAME_AETHERIA_FanClubSign_Text_0:
# 174 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "STARLIGHT FAN CLUB\n"
	.string "We stan the Queens of Marya!$"

ISLANDGAME_AETHERIA_CondoSign_Text_0:
# 180 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA CONDOMINIUMS$"

ISLANDGAME_AETHERIA_CardShop_Text_0:
# 186 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "The Top Deck - Gaming Café\n"
	.string "Come play in our PTCG tournaments!$"

ISLANDGAME_AETHERIA_EmptyTrash_Text_0:
# 194 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(There's nothing but garbage in here.)$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_0:
# 231 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Helloooooo! Would you like some frosty\n"
	.string "Nice Cream? It's only ¥500 for a cone!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_1:
# 244 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Enjoy!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_2:
# 250 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Oh... you don't have enough money.$"

ISLANDGAME_AETHERIA_NPC1_Text_0:
# 285 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ugggg... I'm tired of waking up at the\n"
	.string "crack of dawn just to sail this darn\l"
	.string "detective out into the great blue sea\l"
	.string "for the entire day...\p"
	.string "All in search of some secret island\n"
	.string "where the “global elite” supposedly\l"
	.string "gather to discuss world domination...?\p"
	.string "I ain't even sure why we even\n"
	.string "entertainin' him. We found 'em washed\l"
	.string "ashore the beaches, and he's been\l"
	.string "nonstop yappin' bout this ever since.\p"
	.string "$"

ISLANDGAME_AETHERIA_NPC2_Text_0:
# 298 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Aetheria is always bustling with\n"
	.string "activity. Whether it's in the morning, at\l"
	.string "noon, or at night, there's always\l"
	.string "something to do!$"

ISLANDGAME_AETHERIA_NPC3_Text_0:
# 309 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Come on... {PAUSE 30}come on...{PAUSE 30}\p"
	.string "Drats... I was hoping for chicken, but I\n"
	.string "guess this will have to do...$"

ISLANDGAME_AETHERIA_NPC4_Text_0:
# 321 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I ain't got all day, kid! Do you want a\n"
	.string "crummy photo or not!?$"

ISLANDGAME_AETHERIA_NPC4_Text_1:
# 327 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Buzz off, kid. I'm off the clock. If you\n"
	.string "want a photo, come back tomorrow.$"

ISLANDGAME_AETHERIA_NPC5_Text_0:
# 338 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Waaaaaah! He's too scawwy!$"

ISLANDGAME_AETHERIA_NPC6_Text_0:
# 348 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It's fine, dearie! He won't bite! He's not\n"
	.string "a real Larvitar!$"

ISLANDGAME_AETHERIA_NPC7_Text_0:
# 359 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "A strange man gave me the choice of\n"
	.string "receiving a Big Nugget or Master Ball\l"
	.string "earlier this morning...\p"
	.string "I chose the Big Nugget, and he actually\n"
	.string "gave me it...\p"
	.string "...But when I tried selling it at the\n"
	.string "department store, they kicked me out\l"
	.string "for trying to sell them a fake nugget...\p"
	.string "Oooh... I was a fool for believing that it\n"
	.string "was real... All I could think about was\l"
	.string "getting a second chance at life...\p"
	.string "What a cruel, cruel world we are forced\n"
	.string "to be a part of...\p"
	.string "There is no god in this world... Not\n"
	.string "Lugia... Not Arceus... No one...$"

ISLANDGAME_AETHERIA_WallyDad_Text_0:
# 392 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Thanks for battling alongside Wally.\p"
	.string "I wish the best of luck on the rest of\n"
	.string "your journey!$"

ISLANDGAME_AETHERIA_WallyDad_Text_1:
# 397 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ever since Wally's recovered from his\n"
	.string "illness, he's been really itching to go\l"
	.string "out and explore the world of Pokémon\l"
	.string "beyond the Hoenn region.\p"
	.string "So when the opportunity arose for us to\n"
	.string "travel all the way here, you bet we took\l"
	.string "it!$"

ISLANDGAME_AETHERIA_Scott_Text_0:
# 410 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those battles were hot, hot, hot!\p"
	.string "Howsabout a trainer like you come with\n"
	.string "me back to the Hoenn region and\l"
	.string "compete in the Battle Frontier?\p"
	.string "$"

ISLANDGAME_AETHERIA_Scott_Text_1:
# 415 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ohoho, it's been a hot minute since I've\n"
	.string "seen these champs battle!$"

ISLANDGAME_AETHERIA_May_Text_0:
# 427 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You're one tough lava cookie, randy!\n"
	.string "Don't get too complacent though... I'll\l"
	.string "be back for a rematch soon!$"

ISLANDGAME_AETHERIA_May_Text_1:
# 432 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "After spending the entire day walking\n"
	.string "around the city, I'm glad to finally take\l"
	.string "a break and battle!$"

ISLANDGAME_AETHERIA_Brendan_Text_0:
# 444 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Heh... I guess I'm a little out of\n"
	.string "practice...$"

ISLANDGAME_AETHERIA_Brendan_Text_1:
# 449 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I was looking most forward to visiting\n"
	.string "the contest hall here, but I was\l"
	.string "disappointed to find out that it's been\l"
	.string "repurposed into a performance hall for\l"
	.string "Pokémon Idols instead.$"

ISLANDGAME_AETHERIA_Observer1_Text_0:
# 460 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those kids look pretty tough...$"

ISLANDGAME_AETHERIA_Observer2_Text_0:
# 470 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Mommy lets me watch trainers battle\n"
	.string "here while she does shopping with my\l"
	.string "sister!$"

ISLANDGAME_AETHERIA_Wally_Text_0:
# 481 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "We're also going to be at the Silverwing\n"
	.string "Festival, so hope to catch you there!$"

ISLANDGAME_AETHERIA_Wally_Text_1:
# 486 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hey there! We're looking for a trainer\n"
	.string "to join us in a multi battle! Would you\l"
	.string "like to be my teammate?$"

ISLANDGAME_AETHERIA_Wally_Text_2:
# 497 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Darn... I was hoping to get a quick\n"
	.string "pick-up battle in.$"

ISLANDGAME_AETHERIA_Wally_Text_3:
# 515 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Alright! Ready when you two are!$"

ISLANDGAME_AETHERIA_Wally_Text_4:
# 518 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}May: {COLOR DARK_GRAY}Just a fair warning, randy, we'll be\n"
	.string "coming at you with full force!\p"
	.string "{COLOR GREEN}Brendan: {COLOR DARK_GRAY}Boisterous as ever...$"

ISLANDGAME_AETHERIA_Wally_Text_5:
# 527 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Well, this shirt is ruined...$"

ISLANDGAME_AETHERIA_Wally_Text_6:
# 527 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Auuuugh! No way! We lost!?$"

ISLANDGAME_AETHERIA_Wally_Text_7:
# 539 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hehe... looks like I win this time!$"

ISLANDGAME_AETHERIA_Wally_Text_8:
# 548 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I couldn't have done it without you,\n"
	.string "{PLAYER}! You and your Pokémon were\l"
	.string "amazing!\p"
	.string "Here, take one of these, as thanks for\n"
	.string "your part in our victory.$"
