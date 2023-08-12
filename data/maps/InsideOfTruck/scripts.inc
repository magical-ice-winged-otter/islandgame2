InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	releaseall
	end

InsideOfTruck_EventScript_SetIntroFlagsFemale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	releaseall
	end

CheckVialy::
    pokevialgetdose
    buffernumberstring STR_VAR_1,VAR_0x8006
	msgbox MessageA, MSGBOX_SIGN
    pokevialgetsize
    buffernumberstring STR_VAR_1,VAR_0x8006
	msgbox MessageB, MSGBOX_SIGN
    return

InsideOfTruck_EventScript_MovingBox::
    additem ITEM_POKEVIAL, 1
    //pokevial VIAL_ADD,VIAL_SIZE,5
    //pokevial VIAL_REFRESH
    pokevial VIAL_UP,VIAL_SIZE,15
    call CheckVialy
    pokevial VIAL_DOWN,VIAL_DOSE,5
    call CheckVialy
    pokevial VIAL_ADD,VIAL_DOSE,7
    call CheckVialy
    pokevial VIAL_DECREASE,VIAL_SIZE,12
    call CheckVialy
    pokevial VIAL_ADD,VIAL_DOSE,20
    call CheckVialy
    givemon SPECIES_ELECTRODE, 70,0
    givemon SPECIES_GIRAFARIG, 50, 0
    //warp MAP_FALLARBOR_TOWN,0
	end

MessageA:
    .string "{STR_VAR_1} doses$"
MessageB:
    .string "{STR_VAR_1} size.$"

InsideOfTruck_Text_BoxPrintedWithMonLogo:
    .string "{STR_VAR_1} doses\n"
    .string "{STR_VAR_2} size.$"
	//.string "The box is printed with a POKéMON logo.\p"
	//.string "It's a POKéMON brand moving and\n"
	//.string "delivery service.$"

