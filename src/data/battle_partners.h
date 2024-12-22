//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//


    [PARTNER_NONE] =
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
    [PARTNER_STEVEN] =
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
    [PARTNER_MEADOWS_RIVAL] =
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
            .ability = ABILITY_SAND_RUSH,
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
            .ability = ABILITY_SAND_VEIL,
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_SAND_TOMB,
                MOVE_DRAGON_RAGE,
                MOVE_SAND_ATTACK,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
