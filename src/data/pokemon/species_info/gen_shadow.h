#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenShadow[] =
{
#endif

#if P_FAMILY_SHADOW_LUGIA
    [SPECIES_SHADOW_LUGIA] =
    {
        .baseHP        = 106,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 154,
        .types = { TYPE_SHADOW, TYPE_FLYING },
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("S. Lugia"),
        .cryId = CRY_SHADOW_LUGIA,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Corrupted"),
        .height = 52,
        .weight = 2160,
        .description = COMPOUND_STRING(
            "TBD, it is shadow lugia.\n"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        //FRONT_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        //BACK_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        //PALETTE_FEMALE(CircledQuestionMark),
        //ICON_FEMALE(QuestionMark, 1),
        //.footprint = gMonFootprint_None,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .frontPic = gMonFrontPic_ShadowLugia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ShadowLugia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ShadowLugia,
        .shinyPalette = gMonShinyPalette_ShadowLugia,
        .iconSprite = gMonIcon_ShadowLugia,
        .iconPalIndex = 0,
        //FOOTPRINT(ShadowLugia)
        .isLegendary = TRUE,
        .levelUpLearnset = sShadowLugiaLevelUpLearnset,
        .teachableLearnset = sShadowLugiaTeachableLearnset,
    },
#endif //P_FAMILY_SHADOW_LUGIA

#if P_FAMILY_SHADOW_MIGHTYENA
    [SPECIES_SHADOW_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_SHADOW, TYPE_SHADOW },
        .catchRate = 127,
        .expYield = 147,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_STRONG_JAW, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mightyena"), 
        .cryId = CRY_SHADOW_MIGHTYENA,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 370,
        .description = COMPOUND_STRING(
            "In the wild, Mightyena live in a pack.\n"
            "They never defy their leader's orders.\n"
            "They defeat foes with perfectly\n"
            "coordinated teamwork."),
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        //FRONT_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        //BACK_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        //PALETTE_FEMALE(CircledQuestionMark),
        //ICON_FEMALE(QuestionMark, 1),
        //.footprint = gMonFootprint_None,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        .frontPic = gMonFrontPic_ShadowMightyena,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ShadowMightyena,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ShadowMightyena,
        .shinyPalette = gMonShinyPalette_ShadowMightyena,
        .iconSprite = gMonIcon_ShadowMightyena,
        .iconPalIndex = 0,
        //FOOTPRINT(ShadowMightyena)
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sShadowMightyenaLevelUpLearnset,
        .teachableLearnset = sShadowMightyenaTeachableLearnset,
    },
#endif //P_FAMILY_SHADOW_MIGHTYENA


#if P_FAMILY_GOLETT_MARYAN
    [SPECIES_GOLETT_MARYAN] =
    {
        .baseHP        = 59,
        .baseAttack    = 74,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_IRON_FIST, ABILITY_SLUSH_RUSH, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Golett"),
        .cryId = CRY_GOLETT,
        .natDexNum = NATIONAL_DEX_GOLETT_MARYAN,
        .categoryName = _("Automaton"),
        .height = 10,
        .weight = 920,
        .description = COMPOUND_STRING(
            "These Pokémon are thought to have\n"
            "been created by the science of an\n"
            "ancient and mysterious civilization.\n"
            "It's been active for thousands of years."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GolettMaryan,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_GolettMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_GolettMaryan,
        .shinyPalette = gMonShinyPalette_GolettMaryan,
        .iconSprite = gMonIcon_GolettMaryan,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Golett)
        OVERWORLD(
            sPicTable_GolettMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GolettMaryan,
            gShinyOverworldPalette_GolettMaryan
        )
        .levelUpLearnset = sGolettMaryanLevelUpLearnset,
        .teachableLearnset = sGolettMaryanTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_GOLURK_MARYAN}),
    },

    [SPECIES_GOLURK_MARYAN] =
    {
        .baseHP        = 89,
        .baseAttack    = 124,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 169,
        .evYield_Attack = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_IRON_FIST, ABILITY_SLUSH_RUSH, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Golurk"),
        .cryId = CRY_GOLURK,
        .natDexNum = NATIONAL_DEX_GOLURK_MARYAN,
        .categoryName = _("Automaton"),
        .height = 28,
        .weight = 3300,
        .description = COMPOUND_STRING(
            "Golurk were created to protect people\n"
            "and Pokémon by an ancient civilisation.\n"
            "Removing the seal on its chest makes its\n"
            "internal energy go out of control."),
        .pokemonScale = 275,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GolurkMaryan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_GolurkMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_GolurkMaryan,
        .shinyPalette = gMonShinyPalette_GolurkMaryan,
        .iconSprite = gMonIcon_GolurkMaryan,
        .iconPalIndex = 0,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Golurk)
        OVERWORLD(
            sPicTable_GolurkMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GolurkMaryan,
            gShinyOverworldPalette_GolurkMaryan
        )
        .levelUpLearnset = sGolurkMaryanLevelUpLearnset,
        .teachableLearnset = sGolurkMaryanTeachableLearnset,
    },
