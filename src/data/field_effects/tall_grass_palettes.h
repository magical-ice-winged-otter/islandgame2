const u16 gFieldEffectPal_TallGrass[] = INCBIN_U16("graphics/field_effects/palettes/tall_grass.gbapal");
const u16 gFieldEffectPal_LumineTallGrass[] = INCBIN_U16("graphics/field_effects/palettes/lumine_tall_grass.gbapal");

struct GrassMetatilePalette {
    u32 metatileId;
    const u16* paletteData;
};

static const struct GrassMetatilePalette sGrassFieldEffects[] =
{
    {METATILE_General_TallGrass,                   gFieldEffectPal_TallGrass},
    {METATILE_islandgame_lumine_general_TallGrass, gFieldEffectPal_LumineTallGrass},
};

