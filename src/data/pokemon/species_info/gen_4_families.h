#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen4[] =
{
#endif

#if P_FAMILY_TURTWIG
    [SPECIES_TURTWIG] =
    {
        .baseHP        = 55,
        .baseAttack    = 68,
        .baseDefense   = 64,
        .baseSpeed     = 31,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Turtwig"),
        .cryId = CRY_TURTWIG,
        .natDexNum = NATIONAL_DEX_TURTWIG,
        .categoryName = _("Tiny Leaf"),
        .height = 4,
        .weight = 102,
        .description = COMPOUND_STRING(
            "The shell on its back is made of soil. \n"
            "On a very healthy Turtwig, the shell \n"
            "should feel moist. The leaf on its head\n"
            "wilts if it is thirsty."),
        .pokemonScale = 491,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Turtwig,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Turtwig,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Turtwig,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Turtwig,
        .shinyPalette = gMonShinyPalette_Turtwig,
        .iconSprite = gMonIcon_Turtwig,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Turtwig)
        OVERWORLD(
            sPicTable_Turtwig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Turtwig,
            gShinyOverworldPalette_Turtwig
        )
        .levelUpLearnset = sTurtwigLevelUpLearnset,
        .teachableLearnset = sTurtwigTeachableLearnset,
        .eggMoveLearnset = sTurtwigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_GROTLE}),
    },

    [SPECIES_GROTLE] =
    {
        .baseHP        = 75,
        .baseAttack    = 89,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grotle"),
        .cryId = CRY_GROTLE,
        .natDexNum = NATIONAL_DEX_GROTLE,
        .categoryName = _("Grove"),
        .height = 11,
        .weight = 970,
        .description = COMPOUND_STRING(
            "A Grotle that lives in the forest is said\n"
            "to have its own secret springwater well. \n"
            "It carries fellow Pokémon there on \n"
            "its back."),
        .pokemonScale = 320,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grotle,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Grotle,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Grotle,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Grotle,
        .shinyPalette = gMonShinyPalette_Grotle,
        .iconSprite = gMonIcon_Grotle,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Grotle)
        OVERWORLD(
            sPicTable_Grotle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grotle,
            gShinyOverworldPalette_Grotle
        )
        .levelUpLearnset = sGrotleLevelUpLearnset,
        .teachableLearnset = sGrotleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_TORTERRA}),
    },

    [SPECIES_TORTERRA] =
    {
        .baseHP        = 95,
        .baseAttack    = 109,
        .baseDefense   = 105,
        .baseSpeed     = 56,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 208,
    #endif
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Torterra"),
        .cryId = CRY_TORTERRA,
        .natDexNum = NATIONAL_DEX_TORTERRA,
        .categoryName = _("Continent"),
        .height = 22,
        .weight = 3100,
        .description = COMPOUND_STRING(
            "Some Pokémon are born on a Torterra's\n"
            "back and spend their entire life there.\n"
            "Ancient people imagined that beneath \n"
            "the ground, a gigantic Torterra dwelled."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Torterra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Torterra,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Torterra,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Torterra,
        .shinyPalette = gMonShinyPalette_Torterra,
        .iconSprite = gMonIcon_Torterra,
        .iconPalIndex = 1,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Torterra)
        OVERWORLD(
            sPicTable_Torterra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Torterra,
            gShinyOverworldPalette_Torterra
        )
        .levelUpLearnset = sTorterraLevelUpLearnset,
        .teachableLearnset = sTorterraTeachableLearnset,
    },
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
    [SPECIES_CHIMCHAR] =
    {
        .baseHP        = 44,
        .baseAttack    = 58,
        .baseDefense   = 44,
        .baseSpeed     = 61,
        .baseSpAttack  = 58,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Chimchar"),
        .cryId = CRY_CHIMCHAR,
        .natDexNum = NATIONAL_DEX_CHIMCHAR,
        .categoryName = _("Chimp"),
        .height = 5,
        .weight = 62,
        .description = COMPOUND_STRING(
            "Its fiery rear end is fueled by gas made\n"
            "in its belly. Before going to sleep,\n"
            "Chimchar extinguish the flame on their\n"
            "tails to prevent fires."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chimchar,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Chimchar,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Chimchar,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Chimchar,
        .shinyPalette = gMonShinyPalette_Chimchar,
        .iconSprite = gMonIcon_Chimchar,
        .iconPalIndex = 1,
        SHADOW(4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chimchar)
        OVERWORLD(
            sPicTable_Chimchar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chimchar,
            gShinyOverworldPalette_Chimchar
        )
        .levelUpLearnset = sChimcharLevelUpLearnset,
        .teachableLearnset = sChimcharTeachableLearnset,
        .eggMoveLearnset = sChimcharEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_MONFERNO}),
    },

    [SPECIES_MONFERNO] =
    {
        .baseHP        = 64,
        .baseAttack    = 78,
        .baseDefense   = 52,
        .baseSpeed     = 81,
        .baseSpAttack  = 78,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Monferno"),
        .cryId = CRY_MONFERNO,
        .natDexNum = NATIONAL_DEX_MONFERNO,
        .categoryName = _("Playful"),
        .height = 9,
        .weight = 220,
        .description = COMPOUND_STRING(
            "It carefully controls the intensity of\n"
            "the flame on its tail, so as to keep its\n"
            "foes at an adequate distance.\n"
            "Its fiery tail is but one weapon."),
        .pokemonScale = 338,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monferno,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Monferno,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Monferno,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Monferno,
        .shinyPalette = gMonShinyPalette_Monferno,
        .iconSprite = gMonIcon_Monferno,
        .iconPalIndex = 0,
        SHADOW(-7, 6, SHADOW_SIZE_S)
        FOOTPRINT(Monferno)
        OVERWORLD(
            sPicTable_Monferno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Monferno,
            gShinyOverworldPalette_Monferno
        )
        .levelUpLearnset = sMonfernoLevelUpLearnset,
        .teachableLearnset = sMonfernoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_INFERNAPE}),
    },

    [SPECIES_INFERNAPE] =
    {
        .baseHP        = 76,
        .baseAttack    = 104,
        .baseDefense   = 71,
        .baseSpeed     = 108,
        .baseSpAttack  = 104,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 267,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 240,
    #else
        .expYield = 209,
    #endif
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Infernape"),
        .cryId = CRY_INFERNAPE,
        .natDexNum = NATIONAL_DEX_INFERNAPE,
        .categoryName = _("Flame"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Its crown of fire is indicative of its\n"
            "fiery nature. It uses a special kind of\n"
            "martial arts involving all of its limbs to\n"
            "take on any opponent."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Infernape,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Infernape,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Infernape,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Infernape,
        .shinyPalette = gMonShinyPalette_Infernape,
        .iconSprite = gMonIcon_Infernape,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_L)
        FOOTPRINT(Infernape)
        OVERWORLD(
            sPicTable_Infernape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Infernape,
            gShinyOverworldPalette_Infernape
        )
        .levelUpLearnset = sInfernapeLevelUpLearnset,
        .teachableLearnset = sInfernapeTeachableLearnset,
    },
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
    [SPECIES_PIPLUP] =
    {
        .baseHP        = 53,
        .baseAttack    = 51,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 61,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 66,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_COMPETITIVE },
    #else
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Piplup"),
        .cryId = CRY_PIPLUP,
        .natDexNum = NATIONAL_DEX_PIPLUP,
        .categoryName = _("Penguin"),
        .height = 4,
        .weight = 52,
        .description = COMPOUND_STRING(
            "A poor walker, it often falls down. However,\n"
            "its strong pride makes it puff up its chest\n"
            "without a care. It's difficult to bond with\n"
            "since it won't listen to its Trainer."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Piplup,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Piplup,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Piplup,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Piplup,
        .shinyPalette = gMonShinyPalette_Piplup,
        .iconSprite = gMonIcon_Piplup,
        .iconPalIndex = 0,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Piplup)
        OVERWORLD(
            sPicTable_Piplup,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Piplup,
            gShinyOverworldPalette_Piplup
        )
        .levelUpLearnset = sPiplupLevelUpLearnset,
        .teachableLearnset = sPiplupTeachableLearnset,
        .eggMoveLearnset = sPiplupEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PRINPLUP}),
    },

    [SPECIES_PRINPLUP] =
    {
        .baseHP        = 64,
        .baseAttack    = 66,
        .baseDefense   = 68,
        .baseSpeed     = 50,
        .baseSpAttack  = 81,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 143,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_COMPETITIVE },
    #else
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Prinplup"),
        .cryId = CRY_PRINPLUP,
        .natDexNum = NATIONAL_DEX_PRINPLUP,
        .categoryName = _("Penguin"),
        .height = 8,
        .weight = 230,
        .description = COMPOUND_STRING(
            "Because every Prinplup considers itself\n"
            "to be the most important, they can never\n"
            "form a group. It searches for prey in\n"
            "icy seas."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Prinplup,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Prinplup,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Prinplup,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Prinplup,
        .shinyPalette = gMonShinyPalette_Prinplup,
        .iconSprite = gMonIcon_Prinplup,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Prinplup)
        OVERWORLD(
            sPicTable_Prinplup,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Prinplup,
            gShinyOverworldPalette_Prinplup
        )
        .levelUpLearnset = sPrinplupLevelUpLearnset,
        .teachableLearnset = sPrinplupTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_EMPOLEON}),
    },

    [SPECIES_EMPOLEON] =
    {
        .baseHP        = 84,
        .baseAttack    = 86,
        .baseDefense   = 88,
        .baseSpeed     = 60,
        .baseSpAttack  = 111,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_WATER, TYPE_STEEL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 210,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_COMPETITIVE },
    #else
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Empoleon"),
        .cryId = CRY_EMPOLEON,
        .natDexNum = NATIONAL_DEX_EMPOLEON,
        .categoryName = _("Emperor"),
        .height = 17,
        .weight = 845,
        .description = COMPOUND_STRING(
            "The three horns that extend from its\n"
            "beak attest to its power. It avoids\n"
            "unnecessary disputes, but it will decimate\n"
            "anything that threatens its pride."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Empoleon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Empoleon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Empoleon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Empoleon,
        .shinyPalette = gMonShinyPalette_Empoleon,
        .iconSprite = gMonIcon_Empoleon,
        .iconPalIndex = 0,
        SHADOW(2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Empoleon)
        OVERWORLD(
            sPicTable_Empoleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Empoleon,
            gShinyOverworldPalette_Empoleon
        )
        .levelUpLearnset = sEmpoleonLevelUpLearnset,
        .teachableLearnset = sEmpoleonTeachableLearnset,
    },
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
    [SPECIES_STARLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RECKLESS },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Starly"),
        .cryId = CRY_STARLY,
        .natDexNum = NATIONAL_DEX_STARLY,
        .categoryName = _("Starling"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "They flock around mountains and fields,\n"
            "chasing after bug Pokémon. However,\n"
            "they bicker if the group grows too big.\n"
            "Their singing is noisy and annoying."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Starly,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Starly,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Starly,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Starly,
        .shinyPalette = gMonShinyPalette_Starly,
        .iconSprite = gMonIcon_Starly,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_StarlyF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_StarlyF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Starly)
        OVERWORLD(
            sPicTable_Starly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Starly,
            gShinyOverworldPalette_Starly
        )
        OVERWORLD_FEMALE(
            sPicTable_StarlyF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sStarlyLevelUpLearnset,
        .teachableLearnset = sStarlyTeachableLearnset,
        .eggMoveLearnset = sStarlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_STARAVIA}),
    },

    [SPECIES_STARAVIA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 113,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Staravia"),
        .cryId = CRY_STARAVIA,
        .natDexNum = NATIONAL_DEX_STARAVIA,
        .categoryName = _("Starling"),
        .height = 6,
        .weight = 155,
        .description = COMPOUND_STRING(
            "Recognizing their own weakness, they\n"
            "maintain huge flocks. Fierce scuffles\n"
            "break out between various flocks.\n"
            "When alone, a Staravia cries noisily."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Staravia,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Staravia,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Staravia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Staravia,
        .shinyPalette = gMonShinyPalette_Staravia,
        .iconSprite = gMonIcon_Staravia,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_StaraviaF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_StaraviaF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Staravia)
        OVERWORLD(
            sPicTable_Staravia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Staravia,
            gShinyOverworldPalette_Staravia
        )
        OVERWORLD_FEMALE(
            sPicTable_StaraviaF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sStaraviaLevelUpLearnset,
        .teachableLearnset = sStaraviaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_STARAPTOR}),
    },

    [SPECIES_STARAPTOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 60 : 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 243,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 218,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 214,
    #else
        .expYield = 172,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Staraptor"),
        .cryId = CRY_STARAPTOR,
        .natDexNum = NATIONAL_DEX_STARAPTOR,
        .categoryName = _("Predator"),
        .height = 12,
        .weight = 249,
        .description = COMPOUND_STRING(
            "When Staravia evolve into Staraptor,\n"
            "they leave the flock to live alone. It has\n"
            "a savage nature. It will courageously\n"
            "challenge foes that are much larger."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Staraptor,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Staraptor,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Staraptor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Staraptor,
        .shinyPalette = gMonShinyPalette_Staraptor,
        .iconSprite = gMonIcon_Staraptor,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_StaraptorF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Staraptor)
        OVERWORLD(
            sPicTable_Staraptor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Staraptor,
            gShinyOverworldPalette_Staraptor
        )
        OVERWORLD_FEMALE(
            sPicTable_StaraptorF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sStaraptorLevelUpLearnset,
        .teachableLearnset = sStaraptorTeachableLearnset,
    },
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
    [SPECIES_BIDOOF] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 31,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bidoof"),
        .cryId = CRY_BIDOOF,
        .natDexNum = NATIONAL_DEX_BIDOOF,
        .categoryName = _("Plump Mouse"),
        .height = 5,
        .weight = 200,
        .description = COMPOUND_STRING(
            "A comparison revealed that Bidoof's front\n"
            "teeth grow at the same rate as Rattata's.\n"
            "It constantly gnaws on logs and rocks to\n"
            "whittle down its front teeth."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bidoof,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bidoof,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bidoof,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Bidoof,
        .shinyPalette = gMonShinyPalette_Bidoof,
        .iconSprite = gMonIcon_Bidoof,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BidoofF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_BidoofF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Bidoof)
        OVERWORLD(
            sPicTable_Bidoof,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bidoof,
            gShinyOverworldPalette_Bidoof
        )
        OVERWORLD_FEMALE(
            sPicTable_BidoofF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBidoofLevelUpLearnset,
        .teachableLearnset = sBidoofTeachableLearnset,
        .eggMoveLearnset = sBidoofEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_BIBAREL}),
    },

    [SPECIES_BIBAREL] =
    {
        .baseHP        = 79,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 71,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_WATER),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 116,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bibarel"),
        .cryId = CRY_BIBAREL,
        .natDexNum = NATIONAL_DEX_BIBAREL,
        .categoryName = _("Beaver"),
        .height = 10,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It makes its nest by damming streams\n"
            "with bark and mud. A river dammed by\n"
            "Bibarel will never overflow its banks,\n"
            "which is appreciated by people nearby."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bibarel,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Bibarel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Bibarel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Bibarel,
        .shinyPalette = gMonShinyPalette_Bibarel,
        .iconSprite = gMonIcon_Bibarel,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BibarelF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Bibarel)
        OVERWORLD(
            sPicTable_Bibarel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bibarel,
            gShinyOverworldPalette_Bibarel
        )
        OVERWORLD_FEMALE(
            sPicTable_BibarelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBibarelLevelUpLearnset,
        .teachableLearnset = sBibarelTeachableLearnset,
    },
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
    [SPECIES_KRICKETOT] =
    {
        .baseHP        = 37,
        .baseAttack    = 25,
        .baseDefense   = 41,
        .baseSpeed     = 25,
        .baseSpAttack  = 25,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 39 : 54,
        .evYield_Defense = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kricketot"),
        .cryId = CRY_KRICKETOT,
        .natDexNum = NATIONAL_DEX_KRICKETOT,
        .categoryName = _("Cricket"),
        .height = 3,
        .weight = 22,
        .description = COMPOUND_STRING(
            "It shakes its head back to front,\n"
            "causing its antennae to hit each other\n"
            "and sound like a xylophone.\n"
            "These sounds are fall hallmarks."),
        .pokemonScale = 530,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kricketot,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kricketot,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kricketot,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Kricketot,
        .shinyPalette = gMonShinyPalette_Kricketot,
        .iconSprite = gMonIcon_Kricketot,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KricketotF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_KricketotF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-5, 2, SHADOW_SIZE_S)
        FOOTPRINT(Kricketot)
        OVERWORLD(
            sPicTable_Kricketot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kricketot,
            gShinyOverworldPalette_Kricketot
        )
        OVERWORLD_FEMALE(
            sPicTable_KricketotF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sKricketotLevelUpLearnset,
        .teachableLearnset = sKricketotTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_KRICKETUNE}),
    },

    [SPECIES_KRICKETUNE] =
    {
        .baseHP        = 77,
        .baseAttack    = 85,
        .baseDefense   = 51,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 134 : 159,
        .evYield_Attack = 2,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kricketune"),
        .cryId = CRY_KRICKETUNE,
        .natDexNum = NATIONAL_DEX_KRICKETUNE,
        .categoryName = _("Cricket"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "It signals its emotions with its melodies.\n"
            "There is a village that hosts a contest\n"
            "based on the amazingly variable cries\n"
            "of this Pokémon."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kricketune,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Kricketune,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Kricketune,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Kricketune,
        .shinyPalette = gMonShinyPalette_Kricketune,
        .iconSprite = gMonIcon_Kricketune,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KricketuneF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_KricketuneF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Kricketune)
        OVERWORLD(
            sPicTable_Kricketune,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kricketune,
            gShinyOverworldPalette_Kricketune
        )
        OVERWORLD_FEMALE(
            sPicTable_KricketuneF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sKricketuneLevelUpLearnset,
        .teachableLearnset = sKricketuneTeachableLearnset,
    },
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
    [SPECIES_SHINX] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 34,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 34,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Shinx"),
        .cryId = CRY_SHINX,
        .natDexNum = NATIONAL_DEX_SHINX,
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It rapidly contracts and relaxes its\n"
            "muscles to generate electricity. Its\n"
            "body shines if endangered. It flees\n"
            "while the foe is momentarily blinded."),
        .pokemonScale = 432,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shinx,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shinx,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shinx,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Shinx,
        .shinyPalette = gMonShinyPalette_Shinx,
        .iconSprite = gMonIcon_Shinx,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ShinxF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .backPicFemale = gMonBackPic_ShinxF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Shinx)
        OVERWORLD(
            sPicTable_Shinx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shinx,
            gShinyOverworldPalette_Shinx
        )
        OVERWORLD_FEMALE(
            sPicTable_ShinxF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sShinxLevelUpLearnset,
        .teachableLearnset = sShinxTeachableLearnset,
        .eggMoveLearnset = sShinxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_LUXIO}),
    },

    [SPECIES_LUXIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 49,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 127 : 117,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Luxio"),
        .cryId = CRY_LUXIO,
        .natDexNum = NATIONAL_DEX_LUXIO,
        .categoryName = _("Spark"),
        .height = 9,
        .weight = 305,
        .description = COMPOUND_STRING(
            "Strong electricity courses through the\n"
            "tips of its sharp claws. A light scratch\n"
            "has enough amperage to cause fainting\n"
            "in foes."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luxio,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Luxio,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Luxio,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Luxio,
        .shinyPalette = gMonShinyPalette_Luxio,
        .iconSprite = gMonIcon_Luxio,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LuxioF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_LuxioF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-4, 2, SHADOW_SIZE_M)
        FOOTPRINT(Luxio)
        OVERWORLD(
            sPicTable_Luxio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Luxio,
            gShinyOverworldPalette_Luxio
        )
        OVERWORLD_FEMALE(
            sPicTable_LuxioF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sLuxioLevelUpLearnset,
        .teachableLearnset = sLuxioTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_LUXRAY}),
    },

    [SPECIES_LUXRAY] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 79,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 262,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 235,
    #else
        .expYield = 194,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Luxray"),
        .cryId = CRY_LUXRAY,
        .natDexNum = NATIONAL_DEX_LUXRAY,
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 420,
        .description = COMPOUND_STRING(
            "It has eyes which can see through\n"
            "anything. Luxray's ability to see\n"
            "through objects comes in handy when\n"
            "it's scouting for danger."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luxray,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Luxray,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Luxray,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Luxray,
        .shinyPalette = gMonShinyPalette_Luxray,
        .iconSprite = gMonIcon_Luxray,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LuxrayF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_LuxrayF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Luxray)
        OVERWORLD(
            sPicTable_Luxray,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Luxray,
            gShinyOverworldPalette_Luxray
        )
        OVERWORLD_FEMALE(
            sPicTable_LuxrayF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sLuxrayLevelUpLearnset,
        .teachableLearnset = sLuxrayTeachableLearnset,
    },
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
    [SPECIES_CRANIDOS] =
    {
        .baseHP        = 67,
        .baseAttack    = 125,
        .baseDefense   = 40,
        .baseSpeed     = 58,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 99,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cranidos"),
        .cryId = CRY_CRANIDOS,
        .natDexNum = NATIONAL_DEX_CRANIDOS,
        .categoryName = _("Head Butt"),
        .height = 9,
        .weight = 315,
        .description = COMPOUND_STRING(
            "A lifelong jungle dweller from 100 million\n"
            "years ago, its skull is as hard as iron. \n"
            "It would snap obstructing trees with\n"
            "headbutts."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cranidos,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Cranidos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cranidos,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Cranidos,
        .shinyPalette = gMonShinyPalette_Cranidos,
        .iconSprite = gMonIcon_Cranidos,
        .iconPalIndex = 0,
        SHADOW(4, 4, SHADOW_SIZE_S)
        FOOTPRINT(Cranidos)
        OVERWORLD(
            sPicTable_Cranidos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cranidos,
            gShinyOverworldPalette_Cranidos
        )
        .levelUpLearnset = sCranidosLevelUpLearnset,
        .teachableLearnset = sCranidosTeachableLearnset,
        .eggMoveLearnset = sCranidosEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_RAMPARDOS}),
    },

    [SPECIES_RAMPARDOS] =
    {
        .baseHP        = 97,
        .baseAttack    = 165,
        .baseDefense   = 60,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 199,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Rampardos"),
        .cryId = CRY_RAMPARDOS,
        .natDexNum = NATIONAL_DEX_RAMPARDOS,
        .categoryName = _("Head Butt"),
        .height = 16,
        .weight = 1025,
        .description = COMPOUND_STRING(
            "The result of repeated headbutts\n"
            "is a skull grown thick and hard.\n"
            "However, its brain has shrunk in size\n"
            "compared with Cranidos's."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Rampardos,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rampardos,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Rampardos,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Rampardos,
        .shinyPalette = gMonShinyPalette_Rampardos,
        .iconSprite = gMonIcon_Rampardos,
        .iconPalIndex = 0,
        SHADOW(7, 11, SHADOW_SIZE_L)
        FOOTPRINT(Rampardos)
        OVERWORLD(
            sPicTable_Rampardos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rampardos,
            gShinyOverworldPalette_Rampardos
        )
        .levelUpLearnset = sRampardosLevelUpLearnset,
        .teachableLearnset = sRampardosTeachableLearnset,
    },
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
    [SPECIES_SHIELDON] =
    {
        .baseHP        = 30,
        .baseAttack    = 42,
        .baseDefense   = 118,
        .baseSpeed     = 30,
        .baseSpAttack  = 42,
        .baseSpDefense = 88,
        .types = MON_TYPES(TYPE_ROCK, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 99,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Shieldon"),
        .cryId = CRY_SHIELDON,
        .natDexNum = NATIONAL_DEX_SHIELDON,
        .categoryName = _("Shield"),
        .height = 5,
        .weight = 570,
        .description = COMPOUND_STRING(
            "This Pokémon lived in primeval jungles.\n"
            "Few enemies would have been willing to\n"
            "square off against its heavily armored\n"
            "face, so it's thought."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shieldon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Shieldon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Shieldon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Shieldon,
        .shinyPalette = gMonShinyPalette_Shieldon,
        .iconSprite = gMonIcon_Shieldon,
        .iconPalIndex = 1,
        SHADOW(3, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shieldon)
        OVERWORLD(
            sPicTable_Shieldon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shieldon,
            gShinyOverworldPalette_Shieldon
        )
        .levelUpLearnset = sShieldonLevelUpLearnset,
        .teachableLearnset = sShieldonTeachableLearnset,
        .eggMoveLearnset = sShieldonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_BASTIODON}),
    },

    [SPECIES_BASTIODON] =
    {
        .baseHP        = 60,
        .baseAttack    = 52,
        .baseDefense   = 168,
        .baseSpeed     = 30,
        .baseSpAttack  = 47,
        .baseSpDefense = 138,
        .types = MON_TYPES(TYPE_ROCK, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 199,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Bastiodon"),
        .cryId = CRY_BASTIODON,
        .natDexNum = NATIONAL_DEX_BASTIODON,
        .categoryName = _("Shield"),
        .height = 13,
        .weight = 1495,
        .description = COMPOUND_STRING(
            "Their rock-hard faces serve to protect\n"
            "them from any frontral attacks.\n"
            "When attacked, they form a wall.\n"
            "They shielded their young in that way."),
        .pokemonScale = 272,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bastiodon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Bastiodon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Bastiodon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bastiodon,
        .shinyPalette = gMonShinyPalette_Bastiodon,
        .iconSprite = gMonIcon_Bastiodon,
        .iconPalIndex = 1,
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Bastiodon)
        OVERWORLD(
            sPicTable_Bastiodon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bastiodon,
            gShinyOverworldPalette_Bastiodon
        )
        .levelUpLearnset = sBastiodonLevelUpLearnset,
        .teachableLearnset = sBastiodonTeachableLearnset,
    },
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
    [SPECIES_BURMY_PLANT] =
    {
        .baseHP        = 40,
        .baseAttack    = 29,
        .baseDefense   = 45,
        .baseSpeed     = 36,
        .baseSpAttack  = 29,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 45 : 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Burmy"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "If its cloak is even slightly damaged, it\n"
            "will immediately repair it with whatever is\n"
            "near at hand. The Pokémon within the cloak\n"
            "is scrawny and vulnerable to the cold."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurmyPlantCloak,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmyPlantCloak,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurmyPlantCloak,
        .shinyPalette = gMonShinyPalette_BurmyPlantCloak,
        .iconSprite = gMonIcon_BurmyPlantCloak,
        .iconPalIndex = 1,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_BurmyPlantCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BurmyPlantCloak,
            gShinyOverworldPalette_BurmyPlantCloak
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_PLANT},
                                {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM_PLANT}),
    },

    [SPECIES_BURMY_SANDY] =
    {
        .baseHP        = 40,
        .baseAttack    = 29,
        .baseDefense   = 45,
        .baseSpeed     = 36,
        .baseSpAttack  = 29,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 45 : 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Burmy"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "It weaves a cloak together with sand, mud,\n"
            "and silk it spits out. This earthen cloak\n"
            "is ruined by wind and rain, so the Pokémon\n"
            "hides away in caves and other such places."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurmySandy,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmySandy,
        .backPicSize = MON_COORDS_SIZE(32, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurmySandy,
        .shinyPalette = gMonShinyPalette_BurmySandy,
        .iconSprite = gMonIcon_BurmySandy,
        .iconPalIndex = 1,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_BurmySandy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BurmySandy,
            gShinyOverworldPalette_BurmySandy
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_SANDY},
                                {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM_SANDY}),
    },

    [SPECIES_BURMY_TRASH] =
    {
        .baseHP        = 40,
        .baseAttack    = 29,
        .baseDefense   = 45,
        .baseSpeed     = 36,
        .baseSpAttack  = 29,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 45 : 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Burmy"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "When confronted by a lack of other\n"
            "materials, Burmy will create its cloak\n"
            "using dust and refuse. The cloak seems to\n"
            "be more comfortable than one would think."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurmyTrash,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmyTrash,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurmyTrash,
        .shinyPalette = gMonShinyPalette_BurmyTrash,
        .iconSprite = gMonIcon_BurmyTrash,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_BurmyTrash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BurmyTrash,
            gShinyOverworldPalette_BurmyTrash
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_TRASH},
                                {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM_TRASH}),
    },

    [SPECIES_WORMADAM_PLANT] =
    {
        .baseHP        = 60,
        .baseAttack    = 59,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 79,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Wormadam"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its appearance changes depending\n"
            "on where Burmy evolved. The materials\n"
            "on hand become a part of its body.\n"
            "The cloak is never shed."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WormadamPlantCloak,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamPlantCloak,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_WormadamPlantCloak,
        .shinyPalette = gMonShinyPalette_WormadamPlantCloak,
        .iconSprite = gMonIcon_WormadamPlantCloak,
        .iconPalIndex = 1,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_WormadamPlantCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WormadamPlantCloak,
            gShinyOverworldPalette_WormadamPlantCloak
        )
        .levelUpLearnset = sWormadamPlantCloakLevelUpLearnset,
        .teachableLearnset = sWormadamPlantCloakTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

    [SPECIES_WORMADAM_SANDY] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 105,
        .baseSpeed     = 36,
        .baseSpAttack  = 59,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_BUG, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,
        .evYield_Defense = 2,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Wormadam"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its earthen skin is reasonably hard, it has\n"
            "no problem repelling a Starly's pecking.\n"
            "It is said that a Wormadam that evolves\n"
            "on a cold day will have a thicker cloak."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WormadamSandy,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamSandy,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_WormadamSandy,
        .shinyPalette = gMonShinyPalette_WormadamSandy,
        .iconSprite = gMonIcon_WormadamSandy,
        .iconPalIndex = 1,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_WormadamSandy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WormadamSandy,
            gShinyOverworldPalette_WormadamSandy
        )
        .levelUpLearnset = sWormadamSandyLevelUpLearnset,
        .teachableLearnset = sWormadamSandyTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

    [SPECIES_WORMADAM_TRASH] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 69,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wormadam"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its body, composed of refuse, blends in to\n"
            "the scenery enough to be inconspicuous.\n"
            "This seems to be the perfect way for it to\n"
            "evade the detection of predators."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WormadamTrash,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamTrash,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_WormadamTrash,
        .shinyPalette = gMonShinyPalette_WormadamTrash,
        .iconSprite = gMonIcon_WormadamTrash,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_WormadamTrash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WormadamTrash,
            gShinyOverworldPalette_WormadamTrash
        )
        .levelUpLearnset = sWormadamTrashLevelUpLearnset,
        .teachableLearnset = sWormadamTrashTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

