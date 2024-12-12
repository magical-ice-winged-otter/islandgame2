ISLANDGAME_ROSEVALE_INN_MapScripts::
# 8 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	switch VAR_ROSEVALE_STATE
# 10 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	case 3, ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	setobjectxy 3, 26, 4
# 16 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	setobjectxy 4, 23, 5
	return

ISLANDGAME_ROSEVALE_INN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	return


ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene::
# 22 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	lock
# 23 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 24 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	waitmovement 0
# 25 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 26 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	waitmovement 0
# 28 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_0
# 29 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	closemessage
# 31 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 32 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	waitmovement 0
# 33 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 34 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	waitmovement 0
# 36 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_1
# 41 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 43 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_2
# 54 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	closemessage
# 56 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 57 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	waitmovement 0
# 58 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	setvar VAR_ROSEVALE_STATE, 3
	return


ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom::
# 62 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	faceplayer
# 64 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	switch VAR_ROSEVALE_STATE
# 65 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_3
# 71 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_1, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_1:
# 75 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_3:
# 66 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_0
# 69 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	closemessage
	goto ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_1


ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister::
# 79 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	lock
# 80 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	faceplayer
# 81 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	goto_if_unset FLAG_ROSEVALE_AMULET_COIN_GIFT, ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_2
# 96 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_3, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_1:
# 98 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_2:
# 82 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0
# 85 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	checkitemspace ITEM_AMULET_COIN
# 86 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_5
# 90 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_2
# 91 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 92 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	setflag FLAG_ROSEVALE_AMULET_COIN_GIFT
	goto ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_1

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_5:
# 87 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_1
	goto ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_1


ISLANDGAME_ROSEVALE_INN_Interact_Marill::
# 102 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	lock
# 103 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	faceplayer
# 104 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 105 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Marill_Text_0, MSGBOX_NPC
# 106 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_INN_Interact_Arthur::
# 110 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	lock
# 111 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	switch VAR_ROSEVALE_STATE
# 112 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_Arthur_3
# 118 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	faceplayer
# 119 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1, MSGBOX_NPC
ISLANDGAME_ROSEVALE_INN_Interact_Arthur_1:
# 121 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	release
	return

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_3:
# 113 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0
# 116 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	closemessage
	goto ISLANDGAME_ROSEVALE_INN_Interact_Arthur_1


ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad::
# 125 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	switch VAR_ROSEVALE_STATE
# 126 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	case 3, ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_2
# 132 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	faceplayer
# 133 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1, MSGBOX_NPC
	return

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_2:
# 127 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0
# 130 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	closemessage
	return


ISLANDGAME_ROSEVALE_INN_Interact_LockedDoor::
# 140 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	lock
# 141 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	msgbox ISLANDGAME_ROSEVALE_INN_Interact_LockedDoor_Text_0
# 144 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	release
	return


ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_0:
# 28 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Why can't I take on the Marya\n"
	.string "Gym Challenge? I want to become\l"
	.string "stronger!$"

ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_1:
# 37 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}Because you're not ready\n"
	.string "yet.\p"
	.string "Taking part in the Gym Challenge means\n"
	.string "you'll be traveling around the isles by\l"
	.string "yourself, and I don't trust you to not\l"
	.string "get into trouble.$"

ISLANDGAME_ROSEVALE_INN_Trigger_Cutscene_Text_2:
# 44 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
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
# 67 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}Arthur and his father\n"
	.string "have been arguing about participating\l"
	.string "in the Marya Gym Challenge all morning.\p"
	.string "I understand that it's natural for a\n"
	.string "Pokémon trainer to eventually travel\l"
	.string "off all on their own, but I'm still\l"
	.string "worried if he'll be okay...$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurMom_Text_1:
# 72 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur's Mom: {COLOR DARK_GRAY}If you ever need a place\n"
	.string "to stay, our doors are always open.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_0:
# 83 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Annie: {COLOR DARK_GRAY}Hewwo! Do you have room to take\n"
	.string "my gift now?$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_1:
# 87 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "Eeh? You still don't have space!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_2:
# 90 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "Hooway! Here you go!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurSister_Text_3:
# 96 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Annie: {COLOR DARK_GRAY}Me and A-zoo-wil are dancing!\n"
	.string "Wanna join?$"

ISLANDGAME_ROSEVALE_INN_Interact_Marill_Text_0:
# 105 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "Azu! {COLOR BLUE}(Good luck on the rest of your\n"
	.string "journey! I'll never forget you!)$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_0:
# 114 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}I-It's not fair...$"

ISLANDGAME_ROSEVALE_INN_Interact_Arthur_Text_1:
# 119 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}{PLAYER}! I promise the next\n"
	.string "time we fight, I'll be much stronger!$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_0:
# 128 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur's Dad: {COLOR DARK_GRAY}You have to prove to me\n"
	.string "that you are responsible enough first.$"

ISLANDGAME_ROSEVALE_INN_Interact_ArthurDad_Text_1:
# 133 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "{COLOR GREEN}Arthur's Dad: You're a great influence\n"
	.string "on Arthur, {PLAYER}.\p"
	.string "I'm glad that you met each other.$"

ISLANDGAME_ROSEVALE_INN_Interact_LockedDoor_Text_0:
# 142 "data/maps/ISLANDGAME_ROSEVALE_INN/scripts.pory"
	.string "Oi, the sign says “DO NOT DISTURB”.\n"
	.string "What part of that do you not get!?$"
