Common_NextSubQuest::
Common_NextSubQuest_2:
# 14 "data/scripts/islandgame_common.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_lt Common_NextSubQuest_3
	return

Common_NextSubQuest_3:
# 15 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, VAR_TEMP_C, VAR_TEMP_B
# 16 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_NextSubQuest_6
# 25 "data/scripts/islandgame_common.pory"
	addvar VAR_TEMP_B, 1
	goto Common_NextSubQuest_2

Common_NextSubQuest_6:
# 17 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_BUFFER_QUEST_NAME, VAR_TEMP_C, VAR_TEMP_B
	return


IslandGame_Common_PokemonCenter_1F_EventScript_Nurse::
# 31 "data/scripts/islandgame_common.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1
# 41 "data/scripts/islandgame_common.pory"
	setvar VAR_0x800B, 1
# 42 "data/scripts/islandgame_common.pory"
	call Common_EventScript_PkmnCenterNurse
# 43 "data/scripts/islandgame_common.pory"
	waitmessage
# 44 "data/scripts/islandgame_common.pory"
	waitbuttonpress
# 45 "data/scripts/islandgame_common.pory"
	release
	return

IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_1:
# 32 "data/scripts/islandgame_common.pory"
	lock
# 33 "data/scripts/islandgame_common.pory"
	msgbox IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0
# 37 "data/scripts/islandgame_common.pory"
	closemessage
# 38 "data/scripts/islandgame_common.pory"
	release
	return


ISLANDGAME_PKMNCENTER_2F_TimeNPC::
# 53 "data/scripts/islandgame_common.pory"
	lock
# 54 "data/scripts/islandgame_common.pory"
	faceplayer
# 55 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0, MSGBOX_YESNO
# 60 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_TimeNPC_2
ISLANDGAME_PKMNCENTER_2F_TimeNPC_1:
# 72 "data/scripts/islandgame_common.pory"
	closemessage
# 73 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_TimeNPC_2:
# 61 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1
# 63 "data/scripts/islandgame_common.pory"
	waitmessage
# 64 "data/scripts/islandgame_common.pory"
	special StartWallClock
# 65 "data/scripts/islandgame_common.pory"
	waitstate
# 66 "data/scripts/islandgame_common.pory"
	delay 30
# 67 "data/scripts/islandgame_common.pory"
	setflag FLAG_SET_WALL_CLOCK
# 68 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2
	goto ISLANDGAME_PKMNCENTER_2F_TimeNPC_1


ISLANDGAME_PKMNCENTER_2F_NameRater::
# 79 "data/scripts/islandgame_common.pory"
	lock
# 80 "data/scripts/islandgame_common.pory"
	faceplayer
# 81 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0, MSGBOX_YESNO
# 85 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_2
ISLANDGAME_PKMNCENTER_2F_NameRater_1:
# 145 "data/scripts/islandgame_common.pory"
NameRater_End:
# 146 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7
# 147 "data/scripts/islandgame_common.pory"
	closemessage
# 148 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_NameRater_2:
# 86 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1
# 89 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 90 "data/scripts/islandgame_common.pory"
	waitstate
# 91 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_NameRater_4
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_4:
# 92 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 93 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_7
ISLANDGAME_PKMNCENTER_2F_NameRater_6:
# 99 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 100 "data/scripts/islandgame_common.pory"
	special IsMonOTIDNotPlayers
# 101 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_10
ISLANDGAME_PKMNCENTER_2F_NameRater_9:
# 110 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 111 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 112 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_13
ISLANDGAME_PKMNCENTER_2F_NameRater_12:
# 121 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4, MSGBOX_YESNO
# 125 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_15
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_7:
# 94 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2
# 97 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_6

ISLANDGAME_PKMNCENTER_2F_NameRater_10:
# 102 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 108 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_9

ISLANDGAME_PKMNCENTER_2F_NameRater_13:
# 113 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3
# 119 "data/scripts/islandgame_common.pory"
	goto NameRater_End
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_12

ISLANDGAME_PKMNCENTER_2F_NameRater_15:
# 126 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5
# 129 "data/scripts/islandgame_common.pory"
	call Common_EventScript_NameReceivedPartyMon
# 130 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 131 "data/scripts/islandgame_common.pory"
	special BufferMonNickname
# 132 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_NameRater_17
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1

ISLANDGAME_PKMNCENTER_2F_NameRater_17:
# 133 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6
	goto ISLANDGAME_PKMNCENTER_2F_NameRater_1


