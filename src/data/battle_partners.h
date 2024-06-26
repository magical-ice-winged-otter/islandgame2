const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_STEVEN] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("STEVEN"),
    },

    [PARTNER_MEADOWS_RIVAL] = 
    {
        .party = TRAINER_PARTY(sParty_MintyMeadowsRivalPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN, // NOTE THIS DOESN"T WORK AS IS, IT WILL CRASH IF YOU DON'T PROVIDE A PROPER BACKSPRITE
        .trainerName = _("Melissa"),
    }
};
