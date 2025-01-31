#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_use.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "quests.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/event_objects.h"
#include "event_object_movement.h"
#include "pokemon_icon.h"

#include "random.h"

#define tPageItems      data[4]
#define tItemPcParam    data[6]

struct QuestMenuResources
{
	MainCallback savedCallback;
	u8 moveModeOrigPos;
	u8 spriteIconSlot;
	u16 oldPaletteTag;
	u8 maxShowed;
	u8 nItems;
	u8 scrollIndicatorArrowPairId;
	s16 data[3];
	u8 filterMode;
	u8 parentQuest;
	bool8 restoreCursor;
};

struct QuestMenuStaticResources
{
	MainCallback savedCallback;
	u16 scroll;
	u16 row;
	u8 initialized;
	u16 storedScrollOffset;
	u16 storedRowPosition;
};

// RAM
EWRAM_DATA static struct QuestMenuResources *sStateDataPtr = NULL;
EWRAM_DATA static u8 *sBg1TilemapBuffer = NULL;
EWRAM_DATA static struct ListMenuItem *sListMenuItems = NULL;
EWRAM_DATA static struct QuestMenuStaticResources sListMenuState = {0};
EWRAM_DATA static u8 sItemMenuIconSpriteIds[12] = {0};        // from pokefirered src/item_menu_icons.c
EWRAM_DATA static void *questNamePointer = NULL;
EWRAM_DATA static u8 **questNameArray = NULL;

// This File's Functions
void QuestMenu_Init(u8 a0, MainCallback callback);
static void MainCB(void);
static void VBlankCB(void);
static void RunSetup(void);

static bool8 SetupGraphics(void);
static bool8 LoadGraphics(void);
static void QuestMenu_InitWindows(void);
static bool8 InitBackgrounds(void);
static void InitItems(void);
static bool8 AllocateResourcesForListMenu(void);
static void AllocateMemoryForArray();
static void PlaceTopMenuScrollIndicatorArrows(void);
static void SetInitializedFlag(u8 a0);

static u8 GetCursorPosition(void);
static void SetCursorPosition(void);
static void SetScrollPosition(void);
static bool8 IfScrollIsOutOfBounds(void);
static bool8 IfRowIsOutOfBounds(void);
static void SaveScrollAndRow(s16 *data);

static void ClearModeOnStartup(void);
static u8 ManageMode(u8 action);
static u8 ToggleAlphaMode(u8 mode);
static u8 ToggleSubquestMode(u8 mode);
static u8 IncrementMode(u8 mode);
static bool8 IsSubquestMode(void);
static bool8 IsNotFilteredMode(void);
static bool8 IsAlphaMode(void);

static void BuildMenuTemplate(void);
static u8 GetModeAndGenerateList();
static u8 CountNumberListRows();
static u8 *DefineQuestOrder();
static u8 GenerateSubquestList();
static u8 GenerateList(bool8 isFiltered);
static void AssignCancelNameAndId(u8 numRow);

static u8 CountUnlockedQuests(void);
static u8 CountInactiveQuests(void);
static u8 CountActiveQuests(void);
static u8 CountRewardQuests(void);
static u8 CountCompletedQuests(void);
static u8 CountFavoriteQuests(void);

static void PopulateEmptyRow(u8 countQuest);
static void PrependQuestNumber(u8 countQuest);
static void SetFavoriteQuest(u8 countQuest);
static void PopulateQuestName(u8 countQuest);
static void PopulateSubquestName(u8 parentQuest, u8 countQuest);
static void PopulateListRowNameAndId(u8 row, u8 countQuest);
static bool8 DoesQuestHaveChildrenAndNotInactive(u16 itemId);
static void AddSubQuestButton(u8 countQuest);

static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId,
            const u8 *str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed,
            u8 colorIdx);

static void MoveCursorFunc(s32 itemIndex, bool8 onInit,
                           struct ListMenu *list);
static void PlayCursorSound(bool8 firstRun);
static void PrintDetailsForCancel();
static void GenerateAndPrintQuestDetails(s32 questId);
static void GenerateQuestLocation(s32 questId);
static void PrintQuestLocation(s32 questId);
static void GenerateQuestFlavorText(s32 questId);
static void UpdateQuestFlavorText(s32 questId);
static void PrintQuestFlavorText(s32 questId);

static bool8 UNUSED IsQuestUnlocked(s32 questId);
static bool8 IsQuestActiveState(s32 questId);
static bool8 IsQuestInactiveState(s32 questId);
static bool8 IsQuestRewardState(s32 questId);
static bool8 IsQuestCompletedState(s32 questId);
static bool8 IsSubquestCompletedState(s32 questId);

static void DetermineSpriteType(s32 questId);
static void QuestMenu_CreateSprite(u16 itemId, u8 idx, u8 spriteType);
static void ResetSpriteState(void);
static void QuestMenu_DestroySprite(u8 idx);

static void GenerateStateAndPrint(u8 windowId, u32 itemId, u8 y);
static u8 GenerateSubquestState(u8 questId);
static u8 GenerateQuestState(u8 questId);
static void PrintQuestState(u8 windowId, u8 y, u8 colorIndex);

static void GenerateAndPrintHeader(void);
static void GenerateDenominatorNumQuests(void);
static void GenerateNumeratorNumQuests(void);
static void GenerateMenuContext(void);
static void PrintNumQuests(void);
static void PrintMenuContext(void);
static void PrintTypeFilterButton(void);

static void Task_Main(u8 taskId);
static void ManageFavorites(u8 index);
static void Task_QuestMenuCleanUp(u8 taskId);
static void RestoreSavedScrollAndRow(s16 *data);
static void ResetCursorToTop(s16 *data);
static void QuestMenu_RemoveScrollIndicatorArrowPair(void);
static void EnterSubquestModeAndCleanUp(u8 taskId, s16 *data, s32 input);
static void ChangeModeAndCleanUp(u8 taskId);
static void ToggleAlphaModeAndCleanUp(u8 taskId);
static void ToggleFavoriteAndCleanUp(u8 taskId, u8 selectedQuestId);
static bool8 CheckSelectedIsCancel(u8 selectedQuestId);
static void ReturnFromSubquestAndCleanUp(u8 taskId);

static void SetGpuRegBaseForFade(void);
static void InitFadeVariables(u8 taskId, u8 blendWeight, u8 frameDelay,
                              u8 frameTimerBase, u8 delta);
static void PrepareFadeOut(u8 taskId);
static bool8 HandleFadeOut(u8 taskId);
static void PrepareFadeIn(u8 taskId);
static bool8 HandleFadeIn(u8 taskId);
static void Task_FadeOut(u8 taskId);
static void Task_FadeIn(u8 taskId);

static void Task_QuestMenuWaitFadeAndBail(u8 taskId);
static void FadeAndBail(void);
static void FreeResources(void);
static void TurnOffQuestMenu(u8 taskId);
static void Task_QuestMenuTurnOff1(u8 taskId);
static void Task_QuestMenuTurnOff2(u8 taskId);

// Tiles, palettes and tilemaps for the Quest Menu
static const u32 sQuestMenuTiles[] =
        INCBIN_U32("graphics/quest_menu/menu.4bpp.lz");
static const u32 sQuestMenuBgPals[] =
        INCBIN_U32("graphics/quest_menu/menu.gbapal.lz");
static const u32 sQuestMenuTilemap[] =
        INCBIN_U32("graphics/quest_menu/menu.bin.lz");

//Strings used for the Quest Menu
static const u8 sText_Empty[] = _("");
static const u8 sText_AllHeader[] = _("All Missions");
static const u8 sText_InactiveHeader[] = _("Inactive Missions");
static const u8 sText_ActiveHeader[] = _("Active Missions");
static const u8 sText_RewardHeader[] = _("Reward Available");
static const u8 sText_CompletedHeader[] =
      _("Completed Missions");
