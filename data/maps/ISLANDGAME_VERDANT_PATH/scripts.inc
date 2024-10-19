ISLANDGAME_VERDANT_PATH_MapScripts::
	.byte 0


ISLANDGAME_VERDANT_PATH_TrainerBattle1::
# 6 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_1, ISLANDGAME_VERDANT_PATH_TrainerBattle1_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle1_Defeated_Text
# 7 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle1_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle2::
# 28 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_2, ISLANDGAME_VERDANT_PATH_TrainerBattle2_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle2_Defeated_Text
# 29 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle2_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle3::
# 51 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_3, ISLANDGAME_VERDANT_PATH_TrainerBattle3_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle3_Defeated_Text
# 52 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle3_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle4::
# 77 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_4, ISLANDGAME_VERDANT_PATH_TrainerBattle4_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle4_Defeated_Text
# 78 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle4_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle5::
# 103 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	trainerbattle_double TRAINER_VERDANT_PATH_TRAINER_5, ISLANDGAME_VERDANT_PATH_TrainerBattle5_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle5_Defeated_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle5_NotEnoughMons
# 104 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle5_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle6::
# 136 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	trainerbattle_single TRAINER_VERDANT_PATH_TRAINER_6, ISLANDGAME_VERDANT_PATH_TrainerBattle6_Text, ISLANDGAME_VERDANT_PATH_TrainerBattle6_Defeated_Text
# 137 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_TrainerBattle6_PostDefeated_Text, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_VERDANT_PATH_EventScript_NPC1::
# 164 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	lock
# 165 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	faceplayer
# 166 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	goto_if_unset FLAG_VERDANT_PATH_NPC, ISLANDGAME_VERDANT_PATH_EventScript_NPC1_2
ISLANDGAME_VERDANT_PATH_EventScript_NPC1_1:
# 173 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_NPC1Talk2
# 174 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	release
	return

ISLANDGAME_VERDANT_PATH_EventScript_NPC1_2:
# 167 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_NPC1Talk1
# 168 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	checkitemspace ITEM_REPEL
# 169 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ISLANDGAME_VERDANT_PATH_NPC1Talk3
# 170 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	giveitem ITEM_REPEL
# 171 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	setflag FLAG_VERDANT_PATH_NPC
	goto ISLANDGAME_VERDANT_PATH_EventScript_NPC1_1


ISLANDGAME_VERDANT_PATH_EventScript_NPC2::
# 197 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	lock
# 198 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	faceplayer
# 199 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_NPC2Talk
# 200 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN1::
# 222 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	lock
# 223 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_SIGN1_DESC
# 224 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN2::
# 235 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	lock
# 236 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_SIGN2_DESC
# 237 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN3::
# 248 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	lock
# 249 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_SIGN3_DESC
# 250 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_EventScript_SIGN4::
# 261 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	lock
# 262 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	msgbox ISLANDGAME_VERDANT_PATH_SIGN4_DESC
# 263 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	release
	return


ISLANDGAME_VERDANT_PATH_TrainerBattle1_Text::
# 10 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Soar, my bird Pokémon!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle1_Defeated_Text::
# 16 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "I guess they're still not ready yet...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle1_PostDefeated_Text::
# 21 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}There's tons of different flying\n"
	.string "Pokémon around here. It's awesome!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle2_Text::
# 32 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh! I still haven't found the Pokémon I\n"
	.string "want for my team yet!\p"
	.string "{COLOR DARK_GRAY}Hey, you! I'm gonna take my frustration\n"
	.string "out in a battle, okay? Prepare to lose!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle2_Defeated_Text::
# 39 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "If only I had the Pokémon I needed...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle2_PostDefeated_Text::
# 44 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}The Pokémon I'm looking for is Yanma,\n"
	.string "but it's so hard to find one!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle3_Text::
# 55 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}I just got this shiny new rod from\n"
	.string "Arnie's! Check out what it got me!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle3_Defeated_Text::
# 61 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "Gah, looks like I couldn't reel in \n"
	.string "the win.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle3_PostDefeated_Text::
# 67 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}If you want to join in on the fishing\n"
	.string "hype, you should stop by Arnie's!\p"
	.string "{COLOR DARK_GRAY}And before you ask, no, I'm not\n"
	.string "sponsored or anything.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle4_Text::
# 81 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}After 10,000 tries and 27 days... I\n"
	.string "finally struck gold!\p"
	.string "{COLOR DARK_GRAY}Witness the fruits of my labor! Go!\n"
	.string "Magikarp!$"