#endif //P_FAMILY_GOLETT_MARYAN



#if P_FAMILY_FEEBAS_MARYAN
    [SPECIES_FEEBAS_MARYAN] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 61,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_OBLIVIOUS, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Feebas"),
        .cryId = CRY_FEEBAS,
        .natDexNum = NATIONAL_DEX_FEEBAS_MARYAN,
        .categoryName = _("Fish"),
        .height = 6,
        .weight = 74,
        .description = COMPOUND_STRING(
            "It is the shabbiest Pokémon of all.\n"
            "It forms schools and lives at the\n"
            "bottom of lakes that teem with\n"
            "plant life."),
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_FeebasMaryan,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_FeebasMaryan,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_FeebasMaryan,
        .shinyPalette = gMonShinyPalette_FeebasMaryan,
        .iconSprite = gMonIcon_FeebasMaryan,
        .iconPalIndex = 0,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Feebas)
        OVERWORLD(
            sPicTable_FeebasMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_FeebasMaryan,
            gShinyOverworldPalette_FeebasMaryan
        )
        .levelUpLearnset = sFeebasMaryanLevelUpLearnset,
        .teachableLearnset = sFeebasMaryanTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD, ITEM_PRISM_SCALE, SPECIES_MILOTIC_MARYAN}),
    },

    [SPECIES_MILOTIC_MARYAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE,TYPE_DRAGON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 213,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ICE_BODY, ABILITY_COMPETITIVE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Milotic"),
        .cryId = CRY_MILOTIC,
        .natDexNum = NATIONAL_DEX_MILOTIC_MARYAN,
        .categoryName = _("Tender"),
        .height = 62,
        .weight = 1620,
        .description = COMPOUND_STRING(
            "It is said to live at the bottom of\n"
            "large lakes. Considered to be the most\n"
            "beautiful of all Pokémon, it has been\n"
            "depicted in paintings and statues."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_MiloticMaryan,
        .frontPicFemale = gMonFrontPic_MiloticMaryan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_MiloticMaryan,
        .backPicFemale = gMonBackPic_MiloticMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_MiloticMaryan,
        .shinyPalette = gMonShinyPalette_MiloticMaryan,
        .iconSprite = gMonIcon_MiloticMaryan,
        .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(MiloticMaryan)
        OVERWORLD(
            sPicTable_MiloticMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_MiloticMaryan,
            gShinyOverworldPalette_MiloticMaryan
        )
        .levelUpLearnset = sMiloticMaryanLevelUpLearnset,
        .teachableLearnset = sMiloticMaryanTeachableLearnset,
    },
#endif //P_FAMILY_FEEBAS_MARYAN



#if P_FAMILY_PURRLOIN_MARYAN
    [SPECIES_PURRLOIN_MARYAN] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 37,
        .baseSpeed     = 66,
        .baseSpAttack  = 50,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_DARK,TYPE_ELECTRIC),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_MOTOR_DRIVE, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Purrloin"),
        .cryId = CRY_PURRLOIN,
        .natDexNum = NATIONAL_DEX_PURRLOIN_MARYAN,
        .categoryName = _("Devious"),
        .height = 4,
        .weight = 101,
        .description = COMPOUND_STRING(
            "Their deceptively cute act is the\n"
            "perfect ruse. They steal from people for\n"
            "fun, but their victims can't help but\n"
            "forgive them."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PurrloinMaryan,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 54),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_PurrloinMaryan,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_PurrloinMaryan,
        .shinyPalette = gMonShinyPalette_PurrloinMaryan,
        .iconSprite = gMonIcon_PurrloinMaryan,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Purrloin)
        OVERWORLD(
            sPicTable_PurrloinMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PurrloinMaryan,
            gShinyOverworldPalette_PurrloinMaryan
        )
        .levelUpLearnset = sPurrloinMaryanLevelUpLearnset,
        .teachableLearnset = sPurrloinMaryanTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LIEPARD_MARYAN}),
    },

    [SPECIES_LIEPARD_MARYAN] =
    {
        .baseHP        = 64,
        .baseAttack    = 88,
        .baseDefense   = 50,
        .baseSpeed     = 106,
        .baseSpAttack  = 88,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK,TYPE_ELECTRIC),
        .catchRate = 90,
        .expYield = 156,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_MOTOR_DRIVE, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Liepard"),
        .cryId = CRY_LIEPARD,
        .natDexNum = NATIONAL_DEX_LIEPARD_MARYAN,
        .categoryName = _("Cruel"),
        .height = 11,
        .weight = 375,
        .description = COMPOUND_STRING(
            "Many Trainers are drawn to their\n"
            "beautiful form and fur. These Pokémon\n"
            "vanish and appear unexpectedly.\n"
            "They run silently in the night."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LiepardMaryan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_LiepardMaryan,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_LiepardMaryan,
        .shinyPalette = gMonShinyPalette_LiepardMaryan,
        .iconSprite = gMonIcon_LiepardMaryan,
        .iconPalIndex = 2,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Liepard)
        OVERWORLD(
            sPicTable_LiepardMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LiepardMaryan,
            gShinyOverworldPalette_LiepardMaryan
        )
        .levelUpLearnset = sLiepardMaryanLevelUpLearnset,
        .teachableLearnset = sLiepardMaryanTeachableLearnset,
    },
