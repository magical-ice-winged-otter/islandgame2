ISLANDGAME_TIDALCOVE_PKMNMART_MapScripts::
	.byte 0


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1::
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Goods::
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Goods_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee::
	lock
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0
	pokemart MartItems
	msgbox ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1
	closemessage
	release
	return


	.align 2
MartItems:
	.2byte ITEM_SODA_POP
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NONE

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_NPC1_Text_0:
	.string "Hmm... yes I've heard good things about\n"
	.string "these ones.$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Goods_Text_0:
	.string "It's rows upon rows of vitamins.\p"
	.string "Fairly expenseive, too.$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_0:
	.string "Welcome to the Tidalcove Mart!\n"
	.string "What can I get for you?$"

ISLANDGAME_TIDALCOVE_PKMNMART_Interact_Employee_Text_1:
	.string "Enjoy your stay in the sun!$"
