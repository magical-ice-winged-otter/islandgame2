ISLANDGAME_APPLEVINE_COUCH_POTATO_MapScripts::
	.byte 0


ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak::
	lock
	returnqueststate QUEST_APPLEVINE_COUCH_POTATO
	switch VAR_RESULT
	case QUEST_INACTIVE, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_3
	case QUEST_ACTIVE, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_4
	case QUEST_COMPLETED, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_5
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1:
CouchPotatoSpeakEnd:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_3:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_0
	closemessage
	faceplayer
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	waitse
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_1
	startquest QUEST_APPLEVINE_COUCH_POTATO
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_4:
	faceplayer
	setvar VAR_TEMP_B, SUB_QUEST_COUCH_POTATO_1
	setvar VAR_TEMP_A, ( SUB_QUEST_COUCH_POTATO_1 + SUB_QUEST_COUNT_COUCH_POTATO )
	setvar VAR_TEMP_C, QUEST_APPLEVINE_COUCH_POTATO
	call Common_NextSubQuest
	copyvar VAR_TEMP_D, VAR_RESULT
	checkitem VAR_TEMP_D
	compare VAR_RESULT, FALSE
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_7
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_6:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_10
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_9:
	showmoneybox 0, 0
	removeitem VAR_TEMP_D
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_APPLEVINE_COUCH_POTATO, VAR_TEMP_B
	addvar VAR_TEMP_B, 1
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_eq ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_13
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_7
	addmoney 2000
	updatemoneybox
	playse SE_SHOP
	waitse
	switch VAR_TEMP_B
	case SUB_QUEST_COUCH_POTATO_2, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_17
	case SUB_QUEST_COUCH_POTATO_3, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_18
	case SUB_QUEST_COUCH_POTATO_4, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_19
	case SUB_QUEST_COUCH_POTATO_5, ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_20
ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12:
	hidemoneybox
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_5:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_12
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_13
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_1

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_7:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_2
	goto CouchPotatoSpeakEnd
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_6

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_10:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_4
	goto CouchPotatoSpeakEnd
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_9

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_13:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_5
	addmoney 2000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_6
	hidemoneybox
	giveitem ITEM_LEFTOVERS
	completequest QUEST_APPLEVINE_COUCH_POTATO
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_17:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_8
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_18:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_9
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_19:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_10
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_20:
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_11
	goto ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_12


ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax::
	lock
	faceplayer
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax_Text_0
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
	waitmoncry
	release
	return


ISLANDGAME_APPLEVINE_COUCH_POTATO_TV::
	msgbox ISLANDGAME_APPLEVINE_COUCH_POTATO_TV_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_0:
	.string "Man, I'm starving, but I don't feel like\n"
	.string "getting up and going to the store...\p"
	.string "I wish there was like, some sort of\n"
	.string "service where I could just pay someone\l"
	.string "to deliver food straight to my house!\p"
	.string "Huh?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_1:
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
	.string "down to La Cucina Dolche and get me\l"
	.string "one of their tasty {COLOR LIGHT_RED}Sweet Hearts{COLOR DARK_GRAY},\l"
	.string "server!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_2:
	.string "Where's my {COLOR LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}? I need it\n"
	.string "now!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_3:
	.string "Ah, have you brought my\n"
	.string "{COLOR LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_4:
	.string "No? Then go back out there and get one!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_5:
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
	.string "Hm?{PAUSE 60} What do you mean, “That's It?” I\n"
	.string "paid you the amount I always give.\p"
	.string "WHAT!? The cookies cost THAT much!? I\n"
	.string "don't have that kind of money!\p"
	.string "Umm, uhh, wait! I can fix this! Just give\n"
	.string "me a second!\p"
	.string "C'mon... Where is it... O-Oh, found it!\p"
	.string "Here, you can have this as the payment!\n"
	.string "It's my most prized possession!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_7:
	.string "Ah, excellent! Present me the goods,\n"
	.string "server!\p"
	.string "Mmmmmm...{PAUSE 60} That's the stuff...\p"
	.string "Huh? Oh, right. As compensation for\n"
	.string "your services, here's a little\l"
	.string "something for your troubles.$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_8:
	.string "Hmm, I'm still pretty hungry...\p"
	.string "Oh, I've always wanted to try one of\n"
	.string "those boy scout {COLOR LIGHT_RED}Candy Bars{COLOR DARK_GRAY} they sell\l"
	.string "at Camp Persi.\p"
	.string "Go forth, my loyal servant!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_9:
	.string "Let's see what else I want to order...\p"
	.string "Oh! Apparently a new café just opened\n"
	.string "up in Aetheria, and their pancakes are\l"
	.string "bomb, according to Serafina!\p"
	.string "Get me one of those Sera-approved\n"
	.string "{COLOR LIGHT_RED}Pancakes{COLOR DARK_GRAY} at once!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_10:
	.string "Man, I haven't had a good donut in\n"
	.string "years. When I lived in Cantalo with my\l"
	.string "mom, she would always bring me home a\l"
	.string "jelly-filled donut.\p"
	.string "Yo, mind snagging me one of those {COLOR LIGHT_RED}Jelly\n"
	.string "Donuts{COLOR DARK_GRAY} from Cantalo? Be sure to get\l"
	.string "strawberry, it's my favorite!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_11:
	.string "...\p"
	.string "Oh... {PAUSE 30}my... {PAUSE 30}GOD!\p"
	.string "SERAFINA JUST ANNOUNCED HER NEW\n"
	.string "COOKIE BRAND, SERA-SNAXX!\p"
	.string "Fudgesicles... they're only going to be\n"
	.string "selling it at her hometown in Minerva...\p"
	.string "As a devoted tier three subscriber, I\n"
	.string "MUST have her Sera-Snaxx!\p"
	.string "Server! This is your final task! Get me\n"
	.string "an order of {COLOR LIGHT_RED}Sera-Snaxx{COLOR DARK_GRAY} by ANY means\l"
	.string "necessary! Money is no object!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_12:
	.string "Whelp, paying for all those delivery\n"
	.string "fees completely drained my wallet...\p"
	.string "How in the world am I going to pay for my\n"
	.string "monthly subscription now?$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_CouchPotatoSpeak_Text_13:
	.string "Huh? Just find a job? I-It's not as\n"
	.string "easy as you say it is! They don't just\l"
	.string "appear out of thin air!$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_Munchlax_Text_0:
	.string "{COLOR RED}(How the heck are you 230 pounds?)$"

ISLANDGAME_APPLEVINE_COUCH_POTATO_TV_Text_0:
	.string "It's one of Serafina's private streams.\n"
	.string "She's just chatting with subscribers.$"