ISLANDGAME_VERDANT_PATH_TrainerBattle4_Defeated_Text::
# 88 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "I don't even care that I lost. I just \n"
	.string "wanted to show my Magikarp.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle4_PostDefeated_Text::
# 94 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}The greatest virtue is patience, that's\n"
	.string "for true.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_Text::
# 107 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Mindy: Okay Mandy, this time follow MY\n"
	.string "lead!\p"
	.string "{COLOR DARK_GRAY}Mandy: Whatever...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_Defeated_Text::
# 114 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "Mindy: Ugh, how did we lose!? This is all \n"
	.string "your fault! \p"
	.string "Mandy: MY fault!?$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_PostDefeated_Text::
# 121 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Mindy: If only Mandy was actually\n"
	.string "helping me out...\p"
	.string "{COLOR DARK_GRAY}Mandy: If only there was two of me\n"
	.string "instead of Mindy...$"

ISLANDGAME_VERDANT_PATH_TrainerBattle5_NotEnoughMons::
# 129 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR RED}(I can't challenge them to a battle\n"
	.string "without at least two Pokémon...)$"

ISLANDGAME_VERDANT_PATH_TrainerBattle6_Text::
# 140 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}As a member of the upper-class, it's\n"
	.string "only natural I have elite Pokémon.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle6_Defeated_Text::
# 146 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "Hmph, perhaps this Pokémon is not as  \n"
	.string "elite as I thought.$"

ISLANDGAME_VERDANT_PATH_TrainerBattle6_PostDefeated_Text::
# 152 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}The scoutmaster at Camp Persi told me\n"
	.string "this was the most elusive Pokémon in\l"
	.string "Verdant Woods.\p"
	.string "{COLOR DARK_GRAY}Clearly, it is not worthy of its\n"
	.string "scarcity. I will be disposing of it.$"

ISLANDGAME_VERDANT_PATH_NPC1Talk1::
# 177 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Up ahead are the Verdant Woods. They're\n"
	.string "pretty dense, so this might help.$"

ISLANDGAME_VERDANT_PATH_NPC1Talk2::
# 183 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}If you use a Repel, wild Pokémon will\n"
	.string "stay away from you for a while. {COLOR DARK_GRAY}However,\l"
	.string "wild Pokémon that are a higher level\l"
	.string "than yours will still attack.$"

ISLANDGAME_VERDANT_PATH_NPC1Talk3::
# 190 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Oh dear, you don't have enough space\n"
	.string "for this.$"

ISLANDGAME_VERDANT_PATH_NPC2Talk::
# 203 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}Have you seen the old abandoned house\n"
	.string "in the Verdant Woods?\p"
	.string "{COLOR DARK_GRAY}Legend has it that long ago, it used to\n"
	.string "belong to a farmer.\p"
	.string "{COLOR DARK_GRAY}One night, the farmer found a\n"
	.string "strange-looking doll on his chair.\p"
	.string "{COLOR DARK_GRAY}Unsure of how it got there, he tried to\n"
	.string "pick it up and inspect it.\p"
	.string "{COLOR DARK_GRAY}But just as he laid his hand on it, a pair\n"
	.string "of demonic claws emerged from beneath\l"
	.string "the doll, tearing the farmer apart limb\l"
	.string "from limb before it devoured him.\p"
	.string "{COLOR DARK_GRAY}Ever since, no one's dared to enter the\n"
	.string "house. It's even been blocked up to\l"
	.string "stop people from going inside.\p"
	.string "{COLOR DARK_GRAY}People say it's just a myth, but I'd\n"
	.string "rather not find out for myself...$"

ISLANDGAME_VERDANT_PATH_SIGN1_DESC::
# 227 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}{UP_ARROW} MAPLEGROVE\n"
	.string "{COLOR DARK_GRAY}{DOWN_ARROW} CAMP PERSI$"

ISLANDGAME_VERDANT_PATH_SIGN2_DESC::
# 240 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}ARNIE'S\n"
	.string "{COLOR DARK_GRAY}Club For Fishing Fanatics!$"

ISLANDGAME_VERDANT_PATH_SIGN3_DESC::
# 253 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Repellent is advised! :)$"

ISLANDGAME_VERDANT_PATH_SIGN4_DESC::
# 266 "data/maps/ISLANDGAME_VERDANT_PATH/scripts.pory"
	.string "{COLOR DARK_GRAY}{DOWN_ARROW} VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}{UP_ARROW} MAPLEGROVE$"