static const u8 sText_QuestNumberDisplay[] =
      _("{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_Unk[] = _("??????");
static const u8 sText_Active[] = _("Active");
static const u8 sText_Reward[] = _("Reward");
static const u8 sText_Complete[] = _("Done");
static const u8 sText_ShowLocation[] =
      _("Location: {STR_VAR_2}");
static const u8 sText_StartForMore[] =
      _("Start for more details.");
static const u8 sText_ReturnRecieveReward[] =
      _("Return to {STR_VAR_2}\nto recieve your reward!");
static const u8 sText_SubQuestButton[] = _(" {A_BUTTON}");
static const u8 sText_Type[] = _("{R_BUTTON}Type");
static const u8 sText_Caught[] = _("Caught");
static const u8 sText_Found[] = _("Found");
static const u8 sText_Read[] = _("Read");
static const u8 sText_Back[] = _("Back");
static const u8 sText_DotSpace[] = _(". ");
static const u8 sText_Close[] = _("Close");
static const u8 sText_ColorGreen[] = _("{COLOR}{GREEN}");
static const u8 sText_AZ[] = _(" A-Z");

//Declaration of subquest structures. Edits to subquests are made here.
#define sub_quest(i, n, d, m, s, st, t) {.id = i, .name = n, .desc = d, .map = m, .sprite = s, .spritetype = st, .type = t}

//Declaration of side quest structures. Edits to quests are made here.
#define side_quest(n, d, dd, m, s, st, sq, ns) {.name = n, .desc = d, .donedesc = dd, .map = m, .sprite = s, .spritetype = st, .subquests = sq, .numSubquests = ns}


// island-start


// Map Locations
const u8 sText_SideQuestMap_Cheriport[] = _("Cheriport");
const u8 sText_SideQuestMap_Persi[] = _("Camp Persi");
const u8 sText_SideQuestMap_VerdantWoods[] = _("Verdant Woods");
const u8 sText_SideQuestMap_Maplegrove[] = _("Maplegrove");
const u8 sText_SideQuestMap_MintyMeadows[] = _("Minty Meadows");
const u8 sText_SideQuestMap_FresaFarms[] = _("Fresa Farms");
const u8 sText_SideQuestMap_TravelersTunnel[] = _("Traveler's Tunnel");
const u8 sText_SideQuestMap_Tidalcove[] = _("Tidalcove");
const u8 sText_SideQuestMap_Rosevale[] = _("Rosevale");
const u8 sText_SideQuestMap_MtAurora[] = _("Mt. Aurora");
const u8 sText_SideQuestMap_Applevine[] = _("Applevine");
const u8 sText_SideQuestMap_RockyPath[] = _("Rocky Path");
const u8 sText_SideQuestMap_Aetheria[] = _("Aetheria");
const u8 sText_SideQuestMap_Cantalo[] = _("Cantalo");
const u8 sText_SideQuestMap_Amberidge[] = _("Amberidge");
const u8 sText_SideQuestMap_Unknown[] = _("Marya");


// Pokedex Quest
const u8 sText_SideQuestName_PokedexCompletion[] = _("<!> Gotta Catch 'Em All!");
const u8 sText_SideQuestDesc_PokedexCompletion[] = _("You know the deal. Complete the\nPokédex for Professor Palm!");
const u8 sText_SideQuestDoneDesc_PokedexCompletion[] = _("Thanks for playing! :)");

const u8 sText_SubQuest_PokedexMilestone1_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone1_Desc[] = _("You've completed 30 entries!");

const u8 sText_SubQuest_PokedexMilestone2_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone2_Desc[] = _("You've completed 60 entries!");

const u8 sText_SubQuest_PokedexMilestone3_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone3_Desc[] = _("You've completed 90 entries!");

const u8 sText_SubQuest_PokedexMilestone4_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone4_Desc[] = _("You've completed 120 entries!");

const u8 sText_SubQuest_PokedexMilestone5_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone5_Desc[] = _("You've completed 150 entries!");

const u8 sText_SubQuest_PokedexMilestone6_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone6_Desc[] = _("You've completed 180 entries!");

const u8 sText_SubQuest_PokedexMilestone7_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone7_Desc[] = _("You've completed 210 entries!");

const u8 sText_SubQuest_PokedexMilestone8_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone8_Desc[] = _("You've completed 240 entries!");

const u8 sText_SubQuest_PokedexMilestone9_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone9_Desc[] = _("You've completed 270 entries!");

const u8 sText_SubQuest_PokedexMilestone10_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone10_Desc[] = _("You've completed 300 entries!");

const u8 sText_SubQuest_PokedexMilestone11_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone11_Desc[] = _("You've completed 330 entries!");

const u8 sText_SubQuest_PokedexMilestone12_Name[] = _("Milestone Reached!");
const u8 sText_SubQuest_PokedexMilestone12_Desc[] = _("You've completed 360 entries!");

const u8 sText_SubQuest_PokedexMilestone13_Name[] = _("Pokédex Complete!");
const u8 sText_SubQuest_PokedexMilestone13_Desc[] = _("You've completed ALL entries!");


// Minty Meadows Melissa Quest
const u8 sText_SideQuestName_MintyMeadowsMelissa[] = _("<!> The Journey Begins!");
const u8 sText_SideQuestDesc_MintyMeadowsMelissa[] = _("Meet up with Professor Palm's\nassistant, Melissa!");
const u8 sText_SideQuestDoneDesc_MintyMeadowsMelissa[] = _("You helped rescue Old Man\nPaulie's Mareep!");

// Persi Favorite Card Quest
const u8 sText_SideQuestName_PersiFavoriteCard[] = _("The Ultra Rare Charizard");
const u8 sText_SideQuestDesc_PersiFavoriteCard[] = _("A little camper has lost his\nfavorite trading card!");
const u8 sText_SideQuestDoneDesc_PersiFavoriteCard[] = _("I'm just saying, that card\nis going for hundreds online.");


// Berry Maniac Quest
const u8 sText_SideQuestName_PersiBerryManiac[] = _("Berry Hunting");
const u8 sText_SideQuestDesc_PersiBerryManiac[] = _("The Berry Maniac from Camp Persi\nyearns for rare berries!");
const u8 sText_SideQuestDoneDesc_PersiBerryManiac[] = _("You've aided the Berry Maniac\n in achieving his full power...");

const u8 sText_SubQuest_PersiBerryManiac1_Name[] = _("Liechi Berry");
const u8 sText_SubQuest_PersiBerryManiac1_Desc[] = _("You found and gave a Liechi Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac2_Name[] = _("Ganlon Berry");
const u8 sText_SubQuest_PersiBerryManiac2_Desc[] = _("You found and gave a Ganlon Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac3_Name[] = _("Salac Berry");
const u8 sText_SubQuest_PersiBerryManiac3_Desc[] = _("You found and gave a Salac Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac4_Name[] = _("Petaya Berry");
const u8 sText_SubQuest_PersiBerryManiac4_Desc[] = _("You found and gave a Petaya Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac5_Name[] = _("Apicot Berry");
const u8 sText_SubQuest_PersiBerryManiac5_Desc[] = _("You found and gave an Apicot Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac6_Name[] = _("Kee Berry");
const u8 sText_SubQuest_PersiBerryManiac6_Desc[] = _("You found and gave a Kee Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac7_Name[] = _("Maranga Berry");
const u8 sText_SubQuest_PersiBerryManiac7_Desc[] = _("You found and gave a Maranga Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac8_Name[] = _("Lansat Berry");
const u8 sText_SubQuest_PersiBerryManiac8_Desc[] = _("You found and gave a Lansat Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac9_Name[] = _("Enigma Berry");
const u8 sText_SubQuest_PersiBerryManiac9_Desc[] = _("You found and gave an Enigma Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac10_Name[] = _("Micle Berry");
const u8 sText_SubQuest_PersiBerryManiac10_Desc[] = _("You found and gave a Micle Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac11_Name[] = _("Custap Berry");
const u8 sText_SubQuest_PersiBerryManiac11_Desc[] = _("You found and gave a Custap Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac12_Name[] = _("Jaboca Berry");
const u8 sText_SubQuest_PersiBerryManiac12_Desc[] = _("You found and gave a Jaboca Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac13_Name[] = _("Rowap Berry");
const u8 sText_SubQuest_PersiBerryManiac13_Desc[] = _("You found and gave a Rowap Berry\nto the Berry Maniac.");

const u8 sText_SubQuest_PersiBerryManiac14_Name[] = _("Starf Berry");
const u8 sText_SubQuest_PersiBerryManiac14_Desc[] = _("You found and gave a Starf Berry\nto the Berry Maniac.");


// Verdant Forest Pokemon Quest
// const u8 sText_SideQuestName_VerdantForestSkitty[] = _("Possessed Girl");
// const u8 sText_SideQuestDesc_VerdantForestSkitty[] = _("A girl in the Verdant Forest seems strange..?");
// const u8 sText_SideQuestDoneDesc_VerdantForestSkitty[] = _("You rescued the possessed girl in\nVerdant Woods! At least for now...");

// Maplegrove Lovers Quest
const u8 sText_SideQuestName_MaplegroveLovers[] = _("A Star-crossed Lover");
const u8 sText_SideQuestDesc_MaplegroveLovers[] = _("Deliver Roman's love letter\nto Julie in Applevine!");
const u8 sText_SideQuestDoneDesc_MaplegroveLovers[] = _("You've succeeded in being\n a messenger of love!");

// Marya Gym Challenge Quest
const u8 sText_SideQuestName_MaryaGymChallenge[] = _("<!> The Marya League");
const u8 sText_SideQuestDesc_MaryaGymChallenge[] = _("Acquire the gym badges of Oranna,\nLumine, and Minerva Island!");
const u8 sText_SideQuestDoneDesc_MaryaGymChallenge[] = _("All that's left is the\nFestival Tournament...");

const u8 sText_SubQuest_MaryaGymChallenge1_Name[] = _("Tidalcove Badge");
const u8 sText_SubQuest_MaryaGymChallenge1_Desc[] = _("“Your Pokémon were cool as a\nCryogonal! Stay frosty!” -Ruka");

const u8 sText_SubQuest_MaryaGymChallenge2_Name[] = _("Cantalo Badge");
const u8 sText_SubQuest_MaryaGymChallenge2_Desc[] = _("“Your passion for battle is\nan inspiration.” -Avi");

const u8 sText_SubQuest_MaryaGymChallenge3_Name[] = _("Amberidge Badge");
const u8 sText_SubQuest_MaryaGymChallenge3_Desc[] = _("“Keep that win streak hot hot hot!” -Javier");

// Torchic Egg Quest
const u8 sText_SideQuestName_FresaFarmsTorchicEgg[] = _("Parenting 101");
const u8 sText_SideQuestDesc_FresaFarmsTorchicEgg[] = _("Paulie from Fresa Farms has\nchosen you to raise this egg!");
const u8 sText_SideQuestDoneDesc_FresaFarmsTorchicEgg[] = _("They just grow up so fast,\n don't they?");

// Lost Azurill Quest
const u8 sText_SideQuestName_RosevaleAzurillRescue[] = _("<!> Rescue Mission");
const u8 sText_SideQuestDesc_RosevaleAzurillRescue[] = _("A little girl's Azurill has been stolen!\nThe thief is somewhere in Mt. Aurora...");
const u8 sText_SideQuestDoneDesc_RosevaleAzurillRescue[] = _("You successfully rescued Azurill,\n with some help from Articuno!");

// Aetheria Melissa Quest
const u8 sText_SideQuestName_AetheriaMelissa[] = _("<!> The City That Never Sleeps");
const u8 sText_SideQuestDesc_AetheriaMelissa[] = _("Melissa wants to meet up in Aetheria!");
const u8 sText_SideQuestDoneDesc_AetheriaMelissa[] = _("Looks like Edea got away this time...");

// Couch Potato Quest
const u8 sText_SideQuestName_APPLEVINE_COUCH_POTATO[] = _("Part-Time Job");
const u8 sText_SideQuestDesc_APPLEVINE_COUCH_POTATO[] = _("You probably weren't expecting to get\none.");
const u8 sText_SideQuestDoneDesc_APPLEVINE_COUCH_POTATO[] = _("Looks like you've been laid off.\nAt least you were compensated...?");

const u8 sText_SubQuest_CouchPotato1_Name[] 	  = _("Delivery Complete!");
const u8 sText_SubQuest_CouchPotato1_Desc[] 	  = _("You know Sweet Hearts have a serving\nsize of two people, right?");

const u8 sText_SubQuest_CouchPotato2_Name[] 	  = _("Delivery Complete!");
const u8 sText_SubQuest_CouchPotato2_Desc[] 	  = _("They should just set up a scout camp\nat this guy's house...");

const u8 sText_SubQuest_CouchPotato3_Name[] 	  = _("Delivery Complete!");
const u8 sText_SubQuest_CouchPotato3_Desc[] 	  = _("Pancakes are just dessert pizzas.");

const u8 sText_SubQuest_CouchPotato4_Name[] 	  = _("Delivery Complete!");
const u8 sText_SubQuest_CouchPotato4_Desc[] 	  = _("Imagine if you brought him a rice\nball instead.");

const u8 sText_SubQuest_CouchPotato5_Name[] 	  = _("Delivery Complete!");
const u8 sText_SubQuest_CouchPotato5_Desc[] 	  = _("Man, Sera's fans are down bad.");

// PokeVial Nurse Quest 
const u8 sText_SideQuestName_ROCKY_PATH_NURSE[] = _("The Missing Ingredient");
const u8 sText_SideQuestDesc_ROCKY_PATH_NURSE[] = _("Nurse Joy needs a Balm Mushroom for\nher newest medicinal breakthrough!");
const u8 sText_SideQuestDoneDesc_ROCKY_PATH_NURSE[] = _("You've aided Nurse Joy\nin creating the PokéVial!");


// MissingNo Quest
const u8 sText_SideQuestName_MissingNo[] = _("<?> À GlitŒh エñ tHœ MあtrÏx");
const u8 sText_SideQuestDesc_MissingNo[] = _("▶▶WARNいNG▶▶ アN ANおMAL¥ HAS BえEN\nD♀TÊCTéD WITH♂N YöUr $àVê FイLE!");
const u8 sText_SideQuestDoneDesc_MissingNo[] = _("01000100 01010010 01000101 01000001 01001101");

const u8 sText_SubQuest_MissingNo1_Name[] = _("けつばん-01");
const u8 sText_SubQuest_MissingNo1_Desc[] = _("01010111");

const u8 sText_SubQuest_MissingNo2_Name[] = _("けつばん-02");
const u8 sText_SubQuest_MissingNo2_Desc[] = _("01000001");

const u8 sText_SubQuest_MissingNo3_Name[] = _("けつばん-03");
const u8 sText_SubQuest_MissingNo3_Desc[] = _("01001011");

const u8 sText_SubQuest_MissingNo4_Name[] = _("けつばん-04");
const u8 sText_SubQuest_MissingNo4_Desc[] = _("01000101");

const u8 sText_SubQuest_MissingNo5_Name[] = _("けつばん-05");
const u8 sText_SubQuest_MissingNo5_Desc[] = _("01010101");

const u8 sText_SubQuest_MissingNo6_Name[] = _("けつばん-06");
const u8 sText_SubQuest_MissingNo6_Desc[] = _("01010000");

static const struct SubQuest sSubQuests_PokedexMilestones[SUB_QUEST_COUNT_POKEDEX_MILESTONE] = 
{
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_1,
		sText_SubQuest_PokedexMilestone1_Name,
		sText_SubQuest_PokedexMilestone1_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_TM53,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_2,
		sText_SubQuest_PokedexMilestone2_Name,
		sText_SubQuest_PokedexMilestone2_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_NEST_BALL,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_3,
		sText_SubQuest_PokedexMilestone3_Name,
		sText_SubQuest_PokedexMilestone3_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_RARE_CANDY,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_4,
		sText_SubQuest_PokedexMilestone4_Name,
		sText_SubQuest_PokedexMilestone4_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_LEVEL_BALL,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_5,
		sText_SubQuest_PokedexMilestone5_Name,
		sText_SubQuest_PokedexMilestone5_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_ABILITY_CAPSULE,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_6,
		sText_SubQuest_PokedexMilestone6_Name,
		sText_SubQuest_PokedexMilestone6_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_ULTRA_BALL,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_7,
		sText_SubQuest_PokedexMilestone7_Name,
		sText_SubQuest_PokedexMilestone7_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_ABILITY_PATCH,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_8,
		sText_SubQuest_PokedexMilestone8_Name,
		sText_SubQuest_PokedexMilestone8_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_QUICK_BALL,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_9,
		sText_SubQuest_PokedexMilestone9_Name,
		sText_SubQuest_PokedexMilestone9_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_CATCHING_CHARM,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_10,
		sText_SubQuest_PokedexMilestone10_Name,
		sText_SubQuest_PokedexMilestone10_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_EXP_CHARM,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_11,
		sText_SubQuest_PokedexMilestone11_Name,
		sText_SubQuest_PokedexMilestone11_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_OVAL_CHARM,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_12,
		sText_SubQuest_PokedexMilestone12_Name,
		sText_SubQuest_PokedexMilestone12_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_MASTER_BALL,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_POKEDEX_MILESTONE_13,
		sText_SubQuest_PokedexMilestone13_Name,
		sText_SubQuest_PokedexMilestone13_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_AURORA_TICKET,
		ITEM,
		sText_Complete
	),
};

static const struct SubQuest sSubQuests_PersiBerryManiac[SUB_QUEST_COUNT_PERSI_BERRY] =
{
	sub_quest(
		SUB_QUEST_PERSI_BERRY_1,
		sText_SubQuest_PersiBerryManiac1_Name,
		sText_SubQuest_PersiBerryManiac1_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_LIECHI_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_2,
		sText_SubQuest_PersiBerryManiac2_Name,
		sText_SubQuest_PersiBerryManiac2_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_GANLON_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_3,
		sText_SubQuest_PersiBerryManiac3_Name,
		sText_SubQuest_PersiBerryManiac3_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_SALAC_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_4,
		sText_SubQuest_PersiBerryManiac4_Name,
		sText_SubQuest_PersiBerryManiac4_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_PETAYA_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_5,
		sText_SubQuest_PersiBerryManiac5_Name,
		sText_SubQuest_PersiBerryManiac5_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_APICOT_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_6,
		sText_SubQuest_PersiBerryManiac6_Name,
		sText_SubQuest_PersiBerryManiac6_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_KEE_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_7,
		sText_SubQuest_PersiBerryManiac7_Name,
		sText_SubQuest_PersiBerryManiac7_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_MARANGA_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_8,
		sText_SubQuest_PersiBerryManiac8_Name,
		sText_SubQuest_PersiBerryManiac8_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_LANSAT_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_9,
		sText_SubQuest_PersiBerryManiac9_Name,
		sText_SubQuest_PersiBerryManiac9_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_ENIGMA_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_10,
		sText_SubQuest_PersiBerryManiac10_Name,
		sText_SubQuest_PersiBerryManiac10_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_MICLE_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_11,
		sText_SubQuest_PersiBerryManiac11_Name,
		sText_SubQuest_PersiBerryManiac11_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_CUSTAP_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_12,
		sText_SubQuest_PersiBerryManiac12_Name,
		sText_SubQuest_PersiBerryManiac12_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_JABOCA_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_13,
		sText_SubQuest_PersiBerryManiac13_Name,
		sText_SubQuest_PersiBerryManiac13_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_ROWAP_BERRY,
		ITEM,
		sText_Complete
	),

	sub_quest(
		SUB_QUEST_PERSI_BERRY_14,
		sText_SubQuest_PersiBerryManiac14_Name,
		sText_SubQuest_PersiBerryManiac14_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_STARF_BERRY,
		ITEM,
		sText_Complete
	),

};


static const struct SubQuest sSubQuests_MaryaGymChallenge[SUB_QUEST_COUNT_GYM_CHALLENGE] = 
{
	sub_quest(
		SUB_QUEST_MARYA_GYM_CHALLENGE_1,
		sText_SubQuest_MaryaGymChallenge1_Name,
		sText_SubQuest_MaryaGymChallenge1_Desc,
		sText_SideQuestMap_Tidalcove,
		OBJ_EVENT_GFX_RUKA, 
		OBJECT,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MARYA_GYM_CHALLENGE_2,
		sText_SubQuest_MaryaGymChallenge2_Name,
		sText_SubQuest_MaryaGymChallenge2_Desc,
		sText_SideQuestMap_Cantalo,
		OBJ_EVENT_GFX_MAN_4,
		OBJECT,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MARYA_GYM_CHALLENGE_3,
		sText_SubQuest_MaryaGymChallenge3_Name,
		sText_SubQuest_MaryaGymChallenge3_Desc,
		sText_SideQuestMap_Amberidge,
		OBJ_EVENT_GFX_MAN_5,
		OBJECT,
		sText_Complete
	),
};

static const struct SubQuest sSubQuests_ApplevineCouchPotato[SUB_QUEST_COUNT_COUCH_POTATO] = 
{
	sub_quest(
		SUB_QUEST_COUCH_POTATO_1,
		sText_SubQuest_CouchPotato1_Name,
		sText_SubQuest_CouchPotato1_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_SWEET_HEART,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_COUCH_POTATO_2,
		sText_SubQuest_CouchPotato2_Name,
		sText_SubQuest_CouchPotato2_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_RAGE_CANDY_BAR,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_COUCH_POTATO_3,
		sText_SubQuest_CouchPotato3_Name,
		sText_SubQuest_CouchPotato3_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_LUMIOSE_GALETTE,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_COUCH_POTATO_4,
		sText_SubQuest_CouchPotato4_Name,
		sText_SubQuest_CouchPotato4_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_BIG_MALASADA,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_COUCH_POTATO_5,
		sText_SubQuest_CouchPotato5_Name,
		sText_SubQuest_CouchPotato5_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_PEWTER_CRUNCHIES,
		ITEM,
		sText_Complete
	),
};

static const struct SubQuest sSubQuests_MissingNo[SUB_QUEST_COUNT_MISSINGNO] = 
{
	sub_quest(
		SUB_QUEST_MISSINGNO_1,
		sText_SubQuest_MissingNo1_Name,
		sText_SubQuest_MissingNo1_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_ISLANDGAME_STRANGE_DISC,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MISSINGNO_2,
		sText_SubQuest_MissingNo2_Name,
		sText_SubQuest_MissingNo2_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_TM05,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MISSINGNO_3,
		sText_SubQuest_MissingNo3_Name,
		sText_SubQuest_MissingNo3_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_TM05,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MISSINGNO_4,
		sText_SubQuest_MissingNo4_Name,
		sText_SubQuest_MissingNo4_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_TM05,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MISSINGNO_5,
		sText_SubQuest_MissingNo5_Name,
		sText_SubQuest_MissingNo5_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_TM05,
		ITEM,
		sText_Complete
	),
	sub_quest(
		SUB_QUEST_MISSINGNO_6,
		sText_SubQuest_MissingNo6_Name,
		sText_SubQuest_MissingNo6_Desc,
		sText_SideQuestMap_Unknown,
		ITEM_TM05,
		ITEM,
		sText_Complete
	),
};

static const struct SideQuest sSideQuests[QUEST_COUNT] =
{
	[QUEST_POKEDEX_COMPLETION] = side_quest(
	      sText_SideQuestName_PokedexCompletion,
	      sText_SideQuestDesc_PokedexCompletion,
	      sText_SideQuestDoneDesc_PokedexCompletion,
	      sText_SideQuestMap_Cheriport,
	      OBJ_EVENT_GFX_PALM, 
	      OBJECT,
	      sSubQuests_PokedexMilestones,
		  SUB_QUEST_COUNT_POKEDEX_MILESTONE
	),
	[QUEST_MINTY_MEADOWS_MELISSA] = side_quest(
	      sText_SideQuestName_MintyMeadowsMelissa,
	      sText_SideQuestDesc_MintyMeadowsMelissa,
	      sText_SideQuestDoneDesc_MintyMeadowsMelissa,
	      sText_SideQuestMap_MintyMeadows,
	      OBJ_EVENT_GFX_MELISSA, 
	      OBJECT,
	      NULL,
	      0
	),
	[QUEST_PERSI_FAVORITE_CARD] = side_quest(
	      sText_SideQuestName_PersiFavoriteCard,
	      sText_SideQuestDesc_PersiFavoriteCard,
	      sText_SideQuestDoneDesc_PersiFavoriteCard,
	      sText_SideQuestMap_Persi,
	      ITEM_ISLANDGAME_TRADING_CARD, 
	      ITEM,
	      NULL,
	      0
	),
	[QUEST_PERSI_BERRY_MANIAC] = side_quest(
	      sText_SideQuestName_PersiBerryManiac,
	      sText_SideQuestDesc_PersiBerryManiac,
	      sText_SideQuestDoneDesc_PersiBerryManiac,
	      sText_SideQuestMap_Persi,
	      OBJ_EVENT_GFX_BARD, 
	      OBJECT,
	      sSubQuests_PersiBerryManiac,
		  SUB_QUEST_COUNT_PERSI_BERRY
	),
	// [QUEST_VERDANT_FOREST_SKITTY] = side_quest(
	// 	sText_SideQuestName_VerdantForestSkitty,
	// 	sText_SideQuestDesc_VerdantForestSkitty,
	// 	sText_SideQuestDoneDesc_VerdantForestSkitty,
	// 	sText_SideQuestMap_VerdantWoods,
	// 	OBJ_EVENT_GFX_GIRL_2,
	// 	OBJECT,
	// 	NULL,
	// 		0
	// ),
	[QUEST_MAPLEGROVE_LOVERS] = side_quest(
	      sText_SideQuestName_MaplegroveLovers,
	      sText_SideQuestDesc_MaplegroveLovers,
	      sText_SideQuestDoneDesc_MaplegroveLovers,
	      sText_SideQuestMap_Maplegrove,
	      ITEM_ISLANDGAME_ROMANS_LETTER, 
	      ITEM,
	      NULL,
              0 
	),
	[QUEST_MARYA_GYM_CHALLENGE] = side_quest(
	      sText_SideQuestName_MaryaGymChallenge,
	      sText_SideQuestDesc_MaryaGymChallenge,
	      sText_SideQuestDoneDesc_MaryaGymChallenge,
	      sText_SideQuestMap_Unknown,
	      ITEM_POKE_BALL, 
	      ITEM,
	      sSubQuests_MaryaGymChallenge,
		  SUB_QUEST_COUNT_GYM_CHALLENGE
	),
	[QUEST_FRESA_FARMS_TORCHIC_EGG] = side_quest(
	      sText_SideQuestName_FresaFarmsTorchicEgg,
	      sText_SideQuestDesc_FresaFarmsTorchicEgg,
	      sText_SideQuestDoneDesc_FresaFarmsTorchicEgg,
	      sText_SideQuestMap_FresaFarms,
	      ITEM_LUCKY_EGG, 
	      ITEM,
	      NULL,
              0 
	),
	[QUEST_ROSEVALE_RESCUE] = side_quest(
	      sText_SideQuestName_RosevaleAzurillRescue,
	      sText_SideQuestDesc_RosevaleAzurillRescue,
	      sText_SideQuestDoneDesc_RosevaleAzurillRescue,
	      sText_SideQuestMap_Rosevale,
	      SPECIES_AZURILL, 
	      PKMN,
	      NULL,
              0 
	),
	[QUEST_AETHERIA_MELISSA] = side_quest(
	      sText_SideQuestName_AetheriaMelissa,
	      sText_SideQuestDesc_AetheriaMelissa,
	      sText_SideQuestDoneDesc_AetheriaMelissa,
	      sText_SideQuestMap_Aetheria,
	      OBJ_EVENT_GFX_MELISSA, 
	      OBJECT,
	      NULL,
	      0
	),
	[QUEST_APPLEVINE_COUCH_POTATO] = side_quest(
	      sText_SideQuestName_APPLEVINE_COUCH_POTATO,
	      sText_SideQuestDesc_APPLEVINE_COUCH_POTATO,
	      sText_SideQuestDoneDesc_APPLEVINE_COUCH_POTATO,
	      sText_SideQuestMap_Applevine,
	      ITEM_LEFTOVERS, 
	      ITEM,
	      sSubQuests_ApplevineCouchPotato,
          SUB_QUEST_COUNT_COUCH_POTATO 
	),
	[QUEST_ROCKY_PATH_NURSE] = side_quest(
	      sText_SideQuestName_ROCKY_PATH_NURSE,
	      sText_SideQuestDesc_ROCKY_PATH_NURSE,
	      sText_SideQuestDoneDesc_ROCKY_PATH_NURSE,
	      sText_SideQuestMap_RockyPath,
	      ITEM_POKEVIAL, 
	      ITEM,
		  NULL,
		  	   0
	),
	[QUEST_MISSINGNO] = side_quest(
	      sText_SideQuestName_MissingNo,
	      sText_SideQuestDesc_MissingNo,
	      sText_SideQuestDoneDesc_MissingNo,
	      sText_SideQuestMap_Unknown,
	      ITEM_ISLANDGAME_STRANGE_DISC,
	      ITEM,
	      sSubQuests_MissingNo,
	      SUB_QUEST_COUNT_MISSINGNO
	),
};

//BG layer defintions
static const struct BgTemplate sQuestMenuBgTemplates[2] =
{
	{
		//All text and content is loaded to this window
		.bg = 0,
		.charBaseIndex = 0,
		.mapBaseIndex = 31,
		.priority = 1
	},
	{
		///Backgrounds and UI elements are loaded to this window
		.bg = 1,
		.charBaseIndex = 3,
		.mapBaseIndex = 30,
		.priority = 2
	}
};

//Window definitions
static const struct WindowTemplate sQuestMenuHeaderWindowTemplates[] =
{
	{
		//0: Content window
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 2,
		.width = 30,
		.height = 8,
		.paletteNum = 15,
		.baseBlock = 1
	},
	{
		//1: Footer window
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 12,
		.width = 30,
		.height = 12,
		.paletteNum = 15,
		.baseBlock = 361
	},
	{
		// 2: Header window
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 0,
		.width = 30,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 721
	},
	DUMMY_WIN_TEMPLATE
};

//Font color combinations for printed text
static const u8 sQuestMenuWindowFontColors[][4] =
{
	{
		//Header of Quest Menu
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_DARK_GRAY,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Reward state progress indicator
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_RED,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Done state progress indicator
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_GREEN,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Active state progress indicator
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_BLUE,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Footer flavor text
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_WHITE,
		TEXT_COLOR_TRANSPARENT
	},
};

//Functions begin here

//ported from firered by ghoulslash
void QuestMenu_Init(u8 a0, MainCallback callback)
{
	u8 i;

	if (a0 >= 2)
	{
		SetMainCallback2(callback);
		return;
	}

	if ((sStateDataPtr = Alloc(sizeof(struct QuestMenuResources))) == NULL)
	{
		SetMainCallback2(callback);
		return;
	}

	if (a0 != 1)
	{
		sListMenuState.savedCallback = callback;
		sListMenuState.scroll = sListMenuState.row = 0;
	}

	sStateDataPtr->moveModeOrigPos = 0xFF;
	sStateDataPtr->spriteIconSlot = 0;
	sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	sStateDataPtr->savedCallback = 0;
	for (i = 0; i < 3; i++)
	{
		sStateDataPtr->data[i] = 0;
	}

	SetMainCallback2(RunSetup);
}

static void MainCB(void)
{
	RunTasks();
	AnimateSprites();
	BuildOamBuffer();
	DoScheduledBgTilemapCopiesToVram();
	UpdatePaletteFade();
}

static void VBlankCB(void)
{
	LoadOam();
	ProcessSpriteCopyRequests();
	TransferPlttBuffer();
}

static void RunSetup(void)
{
	while (1)
	{
		if (SetupGraphics() == TRUE)
		{
			break;
		}
	}
}

static bool8 SetupGraphics(void)
{
	u8 taskId;
	switch (gMain.state)
	{
		case 0:
			SetVBlankHBlankCallbacksToNull();
			ClearScheduledBgCopiesToVram();
			gMain.state++;
			break;
		case 1:
			ScanlineEffect_Stop();
			gMain.state++;
			break;
		case 2:
			FreeAllSpritePalettes();
			gMain.state++;
			break;
		case 3:
			ResetPaletteFade();
			gMain.state++;
			break;
		case 4:
			ResetSpriteData();
			gMain.state++;
			break;
		case 5:
			ResetSpriteState();
			gMain.state++;
			break;
		case 6:
			ResetTasks();
			gMain.state++;
			break;
		case 7:
			if (InitBackgrounds())
			{
				sStateDataPtr->data[0] = 0;
				gMain.state++;
			}
			else
			{
				FadeAndBail();
				return TRUE;
			}
			break;
		case 8:
			if (LoadGraphics() == TRUE)
			{
				gMain.state++;
			}
			break;
		case 9:
			QuestMenu_InitWindows();
			gMain.state++;
			break;
		case 10:
			ClearModeOnStartup();
			InitItems();
			SetCursorPosition();
			SetScrollPosition();
			gMain.state++;
			break;
		case 11:
			if (AllocateResourcesForListMenu())
			{
				gMain.state++;
			}
			else
			{
				FadeAndBail();
				return TRUE;
			}
			break;
		case 12:
			AllocateMemoryForArray();
			BuildMenuTemplate();
			gMain.state++;
			break;
		case 13:
			GenerateAndPrintHeader();
			gMain.state++;
			break;
		case 14:
			gMain.state++;
			break;
		case 15:
			taskId = CreateTask(Task_Main, 0);
			gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate,
			                                      sListMenuState.scroll,
			                                      sListMenuState.row);
			gMain.state++;
			break;
		case 16:
			PlaceTopMenuScrollIndicatorArrows();
			gMain.state++;
			break;
		case 17:
			gMain.state++;
			break;
		case 18:
			if (sListMenuState.initialized == 1)
			{
				BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
			}
			gMain.state++;
			break;
		case 19:
			if (sListMenuState.initialized == 1)
			{
				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
			}
			else
			{

				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
				SetInitializedFlag(1);
			}
			gMain.state++;
			break;
		default:
			SetVBlankCallback(VBlankCB);
			SetMainCallback2(MainCB);
			return TRUE;
	}
	return FALSE;
}

static bool8 LoadGraphics(void)
{
	switch (sStateDataPtr->data[0])
	{
		case 0:
			ResetTempTileDataBuffers();
			DecompressAndCopyTileDataToVram(1, sQuestMenuTiles, 0, 0, 0);
			sStateDataPtr->data[0]++;
			break;
		case 1:
			if (FreeTempTileDataBuffersIfPossible() != TRUE)
			{
				LZDecompressWram(sQuestMenuTilemap, sBg1TilemapBuffer);
				sStateDataPtr->data[0]++;
			}
			break;
		case 2:
			LoadCompressedPalette(sQuestMenuBgPals, 0x00, 0x60);
			sStateDataPtr->data[0]++;
			break;
		case 3:
			sStateDataPtr->data[0]++;
			break;
		default:
			sStateDataPtr->data[0] = 0;
			return TRUE;
	}
	return FALSE;
}

static void QuestMenu_InitWindows(void)
{
	u8 i;

	InitWindows(sQuestMenuHeaderWindowTemplates);
	DeactivateAllTextPrinters();

	for (i = 0; i < 3; i++)
	{
		FillWindowPixelBuffer(i, 0x00);
		PutWindowTilemap(i);
	}

	ScheduleBgCopyTilemapToVram(0);
}

static bool8 InitBackgrounds(void)
{
	ResetAllBgsCoordinatesAndBgCntRegs();
	sBg1TilemapBuffer = Alloc(0x800);
	if (sBg1TilemapBuffer == NULL)
	{
		return FALSE;
	}

	memset(sBg1TilemapBuffer, 0, 0x800);
	ResetBgsAndClearDma3BusyFlags(0);
	InitBgsFromTemplates(0, sQuestMenuBgTemplates,
	                     NELEMS(sQuestMenuBgTemplates));
	SetBgTilemapBuffer(1, sBg1TilemapBuffer);
	ScheduleBgCopyTilemapToVram(1);
	SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
	SetGpuReg(REG_OFFSET_BLDCNT, 0);
	ShowBg(0);
	ShowBg(1);
	return TRUE;
}

static void InitItems(void)
{
	sStateDataPtr->nItems = (CountNumberListRows()) - 1;

	sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 4 ?
	                           sStateDataPtr->nItems + 1 : 4;
}

#define try_alloc(ptr__, size) ({ \
		void ** ptr = (void **)&(ptr__);             \
		*ptr = Alloc(size);                 \
		if (*ptr == NULL)                   \
		{                                   \
			FreeResources();                  \
			FadeAndBail();                  \
			return FALSE;                   \
		}                                   \
	})

static bool8 AllocateResourcesForListMenu(void)
{
	try_alloc(sListMenuItems,
	          sizeof(struct ListMenuItem) * CountNumberListRows() + 1);
	return TRUE;
}

void AllocateMemoryForArray(void)
{
	u8 i;
	u8 allocateRows = QUEST_ARRAY_COUNT + 1;

	questNameArray = Alloc(sizeof(void *) * allocateRows);

	for (i = 0; i < allocateRows; i++)
	{
		questNameArray[i] = Alloc(sizeof(u8) * 32);
	}
}

static void PlaceTopMenuScrollIndicatorArrows(void)
{
	u8 listSize = CountNumberListRows();

	if (listSize < sStateDataPtr->maxShowed)
	{
		listSize = sStateDataPtr->maxShowed;
	}

	sStateDataPtr->scrollIndicatorArrowPairId =
	      AddScrollIndicatorArrowPairParameterized(2, 94, 8, 90,
	                  (listSize - sStateDataPtr->maxShowed), 110, 110, &sListMenuState.scroll);
}

static void SetInitializedFlag(u8 a0)
{
	sListMenuState.initialized = a0;
}

static u8 GetCursorPosition(void)
{
	return sListMenuState.scroll + sListMenuState.row;
}

static void SetCursorPosition(void)
{
	if (IfScrollIsOutOfBounds())
	{
		sListMenuState.scroll = (sStateDataPtr->nItems + 1) -
		                        sStateDataPtr->maxShowed;
	}

	if (IfRowIsOutOfBounds())
	{
		if (sStateDataPtr->nItems + 1 < 2)
		{
			sListMenuState.row = 0;
		}
		else
		{
			sListMenuState.row = sStateDataPtr->nItems;
		}
	}
}


static void SetScrollPosition(void)
{
	u8 i;

	if (sListMenuState.row > 3)
	{
		for (i = 0; i <= sListMenuState.row - 3;
		            sListMenuState.row--, sListMenuState.scroll++, i++)
		{
			if (sListMenuState.scroll + sStateDataPtr->maxShowed ==
			            sStateDataPtr->nItems + 1)
			{
				break;
			}
		}
	}
}

bool8 IfScrollIsOutOfBounds(void)
{
	if (sListMenuState.scroll != 0
	            && sListMenuState.scroll + sStateDataPtr->maxShowed >
	            sStateDataPtr->nItems + 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IfRowIsOutOfBounds(void)
{
	if (sListMenuState.scroll + sListMenuState.row >= sStateDataPtr->nItems +
	            1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static void SaveScrollAndRow(s16 *data)
{
	ListMenuGetScrollAndRow(data[0], &sListMenuState.storedScrollOffset,
	                        &sListMenuState.storedRowPosition);
}


void ClearModeOnStartup(void)
{
	sStateDataPtr->filterMode = 0;
}

static u8 ManageMode(u8 action)
{
	u8 mode = sStateDataPtr->filterMode;

	switch (action)
	{
		case SUB:
			mode = ToggleSubquestMode(mode);
			break;

		case ALPHA:
			mode = ToggleAlphaMode(mode);
			sStateDataPtr->restoreCursor = FALSE;
			break;

		default:
			mode = IncrementMode(mode);
			sStateDataPtr->restoreCursor = FALSE;
			break;
	}
	return mode;
}

u8 ToggleSubquestMode(u8 mode)
{
	if (IsSubquestMode())
	{
		mode -= SORT_SUBQUEST;
		sStateDataPtr->restoreCursor = TRUE;
	}
	else
	{
		mode += SORT_SUBQUEST;
		sStateDataPtr->restoreCursor = FALSE;
	}

	return mode;
}

u8 ToggleAlphaMode(u8 mode)
{
	if (IsAlphaMode())
	{
		mode -= SORT_DEFAULT_AZ;
	}
	else
	{
		mode += SORT_DEFAULT_AZ;
	}

	return mode;
}

u8 IncrementMode(u8 mode)
{
	if (mode % 10 == SORT_DONE)
	{
		mode -= SORT_DONE;
	}
	else
	{
		mode++;
	}

	return mode;
}

static bool8 IsSubquestMode(void)
{
	if (sStateDataPtr->filterMode > SORT_DONE_AZ)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static bool8 IsNotFilteredMode(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;

	if (mode == FLAG_GET_UNLOCKED)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static bool8 IsAlphaMode(void)
{
	if (sStateDataPtr->filterMode < SORT_SUBQUEST
	            && sStateDataPtr->filterMode > SORT_DONE)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static void BuildMenuTemplate(void)
{
	u8 lastRow = GetModeAndGenerateList();

	AssignCancelNameAndId(lastRow);

	gMultiuseListMenuTemplate.totalItems = CountNumberListRows();
	gMultiuseListMenuTemplate.items = sListMenuItems;
	gMultiuseListMenuTemplate.windowId = 0;
	gMultiuseListMenuTemplate.header_X = 0;
	gMultiuseListMenuTemplate.cursor_X = 15;
	gMultiuseListMenuTemplate.item_X = 23;
	gMultiuseListMenuTemplate.lettersSpacing = 1;
	gMultiuseListMenuTemplate.itemVerticalPadding = 2;
	gMultiuseListMenuTemplate.upText_Y = 2;
	gMultiuseListMenuTemplate.maxShowed = sStateDataPtr->maxShowed;
	gMultiuseListMenuTemplate.fontId = 2;
	gMultiuseListMenuTemplate.cursorPal = 2;
	gMultiuseListMenuTemplate.fillValue = 0;
	gMultiuseListMenuTemplate.cursorShadowPal = 0;
	gMultiuseListMenuTemplate.moveCursorFunc = MoveCursorFunc;
	gMultiuseListMenuTemplate.itemPrintFunc = GenerateStateAndPrint;
	gMultiuseListMenuTemplate.scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD;
	gMultiuseListMenuTemplate.cursorKind = 0;
}

u8 GetModeAndGenerateList()
{
	if (IsSubquestMode())
	{
		return GenerateSubquestList();
	}
	else
	{
		return GenerateList(!IsNotFilteredMode());
	}
}

static u8 CountNumberListRows()
{
	u8 mode = sStateDataPtr->filterMode % 10;

	if (IsSubquestMode())
	{
		return sSideQuests[sStateDataPtr->parentQuest].numSubquests + 1;
	}

	switch (mode)
	{
		case SORT_DEFAULT:
			return QUEST_COUNT + 1;
		case SORT_INACTIVE:
			return CountInactiveQuests() + 1;
		case SORT_ACTIVE:
			return CountActiveQuests() + 1;
		case SORT_REWARD:
			return CountRewardQuests() + 1;
		case SORT_DONE:
			return CountCompletedQuests() + 1;
	}
	return 0;
}

u8 *DefineQuestOrder()
{
	static u8 sortedList[QUEST_COUNT];
	u8 a, c, d;
	u8 placeholderVariable;

	for (a = 0; a < QUEST_COUNT; a++)
	{
		sortedList[a] = a;
	}

	if (IsAlphaMode())
	{
		for (c = 0; c < QUEST_COUNT; c++)
		{
			for (d = c + 1; d < QUEST_COUNT; d++)
			{
				if (StringCompare(sSideQuests[sortedList[c]].name,
				                  sSideQuests[sortedList[d]].name) > 0)
				{
					placeholderVariable = sortedList[c];
					sortedList[c] = sortedList[d];
					sortedList[d] = placeholderVariable;
				}
			}
		}
	}

	return sortedList;
}

u8 GenerateSubquestList()
{
	u8 parentQuest = sStateDataPtr->parentQuest;
	u8 lastRow = 0, numRow = 0, countQuest = 0;

	for (numRow = 0; numRow < sSideQuests[parentQuest].numSubquests; numRow++)
	{
		PrependQuestNumber(countQuest);
		PopulateSubquestName(parentQuest, countQuest);
		PopulateListRowNameAndId(numRow, countQuest);

		countQuest++;
		lastRow = numRow + 1;
	}
	return lastRow;
}

u8 GenerateList(bool8 isFiltered)
{
	u8 mode = sStateDataPtr-> filterMode % 10;
	u8 numRow = 0, offset = 0, newRow = 0, countQuest = 0,
	   selectedQuestId = 0;
	u8 *sortedQuestList;

	sortedQuestList = DefineQuestOrder();

	for (countQuest = 0; countQuest < QUEST_COUNT; countQuest++)
	{
		selectedQuestId = *(sortedQuestList + countQuest);

		if (isFiltered && !QuestMenu_GetSetQuestState(selectedQuestId, mode))
		{
			continue;
		}

		PopulateEmptyRow(selectedQuestId);

		if (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE))
		{
			SetFavoriteQuest(selectedQuestId);
			newRow = numRow;
			numRow++;
		}
		else
		{
			newRow = CountFavoriteQuests() + offset;
			offset++;
		}

		PopulateQuestName(selectedQuestId);
		PopulateListRowNameAndId(newRow, selectedQuestId);
	}
	return numRow + offset;
}

static void AssignCancelNameAndId(u8 numRow)
{
	if (IsSubquestMode())
	{
		sListMenuItems[numRow].name = sText_Back;
	}
	else
	{
		sListMenuItems[numRow].name = sText_Close;
	}

	sListMenuItems[numRow].id = LIST_CANCEL;
}

u8 QuestMenu_GetSetSubquestState(u8 quest, u8 caseId, u8 childQuest)
{

	u8 uniqueId = sSideQuests[quest].subquests[childQuest].id;
	u8  index = uniqueId / 8; //8 bits per byte
	u8	bit = uniqueId % 8;
	u8	mask = 1 << bit;

	switch (caseId)
	{
		case FLAG_GET_COMPLETED:
			return gSaveBlock2Ptr->subQuests[index] & mask;
		case FLAG_SET_COMPLETED:
			gSaveBlock2Ptr->subQuests[index] |= mask;
			return 1;
	}

	return -1;
}

u8 QuestMenu_GetSetQuestState(u8 quest, u8 caseId)
{
	u8 index = quest * 5 / 8;
	u8 bit = quest * 5 % 8;
	u8 mask = 0, index2 = 0, bit2 = 0, index3 = 0, bit3 = 0, mask2 = 0,
	   mask3 = 0;

	// 0 : locked
	// 1 : actived
	// 2 : rewarded
	// 3 : completed
	// 4 : favorited

	switch (caseId)
	{
		case FLAG_GET_UNLOCKED:
		case FLAG_SET_UNLOCKED:
			break;
		case FLAG_GET_INACTIVE:
		case FLAG_GET_ACTIVE:
		case FLAG_SET_ACTIVE:
		case FLAG_REMOVE_ACTIVE:
			bit += 1;
			break;
		case FLAG_GET_REWARD:
		case FLAG_SET_REWARD:
		case FLAG_REMOVE_REWARD:
			bit += 2;
			break;
		case FLAG_GET_COMPLETED:
		case FLAG_SET_COMPLETED:
			bit += 3;
			break;
		case FLAG_GET_FAVORITE:
		case FLAG_SET_FAVORITE:
		case FLAG_REMOVE_FAVORITE:
			bit += 4;
			break;
	}
	if (bit >= 8)
	{
		index += 1;
		bit %= 8;
	}
	mask = 1 << bit;

	switch (caseId)
	{
		case FLAG_GET_UNLOCKED:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_UNLOCKED:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_GET_INACTIVE:
			bit2 = bit + 1;
			bit3 = bit + 2;
			index2 = index;
			index3 = index;

			if (bit2 >= 8)
			{
				index2 += 1;
				bit2 %= 8;
			}
			if (bit3 >= 8)
			{
				index3 += 1;
				bit3 %= 8;
			}

			mask2 = 1 << bit2;
			mask3 = 1 << bit3;
			return !(gSaveBlock2Ptr->questData[index] & mask) && \
			       !(gSaveBlock2Ptr->questData[index2] & mask2) && \
			       !(gSaveBlock2Ptr->questData[index3] & mask3);
		case FLAG_GET_ACTIVE:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_ACTIVE:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_REMOVE_ACTIVE:
			gSaveBlock2Ptr->questData[index] &= ~mask;
			return 1;
		case FLAG_GET_REWARD:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_REWARD:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_REMOVE_REWARD:
			gSaveBlock2Ptr->questData[index] &= ~mask;
			return 1;
		case FLAG_GET_COMPLETED:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_COMPLETED:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_GET_FAVORITE:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_FAVORITE:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_REMOVE_FAVORITE:
			gSaveBlock2Ptr->questData[index] &= ~mask;
			return 1;
	}
	return -1;  //failure
}

u8 CountUnlockedQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_UNLOCKED))
		{
			q++;
		}
	}
	return q;
}

u8 CountInactiveQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_INACTIVE))
		{
			q++;
		}
	}
	return q;
}

u8 CountActiveQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE))
		{
			q++;
		}
	}
	return q;
}

u8 CountRewardQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_REWARD))
		{
			q++;
		}
	}
	return q;
}

