ISLANDGAME_AETHERIA_MapScripts::
# 20 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	gettime
# 23 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 23 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 28 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 31 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_unset FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 35 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_5
	return

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_5
	goto ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_AETHERIA_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 32 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_TEMP_4
	return


ISLANDGAME_AETHERIA_WelcomeSign::
# 172 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WelcomeSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FanClubSign::
# 179 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FanClubSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CondoSign::
# 185 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CondoSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_CardShop::
# 191 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_CardShop_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_EmptyTrash::
# 199 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_EmptyTrash_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_VendingMachine::
	return


ISLANDGAME_AETHERIA_TheRecruiter::
	return


ISLANDGAME_AETHERIA_IceCreamLady::
# 233 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 234 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 235 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmoneybox 18, 1
# 236 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_0, MSGBOX_YESNO
# 239 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_IceCreamLady_2
ISLANDGAME_AETHERIA_IceCreamLady_1:
# 260 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 261 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 262 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_IceCreamLady_2:
# 240 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	checkmoney 500
# 241 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_IceCreamLady_4
# 255 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_2
	goto ISLANDGAME_AETHERIA_IceCreamLady_1

ISLANDGAME_AETHERIA_IceCreamLady_4:
# 242 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	removemoney 500
# 243 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	updatemoneybox
# 244 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_SHOP
# 245 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 246 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playse SE_VEND
# 247 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitse
# 248 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemoneybox
# 249 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_IceCreamLady_Text_1
# 252 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_CASTELIACONE
	goto ISLANDGAME_AETHERIA_IceCreamLady_1


ISLANDGAME_AETHERIA_Trainer1::
	return


ISLANDGAME_AETHERIA_NPC1::
# 292 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 293 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 294 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_3, ISLANDGAME_AETHERIA_NPC1_2
# 300 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_1
ISLANDGAME_AETHERIA_NPC1_1:
# 306 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 307 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC1_2:
# 295 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC1_Text_0
	goto ISLANDGAME_AETHERIA_NPC1_1


ISLANDGAME_AETHERIA_NPC2::
# 312 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 313 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 314 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC2_Text_0
# 317 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 318 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC3::
# 323 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 324 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC3_Text_0
# 328 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 329 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC4::
# 334 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 335 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_AETHERIA_NPC4_2
# 341 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 342 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_1
ISLANDGAME_AETHERIA_NPC4_1:
# 346 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 347 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_NPC4_2:
# 336 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC4_Text_0
	goto ISLANDGAME_AETHERIA_NPC4_1


ISLANDGAME_AETHERIA_NPC5::
# 352 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 353 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC5_Text_0
# 356 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 357 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC6::
# 362 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 363 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC6_Text_0
# 366 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 367 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC7::
# 372 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 373 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 374 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC7_Text_0
# 382 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 383 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC8::
# 388 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 389 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 390 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC8_Text_0
# 397 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 398 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC9::
# 403 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 404 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC9_Text_0
# 407 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 408 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC10::
# 413 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 414 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC10_Text_0
# 418 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 419 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC11::
# 424 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 425 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC11_Text_0
# 428 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 429 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC12::
# 434 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 435 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC12_Text_0
# 442 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 443 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC13::
# 448 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 449 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC13_Text_0
# 453 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 454 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC14::
# 459 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 460 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC14_Text_0
# 463 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 464 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC15::
# 469 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 470 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 471 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC15_Text_0
# 474 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 475 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC16::
# 480 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 481 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC16_Text_0
# 484 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 485 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC17::
# 490 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 491 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC17_Text_0
# 494 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 495 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC18::
# 500 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 501 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC18_Text_0
# 504 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 505 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC19::
# 510 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 511 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC19_Text_0
# 514 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 515 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC20::
# 520 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 521 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC20_Text_0
# 524 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 525 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC21::
# 530 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 531 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC21_Text_0
# 534 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 535 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC22::
# 540 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 541 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 542 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC22_Text_0
	return


