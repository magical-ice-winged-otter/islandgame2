EventScript_TimeMenu_BuildMenu::
# 8 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_0AM, 0
# 9 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_1AM, 1
# 10 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_2AM, 2
# 11 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_3AM, 3
# 12 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_4AM, 4
# 13 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_5AM, 5
# 14 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_6AM, 6
# 15 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_7AM, 7
# 16 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_8AM, 8
# 17 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_9AM, 9
# 18 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_10AM, 10
# 19 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_11AM, 11
# 20 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_12PM, 12
# 21 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_1PM, 13
# 22 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_2PM, 14
# 23 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_3PM, 15
# 24 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_4PM, 16
# 25 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_5PM, 17
# 26 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_6PM, 18
# 27 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_7PM, 19
# 28 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_8PM, 20
# 29 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_9PM, 21
# 30 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_10PM, 22
# 31 "data/scripts/islandgame_menu.pory"
	dynmultipush TimeMenu_Text_11PM, 23
# 32 "data/scripts/islandgame_menu.pory"
	dynmultistack 22, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 33 "data/scripts/islandgame_menu.pory"
	setvar VAR_0x8009, 0
# 34 "data/scripts/islandgame_menu.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 35 "data/scripts/islandgame_menu.pory"
	setvar VAR_0x800B, 0
# 36 "data/scripts/islandgame_menu.pory"
	setvar VAR_0x8014, 0
# 37 "data/scripts/islandgame_menu.pory"
	callnative setTime
# 38 "data/scripts/islandgame_menu.pory"
	dotimebasedevents
# 40 "data/scripts/islandgame_menu.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/scripts/islandgame_menu.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 42 "data/scripts/islandgame_menu.pory"
	message EventScript_TimeMenu_BuildMenu_Text_0
# 43 "data/scripts/islandgame_menu.pory"
	delay 10
# 44 "data/scripts/islandgame_menu.pory"
	fadescreen FADE_FROM_BLACK
# 46 "data/scripts/islandgame_menu.pory"
	waitmessage
# 47 "data/scripts/islandgame_menu.pory"
	waitbuttonpress
# 48 "data/scripts/islandgame_menu.pory"
	closemessage
	return


EventScript_TimeMenu_BuildMenu_Text_0:
# 42 "data/scripts/islandgame_menu.pory"
	.string "You have successfully changed the time\n"
	.string "to {STR_VAR_1}:00!$"

TimeMenu_Text_0AM::
# 52 "data/scripts/islandgame_menu.pory"
	.string "0:00$"

TimeMenu_Text_1AM::
# 56 "data/scripts/islandgame_menu.pory"
	.string "1:00$"

TimeMenu_Text_2AM::
# 60 "data/scripts/islandgame_menu.pory"
	.string "2:00$"

TimeMenu_Text_3AM::
# 64 "data/scripts/islandgame_menu.pory"
	.string "3:00$"

TimeMenu_Text_4AM::
# 68 "data/scripts/islandgame_menu.pory"
	.string "4:00$"

TimeMenu_Text_5AM::
# 72 "data/scripts/islandgame_menu.pory"
	.string "5:00$"

TimeMenu_Text_6AM::
# 76 "data/scripts/islandgame_menu.pory"
	.string "6:00$"

TimeMenu_Text_7AM::
# 80 "data/scripts/islandgame_menu.pory"
	.string "7:00$"

TimeMenu_Text_8AM::
# 84 "data/scripts/islandgame_menu.pory"
	.string "8:00$"

TimeMenu_Text_9AM::
# 88 "data/scripts/islandgame_menu.pory"
	.string "9:00$"

TimeMenu_Text_10AM::
# 92 "data/scripts/islandgame_menu.pory"
	.string "10:00$"

TimeMenu_Text_11AM::
# 96 "data/scripts/islandgame_menu.pory"
	.string "11:00$"

TimeMenu_Text_12PM::
# 100 "data/scripts/islandgame_menu.pory"
	.string "12:00$"

TimeMenu_Text_1PM::
# 104 "data/scripts/islandgame_menu.pory"
	.string "13:00$"

TimeMenu_Text_2PM::
# 108 "data/scripts/islandgame_menu.pory"
	.string "14:00$"

TimeMenu_Text_3PM::
# 112 "data/scripts/islandgame_menu.pory"
	.string "15:00$"

TimeMenu_Text_4PM::
# 116 "data/scripts/islandgame_menu.pory"
	.string "16:00$"

TimeMenu_Text_5PM::
# 120 "data/scripts/islandgame_menu.pory"
	.string "17:00$"

TimeMenu_Text_6PM::
# 124 "data/scripts/islandgame_menu.pory"
	.string "18:00$"

TimeMenu_Text_7PM::
# 128 "data/scripts/islandgame_menu.pory"
	.string "19:00$"

TimeMenu_Text_8PM::
# 132 "data/scripts/islandgame_menu.pory"
	.string "20:00$"

TimeMenu_Text_9PM::
# 136 "data/scripts/islandgame_menu.pory"
	.string "21:00$"

TimeMenu_Text_10PM::
# 140 "data/scripts/islandgame_menu.pory"
	.string "22:00$"

TimeMenu_Text_11PM::
# 144 "data/scripts/islandgame_menu.pory"
	.string "23:00$"
