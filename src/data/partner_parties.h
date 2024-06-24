static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .species = SPECIES_METANG,
        .lvl = 42,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 43,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 44,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
    }
};

static const struct TrainerMon sParty_MintyMeadowsRivalPartner[] = {
    {
    .iv = TRAINER_PARTY_IVS(31,31,31,31,31,31),
    .lvl = 15,
    .species = SPECIES_ROCKRUFF,
    .ability = ABILITY_VITAL_SPIRIT,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_ROCK_TOMB, MOVE_SAND_ATTACK, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31,31,31,31,31,31),
    .lvl = 15,
    .species = SPECIES_DRILBUR,
    .ability = ABILITY_SAND_RUSH,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_METAL_CLAW, MOVE_MUD_SLAP, MOVE_HONE_CLAWS, MOVE_RAPID_SPIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31,31,31,31,31,31),
    .lvl = 15,
    .species = SPECIES_GIBLE,
    .ability = ABILITY_SAND_VEIL,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_SAND_TOMB, MOVE_DRAGON_RAGE, MOVE_SAND_ATTACK, MOVE_METAL_CLAW}
    },
};