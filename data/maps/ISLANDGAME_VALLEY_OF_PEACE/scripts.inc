ISLANDGAME_VALLEY_OF_PEACE_MapScripts::
# 5 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_VALLEY_OF_PEACE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_VALLEY_OF_PEACE_Sign::
# 19 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC1::
# 26 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 27 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0
	return


ISLANDGAME_VALLEY_OF_PEACE_NPC2::
# 33 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer1::
# 43 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_1, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1
# 50 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer2::
# 56 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_2, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1
# 63 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer3::
# 69 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_3, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1
# 76 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer4::
# 82 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_4, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1
# 91 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5::
# 97 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1
# 104 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2::
# 110 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_5, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1
# 117 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer6::
# 123 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_6, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1
# 130 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer7::
# 137 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_7, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1
# 144 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer8::
# 152 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_8, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1
# 160 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Trainer9::
# 169 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	trainerbattle_single TRAINER_VALLEY_OF_PEACE_9, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0, ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1
# 176 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	msgbox ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VALLEY_OF_PEACE_Sign_Text_0:
# 20 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "VALLEY OF PEACE\n"
	.string "May the departed find tranquility$"

ISLANDGAME_VALLEY_OF_PEACE_NPC1_Text_0:
# 28 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "(He's mourning the loss of his wife it\n"
	.string "seems. I should leave him be.)$"

ISLANDGAME_VALLEY_OF_PEACE_NPC2_Text_0:
# 35 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "My darling Clefable... Sometimes I still\n"
	.string "see your shadows around the valley.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_0:
# 45 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This valley exudes a powerful aura... Do\n"
	.string "not interrupt my aura farming!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_1:
# 48 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "No... my precious aura...!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer1_Text_2:
# 51 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I don't actually know what aura is. I\n"
	.string "just heard kids talking about it and I\l"
	.string "wanted to get with the times.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_0:
# 58 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Knowledge is power, and I know a lot.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_1:
# 61 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Even in defeat, my knowledge increases!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer2_Text_2:
# 64 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Every loss is an opportunity to learn.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_0:
# 71 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Have you also come here to pay\n"
	.string "respects to your fallen comrades?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_1:
# 74 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This battle was for you, Aquilla.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer3_Text_2:
# 77 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aquilla was the name of my Staraptor. I\n"
	.string "bet she's flying in the heavens now.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_0:
# 84 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Yoooo chat, y'all won't believe what I\n"
	.string "found in the woods!\p"
	.string "AN UN-ALIVED TRAINER!!!\p"
	.string "Huh? Outta my way! Can't you see I'm\n"
	.string "tryna record a video!?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_1:
# 89 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Bro! Relax! It's not that serious! It's\n"
	.string "just a Pokémon battle!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer4_Text_2:
# 92 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "S-Shut up, chat! Stop spamming that I\n"
	.string "got destroyed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_0:
# 99 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "We're here to honor our ol' Miltank for\n"
	.string "providin' milk to our family fer decades.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_1:
# 102 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heh... yer as tough of a fighter as she\n"
	.string "was.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_Text_2:
# 105 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Remember to cherish the time you spend\n"
	.string "with yer Pokémon. You never know when\l"
	.string "that time will end.$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_0:
# 112 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I miss our Miltank already... Maybe a\n"
	.string "battle will get my mind off her...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_1:
# 115 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "-sniff-\n"
	.string "Well now I just feel even worse...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer5_2_Text_2:
# 118 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I've known our Miltank since I was just\n"
	.string "a wee li'l sprout... I used to ride on top\l"
	.string "o' her every day. Good times...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_0:
# 125 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "This is MY territory, punk! I'll teach\n"
	.string "you to come here uninvited!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_1:
# 128 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Tch... you got lucky, punk!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer6_Text_2:
# 131 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Those jerks from the Goon Gang didn't\n"
	.string "let me join their gang 'cause my bike\l"
	.string "wasn't “hip” enough...\p"
	.string "W-Well, I'll show those Gooners! I'll\n"
	.string "just start my own gang, one where ALL\l"
	.string "bikes are allowed!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_0:
# 139 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Heehee... do you see something unique\n"
	.string "about my adorable little ceramics?$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_1:
# 142 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Did ya notice? They're both a hundred\n"
	.string "percent authentic!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer7_Text_2:
# 145 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Despite the similarities between\n"
	.string "Sinistea and Poltchageist, they are\l"
	.string "actually completely different species!\p"
	.string "Both of these species also have a\n"
	.string "“fake” and “authentic” form depending\l"
	.string "on if they have a special seal or not!\p"
	.string "Now, if only I had an equally authentic\n"
	.string "teapot and teacup to evolve them...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_0:
# 154 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Young trainer-san! I have brought\n"
	.string "great dishonor to my Pokémon!\p"
	.string "Please! Face me in a duel so that I may\n"
	.string "claim redemption!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_1:
# 158 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "A shameful performance...$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer8_Text_2:
# 161 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "I am no longer worthy to wield Pokémon...\p"
	.string "I am sorry, my Gallade. Your master has\n"
	.string "failed you, just like he has failed his\l"
	.string "Bisharp.\p"
	.string "It is time for you to seek a new master.\n"
	.string "One with the strength to protect you.\p"
	.string "Those scoundrels... I will never forgive\n"
	.string "them!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_0:
# 171 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Aiiiiiiiiiiiiiiiie!{PAUSE 30}\n"
	.string "A g-g-g-g-g-g-g-g-g-GHOOOOOOST!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_1:
# 174 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Zoinks!$"

ISLANDGAME_VALLEY_OF_PEACE_Trainer9_Text_2:
# 177 "data/maps/ISLANDGAME_VALLEY_OF_PEACE/scripts.pory"
	.string "Like, you just totally scared the pants\n"
	.string "off of me, man!$"