ISLANDGAME_PKMNCENTER_2F_MoveDeleter::
# 154 "data/scripts/islandgame_common.pory"
	lock
# 155 "data/scripts/islandgame_common.pory"
	faceplayer
# 156 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0, MSGBOX_YESNO
# 160 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2
# 216 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 217 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1:
# 220 "data/scripts/islandgame_common.pory"
MoveDeleter_End:
# 221 "data/scripts/islandgame_common.pory"
	closemessage
# 222 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_2:
# 161 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1
# 164 "data/scripts/islandgame_common.pory"
	special ChoosePartyMon
# 165 "data/scripts/islandgame_common.pory"
	waitstate
# 166 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5:
# 173 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 174 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8:
# 180 "data/scripts/islandgame_common.pory"
	special GetNumMovesSelectedMonHas
# 181 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 1
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12
ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11:
# 189 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5
# 192 "data/scripts/islandgame_common.pory"
	fadescreen FADE_TO_BLACK
# 193 "data/scripts/islandgame_common.pory"
	special MoveDeleterChooseMoveToForget
# 194 "data/scripts/islandgame_common.pory"
	fadescreen FADE_FROM_BLACK
# 195 "data/scripts/islandgame_common.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, ISLANDGAME_PKMNCENTER_2F_MoveDeleter
# 196 "data/scripts/islandgame_common.pory"
	special BufferMoveDeleterNicknameAndMove
# 197 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6, MSGBOX_YESNO
# 200 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14
# 211 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8
# 212 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_6:
# 167 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2
# 171 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_5

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_9:
# 175 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_8

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_12:
# 182 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4
# 187 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_11

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_14:
# 201 "data/scripts/islandgame_common.pory"
	special MoveDeleterForgetMove
# 202 "data/scripts/islandgame_common.pory"
	playfanfare MUS_MOVE_DELETED
# 203 "data/scripts/islandgame_common.pory"
	waitfanfare
# 204 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7
# 208 "data/scripts/islandgame_common.pory"
	goto MoveDeleter_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveDeleter_1


ISLANDGAME_PKMNCENTER_2F_MoveRelearner::
# 228 "data/scripts/islandgame_common.pory"
	lock
# 229 "data/scripts/islandgame_common.pory"
	faceplayer
# 230 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0
# 235 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 236 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1, MSGBOX_YESNO
# 239 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2
# 296 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1:
# 299 "data/scripts/islandgame_common.pory"
MoveRelearner_End:
# 300 "data/scripts/islandgame_common.pory"
	hidemoneybox
# 301 "data/scripts/islandgame_common.pory"
	closemessage
# 302 "data/scripts/islandgame_common.pory"
	release
	return

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_2:
# 240 "data/scripts/islandgame_common.pory"
	checkmoney 1000
# 241 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5
# 248 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3
# 251 "data/scripts/islandgame_common.pory"
	special ChooseMonForMoveRelearner
# 252 "data/scripts/islandgame_common.pory"
	waitstate
# 253 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8:
# 259 "data/scripts/islandgame_common.pory"
	special IsSelectedMonEgg
# 260 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11:
# 266 "data/scripts/islandgame_common.pory"
	compare VAR_0x8005, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14:
# 272 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7
# 275 "data/scripts/islandgame_common.pory"
	special TeachMoveRelearnerMove
# 276 "data/scripts/islandgame_common.pory"
	waitstate
# 277 "data/scripts/islandgame_common.pory"
	compare VAR_0x8004, 0
	goto_if_eq ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18
ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17:
# 281 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9
# 284 "data/scripts/islandgame_common.pory"
	waitmessage
# 285 "data/scripts/islandgame_common.pory"
	showmoneybox 0, 0
# 286 "data/scripts/islandgame_common.pory"
	removemoney 1000
# 287 "data/scripts/islandgame_common.pory"
	updatemoneybox
# 288 "data/scripts/islandgame_common.pory"
	playse SE_SHOP
# 289 "data/scripts/islandgame_common.pory"
	waitse
# 290 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_5:
# 242 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2
# 245 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_1

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_9:
# 254 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4
# 257 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_8

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_12:
# 261 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5
# 264 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_11

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_15:
# 267 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6
# 270 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_14

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_18:
# 278 "data/scripts/islandgame_common.pory"
	msgbox ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8
