ISLANDGAME_ROSEVALE_INN_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	setobjectxy 3, 26, 4
	setobjectxy 4, 23, 5
	return

ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	return


ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene::
	lock
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_0
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_1
	applymovement 4, Common_Movement_WalkInPlaceRight
	msgbox ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_2
	closemessage
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	setvar VAR_ROSEVALE_STATE, 3
	return


ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom::
	lock
	faceplayer
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_3
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_1, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_1:
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_3:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_0
	closemessage
	goto ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_1


ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister::
	lock
	faceplayer
	goto_if_unset FLAG_ROSEVALE_AMULET_COIN_GIFT, ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_2
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_3, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_1:
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_2:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0
	checkitemspace ITEM_AMULET_COIN
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_5
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_2
	giveitem ITEM_AMULET_COIN
	setflag FLAG_ROSEVALE_AMULET_COIN_GIFT
	goto ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_1

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_5:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_1
	goto ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_1


ISLANDGAME_ROSEVALE_INN_Interact_Marill::
	lock
	faceplayer
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Marill_Text_0, MSGBOX_NPC
	release
	return


ISLANDGAME_ROSEVALE_INN_Interact_Arthur::
	lock
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_Arthur_3
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_Arthur_1:
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_3:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0
	closemessage
	goto ISLANDGAME_ROSEVALE_INN_Interact_Arthur_1


ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad::
	switch VAR_ROSEVALE_STATE
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_2
	faceplayer
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1, MSGBOX_NPC
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_2:
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0
	closemessage
	return


ISLANDGAME_ROSEVALE_INN_Interact_LockedDoor::
	lock
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_LockedDoor_Text_0
	release
	return


ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Why can't I take on the Marya\n"
	.string "Gym Challenge? I want to become\l"
	.string "stronger!$"

ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_1:
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}Because you're not ready\n"
	.string "yet.\p"
	.string "Taking part in the Gym Challenge means\n"
	.string "you'll be traveling around the isles by\l"
	.string "yourself, and I don't trust you to not\l"
	.string "get into trouble.$"

ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_2:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Why not? I'm not a kid anymore!\n"
	.string "I can handle myself just fine!\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}You not only ran into the\n"
	.string "caves of Mt. Aurora, which I have\l"
	.string "repeatedly told you not to do, but you\l"
	.string "also chased after a potentially\l"
	.string "dangerous criminal too.\p"
	.string "That shows me that you can't handle\n"
	.string "yourself at all.\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}But... she stole Annie's Azurill!\n"
	.string "Are you saying I should've just let her\l"
	.string "get away!?\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}And could you have gotten\n"
	.string "it back without {PLAYER}'s and\l"
	.string "Articuno's help?\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Mmmmmn...\p"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}Do you realize what\n"
	.string "could've happened to you had they not\l"
	.string "been there? And what happens the next\l"
	.string "time you do something as reckless as\l"
	.string "that?\p"
	.string "I know your heart is in the right place,\n"
	.string "Arthur, but it's still too early for you.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_0:
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}Arthur and his father\n"
	.string "have been arguing about participating\l"
	.string "in the Marya Gym Challenge all morning.\p"
	.string "I understand that it's natural for a\n"
	.string "Pokémon trainer to eventually travel\l"
	.string "off all on their own, but I'm still\l"
	.string "worried if he'll be okay...$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_1:
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}If you ever need a place\n"
	.string "to stay, our doors are always open.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0:
	.string "{COLOR GREEN}Arthur's Sister: {COLOR DARK_GRAY}Hewwo! Do you have\n"
	.string "room to take my gift now?$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_1:
	.string "Eeh? You still don't have space!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_2:
	.string "Hooway! Here you go!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_3:
	.string "{COLOR GREEN}Arthur's Sister: {COLOR DARK_GRAY}Me and A-zoo-wil are\n"
	.string "dancing! Wanna join?$"

ISLANDGAME_ROSEVALE_INN_Interact_Marill_Text_0:
	.string "Azu! {COLOR BLUE}((Good luck on the rest of your\n"
	.string "journey! I'll never forget you!))$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}I-It's not fair...$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}! I promise the next\n"
	.string "time we fight, I'll be much stronger!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0:
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}You have to prove to me\n"
	.string "that you are responsible enough first.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1:
	.string "{COLOR GREEN}Arthur's Dad: You're a great influence\n"
	.string "on Arthur, {PLAYER}.\p"
	.string "I'm glad that you met each other.$"

ISLANDGAME_ROSEVALE_INN_Interact_LockedDoor_Text_0:
	.string "Oi, the sign says “DO NOT DISTURB”.\n"
	.string "What part of that do you not get!?$"