#endif //P_FAMILY_PURRLOIN_MARYAN



#if P_FAMILY_NINCADA_MARYAN
    [SPECIES_NINCADA_MARYAN] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG, TYPE_DARK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 65,
        .evYield_Defense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HUSTLE, ABILITY_INSOMNIA, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nincada"),
        .cryId = CRY_NINCADA,
        .natDexNum = NATIONAL_DEX_NINCADA_MARYAN,
        .categoryName = _("Genin"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "It makes its nest at the roots of a mighty\n"
            "tree. Using its whiskerlike antennae, it\n"
            "probes its surroundings in the\n"
            "pitch-black darkness of soil."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NincadaMaryan,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NincadaMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_NincadaMaryan,
        .shinyPalette = gMonShinyPalette_NincadaMaryan,
        .iconSprite = gMonIcon_NincadaMaryan,
        .iconPalIndex = 1,
        SHADOW(2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Nincada)
        OVERWORLD(
            sPicTable_NincadaMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_NincadaMaryan,
            gShinyOverworldPalette_NincadaMaryan
        )
        .levelUpLearnset = sNincadaMaryanLevelUpLearnset,
        .teachableLearnset = sNincadaMaryanTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK_MARYAN},
                                {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA_MARYAN}),
    },

    [SPECIES_NINJASK_MARYAN] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 160,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG, TYPE_DARK),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 155,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_STAKEOUT, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Ninjask"),
        .cryId = CRY_NINJASK,
        .natDexNum = NATIONAL_DEX_NINJASK_MARYAN,
        .categoryName = _("Shinobi"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Because it darts about vigorously at high\n"
            "speed, it is very difficult to see. Hearing\n"
            "its distinctive cries for too long induces\n"
            "a headache."),
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NinjaskMaryan,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_NinjaskMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_NinjaskMaryan,
        .shinyPalette = gMonShinyPalette_NinjaskMaryan,
        .iconSprite = gMonIcon_NinjaskMaryan,
        .iconPalIndex = 1,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Ninjask)
        OVERWORLD(
            sPicTable_NinjaskMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_NinjaskMaryan,
            gShinyOverworldPalette_NinjaskMaryan
        )
        .levelUpLearnset = sNinjaskMaryanLevelUpLearnset,
        .teachableLearnset = sNinjaskMaryanTeachableLearnset,
    },

    [SPECIES_SHEDINJA_MARYAN] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_BUG, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 83 : 95,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_SHELL_ARMOR, ABILITY_PERISH_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shedinja"),
        .cryId = CRY_SHEDINJA,
        .natDexNum = NATIONAL_DEX_SHEDINJA_MARYAN,
        .categoryName = _("Oni"),
        .height = 8,
        .weight = 12,
        .description = COMPOUND_STRING(
            "A peculiar Pokémon that floats in air even\n"
            "though its wings remain completely still.\n"
            "The inside of its body is hollow and\n"
            "utterly dark."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShedinjaMaryan,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_ShedinjaMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_ShedinjaMaryan,
        .shinyPalette = gMonShinyPalette_ShedinjaMaryan,
        .iconSprite = gMonIcon_ShedinjaMaryan,
        .iconPalIndex = 0,
        SHADOW(-2, 9, SHADOW_SIZE_S)
        FOOTPRINT(Shedinja)
        OVERWORLD(
            sPicTable_ShedinjaMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_ShedinjaMaryan,
            gShinyOverworldPalette_ShedinjaMaryan
        )
        .levelUpLearnset = sShedinjaMaryanLevelUpLearnset,
        .teachableLearnset = sShedinjaMaryanTeachableLearnset,
    },