ISLANDGAME_AETHERIA_NPC23::
# 549 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 550 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 551 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC23_Text_0
# 555 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 556 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC24::
# 561 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 562 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 563 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC24_Text_0
# 566 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 567 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC25::
# 572 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 573 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 574 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC25_Text_0
# 577 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 578 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC26::
# 583 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 584 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC26_Text_0
# 587 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 588 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC27::
# 593 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 594 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC27_Text_0
# 597 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 598 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_NPC28::
# 603 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 604 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 605 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_0
# 610 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	showmonpic SPECIES_ZAPDOS, 10, 3
# 611 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_1
# 612 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	hidemonpic
# 613 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 614 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC28_Text_2
# 615 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 616 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	releaseall
	return


ISLANDGAME_AETHERIA_NPC29::
# 621 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 622 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_NPC29_Text_0
# 625 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 626 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Camellia::
# 632 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 633 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Camellia_Text_0
# 636 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 637 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_StrayPurrloin::
# 641 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 642 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 643 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_NORMAL
# 644 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 645 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Diancie::
# 649 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 650 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 651 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 652 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Diancie_Text_0
# 655 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 656 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Birb::
# 660 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 661 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 662 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Birb_Text_0
# 665 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 666 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 667 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer1::
# 680 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 681 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 682 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer1_Text_0
# 685 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 686 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer2::
# 690 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 691 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 692 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer2_Text_0
# 695 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 696 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer3::
# 700 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 701 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 702 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer3_Text_0
# 705 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 706 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Observer4::
# 710 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 711 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 712 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Observer4_Text_0
# 715 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 716 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Battler1::
# 720 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 721 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Battler1_Text_0
# 724 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 725 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_Battler2::
# 729 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 730 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Battler2_Text_0
# 733 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 734 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_FraxureBattle::
# 738 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 739 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_FRAXURE, CRY_MODE_NORMAL
# 740 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 741 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_KirliaBattle::
# 745 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 746 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 747 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmoncry
# 748 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_WallyDad::
# 761 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 762 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 763 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_WallyDad_2
# 769 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_1
ISLANDGAME_AETHERIA_WallyDad_1:
# 774 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 775 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_WallyDad_2:
# 764 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_WallyDad_Text_0
	goto ISLANDGAME_AETHERIA_WallyDad_1


ISLANDGAME_AETHERIA_Scott::
# 779 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 780 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Scott_2
# 787 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_1
ISLANDGAME_AETHERIA_Scott_1:
# 791 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 792 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Scott_2:
# 781 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 782 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Scott_Text_0
	goto ISLANDGAME_AETHERIA_Scott_1


ISLANDGAME_AETHERIA_May::
# 796 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 797 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 798 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_May_2
# 804 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_1
ISLANDGAME_AETHERIA_May_1:
# 808 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 809 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_May_2:
# 799 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_May_Text_0
	goto ISLANDGAME_AETHERIA_May_1


ISLANDGAME_AETHERIA_Brendan::
# 813 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 814 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 815 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Brendan_2
# 821 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_1
ISLANDGAME_AETHERIA_Brendan_1:
# 825 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 826 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Brendan_2:
# 816 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Brendan_Text_0
	goto ISLANDGAME_AETHERIA_Brendan_1


ISLANDGAME_AETHERIA_Wally::
# 832 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	lock
# 833 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	faceplayer
# 834 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto_if_set FLAG_DAILY_AETHERIA_CAMEO_BATTLE, ISLANDGAME_AETHERIA_Wally_2
ISLANDGAME_AETHERIA_Wally_1:
# 840 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_1, MSGBOX_YESNO
# 844 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_Wally_5
# 920 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 923 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
ISLANDGAME_AETHERIA_Wally_4:
# 926 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
Aetheria_CameoBattle_End:
# 927 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 928 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_Wally_2:
# 835 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_0
# 838 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_1

