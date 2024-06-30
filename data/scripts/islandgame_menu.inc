EventScript_TimeMenu_BuildMenu::
	dynmultipush TimeMenu_Text_0AM, 0
	dynmultipush TimeMenu_Text_1AM, 1
	dynmultipush TimeMenu_Text_2AM, 2
	dynmultipush TimeMenu_Text_3AM, 3
	dynmultipush TimeMenu_Text_4AM, 4
	dynmultipush TimeMenu_Text_5AM, 5
	dynmultipush TimeMenu_Text_6AM, 6
	dynmultipush TimeMenu_Text_7AM, 7
	dynmultipush TimeMenu_Text_8AM, 8
	dynmultipush TimeMenu_Text_9AM, 9
	dynmultipush TimeMenu_Text_10AM, 10
	dynmultipush TimeMenu_Text_11AM, 11
	dynmultipush TimeMenu_Text_12PM, 12
	dynmultipush TimeMenu_Text_1PM, 13
	dynmultipush TimeMenu_Text_2PM, 14
	dynmultipush TimeMenu_Text_3PM, 15
	dynmultipush TimeMenu_Text_4PM, 16
	dynmultipush TimeMenu_Text_5PM, 17
	dynmultipush TimeMenu_Text_6PM, 18
	dynmultipush TimeMenu_Text_7PM, 19
	dynmultipush TimeMenu_Text_8PM, 20
	dynmultipush TimeMenu_Text_9PM, 21
	dynmultipush TimeMenu_Text_10PM, 22
	dynmultipush TimeMenu_Text_11PM, 23
	dynmultistack 22, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	setvar VAR_0x8009, 0
	copyvar VAR_0x800A, VAR_RESULT
	setvar VAR_0x800B, 0
	setvar VAR_0x8014, 0
	callnative setTime
	dotimebasedevents
	fadescreen FADE_TO_BLACK
	buffernumberstring STR_VAR_1, VAR_RESULT
	message EventScript_TimeMenu_BuildMenu_Text_0
	delay 10
	fadescreen FADE_FROM_BLACK
	waitmessage
	waitbuttonpress
	closemessage
	return


EventScript_TimeMenu_BuildMenu_Text_0:
	.string "You have successfully changed the time\n"
	.string "to {STR_VAR_1}:00!$"

TimeMenu_Text_0AM::
	.string "0:00$"

TimeMenu_Text_1AM::
	.string "1:00$"

TimeMenu_Text_2AM::
	.string "2:00$"

TimeMenu_Text_3AM::
	.string "3:00$"

TimeMenu_Text_4AM::
	.string "4:00$"

TimeMenu_Text_5AM::
	.string "5:00$"

TimeMenu_Text_6AM::
	.string "6:00$"

TimeMenu_Text_7AM::
	.string "7:00$"

TimeMenu_Text_8AM::
	.string "8:00$"

TimeMenu_Text_9AM::
	.string "9:00$"

TimeMenu_Text_10AM::
	.string "10:00$"

TimeMenu_Text_11AM::
	.string "11:00$"

TimeMenu_Text_12PM::
	.string "12:00$"

TimeMenu_Text_1PM::
	.string "13:00$"

TimeMenu_Text_2PM::
	.string "14:00$"

TimeMenu_Text_3PM::
	.string "15:00$"

TimeMenu_Text_4PM::
	.string "16:00$"

TimeMenu_Text_5PM::
	.string "17:00$"

TimeMenu_Text_6PM::
	.string "18:00$"

TimeMenu_Text_7PM::
	.string "19:00$"

TimeMenu_Text_8PM::
	.string "20:00$"

TimeMenu_Text_9PM::
	.string "21:00$"

TimeMenu_Text_10PM::
	.string "22:00$"

TimeMenu_Text_11PM::
	.string "23:00$"
