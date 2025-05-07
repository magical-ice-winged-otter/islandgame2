ISLANDGAME_CHERIPORT_LAB_MapScripts::
# 6 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa::
# 17 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 19 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa_Text_0
# 22 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	closemessage
# 23 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Gible::
# 27 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 28 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 29 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playmoncry SPECIES_GIBLE, CRY_MODE_NORMAL
# 30 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Gible_Text_0
# 33 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	closemessage
# 34 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk::
# 40 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 41 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2
# 94 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_3
# 106 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	returnqueststate QUEST_POKEDEX_COMPLETION
# 109 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_13
# 116 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_TEMP_10, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_21
# 150 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6
# 153 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1:
# 159 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
Palm_CheckPokedex:
# 160 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7
# 163 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setvar VAR_0x8004, 1
# 164 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 165 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 166 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 167 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 168 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 169 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_8
# 174 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7:
# 185 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_17
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16:
# 196 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 90
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_25
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_24:
# 208 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 120
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_39
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_38:
# 219 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 150
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_44
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_43:
# 231 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 180
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_49
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_48:
# 242 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 210
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_54
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_53:
# 254 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 240
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_59
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_58:
# 265 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 270
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_64
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_63:
# 276 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 300
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_69
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_68:
# 287 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 330
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_74
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_73:
# 298 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 360
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_79
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_78:
# 313 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 400
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_84
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_83:
# 329 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
Palm_End:
# 330 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	closemessage
# 331 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2:
# 45 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ProfTalk_First_Text
# 46 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_PROF_GAVE_EEVEE
# 47 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 49 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_EVERSTONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, , , , , , , , , , , , , , , , , , FALSE
# 50 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 52 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ReceivedEevee_Text
# 53 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitfanfare
# 55 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 56 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_11
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_10:
# 62 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ProfTalk_Second_Text
# 64 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox Prof_Recieved_Pokedex_Text
# 66 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitfanfare
# 67 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 68 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	special SetUnlockedPokedexFlags
# 69 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 70 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	special EnableNationalPokedex
# 71 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 73 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ProfTalk_Third_Text
# 75 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 76 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_0
# 81 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	startquest QUEST_POKEDEX_COMPLETION
# 82 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_1
# 88 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setrespawn HEAL_LOCATION_CHERIPORT
# 89 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	startquest QUEST_MINTY_MEADOWS_MELISSA
# 90 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_End
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_3:
# 95 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_2
# 99 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8:
# 175 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
# 176 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_19
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_11:
# 59 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 60 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_10

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_13:
# 110 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_3
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_17:
# 186 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
# 187 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_27
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_19:
# 177 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_9
# 181 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_TM53
# 182 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_21:
# 117 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_TEMP_10
# 120 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_35
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_33:
# 130 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_32
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_31:
# 141 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6
# 144 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_25:
# 197 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
# 198 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_24

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_27:
# 188 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_10
# 192 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_NEST_BALL, 15
# 193 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_29:
# 121 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_4
# 126 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_30:
# 131 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_5
# 136 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_32:
# 130 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_AGGRON_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_30
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_31

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_35:
# 120 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_29
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_33

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_39:
# 209 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
# 210 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_38

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41:
# 199 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_11
# 204 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 205 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_24

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_44:
# 220 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
# 221 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_43

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46:
# 211 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_12
# 215 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_LEVEL_BALL, 30
# 216 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_38

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_49:
# 232 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
# 233 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_48

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51:
# 222 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_13
# 227 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 7
# 228 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_43

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_54:
# 243 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
# 244 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_53

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56:
# 234 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_14
# 238 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 45
# 239 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_48

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_59:
# 255 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
# 256 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_58

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61:
# 245 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_15
# 250 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 9
# 251 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_53

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_64:
# 266 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
# 267 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_63

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66:
# 257 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_16
# 261 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_QUICK_BALL, 60
# 262 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_58

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_69:
# 277 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
# 278 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_68

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71:
# 268 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_17
# 272 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 273 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_63

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_74:
# 288 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
# 289 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_73

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76:
# 279 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_18
# 283 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_EXP_CHARM
# 284 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_68

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_79:
# 299 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
# 300 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_78

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81:
# 290 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_19
# 294 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 295 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_73

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_84:
# 314 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_13
# 315 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_88
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_83

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86:
# 301 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_20
# 305 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 306 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_21
# 309 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_78

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_88:
# 316 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_22
# 322 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 323 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
# 324 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	completequest QUEST_PERSI_BERRY_MANIAC
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_83


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist1Talk::
# 398 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 399 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 400 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox Scientist1Talk_Text
# 401 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk::
# 405 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 406 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0
# 407 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playse SE_PIN
# 408 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, ExclaimFacePlayer
# 409 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 410 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 411 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 412 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1
# 413 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 414 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 415 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 416 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 417 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2
# 418 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 419 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 420 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_CocoTalk::
# 424 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 425 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox CocoTalk_Text
# 426 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Vigoroth::
# 447 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 448 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_VigorothTalk
# 449 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_PikaDoll::
# 457 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 458 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_PikaDollTalk
# 459 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa_Text_0:
# 20 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hiya, {PLAYER}!{PAUSE 60} You wanted\n"
	.string "to come see us before taking on Ruka?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Gible_Text_0:
# 31 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Gib-dayo! {COLOR BLUE}(The next time we fight, I'll\n"
	.string "be stronger! Believe it!)$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_0:
# 77 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}These are Pokéballs. They're\n"
	.string "a special tool that you can use to\l"
	.string "catch wild Pokémon!\p"
	.string "And with that, {PLAYER}, you're all set\n"
	.string "to begin your journey!\p"
	.string "Get out there, explore all that the\n"
	.string "isles have to offer, and aid me in\l"
	.string "completing the Maryan Pokédex!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_1:
# 83 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR DARK_GRAY}I suggest you meet up with my other\n"
	.string "student first, though.\p"
	.string "{COLOR DARK_GRAY}Her name is Melissa, and she's been\n"
	.string "helping me out for about a week or two!\p"
	.string "{COLOR DARK_GRAY}She knows her way around Oranna better\n"
	.string "than me, so she can help you navigate\l"
	.string "the island and give you some pointers!\p"
	.string "{COLOR DARK_GRAY}Melissa should be somewhere in the\n"
	.string "Minty Meadows right now. It'll be to the\l"
	.string "east of her hometown of Maplegrove!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_2:
# 96 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Melissa should be somewhere\n"
	.string "in the Minty Meadows right now.{PAUSE 30} It'll be\l"
	.string "to the east of her hometown of\l"
	.string "Maplegrove!\p"
	.string "Oh, did you want me to check on the\n"
	.string "progress of your Pokédex so far?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_3:
# 111 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Your name will be etched in\n"
	.string "Marya's history, as well as our hearts,\l"
	.string "forever, {PLAYER}.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_4:
# 122 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again! I see you and Melissa have\l"
	.string "finally met.\p"
	.string "She told me that the two of you fought\n"
	.string "a ferocious Mightyena and saved Old\l"
	.string "Man Paulie's Mareep!\p"
	.string "That must've been very frightening as\n"
	.string "two trainers just starting their\l"
	.string "journey. I'm glad you're both alright.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_5:
# 132 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again! Congrats on getting your\l"
	.string "first gym badge in the Marya League!\p"
	.string "You're growing so fast as a trainer\n"
	.string "already, I'm thoroughly impressed!\p"
	.string "Melissa's already gone ahead to Lumine\n"
	.string "Island, if you were wondering.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6:
# 142 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7:
# 161 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Let's see how you're doing with your\n"
	.string "Pokédex...$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_8:
# 170 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "It looks like you've seen a total of\n"
	.string "{STR_VAR_1} Pokémon, and caught a\l"
	.string "total of {STR_VAR_2} Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_9:
# 178 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 30 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take this Technical Machine as a\n"
	.string "little reward. It'll be very useful for\l"
	.string "catching Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_10:
# 189 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 60 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Nest Balls as a\n"
	.string "little reward!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_11:
# 200 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 90 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Rare Candies\n"
	.string "as a little reward. Each one packs\l"
	.string "enough power to instantly level your\l"
	.string "Pokémon up!\p"
	.string "Just don't try and eat one yourself.\n"
	.string "They're not very delectable to humans.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_12:
# 212 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 120\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Level Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_13:
# 223 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 150\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ability\n"
	.string "Capsules as a little reward. When given\l"
	.string "to a Pokémon, it will change their basic\l"
	.string "ability to their other possible ability,\l"
	.string "if they have another one!\p"
	.string "However, they can't be used to change a\n"
	.string "Pokémon's ability to their hidden one.\l"
	.string "You'll need another type of item to do\l"
	.string "that, perhaps one that you'll get as a\l"
	.string "later reward...$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_14:
# 235 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 180\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ultra Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_15:
# 246 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 210\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these super rare\n"
	.string "Ability Patches as a reward.\p"
	.string "By using them on a Pokémon, you'll grant\n"
	.string "them their hidden ability!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_16:
