ISLANDGAME_Southern_Oranna_Path_MapScripts::
# 11 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 13 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 14 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 15 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 16 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 0
# 17 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_OnLoad
# 19 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	gettime
# 21 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 21 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 25 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_Southern_Oranna_Path_OnLoad::
# 35 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_0, 1
# 36 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto_if_set FLAG_SEEN_ABSOL, ISLANDGAME_Southern_Oranna_Path_OnLoad_1
	return

ISLANDGAME_Southern_Oranna_Path_OnLoad_1:
# 37 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
# 44 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
# 45 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle2::
# 65 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_2, TrainerBattle2_Text, TrainerBattle2_Defeated_Text
# 66 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle3::
# 87 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_3, TrainerBattle3_Text, TrainerBattle3_Defeated_Text
# 88 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle4::
# 110 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_4, TrainerBattle4_Text, TrainerBattle4_Defeated_Text
# 111 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC1::
# 138 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 139 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	faceplayer
# 140 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC1Talk
# 141 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2::
# 151 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 152 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	faceplayer
# 153 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto_if_unset FLAG_S_ORANNA_PATH_NPC, ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1:
# 163 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk2
# 165 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
FiredEmployee_End:
# 166 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2:
# 154 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk1
# 155 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	checkitemspace ITEM_POTION
# 156 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_5
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_4:
# 160 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	giveitem ITEM_POTION
# 161 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_S_ORANNA_PATH_NPC
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_5:
# 157 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_Text_0
# 158 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto FiredEmployee_End
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_4


ISLANDGAME_Southern_Oranna_Path_EventScript_SIGN::
# 183 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 184 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_SIGN_DESC
# 185 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return


# 198 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_WalkRight:
# 199 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_right
# 200 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 203 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_MiddleWalkBottom:
# 204 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_down
# 205 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerTop::
# 209 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 210 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 211 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 212 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 213 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 214 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 215 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 216 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerMiddle::
# 220 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 221 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 222 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 223 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 224 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerBottom::
# 229 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 230 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 231 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 233 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 234 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


# 237 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Surprised:
# 238 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	emote_exclamation_mark
# 239 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	face_player
# 240 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_up
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 242 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 245 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_1:
# 246 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 247 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 250 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Jump:
# 251 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	jump_right
# 252 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 255 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_2:
# 256 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 256 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 256 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 257 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 260 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_3:
# 261 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 261 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 261 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 261 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 262 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 262 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 263 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol::
# 267 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 1
# 268 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_SEEN_ABSOL
# 269 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
# 270 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Surprised
# 271 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 273 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_1
# 274 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 275 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playse SE_LEDGE
# 276 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Jump
# 277 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 278 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playse SE_LEDGE
# 279 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Jump
# 280 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 281 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_2
# 282 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 284 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 285 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_3
# 286 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 288 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	removeobject 7
# 289 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 290 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 291 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	releaseall
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_Text_0:
# 157 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Oh... you don't have enough room for my gift.$"

TrainerBattle1_Text::
# 48 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey, you look like a newbie! You'll be\n"
	.string "easy pickings for a veteran like me!$"

TrainerBattle1_Defeated_Text::
# 52 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "N-No way... I lost to a newbie!?$"

TrainerBattle1_PostDefeated_Text::
# 57 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Okay... I lied about being a veteran. I'm\n"
	.string "also just a newbie too.$"

TrainerBattle2_Text::
# 69 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I caught a cute Pokémon. Wanna it? It's\n"
	.string "pretty strong!$"

TrainerBattle2_Defeated_Text::
# 73 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Well shoot! Your Pokémon is cute and\nstrong too!$"

TrainerBattle2_PostDefeated_Text::
# 78 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Where'd you get your Pokémon? I'd love\n"
	.string "to get one!$"

TrainerBattle3_Text::
# 91 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokémon is really rare! You don't\n"
	.string "stand a chance!$"

TrainerBattle3_Defeated_Text::
# 95 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "How did you beat me? Your Pokémon must \n"
	.string "be even rarer!$"

TrainerBattle3_PostDefeated_Text::
# 101 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Hmmm, I guess just because a Pokémon is\n"
	.string "rare, doesn't mean it's strong...$"

TrainerBattle4_Text::
# 114 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm on a crazy winning streak right now!\n"
	.string "How'd you like to be my 10th victory?$"

TrainerBattle4_Defeated_Text::
# 118 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Whelp... Looks like we're back to zero.$"

TrainerBattle4_PostDefeated_Text::
# 123 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}You ruined my perfect record today... ):$"

ISLANDGAME_Southern_Oranna_Path_NPC1Talk::
# 144 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Have you seen a Chikorita yet? I like\n"
	.string "that Pokémon.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk1::
# 169 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}You're a Pokémon Trainer, right? You\n"
	.string "could probably use this.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk2::
# 175 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I used to work part-time at the Poké\n"
	.string "Mart in Cheriport, but I got fired.\p"
	.string "{COLOR DARK_GRAY}I'm fine with it though, my manager was\n"
	.string "a real jerk anyways.$"

ISLANDGAME_Southern_Oranna_Path_SIGN_DESC::
# 188 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}{LEFT_ARROW} CHERIPORT\n"
	.string "{COLOR DARK_GRAY}CAMP PERSI {RIGHT_ARROW}$"
