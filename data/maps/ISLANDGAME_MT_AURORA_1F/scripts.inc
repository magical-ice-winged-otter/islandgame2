ISLANDGAME_MT_AURORA_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_ROSEVALE_STATE, 1
	goto_if_ne ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return

ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	compare VAR_ROSEVALE_STATE, 5
	goto_if_ne ISLANDGAME_MT_AURORA_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


Movement_PlayerApproach:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Movement_Surprise:
	emote_exclamation_mark
	step_end

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene::
	lock
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_0
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerApproach
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement 1, Movement_Surprise
	waitmovement 0
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_2
	msgbox ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_3
	closemessage
	trainerbattle_single TRAINER_SPECIAL_THIEF_EDEA, ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_4, ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_5, ThiefDefeated
	return


Movement_ThiefRunAway:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ThiefDefeated:
	msgbox ThiefDefeated_Text_0
	msgbox ThiefDefeated_Text_1
	msgbox ThiefDefeated_Text_2
	closemessage
	fadescreen FADE_TO_WHITE
	addobject 3
	setobjectxy 3, 15, 29
	fadescreen FADE_FROM_WHITE
	delay 30
	playmoncry SPECIES_ARTICUNO, CRY_MODE_NORMAL
	msgbox ThiefDefeated_Text_3
	applymovement 1, Movement_ThiefRunAway
	waitmovement 0
	removeobject 1
	delay 30
	fadescreen FADE_TO_WHITE
	removeobject 3
	fadescreen FADE_FROM_WHITE
	msgbox ThiefDefeated_Text_4
	msgbox ThiefDefeated_Text_5
	setvar VAR_ROSEVALE_STATE, 2
	warp MAP_ISLANDGAME_ROSEVALE, 17, 25
	return


ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}D-Darn it. I lost...$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_1:
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Pffft. That was it? You didn't\n"
	.string "even damage a single one of my\l"
	.string "Pokémon!\p"
	.string "{COLOR DARK_GRAY}And you came all this way just to stop\n"
	.string "me too. How sad. How pathetic. Ahaha!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY} Grr...\p"
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Do you have any idea how much\n"
	.string "this Marill will sell for on the black\l"
	.string "market? Not only green, but blessed\l"
	.string "with a case of Pokérus? Just get your\l"
	.string "sister a new one, bub. She'll hardly\l"
	.string "notice the difference!\p"
	.string "{COLOR DARK_GRAY}Your Pokémon though? You can keep\n"
	.string "them. I don't bother with trash.$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_2:
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Hm? And just who are you? A\n"
	.string "friend of his?\p"
	.string "{COLOR DARK_GRAY}Beat it, kid. I stole this Marill fair and\n"
	.string "square! Go get your own!\p"
	.string "$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_3:
	.string "Arthur: Please, you have to stop her! I\n"
	.string "tried my very best, but...$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_4:
	.string "{COLOR GREEN}Thief: {COLOR DARK_GRAY}Tch. If you're anything like this\n"
	.string "pushover, this should be quick.$"

ISLANDGAME_MT_AURORA_Trigger_ThiefCutscene_Text_5:
	.string "I-Impossible! Just who are you, kid!?$"

ThiefDefeated_Text_0:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}You lost! Now, give us back\n"
	.string "Marill!$"

ThiefDefeated_Text_1:
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}In your dreams! Just because I\n"
	.string "lost doesn't mean I have to return it!\p"
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Huh? B-But you have to!\p"
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}What are you gonna do, tell on me\n"
	.string "to your mommy? I'm taking this with me!$"

ThiefDefeated_Text_2:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Nggh... What are we gonna do?\p"
	.string "Wait... do you hear that?$"

ThiefDefeated_Text_3:
	.string "{COLOR GREEN}Edea: {COLOR DARK_GRAY}W-What? Articuno!?\p"
	.string "Tch... F-Fine! I'll give them back their\n"
	.string "stupid Marill!\p"
	.string "You punks got lucky this time... Next\n"
	.string "time I see you, you won't be!$"

ThiefDefeated_Text_4:
	.string "{COLOR GREEN}Arthur: {COLOR DARK_GRAY}Holy heck... was that Articuno\n"
	.string "just now?\p"
	.string "T-Thank you Articuno! We owe you one!$"

ThiefDefeated_Text_5:
	.string "Oh, and thank you too! Err... Sorry,\n"
	.string "what's your name?\p"
	.string "{PLAYER}? Well, thank you for\n"
	.string "stepping in and dealing with that thief\l"
	.string "too.\p"
	.string "We should head back. My family is\n"
	.string "probably worried sick about me...$"