u8 CountCompletedQuests(void)
{
	u8 q = 0, i = 0;

	u8 parentQuest = sStateDataPtr->parentQuest;

	if (IsSubquestMode())
	{
		for (i = 0; i < sSideQuests[parentQuest].numSubquests; i++)
		{
			if (QuestMenu_GetSetSubquestState(parentQuest, FLAG_GET_COMPLETED, i))
			{
				q++;
			}
		}
	}
	else
	{
		for (i = 0; i < QUEST_COUNT; i++)
		{
			if (QuestMenu_GetSetQuestState(i, FLAG_GET_COMPLETED))
			{
				q++;
			}
		}
	}

	return q;
}

u8 CountFavoriteQuests(void)
{
	u8 q = 0, i = 0, x = 0;
	u8 mode = sStateDataPtr->filterMode % 10;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_FAVORITE))
		{
			if (QuestMenu_GetSetQuestState(i, mode))
			{
				x++;
			}
			q++;
		}
	}

	if (IsNotFilteredMode())
	{
		return q;
	}
	else
	{
		return x;
	}

}

void PopulateEmptyRow(u8 countQuest)
{
	questNamePointer = StringCopy(questNameArray[countQuest], sText_Empty);
}
void PrependQuestNumber(u8 countQuest)
{
	questNamePointer = ConvertIntToDecimalStringN(questNameArray[countQuest],
	                   countQuest + 1, STR_CONV_MODE_LEFT_ALIGN, 2);
	questNamePointer = StringAppend(questNamePointer,
	                                sText_DotSpace);
}