ISLANDGAME_AETHERIA_Wally_5:
# 845 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SavePlayerParty
# 846 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 847 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special ChooseHalfPartyForBattle
# 848 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
# 849 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_Wally_8
# 857 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 858 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 63
# 859 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 57
# 860 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 861 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 66, 58
# 862 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 863 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 864 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 865 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 866 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 867 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 868 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 869 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_3
# 872 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_4
# 882 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	multi_2_vs_2 TRAINER_AETHERIA_BRENDAN, ISLANDGAME_AETHERIA_Wally_Text_5, TRAINER_AETHERIA_MAY, ISLANDGAME_AETHERIA_Wally_Text_6, PARTNER_AETHERIA_WALLY
# 883 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	switch VAR_RESULT
# 884 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_Wally_12
# 910 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 911 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special SetCB2WhiteOut
# 912 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitstate
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_8:
# 850 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	special LoadPlayerParty
# 851 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_2
# 854 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4

ISLANDGAME_AETHERIA_Wally_12:
# 885 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 886 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8000, 66
# 887 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setvar VAR_0x8001, 58
# 888 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	callnative TeleportCamera
# 889 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 890 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 891 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 892 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 893 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_7
# 896 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	closemessage
# 897 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	delay 30
# 898 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 899 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 900 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 901 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	waitmovement 0
# 902 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_Wally_Text_8
# 906 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 907 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	setflag FLAG_DAILY_AETHERIA_CAMEO_BATTLE
# 908 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	goto Aetheria_CameoBattle_End
	goto ISLANDGAME_AETHERIA_Wally_4


ISLANDGAME_AETHERIA_WelcomeSign_Text_0:
# 173 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA\n"
	.string "Where stars are born!$"

ISLANDGAME_AETHERIA_FanClubSign_Text_0:
# 180 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "STARLIGHT FAN CLUB\n"
	.string "We stan the Queens of Marya!$"

ISLANDGAME_AETHERIA_CondoSign_Text_0:
# 186 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "AETHERIA CONDOMINIUMS$"

ISLANDGAME_AETHERIA_CardShop_Text_0:
# 192 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "The Top Deck - Gaming Café\n"
	.string "Come play in our PTCG tournaments!$"

ISLANDGAME_AETHERIA_EmptyTrash_Text_0:
# 200 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(There's nothing but garbage in here.)$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_0:
# 237 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Helloooooo! Would you like some frosty\n"
	.string "Nice Cream? It's only ¥500 for a cone!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_1:
# 250 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Enjoy!$"

ISLANDGAME_AETHERIA_IceCreamLady_Text_2:
# 256 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Oh... you don't have enough money.$"

ISLANDGAME_AETHERIA_NPC1_Text_0:
# 296 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uurrrp...?$"

ISLANDGAME_AETHERIA_NPC1_Text_1:
# 301 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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
# 315 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Aetheria is always bustling with\n"
	.string "activity. Whether it's in the morning, at\l"
	.string "noon, or at night, there's always\l"
	.string "something to do!$"

ISLANDGAME_AETHERIA_NPC3_Text_0:
# 325 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Come on... {PAUSE 30}come on...{PAUSE 30}\p"
	.string "Drats... I was hoping for chicken, but I\n"
	.string "guess this will have to do...$"

ISLANDGAME_AETHERIA_NPC4_Text_0:
# 337 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I ain't got all day, kid! Do you want a\n"
	.string "crummy photo or not!?$"

ISLANDGAME_AETHERIA_NPC4_Text_1:
# 343 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Buzz off, kid. I'm off the clock. If you\n"
	.string "want a photo, come back tomorrow.$"

ISLANDGAME_AETHERIA_NPC5_Text_0:
# 354 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Waaaaaah! He's too scawwy!$"

ISLANDGAME_AETHERIA_NPC6_Text_0:
# 364 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It's fine, dearie! He won't bite! He's not\n"
	.string "a real Larvitar!$"

