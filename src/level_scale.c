#include "global.h"
#include "level_scale.h"
#include "random.h"
#include "constants/level_scale.h"

s32 GetHighestLevelInPlayerParty(void)
{
    s32 highestLevel = 0;
    s32 i;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL)
            && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, NULL) != SPECIES_EGG)
        {
            s32 level = GetMonData(&gPlayerParty[i], MON_DATA_LEVEL, NULL);
            if (level > highestLevel)
                highestLevel = level;
        }
    }

    return highestLevel;
}

u8 scaleToPlayer(u8 defaultLevel)
{
    s32 level = GetHighestLevelInPlayerParty();
    u32 variance = (Random() % (level / 10)) - (level / 20); //have the level be in between [level - k, level + k], where k is either 0, 1, 2, 3, 4, 5. 
    level += variance;
    if (level > 100)
    {
        level = 100;
    } else if (level < 1)
    {
        level = 1;
    }
    return level;
}

u8 setLevel(u8 defaultLevel, u8 levelMode)
{
    switch (levelMode)
    {
        case LVL_SCALE_MODE_50:
            return 50;
        case LVL_SCALE_MODE_OPEN:
            return defaultLevel;
        case LVL_SCALE_MODE_BATTLE_TENT:
            return defaultLevel;
        case LVL_SCALE_MODE_PREFER_PLAYER:
            return scaleToPlayer(defaultLevel); 
    }

    return defaultLevel; // Do normal behavior
}