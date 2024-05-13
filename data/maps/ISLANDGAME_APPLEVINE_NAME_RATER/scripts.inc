ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_APPLEVINE_ITEMFINDER_RECEIVED, ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_APPLEVINE_NAME_RATER_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	removeobject 3
	return


ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract::
	lock
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2
ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1:
	closemessage
	release
	return

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_2:
	msgbox ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1
	goto ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_1


ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_0:
	.string "{COLOR RED}(It's some sort of smart speaker shaped\n"
	.string "like a Porygon2.)\p"
	.string "(It's name is apparently Subaru. Should\n"
	.string "I give it a request?)$"

ISLANDGAME_APPLEVINE_COCOS_HOUSE_DollInteract_Text_1:
	.string "> You asked if Subaru is a duck.\p"
	.string "{COLOR GREEN}Subaru: {COLOR DARK_GRAY}NO DUCK!!! AM ROBOT!!!$"
