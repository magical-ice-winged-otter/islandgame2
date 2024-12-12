ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts::
# 4 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_PKMNCENTER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_TIDALCOVE
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_Nurse::
# 11 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	waitmessage
# 14 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	waitbuttonpress
# 15 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1::
# 19 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	faceplayer
# 21 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_0, MSGBOX_YESNO
# 22 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_2
# 26 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_2
ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_1:
# 28 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_2:
# 23 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_1
	goto ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_1


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2::
# 32 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2_Text_0
# 37 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Books::
# 41 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Books_Text_0, MSGBOX_SIGN
# 43 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy::
# 47 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	lock
# 48 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	faceplayer
# 49 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TIDALCOVE_LUXBALL_GIFT, ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_2
# 67 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_2
ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_1:
# 69 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	closemessage
# 70 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_2:
# 50 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_0
# 57 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	checkitemspace ITEM_LUXURY_BALL
# 58 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_5
# 62 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	giveitem ITEM_LUXURY_BALL, 1
# 63 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	setflag FLAG_TIDALCOVE_LUXBALL_GIFT
	goto ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_1

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_5:
# 59 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_1
	goto ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_1


ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_0:
# 21 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "Yo, tell it to me straight. You think I\n"
	.string "got a chance with the nurse?$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC1_Text_1:
# 23 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
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
# 26 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "Oh... I see. Thank you for being honest.\n"
	.string "I almost made a fool out of myself.\p"
	.string "Y-Yeah, cause if you said yes, I\n"
	.string "would've definitely walked right up!$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_NPC2_Text_0:
# 34 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "Hohoho... The magazines here are great!\n"
	.string "Ruka is on the cover of all of them.\p"
	.string "Such radiant skin...Such elegant\n"
	.string "curves...$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Books_Text_0:
# 42 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "{COLOR RED}(Wow. Ruka even made a cameo in one of\n"
	.string "these comic books.)$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_0:
# 51 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "My papa works at Poe Industries, one of\n"
	.string "the biggest companies in Marya!\p"
	.string "They make lots of cool stuff. One of\n"
	.string "the things they make are Pokéballs!\p"
	.string "They gave a bunch of them to my papa,\n"
	.string "and he gave some to me!\p"
	.string "You can have one of them. My papa says\n"
	.string "sharing is caring.$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_1:
# 59 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "Aw. Your bag is full. I can't be caring.$"

ISLANDGAME_TIDALCOVE_PKMNCENTER_Interact_BallBoy_Text_2:
# 67 "data/maps/ISLANDGAME_TIDALCOVE_PKMNCENTER/scripts.pory"
	.string "When I grow up, I wanna work at Poe\n"
	.string "Industries too.$"
