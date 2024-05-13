ISLANDGAME_CHERIPORT_PKMNCENTER_2F_MapScripts::
	.byte 0


ISLANDGAME_PKMNCENTER_2F_TimeNPC::
	lock
	faceplayer
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_TimeNPC_2
ISLANDGAME_PKMNCENTER_2F_TimeNPC_1:
	closemessage
	release
	return

ISLANDGAME_PKMNCENTER_2F_TimeNPC_2:
	fadescreen FADE_TO_BLACK
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1
	waitmessage
	special StartWallClock
	waitstate
	delay 30
	setflag FLAG_SET_WALL_CLOCK
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2
	goto ISLANDGAME_PKMNCENTER_2F_TimeNPC_1


ISLANDGAME_PKMNCENTER_2F_NameRater::
	lock
	faceplayer
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_2
ISLANDGAME_PKMNCENTER_2F_NameRater_1:
NameRater_End:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7
	closemessage
	release
	return

ISLANDGAME_PKMNCENTER_2F_NameRater_2:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_NameRater_4
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_4:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_7
ISLANDGAME_PKMNCENTER_2F_NameRater_6:
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_10
ISLANDGAME_PKMNCENTER_2F_NameRater_9:
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_13
ISLANDGAME_PKMNCENTER_2F_NameRater_12:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_15
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_7:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_6

ISLANDGAME_PKMNCENTER_2F_NameRater_10:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_9

ISLANDGAME_PKMNCENTER_2F_NameRater_13:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_12

ISLANDGAME_PKMNCENTER_2F_NameRater_15:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_17
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_17:
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1


ISLANDGAME_PKMNCENTER_2F_MoveDeleter::
	lock
	faceplayer
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
	goto MoveDeleter_End
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1:
MoveDeleter_End:
	closemessage
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5:
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8:
	special GetNumMovesSelectedMonHas
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, ISLANDGAME_PKMNCENTER_2F_MoveDeleter
	special BufferMoveDeleterNicknameAndMove
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14:
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1


ISLANDGAME_PKMNCENTER_2F_MoveRelearner::
	lock
	faceplayer
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0
	showmoneybox 0, 0
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1:
MoveRelearner_End:
	hidemoneybox
	closemessage
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2:
	checkmoney 1000
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_4
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_7:
	special IsSelectedMonEgg
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_10:
	compare VAR_0x8005, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_13:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7
	special TeachMoveRelearnerMove
	waitstate
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
	waitmessage
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_4:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_7

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_10

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14:
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_13


ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0:
	.string "You look tired, trainer. Would you like\n"
	.string "to take a rest in one of our rooms?\p"
	.string "{COLOR RED}(Should I take a break and pass the\n"
	.string "time...?)$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1:
	.string "You took a break until...$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2:
	.string "We hope you had a good rest! Come back\n"
	.string "if you would like to pass time.$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0:
	.string "How's it going, youngin? I'm Marya's\n"
	.string "official Name Rater!\p"
	.string "Would you like me to impart my\n"
	.string "name-rating wisdom on your Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1:
	.string "Alrighty mate, whose name shall I giveth\n"
	.string "a critique on?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2:
	.string "That's an egg, init? I can't judge a\n"
	.string "Pokémon that hasn't hatched yet!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3:
	.string "Ah, {STR_VAR_1} is it? A truly\n"
	.string "spectacular name, I say!\p"
	.string "Its original trainer must have been a\n"
	.string "real nicknaming aficionado.\p"
	.string "If you wanted to change its name,\n"
	.string "though, I unfortunately can't do that.\p"
	.string "It would go against the official Name\n"
	.string "Rater moral code of ethics!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4:
	.string "Hmm, so it's {STR_VAR_1}? A fitting\n"
	.string "name for such a fine Pokémon!\p"
	.string "But if you've a better name, I'm more\n"
	.string "than happy to change it to that!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5:
	.string "What'll its new name be?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6:
	.string "There we are! This Pokemon shall\n"
	.string "henceforth be known as...\p"
	.string "{STR_VAR_1}!\p"
	.string "And what a smashing name it is! I'm sure\n"
	.string "it's absolutely chuffed to have it!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7:
	.string "If you've any Pokemon whose name you'd\n"
	.string "like me to rate, I'm always here!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0:
	.string "Why hello there, whippersnapper! I'm\n"
	.string "the...{PAUSE 30} um...{PAUSE 30} oh! The Move Deleter!\p"
	.string "Would you like me to have your Pokemon\n"
	.string "forget one of their moves?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1:
	.string "O-Oh! Splendid! Which Pokémon do you\n"
	.string "want me to make forget a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2:
	.string "Oh... I see. It was foolish of me to get\n"
	.string "excited...\p"
	.string "I suppose I will continue being useless\n"
	.string "in these modern times...$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3:
	.string "Eh? Is this a prank? You think it's\n"
	.string "funny picking on the elderly?\p"
	.string "Kids these days... No respect for\n"
	.string "anyone but themselves.$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4:
	.string "I'm afraid I cannot make a Pokemon\n"
	.string "forget its only move...\p"
	.string "Doing so would cause MissingNo. to\n"
	.string "appear and corrupt this game...\p"
	.string "Eh? What do you mean that's a load of\n"
	.string "baloney? Are you disrespecting me!?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5:
	.string "Alright, which move should be\n"
	.string "forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6:
	.string "Ah... {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You want this move to be forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7:
	.string "Your {STR_VAR_1} has successfully\n"
	.string "forgotten the move {STR_VAR_2}!\p"
	.string "If you need another move forgotten,\n"
	.string "please come again!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8:
	.string "I see... I suppose there is no need for a\n"
	.string "Move Deleter in this world anymore...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0:
	.string "Hullo! I am the based gigachad of Marya\n"
	.string "known as the Move Relearner!\p"
	.string "I can help your Pokémon relearn moves\n"
	.string "they've previously learned!\p"
	.string "I can even teach them moves that they\n"
	.string "missed out on!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1:
	.string "I can do this, for the low, low price of\n"
	.string "¥1000! How's that sound?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2:
	.string "Sorry pal, I gotta make a living. I can't\n"
	.string "do it if ya don't got the money.$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3:
	.string "Awesome. Which Pokémon do you want to\n"
	.string "relearn a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4:
	.string "If you ever need my power, I'll be here,\n"
	.string "waiting!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5:
	.string "Umm... eggs don't even have moves to\n"
	.string "learn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6:
	.string "There's no moves for this Pokémon to\n"
	.string "relearn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7:
	.string "Which move should I reteach this\n"
	.string "Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8:
	.string "Okay... {PAUSE 30}annnnnd...{PAUSE 30} done! Your Pokémon\n"
	.string "has relearned its move!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9:
	.string "Pleasure doin' business with you,\n"
	.string "trainer!$"
