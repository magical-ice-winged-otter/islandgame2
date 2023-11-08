ISLANDGAME_VERDANT_WOODS_MapScripts::
	.byte 0


ISLANDGAME_VERDANT_WOODS_EventScript_NPC1::
	lock
	faceplayer
	msgbox ISLANDGAME_VERDANT_WOODS_NPC1Talk
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_NPC2::
	lock
	faceplayer
	msgbox ISLANDGAME_VERDANT_WOODS_NPC2Talk
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN1::
	lock
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN1_DESC
	release
	return


ISLANDGAME_VERDANT_WOODS_EventScript_SIGN2::
	lock
	msgbox ISLANDGAME_VERDANT_WOODS_SIGN2_DESC
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
	release
	return


ISLANDGAME_VERDANT_WOODS_NPC1Talk::
	.string "{COLOR DARK_GRAY}When I was trying to find a Tepig here, I\n"
	.string "came across this HUGE bug Pokémon.\p"
	.string "{COLOR DARK_GRAY}It was blue, had big muscles, and had a\n"
	.string "giant horn on its head.\p"
	.string "{COLOR DARK_GRAY}Lucky for me, it was just passing by.\n"
	.string "There's no way I'd fight that thing!$"

ISLANDGAME_VERDANT_WOODS_NPC2Talk::
	.string "{COLOR DARK_GRAY}Hey... do you hear that screeching\n"
	.string "sound too, or is it just me?$"

ISLANDGAME_VERDANT_WOODS_SIGN1_DESC::
	.string "{COLOR DARK_GRAY}VERDANT WOODS\n"
	.string "{COLOR DARK_GRAY}Watch out for creepy crawlies!$"

ISLANDGAME_VERDANT_WOODS_SIGN2_DESC::
	.string "{COLOR DARK_GRAY}KeEp OuT stAy oUt ThiS is mY hOuSE!! gO\n"
	.string "aaWAy Go aWAY LeAve me AlOnE grAWuhgh$"
