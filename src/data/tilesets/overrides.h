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

//primaries:

//islandgame_oranna_general
static const u16 sTilesetPalOverride_Island_OrannaGeneral04[] = INCBIN_U16("data/tilesets/primary/islandgame_oranna_general/override_palettes/04.gbapal");

const struct PaletteOverride gTilesetPalOverrides_Island_OrannaGeneral[] = 
{
    {
        .slot = 4,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaGeneral04
    },
    OVERRIDES_END
};

//secondaries:
//islandgame_oranna_cheriport
static const u16 sTilesetPalOverride_Island_OrannaCheriport07[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_cheriport/override_palettes/07.gbapal");
static const u16 sTilesetPalOverride_Island_OrannaCheriport12[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_cheriport/override_palettes/12.gbapal");

const struct PaletteOverride gTilesetPalOverrides_Island_OrannaCheriport[] = 
{
    {
        .slot = 7,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaCheriport07
    },
    {
        .slot = 12,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaCheriport12
    },
    OVERRIDES_END
};

//islandgame_oranna_maplegrove
static const u16 sTilesetPalOverride_Island_OrannaMaplegrove8[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_maplegrove/override_palettes/08.gbapal");

const struct PaletteOverride gTilesetPalOverrides_Island_OrannaMaplegrove[] = 
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaMaplegrove8
    },
    OVERRIDES_END
};

//islandgame_oranna_central_path
static const u16 sTilesetPalOverride_Island_OrannaCentralPath6[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_central_path/override_palettes/06.gbapal");

const struct PaletteOverride gTilesetPalOverrides_Island_OrannaCentralPath[] = 
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaCentralPath6
    },
    OVERRIDES_END
};

//islandgame_oranna_rosevale
static const u16 sTilesetPalOverride_Island_OrannaRosevalePath10[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_rosevale/override_palettes/10.gbapal");
static const u16 sTilesetPalOverride_Island_OrannaRosevalePath11[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_rosevale/override_palettes/11.gbapal");

const struct PaletteOverride gTilesetPalOverrides_Island_OrannaRosevale[] = 
{
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaRosevalePath10
    },
    {
        .slot = 11,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaRosevalePath11
    },
    OVERRIDES_END
};
//islandgame_oranna_tidalcove
static const u16 sTilesetPalOverride_Island_OrannaTidalcove6[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_tidalcove/override_palettes/06.gbapal");
static const u16 sTilesetPalOverride_Island_OrannaTidalcove7[] = INCBIN_U16("data/tilesets/secondary/islandgame_oranna_tidalcove/override_palettes/07.gbapal");

const struct PaletteOverride gTilesetPalOverrides_Island_OrannaTidalcove[] = 
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaTidalcove6
    },
    {
        .slot = 7,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Island_OrannaTidalcove7
    },
    OVERRIDES_END
};

//islandgame_oranna_southern_path

//islandgame_oranna_northern_path

//islandgame_oranna_persi

//islandgame_oranna_mt_aurora


//islandgame_ss_rain_general
//islandgame_ss_rain_secondary