ISLANDGAME_AETHERIA_NPC7_Text_0:
# 375 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
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

ISLANDGAME_AETHERIA_NPC8_Text_0:
# 391 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Since you foreigners clearly don't know\n"
	.string "how to read, I'll spell it out for you:\p"
	.string "LITTERING IS A F-E-L-O-N-Y IN MARYA!\n"
	.string "DO YOU UNDERSTAND THAT!?\p"
	.string "Ever since we opened the city to\n"
	.string "tourists, it's been absolutely riddled\l"
	.string "with garbage everywhere!\p"
	.string "And I've got the sneaking suspicion it's\n"
	.string "those dang Unovans dirtying our\l"
	.string "beautiful beaches...$"

ISLANDGAME_AETHERIA_NPC9_Text_0:
# 405 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ah...! Such a rambunctious squabble of\n"
	.string "Wingulls...$"

ISLANDGAME_AETHERIA_NPC10_Text_0:
# 415 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Noooo! You can't just keep spamming the\n"
	.string "same move over and over again!\p"
	.string "You're supposed to be making\n"
	.string "calculated decisions based on what\l"
	.string "Pokémon I could potentially switch into\l"
	.string "and how I might punish you if I\l"
	.string "correctly predict your prediction!$"

ISLANDGAME_AETHERIA_NPC11_Text_0:
# 426 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "haha xtreme speed go weeeeee$"

ISLANDGAME_AETHERIA_NPC12_Text_0:
# 436 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ever imagined what it would be like to\n"
	.string "send out one of the Isle Guardians out\l"
	.string "into battle? Or how about even the\l"
	.string "great Guardian of the Sea?\p"
	.string "Well now you can, with our newest\n"
	.string "Pokémon TCG special expansion, Maryan\l"
	.string "Masters!\p"
	.string "This special mega set contains ALL of\n"
	.string "the Pokémon that can be found here in\l"
	.string "the isles, including regional variants,\l"
	.string "the legendary Isle Guardians, and you\l"
	.string "guessed it... our lord and savior, Lugia!\p"
	.string "What are you waiting for? Go inside and\n"
	.string "buy some product before we run out!\p"
	.string "Due to high demand, we are limiting 1\n"
	.string "booster pack per customer per day. All\l"
	.string "sales are final.$"

ISLANDGAME_AETHERIA_NPC13_Text_0:
# 450 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Cammie! Cammie! Are the rumors true?\n"
	.string "Are you dating a movie star from Unova?\p"
	.string "C'mon, spill the tea for us! What's his\n"
	.string "name? You can't hide it from us any\l"
	.string "longer! We have the photos!$"

ISLANDGAME_AETHERIA_NPC14_Text_0:
# 461 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "hi camie$"

ISLANDGAME_AETHERIA_NPC15_Text_0:
# 472 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "She can't be in a relationship... right? I\n"
	.string "mean, Camellia would never betray her\l"
	.string "fans like that... right? I've been\l"
	.string "supporting her ever since her first\l"
	.string "performance...$"

ISLANDGAME_AETHERIA_NPC16_Text_0:
# 482 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is so pretty...$"

ISLANDGAME_AETHERIA_NPC17_Text_0:
# 492 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I hope those rumors aren't true. It\n"
	.string "would ruin my one true pairing.$"

ISLANDGAME_AETHERIA_NPC18_Text_0:
# 502 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Camellia is my favorite of the\n"
	.string "STARLIGHT members. Her singing voice is\l"
	.string "phenomenal!$"

ISLANDGAME_AETHERIA_NPC19_Text_0:
# 512 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR RED}(Looks like he's sound asleep.)$"

ISLANDGAME_AETHERIA_NPC20_Text_0:
# 522 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "How do I look?$"

ISLANDGAME_AETHERIA_NPC21_Text_0:
# 532 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "ooooo kawaii desu yo$"

