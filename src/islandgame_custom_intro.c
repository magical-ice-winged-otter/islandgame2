#include "global.h"
#include "text.h"
#include "script_pokemon_util.h"
#include "event_data.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/species.h"
#include "strings.h"
#include "islandgame.h"

static void SetPlayerName(const u8* name);

// This gets called after the intro cutscene, right when the new game is started.
void IslandGameCustomStartup()
{
    // This flag makes sure that we unlock the pokemon selection menu:
    // usually its set when you pick the starter.
    FlagSet(FLAG_SYS_POKEMON_GET);

    // todo: this actually is a traded mon technically, and won't obey orders
    u16 species = ISLANDGAME_STARTING_MON;
    u8 level = ISLANDGAME_STARTING_MON_LEVEL;
    u16 item = ISLANDGAME_STARTING_MON_ITEM;
    ScriptGiveMon(species, level, item, 0, 0, 0);

    // I'm honestly not sure why you need the weird syntax around string literals,
    // but it breaks pretty badly w/out it so...
    const u8 name[] = _(ISLANDGAME_PLAYER_NAME);
    SetPlayerName(name);
}

// Almost exactly copied from src/main_menu.c
static void SetPlayerName(const u8 *name)
{
    u8 i;

    for (i = 0; i < PLAYER_NAME_LENGTH; i++)
    {
        gSaveBlock2Ptr->playerName[i] = name[i];
    }

    gSaveBlock2Ptr->playerName[i] = EOS;
}
