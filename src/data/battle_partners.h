//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
        .trainerName = _("None"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
        .trainerName = _("STEVEN"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .lvl = 42,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .lvl = 43,
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .lvl = 44,
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
    [DIFFICULTY_NORMAL][PARTNER_MEADOWS_RIVAL] =
    {
        .trainerName = _("Melissa"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_BACK_PIC_MELISSA,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_MALE,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ability = ABILITY_VITAL_SPIRIT,
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_MALE,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ability = ABILITY_MOLD_BREAKER,
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_METAL_CLAW,
                MOVE_MUD_SLAP,
                MOVE_HONE_CLAWS,
                MOVE_RAPID_SPIN,
            },
            },
            {
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_FEMALE,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ability = ABILITY_ROUGH_SKIN,
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_SAND_TOMB,
                MOVE_OUTRAGE,
                MOVE_SAND_ATTACK,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
    [DIFFICULTY_NORMAL][PARTNER_AETHERIA_WALLY] =
    {
        .trainerName = _("Wally"),
        .trainerClass = TRAINER_CLASS_RIVAL_HOENN,
        .trainerPic = TRAINER_BACK_PIC_WALLY,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_MALE,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ability = ABILITY_CLOUD_NINE,
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .heldItem = ITEM_SITRUS_BERRY,
            .moves = {
                MOVE_DRAGON_BREATH,
                MOVE_FLY,
                MOVE_TAILWIND,
                MOVE_PROTECT,
            },
            },
            {
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ability = ABILITY_ANALYTIC,
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .heldItem = ITEM_MAGNET,
            .moves = {
                MOVE_SHOCK_WAVE,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
                MOVE_REFLECT,
            },
            },
            {
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_MALE,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ability = ABILITY_STEADFAST,
            .lvl = 36,
            .nature = NATURE_HARDY,
            .heldItem = ITEM_GALLADITE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_PSYCHO_CUT,
                MOVE_LEAF_BLADE,
                MOVE_CLOSE_COMBAT,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