void SetFavoriteQuest(u8 countQuest)
{
	questNamePointer = StringAppend(questNameArray[countQuest],
	                                sText_ColorGreen);
}

void PopulateQuestName(u8 countQuest)
{
	if (QuestMenu_GetSetQuestState(countQuest, FLAG_GET_UNLOCKED))
	{
		questNamePointer = StringAppend(questNameArray[countQuest],
		                                sSideQuests[countQuest].name);
		AddSubQuestButton(countQuest);
	}
	else
	{
		StringAppend(questNameArray[countQuest], sText_Unk);
	}
}

void PopulateSubquestName(u8 parentQuest, u8 countQuest)
{
	if (IsSubquestCompletedState(countQuest))
	{
		questNamePointer = StringAppend(questNamePointer,
		                                sSideQuests[parentQuest].subquests[countQuest].name);
	}
	else
	{
		questNamePointer = StringAppend(questNamePointer, sText_Unk);
	}
}

void PopulateListRowNameAndId(u8 row, u8 countQuest)
{
	sListMenuItems[row].name = questNameArray[countQuest];
	sListMenuItems[row].id = countQuest;
}

static bool8 DoesQuestHaveChildrenAndNotInactive(u16 itemId)
{
	if (sSideQuests[itemId].numSubquests != 0
	            && QuestMenu_GetSetQuestState(itemId, FLAG_GET_UNLOCKED)
	            && !QuestMenu_GetSetQuestState(itemId, FLAG_GET_INACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void AddSubQuestButton(u8 countQuest)
{
	if (DoesQuestHaveChildrenAndNotInactive(countQuest))
	{
		questNamePointer = StringAppend(questNameArray[countQuest],
		                                sText_SubQuestButton);
	}

}
static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId,
            const u8 *str, u8 x, u8 y,
            u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
	AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing,
	                             lineSpacing,
	                             sQuestMenuWindowFontColors[colorIdx], speed, str);
}

static void MoveCursorFunc(s32 questId, bool8 onInit,
                           struct ListMenu *list)
{
	PlayCursorSound(onInit);

	if (sStateDataPtr->moveModeOrigPos == 0xFF)
	{
		QuestMenu_DestroySprite(sStateDataPtr->spriteIconSlot ^ 1);
		sStateDataPtr->spriteIconSlot ^= 1;

		if (questId == LIST_CANCEL)
		{
			PrintDetailsForCancel();
		}
		else
		{
			GenerateAndPrintQuestDetails(questId);
			DetermineSpriteType(questId);
		}
	}
}

static void PlayCursorSound(bool8 firstRun)
{
	if (firstRun == FALSE)
	{
		PlaySE(SE_RG_BAG_CURSOR);
	}
}

static void PrintDetailsForCancel()
{
	FillWindowPixelBuffer(1, 0);

	QuestMenu_AddTextPrinterParameterized(1, 2, sText_Empty, 2, 3, 2, 0, 0,
	                                      0);
	QuestMenu_AddTextPrinterParameterized(1, 2, sText_Empty, 40, 19, 5, 0, 0,
	                                      0);

	QuestMenu_CreateSprite(-1, sStateDataPtr->spriteIconSlot, ITEM);
}

void GenerateAndPrintQuestDetails(s32 questId)
{
	GenerateQuestLocation(questId);
	PrintQuestLocation(questId);
	GenerateQuestFlavorText(questId);
	PrintQuestFlavorText(questId);
}
void GenerateQuestLocation(s32 questId)
{
	if (!IsSubquestMode())
	{
		StringCopy(gStringVar2, sSideQuests[questId].map);
	}
	else
	{
		StringCopy(gStringVar2,
		           sSideQuests[sStateDataPtr->parentQuest].subquests[questId].map);
	}

	StringExpandPlaceholders(gStringVar4, sText_ShowLocation);
}
void PrintQuestLocation(s32 questId)
{
	FillWindowPixelBuffer(1, 0);
	QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar4, 2, 3, 2, 0, 0,
	                                      4);
}
void GenerateQuestFlavorText(s32 questId)
{
	if (IsSubquestMode() == FALSE)
	{
		if (IsQuestInactiveState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sText_StartForMore);
		}
		if (IsQuestActiveState(questId) == TRUE)
		{
			UpdateQuestFlavorText(questId);
		}
		if (IsQuestRewardState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sText_ReturnRecieveReward);
		}
		if (IsQuestCompletedState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sSideQuests[questId].donedesc);
		}
	}
	else
	{
		if (IsSubquestCompletedState(questId) == TRUE)
		{
			StringCopy(gStringVar1,
			           sSideQuests[sStateDataPtr->parentQuest].subquests[questId].desc);
		}
		else
		{
			StringCopy(gStringVar1, sText_Empty);
		}
	}

	StringExpandPlaceholders(gStringVar3, gStringVar1);
}
void UpdateQuestFlavorText(s32 questId)
{
	StringCopy(gStringVar1, sSideQuests[questId].desc);
}
void PrintQuestFlavorText(s32 questId)
{
	QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar3, 40, 19, 5, 0, 0,
	                                      4);
}

