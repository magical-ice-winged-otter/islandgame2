static const u16 sTilesetPalOverride_General01_05[] = INCBIN_U16("data/tilesets/primary/general/override_palettes/01_05.gbapal");

static const u16 sTilesetPalOverride_Petalburg06_08[] = INCBIN_U16("data/tilesets/secondary/petalburg/override_palettes/06_08.gbapal");

#define OVERRIDES_END { .slot = 0xFF, }

const struct PaletteOverride gTilesetPalOverrides_General[] =
{
    {
        .slot = 1,
        .startHour = NIGHT_HOUR_BEGIN,
        .endHour = NIGHT_HOUR_END,
        .palette = sTilesetPalOverride_General01_05,
    },
    {
        .slot = 5,
        .startHour = NIGHT_HOUR_BEGIN,
        .endHour = NIGHT_HOUR_END,
        .palette = sTilesetPalOverride_General01_05,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Petalburg[] =
{
    {
        .slot = 6,
        .startHour = NIGHT_HOUR_BEGIN,
        .endHour = NIGHT_HOUR_END,
        .palette = sTilesetPalOverride_Petalburg06_08,
    },
    {
        .slot = 8,
        .startHour = NIGHT_HOUR_BEGIN,
        .endHour = NIGHT_HOUR_END,
        .palette = sTilesetPalOverride_Petalburg06_08,
    },
    OVERRIDES_END
};


static const u16 sTilesetPalOverride_Island_General04[] = INCBIN_U16("data/tilesets/primary/islandgame_general/override_palettes/04.gbapal");


//island-start
const struct PaletteOverride gTilesetPalOverrides_Island_General[] =
{
    {
        .slot = 4,
        .startHour = NIGHT_HOUR_BEGIN,
        .endHour = NIGHT_HOUR_END,
        .palette = sTilesetPalOverride_Island_General04,
    },
    OVERRIDES_END
};