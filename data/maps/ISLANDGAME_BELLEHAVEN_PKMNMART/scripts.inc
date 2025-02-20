ISLANDGAME_BELLEHAVEN_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee::
# 4 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_0
# 7 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	pokemart Bellehaven_MartItems
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_1
# 9 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	closemessage
# 10 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	release
	return


	.align 2
# 13 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
Bellehaven_MartItems:
# 14 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_POKE_BALL
# 15 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 16 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 17 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 18 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 24 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 25 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

# 29 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
ISLANDGAME_BELLEHAVEN_PKMNMART_SkittyHeart:
# 30 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	emote_heart
	step_end

ISLANDGAME_BELLEHAVEN_PKMNMART_Skitty::
# 34 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	lock
# 35 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	faceplayer
# 36 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	applymovement 2, ISLANDGAME_BELLEHAVEN_PKMNMART_SkittyHeart
# 37 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 38 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	waitmoncry
	return


ISLANDGAME_BELLEHAVEN_PKMNMART_NPC1::
# 42 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_NPC1_Text_0
# 48 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_PKMNMART_NPC2::
# 53 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	faceplayer
# 55 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_NPC2_Text_0
# 58 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	closemessage
# 59 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	release
	return


ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_0:
# 6 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.string "Welcome! What would you like to buy?$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_Employee_Text_1:
# 8 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.string "Have a nice rest of your day!$"

ISLANDGAME_BELLEHAVEN_PKMNMART_NPC1_Text_0:
# 45 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.string "Unbelievable. I can't even get a pack of\n"
	.string "Poké Puffs for a reasonable price\l"
	.string "'cause of this economy.\p"
	.string "Thanks a lot, Silverwing Ding-a-lings.$"

ISLANDGAME_BELLEHAVEN_PKMNMART_NPC2_Text_0:
# 56 "data/maps/ISLANDGAME_BELLEHAVEN_PKMNMART/scripts.pory"
	.string "Ooooh the rizzory... How I wish I had a\n"
	.string "Fezanskibidi...$"
