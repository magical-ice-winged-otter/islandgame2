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

