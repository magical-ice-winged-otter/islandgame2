ISLANDGAME_Southern_Oranna_Path_MapScripts::
# 12 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 14 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 15 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 16 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 17 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 18 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 0
# 19 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_OnLoad
# 21 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	gettime
# 23 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 23 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 27 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_Southern_Oranna_Path_OnLoad::
# 37 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_0, 1
# 38 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto_if_set FLAG_SEEN_ABSOL, ISLANDGAME_Southern_Oranna_Path_OnLoad_1
	return

ISLANDGAME_Southern_Oranna_Path_OnLoad_1:
# 39 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
# 46 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
# 47 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle2::
# 67 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_2, TrainerBattle2_Text, TrainerBattle2_Defeated_Text
# 68 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle3::
# 89 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_3, TrainerBattle3_Text, TrainerBattle3_Defeated_Text
# 90 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle4::
# 112 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_4, TrainerBattle4_Text, TrainerBattle4_Defeated_Text
# 113 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC1::
# 140 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 141 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	faceplayer
# 142 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC1Talk
# 143 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2::
# 153 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 154 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	faceplayer
# 155 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto_if_unset FLAG_S_ORANNA_PATH_NPC, ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1:
# 165 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk2
# 167 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
FiredEmployee_End:
# 168 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2:
# 156 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk1
# 157 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	checkitemspace ITEM_POTION
# 158 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_5
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_4:
# 162 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	giveitem ITEM_POTION
# 163 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_S_ORANNA_PATH_NPC
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_5:
# 159 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_Text_0
# 160 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto FiredEmployee_End
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_4


ISLANDGAME_Southern_Oranna_Path_EventScript_SIGN::
# 185 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 186 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_SIGN_DESC
# 187 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return


# 200 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_WalkRight:
# 201 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_right
# 202 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 205 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_MiddleWalkBottom:
# 206 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_down
# 207 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerTop::
# 211 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 212 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 213 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 214 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 215 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 216 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 217 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerMiddle::
# 222 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 223 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 224 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 226 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 227 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerBottom::
# 231 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 233 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 234 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 235 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 236 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


# 239 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Surprised:
# 240 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	emote_exclamation_mark
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	face_player
# 242 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_up
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 244 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 247 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_1:
# 248 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 249 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 252 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Jump:
# 253 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	jump_right
# 254 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 257 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_2:
# 258 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 258 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 258 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 259 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 262 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_3:
# 263 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 263 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 263 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 263 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 264 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 264 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 265 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol::
# 269 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 1
# 270 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_SEEN_ABSOL
# 271 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
# 272 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Surprised
# 273 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 275 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_1
# 276 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 277 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playse SE_LEDGE
# 278 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Jump
# 279 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 280 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playse SE_LEDGE
# 281 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Jump
# 282 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 283 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_2
# 284 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 286 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 287 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_3
# 288 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 290 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	removeobject 7
# 291 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 292 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 293 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	releaseall
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_Text_0:
# 159 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Oh... you don't have enough room for my gift.$"

TrainerBattle1_Text::
# 50 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey, you look like a newbie! You'll be\n"
	.string "easy pickings for a veteran like me!$"

TrainerBattle1_Defeated_Text::
# 54 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "N-No way... I lost to a newbie!?$"

TrainerBattle1_PostDefeated_Text::
# 59 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Okay... I lied about being a veteran. I'm\n"
	.string "also just a newbie too.$"

TrainerBattle2_Text::
# 71 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I caught a cute Pokémon. Wanna it? It's\n"
	.string "pretty strong!$"

TrainerBattle2_Defeated_Text::
# 75 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Well shoot! Your Pokémon is cute and\nstrong too!$"

TrainerBattle2_PostDefeated_Text::
# 80 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Where'd you get your Pokémon? I'd love\n"
	.string "to get one!$"

TrainerBattle3_Text::
# 93 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokémon is really rare! You don't\n"
	.string "stand a chance!$"

TrainerBattle3_Defeated_Text::
# 97 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "How did you beat me? Your Pokémon must \n"
	.string "be even rarer!$"

TrainerBattle3_PostDefeated_Text::
# 103 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Hmmm, I guess just because a Pokémon is\n"
	.string "rare, doesn't mean it's strong...$"

TrainerBattle4_Text::
# 116 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm on a crazy winning streak right now!\n"
	.string "How'd you like to be my 10th victory?$"

TrainerBattle4_Defeated_Text::
# 120 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Whelp... Looks like we're back to zero.$"

TrainerBattle4_PostDefeated_Text::
# 125 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}You ruined my perfect record today... ):$"

ISLANDGAME_Southern_Oranna_Path_NPC1Talk::
# 146 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Have you seen any Charmander yet? I\n"
	.string "like that Pokémon.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk1::
# 171 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}You're a Pokémon Trainer, right? You\n"
	.string "could probably use this.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk2::
# 177 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I used to work part-time at the Poké\n"
	.string "Mart in Cheriport, but I got fired.\p"
	.string "{COLOR DARK_GRAY}I'm fine with it though, my manager was\n"
	.string "a real jerk anyways.$"

ISLANDGAME_Southern_Oranna_Path_SIGN_DESC::
# 190 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}{LEFT_ARROW} CHERIPORT\n"
	.string "{COLOR DARK_GRAY}CAMP PERSI {RIGHT_ARROW}$"