#define MOTHIM_SPECIES_INFO                                                 \
    {                                                                       \
        .baseHP        = 70,                                                \
        .baseAttack    = 94,                                                \
        .baseDefense   = 50,                                                \
        .baseSpeed     = 66,                                                \
        .baseSpAttack  = 94,                                                \
        .baseSpDefense = 50,                                                \
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),                          \
        .catchRate = 45,                                                    \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,            \
        .evYield_Attack = 1,                                                \
        .evYield_SpAttack = 1,                                              \
        .itemRare = ITEM_SILVER_POWDER,                                     \
        .genderRatio = MON_MALE,                                            \
        .eggCycles = 15,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                         \
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS },  \
        .bodyColor = BODY_COLOR_YELLOW,                                     \
        .speciesName = _("Mothim"),                                         \
        .cryId = CRY_MOTHIM,                                                \
        .natDexNum = NATIONAL_DEX_MOTHIM,                                   \
        .categoryName = _("Moth"),                                          \
        .height = 9,                                                        \
        .weight = 233,                                                      \
        .description = gMothimPokedexText,                                  \
        .pokemonScale = 338,                                                \
        .pokemonOffset = 8,                                                 \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,                                                 \
        .frontPic = gMonFrontPic_Mothim,                                    \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                            \
        .frontPicYOffset = 12,                                              \
        .frontAnimFrames = sAnims_Mothim,                                   \
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,                                 \
        .enemyMonElevation = 10,                                            \
        .backPic = gMonBackPic_Mothim,                                      \
        .backPicSize = MON_COORDS_SIZE(64, 56),                             \
        .backPicYOffset = 8,                                                \
        .backAnimId = BACK_ANIM_H_SHAKE,                                    \
        .palette = gMonPalette_Mothim,                                      \
        .shinyPalette = gMonShinyPalette_Mothim,                            \
        .iconSprite = gMonIcon_Mothim,                                      \
        .iconPalIndex = 0,                                                  \
        SHADOW(-1, 9, SHADOW_SIZE_S)                                    \
        FOOTPRINT(Mothim)                                                   \
        OVERWORLD(                                                          \
            sPicTable_Mothim,                                               \
            SIZE_32x32,                                                     \
            SHADOW_SIZE_M,                                                  \
            TRACKS_FOOT,                                                    \
            gOverworldPalette_Mothim,                                       \
            gShinyOverworldPalette_Mothim                                   \
        )                                                                   \
        .levelUpLearnset = sMothimLevelUpLearnset,                          \
        .teachableLearnset = sMothimTeachableLearnset,                      \
        .formSpeciesIdTable = sMothimFormSpeciesIdTable,                    \
    }

    [SPECIES_MOTHIM_PLANT] = MOTHIM_SPECIES_INFO,
    [SPECIES_MOTHIM_SANDY] = MOTHIM_SPECIES_INFO,
    [SPECIES_MOTHIM_TRASH] = MOTHIM_SPECIES_INFO,
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
    [SPECIES_COMBEE] =
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
        .abilities = { ABILITY_HONEY_GATHER, ABILITY_NONE, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Combee"),
        .cryId = CRY_COMBEE,
        .natDexNum = NATIONAL_DEX_COMBEE,
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
        .frontAnimFrames = sAnims_Combee,
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
        .paletteFemale = gMonPalette_CombeeF,
        .shinyPaletteFemale = gMonShinyPalette_CombeeF,
#endif //P_GENDER_DIFFERENCES
        SHADOW(-4, 10, SHADOW_SIZE_S)
        FOOTPRINT(Combee)
        OVERWORLD(
            sPicTable_Combee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Combee,
            gShinyOverworldPalette_Combee
        )
        OVERWORLD_FEMALE(
            sPicTable_CombeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCombeeLevelUpLearnset,
        .teachableLearnset = sCombeeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 21, SPECIES_VESPIQUEN}),
    },

    [SPECIES_VESPIQUEN] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 102,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 102,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 188,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Vespiquen"),
        .cryId = CRY_VESPIQUEN,
        .natDexNum = NATIONAL_DEX_VESPIQUEN,
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
        .frontPic = gMonFrontPic_Vespiquen,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Vespiquen,
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Vespiquen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Vespiquen,
        .shinyPalette = gMonShinyPalette_Vespiquen,
        .iconSprite = gMonIcon_Vespiquen,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Vespiquen)
        OVERWORLD(
            sPicTable_Vespiquen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vespiquen,
            gShinyOverworldPalette_Vespiquen
        )
        .levelUpLearnset = sVespiquenLevelUpLearnset,
        .teachableLearnset = sVespiquenTeachableLearnset,
    },
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
    [SPECIES_PACHIRISU] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 120,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_VOLT_ABSORB },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pachirisu"),
        .cryId = CRY_PACHIRISU,
        .natDexNum = NATIONAL_DEX_PACHIRISU,
        .categoryName = _("EleSquirrel"),
        .height = 4,
        .weight = 39,
        .description = COMPOUND_STRING(
            "A pair may be seen rubbing their cheek\n"
            "pouches together in an effort to share\n"
            "stored electricity. It stores them with\n"
            "berries in tree holes."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pachirisu,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pachirisu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pachirisu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pachirisu,
        .shinyPalette = gMonShinyPalette_Pachirisu,
        .iconSprite = gMonIcon_Pachirisu,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PachirisuF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pachirisu)
        OVERWORLD(
            sPicTable_Pachirisu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pachirisu,
            gShinyOverworldPalette_Pachirisu
        )
        OVERWORLD_FEMALE(
            sPicTable_PachirisuF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sPachirisuLevelUpLearnset,
        .teachableLearnset = sPachirisuTeachableLearnset,
        .eggMoveLearnset = sPachirisuEggMoveLearnset,
    },
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
    [SPECIES_BUIZEL] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 75,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Buizel"),
        .cryId = CRY_BUIZEL,
        .natDexNum = NATIONAL_DEX_BUIZEL,
        .categoryName = _("Sea Weasel"),
        .height = 7,
        .weight = 295,
        .description = COMPOUND_STRING(
            "It inflates its flotation sac, keeping its\n"
            "face above water in order to watch for\n"
            "prey movement. It swims by rotating its\n"
            "two tails like a screw."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Buizel,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Buizel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Buizel,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Buizel,
        .shinyPalette = gMonShinyPalette_Buizel,
        .iconSprite = gMonIcon_Buizel,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_BuizelF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Buizel)
        OVERWORLD(
            sPicTable_Buizel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Buizel,
            gShinyOverworldPalette_Buizel
        )
        OVERWORLD_FEMALE(
            sPicTable_BuizelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBuizelLevelUpLearnset,
        .teachableLearnset = sBuizelTeachableLearnset,
        .eggMoveLearnset = sBuizelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_FLOATZEL}),
    },

    [SPECIES_FLOATZEL] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 178,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Floatzel"),
        .cryId = CRY_FLOATZEL,
        .natDexNum = NATIONAL_DEX_FLOATZEL,
        .categoryName = _("Sea Weasel"),
        .height = 11,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Its flotation sac developed as a result\n"
            "of pursuing aquatic prey. It can double\n"
            "as a rubber raft. It assists in the rescues\n"
            "of drowning people."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Floatzel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Floatzel,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Floatzel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Floatzel,
        .shinyPalette = gMonShinyPalette_Floatzel,
        .iconSprite = gMonIcon_Floatzel,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_FloatzelF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-4, 10, SHADOW_SIZE_M)
        FOOTPRINT(Floatzel)
        OVERWORLD(
            sPicTable_Floatzel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Floatzel,
            gShinyOverworldPalette_Floatzel
        )
        OVERWORLD_FEMALE(
            sPicTable_FloatzelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sFloatzelLevelUpLearnset,
        .teachableLearnset = sFloatzelTeachableLearnset,
    },
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
    [SPECIES_CHERUBI] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 35,
        .baseSpAttack  = 62,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 55 : 68,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cherubi"),
        .cryId = CRY_CHERUBI,
        .natDexNum = NATIONAL_DEX_CHERUBI,
        .categoryName = _("Cherry"),
        .height = 4,
        .weight = 33,
        .description = COMPOUND_STRING(
            "The small ball holds the nutrients needed\n"
            "for evolution. Apparently, it is also very\n"
            "sweet and tasty. Pokémon like Starly and\n"
            "Taillow try to peck it off."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cherubi,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Cherubi,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cherubi,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Cherubi,
        .shinyPalette = gMonShinyPalette_Cherubi,
        .iconSprite = gMonIcon_Cherubi,
        .iconPalIndex = 1,
        SHADOW(-4, -2, SHADOW_SIZE_S)
        FOOTPRINT(Cherubi)
        OVERWORLD(
            sPicTable_Cherubi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cherubi,
            gShinyOverworldPalette_Cherubi
        )
        .levelUpLearnset = sCherubiLevelUpLearnset,
        .teachableLearnset = sCherubiTeachableLearnset,
        .eggMoveLearnset = sCherubiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_CHERRIM_OVERCAST}),
    },

    [SPECIES_CHERRIM_OVERCAST] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 85,
        .baseSpAttack  = 87,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 133,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_FLOWER_GIFT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Cherrim"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "It's motionless, save for the occasional\n"
            "quiver. A rich array of Pokémon can be\n"
            "found gathered around it, drawn by the\n"
            "scent exuded from Cherrim's folded petals."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CherrimOvercast,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_CherrimOvercast,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CherrimOvercast,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_CherrimOvercast,
        .shinyPalette = gMonShinyPalette_CherrimOvercast,
        .iconSprite = gMonIcon_CherrimOvercast,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Cherrim)
        OVERWORLD(
            sPicTable_CherrimOvercast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_CherrimOvercast,
            gShinyOverworldPalette_CherrimOvercast
        )
        .levelUpLearnset = sCherrimLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .formSpeciesIdTable = sCherrimFormSpeciesIdTable,
        .formChangeTable = sCherrimFormChangeTable,
    },

    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 85,
        .baseSpAttack  = 87,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 133,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_FLOWER_GIFT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cherrim"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "Cherrim takes this form on sunny days.\n"
            "Its faint scent entices bug Pokémon to it.\n"
            "It immediately closes its petals and\n"
            "becomes immobile once the sun hides."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CherrimSunshine,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_CherrimSunshine,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_CherrimSunshine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CherrimSunshine,
        .shinyPalette = gMonShinyPalette_CherrimSunshine,
        .iconSprite = gMonIcon_CherrimSunshine,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Cherrim)
        .levelUpLearnset = sCherrimLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .formSpeciesIdTable = sCherrimFormSpeciesIdTable,
        .formChangeTable = sCherrimFormChangeTable,
    },
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
    [SPECIES_SHELLOS_WEST] =
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
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Shellos"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It oozes a purple fluid to deter enemies.\n"
            "While harmless, the fluid is awfully sticky.\n"
            "Apparently, there are more West Sea\n"
            "Shellos now than there were in the past."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShellosWestSea,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosWestSea,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_ShellosWestSea,
        .shinyPalette = gMonShinyPalette_ShellosWestSea,
        .iconSprite = gMonIcon_ShellosWestSea,
        .iconPalIndex = 0,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_ShellosWestSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ShellosWestSea,
            gShinyOverworldPalette_ShellosWestSea
        )
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GASTRODON_WEST}),
    },

    [SPECIES_SHELLOS_EAST] =
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
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Shellos"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It's capable of spending a limited amount\n"
            "of time on land until their skin dries out.\n"
            "One theory suggests that living in cold\n"
            "seas causes Shellos to take on this form."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShellosEast,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosEast,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_ShellosEast,
        .shinyPalette = gMonShinyPalette_ShellosEast,
        .iconSprite = gMonIcon_ShellosEast,
        .iconPalIndex = 0,
        SHADOW(2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_ShellosEast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ShellosEast,
            gShinyOverworldPalette_ShellosEast
        )
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GASTRODON_EAST}),
    },

    [SPECIES_GASTRODON_WEST] =
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
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_GASTRODON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "It appears on shallow-water beaches to\n"
            "eat sand for nourishment. Should one\n"
            "Gastrodon encounter another of a\n"
            "different color, a fierce battle will ensue."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GastrodonWestSea,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonWestSea,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GastrodonWestSea,
        .shinyPalette = gMonShinyPalette_GastrodonWestSea,
        .iconSprite = gMonIcon_GastrodonWestSea,
        .iconPalIndex = 0,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_GastrodonWestSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GastrodonWestSea,
            gShinyOverworldPalette_GastrodonWestSea
        )
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },

    [SPECIES_GASTRODON_EAST] =
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
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_GASTRODON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "Found more often on land than in the sea.\n"
            "They normally live in rocky seashores, but\n"
            "when cloudy or rainy, they can sometimes\n"
            "be found on mountains, far from the sea."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GastrodonEast,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonEast,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GastrodonEast,
        .shinyPalette = gMonShinyPalette_GastrodonEast,
        .iconSprite = gMonIcon_GastrodonEast,
        .iconPalIndex = 0,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_GastrodonEast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GastrodonEast,
            gShinyOverworldPalette_GastrodonEast
        )
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
    [SPECIES_DRIFLOON] =
    {
        .baseHP        = 90,
        .baseAttack    = 50,
        .baseDefense   = 34,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 127,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Drifloon"),
        .cryId = CRY_DRIFLOON,
        .natDexNum = NATIONAL_DEX_DRIFLOON,
        .categoryName = _("Balloon"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Because of the way it floats aimlessly,\n"
            "an old folktale calls it a “Signpost for\n"
            "Wandering Spirits.” Children holding\n"
            "them sometimes vanish."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drifloon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drifloon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Drifloon,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Drifloon,
        .shinyPalette = gMonShinyPalette_Drifloon,
        .iconSprite = gMonIcon_Drifloon,
        .iconPalIndex = 2,
        SHADOW(1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Drifloon)
        OVERWORLD(
            sPicTable_Drifloon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drifloon,
            gShinyOverworldPalette_Drifloon
        )
        .levelUpLearnset = sDrifloonLevelUpLearnset,
        .teachableLearnset = sDrifloonTeachableLearnset,
        .eggMoveLearnset = sDrifloonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_DRIFBLIM}),
    },

    [SPECIES_DRIFBLIM] =
    {
        .baseHP        = 150,
        .baseAttack    = 80,
        .baseDefense   = 44,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 174 : 204,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Drifblim"),
        .cryId = CRY_DRIFBLIM,
        .natDexNum = NATIONAL_DEX_DRIFBLIM,
        .categoryName = _("Blimp"),
        .height = 12,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Even while under careful observation,\n"
            "large flocks of Drifblim flying at dusk\n"
            "will inexplicably disappear from view.\n"
            "No one knows where they go."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drifblim,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drifblim,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Drifblim,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Drifblim,
        .shinyPalette = gMonShinyPalette_Drifblim,
        .iconSprite = gMonIcon_Drifblim,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Drifblim)
        OVERWORLD(
            sPicTable_Drifblim,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drifblim,
            gShinyOverworldPalette_Drifblim
        )
        .levelUpLearnset = sDrifblimLevelUpLearnset,
        .teachableLearnset = sDrifblimTeachableLearnset,
    },
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
    [SPECIES_BUNEARY] =
    {
        .baseHP        = 55,
        .baseAttack    = 66,
        .baseDefense   = 44,
        .baseSpeed     = 85,
        .baseSpAttack  = 44,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 84,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KLUTZ, ABILITY_LIMBER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Buneary"),
        .cryId = CRY_BUNEARY,
        .natDexNum = NATIONAL_DEX_BUNEARY,
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING(
            "You can tell how it feels by the way\n"
            "it rolls its ears. When it's scared,\n"
            "both ears are rolled up. When it senses\n"
            "danger, it perks them up."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Buneary,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Buneary,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Buneary,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Buneary,
        .shinyPalette = gMonShinyPalette_Buneary,
        .iconSprite = gMonIcon_Buneary,
        .iconPalIndex = 2,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Buneary)
        OVERWORLD(
            sPicTable_Buneary,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Buneary,
            gShinyOverworldPalette_Buneary
        )
        .levelUpLearnset = sBunearyLevelUpLearnset,
        .teachableLearnset = sBunearyTeachableLearnset,
        .eggMoveLearnset = sBunearyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_LOPUNNY}),
    },

    [SPECIES_LOPUNNY] =
    {
        .baseHP        = 65,
        .baseAttack    = 76,
        .baseDefense   = 84,
        .baseSpeed     = 105,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 178,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_KLUTZ, ABILITY_LIMBER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopunny"),
        .cryId = CRY_LOPUNNY,
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .description = COMPOUND_STRING(
            "An extremely cautious Pokémon.\n"
            "It is very conscious of its looks and\n"
            "never fails to groom its ears.\n"
            "It runs with sprightly jumps."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lopunny,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Lopunny,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Lopunny,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Lopunny,
        .shinyPalette = gMonShinyPalette_Lopunny,
        .iconSprite = gMonIcon_Lopunny,
        .iconPalIndex = 2,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Lopunny)
        OVERWORLD(
            sPicTable_Lopunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lopunny,
            gShinyOverworldPalette_Lopunny
        )
        .levelUpLearnset = sLopunnyLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .formSpeciesIdTable = sLopunnyFormSpeciesIdTable,
        .formChangeTable = sLopunnyFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LOPUNNY_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 136,
        .baseDefense   = 94,
        .baseSpeed     = 135,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .catchRate = 60,
        .expYield = 203,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SCRAPPY, ABILITY_SCRAPPY, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopunny"),
        #if P_USE_EXTRA_MEGA_CRY
        .cryId = CRY_LOPUNNY_MEGA,
        #else
        .cryId = CRY_LOPUNNY,
        #endif //P_USE_EXTRA_MEGA_CRY
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 13,
        .weight = 283,
        .description = COMPOUND_STRING(
            "Mega Evolution awakens its combative\n"
            "instincts. It has shed any fur that got in\n"
            "the way of its attacks.\n"
            "crescent."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LopunnyMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_LopunnyMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LopunnyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_LopunnyMega,
        .shinyPalette = gMonShinyPalette_LopunnyMega,
        .iconSprite = gMonIcon_LopunnyMega,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Lopunny)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLopunnyLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .formSpeciesIdTable = sLopunnyFormSpeciesIdTable,
        .formChangeTable = sLopunnyFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
    [SPECIES_GLAMEOW] =
    {
        .baseHP        = 49,
        .baseAttack    = 55,
        .baseDefense   = 42,
        .baseSpeed     = 85,
        .baseSpAttack  = 42,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 71,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIMBER, ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glameow"),
        .cryId = CRY_GLAMEOW,
        .natDexNum = NATIONAL_DEX_GLAMEOW,
        .categoryName = _("Catty"),
        .height = 5,
        .weight = 39,
        .description = COMPOUND_STRING(
            "It is a very fickle Pokémon, which is \n"
            "very popular among some. It claws its\n"
            "Trainer's nose if it isn't fed and\n"
            "purrs when affectionate."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glameow,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Glameow,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Glameow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Glameow,
        .shinyPalette = gMonShinyPalette_Glameow,
        .iconSprite = gMonIcon_Glameow,
        .iconPalIndex = 0,
        SHADOW(-3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Glameow)
        OVERWORLD(
            sPicTable_Glameow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glameow,
            gShinyOverworldPalette_Glameow
        )
        .levelUpLearnset = sGlameowLevelUpLearnset,
        .teachableLearnset = sGlameowTeachableLearnset,
        .eggMoveLearnset = sGlameowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_PURUGLY}),
    },

    [SPECIES_PURUGLY] =
    {
        .baseHP        = 71,
        .baseAttack    = 82,
        .baseDefense   = 64,
        .baseSpeed     = 112,
        .baseSpAttack  = 64,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 183,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Purugly"),
        .cryId = CRY_PURUGLY,
        .natDexNum = NATIONAL_DEX_PURUGLY,
        .categoryName = _("Tiger Cat"),
        .height = 10,
        .weight = 438,
        .description = COMPOUND_STRING(
            "It is a brazen brute that barges its way\n"
            "into another Pokémon's nest and claims\n"
            "it as its own. It binds its body with its\n"
            "tails to make itself look bigger."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Purugly,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Purugly,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Purugly,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Purugly,
        .shinyPalette = gMonShinyPalette_Purugly,
        .iconSprite = gMonIcon_Purugly,
        .iconPalIndex = 0,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Purugly)
        OVERWORLD(
            sPicTable_Purugly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Purugly,
            gShinyOverworldPalette_Purugly
        )
        .levelUpLearnset = sPuruglyLevelUpLearnset,
        .teachableLearnset = sPuruglyTeachableLearnset,
    },
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
    [SPECIES_STUNKY] =
    {
        .baseHP        = 63,
        .baseAttack    = 63,
        .baseDefense   = 47,
        .baseSpeed     = 74,
        .baseSpAttack  = 41,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 79,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STENCH, ABILITY_AFTERMATH, ABILITY_KEEN_EYE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Stunky"),
        .cryId = CRY_STUNKY,
        .natDexNum = NATIONAL_DEX_STUNKY,
        .categoryName = _("Skunk"),
        .height = 4,
        .weight = 192,
        .description = COMPOUND_STRING(
            "It protects itself by spraying a\n"
            "nose-curling, stinky fluid from its rear\n"
            "to repel attackers. The stench lingers\n"
            "for 24 hours."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Stunky,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Stunky,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Stunky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Stunky,
        .shinyPalette = gMonShinyPalette_Stunky,
        .iconSprite = gMonIcon_Stunky,
        .iconPalIndex = 2,
        SHADOW(-1, 0, SHADOW_SIZE_M)
        FOOTPRINT(Stunky)
        OVERWORLD(
            sPicTable_Stunky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stunky,
            gShinyOverworldPalette_Stunky
        )
        .levelUpLearnset = sStunkyLevelUpLearnset,
        .teachableLearnset = sStunkyTeachableLearnset,
        .eggMoveLearnset = sStunkyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SKUNTANK}),
    },

    [SPECIES_SKUNTANK] =
    {
        .baseHP        = 103,
        .baseAttack    = 93,
        .baseDefense   = 67,
        .baseSpeed     = 84,
        .baseSpAttack  = 71,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 209,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STENCH, ABILITY_AFTERMATH, ABILITY_KEEN_EYE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Skuntank"),
        .cryId = CRY_SKUNTANK,
        .natDexNum = NATIONAL_DEX_SKUNTANK,
        .categoryName = _("Skunk"),
        .height = 10,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It attacks by spraying a horribly smelly\n"
            "fluid from the tip of its tail. The fluid\n"
            "smells worse the longer it is allowed\n"
            "to fester."),
        .pokemonScale = 305,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skuntank,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Skuntank,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Skuntank,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Skuntank,
        .shinyPalette = gMonShinyPalette_Skuntank,
        .iconSprite = gMonIcon_Skuntank,
        .iconPalIndex = 2,
        SHADOW(-3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Skuntank)
        OVERWORLD(
            sPicTable_Skuntank,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Skuntank,
            gShinyOverworldPalette_Skuntank
        )
        .levelUpLearnset = sSkuntankLevelUpLearnset,
        .teachableLearnset = sSkuntankTeachableLearnset,
    },
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
    [SPECIES_BRONZOR] =
    {
        .baseHP        = 57,
        .baseAttack    = 24,
        .baseDefense   = 86,
        .baseSpeed     = 23,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 72,
        .evYield_Defense = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bronzor"),
        .cryId = CRY_BRONZOR,
        .natDexNum = NATIONAL_DEX_BRONZOR,
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Implements shaped like it were discovered\n"
            "in ancient tombs. There are researchers\n"
            "who believe this Pokémon reflected like a\n"
            "mirror in the distant past."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bronzor,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Bronzor,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Bronzor,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Bronzor,
        .shinyPalette = gMonShinyPalette_Bronzor,
        .iconSprite = gMonIcon_Bronzor,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Bronzor)
        OVERWORLD(
            sPicTable_Bronzor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bronzor,
            gShinyOverworldPalette_Bronzor
        )
        .levelUpLearnset = sBronzorLevelUpLearnset,
        .teachableLearnset = sBronzorTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_BRONZONG}),
    },

    [SPECIES_BRONZONG] =
    {
        .baseHP        = 67,
        .baseAttack    = 89,
        .baseDefense   = 116,
        .baseSpeed     = 33,
        .baseSpAttack  = 79,
        .baseSpDefense = 116,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 188,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bronzong"),
        .cryId = CRY_BRONZONG,
        .natDexNum = NATIONAL_DEX_BRONZONG,
        .categoryName = _("Bronze Bell"),
        .height = 13,
        .weight = 1870,
        .description = COMPOUND_STRING(
            "In ages past, this Pokémon was revered as\n"
            "a bringer of rain. One caused a news stir\n"
            "when it was dug up at a construction site\n"
            "after a 2000-year sleep."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bronzong,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Bronzong,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Bronzong,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bronzong,
        .shinyPalette = gMonShinyPalette_Bronzong,
        .iconSprite = gMonIcon_Bronzong,
        .iconPalIndex = 0,
        SHADOW(5, 12, SHADOW_SIZE_M)
        FOOTPRINT(Bronzong)
        OVERWORLD(
            sPicTable_Bronzong,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bronzong,
            gShinyOverworldPalette_Bronzong
        )
        .levelUpLearnset = sBronzongLevelUpLearnset,
        .teachableLearnset = sBronzongTeachableLearnset,
    },
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
    [SPECIES_CHATOT] =
    {
        .baseHP        = 76,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 91,
        .baseSpAttack  = 92,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 107,
        .evYield_Attack = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chatot"),
        .cryId = CRY_CHATOT,
        .natDexNum = NATIONAL_DEX_CHATOT,
        .categoryName = _("Music Note"),
        .height = 5,
        .weight = 19,
        .description = COMPOUND_STRING(
            "It mimics the cries of other Pokémon to\n"
            "trick them into thinking it's one of them.\n"
            "This way they won't attack it. It can\n"
            "also learn and speak human words."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chatot,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Chatot,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Chatot,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Chatot,
        .shinyPalette = gMonShinyPalette_Chatot,
        .iconSprite = gMonIcon_Chatot,
        .iconPalIndex = 0,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chatot)
        OVERWORLD(
            sPicTable_Chatot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chatot,
            gShinyOverworldPalette_Chatot
        )
        .levelUpLearnset = sChatotLevelUpLearnset,
        .teachableLearnset = sChatotTeachableLearnset,
        .eggMoveLearnset = sChatotEggMoveLearnset,
    },
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
    [SPECIES_SPIRITOMB] =
    {
        .baseHP        = 50,
        .baseAttack    = 92,
        .baseDefense   = 108,
        .baseSpeed     = 35,
        .baseSpAttack  = 92,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DARK),
        .catchRate = 100,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 168,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Spiritomb"),
        .cryId = CRY_SPIRITOMB,
        .natDexNum = NATIONAL_DEX_SPIRITOMB,
        .categoryName = _("Forbidden"),
        .height = 10,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "A Pokémon that was formed by 108 spirits.\n"
            "Its constant mischief and misdeeds\n"
            "resulted in it being bound to an\n"
            "Odd Keystone by a mysterious spell."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spiritomb,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Spiritomb,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Spiritomb,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Spiritomb,
        .shinyPalette = gMonShinyPalette_Spiritomb,
        .iconSprite = gMonIcon_Spiritomb,
        .iconPalIndex = 5,
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Spiritomb)
        OVERWORLD(
            sPicTable_Spiritomb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spiritomb,
            gShinyOverworldPalette_Spiritomb
        )
        .levelUpLearnset = sSpiritombLevelUpLearnset,
        .teachableLearnset = sSpiritombTeachableLearnset,
        .eggMoveLearnset = sSpiritombEggMoveLearnset,
    },
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
    [SPECIES_GIBLE] =
    {
        .baseHP        = 58,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 67,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gible"),
        .cryId = CRY_GIBLE,
        .natDexNum = NATIONAL_DEX_GIBLE,
        .categoryName = _("Land Shark"),
        .height = 7,
        .weight = 205,
        .description = COMPOUND_STRING(
            "It nests in horizontal holes warmed by\n"
            "geothermal heat. Foes who stray too\n"
            "close can expect to be pounced on\n"
            "and bitten."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gible,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Gible,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gible,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Gible,
        .shinyPalette = gMonShinyPalette_Gible,
        .iconSprite = gMonIcon_Gible,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GibleF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_GibleF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Gible)
        OVERWORLD(
            sPicTable_Gible,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gible,
            gShinyOverworldPalette_Gible
        )
        OVERWORLD_FEMALE(
            sPicTable_GibleF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sGibleLevelUpLearnset,
        .teachableLearnset = sGibleTeachableLearnset,
        .eggMoveLearnset = sGibleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GABITE}),
    },

    [SPECIES_GABITE] =
    {
        .baseHP        = 68,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 82,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gabite"),
        .cryId = CRY_GABITE,
        .natDexNum = NATIONAL_DEX_GABITE,
        .categoryName = _("Cave"),
        .height = 14,
        .weight = 560,
        .description = COMPOUND_STRING(
            "Shiny objects are its passion. It can be\n"
            "found in its cave, scarcely moving,\n"
            "its gaze fixed on the jewels it's amassed\n"
            "or Carbink it has caught."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gabite,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gabite,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gabite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gabite,
        .shinyPalette = gMonShinyPalette_Gabite,
        .iconSprite = gMonIcon_Gabite,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GabiteF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_GabiteF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gabite)
        OVERWORLD(
            sPicTable_Gabite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gabite,
            gShinyOverworldPalette_Gabite
        )
        OVERWORLD_FEMALE(
            sPicTable_GabiteF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sGabiteLevelUpLearnset,
        .teachableLearnset = sGabiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_GARCHOMP}),
    },

    [SPECIES_GARCHOMP] =
    {
        .baseHP        = 108,
        .baseAttack    = 130,
        .baseDefense   = 95,
        .baseSpeed     = 102,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garchomp"),
        .cryId = CRY_GARCHOMP,
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .description = COMPOUND_STRING(
            "When it folds up its body and extends its\n"
            "wings, it looks like a jet plane. It is\n"
            "covered in fine scales that reduce drag,\n"
            "enabling it to fly at high speeds."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Garchomp,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Garchomp,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Garchomp,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Garchomp,
        .shinyPalette = gMonShinyPalette_Garchomp,
        .iconSprite = gMonIcon_Garchomp,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GarchompF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Garchomp)
        OVERWORLD(
            sPicTable_Garchomp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Garchomp,
            gShinyOverworldPalette_Garchomp
        )
        OVERWORLD_FEMALE(
            sPicTable_GarchompF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
        .formSpeciesIdTable = sGarchompFormSpeciesIdTable,
        .formChangeTable = sGarchompFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA] =
    {
        .baseHP        = 108,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 92,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garchomp"),
        #if P_USE_EXTRA_MEGA_CRY
        .cryId = CRY_GARCHOMP_MEGA,
        #else
        .cryId = CRY_GARCHOMP,
        #endif //P_USE_EXTRA_MEGA_CRY
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .description = COMPOUND_STRING(
            "Excess energy melted its arms and wings\n"
            "into giant scythes, sending it mad with\n"
            "rage. It swings its scythes wildly and\n"
            "slices the ground to pieces."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GarchompMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GarchompMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GarchompMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_GarchompMega,
        .shinyPalette = gMonShinyPalette_GarchompMega,
        .iconSprite = gMonIcon_GarchompMega,
        .iconPalIndex = 0,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Garchomp)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
        .formSpeciesIdTable = sGarchompFormSpeciesIdTable,
        .formChangeTable = sGarchompFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
    [SPECIES_RIOLU] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 72,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Riolu"),
        .cryId = CRY_RIOLU,
        .natDexNum = NATIONAL_DEX_RIOLU,
        .categoryName = _("Emanation"),
        .height = 7,
        .weight = 202,
        .description = COMPOUND_STRING(
            "It can discern the physical and emotional\n"
            "states of people, Pokémon, and other\n"
            "natural things from the shape of their\n"
            "aura waves."),
        .pokemonScale = 365,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Riolu,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Riolu,
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Riolu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Riolu,
        .shinyPalette = gMonShinyPalette_Riolu,
        .iconSprite = gMonIcon_Riolu,
        .iconPalIndex = 2,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Riolu)
        OVERWORLD(
            sPicTable_Riolu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Riolu,
            gShinyOverworldPalette_Riolu
        )
        .levelUpLearnset = sRioluLevelUpLearnset,
        .teachableLearnset = sRioluTeachableLearnset,
        .eggMoveLearnset = sRioluEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_DAY, 0, SPECIES_LUCARIO}),
    },

    [SPECIES_LUCARIO] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 204,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_JUSTIFIED },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lucario"),
        .cryId = CRY_LUCARIO,
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 12,
        .weight = 540,
        .description = COMPOUND_STRING(
            "It understands human speech.\n"
            "It is said that no foe can remain invisible\n"
            "to Lucario, since it can detect Auras.\n"
            "Even foes it could not otherwise see."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lucario,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lucario,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lucario,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Lucario,
        .shinyPalette = gMonShinyPalette_Lucario,
        .iconSprite = gMonIcon_Lucario,
        .iconPalIndex = 2,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Lucario)
        OVERWORLD(
            sPicTable_Lucario,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lucario,
            gShinyOverworldPalette_Lucario
        )
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .formSpeciesIdTable = sLucarioFormSpeciesIdTable,
        .formChangeTable = sLucarioFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 145,
        .baseDefense   = 88,
        .baseSpeed     = 112,
        .baseSpAttack  = 140,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 219,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lucario"),
        #if P_USE_EXTRA_MEGA_CRY
        .cryId = CRY_LUCARIO_MEGA,
        #else
        .cryId = CRY_LUCARIO,
        #endif //P_USE_EXTRA_MEGA_CRY
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 13,
        .weight = 575,
        .description = COMPOUND_STRING(
            "It readies itself to face its enemies by\n"
            "focusing its mental energies. Its fighting\n"
            "style can be summed up in a single word:\n"
            "heartless."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LucarioMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_LucarioMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LucarioMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_LucarioMega,
        .shinyPalette = gMonShinyPalette_LucarioMega,
        .iconSprite = gMonIcon_LucarioMega,
        .iconPalIndex = 2,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lucario)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .formSpeciesIdTable = sLucarioFormSpeciesIdTable,
        .formChangeTable = sLucarioFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
    [SPECIES_HIPPOPOTAS] =
    {
        .baseHP        = 68,
        .baseAttack    = 72,
        .baseDefense   = 78,
        .baseSpeed     = 32,
        .baseSpAttack  = 38,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 140,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 95,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hippopotas"),
        .cryId = CRY_HIPPOPOTAS,
        .natDexNum = NATIONAL_DEX_HIPPOPOTAS,
        .categoryName = _("Hippo"),
        .height = 8,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Hippopotas shuts its nostrils tight when\n"
            "travelling through sand. Instead of\n"
            "perspiration, it expels grains of sand\n"
            "from its body."),
        .pokemonScale = 366,
        .pokemonOffset = 11,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hippopotas,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Hippopotas,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Hippopotas,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Hippopotas,
        .shinyPalette = gMonShinyPalette_Hippopotas,
        .iconSprite = gMonIcon_Hippopotas,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_HippopotasF,
        .shinyPaletteFemale = gMonShinyPalette_HippopotasF,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_HippopotasF,
        .iconPalIndexFemale = 1,
    #endif
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, -1, SHADOW_SIZE_L)
        FOOTPRINT(Hippopotas)
        OVERWORLD(
            sPicTable_Hippopotas,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hippopotas,
            gShinyOverworldPalette_Hippopotas
        )
        OVERWORLD_FEMALE(
            sPicTable_HippopotasF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sHippopotasLevelUpLearnset,
        .teachableLearnset = sHippopotasTeachableLearnset,
        .eggMoveLearnset = sHippopotasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_HIPPOWDON}),
    },

    [SPECIES_HIPPOWDON] =
    {
        .baseHP        = 108,
        .baseAttack    = 112,
        .baseDefense   = 118,
        .baseSpeed     = 47,
        .baseSpAttack  = 68,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hippowdon"),
        .cryId = CRY_HIPPOWDON,
        .natDexNum = NATIONAL_DEX_HIPPOWDON,
        .categoryName = _("Heavyweight"),
        .height = 20,
        .weight = 3000,
        .description = COMPOUND_STRING(
            "It is surprisingly quick to anger.\n"
            "It brandishes its gaping mouth in a\n"
            "display of fearsome strength and raises\n"
            "vast quantities of sand while attacking."),
        .pokemonScale = 261,
        .pokemonOffset = 2,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Hippowdon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Hippowdon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Hippowdon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hippowdon,
        .shinyPalette = gMonShinyPalette_Hippowdon,
        .iconSprite = gMonIcon_Hippowdon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_HippowdonF,
        .shinyPaletteFemale = gMonShinyPalette_HippowdonF,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_HippowdonF,
        .iconPalIndexFemale = 1,
    #endif
#endif //P_GENDER_DIFFERENCES
        NO_SHADOW
        FOOTPRINT(Hippowdon)
        OVERWORLD(
            sPicTable_Hippowdon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hippowdon,
            gShinyOverworldPalette_Hippowdon
        )
        OVERWORLD_PAL_FEMALE(
            gOverworldPalette_HippowdonF,
            gShinyOverworldPalette_HippowdonF
        )
        .levelUpLearnset = sHippowdonLevelUpLearnset,
        .teachableLearnset = sHippowdonTeachableLearnset,
    },
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
    [SPECIES_SKORUPI] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_POISON, TYPE_BUG),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 114,
        .evYield_Defense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Skorupi"),
        .cryId = CRY_SKORUPI,
        .natDexNum = NATIONAL_DEX_SKORUPI,
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "It grips prey with its tail claws and\n"
            "injects poison. It tenaciously hangs\n"
            "on until the poison takes.\n"
            "It can survive a year without food."),
        .pokemonScale = 366,
        .pokemonOffset = 12,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skorupi,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Skorupi,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Skorupi,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Skorupi,
        .shinyPalette = gMonShinyPalette_Skorupi,
        .iconSprite = gMonIcon_Skorupi,
        .iconPalIndex = 0,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Skorupi)
        OVERWORLD(
            sPicTable_Skorupi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Skorupi,
            gShinyOverworldPalette_Skorupi
        )
        .levelUpLearnset = sSkorupiLevelUpLearnset,
        .teachableLearnset = sSkorupiTeachableLearnset,
        .eggMoveLearnset = sSkorupiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DRAPION}),
    },

    [SPECIES_DRAPION] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 110,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 204,
        .evYield_Defense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Drapion"),
        .cryId = CRY_DRAPION,
        .natDexNum = NATIONAL_DEX_DRAPION,
        .categoryName = _("Ogre Scorp"),
        .height = 13,
        .weight = 615,
        .description = COMPOUND_STRING(
            "Possessing a sturdy build, it takes\n"
            "pride in its strength. It has the power\n"
            "in its clawed arms to make scrap\n"
            "out of a car."),
        .pokemonScale = 272,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drapion,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Drapion,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Drapion,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Drapion,
        .shinyPalette = gMonShinyPalette_Drapion,
        .iconSprite = gMonIcon_Drapion,
        .iconPalIndex = 2,
        SHADOW(-3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Drapion)
        OVERWORLD(
            sPicTable_Drapion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drapion,
            gShinyOverworldPalette_Drapion
        )
        .levelUpLearnset = sDrapionLevelUpLearnset,
        .teachableLearnset = sDrapionTeachableLearnset,
    },
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
    [SPECIES_CROAGUNK] =
    {
        .baseHP        = 48,
        .baseAttack    = 61,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 61,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_POISON, TYPE_FIGHTING),
        .catchRate = 140,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 83,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Croagunk"),
        .cryId = CRY_CROAGUNK,
        .natDexNum = NATIONAL_DEX_CROAGUNK,
        .categoryName = _("Toxic Mouth"),
        .height = 7,
        .weight = 230,
        .description = COMPOUND_STRING(
            "Croagunk rarely fights fairly. Inflating\n"
            "its poison sacs, it fills the area with\n"
            "an odd sound and hits flinching\n"
            "opponents with a poison jab."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Croagunk,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Croagunk,
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Croagunk,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Croagunk,
        .shinyPalette = gMonShinyPalette_Croagunk,
        .iconSprite = gMonIcon_Croagunk,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CroagunkF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_CroagunkF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Croagunk)
        OVERWORLD(
            sPicTable_Croagunk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Croagunk,
            gShinyOverworldPalette_Croagunk
        )
        OVERWORLD_FEMALE(
            sPicTable_CroagunkF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sCroagunkLevelUpLearnset,
        .teachableLearnset = sCroagunkTeachableLearnset,
        .eggMoveLearnset = sCroagunkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_TOXICROAK}),
    },

    [SPECIES_TOXICROAK] =
    {
        .baseHP        = 83,
        .baseAttack    = 106,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 86,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_POISON, TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 181,
        .evYield_Attack = 2,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Toxicroak"),
        .cryId = CRY_TOXICROAK,
        .natDexNum = NATIONAL_DEX_TOXICROAK,
        .categoryName = _("Toxic Mouth"),
        .height = 13,
        .weight = 444,
        .description = COMPOUND_STRING(
            "Swaying and dodging the attacks\n"
            "of its foes, it weaves its flexible body\n"
            "in close, then lunges out with its\n"
            "poisonous claws."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toxicroak,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Toxicroak,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toxicroak,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Toxicroak,
        .shinyPalette = gMonShinyPalette_Toxicroak,
        .iconSprite = gMonIcon_Toxicroak,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ToxicroakF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_ToxicroakF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Toxicroak)
        OVERWORLD(
            sPicTable_Toxicroak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Toxicroak,
            gShinyOverworldPalette_Toxicroak
        )
        OVERWORLD_FEMALE(
            sPicTable_ToxicroakF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sToxicroakLevelUpLearnset,
        .teachableLearnset = sToxicroakTeachableLearnset,
    },
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
    [SPECIES_CARNIVINE] =
    {
        .baseHP        = 74,
        .baseAttack    = 100,
        .baseDefense   = 72,
        .baseSpeed     = 46,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 164,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Carnivine"),
        .cryId = CRY_CARNIVINE,
        .natDexNum = NATIONAL_DEX_CARNIVINE,
        .categoryName = _("Bug Catcher"),
        .height = 14,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Hanging from branches using its\n"
            "tentacles, it looks like a plant.\n"
            "It attracts prey with its sweet-smelling\n"
            "saliva, then chomps down."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carnivine,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Carnivine,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Carnivine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Carnivine,
        .shinyPalette = gMonShinyPalette_Carnivine,
        .iconSprite = gMonIcon_Carnivine,
        .iconPalIndex = 1,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Carnivine)
        OVERWORLD(
            sPicTable_Carnivine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Carnivine,
            gShinyOverworldPalette_Carnivine
        )
        .levelUpLearnset = sCarnivineLevelUpLearnset,
        .teachableLearnset = sCarnivineTeachableLearnset,
        .eggMoveLearnset = sCarnivineEggMoveLearnset,
    },
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
    [SPECIES_FINNEON] =
    {
        .baseHP        = 49,
        .baseAttack    = 49,
        .baseDefense   = 56,
        .baseSpeed     = 66,
        .baseSpAttack  = 49,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 90,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Finneon"),
        .cryId = CRY_FINNEON,
        .natDexNum = NATIONAL_DEX_FINNEON,
        .categoryName = _("Wing Fish"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Its double tail fins propel its energetic\n"
            "jumps. When it breaks the surface of the\n"
            "sea, Wingull swoop down to grab it on\n"
            "the fly."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Finneon,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Finneon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Finneon,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Finneon,
        .shinyPalette = gMonShinyPalette_Finneon,
        .iconSprite = gMonIcon_Finneon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_FinneonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 40),
        .backPicFemale = gMonBackPic_FinneonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Finneon)
        OVERWORLD(
            sPicTable_Finneon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Finneon,
            gShinyOverworldPalette_Finneon
        )
        OVERWORLD_FEMALE(
            sPicTable_FinneonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sFinneonLevelUpLearnset,
        .teachableLearnset = sFinneonTeachableLearnset,
        .eggMoveLearnset = sFinneonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_LUMINEON}),
    },

    [SPECIES_LUMINEON] =
    {
        .baseHP        = 69,
        .baseAttack    = 69,
        .baseDefense   = 76,
        .baseSpeed     = 91,
        .baseSpAttack  = 69,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 156,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lumineon"),
        .cryId = CRY_LUMINEON,
        .natDexNum = NATIONAL_DEX_LUMINEON,
        .categoryName = _("Neon"),
        .height = 12,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Lumineon swimming in the darkness\n"
            "of the deep sea look like stars shining\n"
            "in the night sky. It competes for food\n"
            "with Lanturn."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lumineon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Lumineon,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Lumineon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Lumineon,
        .shinyPalette = gMonShinyPalette_Lumineon,
        .iconSprite = gMonIcon_Lumineon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LumineonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_LumineonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Lumineon)
        OVERWORLD(
            sPicTable_Lumineon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lumineon,
            gShinyOverworldPalette_Lumineon
        )
        OVERWORLD_FEMALE(
            sPicTable_LumineonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sLumineonLevelUpLearnset,
        .teachableLearnset = sLumineonTeachableLearnset,
    },
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
    [SPECIES_SNOVER] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ICE),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 67 : 131,
        .evYield_Attack = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Snover"),
        .cryId = CRY_SNOVER,
        .natDexNum = NATIONAL_DEX_SNOVER,
        .categoryName = _("Frost Tree"),
        .height = 10,
        .weight = 505,
        .description = COMPOUND_STRING(
            "During cold seasons, it migrates to the\n"
            "mountain's lower reaches. Seemingly\n"
            "curious about people, they gather around\n"
            "footsteps they find on snowy mountains."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snover,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Snover,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Snover,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Snover,
        .shinyPalette = gMonShinyPalette_Snover,
        .iconSprite = gMonIcon_Snover,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SnoverF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_SnoverF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Snover)
        OVERWORLD(
            sPicTable_Snover,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snover,
            gShinyOverworldPalette_Snover
        )
        OVERWORLD_FEMALE(
            sPicTable_SnoverF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sSnoverLevelUpLearnset,
        .teachableLearnset = sSnoverTeachableLearnset,
        .eggMoveLearnset = sSnoverEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_ABOMASNOW}),
    },

    [SPECIES_ABOMASNOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 92,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 214,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Abomasnow"),
        .cryId = CRY_ABOMASNOW,
        .natDexNum = NATIONAL_DEX_ABOMASNOW,
        .categoryName = _("Frost Tree"),
        .height = 22,
        .weight = 1355,
        .description = COMPOUND_STRING(
            "It lives a quiet life on mountains that\n"
            "are perpetually covered in snow. It hides\n"
            "itself by whipping up blizzards.\n"
            "It is also known as “The Ice Monster.”"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Abomasnow,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Abomasnow,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Abomasnow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Abomasnow,
        .shinyPalette = gMonShinyPalette_Abomasnow,
        .iconSprite = gMonIcon_Abomasnow,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AbomasnowF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Abomasnow)
        OVERWORLD(
            sPicTable_Abomasnow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Abomasnow,
            gShinyOverworldPalette_Abomasnow
        )
        OVERWORLD_FEMALE(
            sPicTable_AbomasnowF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sAbomasnowLevelUpLearnset,
        .teachableLearnset = sAbomasnowTeachableLearnset,
        .formSpeciesIdTable = sAbomasnowFormSpeciesIdTable,
        .formChangeTable = sAbomasnowFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 132,
        .baseDefense   = 105,
        .baseSpeed     = 30,
        .baseSpAttack  = 132,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ICE),
        .catchRate = 60,
        .expYield = 208,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Abomasnow"),
        #if P_USE_EXTRA_MEGA_CRY
        .cryId = CRY_ABOMASNOW_MEGA,
        #else
        .cryId = CRY_ABOMASNOW,
        #endif //P_USE_EXTRA_MEGA_CRY
        .natDexNum = NATIONAL_DEX_ABOMASNOW,
        .categoryName = _("Frost Tree"),
        .height = 27,
        .weight = 1850,
        .description = COMPOUND_STRING(
            "The sprouts on Abomasnow's back grow into\n"
            "great shafts of ice when it Mega Evolves.\n"
            "Dislikes associating with others and\n"
            "chooses to live quietly deep in mountains."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_AbomasnowMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_AbomasnowMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AbomasnowMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_AbomasnowMega,
        .shinyPalette = gMonShinyPalette_AbomasnowMega,
        .iconSprite = gMonIcon_AbomasnowMega,
        .iconPalIndex = 1,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Abomasnow)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAbomasnowLevelUpLearnset,
        .teachableLearnset = sAbomasnowTeachableLearnset,
        .formSpeciesIdTable = sAbomasnowFormSpeciesIdTable,
        .formChangeTable = sAbomasnowFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 77,
        .baseSpeed     = 91,
        .baseSpAttack  = 95,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 132,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Its body is composed of plasma and loves\n"
            "to surprise others. One boy's invention led\n"
            "to the development of many machines that\n"
            "can use of Rotom's unique capabilities."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rotom,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Rotom,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Rotom,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Rotom,
        .shinyPalette = gMonShinyPalette_Rotom,
        .iconSprite = gMonIcon_Rotom,
        .iconPalIndex = 0,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_Rotom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rotom,
            gShinyOverworldPalette_Rotom
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ROTOM_APPLIANCE_EXP_YIELD 182
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ROTOM_APPLIANCE_EXP_YIELD 154
#else
    #define ROTOM_APPLIANCE_EXP_YIELD 132
#endif

    [SPECIES_ROTOM_HEAT] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FIRE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "If the convection microwave oven is\n"
            "not working properly, then the Rotom\n"
            "inhabiting it will become lethargic. It\n"
            "makes mischief by turning up the heat."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomHeat,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_RotomHeat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomHeat,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_RotomHeat,
        .shinyPalette = gMonShinyPalette_RotomHeat,
        .iconSprite = gMonIcon_RotomHeat,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomHeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RotomHeat,
            gShinyOverworldPalette_RotomHeat
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_WASH] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_WATER),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It enjoys coming up with water-based\n"
            "pranks. The model of washing machine that\n"
            "Rotom can inspirit has been discontinued,\n"
            "so they are now traded at high prices."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomWash,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_RotomWash,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomWash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_RotomWash,
        .shinyPalette = gMonShinyPalette_RotomWash,
        .iconSprite = gMonIcon_RotomWash,
        .iconPalIndex = 0,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomWash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RotomWash,
            gShinyOverworldPalette_RotomWash
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_FROST] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_ICE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "In this form, Rotom likes to play freezing\n"
            "cold pranks. You may find it's turned the\n"
            "bath you just filled to solid ice!\n"
            "It battles by spewing cold air."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomFrost,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_RotomFrost,
        .frontAnimId = ANIM_H_STRETCH,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFrost,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_RotomFrost,
        .shinyPalette = gMonShinyPalette_RotomFrost,
        .iconSprite = gMonIcon_RotomFrost,
        .iconPalIndex = 5,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomFrost,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RotomFrost,
            gShinyOverworldPalette_RotomFrost
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_FAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The first appliance developed that Rotom\n"
            "could inspirit was the electric fan.\n"
            "It uses its power over wind in its pranks,\n"
            "blowing any important documents it finds."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomFan,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RotomFan,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .frontAnimDelay = 7,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_RotomFan,
        .shinyPalette = gMonShinyPalette_RotomFan,
        .iconSprite = gMonIcon_RotomFan,
        .iconPalIndex = 0,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomFan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RotomFan,
            gShinyOverworldPalette_RotomFan
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_MOW] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The lawn mower is an appliance that led to\n"
            "the development of the Rotom Dex. It will\n"
            "mow down grass and flowers, then swagger\n"
            "around with pride at its accomplishments."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomMow,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_RotomMow,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomMow,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_RotomMow,
        .shinyPalette = gMonShinyPalette_RotomMow,
        .iconSprite = gMonIcon_RotomMow,
        .iconPalIndex = 0,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomMow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RotomMow,
            gShinyOverworldPalette_RotomMow
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
    [SPECIES_UXIE] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Uxie"),
        .cryId = CRY_UXIE,
        .natDexNum = NATIONAL_DEX_UXIE,
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Known as ”The Being of Knowledge,”\n"
            "according to some sources, this Pokémon\n"
            "provided people with the intelligence\n"
            "necessary to solve various problems."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Uxie,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Uxie,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Uxie,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Uxie,
        .shinyPalette = gMonShinyPalette_Uxie,
        .iconSprite = gMonIcon_Uxie,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Uxie)
        OVERWORLD(
            sPicTable_Uxie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Uxie,
            gShinyOverworldPalette_Uxie
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sUxieLevelUpLearnset,
        .teachableLearnset = sUxieTeachableLearnset,
    },
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mesprit"),
        .cryId = CRY_MESPRIT,
        .natDexNum = NATIONAL_DEX_MESPRIT,
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Although it slumbers at the bottom of a\n"
            "lake, its spirit is said to leave its body\n"
            "and flitter on the water surface. It\n"
            "taught humans of sorrow, pain, and joy."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mesprit,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Mesprit,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Mesprit,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mesprit,
        .shinyPalette = gMonShinyPalette_Mesprit,
        .iconSprite = gMonIcon_Mesprit,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Mesprit)
        OVERWORLD(
            sPicTable_Mesprit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mesprit,
            gShinyOverworldPalette_Mesprit
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMespritLevelUpLearnset,
        .teachableLearnset = sMespritTeachableLearnset,
    },
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
    [SPECIES_AZELF] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 125,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azelf"),
        .cryId = CRY_AZELF,
        .natDexNum = NATIONAL_DEX_AZELF,
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "This Pokémon is said to have endowed\n"
            "humans with the determination needed to\n"
            "do things. It is thought that Uxie, Mesprit\n"
            "and Azelf all came from the same egg."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Azelf,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Azelf,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Azelf,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Azelf,
        .shinyPalette = gMonShinyPalette_Azelf,
        .iconSprite = gMonIcon_Azelf,
        .iconPalIndex = 0,
        SHADOW(0, 17, SHADOW_SIZE_S)
        FOOTPRINT(Azelf)
        OVERWORLD(
            sPicTable_Azelf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Azelf,
            gShinyOverworldPalette_Azelf
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAzelfLevelUpLearnset,
        .teachableLearnset = sAzelfTeachableLearnset,
    },
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DIALGA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DIALGA_EXP_YIELD  306
#else
    #define DIALGA_EXP_YIELD  220
