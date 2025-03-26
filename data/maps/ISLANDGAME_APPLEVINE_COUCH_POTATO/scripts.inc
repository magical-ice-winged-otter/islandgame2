ISLANDGAME_APPLEVINE_COUCH_POTATO_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak::
# 10 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	lock
# 11 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	returnqueststate QUEST_APPLEVINE_COUCH_POTATO
# 13 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_3
# 37 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_4
# 118 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_5
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1:
# 129 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
CouchPotatoSpeakEnd:
# 130 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	closemessage
# 131 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	release
	return

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_3:
# 15 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_0
# 20 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	closemessage
# 21 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 23 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	waitmovement 0
# 24 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	playse SE_PIN
# 25 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	waitse
# 26 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_1
# 36 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	startquest QUEST_APPLEVINE_COUCH_POTATO
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_4:
# 38 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	faceplayer
# 39 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	setvar VAR_TEMP_B, 0
# 40 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	setvar VAR_TEMP_A, SUB_QUEST_COUNT_COUCH_POTATO
# 41 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	setvar VAR_TEMP_C, QUEST_APPLEVINE_COUCH_POTATO
# 42 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	call Common_NextSubQuest
# 48 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 49 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	checkitem VAR_TEMP_D
# 50 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_7
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_6:
# 54 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_3, MSGBOX_YESNO
# 55 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_10
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_9:
# 59 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	removeitem VAR_TEMP_D
# 61 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_APPLEVINE_COUCH_POTATO, VAR_TEMP_B
# 62 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	addvar VAR_TEMP_B, 1
# 63 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_13
# 88 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_7
# 93 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	addmoney 2000
# 94 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	updatemoneybox
# 95 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	playse SE_SHOP
# 96 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	waitse
# 97 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	switch VAR_TEMP_B
# 98 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case 1, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_17
# 102 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case 2, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_18
# 106 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case 3, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_19
# 110 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	case 4, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_20
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12:
# 117 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	hidemoneybox
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_5:
# 119 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_12
# 123 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	faceplayer
# 124 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_13
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_7:
# 51 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_2
# 52 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	goto CouchPotatoSpeakEnd
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_6

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_10:
# 56 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_4
# 57 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	goto CouchPotatoSpeakEnd
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_9

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_13:
# 64 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_5
# 73 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	addmoney 2000
# 74 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	updatemoneybox
# 75 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	playse SE_SHOP
# 76 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	waitse
# 77 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_6
# 84 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	hidemoneybox
# 85 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 86 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	completequest QUEST_APPLEVINE_COUCH_POTATO
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_17:
# 99 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_8
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_18:
# 103 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_9
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_19:
# 107 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_10
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_20:
# 111 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_11
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12


ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax::
# 135 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	lock
# 136 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	faceplayer
# 137 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax_Text_0
# 138 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 139 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	waitmoncry
# 140 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	release
	return


ISLANDGAME_APPLEVINE_COUCH_POTATO_TV::
# 144 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_TV_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_0:
# 16 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Man, I'm starving, but I don't feel like\n"
	.string "getting up and going to the store...\p"
	.string "I wish there was like, some sort of\n"
	.string "service where I could just pay someone\l"
	.string "to deliver food straight to my house!\p"
	.string "Huh?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_1:
# 27 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Who are you? What are you doing in my\n"
	.string "house?\p"
	.string "Hmm... You're a Pokémon trainer? That\n"
	.string "means you do a lot of walking around...\p"
	.string "Ho-ho, have I got the perfect\n"
	.string "opportunity for you!\p"
	.string "See, I'm hungry, but I wanna keep\n"
	.string "watching Serafina's livestream.\p"
	.string "You're a trainer, and I bet you could\n"
	.string "use some money for your travels.\p"
	.string "See where I'm getting at? You give me\n"
	.string "the grub, I give you the dough.\p"
	.string "Awesome! I'm glad you've chosen to be\n"
	.string "my server! Welcome to your new job!\p"
	.string "Hmm... I could go for some chocolate. Go\n"
	.string "down to La Cucina Dolche and get me one\l"
	.string "of their tasty Sweet Hearts, server!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_2:
# 51 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Where's my {STR_VAR_2}? I need it\n"
	.string "now!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_3:
# 54 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Ah, have you brought my\n"
	.string "{STR_VAR_2}?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_4:
# 56 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "No? Then go back out there and get one!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_5:
# 65 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Yessss... YESSSS! Good work, very good\n"
	.string "work indeed, my faithful servant!\p"
	.string "-nom nom nom-\p"
	.string "Ooh, soo delicious... Knowing that\n"
	.string "Serafina made these heavenly cookies\l"
	.string "with her love makes it soo much better!\p"
	.string "Ah... that really hit the spot. Server,\n"
	.string "you are relieved of your duties. Thank\l"
	.string "you for your service.\p"
	.string "...Hm? What do you mean, I'm forgetting\n"
	.string "something?\p"
	.string "O-Oh! Right. Your payment! Silly me, how\n"
	.string "could I forget?\p"
	.string "Here you are, your last paycheck!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_6:
# 78 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Hm? What do you mean, “That's It?” I\n"
	.string "paid you the amount I always give.\p"
	.string "WHAT!? The cookies cost THAT much!? I\n"
	.string "don't have that kind of money!\p"
	.string "Umm, uhh, wait! I can fix this! Just give\n"
	.string "me a second!\p"
	.string "C'mon... Where is it... O-Oh, found it!\p"
	.string "Here, you can have this as the payment!\n"
	.string "It's my most prized possession!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_7:
# 89 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Ah, excellent! Present me the goods,\n"
	.string "server!\p"
	.string "Mmmmmm...{PAUSE 60} That's the stuff...\p"
	.string "Huh? Oh, right. As compensation for\n"
	.string "your services, here's a little something\l"
	.string "for your troubles.$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_8:
# 100 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Hmm, I'm still pretty hungry...\p"
	.string "Oh, I've always wanted to try one of\n"
	.string "those boy scout Candy Bars they sell at\l"
	.string "Camp Persi.\p"
	.string "Go forth, my loyal servant!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_9:
# 104 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Let's see what else I want to order...\p"
	.string "Oh! Apparently a new café just opened\n"
	.string "up in Aetheria, and their pancakes are\l"
	.string "bomb, according to Serafina!\p"
	.string "Get me one of those Sera-approved\n"
	.string "Pancakes at once!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_10:
# 108 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Man, I haven't had a good donut in\n"
	.string "years. When I lived in Cantalo with my\l"
	.string "mom, she would always bring me home a\l"
	.string "jelly-filled donut.\p"
	.string "Yo, mind snagging me one of those Jelly\n"
	.string "Donuts from Cantalo? Be sure to get\l"
	.string "strawberry, it's my favorite!\p"
	.string "...\p"
	.string "Huh? I said a Jelly Donut, not a Rice\n"
	.string "Ball, dum-dum! How did you get THAT from\l"
	.string "what I said!?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_11:
# 112 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "...\p"
	.string "Oh... {PAUSE 30}my... {PAUSE 30}GOD!\p"
	.string "SERAFINA JUST ANNOUNCED HER NEW\n"
	.string "COOKIE BRAND, SERA-SNAXX!\p"
	.string "Fudgesicles... they're only going to be\n"
	.string "selling it at her hometown in Minerva...\p"
	.string "As a devoted tier three subscriber, I\n"
	.string "MUST have her Sera-Snaxx!\p"
	.string "Server! This is your final task! Get me\n"
	.string "an order of Sera-Snaxx by ANY means\l"
	.string "necessary! Money is no object!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_12:
# 120 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Whelp, paying for all those delivery\n"
	.string "fees completely drained my wallet...\p"
	.string "How in the world am I going to pay for my\n"
	.string "monthly subscription now?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_13:
# 125 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "Huh? Just find a job? I-It's not as\n"
	.string "easy as you say it is! They don't just\l"
	.string "appear out of thin air!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax_Text_0:
# 137 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "{COLOR RED}(How the heck are you 230 pounds?)$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_TV_Text_0:
# 145 "data/maps/ISLANDGAME_APPLEVINE_COUCH_POTATO/scripts.pory"
	.string "It's one of Serafina's private streams.\n"
	.string "She's just chatting with subscribers.$"