bool8 IsSubquestCompletedState(s32 questId)
{
	if (QuestMenu_GetSetSubquestState(sStateDataPtr->parentQuest,
	                                  FLAG_GET_COMPLETED,
	                                  questId))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
bool8 IsQuestRewardState(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_REWARD))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestInactiveState(s32 questId)
{
	if (!QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestActiveState(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestCompletedState(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_COMPLETED))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestUnlocked(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void DetermineSpriteType(s32 questId)
{
	u16 spriteId;
	u8 spriteType;

	if (IsSubquestMode() == FALSE)
	{
		spriteId = sSideQuests[questId].sprite;
		spriteType = sSideQuests[questId].spritetype;

		QuestMenu_CreateSprite(spriteId, sStateDataPtr->spriteIconSlot,
		                       spriteType);
	}
	else if (IsSubquestCompletedState(questId) == TRUE)
	{
		spriteId =
		      sSideQuests[sStateDataPtr->parentQuest].subquests[questId].sprite;
		spriteType =
		      sSideQuests[sStateDataPtr->parentQuest].subquests[questId].spritetype;
		QuestMenu_CreateSprite(spriteId, sStateDataPtr->spriteIconSlot,
		                       spriteType);
	}
	else
	{
		QuestMenu_CreateSprite(ITEM_NONE, sStateDataPtr->spriteIconSlot, ITEM);
	}
	QuestMenu_DestroySprite(sStateDataPtr->spriteIconSlot ^ 1);
	sStateDataPtr->spriteIconSlot ^= 1;
}
static void QuestMenu_CreateSprite(u16 itemId, u8 idx, u8 spriteType)
{
	u8 *ptr = &sItemMenuIconSpriteIds[10];
	u8 spriteId = 0;

	if (ptr[idx] == 0xFF)
	{
		FreeSpriteTilesByTag(102 + idx);
		FreeSpritePaletteByTag(102 + idx);

		switch (spriteType)
		{
			case OBJECT:
				spriteId = CreateObjectGraphicsSprite(itemId, SpriteCallbackDummy, 20,
				                                      132, 0);
				break;
			case ITEM:
				spriteId = AddItemIconSprite(102 + idx, 102 + idx, itemId);
				break;
			case PKMN:
				LoadMonIconPalettes();
				spriteId = CreateMonIcon(itemId, SpriteCallbackDummy, 20, 132, 0, 1);
				break;
			default:
				break;
		}

		gSprites[spriteId].oam.objMode = ST_OAM_OBJ_BLEND;

		if (spriteId != MAX_SPRITES)
		{
			ptr[idx] = spriteId;

			if (spriteType == ITEM)
			{
				gSprites[spriteId].x2 = 24;
				gSprites[spriteId].y2 = 140;
			}
		}
	}
}

void ResetSpriteState(void)
{
	u16 i;

	for (i = 0; i < NELEMS(sItemMenuIconSpriteIds); i++)
	{
		sItemMenuIconSpriteIds[i] = 0xFF;
	}
}

static void QuestMenu_DestroySprite(u8 idx)
{
	u8 *ptr = &sItemMenuIconSpriteIds[10];

	if (ptr[idx] != 0xFF)
	{
		u16 palTag = GetSpritePaletteTagByPaletteNum(
		                   gSprites[ptr[idx]].oam.paletteNum);
		DestroySprite(&gSprites[ptr[idx]]);
		ptr[idx] = 0xFF;

		if (sStateDataPtr->oldPaletteTag != palTag)
		{
			if (sStateDataPtr->oldPaletteTag != 0)
			{
				FreeSpriteTilesByTag(sStateDataPtr->oldPaletteTag);
				sStateDataPtr->oldPaletteTag = palTag;
			}
		}
	}
}
static void GenerateStateAndPrint(u8 windowId, u32 questId,
                                  u8 y)
{
	u8 colorIndex;

	if (questId != LIST_CANCEL)
	{
		if (IsSubquestMode())
		{
			colorIndex = GenerateSubquestState(questId);
		}
		else
		{
			colorIndex = GenerateQuestState(questId);
		}

		PrintQuestState(windowId, y, colorIndex);
	}
}

u8 GenerateSubquestState(u8 questId)
{
	u8 parentQuest = sStateDataPtr->parentQuest;

	if (QuestMenu_GetSetSubquestState(parentQuest, FLAG_GET_COMPLETED,
	                                  questId))
	{
		StringCopy(gStringVar4, sSideQuests[parentQuest].subquests[questId].type);
	}
	else
	{
		StringCopy(gStringVar4, sText_Empty);
	}

	return 2;
}

u8 GenerateQuestState(u8 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_COMPLETED))
	{
		StringCopy(gStringVar4, sText_Complete);
		return 2;
	}
	else if (QuestMenu_GetSetQuestState(questId, FLAG_GET_REWARD))
	{
		StringCopy(gStringVar4, sText_Reward);
		return 1;
	}
	else if (QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE))
	{
		StringCopy(gStringVar4, sText_Active);
		return 3;
	}
	else
	{
		StringCopy(gStringVar4, sText_Empty);
	}
	return 0; //need to check this if there is something going on.
}