#endif

    [SPECIES_DIALGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = DIALGA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dialga"),
        .cryId = CRY_DIALGA,
        .natDexNum = NATIONAL_DEX_DIALGA,
        .categoryName = _("Temporal"),
        .height = 54,
        .weight = 6830,
        .description = COMPOUND_STRING(
            "A Pokémon spoken of in legend.\n"
            "It completely controls the flow of time.\n"
            "It uses its power to travel at will\n"
            "through the past and future."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Dialga,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dialga,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Dialga,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Dialga,
        .shinyPalette = gMonShinyPalette_Dialga,
        .iconSprite = gMonIcon_Dialga,
        .iconPalIndex = 2,
        SHADOW(4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Dialga)
        OVERWORLD(
            sPicTable_Dialga,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dialga,
            gShinyOverworldPalette_Dialga
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDialgaLevelUpLearnset,
        .teachableLearnset = sDialgaTeachableLearnset,
        .formSpeciesIdTable = sDialgaFormSpeciesIdTable,
        .formChangeTable = sDialgaFormChangeTable,
    },

    [SPECIES_DIALGA_ORIGIN] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = DIALGA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dialga"),
        .cryId = CRY_DIALGA,
        .natDexNum = NATIONAL_DEX_DIALGA,
        .categoryName = _("Temporal"),
        .height = 70,
        .weight = 8500,
        .description = COMPOUND_STRING(
            "Radiant light caused Dialga to take on a\n"
            "form bearing a striking resemblance to the\n"
            "creator Pokémon. It wields such a colossal\n"
            "strength that this might be its true form."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_DialgaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DialgaOrigin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DialgaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DialgaOrigin,
        .shinyPalette = gMonShinyPalette_DialgaOrigin,
        .iconSprite = gMonIcon_DialgaOrigin,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Dialga)
        OVERWORLD(
            sPicTable_DialgaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_DialgaOrigin,
            gShinyOverworldPalette_DialgaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDialgaLevelUpLearnset,
        .teachableLearnset = sDialgaTeachableLearnset,
        .formSpeciesIdTable = sDialgaFormSpeciesIdTable,
        .formChangeTable = sDialgaFormChangeTable,
    },
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define PALKIA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PALKIA_EXP_YIELD  306
#else
    #define PALKIA_EXP_YIELD  220
#endif

    [SPECIES_PALKIA] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = PALKIA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Palkia"),
        .cryId = CRY_PALKIA,
        .natDexNum = NATIONAL_DEX_PALKIA,
        .categoryName = _("Spatial"),
        .height = 42,
        .weight = 3360,
        .description = COMPOUND_STRING(
            "Palkia has the ability to distort space.\n"
            "Its total control over the boundaries of\n"
            "space enable it to transport itself to\n"
            "faraway places and other dimensions."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
        .frontPic = gMonFrontPic_Palkia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Palkia,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Palkia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Palkia,
        .shinyPalette = gMonShinyPalette_Palkia,
        .iconSprite = gMonIcon_Palkia,
        .iconPalIndex = 2,
        SHADOW(0, 10, SHADOW_SIZE_L)
        FOOTPRINT(Palkia)
        OVERWORLD(
            sPicTable_Palkia,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Palkia,
            gShinyOverworldPalette_Palkia
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPalkiaLevelUpLearnset,
        .teachableLearnset = sPalkiaTeachableLearnset,
        .formSpeciesIdTable = sPalkiaFormSpeciesIdTable,
        .formChangeTable = sPalkiaFormChangeTable,
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 120,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = PALKIA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Palkia"),
        .cryId = CRY_PALKIA,
        .natDexNum = NATIONAL_DEX_PALKIA,
        .categoryName = _("Spatial"),
        .height = 63,
        .weight = 6600,
        .description = COMPOUND_STRING(
            "It soars across the sky in a form that\n"
            "resembles the creator of all things.\n"
            "Perhaps this imitation of appearance is a\n"
            "strategy for gaining Arceus's powers."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
        .frontPic = gMonFrontPic_PalkiaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PalkiaOrigin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PalkiaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PalkiaOrigin,
        .shinyPalette = gMonShinyPalette_PalkiaOrigin,
        .iconSprite = gMonIcon_PalkiaOrigin,
        .iconPalIndex = 2,
        SHADOW(-3, 14, SHADOW_SIZE_L)
        FOOTPRINT(Palkia)
        OVERWORLD(
            sPicTable_PalkiaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_PalkiaOrigin,
            gShinyOverworldPalette_PalkiaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPalkiaLevelUpLearnset,
        .teachableLearnset = sPalkiaTeachableLearnset,
        .formSpeciesIdTable = sPalkiaFormSpeciesIdTable,
        .formChangeTable = sPalkiaFormChangeTable,
    },
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
    [SPECIES_HEATRAN] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 106,
        .baseSpeed     = 77,
        .baseSpAttack  = 130,
        .baseSpDefense = 106,
        .types = MON_TYPES(TYPE_FIRE, TYPE_STEEL),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 215,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Heatran"),
        .cryId = CRY_HEATRAN,
        .natDexNum = NATIONAL_DEX_HEATRAN,
        .categoryName = _("Lava Dome"),
        .height = 17,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "Boiling blood, like magma, circulates\n"
            "through its body. It dwells in volcanic\n"
            "caves, using its cross-shaped feet\n"
            "to crawl on ceilings and walls."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Heatran,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Heatran,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .backPic = gMonBackPic_Heatran,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Heatran,
        .shinyPalette = gMonShinyPalette_Heatran,
        .iconSprite = gMonIcon_Heatran,
        .iconPalIndex = 0,
        SHADOW(2, 2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Heatran)
        OVERWORLD(
            sPicTable_Heatran,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Heatran,
            gShinyOverworldPalette_Heatran
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHeatranLevelUpLearnset,
        .teachableLearnset = sHeatranTeachableLearnset,
    },
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
    [SPECIES_REGIGIGAS] =
    {
        .baseHP        = 110,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 335,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 302,
    #else
        .expYield = 220,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SLOW_START, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Regigigas"),
        .cryId = CRY_REGIGIGAS,
        .natDexNum = NATIONAL_DEX_REGIGIGAS,
        .categoryName = _("Colossal"),
        .height = 37,
        .weight = 4200,
        .description = COMPOUND_STRING(
            "There is an enduring legend that\n"
            "states this Pokémon shaped Regirock,\n"
            "Regice, and Registeel out of clay, ice,\n"
            "and magma."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_Regigigas,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Regigigas,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Regigigas,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Regigigas,
        .shinyPalette = gMonShinyPalette_Regigigas,
        .iconSprite = gMonIcon_Regigigas,
        .iconPalIndex = 0,
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Regigigas)
        OVERWORLD(
            sPicTable_Regigigas,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regigigas,
            gShinyOverworldPalette_Regigigas
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegigigasLevelUpLearnset,
        .teachableLearnset = sRegigigasTeachableLearnset,
    },
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GIRATINA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GIRATINA_EXP_YIELD 306
#else
    #define GIRATINA_EXP_YIELD 220
#endif

    [SPECIES_GIRATINA_ALTERED] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = GIRATINA_EXP_YIELD,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Giratina"),
        .cryId = CRY_GIRATINA,
        .natDexNum = NATIONAL_DEX_GIRATINA,
        .categoryName = _("Renegade"),
        .height = 45,
        .weight = 7500,
        .description = COMPOUND_STRING(
            "This Pokémon is said to live in a world\n"
            "on the reverse side of ours, where common\n"
            "knowledge is distorted and strange.\n"
            "It was banished for its violence."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_GiratinaAltered,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GiratinaAltered,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GiratinaAltered,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_GiratinaAltered,
        .shinyPalette = gMonShinyPalette_GiratinaAltered,
        .iconSprite = gMonIcon_GiratinaAltered,
        .iconPalIndex = 0,
        SHADOW(3, 11, SHADOW_SIZE_L)
        FOOTPRINT(GiratinaAltered)
        OVERWORLD(
            sPicTable_GiratinaAltered,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GiratinaAltered,
            gShinyOverworldPalette_GiratinaAltered
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGiratinaLevelUpLearnset,
        .teachableLearnset = sGiratinaTeachableLearnset,
        .formSpeciesIdTable = sGiratinaFormSpeciesIdTable,
        .formChangeTable = sGiratinaFormChangeTable,
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = GIRATINA_EXP_YIELD,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Giratina"),
        .cryId = CRY_GIRATINA,
        .natDexNum = NATIONAL_DEX_GIRATINA,
        .categoryName = _("Renegade"),
        .height = 69,
        .weight = 6500,
        .description = COMPOUND_STRING(
            "Giratina loses its legs upon changing into\n"
            "this form. It's believed it hails from a\n"
            "world where the heavens and the earth\n"
            "are as one."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_GiratinaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GiratinaOrigin,
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_GiratinaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_GiratinaOrigin,
        .shinyPalette = gMonShinyPalette_GiratinaOrigin,
        .iconSprite = gMonIcon_GiratinaOrigin,
        .iconPalIndex = 0,
        SHADOW(0, 18, SHADOW_SIZE_L)
        FOOTPRINT(GiratinaOrigin)
        OVERWORLD(
            sPicTable_GiratinaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GiratinaOrigin,
            gShinyOverworldPalette_GiratinaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGiratinaLevelUpLearnset,
        .teachableLearnset = sGiratinaTeachableLearnset,
        .formSpeciesIdTable = sGiratinaFormSpeciesIdTable,
        .formChangeTable = sGiratinaFormChangeTable,
    },
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
    [SPECIES_CRESSELIA] =
    {
        .baseHP        = 120,
        .baseAttack    = 70,
        .baseDefense   = P_UPDATED_STATS >= GEN_9 ? 110 : 120,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 210,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cresselia"),
        .cryId = CRY_CRESSELIA,
        .natDexNum = NATIONAL_DEX_CRESSELIA,
        .categoryName = _("Lunar"),
        .height = 15,
        .weight = 856,
        .description = COMPOUND_STRING(
            "Those who sleep holding one of\n"
            "Cresselia's feathers are assured of\n"
            "joyful dreams. It is said to represent\n"
            "the crescent moon."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cresselia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Cresselia,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cresselia,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Cresselia,
        .shinyPalette = gMonShinyPalette_Cresselia,
        .iconSprite = gMonIcon_Cresselia,
        .iconPalIndex = 0,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Cresselia)
        OVERWORLD(
            sPicTable_Cresselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cresselia,
            gShinyOverworldPalette_Cresselia
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCresseliaLevelUpLearnset,
        .teachableLearnset = sCresseliaTeachableLearnset,
    },
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
    [SPECIES_PHIONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 165,
    #endif
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYDRATION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Phione"),
        .cryId = CRY_PHIONE,
        .natDexNum = NATIONAL_DEX_PHIONE,
        .categoryName = _("Sea Drifter"),
        .height = 4,
        .weight = 31,
        .description = COMPOUND_STRING(
            "When the water warms, they inflate the\n"
            "flotation sac on their heads and drift\n"
            "languidly on the sea in packs.\n"
            "It always returns to where it was born."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phione,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Phione,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Phione,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Phione,
        .shinyPalette = gMonShinyPalette_Phione,
        .iconSprite = gMonIcon_Phione,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Phione)
        OVERWORLD(
            sPicTable_Phione,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Phione,
            gShinyOverworldPalette_Phione
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPhioneLevelUpLearnset,
        .teachableLearnset = sPhioneTeachableLearnset,
    },

    [SPECIES_MANAPHY] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 215,
    #endif
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYDRATION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Manaphy"),
        .cryId = CRY_MANAPHY,
        .natDexNum = NATIONAL_DEX_MANAPHY,
        .categoryName = _("Seafaring"),
        .height = 3,
        .weight = 14,
        .description = COMPOUND_STRING(
            "Water makes up 80% of its body.\n"
            "It starts its life with a wondrous power\n"
            "that permits it to bond with any kind\n"
            "of Pokémon."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Manaphy,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Manaphy,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Manaphy,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Manaphy,
        .shinyPalette = gMonShinyPalette_Manaphy,
        .iconSprite = gMonIcon_Manaphy,
        .iconPalIndex = 0,
        SHADOW(-5, 8, SHADOW_SIZE_S)
        FOOTPRINT(Manaphy)
        OVERWORLD(
            sPicTable_Manaphy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Manaphy,
            gShinyOverworldPalette_Manaphy
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sManaphyLevelUpLearnset,
        .teachableLearnset = sManaphyTeachableLearnset,
    },
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
    [SPECIES_DARKRAI] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 125,
        .baseSpAttack  = 135,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 210,
    #endif
        .evYield_Speed = 1,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BAD_DREAMS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Darkrai"),
        .cryId = CRY_DARKRAI,
        .natDexNum = NATIONAL_DEX_DARKRAI,
        .categoryName = _("Pitch-Black"),
        .height = 15,
        .weight = 505,
        .description = COMPOUND_STRING(
            "It chases people and Pokémon from its\n"
            "territory by causing them to experience\n"
            "deep, nightmarish slumbers. However,\n"
            "it means no harm."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Darkrai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Darkrai,
        .frontAnimId = ANIM_GLOW_BLACK,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Darkrai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Darkrai,
        .shinyPalette = gMonShinyPalette_Darkrai,
        .iconSprite = gMonIcon_Darkrai,
        .iconPalIndex = 0,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Darkrai)
        OVERWORLD(
            sPicTable_Darkrai,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Darkrai,
            gShinyOverworldPalette_Darkrai
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDarkraiLevelUpLearnset,
        .teachableLearnset = sDarkraiTeachableLearnset,
    },
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define SHAYMIN_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define SHAYMIN_EXP_YIELD 270
#else
    #define SHAYMIN_EXP_YIELD 64
#endif

    [SPECIES_SHAYMIN_LAND] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = SHAYMIN_EXP_YIELD,
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Shaymin"),
        .cryId = CRY_SHAYMIN_LAND,
        .natDexNum = NATIONAL_DEX_SHAYMIN,
        .categoryName = _("Gratitude"),
        .height = 2,
        .weight = 21,
        .description = COMPOUND_STRING(
            "The flowers all over its body bloom if it is\n"
            "lovingly hugged and senses gratitude. It\n"
            "dissolves toxins in the air to transform\n"
            "ruined land into a lush field of flowers."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShayminLand,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_ShayminLand,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ShayminLand,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_ShayminLand,
        .shinyPalette = gMonShinyPalette_ShayminLand,
        .iconSprite = gMonIcon_ShayminLand,
        .iconPalIndex = 1,
        SHADOW(1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Shaymin)
        OVERWORLD(
            sPicTable_ShayminLand,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ShayminLand,
            gShinyOverworldPalette_ShayminLand
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sShayminLandLevelUpLearnset,
        .teachableLearnset = sShayminLandTeachableLearnset,
        .formSpeciesIdTable = sShayminFormSpeciesIdTable,
        .formChangeTable = sShayminFormChangeTable,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,
        .baseAttack    = 103,
        .baseDefense   = 75,
        .baseSpeed     = 127,
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
        .expYield = SHAYMIN_EXP_YIELD,
    #if P_UPDATED_EVS >= GEN_5
        .evYield_Speed = 3,
    #else
        .evYield_HP = 3,
    #endif
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Shaymin"),
        .cryId = CRY_SHAYMIN_SKY,
        .natDexNum = NATIONAL_DEX_SHAYMIN,
        .categoryName = _("Gratitude"),
        .height = 4,
        .weight = 52,
        .description = COMPOUND_STRING(
            "Upon taking in the scent of a particular\n"
            "rare flower, Shaymin is enveloped in light\n"
            "and its tiny body transforms, confering\n"
            "the power of flight upon it."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShayminSky,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ShayminSky,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShayminSky,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_ShayminSky,
        .shinyPalette = gMonShinyPalette_ShayminSky,
        .iconSprite = gMonIcon_ShayminSky,
        .iconPalIndex = 1,
        SHADOW(3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Shaymin)
        OVERWORLD(
            sPicTable_ShayminSky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ShayminSky,
            gShinyOverworldPalette_ShayminSky
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sShayminSkyLevelUpLearnset,
        .teachableLearnset = sShayminSkyTeachableLearnset,
        .formSpeciesIdTable = sShayminFormSpeciesIdTable,
        .formChangeTable = sShayminFormChangeTable,
    },
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define ARCEUS_EXP_YIELD 360
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ARCEUS_EXP_YIELD 324
#else
    #define ARCEUS_EXP_YIELD 255
#endif
#if P_ARCEUS_UNIQUE_FORM_ICONS >= GEN_9
    #define ARCEUS_ICON(typeName, iconPal)        \
        .iconSprite = gMonIcon_Arceus ##typeName, \
        .iconPalIndex = iconPal,
#else
    #define ARCEUS_ICON(typeName, iconPal)   \
        .iconSprite = gMonIcon_ArceusNormal, \
        .iconPalIndex = 1,
#endif

#define ARCEUS_SPECIES_INFO(type, typeName, iconPal)                                \
    {                                                                               \
        .baseHP        = 120,                                                       \
        .baseAttack    = 120,                                                       \
        .baseDefense   = 120,                                                       \
        .baseSpeed     = 120,                                                       \
        .baseSpAttack  = 120,                                                       \
        .baseSpDefense = 120,                                                       \
        .types = MON_TYPES(type),                                                   \
        .catchRate = 3,                                                             \
        .expYield = ARCEUS_EXP_YIELD,                                               \
        .evYield_HP = 3,                                                            \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .abilities = { ABILITY_MULTITYPE, ABILITY_NONE, ABILITY_NONE },             \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .speciesName = _("Arceus"),                                                 \
        .cryId = CRY_ARCEUS,                                                        \
        .natDexNum = NATIONAL_DEX_ARCEUS,                                           \
        .categoryName = _("Alpha"),                                                 \
        .height = 32,                                                               \
        .weight = 3200,                                                             \
        .description = gArceusPokedexText,                                          \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 495,                                                        \
        .trainerOffset = 10,                                                        \
        .frontPic = gMonFrontPic_Arceus,                                            \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = sAnims_Arceus,                                           \
        .frontAnimId = ANIM_GROW_VIBRATE,                                           \
        .backPic = gMonBackPic_Arceus,                                              \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                     \
        .backPicYOffset = 3,                                                        \
        .backAnimId = BACK_ANIM_GROW_STUTTER,                                       \
        .palette = gMonPalette_Arceus ##typeName,                                   \
        .shinyPalette = gMonShinyPalette_Arceus ##typeName,                         \
        ARCEUS_ICON(typeName, iconPal)                                              \
        SHADOW(-1, 15, SHADOW_SIZE_XL_BATTLE_ONLY)                                  \
        FOOTPRINT(Arceus)                                                           \
        OVERWORLD(                                                                  \
            sPicTable_Arceus ##typeName,                                            \
            SIZE_64x64,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            gOverworldPalette_Arceus ##typeName,                                    \
            gShinyOverworldPalette_Arceus ##typeName                                \
        )                                                                           \
        .levelUpLearnset = sArceusLevelUpLearnset,                                  \
        .teachableLearnset = sArceusTeachableLearnset,                              \
        .formSpeciesIdTable = sArceusFormSpeciesIdTable,                            \
        .formChangeTable = sArceusFormChangeTable,                                  \
        .isMythical = TRUE,                                                         \
        .isFrontierBanned = TRUE,                                                   \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT, \
    }

    [SPECIES_ARCEUS_NORMAL]   = ARCEUS_SPECIES_INFO(TYPE_NORMAL,   Normal,   1),
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO(TYPE_FIGHTING, Fighting, 1),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO(TYPE_FLYING,   Flying,   2),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO(TYPE_POISON,   Poison,   2),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO(TYPE_GROUND,   Ground,   1),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO(TYPE_ROCK,     Rock,     2),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO(TYPE_BUG,      Bug,      1),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO(TYPE_GHOST,    Ghost,    2),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO(TYPE_STEEL,    Steel,    0),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO(TYPE_FIRE,     Fire,     0),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO(TYPE_WATER,    Water,    0),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO(TYPE_GRASS,    Grass,    1),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO(TYPE_ELECTRIC, Electric, 3),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO(TYPE_PSYCHIC,  Psychic,  1),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO(TYPE_ICE,      Ice,      0),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO(TYPE_DRAGON,   Dragon,   0),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO(TYPE_DARK,     Dark,     0),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO(TYPE_FAIRY,    Fairy,    0),
#endif //P_FAMILY_ARCEUS

#ifdef __INTELLISENSE__
};
#endif