#endif //P_FAMILY_NINCADA_MARYAN



#if P_FAMILY_COMBEE_MARYAN
    [SPECIES_COMBEE_MARYAN] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 42,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 63,
        .evYield_Speed = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HONEY_GATHER, ABILITY_SWARM, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Combee"),
        .cryId = CRY_COMBEE,
        .natDexNum = NATIONAL_DEX_COMBEE_MARYAN,
        .categoryName = _("Tiny Bee"),
        .height = 3,
        .weight = 55,
        .description = COMPOUND_STRING(
            "A Pokémon formed by three others.\n"
            "It constantly gathers honey from flowers\n"
            "to please Vespiquen. At night, they\n"
            "cluster to form a beehive and sleep."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Combee,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Combee,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 22,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Combee,
        .shinyPalette = gMonShinyPalette_Combee,
        .iconSprite = gMonIcon_Combee,
        .iconPalIndex = 0,
        #if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_CombeeFMaryan,
        .shinyPaletteFemale = gMonShinyPalette_CombeeFMaryan,
#endif //P_GENDER_DIFFERENCES
        SHADOW(-4, 10, SHADOW_SIZE_S)
        FOOTPRINT(Combee)
        OVERWORLD(
            sPicTable_CombeeMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CombeeMaryan,
            gShinyOverworldPalette_CombeeMaryan
        )
        OVERWORLD_FEMALE(
            sPicTable_CombeeFMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCombeeMaryanLevelUpLearnset,
        .teachableLearnset = sCombeeMaryanTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 21, SPECIES_VESPIQUEN_MARYAN}),
    },

    [SPECIES_VESPIQUEN_MARYAN] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 102,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 102,
        .types = MON_TYPES(TYPE_BUG, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 188,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_PSYCHIC_GEM,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_QUEENLY_MAJESTY, ABILITY_PRESSURE, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Vespiquen"),
        .cryId = CRY_VESPIQUEN,
        .natDexNum = NATIONAL_DEX_VESPIQUEN_MARYAN,
        .categoryName = _("Beehive"),
        .height = 12,
        .weight = 385,
        .description = COMPOUND_STRING(
            "It houses its colony in cells in its body\n"
            "and releases various pheromones to\n"
            "make those grubs do its bidding.\n"
            "There is only one in a colony."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_VespiquenMaryan,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_VespiquenMaryan,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_VespiquenMaryan,
        .shinyPalette = gMonShinyPalette_VespiquenMaryan,
        .iconSprite = gMonIcon_VespiquenMaryan,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Vespiquen)
        OVERWORLD(
            sPicTable_VespiquenMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_VespiquenMaryan,
            gShinyOverworldPalette_VespiquenMaryan
        )
        .levelUpLearnset = sVespiquenMaryanLevelUpLearnset,
        .teachableLearnset = sVespiquenMaryanTeachableLearnset,
    },
#endif //P_FAMILY_COMBEE_MARYAN

#if P_FAMILY_SHADOW_AGGRON
    [SPECIES_SHADOW_AGGRON] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_SHADOW, TYPE_SHADOW),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 205,
    #endif
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SHADOW_SHIELD, ABILITY_SHADOW_SHIELD, ABILITY_SHADOW_SHIELD },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aggron"),
        .cryId = CRY_AGGRON,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Iron Armor"),
        .height = 21,
        .weight = 3600,
        .description = COMPOUND_STRING(
            "Its iron horns grow longer a little at\n"
            "a time. They are used to determine the\n"
            "Aggron's age. The gouges in its armor are\n"
            "worn with pride as mementos from battles."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_ShadowAggron,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_ShadowAggron,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ShadowAggron,
        .shinyPalette = gMonShinyPalette_ShadowAggron,
        .iconSprite = gMonIcon_ShadowAggron,
        .iconPalIndex = 2,
        FOOTPRINT(Aggron)
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,
        .formChangeTable = sAggronFormChangeTable,
    },
#endif //P_FAMILY_ARON

