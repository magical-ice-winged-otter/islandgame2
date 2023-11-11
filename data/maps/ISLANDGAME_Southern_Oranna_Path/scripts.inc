ISLANDGAME_Southern_Oranna_Path_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_TEMP_1, 0
	return

ISLANDGAME_Southern_Oranna_Path_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_Southern_Oranna_Path_OnLoad
	.2byte 0


ISLANDGAME_Southern_Oranna_Path_OnLoad::
	setvar VAR_TEMP_0, 1
	goto_if_set FLAG_SEEN_ABSOL, ISLANDGAME_Southern_Oranna_Path_OnLoad_1
	return

ISLANDGAME_Southern_Oranna_Path_OnLoad_1:
	setvar VAR_TEMP_1, 1
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle1::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_1, TrainerBattle1_Text, TrainerBattle1_Defeated_Text
	msgbox TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle2::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_2, TrainerBattle2_Text, TrainerBattle2_Defeated_Text
	msgbox TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle3::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_3, TrainerBattle3_Text, TrainerBattle3_Defeated_Text
	msgbox TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_TrainerBattle4::
	trainerbattle_single TRAINER_S_ORANNA_PATH_TRAINER_4, TrainerBattle4_Text, TrainerBattle4_Defeated_Text
	msgbox TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC1Talk
	release
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2::
	lock
	faceplayer
	goto_if_unset FLAG_S_ORANNA_PATH_NPC, ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2
ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1:
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk2
	release
	return

ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_2:
	msgbox ISLANDGAME_Southern_Oranna_Path_NPC2Talk1
	giveitem ITEM_POTION
	setflag FLAG_S_ORANNA_PATH_NPC
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_NPC2_1


ISLANDGAME_Southern_Oranna_Path_EventScript_SIGN::
	lock
	msgbox ISLANDGAME_Southern_Oranna_Path_SIGN_DESC
	release
	return


SOP_WalkRight:
	walk_right
	step_end

SOP_MiddleWalkBottom:
	walk_down
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerTop::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
	waitmovement 0
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerMiddle::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SOP_MiddleWalkBottom
	waitmovement 0
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


ISLANDGAME_Southern_Oranna_Path_EventScript_TriggerBottom::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SOP_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	goto ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol
	return


SOP_Absol_Surprised:
	emote_exclamation_mark
	face_player
	walk_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

SOP_Absol_Run_1:
	walk_fast_right
	step_end

SOP_Absol_Jump:
	jump_right
	step_end

SOP_Absol_Run_2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SOP_Absol_Run_3:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

ISLANDGAME_Southern_Oranna_Path_EventScript_SeenAbsol::
	setvar VAR_TEMP_1, 1
	setflag FLAG_SEEN_ABSOL
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
	applymovement 9, SOP_Absol_Surprised
	waitmovement 9
	applymovement 9, SOP_Absol_Run_1
	waitmovement 9
	playse SE_LEDGE
	applymovement 9, SOP_Absol_Jump
	waitmovement 9
	playse SE_LEDGE
	applymovement 9, SOP_Absol_Jump
	waitmovement 9
	applymovement 9, SOP_Absol_Run_2
	waitmovement 9
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 9, SOP_Absol_Run_3
	waitmovement 9
	hideobjectat 9, MAP_ISLANDGAME_SOUTHERN_ORANNA_PATH
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	releaseall
	return


TrainerBattle1_Text::
	.string "{COLOR DARK_GRAY}Hey, you look like a newbie! You'll be\n"
	.string "easy pickings for a veteran like me!$"

TrainerBattle1_Defeated_Text::
	.string "N-No way... I lost to a newbie!?$"

TrainerBattle1_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Okay... I lied about being a veteran. I'm\n"
	.string "also just a newbie too.$"

TrainerBattle2_Text::
	.string "{COLOR DARK_GRAY}I caught some cute Pokémon. Wanna see\n"
	.string "them? They're pretty strong too!$"

TrainerBattle2_Defeated_Text::
	.string "Well shoot! Your Pokémon are cute and strong too!$"

TrainerBattle2_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Where'd you get that Eevee? I'd love to\n"
	.string "have one too!$"

TrainerBattle3_Text::
	.string "{COLOR DARK_GRAY}My Pokémon is really rare! You don't\n"
	.string "stand a chance!$"

TrainerBattle3_Defeated_Text::
	.string "How did you beat me? Your Pokémon must be even rarer!$"

TrainerBattle3_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}Hmmm, I guess just because a Pokémon is\n"
	.string "rare, doesn't mean it's strong...$"

TrainerBattle4_Text::
	.string "{COLOR DARK_GRAY}I'm on a crazy winning streak right now!\n"
	.string "How'd you like to be my 10th victory?$"

TrainerBattle4_Defeated_Text::
	.string "Whelp... Looks like we're back to zero.$"

TrainerBattle4_PostDefeated_Text::
	.string "{COLOR DARK_GRAY}You ruined my perfect record today... ):$"

ISLANDGAME_Southern_Oranna_Path_NPC1Talk::
	.string "{COLOR DARK_GRAY}Have you seen any Jigglypuff yet? I\n"
	.string "like that Pokémon.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk1::
	.string "{COLOR DARK_GRAY}You're a Pokémon Trainer, right? You\n"
	.string "could probably use this.$"

ISLANDGAME_Southern_Oranna_Path_NPC2Talk2::
	.string "{COLOR DARK_GRAY}I used to work part-time at the Poké\n"
	.string "Mart in Cheriport, but I got fired.\p"
	.string "{COLOR DARK_GRAY}I'm fine with it though, my manager was\n"
	.string "a real jerk anyways.$"

ISLANDGAME_Southern_Oranna_Path_SIGN_DESC::
	.string "{COLOR DARK_GRAY}<-- CHERIPORT\n"
	.string "{COLOR DARK_GRAY}CAMP PERSI -->$"