# 279 "data/scripts/islandgame_common.pory"
	goto MoveRelearner_End
	goto ISLANDGAME_PKMNCENTER_2F_MoveRelearner_17


Common_EventScript_OverworldPokemon::
# 306 "data/scripts/islandgame_common.pory"
	lock
# 307 "data/scripts/islandgame_common.pory"
	faceplayer
# 308 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 309 "data/scripts/islandgame_common.pory"
	startwildoverworldencounter
# 310 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 311 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 313 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 314 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_3
# 316 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_4
# 318 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_5
# 320 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_6
# 323 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_1:
# 325 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_3:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_4:
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_5:
# 319 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1

Common_EventScript_OverworldPokemon_6:
# 321 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_1


Common_EventScript_OverworldPokemon_Level::
# 329 "data/scripts/islandgame_common.pory"
	lock
# 330 "data/scripts/islandgame_common.pory"
	faceplayer
# 331 "data/scripts/islandgame_common.pory"
	setflag FLAG_SMART_WILD_AI
# 332 "data/scripts/islandgame_common.pory"
	startoverworldencounter 23
# 333 "data/scripts/islandgame_common.pory"
	clearflag FLAG_SMART_WILD_AI
# 334 "data/scripts/islandgame_common.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 336 "data/scripts/islandgame_common.pory"
	switch VAR_RESULT
# 337 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_LOST, Common_EventScript_OverworldPokemon_Level_3
# 339 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_RAN, Common_EventScript_OverworldPokemon_Level_4
# 341 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_WON, Common_EventScript_OverworldPokemon_Level_5
# 343 "data/scripts/islandgame_common.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_OverworldPokemon_Level_6
# 346 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
Common_EventScript_OverworldPokemon_Level_1:
# 348 "data/scripts/islandgame_common.pory"
	release
	return

Common_EventScript_OverworldPokemon_Level_3:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_4:
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_5:
# 342 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1

Common_EventScript_OverworldPokemon_Level_6:
# 344 "data/scripts/islandgame_common.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto Common_EventScript_OverworldPokemon_Level_1


IslandGame_Common_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 34 "data/scripts/islandgame_common.pory"
	.string "Welcome to the Maryan isles, trainer!\n"
	.string "This is a Pokémon Center.\p"
	.string "You don't have any Pokémon right now,\n"
	.string "but when you do we can heal them.$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_0:
# 56 "data/scripts/islandgame_common.pory"
	.string "You look tired, trainer. Would you like\n"
	.string "to take a rest in one of our rooms?\p"
	.string "{COLOR RED}(Should I take a break and pass the\n"
	.string "time...?)$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_1:
# 62 "data/scripts/islandgame_common.pory"
	.string "You took a break until...$"

ISLANDGAME_PKMNCENTER_2F_TimeNPC_Text_2:
# 69 "data/scripts/islandgame_common.pory"
	.string "We hope you had a good rest! Come back\n"
	.string "if you would like to pass time.$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_0:
# 82 "data/scripts/islandgame_common.pory"
	.string "How's it going, youngin? I'm Marya's\n"
	.string "official Name Rater!\p"
	.string "Would you like me to impart my\n"
	.string "name-rating wisdom on your Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_1:
# 87 "data/scripts/islandgame_common.pory"
	.string "Alrighty mate, whose name shall I giveth\n"
	.string "a critique on?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_2:
# 95 "data/scripts/islandgame_common.pory"
	.string "That's an egg, init? I can't judge a\n"
	.string "Pokémon that hasn't hatched yet!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_3:
# 103 "data/scripts/islandgame_common.pory"
	.string "Ah, {STR_VAR_1} is it? A truly\n"
	.string "spectacular name, I say!\p"
	.string "Its original trainer must have been a\n"
	.string "real nicknaming aficionado.\p"
	.string "If you wanted to change its name,\n"
	.string "though, I unfortunately can't do that.\p"
	.string "It would go against the official Name\n"
	.string "Rater moral code of ethics!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_4:
# 122 "data/scripts/islandgame_common.pory"
	.string "Hmm, so it's {STR_VAR_1}? A fitting\n"
	.string "name for such a fine Pokémon!\p"
	.string "But if you've a better name, I'm more\n"
	.string "than happy to change it to that!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_5:
# 127 "data/scripts/islandgame_common.pory"
	.string "What'll its new name be?$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_6:
# 134 "data/scripts/islandgame_common.pory"
	.string "There we are! This Pokemon shall\n"
	.string "henceforth be known as...\p"
	.string "{STR_VAR_1}!\p"
	.string "And what a smashing name it is! I'm sure\n"
	.string "it's absolutely chuffed to have it!$"

ISLANDGAME_PKMNCENTER_2F_NameRater_Text_7:
# 146 "data/scripts/islandgame_common.pory"
	.string "If you've any Pokemon whose name you'd\n"
	.string "like me to rate, I'm always here!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_0:
# 157 "data/scripts/islandgame_common.pory"
	.string "Why hello there, whippersnapper! I'm\n"
	.string "the...{PAUSE 30} um...{PAUSE 30} oh! The Move Deleter!\p"
	.string "Would you like me to have your Pokemon\n"
	.string "forget one of their moves?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_1:
# 162 "data/scripts/islandgame_common.pory"
	.string "O-Oh! Splendid! Which Pokémon do you\n"
	.string "want me to make forget a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_2:
# 168 "data/scripts/islandgame_common.pory"
	.string "Oh... I see. It was foolish of me to get\n"
	.string "excited...\p"
	.string "I suppose I will continue being useless\n"
	.string "in these modern times...$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_3:
# 176 "data/scripts/islandgame_common.pory"
	.string "Eh? Is this a prank? You think it's\n"
	.string "funny picking on the elderly?\p"
	.string "Kids these days... No respect for\n"
	.string "anyone but themselves.$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_4:
# 183 "data/scripts/islandgame_common.pory"
	.string "I'm afraid I cannot make a Pokemon\n"
	.string "forget its only move...\p"
	.string "Doing so would cause MissingNo. to\n"
	.string "appear and corrupt this game...\p"
	.string "Eh? What do you mean that's a load of\n"
	.string "baloney? Are you disrespecting me!?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_5:
# 190 "data/scripts/islandgame_common.pory"
	.string "Alright, which move should be\n"
	.string "forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_6:
# 198 "data/scripts/islandgame_common.pory"
	.string "Ah... {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You want this move to be forgotten?$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_7:
# 205 "data/scripts/islandgame_common.pory"
	.string "Your {STR_VAR_1} has successfully\n"
	.string "forgotten the move {STR_VAR_2}!\p"
	.string "If you need another move forgotten,\n"
	.string "please come again!$"

ISLANDGAME_PKMNCENTER_2F_MoveDeleter_Text_8:
# 211 "data/scripts/islandgame_common.pory"
	.string "I see... I suppose there is no need for a\n"
	.string "Move Deleter in this world anymore...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_0:
# 231 "data/scripts/islandgame_common.pory"
	.string "Hullo! I am the all-powerful guru known\n"
	.string "as the Move Relearner!\p"
	.string "I can help your Pokémon relearn moves\n"
	.string "they've previously learned!\p"
	.string "I can even teach them moves that they\n"
	.string "missed out on!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_1:
# 237 "data/scripts/islandgame_common.pory"
	.string "I can do this, for the low, low price of\n"
	.string "¥1000! How's that sound?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_2:
# 243 "data/scripts/islandgame_common.pory"
	.string "Sorry pal, I gotta make a living. I can't\n"
	.string "do it if ya don't got the money.$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_3:
# 249 "data/scripts/islandgame_common.pory"
	.string "Awesome. Which Pokémon do you want to\n"
	.string "relearn a move?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_4:
# 255 "data/scripts/islandgame_common.pory"
	.string "If you ever need my power, I'll be here,\n"
	.string "waiting!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_5:
# 262 "data/scripts/islandgame_common.pory"
	.string "Umm... eggs don't even have moves to\n"
	.string "learn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_6:
# 268 "data/scripts/islandgame_common.pory"
	.string "There's no moves for this Pokémon to\n"
	.string "relearn...$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_7:
# 273 "data/scripts/islandgame_common.pory"
	.string "Which move should I reteach this\n"
	.string "Pokémon?$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_8:
# 278 "data/scripts/islandgame_common.pory"
	.string "Well, if you change your mind, I'm always\n"
	.string "here!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_9:
# 282 "data/scripts/islandgame_common.pory"
	.string "Okay... {PAUSE 30}annnnnd...{PAUSE 30} done! Your Pokémon\n"
	.string "has relearned its move!$"

ISLANDGAME_PKMNCENTER_2F_MoveRelearner_Text_10:
# 291 "data/scripts/islandgame_common.pory"
	.string "Pleasure doin' business with you,\n"
	.string "trainer!$"
