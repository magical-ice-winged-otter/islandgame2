  
    [TRAINER_ROCKY_PATH_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Jane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_RockyPath1),
    },

    [TRAINER_ROCKY_PATH_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .items = {},
        .trainerName = _("Jack"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_RockyPath2),
    },

    [TRAINER_ROCKY_PATH_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER_F,
        .trainerName = _("Casey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_RockyPath3),
    },

    [TRAINER_ROCKY_PATH_4] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Mike"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_RockyPath4),
    },

    [TRAINER_ROCKY_PATH_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STRONGEST_MOVE,
        .party = TRAINER_PARTY(sParty_RockyPath5),
    },


    [TRAINER_ROCKY_PATH_6] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Yamcha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_RockyPath6),
    },


// [TRAINER_ROCKY_PATH_KARATE_BRO] =
//     {
//         .trainerClass = TRAINER_CLASS_BLACK_BELT,
//         .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
//         .trainerPic = TRAINER_PIC_BLACK_BELT,
//         .trainerName = _("Lee"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_KarateBro),
//     },

// [TRAINER_ROCKY_PATH_CYCLER_F] = 
//     {
//         .trainerClass = TRAINER_CLASS_TRIATHLETE,
//         .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
//         .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
//         .trainerName = _("Alyssa"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_CyclerF),
//     },

// [TRAINER_ROCKY_PATH_BEAUTY] = 
//     {
//         .trainerClass = TRAINER_CLASS_BEAUTY,
//         .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
//         .trainerPic = TRAINER_PIC_BEAUTY,
//         .trainerName = _("Thalia"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_Beauty),
//     },

// [TRAINER_ROCKY_PATH_CAMPER_F] = 
//     {
//         .trainerClass = TRAINER_CLASS_PICNICKER,
//         .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
//         .trainerPic = TRAINER_PIC_PICNICKER,
//         .trainerName = _("Anna"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_CamperF),
//     },

// [TRAINER_ROCKY_PATH_GENTLEMAN] = 
//     {
//        .trainerClass = TRAINER_CLASS_GENTLEMAN,
//         .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
//         .trainerPic = TRAINER_PIC_GENTLEMAN,
//         .trainerName = _("Walter"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_Gentleman),
//     },

// [TRAINER_ROCKY_PATH_PSYCHIC_F] = 
//     {
//         .trainerClass = TRAINER_CLASS_PSYCHIC,
//         .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
//         .trainerPic = TRAINER_PIC_PSYCHIC_F,
//         .trainerName = _("Sally"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_PsychicF),
//     },

// [TRAINER_ROCKY_PATH_PSYCHIC_M] = 
//     {
//         .trainerClass = TRAINER_CLASS_PSYCHIC,
//         .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
//         .trainerPic = TRAINER_PIC_PSYCHIC_M,
//         .trainerName = _("Cedric"),
//         .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SMART_SWITCHING,
//         .party = TRAINER_PARTY(sParty_RockyPath_PsychicM),
//     },