void PrintQuestState(u8 windowId, u8 y, u8 colorIndex)
{
	QuestMenu_AddTextPrinterParameterized(windowId, 0, gStringVar4, 200, y, 0,
	                                      0, 0xFF, colorIndex);
}

static void GenerateAndPrintHeader(void)
{
	GenerateDenominatorNumQuests();
	GenerateNumeratorNumQuests();
	GenerateMenuContext();

	PrintNumQuests();
	PrintMenuContext();

	if (!IsSubquestMode())
	{
		PrintTypeFilterButton();
	}
}
static void GenerateDenominatorNumQuests(void)
{
	ConvertIntToDecimalStringN(gStringVar2, QUEST_COUNT,
	                           STR_CONV_MODE_LEFT_ALIGN, 6);
}

static void GenerateNumeratorNumQuests(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			ConvertIntToDecimalStringN(gStringVar1, CountUnlockedQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
		case SORT_INACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, CountInactiveQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
		case SORT_ACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, CountActiveQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			break;
		case SORT_REWARD:
			ConvertIntToDecimalStringN(gStringVar1, CountRewardQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			break;
		case SORT_DONE:
			ConvertIntToDecimalStringN(gStringVar1, CountCompletedQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
	}

	if (IsSubquestMode())
	{
		ConvertIntToDecimalStringN(gStringVar2,
		                           sSideQuests[parentQuest].numSubquests,
		                           STR_CONV_MODE_LEFT_ALIGN, 6);
		ConvertIntToDecimalStringN(gStringVar1, CountCompletedQuests(),
		                           STR_CONV_MODE_LEFT_ALIGN,
		                           6);
	}
}

static void GenerateMenuContext(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			questNamePointer = StringCopy(questNameArray[QUEST_ARRAY_COUNT],
			                              sText_AllHeader);
			break;
		case SORT_INACTIVE:
			questNamePointer = StringCopy(questNameArray[QUEST_ARRAY_COUNT],
			                              sText_InactiveHeader);
			break;
		case SORT_ACTIVE:
			questNamePointer = StringCopy(questNameArray[QUEST_ARRAY_COUNT],
			                              sText_ActiveHeader);
			break;
		case SORT_REWARD:
			questNamePointer = StringCopy(questNameArray[QUEST_ARRAY_COUNT],
			                              sText_RewardHeader);
			break;
		case SORT_DONE:
			questNamePointer = StringCopy(questNameArray[QUEST_ARRAY_COUNT],
			                              sText_CompletedHeader);
			break;
	}

	if (IsAlphaMode())
	{
		questNamePointer = StringAppend(questNameArray[QUEST_ARRAY_COUNT],
		                                sText_AZ);
	}
	if (IsSubquestMode())
	{
		questNamePointer = StringCopy(questNameArray[QUEST_ARRAY_COUNT],
		                              sSideQuests[parentQuest].name);

	}
}

static void PrintNumQuests(void)
{
	StringExpandPlaceholders(gStringVar4, sText_QuestNumberDisplay);
	QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 167, 1, 0, 1, 0,
	                                      0);
}
static void PrintMenuContext(void)
{
	QuestMenu_AddTextPrinterParameterized(2, 0,
	                                      questNameArray[QUEST_ARRAY_COUNT], 10, 1, 0, 1, 0, 0);
}
static void PrintTypeFilterButton(void)
{
	QuestMenu_AddTextPrinterParameterized(2, 0, sText_Type, 198, 1,
	                                      0, 1, 0, 0);

}

