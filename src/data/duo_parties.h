#include "constants/duo_parties.h"

//3 is hard coded in
const struct TrainerMon sParty_Duos[][MULTI_PARTY_SIZE] = {
    [PARTY_MINTY_MEADOW_RIVAL] = {
        {
        .iv = TRAINER_PARTY_IVS(12,12,12,12,12,12),
        .lvl = 100,
        .species = SPECIES_ARTICUNO,
        },
        {
        .iv = TRAINER_PARTY_IVS(12,12,12,12,12,12),
        .lvl = 100,
        .species = SPECIES_VOLCARONA,
        }
    },
};