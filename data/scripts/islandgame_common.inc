Common_QuestEmoteOnWarp::
	compare VAR_RESULT, QUEST_INACTIVE
	goto_if_eq Common_QuestEmoteOnWarp_2
	compare VAR_RESULT, QUEST_ACTIVE
	goto_if_eq Common_QuestEmoteOnWarp_3
Common_QuestEmoteOnWarp_1:
	return

Common_QuestEmoteOnWarp_2:
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
	waitmovement VAR_0x800B
	goto Common_QuestEmoteOnWarp_1

Common_QuestEmoteOnWarp_3:
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
	waitmovement VAR_0x800B
	goto Common_QuestEmoteOnWarp_1


Common_NextSubQuest::
Common_NextSubQuest_2:
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_lt Common_NextSubQuest_3
	return

Common_NextSubQuest_3:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_APPLEVINE_COUCH_POTATO, VAR_TEMP_B
	compare VAR_RESULT, FALSE
	goto_if_eq Common_NextSubQuest_6
	addvar VAR_TEMP_B, 1
	goto Common_NextSubQuest_2

Common_NextSubQuest_6:
	subquestmenu QUEST_MENU_BUFFER_QUEST_NAME, QUEST_APPLEVINE_COUCH_POTATO, VAR_TEMP_B
	return