# 258 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 240\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Quick Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_17:
# 269 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 270\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chance of a “critical capture” to occur\l"
	.string "when you use any Pokéball!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_18:
# 280 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 300\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "experience your Pokémon gain!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_19:
# 291 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 330\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chances of getting a Pokémon egg from\l"
	.string "the daycare at Fresa Farms!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_20:
# 302 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 360 Pokémon\n"
	.string "now? Amazing work, {PLAYER}! You're\l"
	.string "nearing completion of the Pokédex!\l"
	.string "Here, this Master Ball was gifted to me\l"
	.string "by Poe Industries. I'm sure a seasoned\l"
	.string "trainer such as yourself will be able to\l"
	.string "make use of it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_21:
# 307 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "You're nearly there, {PLAYER}! I know\n"
	.string "you can do it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_22:
# 317 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "I cannot believe my aging eyes... You've\n"
	.string "done it! You've seen and caught all\l"
	.string "{STR_VAR_1} Pokémon, {PLAYER}!\p"
	.string "At last... my lifelong dream of\n"
	.string "completing the Pokédex has come true.\p"
	.string "I'm not quite sure what to say,\n"
	.string "{PLAYER}. I truly can't thank you\l"
	.string "enough for your help.\p"
	.string "Here, please take this as your final\n"
	.string "reward. A mysterious stranger handed it\l"
	.string "to me many years ago. He told me to give\l"
	.string "it to the world's strongest trainer, and\l"
	.string "I see no other recipient more worthy of\l"
	.string "that title than you!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0:
# 406 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Heheh...{PAUSE 60} Yeah...{PAUSE 120} H-Huh?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1:
# 412 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "I-It's not what you think! I was just\n"
	.string "doing research!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2:
# 417 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Huh? You're not the professor...{PAUSE 60} G-Go\n"
	.string "away! I'm doing grown-up stuff!$"

ProfTalk_First_Text::
# 360 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's a pleasure\n"
	.string "to finally meet you in person!\p"
	.string "{COLOR DARK_GRAY}How are you enjoying the isles so far?\n"
	.string "Hopefully the trip was smooth sailing.\p"
	.string "{COLOR DARK_GRAY}The weather will probably take some\n"
	.string "getting used to though. It's a lot more\l"
	.string "humid here than what you're used to,\l"
	.string "isn't it?\p"
	.string "{COLOR DARK_GRAY}Anyways, I bet you're itching to begin\n"
	.string "your adventure, so I'll save the small\l"
	.string "talk for later and present you with\l"
	.string "your very first companion!$"

ProfTalk_Second_Text::
# 369 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Haha, I see it's already\n"
	.string "taken a liking to you! Treat it with care\l"
	.string "and respect, and it'll do the same for\l"
	.string "you!\p"
	.string "{COLOR DARK_GRAY}Along with your new friend, I'll also be\n"
	.string "entrusting you with this Pokédex!$"

Prof_Recieved_Pokedex_Text::
# 376 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR DARK_GRAY}{PLAYER} recieved the Pokédex!$"

ProfTalk_Third_Text::
# 382 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}The Pokédex is a highly\n"
	.string "advanced piece of tech that will\l"
	.string "automatically record the data of any\l"
	.string "Pokémon you see or catch, making it an\l"
	.string "essential piece of tech to have with\l"
	.string "you while you're conducting fieldwork!\l"
	.string "{COLOR DARK_GRAY}Wahaha, isn't the power of science just\l"
	.string "amazing?\p"
	.string "{COLOR DARK_GRAY}Oh, you'll also need some of these too!$"

Scientist1Talk_Text::
# 429 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR DARK_GRAY}You kids are lucky. While you're outside\n"
	.string "traveling and exploring, I'm stuck here.\p"
	.string "{COLOR DARK_GRAY}Sorting bookshelves, writing research\n"
	.string "papers, and programming software.$"

CocoTalk_Text::
# 436 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(She seems preoccupied... I should leave\n"
	.string "her be.)$"

ReceivedEevee_Text::
# 442 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR DARK_GRAY}{PLAYER} recieved an {STR_VAR_1}!$"

ISLANDGAME_CHERIPORT_LAB_VigorothTalk::
# 452 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(It looks like the Pokémon is hard at\n"
	.string "work.)$"

ISLANDGAME_CHERIPORT_LAB_PikaDollTalk::
# 462 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(Wow! This stuffed Pikachu is a lot\n"
	.string "bigger than mine.)$"