static void Task_Main(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	s32 input = ListMenu_ProcessInput(data[0]);

	u8 selectedQuestId = sListMenuItems[GetCursorPosition()].id;

	if (!gPaletteFade.active)
	{
		ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll,
		                        &sListMenuState.row);

		switch (input)
		{
			case LIST_NOTHING_CHOSEN:
				if (JOY_NEW(R_BUTTON))
				{
					ChangeModeAndCleanUp(taskId);
				}
				if (JOY_NEW(START_BUTTON))
				{
					ToggleAlphaModeAndCleanUp(taskId);
				}
				if (JOY_NEW(SELECT_BUTTON))
				{
					ToggleFavoriteAndCleanUp(taskId, selectedQuestId);
				}
				break;

			case LIST_CANCEL:
				if (IsSubquestMode())
				{
					ReturnFromSubquestAndCleanUp(taskId);
				}
				else
				{
					TurnOffQuestMenu(taskId);
				}
				break;

			default:
				if (!IsSubquestMode())
				{
					EnterSubquestModeAndCleanUp(taskId, data, input);
				}
				break;
		}
	}
}

void ManageFavorites(u8 selectedQuestId)
{
	if (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE))
	{
		QuestMenu_GetSetQuestState(selectedQuestId, FLAG_REMOVE_FAVORITE);
	}
	else
	{
		QuestMenu_GetSetQuestState(selectedQuestId, FLAG_SET_FAVORITE);
	}
}

