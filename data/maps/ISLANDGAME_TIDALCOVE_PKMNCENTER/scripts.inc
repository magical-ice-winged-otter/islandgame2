ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ISLANDGAME_TIDALCOVE
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_2
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_2
ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_1:
	release
	return

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_2:
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_1
	goto ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_1


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2::
	lock
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2_Text_0
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Books::
	lock
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Books_Text_0, MSGBOX_SIGN
	release
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy::
	lock
	faceplayer
	goto_if_unset FLAG_TIDALCOVE_LUXBALL_GIFT, ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_2
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_2
ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_1:
	closemessage
	release
	return

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_2:
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_0
	checkitemspace ITEM_LUXURY_BALL
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_5
	giveitem ITEM_LUXURY_BALL, 1
	setflag FLAG_TIDALCOVE_LUXBALL_GIFT
	goto ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_1

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_5:
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_1
	goto ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_1


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_0:
	.string "Yo, tell it to me straight. You think I\n"
	.string "got a chance with the nurse?$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_1:
	.string "Awesome, that's step one complete! Now\n"
	.string "I just need the courage to confess...\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "I can't do it. I'm too scared. What if she\n"
	.string "says no?\p"
	.string "Or even worse, what if she laughs? Or\n"
	.string "says “Ew, Gross”?\p"
	.string "...I'll just stay here in the meantime.\n"
	.string "Thank you for your input though.$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_2:
	.string "Oh... I see. Thank you for being honest.\n"
	.string "I almost made a fool out of myself.\p"
	.string "Y-Yeah, cause if you said yes, I\n"
	.string "would've definitely walked right up!$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2_Text_0:
	.string "Hohoho... The magazines here are great!\n"
	.string "Ruka is on the cover of all of them.$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Books_Text_0:
	.string "{COLOR RED}(Wow. Ruka even made a cameo in one of\n"
	.string "these comic books.)$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_0:
	.string "My papa works at Strix Industries, the\n"
	.string "biggest company in Mariyama!\p"
	.string "They make lots of cool stuff. One of\n"
	.string "the things they make are Pokéballs!\p"
	.string "They gave a bunch of them to my papa,\n"
	.string "and he gave some to me!\p"
	.string "You can have one of them. My papa says\n"
	.string "sharing is caring.$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_1:
	.string "Aw. Your bag is full. I can't be caring.$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_2:
	.string "When I grow up, I wanna work at Strix\n"
	.string "Industries too.$"
