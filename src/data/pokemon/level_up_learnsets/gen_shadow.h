#include "gen_7.h" // use gen 9 move set as well.

// island-game learnsets


#if P_FAMILY_SHADOW_LUGIA
static const struct LevelUpMove sShadowLugiaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_POISON_GAS),
    LEVEL_UP_MOVE( 1, MOVE_WEATHER_BALL),
    LEVEL_UP_MOVE( 9, MOVE_SMOG),
    LEVEL_UP_MOVE(15, MOVE_DRAGON_RUSH),
    LEVEL_UP_MOVE(23, MOVE_EXTRASENSORY),
    LEVEL_UP_MOVE(29, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(37, MOVE_DARK_PULSE),
    LEVEL_UP_MOVE(43, MOVE_AEROBLAST),
    LEVEL_UP_MOVE(45, MOVE_SHADOW_BLAST),
    LEVEL_UP_MOVE(50, MOVE_PUNISHMENT),
    LEVEL_UP_MOVE(57, MOVE_TOXIC),
    LEVEL_UP_MOVE(65, MOVE_SLUDGE_WAVE),
    LEVEL_UP_MOVE(71, MOVE_RECOVER),
    LEVEL_UP_MOVE(79, MOVE_SKY_ATTACK),
    LEVEL_UP_MOVE(85, MOVE_DARK_VOID),
    LEVEL_UP_MOVE(93, MOVE_SHADOW_FORCE),
    LEVEL_UP_MOVE(98, MOVE_AEROBLAST),
    LEVEL_UP_MOVE(99, MOVE_OBLIVION_WING),
    LEVEL_UP_MOVE(100, MOVE_SHADOW_BLAST),
    LEVEL_UP_END
};
#endif