static void Task_QuestMenuCleanUp(u8 taskId)
{
	s16 *data = gTasks[taskId].data;

	QuestMenu_RemoveScrollIndicatorArrowPair();
	DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
	ClearStdWindowAndFrameToTransparent(2, FALSE);

	InitItems();
	GenerateAndPrintHeader();
	AllocateResourcesForListMenu();
	BuildMenuTemplate();
	PlaceTopMenuScrollIndicatorArrows();

	if (sStateDataPtr->restoreCursor == TRUE)
	{
		RestoreSavedScrollAndRow(data);
	}
	else
	{
		ResetCursorToTop(data);
	}

}

static void RestoreSavedScrollAndRow(s16 *data)
{
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate,
	                       sListMenuState.storedScrollOffset,
	                       sListMenuState.storedRowPosition);
}
static void ResetCursorToTop(s16 *data)
{
	sListMenuState.row = 0;
	sListMenuState.scroll = 0;
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll,
	                       sListMenuState.row);
}

static void QuestMenu_RemoveScrollIndicatorArrowPair(void)
{
	if (sStateDataPtr->scrollIndicatorArrowPairId != 0xFF)
	{
		RemoveScrollIndicatorArrowPair(sStateDataPtr->scrollIndicatorArrowPairId);
		sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	}
}


void EnterSubquestModeAndCleanUp(u8 taskId, s16 *data,
                                 s32 input)
{
	if (DoesQuestHaveChildrenAndNotInactive(input))
	{
		PrepareFadeOut(taskId);

		PlaySE(SE_SELECT);
		sStateDataPtr->parentQuest = input;
		sStateDataPtr->filterMode = ManageMode(SUB);
		SaveScrollAndRow(data);
		gTasks[taskId].func = Task_FadeOut;
	}
}
void ChangeModeAndCleanUp(u8 taskId)
{
	if (!IsSubquestMode())
	{
		PlaySE(SE_SELECT);
		sStateDataPtr->filterMode = ManageMode(INCREMENT);
		Task_QuestMenuCleanUp(taskId);
	}
}
void ToggleAlphaModeAndCleanUp(u8 taskId)
{
	if (!IsSubquestMode())
	{
		PlaySE(SE_SELECT);
		sStateDataPtr->filterMode = ManageMode(ALPHA);
		Task_QuestMenuCleanUp(taskId);
	}
}
void ToggleFavoriteAndCleanUp(u8 taskId, u8 selectedQuestId)
{
	if (!IsSubquestMode()
	            && !CheckSelectedIsCancel(selectedQuestId))
	{
		PlaySE(SE_SELECT);
		ManageFavorites(selectedQuestId);
		sStateDataPtr->restoreCursor = FALSE;
		Task_QuestMenuCleanUp(taskId);
	}
}
bool8 CheckSelectedIsCancel(u8 selectedQuestId)
{
	if (selectedQuestId == (0xFF - 1))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
void ReturnFromSubquestAndCleanUp(u8 taskId)
{
	PrepareFadeOut(taskId);

	PlaySE(SE_SELECT);
	sStateDataPtr->filterMode = ManageMode(SUB);
	gTasks[taskId].func = Task_FadeOut;
}

static void SetGpuRegBaseForFade()
{
	//Sets the GPU registers to prepare for a hardware fade
	SetGpuReg(REG_OFFSET_BLDCNT,
	          BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BG0 | BLDCNT_TGT2_BG1 |
	          BLDCNT_EFFECT_BLEND);      //Blend Sprites and BG0 into BG1
	SetGpuReg(REG_OFFSET_BLDY, 0);
}

#define MAX_FADE_INTENSITY 16
#define MIN_FADE_INTENSITY 0

void InitFadeVariables(u8 taskId, u8 blendWeight, u8 frameDelay,
                       u8 frameTimerBase, u8 delta)
{
	gTasks[taskId].data[1] = blendWeight;
	gTasks[taskId].data[2] = frameDelay;
	gTasks[taskId].data[3] = gTasks[taskId].data[frameTimerBase];
	gTasks[taskId].data[4] = delta;
}


static void PrepareFadeOut(u8 taskId)
{
	SetGpuRegBaseForFade();
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY, 0));
	InitFadeVariables(taskId, MAX_FADE_INTENSITY, 0, 2, 2);
}

static bool8 HandleFadeOut(u8 taskId)
{
	if (gTasks[taskId].data[3]-- != 0)
	{
		return FALSE;
	}

	//Set the timer, decrease the fade weight by the delta, increase the delta by the timer
	gTasks[taskId].data[3] = gTasks[taskId].data[2];
	gTasks[taskId].data[1] -= gTasks[taskId].data[4];
	gTasks[taskId].data[2] += gTasks[taskId].data[3];

	//When blend weight runs out, set final blend and quit
	if (gTasks[taskId].data[1] <= 0)
	{
		SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, gTasks[taskId].data[1]));
		return TRUE;
	}
	//Set intermediate blend state
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
	            MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
	return FALSE;
}

static void PrepareFadeIn(u8 taskId)
{
	SetGpuRegBaseForFade();
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0,
	            MAX_FADE_INTENSITY));
	InitFadeVariables(taskId, MIN_FADE_INTENSITY, 0, 1, 2);
}

static bool8 HandleFadeIn(u8 taskId)
{
	//Set the timer, ncrease the fade weight by the delta,
	gTasks[taskId].data[3] = gTasks[taskId].data[2];
	gTasks[taskId].data[1] += gTasks[taskId].data[4];

	//When blend weight reaches max, set final blend and quit
	if (gTasks[taskId].data[1] >= MAX_FADE_INTENSITY)
	{
		SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY,
		            MIN_FADE_INTENSITY));
		return TRUE;
	}
	//Set intermediate blend state
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
	            MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
	return FALSE;
}

static void Task_FadeOut(u8 taskId)
{
	if (HandleFadeOut(taskId))
	{
		PrepareFadeIn(taskId);
		Task_QuestMenuCleanUp(taskId);
		gTasks[taskId].func = Task_FadeIn;
	}
}

static void Task_FadeIn(u8 taskId)
{
	if (HandleFadeIn(taskId))
	{
		gTasks[taskId].func = Task_Main;
	}
}

static void Task_QuestMenuWaitFadeAndBail(u8 taskId)
{
	if (!gPaletteFade.active)
	{
		SetMainCallback2(sListMenuState.savedCallback);
		FreeResources();
		DestroyTask(taskId);
	}
}

static void FadeAndBail(void)
{
	BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	CreateTask(Task_QuestMenuWaitFadeAndBail, 0);
	SetVBlankCallback(VBlankCB);
	SetMainCallback2(MainCB);
}


#define try_free(ptr) ({        \
		void ** ptr__ = (void **)&(ptr);   \
		if (*ptr__ != NULL)                \
			Free(*ptr__);                  \
	})

static void FreeResources(void)
{
	int i;

	try_free(sStateDataPtr);
	try_free(sBg1TilemapBuffer);
	try_free(sListMenuItems);

	for (i = QUEST_ARRAY_COUNT; i > -1; i--)
	{
		try_free(questNameArray[i]);
	}

	try_free(questNameArray);
	FreeAllWindowBuffers();
}

void TurnOffQuestMenu(u8 taskId)
{
	SetInitializedFlag(0);
	gTasks[taskId].func = Task_QuestMenuTurnOff1;
}
static void Task_QuestMenuTurnOff1(u8 taskId)
{
	BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	gTasks[taskId].func = Task_QuestMenuTurnOff2;
}

static void Task_QuestMenuTurnOff2(u8 taskId)
{
	s16 *data = gTasks[taskId].data;

	if (!gPaletteFade.active)
	{
		DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
		if (sStateDataPtr->savedCallback != NULL)
		{
			SetMainCallback2(sStateDataPtr->savedCallback);
		}
		else
		{
			SetMainCallback2(sListMenuState.savedCallback);
		}

		QuestMenu_RemoveScrollIndicatorArrowPair();
		FreeResources();
		DestroyTask(taskId);
	}
}

void Task_QuestMenu_OpenFromStartMenu(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	if (!gPaletteFade.active)
	{
		CleanupOverworldWindowsAndTilemaps();
		QuestMenu_Init(tItemPcParam, CB2_ReturnToFieldWithOpenMenu);
		DestroyTask(taskId);
	}
}

void QuestMenu_CopyQuestName(u8 *dst, u8 questId)
{
	StringCopy(dst, sSideQuests[questId].name);
}

void QuestMenu_CopySubquestName(u8 *dst, u8 parentId, u8 childId)
{
	StringCopy(dst, sSideQuests[parentId].subquests[childId].name);
}

u16 QuestMenu_Subquest_Sprite(u8 parentId, u8 childId)
{
	return sSideQuests[parentId].subquests[childId].sprite;
}

void QuestMenu_CopySubquestType(u8 *dst, u8 parentId, u8 childId)
{
	struct SubQuest sub_quest = sSideQuests[parentId].subquests[childId];
	switch (sub_quest.spritetype) 
	{
		case OBJECT:
			break;
		case ITEM:
			CopyItemName(sub_quest.sprite, dst);
			break;
		case PKMN:
			StringCopy(dst, GetSpeciesName(sub_quest.sprite));
			break;
	}
}

void QuestMenu_ResetMenuSaveData(void)
{
	memset(&gSaveBlock2Ptr->questData, 0,
	       sizeof(gSaveBlock2Ptr->questData));
	memset(&gSaveBlock2Ptr->subQuests, 0,
	       sizeof(gSaveBlock2Ptr->subQuests));
}
