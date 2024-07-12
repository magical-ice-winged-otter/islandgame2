ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	gettime
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_3
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign::
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign::
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch::
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast::
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest::
	lock
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1::
	trainerbattle_single TRAINER_NORANNA_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2::
	trainerbattle_double TRAINER_NORANNA_2, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3::
	trainerbattle_single TRAINER_NORANNA_3, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4::
	trainerbattle_single TRAINER_NORANNA_4, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5::
	trainerbattle_single TRAINER_NORANNA_5, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6::
	trainerbattle_single TRAINER_NORANNA_6, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7::
	trainerbattle_single TRAINER_NORANNA_7, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest::
	trainerbattle_single TRAINER_NORANNA_LOWER_NPC_WEST, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0, ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1
	msgbox ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2, MSGBOX_NPC
	return


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_PUMPKABOO_AVERAGE, 18, ITEM_NONE, NUM_NATURES, 0, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_PUMPKABOO_AVERAGE, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1:
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_5:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_6:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Average_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_PUMPKABOO_LARGE, 19, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_PUMPKABOO_LARGE, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1:
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_5:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_6:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Large_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_PUMPKABOO_SMALL, 17, ITEM_NONE, NUM_NATURES, 1, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_PUMPKABOO_SMALL, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1:
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_5:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_6:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Small_1


ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super::
	lock
	faceplayer
	setflag FLAG_SMART_WILD_AI
	setcwildbattle 0, SPECIES_PUMPKABOO_SUPER, 20, ITEM_COLBUR_BERRY, NUM_NATURES, 2, 0, 0, 0, 0, 0, 0
	playmoncry SPECIES_PUMPKABOO_SUPER, CRY_MODE_ENCOUNTER
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SMART_WILD_AI
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_LOST, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3
	case B_OUTCOME_RAN, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4
	case B_OUTCOME_WON, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5
	case B_OUTCOME_CAUGHT, ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1:
	release
	return

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_3:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_4:
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_5:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1

ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_6:
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_NORTHERN_ORANNA_PATH_PumpkabooInteract_Super_1


ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_EntranceSign_Text_0:
	.string "NORTHERN ORANNA PATH\n"
	.string "{LEFT_ARROW}ROSEVALE / TIDALCOVE{RIGHT_ARROW}$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FitnessSign_Text_0:
	.string "XTREEM FITNESS AREA\n"
	.string "DO NOT TOUCH EQUIPMENT!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_Touch_Text_0:
	.string "tuch$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherEast_Text_0:
	.string "My buddy across the lake thinks he can\n"
	.string "catch more Pokémon than me!\p"
	.string "I've been fishing in this lake since I\n"
	.string "was a little Tympole. He's toast!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Interact_FisherWest_Text_0:
	.string "I challenged my mate to a fishing\n"
	.string "contest today.\p"
	.string "He doesn't know I have a super special\n"
	.string "fishing rod from Arnie's.\p"
	.string "Meanwhile he's still using his crusty old\n"
	.string "weathered rod! He's done for!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_0:
	.string "My girlfriend just broke up with me, so\n"
	.string "I'm sulking in here.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_1:
	.string "Today's just not my day...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer1_Text_2:
	.string "Whelp... Time to head back home. Some\n"
	.string "livestreams oughta cheer me up.\p"
	.string "I've been really enjoying Iono's\n"
	.string "streams recently.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_0:
	.string "Mai: Ruka is mid at best. I don't see\n"
	.string "what's so great about a 6/10.\p"
	.string "Rue: I know right? She's so overrated.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_1:
	.string "Mai: Ugh, I can't even with this right\nnow.\pRue: For real, battling is such an\neffort.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_2:
	.string "Mai: We aren't fighting you unless you\n"
	.string "got two Pokémon, dork.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer2_Text_3:
	.string "Mai: Leave us alone, dorkahauntus.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_0:
	.string "Mweheheh, I've gotta whole heap of\n"
	.string "spooky scary Pumpkaboos!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_1:
	.string "Party pooper.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer3_Text_2:
	.string "I've been tryin'ta find me a super\n"
	.string "Pumpkaboo all gosh darn day.\p"
	.string "They've gots to be hidin' somewhere\n"
	.string "here...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_0:
	.string "Hooh! Haah! Hooh! Haah! I'm in the middle\n"
	.string "of my training arc!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_1:
	.string "Looks like I still have a lot to learn.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer4_Text_2:
	.string "Just a few more training montages and\n"
	.string "filler episodes, and I'll be ready!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_0:
	.string "MOVE! MOVE! GET OUT THE WAY! GET OUT\n"
	.string "THE WAY GET OUT THE WAY$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_1:
	.string "Wow, it's a lot harder to battle while\nyou're running.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer5_Text_2:
	.string "I can't achieve Ruka status unless I\n"
	.string "run a mile every day.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_0:
	.string "Take a look at my Pokémon! Don't be shy!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_1:
	.string "Hooh. That was fun!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer6_Text_2:
	.string "I have to keep my dialogue\n"
	.string "family-friendly and generic because of\l"
	.string "my kid.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_0:
	.string "I have seen the future! You will lose!\n"
	.string "IT'S NO USE!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_1:
	.string "B-But how? This was not in my vision...$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_Trainer7_Text_2:
	.string "Could it be... that my vision was false?\n"
	.string "I will need to consult my manual.$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_0:
	.string "STAY AWAY FROM MY PUDDLE!!!$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_1:
	.string "NOOOOO MY PUDDLE$"

ISLANDGAME_NORTHERN_ORANNA_PATH_Battle_LowerNPCWest_Text_2:
	.string "...I'm still not gonna share it with you.$"
