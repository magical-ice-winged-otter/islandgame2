ISLANDGAME_Southern_Oranna_Path_MapScripts::
# 6 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 0
# 8 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_OnLoad
# 10 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	gettime
# 12 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_Southern_Oranna_Path_OnLoad::
# 26 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto_if_set FLAG_SEEN_ABSOL, ISLANDGAME_Southern_Oranna_Path_OnLoad_1
	return

ISLANDGAME_Southern_Oranna_Path_OnLoad_1:
# 28 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
# 35 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
# 36 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle2::
# 56 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_2, TrainerBattle2_Text, TrainerBattle2_Defeated_Text
# 57 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle3::
# 78 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_3, TrainerBattle3_Text, TrainerBattle3_Defeated_Text
# 79 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle4::
# 101 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_4, TrainerBattle4_Text, TrainerBattle4_Defeated_Text
# 102 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC1::
# 129 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 130 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	faceplayer
# 131 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC1Talk
# 132 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2::
# 142 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 143 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	faceplayer
# 144 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto_if_unset FLAG_S_ORANNA_PATH_NPC, ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1:
# 154 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk2
# 156 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
FiredEmployee_End:
# 157 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2:
# 145 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk1
# 146 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	checkitemspace ITEM_POTION
# 147 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_5
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_4:
# 151 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	giveitem ITEM_POTION
# 152 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_S_ORANNA_PATH_NPC
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_5:
# 148 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_Text_0
# 149 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto FiredEmployee_End
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_4


ISLANDGAME_Southern_Oranna_Path_EventScript_SIGN::
# 174 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 175 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	msgbox ISLANDGAME_Southern_Oranna_Path_SIGN_DESC
# 176 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	release
	return


# 189 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_WalkRight:
# 190 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_right
# 191 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 194 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_MiddleWalkBottom:
# 195 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_down
# 196 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerTop::
# 200 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 201 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 202 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 203 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 204 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 205 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
# 206 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 207 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerMiddle::
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
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerBottom::
# 220 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	lock
# 221 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
# 222 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 223 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 224 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 225 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


# 228 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Surprised:
# 229 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	emote_exclamation_mark
# 230 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	face_player
# 231 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_up
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 232 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	delay_16
# 233 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 236 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_1:
# 237 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 238 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 241 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Jump:
# 242 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	jump_right
# 243 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 246 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_2:
# 247 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 247 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 247 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 248 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

# 251 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
SOP_Absol_Run_3:
# 252 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 252 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 252 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 252 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_up
# 253 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 253 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	walk_fast_right
# 254 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol::
# 258 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setvar VAR_TEMP_1, 1
# 259 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	setflag FLAG_SEEN_ABSOL
# 260 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
# 261 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Surprised
# 262 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 264 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_1
# 265 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 266 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playse SE_LEDGE
# 267 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Jump
# 268 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 269 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	playse SE_LEDGE
# 270 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Jump
# 271 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 272 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_2
# 273 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 275 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 276 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement 7, SOP_Absol_Run_3
# 277 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 7
# 279 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	removeobject 7
# 280 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 281 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	waitmovement 0
# 282 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	releaseall
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_Text_0:
# 148 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Oh... you don't have enough room for my gift.$"

TrainerBattle1_Text::
# 39 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey, you look like a newbie! You'll be\n"
	.string "easy pickings for a veteran like me!$"

TrainerBattle1_Defeated_Text::
# 43 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "N-No way... I lost to a newbie!?$"

TrainerBattle1_PostDefeated_Text::
# 48 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Okay... I lied about being a veteran. I'm\n"
	.string "also just a newbie too.$"

TrainerBattle2_Text::
# 60 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I caught a cute Pokémon. Wanna it? It's\n"
	.string "pretty strong!$"

TrainerBattle2_Defeated_Text::
# 64 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Well shoot! Your Pokémon is cute and\nstrong too!$"

TrainerBattle2_PostDefeated_Text::
# 69 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Where'd you get your Pokémon? I'd love\n"
	.string "to get one!$"

TrainerBattle3_Text::
# 82 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}My Pokémon is really rare! You don't\n"
	.string "stand a chance!$"

TrainerBattle3_Defeated_Text::
# 86 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "How did you beat me? Your Pokémon must \n"
	.string "be even rarer!$"

TrainerBattle3_PostDefeated_Text::
# 92 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Hmmm, I guess just because a Pokémon is\n"
	.string "rare, doesn't mean it's strong...$"

TrainerBattle4_Text::
# 105 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I'm on a crazy winning streak right now!\n"
	.string "How'd you like to be my 10th victory?$"

TrainerBattle4_Defeated_Text::
# 109 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "Whelp... Looks like we're back to zero.$"

TrainerBattle4_PostDefeated_Text::
# 114 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}You ruined my perfect record today... ):$"

ISLANDGAME_Southern_Oranna_Path_NPC1Talk::
# 135 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}Have you seen any Charmander yet? I\n"
	.string "like that Pokémon.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk1::
# 160 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}You're a Pokémon Trainer, right? You\n"
	.string "could probably use this.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk2::
# 166 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}I used to work part-time at the Poké\n"
	.string "Mart in Cheriport, but I got fired.\p"
	.string "{COLOR DARK_GRAY}I'm fine with it though, my manager was\n"
	.string "a real jerk anyways.$"

ISLANDGAME_Southern_Oranna_Path_SIGN_DESC::
# 179 "data/maps/ISLANDGAME_Southern_Oranna_Path/scripts.pory"
	.string "{COLOR DARK_GRAY}{LEFT_ARROW} CHERIPORT\n"
	.string "{COLOR DARK_GRAY}CAMP PERSI {RIGHT_ARROW}$"