ISLANDGAME_AETHERIA_NPC22_Text_0:
# 543 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I missed out on the limited edition\n"
	.string "STARLIGHT idol collection, so I'm\l"
	.string "pretending the figurines in the window\l"
	.string "are mine.$"

ISLANDGAME_AETHERIA_NPC23_Text_0:
# 552 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "THIS IS MY BICYCLE! THERE ARE MANY\n"
	.string "LIKE IT, BUT THIS ONE IS MINE! WITHOUT\l"
	.string "ME, MY BICYCLE IS USELESS! WITHOUT MY\l"
	.string "BICYCLE, I AM USELESS!\p"
	.string "HUH? GET OUT OF MY WAY! AS A CYCLIST,\n"
	.string "THE ROAD IS MY LUGIA-GIVEN RIGHT! NO\l"
	.string "ONE ELSE MATTERS!$"

ISLANDGAME_AETHERIA_NPC24_Text_0:
# 564 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "If you see anything suspicious, like a\n"
	.string "big bald guy riding a motorcycle, please\l"
	.string "report it to us immediately! Do NOT\l"
	.string "engage him, word has it that he used to\l"
	.string "be a five-time Festival Champion...$"

ISLANDGAME_AETHERIA_NPC25_Text_0:
# 575 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Lumine is too hot... I wanna go back to\n"
	.string "Oranna.$"

ISLANDGAME_AETHERIA_NPC26_Text_0:
# 585 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I can't wait for the next rotation, man.\n"
	.string "Legit got sacked by this one loser\l"
	.string "abusing Budew to lock me out of all my\l"
	.string "item cards, then using Whimsicott to\l"
	.string "OHKO my Charizard! Like okay man, that\l"
	.string "seems really balanced.$"

ISLANDGAME_AETHERIA_NPC27_Text_0:
# 595 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Uh-huh... Yeah... Mhm... Oh yeah... I hear\n"
	.string "you...$"

ISLANDGAME_AETHERIA_NPC28_Text_0:
# 606 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Not many trainers have the opportunity\n"
	.string "of seeing Zapdos, the mighty guardian\l"
	.string "of Lumine...\p"
	.string "I was fortunate enough to catch a\n"
	.string "glimpse of it in the days of my youth\l"
	.string "however...\p"
	.string "$"

ISLANDGAME_AETHERIA_NPC28_Text_1:
# 611 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Here is a sketch I drew of it from\n"
	.string "memory.$"

ISLANDGAME_AETHERIA_NPC28_Text_2:
# 614 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "It is quite impressive, no?$"

ISLANDGAME_AETHERIA_NPC29_Text_0:
# 623 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "$"

ISLANDGAME_AETHERIA_Camellia_Text_0:
# 634 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "-sigh- For the last time, that was my\n"
	.string "brother...$"

ISLANDGAME_AETHERIA_Diancie_Text_0:
# 653 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Diiian...{COLOR BLUE}(These papa-rotsy guys are\n"
	.string "relentless. Being an idol is tough work.)$"

ISLANDGAME_AETHERIA_Birb_Text_0:
# 663 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "MIEN$"

ISLANDGAME_AETHERIA_Observer1_Text_0:
# 683 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those kids look pretty tough...$"

ISLANDGAME_AETHERIA_Observer2_Text_0:
# 693 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Mommy lets me watch trainers battle\n"
	.string "here while she does shopping with my\l"
	.string "sister!$"

ISLANDGAME_AETHERIA_Observer3_Text_0:
# 703 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I once believed that Pokémon battles\n"
	.string "were barbaric, but I have come to\l"
	.string "understand that they are merely a form\l"
	.string "of bonding between Pokémon and their\l"
	.string "trainers.$"

ISLANDGAME_AETHERIA_Observer4_Text_0:
# 713 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Joey, this is why I told you to study up\n"
	.string "before you get back into battling...$"

ISLANDGAME_AETHERIA_Battler1_Text_0:
# 722 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Nyeh!? My attack... it had no effect!?$"