#if P_FAMILY_ANOMALY_01
    [SPECIES_ANOMALY_01] =
    {
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 119,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .genderRatio = MON_GENDERLESS,
        .abilities = { ABILITY_LEVITATE },
        .catchRate = 1,
        .expYield = 306,
        .evYield_SpAttack = 3,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .speciesName = _("..."),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(".........."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Anomaly01,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .enemyMonElevation = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Anomaly,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Anomaly,
        .shinyPalette = gMonShinyPalette_Anomaly,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sTyphlosionLevelUpLearnset,
        .teachableLearnset = sTyphlosionTeachableLearnset,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_ANOMALY01


#if P_FAMILY_SHELLOS_MARYAN
    [SPECIES_SHELLOS_MARYAN] =
    {
        .baseHP        = 76,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 34,
        .baseSpAttack  = 57,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 73,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_STORM_DRAIN, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Shellos"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS_MARYAN,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "This species is closely related to Shellder\n"
            "It used to have a shell long ago. South\n"
            "Sea Shellos typically dwell in caves."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShellosMaryan,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosMaryan,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_ShellosMaryan,
        .shinyPalette = gMonShinyPalette_ShellosMaryan,
        .iconSprite = gMonIcon_ShellosMaryan,
        .iconPalIndex = 0,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_ShellosMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShellosMaryan,
            gShinyOverworldPalette_ShellosMaryan
        )
        .levelUpLearnset = sShellosMaryanLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        // .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GASTRODON_MARYAN}),
    },

    [SPECIES_GASTRODON_MARYAN] =
    {
        .baseHP        = 111,
        .baseAttack    = 83,
        .baseDefense   = 68,
        .baseSpeed     = 39,
        .baseSpAttack  = 92,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 176,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_STORM_DRAIN, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_GASTRODON,
        .natDexNum = NATIONAL_DEX_GASTRODON_MARYAN,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "It appears around underground lakes to\n"
            "eat plankton for nourishment. Should one\n"
            "encounter another of a different color,\n"
            "a fierce battle will ensue."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GastrodonMaryan,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonMaryan,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GastrodonMaryan,
        .shinyPalette = gMonShinyPalette_GastrodonMaryan,
        .iconSprite = gMonIcon_GastrodonMaryan,
        .iconPalIndex = 0,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_GastrodonMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GastrodonMaryan,
            gShinyOverworldPalette_GastrodonMaryan
        )
        .levelUpLearnset = sGastrodonMaryanLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        // .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },
#endif //P_FAMILY_SHELLOS







#if P_FAMILY_SKITTY_MARYAN
    [SPECIES_SKITTY_MARYAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FAIRY),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_PIXILATE, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_PIXILATE , ABILITY_WONDER_SKIN },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Skitty"),
        .cryId = CRY_SKITTY,
        .natDexNum = NATIONAL_DEX_SKITTY_MARYAN,
        .categoryName = _("Kitten"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "A Skitty's adorably cute behavior makes it\n"
            "highly popular. They are known for being\n"
            "particularly talkative.\n"),
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SkittyMaryan,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SkittyMaryan,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_SkittyMaryan,
        .shinyPalette = gMonShinyPalette_SkittyMaryan,
        .iconSprite = gMonIcon_SkittyMaryan,
        .iconPalIndex = 0,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(SkittyMaryan)
        OVERWORLD(
            sPicTable_SkittyMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SkittyMaryan,
            gShinyOverworldPalette_SkittyMaryan
        )
        .levelUpLearnset = sSkittyMaryanLevelUpLearnset,
        .teachableLearnset = sSkittyMaryanTeachableLearnset,
        .eggMoveLearnset = sSkittyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_DELCATTY_MARYAN}),
    },

    [SPECIES_DELCATTY_MARYAN] =
    {
        .baseHP        = 80,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 110 : 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FAIRY),
        .catchRate = 60,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 140,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 133,
    #else
        .expYield = 138,
    #endif
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_PIXILATE, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_PIXILATE, ABILITY_WONDER_SKIN },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delcatty"),
        .cryId = CRY_DELCATTY,
        .natDexNum = NATIONAL_DEX_DELCATTY_MARYAN,
        .categoryName = _("Prim"),
        .height = 11,
        .weight = 326,
        .description = COMPOUND_STRING(
            "It is highly popular among trainers for\n"
            "its sublime fur and elegance. They are\n"
            "known to be rather smug in their\n"
            "behavior."),
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DelcattyMaryan,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_DelcattyMaryan,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_DelcattyMaryan,
        .shinyPalette = gMonShinyPalette_DelcattyMaryan,
        .iconSprite = gMonIcon_DelcattyMaryan,
        .iconPalIndex = 0,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(DelcattyMaryan)
        OVERWORLD(
            sPicTable_DelcattyMaryan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DelcattyMaryan,
            gShinyOverworldPalette_DelcattyMaryan
        )
        .levelUpLearnset = sDelcattyMaryanLevelUpLearnset,
        .teachableLearnset = sDelcattyMaryanTeachableLearnset,
    },
#endif //P_FAMILY_SKITTY_MARYAN


#ifdef __INTELLISENSE__
};
#endif