#if P_FAMILY_SHADOW_MIGHTYENA
static const struct LevelUpMove sShadowMightyenaLevelUpLearnset[] = { //todo: shadow mightyena learnset
    LEVEL_UP_MOVE( 0, MOVE_SNARL),
    LEVEL_UP_MOVE( 1, MOVE_SNARL),
    LEVEL_UP_MOVE( 1, MOVE_FIRE_FANG),
    LEVEL_UP_MOVE( 1, MOVE_THUNDER_FANG),
    LEVEL_UP_MOVE( 1, MOVE_ICE_FANG),
    LEVEL_UP_MOVE( 1, MOVE_CRUNCH),
    LEVEL_UP_MOVE( 1, MOVE_THIEF),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_HOWL),
    LEVEL_UP_MOVE( 1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE( 1, MOVE_BITE),
    LEVEL_UP_MOVE( 4, MOVE_HOWL),
    LEVEL_UP_MOVE( 7, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(13, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(16, MOVE_ROAR),
    LEVEL_UP_MOVE(20, MOVE_SWAGGER),
    LEVEL_UP_MOVE(24, MOVE_ASSURANCE),
    LEVEL_UP_MOVE(28, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(32, MOVE_EMBARGO),
    LEVEL_UP_MOVE(36, MOVE_TAUNT),
    LEVEL_UP_MOVE(40, MOVE_CRUNCH),
    LEVEL_UP_MOVE(44, MOVE_YAWN),
    LEVEL_UP_MOVE(48, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(52, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(56, MOVE_PLAY_ROUGH),
    LEVEL_UP_END
};
#endif

#if P_FAMILY_GOLETT_MARYAN
static const struct LevelUpMove sGolettMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_POUND),
    LEVEL_UP_MOVE( 1, MOVE_ASTONISH),
    LEVEL_UP_MOVE( 1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE( 5, MOVE_ICICLE_SPEAR),
    LEVEL_UP_MOVE( 9, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
    LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(21, MOVE_AVALANCHE),
    LEVEL_UP_MOVE(25, MOVE_MEGA_PUNCH),
    LEVEL_UP_MOVE(30, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE(35, MOVE_DRAIN_PUNCH),
    LEVEL_UP_MOVE(40, MOVE_ICE_SHARD),
    LEVEL_UP_MOVE(45, MOVE_POLTERGEIST),
    LEVEL_UP_MOVE(50, MOVE_ICICLE_CRASH),
    LEVEL_UP_MOVE(55, MOVE_DYNAMIC_PUNCH),
    LEVEL_UP_MOVE(61, MOVE_ICE_HAMMER),
    LEVEL_UP_END
};

static const struct LevelUpMove sGolurkMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_HEAVY_SLAM),
    LEVEL_UP_MOVE( 1, MOVE_HEAVY_SLAM),
    LEVEL_UP_MOVE( 1, MOVE_POUND),
    LEVEL_UP_MOVE( 1, MOVE_ASTONISH),
    LEVEL_UP_MOVE( 1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE( 5, MOVE_ICICLE_SPEAR),
    LEVEL_UP_MOVE( 9, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
    LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(21, MOVE_AVALANCHE),
    LEVEL_UP_MOVE(25, MOVE_MEGA_PUNCH),
    LEVEL_UP_MOVE(30, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE(35, MOVE_DRAIN_PUNCH),
    LEVEL_UP_MOVE(40, MOVE_ICE_SHARD),
    LEVEL_UP_MOVE(45, MOVE_POLTERGEIST),
    LEVEL_UP_MOVE(50, MOVE_ICICLE_CRASH),
    LEVEL_UP_MOVE(55, MOVE_DYNAMIC_PUNCH),
    LEVEL_UP_MOVE(61, MOVE_ICE_HAMMER),
    LEVEL_UP_MOVE(68, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(76, MOVE_SHEER_COLD),
    LEVEL_UP_END
};
#endif //P_FAMILY_GOLETT_MARYAN

#if P_FAMILY_FEEBAS_MARYAN
static const struct LevelUpMove sFeebasMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_SPLASH),
    LEVEL_UP_MOVE( 5, MOVE_TACKLE),
    LEVEL_UP_MOVE(10, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(20, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(25, MOVE_FLAIL),
    LEVEL_UP_MOVE(30, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const struct LevelUpMove sMiloticMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE( 1, MOVE_LIFE_DEW),
    LEVEL_UP_MOVE( 1, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE( 1, MOVE_WRAP),
    LEVEL_UP_MOVE( 1, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE( 1, MOVE_ICY_WIND),
    LEVEL_UP_MOVE( 1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE( 4, MOVE_ICY_WIND),
    LEVEL_UP_MOVE( 7, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(10, MOVE_DISARMING_VOICE),
    LEVEL_UP_MOVE(13, MOVE_TWISTER),
    LEVEL_UP_MOVE(16, MOVE_AQUA_RING),
    LEVEL_UP_MOVE(19, MOVE_CAPTIVATE),
    LEVEL_UP_MOVE(22, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(25, MOVE_RECOVER),
    LEVEL_UP_MOVE(28, MOVE_FROST_BREATH),
    LEVEL_UP_MOVE(31, MOVE_ATTRACT),
    LEVEL_UP_MOVE(34, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(37, MOVE_DRAGON_PULSE),
    LEVEL_UP_MOVE(40, MOVE_SNOWSCAPE),
    LEVEL_UP_MOVE(43, MOVE_MIST),
    LEVEL_UP_MOVE(46, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(49, MOVE_HAZE),
    LEVEL_UP_MOVE(52, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(55, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(58, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(65, MOVE_SHEER_COLD),
    LEVEL_UP_END
};
#endif //P_FAMILY_FEEBAS_MARYAN

#if P_FAMILY_PURRLOIN_MARYAN
static const struct LevelUpMove sPurrloinMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 3, MOVE_GROWL),
    LEVEL_UP_MOVE( 6, MOVE_ASSIST),
    LEVEL_UP_MOVE(10, MOVE_PURSUIT),
    LEVEL_UP_MOVE(12, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(15, MOVE_THIEF),
    LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(21, MOVE_SPARK),
    LEVEL_UP_MOVE(24, MOVE_COPYCAT),
    LEVEL_UP_MOVE(28, MOVE_HONE_CLAWS),
    LEVEL_UP_MOVE(30, MOVE_SLASH),
    LEVEL_UP_MOVE(33, MOVE_ELECTRO_BALL),
    LEVEL_UP_MOVE(37, MOVE_NIGHT_SLASH),
    LEVEL_UP_MOVE(39, MOVE_SNATCH),
    LEVEL_UP_MOVE(42, MOVE_NASTY_PLOT),
    LEVEL_UP_MOVE(46, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(49, MOVE_SWITCHEROO),
    LEVEL_UP_MOVE(52, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE(55, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(58, MOVE_KNOCK_OFF),
    LEVEL_UP_END
};

static const struct LevelUpMove sLiepardMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_PARTING_SHOT),
    LEVEL_UP_MOVE( 0, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE( 1, MOVE_FLATTER),
    LEVEL_UP_MOVE( 1, MOVE_YAWN),
    LEVEL_UP_MOVE( 1, MOVE_TORMENT),
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 3, MOVE_GROWL),
    LEVEL_UP_MOVE( 6, MOVE_ASSIST),
    LEVEL_UP_MOVE(10, MOVE_PURSUIT),
    LEVEL_UP_MOVE(12, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(15, MOVE_THIEF),
    LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(21, MOVE_SPARK),
    LEVEL_UP_MOVE(24, MOVE_COPYCAT),
    LEVEL_UP_MOVE(28, MOVE_HONE_CLAWS),
    LEVEL_UP_MOVE(30, MOVE_SLASH),
    LEVEL_UP_MOVE(33, MOVE_ELECTRO_BALL),
    LEVEL_UP_MOVE(37, MOVE_NIGHT_SLASH),
    LEVEL_UP_MOVE(39, MOVE_SNATCH),
    LEVEL_UP_MOVE(42, MOVE_NASTY_PLOT),
    LEVEL_UP_MOVE(46, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(49, MOVE_SWITCHEROO),
    LEVEL_UP_MOVE(52, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE(55, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(58, MOVE_KNOCK_OFF),
    LEVEL_UP_END
};
#endif //P_FAMILY_PURRLOIN_MARYAN

#if P_FAMILY_NINCADA_MARYAN
static const struct LevelUpMove sNincadaMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 5, MOVE_BUG_BITE),
    LEVEL_UP_MOVE( 9, MOVE_FEINT_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(17, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(21, MOVE_THIEF),
    LEVEL_UP_MOVE(25, MOVE_SUBSTITUTE),
    LEVEL_UP_MOVE(29, MOVE_SPIKES),
    LEVEL_UP_MOVE(33, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(37, MOVE_DIG),
    LEVEL_UP_MOVE(40, MOVE_SUCKER_PUNCH),
    LEVEL_UP_END
};

static const struct LevelUpMove sNinjaskMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_FIRST_IMPRESSION),
    LEVEL_UP_MOVE( 0, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE( 0, MOVE_SCREECH),
    LEVEL_UP_MOVE( 1, MOVE_QUICK_GUARD),
    LEVEL_UP_MOVE( 1, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE( 1, MOVE_SCREECH),
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 5, MOVE_BUG_BITE),
    LEVEL_UP_MOVE( 9, MOVE_FEINT_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(17, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(23, MOVE_SLASH),
    LEVEL_UP_MOVE(26, MOVE_U_TURN),
    LEVEL_UP_MOVE(29, MOVE_ASSURANCE),
    LEVEL_UP_MOVE(32, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(35, MOVE_SUBSTITUTE),
    LEVEL_UP_MOVE(38, MOVE_NIGHT_SLASH),
    LEVEL_UP_MOVE(41, MOVE_X_SCISSOR),
    LEVEL_UP_MOVE(44, MOVE_AGILITY),
    LEVEL_UP_MOVE(47, MOVE_DETECT),
    LEVEL_UP_MOVE(50, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(53, MOVE_EXTREME_SPEED),
    LEVEL_UP_END
};

static const struct LevelUpMove sShedinjaMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_SKITTER_SMACK),
    LEVEL_UP_MOVE( 1, MOVE_WIDE_GUARD),
    LEVEL_UP_MOVE( 1, MOVE_CURSE),
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 5, MOVE_BUG_BITE),
    LEVEL_UP_MOVE( 9, MOVE_SPITE),
    LEVEL_UP_MOVE(13, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(17, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(21, MOVE_SHADOW_SNEAK),
    LEVEL_UP_MOVE(24, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(27, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(30, MOVE_SHADOW_CLAW),
    LEVEL_UP_MOVE(33, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(36, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(39, MOVE_HEAL_BLOCK),
    LEVEL_UP_MOVE(42, MOVE_LUNGE),
    LEVEL_UP_MOVE(45, MOVE_GRUDGE),
    LEVEL_UP_MOVE(48, MOVE_PAIN_SPLIT),
    LEVEL_UP_MOVE(51, MOVE_PHANTOM_FORCE),
    LEVEL_UP_END
};
#endif //P_FAMILY_NINCADA_MARYAN

#if P_FAMILY_COMBEE_MARYAN
static const struct LevelUpMove sCombeeMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE( 1, MOVE_GUST),
    LEVEL_UP_MOVE( 5, MOVE_BUG_BITE),
    LEVEL_UP_MOVE(10, MOVE_STRUGGLE_BUG),
    LEVEL_UP_MOVE(25, MOVE_BUG_BUZZ),
    LEVEL_UP_END
};

static const struct LevelUpMove sVespiquenMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_PSYCHO_CUT),
    LEVEL_UP_MOVE( 1, MOVE_FELL_STINGER),
    LEVEL_UP_MOVE( 1, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE( 1, MOVE_REFLECT),
    LEVEL_UP_MOVE( 1, MOVE_PSYBEAM),
    LEVEL_UP_MOVE( 5, MOVE_STRUGGLE_BUG),
    LEVEL_UP_MOVE( 9, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(13, MOVE_MAGIC_COAT),
    LEVEL_UP_MOVE(17, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(25, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(29, MOVE_DEFEND_ORDER),
    LEVEL_UP_MOVE(33, MOVE_ATTACK_ORDER),
    LEVEL_UP_MOVE(37, MOVE_HEAL_ORDER),
    LEVEL_UP_MOVE(41, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(45, MOVE_POWER_GEM),
    LEVEL_UP_MOVE(49, MOVE_BUG_BUZZ),
    LEVEL_UP_MOVE(53, MOVE_DESTINY_BOND),
    LEVEL_UP_MOVE(57, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(57, MOVE_STORED_POWER),
    LEVEL_UP_MOVE(61, MOVE_TRICK_ROOM),
    LEVEL_UP_END
};
#endif //P_FAMILY_COMBEE_MARYAN

#if P_FAMILY_SHELLOS_MARYAN
static const struct LevelUpMove sShellosMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE( 2, MOVE_WATER_GUN),
    LEVEL_UP_MOVE( 4, MOVE_HARDEN),
    LEVEL_UP_MOVE( 7, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(11, MOVE_MUD_BOMB),
    LEVEL_UP_MOVE(16, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(22, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(29, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(37, MOVE_MUDDY_WATER),
    LEVEL_UP_MOVE(46, MOVE_RECOVER),
    LEVEL_UP_END
};

static const struct LevelUpMove sGastrodonMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_MUDDY_WATER),
    LEVEL_UP_MOVE( 1, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE( 1, MOVE_MEMENTO),
    LEVEL_UP_MOVE( 1, MOVE_CURSE),
    LEVEL_UP_MOVE( 1, MOVE_MIST),
    LEVEL_UP_MOVE( 1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE( 1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 1, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE( 2, MOVE_WATER_GUN),
    LEVEL_UP_MOVE( 4, MOVE_HARDEN),
    LEVEL_UP_MOVE( 7, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(11, MOVE_MUD_BOMB),
    LEVEL_UP_MOVE(16, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(22, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(29, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(33, MOVE_YAWN),
    LEVEL_UP_MOVE(36, MOVE_EARTH_POWER),
    LEVEL_UP_MOVE(39, MOVE_RECOVER),
    LEVEL_UP_MOVE(42, MOVE_CLEAR_SMOG),
    LEVEL_UP_MOVE(45, MOVE_AMNESIA),
    LEVEL_UP_MOVE(48, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(51, MOVE_ACID_ARMOR),
    LEVEL_UP_MOVE(54, MOVE_COUNTER),
    LEVEL_UP_MOVE(57, MOVE_SLUDGE_WAVE),
    LEVEL_UP_MOVE(60, MOVE_FISSURE),
    LEVEL_UP_END
};
#endif //P_FAMILY_SHELLOS_MARYAN


#if P_FAMILY_SKITTY_MARYAN
static const struct LevelUpMove sSkittyMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE( 1, MOVE_GROWL),
    LEVEL_UP_MOVE( 1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 4, MOVE_EMBER),
    LEVEL_UP_MOVE( 7, MOVE_SING),
    LEVEL_UP_MOVE(10, MOVE_ATTRACT),
    LEVEL_UP_MOVE(13, MOVE_DISARMING_VOICE),
    LEVEL_UP_MOVE(16, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_COPYCAT),
    LEVEL_UP_MOVE(22, MOVE_FLAME_CHARGE),
    LEVEL_UP_MOVE(25, MOVE_CHARM),
    LEVEL_UP_MOVE(28, MOVE_DRAINING_KISS),
    LEVEL_UP_MOVE(31, MOVE_ASSIST),
    LEVEL_UP_MOVE(34, MOVE_COVET),
    LEVEL_UP_MOVE(37, MOVE_HEAL_BELL),
    LEVEL_UP_MOVE(40, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(43, MOVE_CAPTIVATE),
    LEVEL_UP_MOVE(46, MOVE_HYPER_VOICE),
    LEVEL_UP_MOVE(49, MOVE_FLARE_BLITZ),
    LEVEL_UP_END
};

static const struct LevelUpMove sDelcattyMaryanLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE( 1, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE( 1, MOVE_INCINERATE),
    LEVEL_UP_MOVE( 1, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE( 1, MOVE_GROWL),
    LEVEL_UP_MOVE( 1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 4, MOVE_EMBER),
    LEVEL_UP_MOVE( 7, MOVE_SING),
    LEVEL_UP_MOVE(10, MOVE_ATTRACT),
    LEVEL_UP_MOVE(13, MOVE_DISARMING_VOICE),
    LEVEL_UP_MOVE(16, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_COPYCAT),
    LEVEL_UP_MOVE(22, MOVE_FLAME_CHARGE),
    LEVEL_UP_MOVE(25, MOVE_CHARM),
    LEVEL_UP_MOVE(28, MOVE_DRAINING_KISS),
    LEVEL_UP_MOVE(31, MOVE_ASSIST),
    LEVEL_UP_MOVE(34, MOVE_TEMPER_FLARE),
    LEVEL_UP_MOVE(37, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(40, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(43, MOVE_OVERHEAT),
    LEVEL_UP_MOVE(46, MOVE_HYPER_VOICE),
    LEVEL_UP_MOVE(49, MOVE_FLARE_BLITZ),
    LEVEL_UP_END
};
#endif //P_FAMILY_SKITTY