ISLANDGAME_AETHERIA_Battler2_Text_0:
# 731 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You dummy! Kirlia is part fairy-type!\n"
	.string "How out of the loop are you!?$"

ISLANDGAME_AETHERIA_WallyDad_Text_0:
# 765 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Thanks for battling alongside Wally.\p"
	.string "I wish the best of luck on the rest of\n"
	.string "your journey!$"

ISLANDGAME_AETHERIA_WallyDad_Text_1:
# 770 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ever since Wally's recovered from his\n"
	.string "illness, he's been really itching to go\l"
	.string "out and explore the world of Pokémon\l"
	.string "beyond the Hoenn region.\p"
	.string "So when the opportunity arose for us to\n"
	.string "travel all the way here, you bet we took\l"
	.string "it!$"

ISLANDGAME_AETHERIA_Scott_Text_0:
# 783 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Those battles were hot, hot, hot!\p"
	.string "Howsabout a trainer like you come with\n"
	.string "me back to the Hoenn region and\l"
	.string "compete in the Battle Frontier?\p"
	.string "$"

ISLANDGAME_AETHERIA_Scott_Text_1:
# 788 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Ohoho, it's been a hot minute since I've\n"
	.string "seen these champs battle!$"

ISLANDGAME_AETHERIA_May_Text_0:
# 800 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "You're one tough lava cookie, randy!\n"
	.string "Don't get too complacent though... I'll\l"
	.string "be back for a rematch soon!$"

ISLANDGAME_AETHERIA_May_Text_1:
# 805 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "After spending the entire day walking\n"
	.string "around the city, I'm glad to finally take\l"
	.string "a break and battle!$"

ISLANDGAME_AETHERIA_Brendan_Text_0:
# 817 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Heh... I guess I'm a little out of\n"
	.string "practice...$"

ISLANDGAME_AETHERIA_Brendan_Text_1:
# 822 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I was looking most forward to visiting\n"
	.string "the contest hall here, but I was\l"
	.string "disappointed to find out that it's been\l"
	.string "repurposed into a performance hall for\l"
	.string "Pokémon Idols instead.$"

ISLANDGAME_AETHERIA_Wally_Text_0:
# 836 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "We're also going to be at the Silverwing\n"
	.string "Festival, so hope to catch you there!$"

ISLANDGAME_AETHERIA_Wally_Text_1:
# 841 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hey there! We're looking for a trainer\n"
	.string "to join us in a multi battle! Would you\l"
	.string "like to be my teammate?$"

ISLANDGAME_AETHERIA_Wally_Text_2:
# 852 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Darn... I was hoping to get a quick\n"
	.string "pick-up battle in.$"

ISLANDGAME_AETHERIA_Wally_Text_3:
# 870 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Alright! Ready when you two are!$"

ISLANDGAME_AETHERIA_Wally_Text_4:
# 873 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "{COLOR GREEN}May: {COLOR DARK_GRAY}Just a fair warning, randy, we'll be\n"
	.string "coming at you with full force!\p"
	.string "{COLOR GREEN}Brendan: {COLOR DARK_GRAY}Boisterous as ever...$"

ISLANDGAME_AETHERIA_Wally_Text_5:
# 882 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Well, this shirt is ruined...$"

ISLANDGAME_AETHERIA_Wally_Text_6:
# 882 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Auuuugh! No way! We lost!?$"

ISLANDGAME_AETHERIA_Wally_Text_7:
# 894 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "Hehe... looks like I win this time!$"

ISLANDGAME_AETHERIA_Wally_Text_8:
# 903 "data/maps/ISLANDGAME_AETHERIA/scripts.pory"
	.string "I couldn't have done it without you,\n"
	.string "{PLAYER}! You and your Pokémon were\l"
	.string "amazing!\p"
	.string "Here, take one of these, as thanks for\n"
	.string "your part in our victory.$"
