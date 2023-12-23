ISLANDGAME_AURORA_WEATHER_INSTITUTE_MapScripts::
	.byte 0


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist::
	goto_if_unset FLAG_RECEIVED_CASTFORM, ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_2
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_4, MSGBOX_NPC
ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1:
	release
	return

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_2:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_5
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_5:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1
	callnative CheckDexCount
	compare VAR_0x8000, 20
	goto_if_ge ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_7
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_3
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_7:
	msgbox ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2
	givecustommon SPECIES_CASTFORM, 20, ITEM_MACHO_BRACE, ITEM_POKE_BALL, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_SAND_ATTACK, MOVE_HELPING_HAND, FALSE
	setflag FLAG_RECEIVED_CASTFORM
	goto ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_1


ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_0:
	.string "Hello there! You must be {PLAYER}. I\n"
	.string "am one of Professor Palm's aides.\p"
	.string "I came here to study the weather and\n"
	.string "ecosystem surrounding Mt. Aurora...\p"
	.string "...Buuuut I didn't realize how gosh darn\n"
	.string "cold it'd be here, so I just stay cooped\l"
	.string "up in here for most of my time.\p"
	.string "Say... you've got your Pokédex on you,\n"
	.string "right? Wanna help a poor guy out?\p"
	.string "If you can catch 20 different Pokémon\n"
	.string "and show me their Pokédex entries, I'll\l"
	.string "make it worth your while! How's that\l"
	.string "sound?$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_1:
	.string "Awesome! Let's see how many Pokémon\n"
	.string "you've caught so far...$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_2:
	.string "Wowie... that's at least 20 Pokémon,\n"
	.string "alright! Well, a deal's a deal!\p"
	.string "This right here is a Pokémon that we\n"
	.string "received from the Hoenn region to help\l"
	.string "predict the crazy weather here in the\l"
	.string "isles!\p"
	.string "...Buuuut it's probably better in your\n"
	.string "hands. Not much it can do inside here.$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_3:
	.string "Hm... You still don't have 20... Let me\n"
	.string "know when you do!$"

ISLANDGAME_AURORA_WEATHER_INSTITUTE_Interact_Scientist_Text_4:
	.string "I'll be fine here by myself. My new\n"
	.string "high-tech earmuffs will be in the mail\l"
	.string "soon!\p"
	.string "T-That being said, it wouldn't hurt to\n"
	.string "come visit once or twice...\p"
	.string "I um, don't get much human interaction\n"
	.string "living up right by the mountain...$"
