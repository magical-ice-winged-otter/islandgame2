#include "global.h"

const u32 gBattleTextboxTiles[] = INCBIN_U32("graphics/battle_interface/textbox.4bpp.lz");
const u16 gBattleTextboxPalette[] = INCBIN_U16("graphics/battle_interface/textbox.gbapal");
const u32 gBattleTextboxTilemap[] = INCBIN_U32("graphics/battle_interface/textbox_map.bin.lz");

const u32 gUnusedGfx_OldCharmap[] = INCBIN_U32("graphics/unused/old_charmap.4bpp.lz"); // japanese table and bunch of stuff
const u32 gUnusedTimemap_OldCharmap[] = INCBIN_U32("graphics/unused/old_charmap.bin.lz");
const u16 gUnusedPal_OldCharmap[] = INCBIN_U16("graphics/unused/old_charmap.gbapal");

const u32 gSmokescreenImpactTiles[] = INCBIN_U32("graphics/battle_anims/sprites/smokescreen_impact.4bpp.lz");
const u16 gSmokescreenImpactPalette[] = INCBIN_U16("graphics/battle_anims/sprites/smokescreen_impact.gbapal");

#include "data/graphics/pokeballs.h"

const u32 gBlankGfxCompressed[] = INCBIN_U32("graphics/interface/blank.4bpp.lz");

// New Battle anims Particles
const u32 gBattleAnimSpriteGfx_WhiteStreak[] = INCBIN_U32("graphics/battle_anims/sprites/white_streak.4bpp.lz");
const u16 gBattleAnimSpritePal_WhiteStreak[] = INCBIN_U16("graphics/battle_anims/sprites/white_streak.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleJab[] = INCBIN_U32("graphics/battle_anims/sprites/purple_jab.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleJab[] = INCBIN_U16("graphics/battle_anims/sprites/purple_jab.gbapal");

const u16 gBattleAnimSpritePal_ToxicSpikes[] = INCBIN_U16("graphics/battle_anims/sprites/toxic_spikes.gbapal");

const u32 gBattleAnimSpriteGfx_EnergyBall[] = INCBIN_U32("graphics/battle_anims/sprites/energy_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_EnergyBall[] = INCBIN_U16("graphics/battle_anims/sprites/energy_ball.gbapal");

const u32 gBattleAnimSpriteGfx_MegaStone[] = INCBIN_U32("graphics/battle_anims/sprites/mega_stone.4bpp.lz");
const u16 gBattleAnimSpritePal_MegaStone[] = INCBIN_U16("graphics/battle_anims/sprites/mega_stone.gbapal");

const u32 gBattleAnimSpriteGfx_MegaParticles[] = INCBIN_U32("graphics/battle_anims/sprites/mega_particles.4bpp.lz");
const u16 gBattleAnimSpritePal_MegaParticles[] = INCBIN_U16("graphics/battle_anims/sprites/mega_particles.gbapal");

const u32 gBattleAnimSpriteGfx_MegaSymbol[] = INCBIN_U32("graphics/battle_anims/sprites/mega_symbol.4bpp.lz");
const u16 gBattleAnimSpritePal_MegaSymbol[] = INCBIN_U16("graphics/battle_anims/sprites/mega_symbol.gbapal");

const u32 gBattleAnimSpriteGfx_AlphaSymbol[] = INCBIN_U32("graphics/battle_anims/sprites/alpha_symbol.4bpp.lz");
const u16 gBattleAnimSpritePal_AlphaSymbol[] = INCBIN_U16("graphics/battle_anims/sprites/alpha_symbol.gbapal");

const u32 gBattleAnimSpriteGfx_OmegaSymbol[] = INCBIN_U32("graphics/battle_anims/sprites/omega_symbol.4bpp.lz");
const u16 gBattleAnimSpritePal_OmegaSymbol[] = INCBIN_U16("graphics/battle_anims/sprites/omega_symbol.gbapal");

const u32 gBattleAnimSpriteGfx_FlashCannonBall[] = INCBIN_U32("graphics/battle_anims/sprites/flash_cannon_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_FlashCannonBall[] = INCBIN_U16("graphics/battle_anims/sprites/flash_cannon_ball.gbapal");

const u32 gBattleAnimSpriteGfx_WaterGun[] = INCBIN_U32("graphics/battle_anims/sprites/water_gun.4bpp.lz");
const u16 gBattleAnimSpritePal_WaterGun[] = INCBIN_U16("graphics/battle_anims/sprites/water_gun.gbapal");

const u32 gBattleAnimSpriteGfx_Punishment[] = INCBIN_U32("graphics/battle_anims/sprites/punishment.4bpp.lz");
const u16 gBattleAnimSpritePal_Punishment[] = INCBIN_U16("graphics/battle_anims/sprites/punishment.gbapal");

const u32 gBattleAnimSpriteGfx_QuickGuard[] = INCBIN_U32("graphics/battle_anims/sprites/quick_guard.4bpp.lz");
const u16 gBattleAnimSpritePal_QuickGuard[] = INCBIN_U16("graphics/battle_anims/sprites/quick_guard.gbapal");

const u32 gBattleAnimSpriteGfx_AlphaStone[] = INCBIN_U32("graphics/battle_anims/sprites/alpha_stone.4bpp.lz");
const u16 gBattleAnimSpritePal_AlphaStone[] = INCBIN_U16("graphics/battle_anims/sprites/alpha_stone.gbapal");

const u32 gBattleAnimSpriteGfx_TeraCrystal[] = INCBIN_U32("graphics/battle_anims/sprites/tera_crystal.4bpp.lz");
const u16 gBattleAnimSpritePal_TeraCrystal[] = INCBIN_U16("graphics/battle_anims/sprites/tera_crystal.gbapal");

const u32 gBattleAnimSpriteGfx_TeraShatter[] = INCBIN_U32("graphics/battle_anims/sprites/tera_shatter.4bpp.lz");
const u16 gBattleAnimSpritePal_TeraShatter[] = INCBIN_U16("graphics/battle_anims/sprites/tera_shatter.gbapal");

const u32 gBattleAnimSpriteGfx_Anchor[] = INCBIN_U32("graphics/battle_anims/sprites/anchor.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Apple[] = INCBIN_U32("graphics/battle_anims/sprites/apple.4bpp.lz");
const u16 gBattleAnimSpritePal_Apple[] = INCBIN_U16("graphics/battle_anims/sprites/apple.gbapal");

const u32 gBattleAnimSpriteGfx_Arrows[] = INCBIN_U32("graphics/battle_anims/sprites/arrows.4bpp.lz");

const u32 gBattleAnimSpriteGfx_AssuranceHand[] = INCBIN_U32("graphics/battle_anims/sprites/assurance_hand.4bpp.lz");
const u16 gBattleAnimSpritePal_AssuranceHand[] = INCBIN_U16("graphics/battle_anims/sprites/assurance_hand.gbapal");

const u32 gBattleAnimSpriteGfx_AuraSphere[] = INCBIN_U32("graphics/battle_anims/sprites/aura_sphere.4bpp.lz");
const u16 gBattleAnimSpritePal_AuraSphere[] = INCBIN_U16("graphics/battle_anims/sprites/aura_sphere.gbapal");

const u16 gBattleAnimSpritePal_AvalancheRocks[] = INCBIN_U16("graphics/battle_anims/sprites/avalanche_rocks.gbapal");

const u32 gBattleAnimSpriteGfx_NewPokeball[] = INCBIN_U32("graphics/battle_anims/sprites/baton_pass_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_NewPokeball[] = INCBIN_U16("graphics/battle_anims/sprites/baton_pass_ball.gbapal");

const u32 gBattleAnimSpriteGfx_Beam[] = INCBIN_U32("graphics/battle_anims/sprites/beam.4bpp.lz");
const u16 gBattleAnimSpritePal_Beam[] = INCBIN_U16("graphics/battle_anims/sprites/beam.gbapal");

const u32 gBattleAnimSpriteGfx_BerryEaten[] = INCBIN_U32("graphics/battle_anims/sprites/berry_eaten.4bpp.lz");
const u16 gBattleAnimSpritePal_BerryEaten[] = INCBIN_U16("graphics/battle_anims/sprites/berry_eaten.gbapal");

const u32 gBattleAnimSpriteGfx_BerryNormal[] = INCBIN_U32("graphics/battle_anims/sprites/berry_normal.4bpp.lz");
const u16 gBattleAnimSpritePal_BerryNormal[] = INCBIN_U16("graphics/battle_anims/sprites/berry_normal.gbapal");

const u32 gBattleAnimSpriteGfx_BigRock[] = INCBIN_U32("graphics/battle_anims/sprites/big_rock.4bpp.lz");
const u16 gBattleAnimSpritePal_BigRock[] = INCBIN_U16("graphics/battle_anims/sprites/big_rock.gbapal");

const u32 gBattleAnimSpriteGfx_BlacephalonHead[] = INCBIN_U32("graphics/battle_anims/sprites/blacephalon_head.4bpp.lz");
const u16 gBattleAnimSpritePal_BlacephalonHead[] = INCBIN_U16("graphics/battle_anims/sprites/blacephalon_head.gbapal");

const u32 gBattleAnimSpriteGfx_BloodMoon[] = INCBIN_U32("graphics/battle_anims/sprites/blood_moon.4bpp.lz");
const u16 gBattleAnimSpritePal_BloodMoon[] = INCBIN_U16("graphics/battle_anims/sprites/blood_moon.gbapal");

const u16 gBattleAnimSpritePal_BlueFlare[] = INCBIN_U16("graphics/battle_anims/sprites/blue_flare.gbapal");

const u32 gBattleAnimSpriteGfx_Branch[] = INCBIN_U32("graphics/battle_anims/sprites/branch.4bpp.lz");
const u16 gBattleAnimSpritePal_Branch[] = INCBIN_U16("graphics/battle_anims/sprites/branch.gbapal");

const u32 gBattleAnimSpriteGfx_Brine[] = INCBIN_U32("graphics/battle_anims/sprites/brine.4bpp.lz");
const u16 gBattleAnimSpritePal_Brine[] = INCBIN_U16("graphics/battle_anims/sprites/brine.gbapal");

const u32 gBattleAnimSpriteGfx_ChainLink[] = INCBIN_U32("graphics/battle_anims/sprites/chain_link.4bpp.lz");
const u16 gBattleAnimSpritePal_ChainLink[] = INCBIN_U16("graphics/battle_anims/sprites/chain_link.gbapal");

const u32 gBattleAnimSpriteGfx_Chop[] = INCBIN_U32("graphics/battle_anims/sprites/chop.4bpp.lz");
const u16 gBattleAnimSpritePal_Chop[] = INCBIN_U16("graphics/battle_anims/sprites/chop.gbapal");

const u32 gBattleAnimSpriteGfx_Cacoon[] = INCBIN_U32("graphics/battle_anims/sprites/cacoon.4bpp.lz");
const u16 gBattleAnimSpritePal_Cacoon[] = INCBIN_U16("graphics/battle_anims/sprites/cacoon.gbapal");

const u32 gBattleAnimSpriteGfx_Confide[] = INCBIN_U32("graphics/battle_anims/sprites/confide.4bpp.lz");
const u16 gBattleAnimSpritePal_Confide[] = INCBIN_U16("graphics/battle_anims/sprites/confide.gbapal");

const u32 gBattleAnimSpriteGfx_CraftyShield[] = INCBIN_U32("graphics/battle_anims/sprites/crafty_shield.4bpp.lz");
const u16 gBattleAnimSpritePal_CraftyShield[] = INCBIN_U16("graphics/battle_anims/sprites/crafty_shield.gbapal");

const u32 gBattleAnimSpriteGfx_NewNail[] = INCBIN_U32("graphics/battle_anims/sprites/curse_nail.4bpp.lz");
const u16 gBattleAnimSpritePal_NewNail[] = INCBIN_U16("graphics/battle_anims/sprites/curse_nail.gbapal");

const u16 gBattleAnimSpritePal_DracoMeteor[] = INCBIN_U16("graphics/battle_anims/sprites/draco_meteor.gbapal");

const u32 gBattleAnimSpriteGfx_DragonPulseRing[] = INCBIN_U32("graphics/battle_anims/sprites/dragon_pulse_ring.4bpp.lz");
const u16 gBattleAnimSpritePal_DragonPulseRing[] = INCBIN_U16("graphics/battle_anims/sprites/dragon_pulse_ring.gbapal");

const u32 gBattleAnimSpriteGfx_DreepyMissile[] = INCBIN_U32("graphics/battle_anims/sprites/dreepy_missile.4bpp.lz");
const u16 gBattleAnimSpritePal_DreepyMissile[] = INCBIN_U16("graphics/battle_anims/sprites/dreepy_missile.gbapal");
const u32 gBattleAnimSpriteGfx_DreepyMissileShiny[] = INCBIN_U32("graphics/battle_anims/sprites/dreepy_missile.4bpp.lz");
const u16 gBattleAnimSpritePal_DreepyMissileShiny[] = INCBIN_U16("graphics/battle_anims/sprites/dreepy_missile_shiny.gbapal");

const u32 gBattleAnimSpriteGfx_Drill[] = INCBIN_U32("graphics/battle_anims/sprites/drill.4bpp.lz");
const u16 gBattleAnimSpritePal_Drill[] = INCBIN_U16("graphics/battle_anims/sprites/drill.gbapal");

const u32 gBattleAnimSpriteGfx_NewEmbers[] = INCBIN_U32("graphics/battle_anims/sprites/embers.4bpp.lz");
const u16 gBattleAnimSpritePal_NewEmbers[] = INCBIN_U16("graphics/battle_anims/sprites/embers.gbapal");

const u32 gBattleAnimSpriteGfx_FairyLockChains[] = INCBIN_U32("graphics/battle_anims/sprites/fairy_lock_chains.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Fishies[] = INCBIN_U32("graphics/battle_anims/sprites/fishies.4bpp.lz");
const u16 gBattleAnimSpritePal_Fishies[] = INCBIN_U16("graphics/battle_anims/sprites/fishies.gbapal");

const u32 gBattleAnimSpriteGfx_NewFly[] = INCBIN_U32("graphics/battle_anims/sprites/fly.4bpp.lz");
const u16 gBattleAnimSpritePal_NewFly[] = INCBIN_U16("graphics/battle_anims/sprites/fly.gbapal");

const u16 gBattleAnimSpritePal_FusionFlare[] = INCBIN_U16("graphics/battle_anims/sprites/fusion_flare.gbapal");

const u16 gBattleAnimSpritePal_GarbagePoisonPillar[] = INCBIN_U16("graphics/battle_anims/sprites/garbage_poison_column.gbapal");

const u32 gBattleAnimSpriteGfx_Gear[] = INCBIN_U32("graphics/battle_anims/sprites/gear.4bpp.lz");
const u16 gBattleAnimSpritePal_Gear[] = INCBIN_U16("graphics/battle_anims/sprites/gear.gbapal");

const u32 gBattleAnimSpriteGfx_GigavoltHavocSpear[] = INCBIN_U32("graphics/battle_anims/sprites/gigavolt_havoc_spear.4bpp.lz");
const u16 gBattleAnimSpritePal_GigavoltHavocSpear[] = INCBIN_U16("graphics/battle_anims/sprites/gigavolt_havoc_spear.gbapal");

const u32 gBattleAnimSpriteGfx_GoldenApple[] = INCBIN_U32("graphics/battle_anims/sprites/golden_apple.4bpp.lz");
const u16 gBattleAnimSpritePal_GoldenApple[] = INCBIN_U16("graphics/battle_anims/sprites/golden_apple.gbapal");

const u16 gBattleAnimSpritePal_GreenDrake[] = INCBIN_U16("graphics/battle_anims/sprites/green_drake.gbapal");

const u32 gBattleAnimSpriteGfx_NewGreenStar[] = INCBIN_U32("graphics/battle_anims/sprites/green_star_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewGreenStar[] = INCBIN_U16("graphics/battle_anims/sprites/green_star_new.gbapal");

const u32 gBattleAnimSpriteGfx_HeartStamp[] = INCBIN_U32("graphics/battle_anims/sprites/heart_stamp.4bpp.lz");
const u16 gBattleAnimSpritePal_HeartStamp[] = INCBIN_U16("graphics/battle_anims/sprites/heart_stamp.gbapal");

const u32 gBattleAnimSpriteGfx_ZygardeHexes[] = INCBIN_U32("graphics/battle_anims/sprites/hexes.4bpp.lz");
const u16 gBattleAnimSpritePal_ZygardeHexes[] = INCBIN_U16("graphics/battle_anims/sprites/hexes.gbapal");

const u32 gBattleAnimSpriteGfx_HoopaHand[] = INCBIN_U32("graphics/battle_anims/sprites/hoopa_hand.4bpp.lz");
const u16 gBattleAnimSpritePal_HoopaHand[] = INCBIN_U16("graphics/battle_anims/sprites/hoopa_hand.gbapal");

const u32 gBattleAnimSpriteGfx_HoopaRing[] = INCBIN_U32("graphics/battle_anims/sprites/hoopa_ring.4bpp.lz");
const u16 gBattleAnimSpritePal_HoopaRing[] = INCBIN_U16("graphics/battle_anims/sprites/hoopa_ring.gbapal");

const u32 gBattleAnimSpriteGfx_NewHornHit[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewHornHit[] = INCBIN_U16("graphics/battle_anims/sprites/horn_hit_new.gbapal");

const u32 gBattleAnimSpriteGfx_HornLeech[] = INCBIN_U32("graphics/battle_anims/sprites/horn_leech.4bpp.lz");
const u16 gBattleAnimSpritePal_HornLeech[] = INCBIN_U16("graphics/battle_anims/sprites/horn_leech.gbapal");

const u32 gBattleAnimSpriteGfx_HorseshoeFist[] = INCBIN_U32("graphics/battle_anims/sprites/horseshoe_fist.4bpp.lz");
const u16 gBattleAnimSpritePal_HorseshoeFist[] = INCBIN_U16("graphics/battle_anims/sprites/horseshoe_fist.gbapal");

const u32 gBattleAnimSpriteGfx_HydroPump[] = INCBIN_U32("graphics/battle_anims/sprites/hydro_pump.4bpp.lz");
const u16 gBattleAnimSpritePal_HydroPump[] = INCBIN_U16("graphics/battle_anims/sprites/hydro_pump.gbapal");

const u32 gBattleAnimSpriteGfx_IceRock[] = INCBIN_U32("graphics/battle_anims/sprites/ice_rock.4bpp.lz");
const u16 gBattleAnimSpritePal_IceRock[] = INCBIN_U16("graphics/battle_anims/sprites/ice_rock.gbapal");

const u32 gBattleAnimSpriteGfx_LargeSpike[] = INCBIN_U32("graphics/battle_anims/sprites/large_spike.4bpp.lz");
const u16 gBattleAnimSpritePal_LargeSpike[] = INCBIN_U16("graphics/battle_anims/sprites/large_spike.gbapal");

const u32 gBattleAnimSpriteGfx_NewLeaf[] = INCBIN_U32("graphics/battle_anims/sprites/leaves.4bpp.lz");
const u16 gBattleAnimSpritePal_NewLeaf[] = INCBIN_U16("graphics/battle_anims/sprites/leaves.gbapal");

const u32 gBattleAnimSpriteGfx_NewLeechSeed[] = INCBIN_U32("graphics/battle_anims/sprites/leech_seed.4bpp.lz");
const u16 gBattleAnimSpritePal_NewLeechSeed[] = INCBIN_U16("graphics/battle_anims/sprites/leech_seed.gbapal");

const u32 gBattleAnimSpriteGfx_LightningRain[] = INCBIN_U32("graphics/battle_anims/sprites/lightning_rain.4bpp.lz");
const u16 gBattleAnimSpritePal_LightningRain[] = INCBIN_U16("graphics/battle_anims/sprites/lightning_rain.gbapal");

const u32 gBattleAnimSpriteGfx_NewEye[] = INCBIN_U32("graphics/battle_anims/sprites/mean_look.4bpp.lz");
const u16 gBattleAnimSpritePal_NewEye[] = INCBIN_U16("graphics/battle_anims/sprites/mean_look.gbapal");

const u32 gBattleAnimSpriteGfx_MetalBits[] = INCBIN_U32("graphics/battle_anims/sprites/metal_bits.4bpp.lz");

const u32 gBattleAnimSpriteGfx_MudBomb[] = INCBIN_U32("graphics/battle_anims/sprites/mud_bomb.4bpp.lz");
const u16 gBattleAnimSpritePal_MudBomb[] = INCBIN_U16("graphics/battle_anims/sprites/mud_bomb.gbapal");

const u32 gBattleAnimSpriteGfx_Mushroom[] = INCBIN_U32("graphics/battle_anims/sprites/mushroom.4bpp.lz");
const u16 gBattleAnimSpritePal_Mushroom[] = INCBIN_U16("graphics/battle_anims/sprites/mushroom.gbapal");

const u16 gBattleAnimSpritePal_NaturalGiftRing[] = INCBIN_U16("graphics/battle_anims/sprites/natural_gift_ring.gbapal");

const u32 gBattleAnimSpriteGfx_NecrozmaStar[] = INCBIN_U32("graphics/battle_anims/sprites/necrozma_star.4bpp.lz");
const u16 gBattleAnimSpritePal_NecrozmaStar[] = INCBIN_U16("graphics/battle_anims/sprites/necrozma_star.gbapal");

const u16 gBattleAnimSpritePal_NewImpact[] = INCBIN_U16("graphics/battle_anims/sprites/impact_new.gbapal");

const u32 gBattleAnimSpriteGfx_Obstruct[] = INCBIN_U32("graphics/battle_anims/sprites/obstruct.4bpp.lz");
const u16 gBattleAnimSpritePal_Obstruct[] = INCBIN_U16("graphics/battle_anims/sprites/obstruct.gbapal");

const u32 gBattleAnimSpriteGfx_OmegaStone[] = INCBIN_U32("graphics/battle_anims/sprites/omega_stone.4bpp.lz");
const u16 gBattleAnimSpritePal_OmegaStone[] = INCBIN_U16("graphics/battle_anims/sprites/omega_stone.gbapal");

const u32 gBattleAnimSpriteGfx_PinkDiamond[] = INCBIN_U32("graphics/battle_anims/sprites/pink_diamond.4bpp.lz");
const u16 gBattleAnimSpritePal_PinkDiamond[] = INCBIN_U16("graphics/battle_anims/sprites/pink_diamond.gbapal");

const u32 gBattleAnimSpriteGfx_PoisonColumn[] = INCBIN_U32("graphics/battle_anims/sprites/poison_column.4bpp.lz");
const u16 gBattleAnimSpritePal_PoisonColumn[] = INCBIN_U16("graphics/battle_anims/sprites/poison_column.gbapal");

const u32 gBattleAnimSpriteGfx_PowerTrick[] = INCBIN_U32("graphics/battle_anims/sprites/power_trick.4bpp.lz");
const u16 gBattleAnimSpritePal_PowerTrick[] = INCBIN_U16("graphics/battle_anims/sprites/power_trick.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleChain[] = INCBIN_U32("graphics/battle_anims/sprites/purple_chain.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleChain[] = INCBIN_U16("graphics/battle_anims/sprites/purple_chain.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleDrake[] = INCBIN_U32("graphics/battle_anims/sprites/purple_drake.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleDrake[] = INCBIN_U16("graphics/battle_anims/sprites/purple_drake.gbapal");

const u32 gBattleAnimSpriteGfx_RazorShell[] = INCBIN_U32("graphics/battle_anims/sprites/razor_shell.4bpp.lz");
const u16 gBattleAnimSpritePal_RazorShell[] = INCBIN_U16("graphics/battle_anims/sprites/razor_shell.gbapal");

const u32 gBattleAnimSpriteGfx_RedExplosion[] = INCBIN_U32("graphics/battle_anims/sprites/red_explosion.4bpp.lz");
const u16 gBattleAnimSpritePal_RedExplosion[] = INCBIN_U16("graphics/battle_anims/sprites/red_explosion.gbapal");

const u32 gBattleAnimSpriteGfx_RocksSmall[] = INCBIN_U32("graphics/battle_anims/sprites/rock_small.4bpp.lz");

const u32 gBattleAnimSpriteGfx_NewRocks[] = INCBIN_U32("graphics/battle_anims/sprites/rocks_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewRocks[] = INCBIN_U16("graphics/battle_anims/sprites/rocks_new.gbapal");

const u32 gBattleAnimSpriteGfx_ShellLeft[] = INCBIN_U32("graphics/battle_anims/sprites/shell_left.4bpp.lz");
const u16 gBattleAnimSpritePal_ShellLeft[] = INCBIN_U16("graphics/battle_anims/sprites/shell_left.gbapal");

const u32 gBattleAnimSpriteGfx_ShellRight[] = INCBIN_U32("graphics/battle_anims/sprites/shell_right.4bpp.lz");

const u16 gBattleAnimSpritePal_SpacialRendSlices[] = INCBIN_U16("graphics/battle_anims/sprites/spacial_rend_slices.gbapal");

const u32 gBattleAnimSpriteGfx_NewSpikes[] = INCBIN_U32("graphics/battle_anims/sprites/spikes_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewSpikes[] = INCBIN_U16("graphics/battle_anims/sprites/spikes_new.gbapal");

const u32 gBattleAnimSpriteGfx_SpiritShackleArrow[] = INCBIN_U32("graphics/battle_anims/sprites/spirit_shackle_arrow.4bpp.lz");
const u16 gBattleAnimSpritePal_SpiritShackleArrow[] = INCBIN_U16("graphics/battle_anims/sprites/spirit_shackle_arrow.gbapal");

const u32 gBattleAnimSpriteGfx_SteamEruption[] = INCBIN_U32("graphics/battle_anims/sprites/steam_eruption.4bpp.lz");
const u16 gBattleAnimSpritePal_SteamEruption[] = INCBIN_U16("graphics/battle_anims/sprites/steam_eruption.gbapal");

const u32 gBattleAnimSpriteGfx_Steamroller[] = INCBIN_U32("graphics/battle_anims/sprites/steamroller.4bpp.lz");
const u16 gBattleAnimSpritePal_Steamroller[] = INCBIN_U16("graphics/battle_anims/sprites/steamroller.gbapal");

const u32 gBattleAnimSpriteGfx_StonePillar[] = INCBIN_U32("graphics/battle_anims/sprites/stone_pillar.4bpp.lz");
const u16 gBattleAnimSpritePal_StonePillar[] = INCBIN_U16("graphics/battle_anims/sprites/stone_pillar.gbapal");

const u16 gBattleAnimSpritePal_Poltergeist[] = INCBIN_U16("graphics/battle_anims/sprites/poltergeist.gbapal");

const u16 gBattleAnimSpritePal_SteelBeam[] = INCBIN_U16("graphics/battle_anims/sprites/steel_beam.gbapal");

const u32 gBattleAnimSpriteGfx_StraightBeam[] = INCBIN_U32("graphics/battle_anims/sprites/straight_beam.4bpp.lz");
const u16 gBattleAnimSpritePal_StraightBeam[] = INCBIN_U16("graphics/battle_anims/sprites/straight_beam.gbapal");

const u16 gBattleAnimSpritePal_NewSurf[] = INCBIN_U16("graphics/battle_anims/sprites/surf_new.gbapal");

const u32 gBattleAnimSpriteGfx_NewSword[] = INCBIN_U32("graphics/battle_anims/sprites/sword_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewSword[] = INCBIN_U16("graphics/battle_anims/sprites/sword_new.gbapal");

const u32 gBattleAnimSpriteGfx_NewTeeth[] = INCBIN_U32("graphics/battle_anims/sprites/teeth_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewTeeth[] = INCBIN_U16("graphics/battle_anims/sprites/teeth_new.gbapal");

const u32 gBattleAnimSpriteGfx_NewHandsAndFeet[] = INCBIN_U32("graphics/battle_anims/sprites/hands_and_feet_new.4bpp.lz");
const u16 gBattleAnimSpritePal_NewHandsAndFeet[] = INCBIN_U16("graphics/battle_anims/sprites/hands_and_feet_new.gbapal");

const u32 gBattleAnimSpriteGfx_Tornado[] = INCBIN_U32("graphics/battle_anims/sprites/tornado.4bpp.lz");
const u16 gBattleAnimSpritePal_Tornado[] = INCBIN_U16("graphics/battle_anims/sprites/tornado.gbapal");

const u32 gBattleAnimSpriteGfx_ZMoveSymbol[] = INCBIN_U32("graphics/battle_anims/sprites/z_move_symbol.4bpp.lz");
const u16 gBattleAnimSpritePal_ZMoveSymbol[] = INCBIN_U16("graphics/battle_anims/sprites/z_move_symbol.gbapal");

const u32 gBattleAnimSpriteGfx_Teapot[] = INCBIN_U32("graphics/battle_anims/sprites/new/teapot.4bpp.lz");
const u16 gBattleAnimSpritePal_Teapot[] = INCBIN_U16("graphics/battle_anims/sprites/new/teapot.gbapal");

// Battle anims
const u32 gBattleAnimSpriteGfx_Bubble[] = INCBIN_U32("graphics/battle_anims/sprites/bubble.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Bone[] = INCBIN_U32("graphics/battle_anims/sprites/bone.4bpp.lz");
const u32 gBattleAnimSpriteGfx_AirWave[] = INCBIN_U32("graphics/battle_anims/sprites/air_wave.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Orb[] = INCBIN_U32("graphics/battle_anims/sprites/orb.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Sword[] = INCBIN_U32("graphics/battle_anims/sprites/sword.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Seed[] = INCBIN_U32("graphics/battle_anims/sprites/seed.4bpp.lz");
const u32 gBattleAnimSpriteGfx_SeedBrown[] = INCBIN_U32("graphics/battle_anims/sprites/seed_new.4bpp.lz");

const u16 gBattleAnimSpritePal_RainDrops[] = INCBIN_U16("graphics/battle_anims/sprites/rain_drops.gbapal");
const u16 gBattleAnimSpritePal_Bone[] = INCBIN_U16("graphics/battle_anims/sprites/bone.gbapal");
const u16 gBattleAnimSpritePal_AirWave[] = INCBIN_U16("graphics/battle_anims/sprites/air_wave.gbapal");
const u16 gBattleAnimSpritePal_Orb[] = INCBIN_U16("graphics/battle_anims/sprites/orb.gbapal");
const u16 gBattleAnimSpritePal_Sword[] = INCBIN_U16("graphics/battle_anims/sprites/sword.gbapal");
const u16 gBattleAnimSpritePal_Seed[] = INCBIN_U16("graphics/battle_anims/sprites/seed.gbapal");
const u16 gBattleAnimSpritePal_SeedBrown[] = INCBIN_U16("graphics/battle_anims/sprites/seed_new.gbapal");

const u32 gBattleAnimSpriteGfx_Needle[] = INCBIN_U32("graphics/battle_anims/sprites/needle.4bpp.lz");
const u16 gBattleAnimSpritePal_Needle[] = INCBIN_U16("graphics/battle_anims/sprites/needle.gbapal");

const u32 gBattleAnimSpriteGfx_Explosion6[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_6.4bpp.lz");
const u16 gBattleAnimSpritePal_Explosion6[] = INCBIN_U16("graphics/battle_anims/sprites/explosion_6.gbapal");

const u32 gBattleAnimSpriteGfx_PinkOrb[] = INCBIN_U32("graphics/battle_anims/sprites/pink_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_PinkOrb[] = INCBIN_U16("graphics/battle_anims/sprites/pink_orb.gbapal");

const u16 gBattleAnimSpritePal_IceCube[] = INCBIN_U16("graphics/battle_anims/sprites/ice_cube.gbapal");
const u32 gBattleAnimSpriteGfx_IceCube[] = INCBIN_U32("graphics/battle_anims/sprites/ice_cube.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Gust[] = INCBIN_U32("graphics/battle_anims/sprites/gust.4bpp.lz");
const u16 gBattleAnimSpritePal_Gust[] = INCBIN_U16("graphics/battle_anims/sprites/gust.gbapal");

const u32 gBattleAnimSpriteGfx_Spark2[] = INCBIN_U32("graphics/battle_anims/sprites/spark_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Spark2[] = INCBIN_U16("graphics/battle_anims/sprites/spark_2.gbapal");

const u32 gBattleAnimSpriteGfx_Orange[] = INCBIN_U32("graphics/battle_anims/sprites/orange.4bpp.lz");
const u16 gBattleAnimSpritePal_Orange[] = INCBIN_U16("graphics/battle_anims/sprites/orange.gbapal");

const u32 gBattleAnimSpriteGfx_Spikes[] = INCBIN_U32("graphics/battle_anims/sprites/spikes.4bpp.lz");
const u16 gBattleAnimSpritePal_Spikes[] = INCBIN_U16("graphics/battle_anims/sprites/spikes.gbapal");

const u32 gBattleAnimSpriteGfx_YellowBall[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_YellowBall[] = INCBIN_U16("graphics/battle_anims/sprites/yellow_ball.gbapal");

const u32 gBattleAnimSpriteGfx_TiedBag[] = INCBIN_U32("graphics/battle_anims/sprites/tied_bag.4bpp.lz");
const u16 gBattleAnimSpritePal_TiedBag[] = INCBIN_U16("graphics/battle_anims/sprites/tied_bag.gbapal");

const u32 gBattleAnimSpriteGfx_BlackSmoke[] = INCBIN_U32("graphics/battle_anims/sprites/black_smoke.4bpp.lz");
const u16 gBattleAnimSpritePal_BlackSmoke[] = INCBIN_U16("graphics/battle_anims/sprites/black_smoke.gbapal");

const u32 gBattleAnimSpriteGfx_BlackBall[] = INCBIN_U32("graphics/battle_anims/sprites/black_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_BlackBall[] = INCBIN_U16("graphics/battle_anims/sprites/black_ball.gbapal");

const u16 gBattleAnimSpritePal_Glass[] = INCBIN_U16("graphics/battle_anims/sprites/glass.gbapal");
const u32 gBattleAnimSpriteGfx_Glass[] = INCBIN_U32("graphics/battle_anims/sprites/glass.4bpp.lz");

const u32 gBattleAnimSpriteGfx_HornHit[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit.4bpp.lz");
const u16 gBattleAnimSpritePal_HornHit[] = INCBIN_U16("graphics/battle_anims/sprites/horn_hit.gbapal");

const u16 gBattleAnimSpritePal_BlueShards[] = INCBIN_U16("graphics/battle_anims/sprites/blue_shards.gbapal");
const u32 gBattleAnimSpriteGfx_BlueShards[] = INCBIN_U32("graphics/battle_anims/sprites/blue_shards.4bpp.lz");

const u16 gBattleAnimUnusedPal_MusicNotes[] = INCBIN_U16("graphics/battle_anims/unused/music_notes.gbapal");
const u32 gBattleAnimUnusedGfx_MusicNotes[] = INCBIN_U32("graphics/battle_anims/unused/music_notes.4bpp.lz");

const u16 gBattleAnimSpritePal_Hit[] = INCBIN_U16("graphics/battle_anims/sprites/hit.gbapal");
const u32 gBattleAnimSpriteGfx_Hit[] = INCBIN_U32("graphics/battle_anims/sprites/hit.4bpp.lz");

const u16 gBattleAnimSpritePal_Hit2[] = INCBIN_U16("graphics/battle_anims/sprites/hit_2.gbapal");

const u16 gBattleAnimSpritePal_WavingHand[] = INCBIN_U16("graphics/battle_anims/sprites/waving_hand.gbapal");
const u32 gBattleAnimSpriteGfx_WavingHand[] = INCBIN_U32("graphics/battle_anims/sprites/waving_hand.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Feint[] = INCBIN_U32("graphics/battle_anims/sprites/feint_punch.4bpp.lz");
const u16 gBattleAnimSpritePal_Feint[] = INCBIN_U16("graphics/battle_anims/sprites/feint_punch.gbapal");

const u32 gBattleAnimSpriteGfx_TrumpCard[] = INCBIN_U32("graphics/battle_anims/sprites/trump_cards.4bpp.lz");
const u16 gBattleAnimSpritePal_TrumpCard[] = INCBIN_U16("graphics/battle_anims/sprites/trump_cards.gbapal");

const u32 gBattleAnimSpriteGfx_TrumpCardParticles[] = INCBIN_U32("graphics/battle_anims/sprites/trump_card_particles.4bpp.lz");
const u16 gBattleAnimSpritePal_TrumpCardParticles[] = INCBIN_U16("graphics/battle_anims/sprites/trump_card_particles.gbapal");

const u32 gBattleAnimSpriteGfx_Acupressure[] = INCBIN_U32("graphics/battle_anims/sprites/acupressure.4bpp.lz");
const u16 gBattleAnimSpritePal_Acupressure[] = INCBIN_U16("graphics/battle_anims/sprites/acupressure.gbapal");

const u32 gBattleAnimSpriteGfx_WringOut[] = INCBIN_U32("graphics/battle_anims/sprites/wring_out.4bpp.lz");
const u16 gBattleAnimSpritePal_WringOut[] = INCBIN_U16("graphics/battle_anims/sprites/wring_out.gbapal");

const u32 gBattleAnimSpriteGfx_ClosingEye[] = INCBIN_U32("graphics/battle_anims/sprites/closing_eye.4bpp.lz");
const u16 gBattleAnimSpritePal_ClosingEye[] = INCBIN_U16("graphics/battle_anims/sprites/closing_eye.gbapal");

const u32 gBattleAnimSpriteGfx_BlueStar[] = INCBIN_U32("graphics/battle_anims/sprites/blue_star.4bpp.lz");
const u16 gBattleAnimSpritePal_BlueStar[] = INCBIN_U16("graphics/battle_anims/sprites/blue_star.gbapal");

const u16 gBattleAnimSpritePal_BubbleBurst[] = INCBIN_U16("graphics/battle_anims/sprites/bubble_burst.gbapal");
const u32 gBattleAnimSpriteGfx_BubbleBurst[] = INCBIN_U32("graphics/battle_anims/sprites/bubble_burst.4bpp.lz");

const u32 gBattleAnimSpriteGfx_HitDuplicate[] = INCBIN_U32("graphics/battle_anims/sprites/hit_duplicate.4bpp.lz");
const u16 gBattleAnimSpritePal_HitDuplicate[] = INCBIN_U16("graphics/battle_anims/sprites/hit_duplicate.gbapal");

const u16 gBattleAnimSpritePal_Leer[] = INCBIN_U16("graphics/battle_anims/sprites/leer.gbapal");
const u32 gBattleAnimSpriteGfx_Leer[] = INCBIN_U32("graphics/battle_anims/sprites/leer.4bpp.lz");

const u16 gBattleAnimSpritePal_BlueBurst[] = INCBIN_U16("graphics/battle_anims/sprites/blue_burst.gbapal");
const u32 gBattleAnimSpriteGfx_BlueBurst[] = INCBIN_U32("graphics/battle_anims/sprites/blue_burst.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SmallEmber[] = INCBIN_U32("graphics/battle_anims/sprites/small_ember.4bpp.lz");
const u16 gBattleAnimSpritePal_SmallEmber[] = INCBIN_U16("graphics/battle_anims/sprites/small_ember.gbapal");

const u32 gBattleAnimSpriteGfx_GraySmoke[] = INCBIN_U32("graphics/battle_anims/sprites/gray_smoke.4bpp.lz");
const u16 gBattleAnimSpritePal_GraySmoke[] = INCBIN_U16("graphics/battle_anims/sprites/gray_smoke.gbapal");

const u16 gBattleAnimSpritePal_Fire[] = INCBIN_U16("graphics/battle_anims/sprites/fire.gbapal");
const u32 gBattleAnimSpriteGfx_Fire[] = INCBIN_U32("graphics/battle_anims/sprites/fire.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SpinningFire[] = INCBIN_U32("graphics/battle_anims/sprites/spinning_fire.4bpp.lz");
const u32 gBattleAnimSpriteGfx_FirePlume[] = INCBIN_U32("graphics/battle_anims/sprites/fire_plume.4bpp.lz");

const u16 gBattleAnimSpritePal_Lightning2[] = INCBIN_U16("graphics/battle_anims/sprites/lightning_2.gbapal");
const u32 gBattleAnimSpriteGfx_Lightning2[] = INCBIN_U32("graphics/battle_anims/sprites/lightning_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Lightning[] = INCBIN_U32("graphics/battle_anims/sprites/lightning.4bpp.lz");

const u32 gBattleAnimSpriteGfx_ColoredOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/colored_orbs.4bpp.lz");
const u16 gBattleAnimSpritePal_ColoredOrbs[] = INCBIN_U16("graphics/battle_anims/sprites/colored_orbs.gbapal");

const u32 gBattleAnimSpriteGfx_WorrySeed[] = INCBIN_U32("graphics/battle_anims/sprites/worry_seed.4bpp.lz");
const u16 gBattleAnimSpritePal_WorrySeed[] = INCBIN_U16("graphics/battle_anims/sprites/worry_seed.gbapal");

const u32 gBattleAnimSpriteGfx_SmallCloud[] = INCBIN_U32("graphics/battle_anims/sprites/small_cloud.4bpp.lz");
const u16 gBattleAnimSpritePal_SmallCloud[] = INCBIN_U16("graphics/battle_anims/sprites/small_cloud.gbapal");

const u32 gBattleAnimSpriteGfx_AttackOrder[] = INCBIN_U32("graphics/battle_anims/sprites/attack_order.4bpp.lz");
const u16 gBattleAnimSpritePal_AttackOrder[] = INCBIN_U16("graphics/battle_anims/sprites/attack_order.gbapal");

const u32 gBattleAnimSpriteGfx_DragonPulse[] = INCBIN_U32("graphics/battle_anims/sprites/dragon_pulse.4bpp.lz");
const u16 gBattleAnimSpritePal_DragonPulse[] = INCBIN_U16("graphics/battle_anims/sprites/dragon_pulse.gbapal");

const u32 gBattleAnimSpriteGfx_WoodHammer[] = INCBIN_U32("graphics/battle_anims/sprites/wood_hammer.4bpp.lz");
const u16 gBattleAnimSpritePal_WoodHammer[] = INCBIN_U16("graphics/battle_anims/sprites/wood_hammer.gbapal");

const u32 gBattleAnimSpriteGfx_PsychoCut[] = INCBIN_U32("graphics/battle_anims/sprites/psycho_cut.4bpp.lz");
const u16 gBattleAnimSpritePal_PsychoCut[] = INCBIN_U16("graphics/battle_anims/sprites/psycho_cut.gbapal");

const u32 gBattleAnimSpriteGfx_PowerGem[] = INCBIN_U32("graphics/battle_anims/sprites/power_gem.4bpp.lz");
const u16 gBattleAnimSpritePal_PowerGem[] = INCBIN_U16("graphics/battle_anims/sprites/power_gem.gbapal");

const u32 gBattleAnimSpriteGfx_StoneEdge[] = INCBIN_U32("graphics/battle_anims/sprites/stone_edge.4bpp.lz");
const u16 gBattleAnimSpritePal_StoneEdge[] = INCBIN_U16("graphics/battle_anims/sprites/stone_edge.gbapal");

const u32 gBattleAnimSpriteGfx_StealthRock[] = INCBIN_U32("graphics/battle_anims/sprites/stealth_rock.4bpp.lz");
const u16 gBattleAnimSpritePal_StealthRock[] = INCBIN_U16("graphics/battle_anims/sprites/stealth_rock.gbapal");

const u32 gBattleAnimSpriteGfx_PoisonJab[] = INCBIN_U32("graphics/battle_anims/sprites/poison_jab.4bpp.lz");
const u16 gBattleAnimSpritePal_PoisonJab[] = INCBIN_U16("graphics/battle_anims/sprites/poison_jab.gbapal");

const u32 gBattleAnimSpriteGfx_SpinningBall[] = INCBIN_U32("graphics/battle_anims/unused/spinning_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_SpinningBall[] = INCBIN_U16("graphics/battle_anims/unused/spinning_ball.gbapal");
const u16 gBattleAnimSpritePal_SpinningBall2[] = INCBIN_U16("graphics/battle_anims/unused/spinning_ball_2.gbapal");

const u32 gBattleAnimSpriteGfx_WoodHammerHammer[] = INCBIN_U32("graphics/battle_anims/sprites/wood_hammer_hammer.4bpp.lz");
const u16 gBattleAnimSpritePal_WoodHammerHammer[] = INCBIN_U16("graphics/battle_anims/sprites/wood_hammer_hammer.gbapal");

const u32 gBattleAnimSpriteGfx_Snowflakes[] = INCBIN_U32("graphics/battle_anims/sprites/snowflakes.4bpp.lz");
const u16 gBattleAnimSpritePal_Snowflakes[] = INCBIN_U16("graphics/battle_anims/sprites/snowflakes.gbapal");

const u32 gBattleAnimSpriteGfx_SyrupBlob[] = INCBIN_U32("graphics/battle_anims/sprites/syrup_bomb_blob.4bpp.lz");
const u32 gBattleAnimSpriteGfx_SyrupShell[] = INCBIN_U32("graphics/battle_anims/sprites/syrup_bomb_shell.4bpp.lz");
const u32 gBattleAnimSpriteGfx_SyrupSplat[] = INCBIN_U32("graphics/battle_anims/sprites/syrup_bomb_splat.4bpp.lz");
const u16 gBattleAnimSpritePal_SyrupRed[] = INCBIN_U16("graphics/battle_anims/sprites/syrup_red.gbapal");
const u16 gBattleAnimSpritePal_SyrupYellow[] = INCBIN_U16("graphics/battle_anims/sprites/syrup_yellow.gbapal");

const u32 gBattleAnimSpriteGfx_IvyCudgel[] = INCBIN_U32("graphics/battle_anims/sprites/cudgel.4bpp.lz");
const u16 gBattleAnimSpritePal_IvyCudgelGrass[] = INCBIN_U16("graphics/pokemon/ogerpon/normal.gbapal");
const u16 gBattleAnimSpritePal_IvyCudgelFire[] = INCBIN_U16("graphics/pokemon/ogerpon/hearthflame/normal.gbapal");
const u16 gBattleAnimSpritePal_IvyCudgelRock[] = INCBIN_U16("graphics/pokemon/ogerpon/cornerstone/normal.gbapal");
const u16 gBattleAnimSpritePal_IvyCudgelWater[] = INCBIN_U16("graphics/pokemon/ogerpon/wellspring/normal.gbapal");

// old battle interface data, unused

const u32 gOldBattleInterfaceGfx[] = INCBIN_U32("graphics/unused/obi1.4bpp.lz");
const u16 gOldBattleInterfacePal_1_2_3[] = INCBIN_U16("graphics/unused/obi_palpak1.gbapal"); // palettes 1-3
const u16 gOldBattleInterfacePal4[] = INCBIN_U16("graphics/unused/old_pal4.gbapal"); // 4 is by itself
const u16 gOldBattleInterfacePal_5_6_7[] = INCBIN_U16("graphics/unused/obi_palpak3.gbapal"); // palettes 5-7
const u32 gOldBattleInterfaceGfx2[] = INCBIN_U32("graphics/unused/obi2.4bpp.lz");
const u32 gOldBattleInterfaceTilemap[] = INCBIN_U32("graphics/unused/old_battle_interface_tilemap.bin.lz");

const u16 gBattleAnimSpritePal_ClawSlash2[] = INCBIN_U16("graphics/battle_anims/sprites/claw_slash_2.gbapal");
const u16 gBattleAnimSpritePal_ClawSlash[] = INCBIN_U16("graphics/battle_anims/sprites/claw_slash.gbapal");

const u32 gBattleAnimSpriteGfx_ClawSlash2[] = INCBIN_U32("graphics/battle_anims/sprites/claw_slash_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_ClawSlash[] = INCBIN_U32("graphics/battle_anims/sprites/claw_slash.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Scratch3[] = INCBIN_U32("graphics/battle_anims/sprites/scratch_3.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Scratch2[] = INCBIN_U32("graphics/battle_anims/sprites/scratch_2.4bpp.lz");

const u32 gUnusedHpBar_Gfx[] = INCBIN_U32("graphics/battle_interface/hpbar_unused.4bpp.lz");

const u32 gBattleAnimSpriteGfx_BubbleBurst2[] = INCBIN_U32("graphics/battle_anims/sprites/bubble_burst_2.4bpp.lz");

const u16 gBattleAnimSpritePal_BubbleBurst2[] = INCBIN_U16("graphics/battle_anims/sprites/bubble_burst_2.gbapal");

const u32 gBattleAnimSpriteGfx_IceChunk[] = INCBIN_U32("graphics/battle_anims/sprites/ice_chunk.4bpp.lz");
const u16 gBattleAnimSpritePal_IceChunk[] = INCBIN_U16("graphics/battle_anims/sprites/ice_chunk.gbapal");

const u16 gBattleAnimSpritePal_Glass2[] = INCBIN_U16("graphics/battle_anims/sprites/glass_2.gbapal");
const u32 gBattleAnimSpriteGfx_Glass2[] = INCBIN_U32("graphics/battle_anims/sprites/glass_2.4bpp.lz");

const u16 gBattleAnimSpritePal_PinkHeart2[] = INCBIN_U16("graphics/battle_anims/sprites/pink_heart_2.gbapal");
const u32 gBattleAnimSpriteGfx_PinkHeart2[] = INCBIN_U32("graphics/battle_anims/sprites/pink_heart_2.4bpp.lz");

const u32 gBattleInterfaceGfx_UnusedWindow1[] = INCBIN_U32("graphics/battle_interface/unused_window.4bpp.lz");
const u16 gBattleInterfacePal_UnusedWindow1[] = INCBIN_U16("graphics/battle_interface/unused_window.gbapal");

const u32 gBattleInterfaceGfx_BattleBar[] = INCBIN_U32("graphics/battle_interface/battle_bar.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SapDrip[] = INCBIN_U32("graphics/battle_anims/sprites/sap_drip.4bpp.lz");
const u16 gBattleAnimSpritePal_SapDrip[] = INCBIN_U16("graphics/battle_anims/sprites/sap_drip.gbapal");

const u16 gBattleAnimSpritePal_SapDrip2[] = INCBIN_U16("graphics/battle_anims/sprites/sap_drip_2.gbapal");

const u32 gBattleInterfaceGfx_UnusedWindow2[] = INCBIN_U32("graphics/battle_interface/unused_window2.4bpp.lz");
const u32 gBattleInterfaceGfx_UnusedWindow2Bar[] = INCBIN_U32("graphics/battle_interface/unused_window2bar.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Sparkle1[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_1.4bpp.lz");
const u16 gBattleAnimSpritePal_Sparkle1[] = INCBIN_U16("graphics/battle_anims/sprites/sparkle_1.gbapal");

const u16 gBattleAnimSpritePal_Sparkle2[] = INCBIN_U16("graphics/battle_anims/sprites/sparkle_2.gbapal");
const u16 gBattleAnimSpritePal_HumanoidFoot[] = INCBIN_U16("graphics/battle_anims/sprites/humanoid_foot.gbapal");

const u32 gBattleAnimSpriteGfx_HumanoidFoot[] = INCBIN_U32("graphics/battle_anims/sprites/humanoid_foot.4bpp.lz");
const u32 gBattleAnimSpriteGfx_MonsterFoot[] = INCBIN_U32("graphics/battle_anims/sprites/monster_foot.4bpp.lz");
const u32 gBattleAnimSpriteGfx_HumanoidHand[] = INCBIN_U32("graphics/battle_anims/sprites/humanoid_hand.4bpp.lz");

const u32 gBattleAnimSpriteGfx_LineSketch[] = INCBIN_U32("graphics/battle_anims/unused/line_sketch.4bpp.lz");
const u16 gBattleAnimSpritePal_LineSketch[] = INCBIN_U16("graphics/battle_anims/unused/line_sketch.gbapal");

const u32 gBattleAnimSpriteGfx_YellowUnk[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_unk.4bpp.lz");
const u16 gBattleAnimSpritePal_YellowUnk[] = INCBIN_U16("graphics/battle_anims/sprites/yellow_unk.gbapal");

const u32 gBattleAnimSpriteGfx_SlamHit[] = INCBIN_U32("graphics/battle_anims/sprites/slam_hit.4bpp.lz");
const u16 gBattleAnimSpritePal_SlamHit[] = INCBIN_U16("graphics/battle_anims/sprites/slam_hit.gbapal");

const u32 gBattleAnimSpriteGfx_RedFist[] = INCBIN_U32("graphics/battle_anims/sprites/red_fist.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Ring[] = INCBIN_U32("graphics/battle_anims/sprites/ring.4bpp.lz");
const u16 gBattleAnimSpritePal_Ring[] = INCBIN_U16("graphics/battle_anims/sprites/ring.gbapal");

const u32 gBattleAnimSpriteGfx_Rocks[] = INCBIN_U32("graphics/battle_anims/sprites/rocks.4bpp.lz");
const u16 gBattleAnimSpritePal_Rocks[] = INCBIN_U16("graphics/battle_anims/sprites/rocks.gbapal");

const u32 gBattleAnimSpriteGfx_Z[] = INCBIN_U32("graphics/battle_anims/sprites/z.4bpp.lz");
const u16 gBattleAnimSpritePal_Z[] = INCBIN_U16("graphics/battle_anims/sprites/z.gbapal");

const u32 gBattleAnimSpriteGfx_YellowUnk2[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_unk_2.4bpp.lz");
const u16 gBattleAnimSpritePal_YellowUnk2[] = INCBIN_U16("graphics/battle_anims/sprites/yellow_unk_2.gbapal");

const u32 gBattleAnimSpriteGfx_AirSlash[] = INCBIN_U32("graphics/battle_anims/sprites/air_slash.4bpp.lz");
const u16 gBattleAnimSpritePal_AirSlash[] = INCBIN_U16("graphics/battle_anims/sprites/air_slash.gbapal");

const u32 gBattleAnimSpriteGfx_SpinningGreenOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/spinning_green_orbs.4bpp.lz");
const u16 gBattleAnimSpritePal_SpinningGreenOrbs[] = INCBIN_U16("graphics/battle_anims/sprites/spinning_green_orbs.gbapal");

const u32 gBattleAnimSpriteGfx_Leaf[] = INCBIN_U32("graphics/battle_anims/sprites/leaf.4bpp.lz");
const u16 gBattleAnimSpritePal_Leaf[] = INCBIN_U16("graphics/battle_anims/sprites/leaf.gbapal");

const u32 gBattleAnimSpriteGfx_MetronomeSmallHand[] = INCBIN_U32("graphics/battle_anims/unused/metronome_hand_small.4bpp.lz"); // unused, was for metronome at one point

const u16 gBattleAnimSpritePal_Clapping[] = INCBIN_U16("graphics/battle_anims/sprites/clapping.gbapal");

const u32 gBattleAnimSpriteGfx_PoisonPowder[] = INCBIN_U32("graphics/battle_anims/sprites/poison_powder.4bpp.lz");
const u16 gBattleAnimSpritePal_PoisonPowder[] = INCBIN_U16("graphics/battle_anims/sprites/poison_powder.gbapal");

const u32 gBattleAnimSpriteGfx_BrownTriangle[] = INCBIN_U32("graphics/battle_anims/sprites/brown_triangle.4bpp.lz");
const u16 gBattleAnimSpritePal_BrownTriangle[] = INCBIN_U16("graphics/battle_anims/sprites/brown_triangle.gbapal");

const u32 gBattleAnimSpriteGfx_Sparkle3[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_3.4bpp.lz");
const u16 gBattleAnimSpritePal_Sparkle3[] = INCBIN_U16("graphics/battle_anims/sprites/sparkle_3.gbapal");

const u32 gBattleAnimSpriteGfx_Sparkle4[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_4.4bpp.lz");

const u32 gBattleAnimSpriteGfx_MusicNotes[] = INCBIN_U32("graphics/battle_anims/sprites/music_notes.4bpp.lz");
const u16 gBattleAnimSpritePal_MusicNotes[] = INCBIN_U16("graphics/battle_anims/sprites/music_notes.gbapal");

const u32 gBattleAnimSpriteGfx_Duck[] = INCBIN_U32("graphics/battle_anims/sprites/duck.4bpp.lz");
const u16 gBattleAnimSpritePal_Duck[] = INCBIN_U16("graphics/battle_anims/sprites/duck.gbapal");

const u32 gBattleAnimSpriteGfx_Alert[] = INCBIN_U32("graphics/battle_anims/sprites/alert.4bpp.lz");
const u16 gBattleAnimSpritePal_Alert[] = INCBIN_U16("graphics/battle_anims/sprites/alert.gbapal");

const u32 gBattleAnimSpriteGfx_Shock4[] = INCBIN_U32("graphics/battle_anims/sprites/shock_4.4bpp.lz");
const u16 gBattleAnimSpritePal_Shock4[] = INCBIN_U16("graphics/battle_anims/sprites/shock_4.gbapal");

const u32 gBattleAnimSpriteGfx_Shock[] = INCBIN_U32("graphics/battle_anims/sprites/shock.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Bell2[] = INCBIN_U32("graphics/battle_anims/sprites/bell_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Bell2[] = INCBIN_U16("graphics/battle_anims/sprites/bell_2.gbapal");

const u32 gBattleAnimSpriteGfx_PinkGlove[] = INCBIN_U32("graphics/battle_anims/sprites/pink_glove.4bpp.lz");
const u16 gBattleAnimSpritePal_PinkGlove[] = INCBIN_U16("graphics/battle_anims/sprites/pink_glove.gbapal");

const u16 gBattleAnimUnused_Unknown1[] = INCBIN_U16("graphics/battle_anims/unused/unknown_1.bin");
const u16 gBattleAnimUnused_Unknown2[] = INCBIN_U16("graphics/battle_anims/unused/unknown_2.bin");
const u16 gBattleAnimUnused_Unknown3[] = INCBIN_U16("graphics/battle_anims/unused/unknown_3.bin");

const u32 gBattleAnimUnusedGfx_LineSketch2[] = INCBIN_U32("graphics/battle_anims/unused/line_sketch_2.8bpp.lz");
const u16 gBattleAnimUnusedPal_LineSketch2[] = INCBIN_U16("graphics/battle_anims/unused/line_sketch_2.gbapal");
const u32 gBattleAnimUnusedTilemap_LineSketch2[] = INCBIN_U32("graphics/battle_anims/unused/line_sketch_2.bin.lz");

const u32 gBattleAnimSpriteGfx_BlueLines[] = INCBIN_U32("graphics/battle_anims/sprites/blue_lines.4bpp.lz");
const u16 gBattleAnimSpritePal_BlueLines[] = INCBIN_U16("graphics/battle_anims/sprites/blue_lines.gbapal");

const u16 gBattleAnimSpritePal_Impact3[] = INCBIN_U16("graphics/battle_anims/sprites/impact_3.gbapal");
const u16 gBattleAnimSpritePal_Impact2[] = INCBIN_U16("graphics/battle_anims/sprites/impact_2.gbapal");
const u16 gBattleAnimSpritePal_Reticle[] = INCBIN_U16("graphics/battle_anims/sprites/reticle.gbapal");
const u16 gBattleAnimSpritePal_Breath[] = INCBIN_U16("graphics/battle_anims/sprites/breath.gbapal");
const u16 gBattleAnimSpritePal_Snowball[] = INCBIN_U16("graphics/battle_anims/sprites/snowball.gbapal");
const u16 gBattleAnimSpritePal_Vine[] = INCBIN_U16("graphics/battle_anims/sprites/vine.gbapal");
const u16 gBattleAnimSpritePal_Sword2[] = INCBIN_U16("graphics/battle_anims/sprites/sword_2.gbapal");
const u16 gBattleAnimSpritePal_RedTube[] = INCBIN_U16("graphics/battle_anims/sprites/red_tube.gbapal");
const u16 gBattleAnimSpritePal_Amnesia[] = INCBIN_U16("graphics/battle_anims/sprites/amnesia.gbapal");
const u16 gBattleAnimSpritePal_String2[] = INCBIN_U16("graphics/battle_anims/sprites/string_2.gbapal");

const u32 gBattleAnimUnused_Unknown4[] = INCBIN_U32("graphics/battle_anims/unused/unknown_4.bin.lz");

const u16 gBattleAnimSpritePal_Pencil2[] = INCBIN_U16("graphics/battle_anims/sprites/pencil_2.gbapal");
const u16 gBattleAnimSpritePal_Petal[] = INCBIN_U16("graphics/battle_anims/sprites/petal.gbapal");
const u16 gBattleAnimSpritePal_BentSpoon[] = INCBIN_U16("graphics/battle_anims/sprites/bent_spoon.gbapal");
const u16 gBattleAnimSpritePal_Coin[] = INCBIN_U16("graphics/battle_anims/sprites/coin.gbapal");
const u16 gBattleAnimSpritePal_CrackedEgg[] = INCBIN_U16("graphics/battle_anims/sprites/cracked_egg.gbapal");
const u16 gBattleAnimSpritePal_FreshEgg[] = INCBIN_U16("graphics/battle_anims/sprites/fresh_egg.gbapal");

const u32 gBattleAnimSpriteGfx_Impact3[] = INCBIN_U32("graphics/battle_anims/sprites/impact_3.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Impact2[] = INCBIN_U32("graphics/battle_anims/sprites/impact_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Reticle[] = INCBIN_U32("graphics/battle_anims/sprites/reticle.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Breath[] = INCBIN_U32("graphics/battle_anims/sprites/breath.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Snowball[] = INCBIN_U32("graphics/battle_anims/sprites/snowball.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Vine[] = INCBIN_U32("graphics/battle_anims/sprites/vine.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Sword2[] = INCBIN_U32("graphics/battle_anims/sprites/sword_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Clapping[] = INCBIN_U32("graphics/battle_anims/sprites/clapping.4bpp.lz");
const u32 gBattleAnimSpriteGfx_RedTube[] = INCBIN_U32("graphics/battle_anims/sprites/red_tube.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Amnesia[] = INCBIN_U32("graphics/battle_anims/sprites/amnesia.4bpp.lz");
const u32 gBattleAnimSpriteGfx_String2[] = INCBIN_U32("graphics/battle_anims/sprites/string_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Pencil2[] = INCBIN_U32("graphics/battle_anims/sprites/pencil_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Petal[] = INCBIN_U32("graphics/battle_anims/sprites/petal.4bpp.lz");
const u32 gBattleAnimSpriteGfx_BentSpoon[] = INCBIN_U32("graphics/battle_anims/sprites/bent_spoon.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Web[] = INCBIN_U32("graphics/battle_anims/sprites/web.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Coin[] = INCBIN_U32("graphics/battle_anims/sprites/coin.4bpp.lz");
const u32 gBattleAnimSpriteGfx_CrackedEgg[] = INCBIN_U32("graphics/battle_anims/sprites/cracked_egg.4bpp.lz");
const u32 gBattleAnimSpriteGfx_HatchedEgg[] = INCBIN_U32("graphics/battle_anims/sprites/hatched_egg.4bpp.lz");
const u32 gBattleAnimSpriteGfx_FreshEgg[] = INCBIN_U32("graphics/battle_anims/sprites/fresh_egg.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Fangs[] = INCBIN_U32("graphics/battle_anims/sprites/fangs.4bpp.lz");
const u16 gBattleAnimSpritePal_Fangs[] = INCBIN_U16("graphics/battle_anims/sprites/fangs.gbapal");

const u32 gBattleAnimSpriteGfx_Explosion2[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Explosion2[] = INCBIN_U16("graphics/battle_anims/sprites/explosion_2.gbapal");

const u32 gBattleAnimSpriteGfx_Explosion3[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_3.4bpp.lz");

const u32 gBattleAnimSpriteGfx_WaterDroplet[] = INCBIN_U32("graphics/battle_anims/sprites/water_droplet.4bpp.lz");
const u16 gBattleAnimSpritePal_WaterDroplet[] = INCBIN_U16("graphics/battle_anims/sprites/water_droplet.gbapal");

const u32 gBattleAnimSpriteGfx_WaterDroplet2[] = INCBIN_U32("graphics/battle_anims/sprites/water_droplet_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Seed2[] = INCBIN_U32("graphics/battle_anims/sprites/seed_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Seed2[] = INCBIN_U16("graphics/battle_anims/sprites/seed_2.gbapal");

const u32 gBattleAnimSpriteGfx_Sprout[] = INCBIN_U32("graphics/battle_anims/sprites/sprout.4bpp.lz");

const u32 gBattleAnimSpriteGfx_RedWand[] = INCBIN_U32("graphics/battle_anims/sprites/red_wand.4bpp.lz");
const u16 gBattleAnimSpritePal_RedWand[] = INCBIN_U16("graphics/battle_anims/sprites/red_wand.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleGreenUnk[] = INCBIN_U32("graphics/battle_anims/sprites/purple_green_unk.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleGreenUnk[] = INCBIN_U16("graphics/battle_anims/sprites/purple_green_unk.gbapal");

const u32 gBattleAnimSpriteGfx_WaterColumn[] = INCBIN_U32("graphics/battle_anims/sprites/water_column.4bpp.lz");
const u16 gBattleAnimSpritePal_WaterColumn[] = INCBIN_U16("graphics/battle_anims/sprites/water_column.gbapal");

const u32 gBattleAnimSpriteGfx_MudUnk[] = INCBIN_U32("graphics/battle_anims/sprites/mud_unk.4bpp.lz");
const u16 gBattleAnimSpritePal_MudUnk[] = INCBIN_U16("graphics/battle_anims/sprites/mud_unk.gbapal");

const u32 gUnusedTilemap_BlueFrame[] = INCBIN_U32("graphics/unused/blue_frame.bin.lz"); // P1, P2, P3 and P4 tilemaps?
const u32 gUnusedTilemap_RedYellowGreenFrame[] = INCBIN_U32("graphics/unused/redyellowgreen_frame.bin.lz");
const u32 gUnusedGfx_ColorFrames[] = INCBIN_U32("graphics/unused/color_frames.4bpp.lz");
const u16 gUnusedPal_ColorFrames[] = INCBIN_U16("graphics/unused/color_frames.gbapal");

const u32 gBattleAnimSpriteGfx_RainDrops[] = INCBIN_U32("graphics/battle_anims/sprites/rain_drops.4bpp.lz");

const u32 gBattleAnimUnusedGfx_WaterSplash[] = INCBIN_U32("graphics/battle_anims/unused/water_splash.8bpp.lz");
const u32 gBattleAnimUnusedTilemap_WaterSplash[] = INCBIN_U32("graphics/battle_anims/unused/water_splash.bin.lz");
const u16 gBattleAnimUnusedPal_WaterSplash[] = INCBIN_U16("graphics/battle_anims/unused/water_splash.gbapal");

const u32 gUnusedGfx_BasicFrame[] = INCBIN_U32("graphics/unused/basic_frame.4bpp.lz");
const u16 gUnusedPal_BasicFrame[] = INCBIN_U16("graphics/unused/basic_frame.gbapal");
const u32 gUnusedTilemap_BasicFrame[] = INCBIN_U32("graphics/unused/basic_frame.bin.lz");

// Battle Interface

const u16 gBattleInterface_BallStatusBarPal[] = INCBIN_U16("graphics/battle_interface/ball_status_bar.gbapal");

const u16 gBattleInterface_BallDisplayPal[] = INCBIN_U16("graphics/battle_interface/ball_display.gbapal");

const u8 gHealthboxElementsGfxTable[] = INCBIN_U8("graphics/battle_interface/hpbar.4bpp",
                                                  "graphics/battle_interface/expbar.4bpp",
                                                  "graphics/battle_interface/status.4bpp",
                                                  "graphics/battle_interface/misc.4bpp",
                                                  "graphics/battle_interface/hpbar_anim.4bpp",
                                                  "graphics/battle_interface/misc_frameend.4bpp",
                                                  "graphics/battle_interface/ball_display.4bpp",
                                                  "graphics/battle_interface/ball_caught_indicator.4bpp",
                                                  "graphics/battle_interface/status2.4bpp", // these three duplicate sets of graphics are for the opponent/partner Pokémon
                                                  "graphics/battle_interface/status3.4bpp",
                                                  "graphics/battle_interface/status4.4bpp",
                                                  "graphics/battle_interface/healthbox_doubles_frameend.4bpp",
                                                  "graphics/battle_interface/healthbox_doubles_frameend_bar.4bpp");
const u32 gBattleInterfaceGfx_UnusedWindow3[] = INCBIN_U32("graphics/battle_interface/unused_window3.4bpp.lz");
const u32 gBattleInterfaceGfx_UnusedWindow4[] = INCBIN_U32("graphics/battle_interface/unused_window4.4bpp.lz");

const u32 gBattleAnimSpriteGfx_FurySwipes[] = INCBIN_U32("graphics/battle_anims/sprites/fury_swipes.4bpp.lz");
const u16 gBattleAnimSpritePal_FurySwipes[] = INCBIN_U16("graphics/battle_anims/sprites/fury_swipes.gbapal");

const u32 gBattleAnimSpriteGfx_Vine2[] = INCBIN_U32("graphics/battle_anims/sprites/vine_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Vine2[] = INCBIN_U16("graphics/battle_anims/sprites/vine_2.gbapal");

const u32 gBattleAnimSpriteGfx_Teeth[] = INCBIN_U32("graphics/battle_anims/sprites/teeth.4bpp.lz");
const u16 gBattleAnimSpritePal_Teeth[] = INCBIN_U16("graphics/battle_anims/sprites/teeth.gbapal");

const u32 gBattleAnimSpriteGfx_Bone2[] = INCBIN_U32("graphics/battle_anims/sprites/bone_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Bone2[] = INCBIN_U16("graphics/battle_anims/sprites/bone_2.gbapal");

const u32 gBattleAnimSpriteGfx_WhiteBag[] = INCBIN_U32("graphics/battle_anims/sprites/white_bag.4bpp.lz");
const u16 gBattleAnimSpritePal_WhiteBag[] = INCBIN_U16("graphics/battle_anims/sprites/white_bag.gbapal");

const u32 gBattleAnimSpriteGfx_Unknown[] = INCBIN_U32("graphics/battle_anims/sprites/unknown.4bpp.lz");
const u16 gBattleAnimSpritePal_Unknown[] = INCBIN_U16("graphics/battle_anims/sprites/unknown.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleCoral[] = INCBIN_U32("graphics/battle_anims/sprites/purple_coral.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleCoral[] = INCBIN_U16("graphics/battle_anims/sprites/purple_coral.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleDroplet[] = INCBIN_U32("graphics/battle_anims/sprites/purple_droplet.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Shock2[] = INCBIN_U32("graphics/battle_anims/sprites/shock_2.4bpp.lz");
const u16 gBattleAnimSpritePal_Shock2[] = INCBIN_U16("graphics/battle_anims/sprites/shock_2.gbapal");

const u32 gBattleAnimSpriteGfx_ClosingEye2[] = INCBIN_U32("graphics/battle_anims/sprites/closing_eye_2.4bpp.lz");
const u16 gBattleAnimSpritePal_ClosingEye2[] = INCBIN_U16("graphics/battle_anims/sprites/closing_eye_2.gbapal");

const u32 gBattleAnimSpriteGfx_MetalBall[] = INCBIN_U32("graphics/battle_anims/sprites/metal_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_MetalBall[] = INCBIN_U16("graphics/battle_anims/sprites/metal_ball.gbapal");

const u32 gBattleAnimSpriteGfx_MonsterDoll[] = INCBIN_U32("graphics/battle_anims/sprites/monster_doll.4bpp.lz");
const u16 gBattleAnimSpritePal_MonsterDoll[] = INCBIN_U16("graphics/battle_anims/sprites/monster_doll.gbapal");

const u32 gBattleAnimSpriteGfx_Whirlwind[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind.4bpp.lz");
const u16 gBattleAnimSpritePal_Whirlwind[] = INCBIN_U16("graphics/battle_anims/sprites/whirlwind.gbapal");

const u32 gBattleAnimSpriteGfx_Whirlwind2[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Explosion4[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_4.4bpp.lz");
const u16 gBattleAnimSpritePal_Explosion4[] = INCBIN_U16("graphics/battle_anims/sprites/explosion_4.gbapal");

const u32 gBattleAnimSpriteGfx_Explosion5[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_5.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Tongue[] = INCBIN_U32("graphics/battle_anims/sprites/tongue.4bpp.lz");
const u16 gBattleAnimSpritePal_Tongue[] = INCBIN_U16("graphics/battle_anims/sprites/tongue.gbapal");

const u32 gBattleAnimSpriteGfx_Smoke[] = INCBIN_U32("graphics/battle_anims/sprites/smoke.4bpp.lz");
const u16 gBattleAnimSpritePal_Smoke[] = INCBIN_U16("graphics/battle_anims/sprites/smoke.gbapal");

const u32 gBattleAnimSpriteGfx_Smoke2[] = INCBIN_U32("graphics/battle_anims/sprites/smoke_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_BlueFlames[] = INCBIN_U32("graphics/battle_anims/sprites/blue_flames.4bpp.lz");
const u16 gBattleAnimSpritePal_BlueFlames[] = INCBIN_U16("graphics/battle_anims/sprites/blue_flames.gbapal");

const u32 gBattleAnimSpriteGfx_BlueFlames2[] = INCBIN_U32("graphics/battle_anims/sprites/blue_flames_2.4bpp.lz");

// Contest
const u32 gJPContestGfx1[] = INCBIN_U32("graphics/contest/japanese/composite_1.4bpp.lz");
const u16 gJPContestPal[] = INCBIN_U16("graphics/contest/japanese/palette.gbapal");
const u32 gJPContestBgTilemap[] = INCBIN_U32("graphics/contest/japanese/bg.bin.lz");
const u32 gJPContestWindowsTilemap[] = INCBIN_U32("graphics/contest/japanese/windows.bin.lz");
const u32 gJPContestGfx2[] = INCBIN_U32("graphics/contest/japanese/composite_2.4bpp.lz");

const u16 gContestInterfaceAudiencePalette[] = INCBIN_U16("graphics/contest/interface.gbapal");
const u32 gContestAudienceTilemap[] = INCBIN_U32("graphics/contest/audience.bin.lz");
const u32 gContestInterfaceTilemap[] = INCBIN_U32("graphics/contest/interface.bin.lz");
const u32 gJPContestInterfaceTilemap[] = INCBIN_U32("graphics/contest/japanese/interface.bin.lz");
const u32 gJPContestAudienceTilemap[] = INCBIN_U32("graphics/contest/japanese/audience.bin.lz");
const u32 gContestCurtainTilemap[] = INCBIN_U32("graphics/contest/curtain.bin.lz");

const u32 gContestInterfaceGfx[] = INCBIN_U32("graphics/contest/interface.4bpp.lz");
const u32 gContestAudienceGfx[] = INCBIN_U32("graphics/contest/audience.4bpp.lz");
const u32 gContestFaces_Gfx[] = INCBIN_U32("graphics/contest/faces.4bpp.lz");
const u32 gContestJudgeSymbolsGfx[] = INCBIN_U32("graphics/contest/judge_symbols.4bpp.lz");
const u16 gContestJudgeSymbolsPal[] = INCBIN_U16("graphics/contest/judge_symbols.gbapal");
const u8 gContestSliderHeart_Gfx[] = INCBIN_U8("graphics/contest/slider_heart.4bpp");

// JP equivalent of the Applause meter
const u32 gJPContestVoltageGfx[] = INCBIN_U32("graphics/contest/japanese/voltage.4bpp.lz");
const u16 gJPContestVoltagePal[] = INCBIN_U16("graphics/contest/japanese/voltage.gbapal");

// Contest results
const u32 gContestResults_Gfx[]                  = INCBIN_U32("graphics/contest/results_screen/tiles.4bpp.lz");
const u32 gContestResults_WinnerBanner_Tilemap[] = INCBIN_U32("graphics/contest/results_screen/winner_banner.bin.lz");
const u32 gContestResults_Interface_Tilemap[]    = INCBIN_U32("graphics/contest/results_screen/interface.bin.lz");
const u32 gContestResults_Bg_Tilemap[]           = INCBIN_U32("graphics/contest/results_screen/bg.bin.lz");
const u16 gContestResults_Pal[]                  = INCBIN_U16("graphics/contest/results_screen/tiles.gbapal");

const u32 gBattleAnimSpriteGfx_Impact[] = INCBIN_U32("graphics/battle_anims/sprites/impact.4bpp.lz");
const u16 gBattleAnimSpritePal_Impact[] = INCBIN_U16("graphics/battle_anims/sprites/impact.gbapal");

const u32 gBattleAnimSpriteGfx_Particles[] = INCBIN_U32("graphics/battle_anims/sprites/particles.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Particles2[] = INCBIN_U32("graphics/battle_anims/sprites/particles2.4bpp.lz");
const u16 gBattleAnimSpritePal_Particles2[] = INCBIN_U16("graphics/battle_anims/sprites/particles2.gbapal");

const u32 gBattleAnimSpriteGfx_CircleImpact[] = INCBIN_U32("graphics/battle_anims/sprites/circle_impact.4bpp.lz");
const u16 gBattleAnimSpritePal_CircleImpact[] = INCBIN_U16("graphics/battle_anims/sprites/circle_impact.gbapal");

const u32 gBattleAnimSpriteGfx_Scratch[] = INCBIN_U32("graphics/battle_anims/sprites/scratch.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SharpTeeth[] = INCBIN_U32("graphics/battle_anims/sprites/sharp_teeth.4bpp.lz");
const u16 gBattleAnimSpritePal_SharpTeeth[] = INCBIN_U16("graphics/battle_anims/sprites/sharp_teeth.gbapal");

const u32 gBattleAnimSpriteGfx_Clamp[] = INCBIN_U32("graphics/battle_anims/sprites/clamp.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Cut[] = INCBIN_U32("graphics/battle_anims/sprites/cut.4bpp.lz");

const u32 gBattleAnimSpriteGfx_RainbowRings[] = INCBIN_U32("graphics/battle_anims/sprites/rainbow_rings.4bpp.lz");
const u16 gBattleAnimSpritePal_RainbowRings[] = INCBIN_U16("graphics/battle_anims/sprites/rainbow_rings.gbapal");

const u32 gBattleAnimSpriteGfx_IceCrystals[] = INCBIN_U32("graphics/battle_anims/sprites/ice_crystals.4bpp.lz");
const u16 gBattleAnimSpritePal_IceCrystals[] = INCBIN_U16("graphics/battle_anims/sprites/ice_crystals.gbapal");

const u32 gBattleAnimSpriteGfx_IceSpikes[] = INCBIN_U32("graphics/battle_anims/sprites/ice_spikes.4bpp.lz");

const u32 gBattleAnimSpriteGfx_OldBeatUp[] = INCBIN_U32("graphics/battle_anims/unused/old_beatup.4bpp.lz");
const u16 gBattleAnimSpritePal_OldBeatUp[] = INCBIN_U16("graphics/battle_anims/unused/old_beatup.gbapal");

const u32 gBattleAnimSpriteGfx_Orbs[] = INCBIN_U32("graphics/battle_anims/sprites/orbs.4bpp.lz");
const u16 gBattleAnimSpritePal_Orbs[] = INCBIN_U16("graphics/battle_anims/sprites/orbs.gbapal");

const u32 gBattleAnimSpriteGfx_WaterOrb[] = INCBIN_U32("graphics/battle_anims/sprites/water_orb.4bpp.lz");

const u32 gBattleAnimSpriteGfx_WaterImpact[] = INCBIN_U32("graphics/battle_anims/sprites/water_impact.4bpp.lz");
const u16 gBattleAnimSpritePal_WaterImpact[] = INCBIN_U16("graphics/battle_anims/sprites/water_impact.gbapal");

const u16 gBattleAnimSpritePal_BrownOrb[] = INCBIN_U16("graphics/battle_anims/sprites/brown_orb.gbapal");

const u32 gBattleAnimSpriteGfx_MudSand[] = INCBIN_U32("graphics/battle_anims/sprites/mud_sand.4bpp.lz");
const u16 gBattleAnimSpritePal_MudSand[] = INCBIN_U16("graphics/battle_anims/sprites/mud_sand.gbapal");

const u32 gBattleAnimSpriteGfx_PoisonBubble[] = INCBIN_U32("graphics/battle_anims/sprites/poison_bubble.4bpp.lz");
const u16 gBattleAnimSpritePal_PoisonBubble[] = INCBIN_U16("graphics/battle_anims/sprites/poison_bubble.gbapal");

const u32 gBattleAnimSpriteGfx_ToxicBubble[] = INCBIN_U32("graphics/battle_anims/sprites/toxic_bubble.4bpp.lz");

const u32 gBattleAnimSpriteGfx_HornHit2[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit_2.4bpp.lz");
const u16 gBattleAnimSpritePal_HornHit2[] = INCBIN_U16("graphics/battle_anims/sprites/horn_hit_2.gbapal");

const u32 gBattleAnimSpriteGfx_AirWave2[] = INCBIN_U32("graphics/battle_anims/sprites/air_wave_2.4bpp.lz");
const u16 gBattleAnimSpritePal_AirWave2[] = INCBIN_U16("graphics/battle_anims/sprites/air_wave_2.gbapal");

const u32 gBattleAnimSpriteGfx_SmallBubbles[] = INCBIN_U32("graphics/battle_anims/sprites/small_bubbles.4bpp.lz");
const u16 gBattleAnimSpritePal_SmallBubbles[] = INCBIN_U16("graphics/battle_anims/sprites/small_bubbles.gbapal");

const u32 gBattleAnimSpriteGfx_RoundShadow[] = INCBIN_U32("graphics/battle_anims/sprites/round_shadow.4bpp.lz");
const u16 gBattleAnimSpritePal_RoundShadow[] = INCBIN_U16("graphics/battle_anims/sprites/round_shadow.gbapal");

const u32 gBattleAnimSpriteGfx_Sunlight[] = INCBIN_U32("graphics/battle_anims/sprites/sunlight.4bpp.lz");
const u16 gBattleAnimSpritePal_Sunlight[] = INCBIN_U16("graphics/battle_anims/sprites/sunlight.gbapal");

const u32 gBattleAnimSpriteGfx_Spore[] = INCBIN_U32("graphics/battle_anims/sprites/spore.4bpp.lz");

const u16 gBattleAnimSpritePal_Spore[] = INCBIN_U16("graphics/battle_anims/sprites/spore.gbapal");

const u32 gBattleAnimSpriteGfx_Flower[] = INCBIN_U32("graphics/battle_anims/sprites/flower.4bpp.lz");
const u16 gBattleAnimSpritePal_Flower[] = INCBIN_U16("graphics/battle_anims/sprites/flower.gbapal");

const u32 gBattleAnimSpriteGfx_RazorLeaf[] = INCBIN_U32("graphics/battle_anims/sprites/razor_leaf.4bpp.lz");
const u16 gBattleAnimSpritePal_RazorLeaf[] = INCBIN_U16("graphics/battle_anims/sprites/razor_leaf.gbapal");

const u32 gBattleAnimSpriteGfx_MistCloud[] = INCBIN_U32("graphics/battle_anims/sprites/mist_cloud.4bpp.lz");
const u16 gBattleAnimSpritePal_MistCloud[] = INCBIN_U16("graphics/battle_anims/sprites/mist_cloud.gbapal");

const u32 gBattleAnimUnusedGfx_Lights[] = INCBIN_U32("graphics/battle_anims/unused/lights.4bpp.lz");
const u16 gBattleAnimUnusedPal_Lights[] = INCBIN_U16("graphics/battle_anims/unused/lights.gbapal");
const u32 gBattleAnimUnusedTilemap_Lights[] = INCBIN_U32("graphics/battle_anims/unused/lights.bin.lz");

const u32 gBattleAnimSpriteGfx_WhirlwindLines[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind_lines.4bpp.lz");
const u16 gBattleAnimSpritePal_WhirlwindLines[] = INCBIN_U16("graphics/battle_anims/sprites/whirlwind_lines.gbapal");

const u32 gBattleAnimSpriteGfx_GoldRing[] = INCBIN_U32("graphics/battle_anims/sprites/gold_ring.4bpp.lz");
const u16 gBattleAnimSpritePal_GoldRing[] = INCBIN_U16("graphics/battle_anims/sprites/gold_ring.gbapal");

const u16 gBattleAnimSpritePal_BlueRing2[] = INCBIN_U16("graphics/battle_anims/sprites/blue_ring_2.gbapal");
const u16 gBattleAnimSpritePal_PurpleRing[] = INCBIN_U16("graphics/battle_anims/sprites/purple_ring.gbapal");
const u16 gBattleAnimSpritePal_BlueRing[] = INCBIN_U16("graphics/battle_anims/sprites/blue_ring.gbapal");

const u32 gBattleAnimSpriteGfx_GreenLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/green_light_wall.4bpp.lz");
const u16 gBattleAnimSpritePal_GreenLightWall[] = INCBIN_U16("graphics/battle_anims/sprites/green_light_wall.gbapal");

const u16 gBattleAnimSpritePal_BlueLightWall[] = INCBIN_U16("graphics/battle_anims/sprites/blue_light_wall.gbapal");
const u16 gBattleAnimSpritePal_RedLightWall[] = INCBIN_U16("graphics/battle_anims/sprites/red_light_wall.gbapal");
const u16 gBattleAnimSpritePal_GrayLightWall[] = INCBIN_U16("graphics/battle_anims/sprites/gray_light_wall.gbapal");
const u16 gBattleAnimSpritePal_OrangeLightWall[] = INCBIN_U16("graphics/battle_anims/sprites/orange_light_wall.gbapal");

const u32 gBattleAnimSpriteGfx_BlackBall2[] = INCBIN_U32("graphics/battle_anims/sprites/black_ball_2.4bpp.lz");
const u16 gBattleAnimSpritePal_BlackBall2[] = INCBIN_U16("graphics/battle_anims/sprites/black_ball_2.gbapal");

const u16 gBattleAnimSpritePal_PurpleGasCloud[] = INCBIN_U16("graphics/battle_anims/sprites/purple_gas_cloud.gbapal");

const u32 gContestJudgeGfx[] = INCBIN_U32("graphics/contest/judge.4bpp.lz");
const u16 gContest2Pal[] = INCBIN_U16("graphics/contest/judge.gbapal");

const u32 gBattleAnimSpriteGfx_Spark[] = INCBIN_U32("graphics/battle_anims/sprites/spark.4bpp.lz");
const u16 gBattleAnimSpritePal_Spark[] = INCBIN_U16("graphics/battle_anims/sprites/spark.gbapal");

const u32 gBattleAnimSpriteGfx_SparkH[] = INCBIN_U32("graphics/battle_anims/sprites/spark_h.4bpp.lz");

const u32 gBattleAnimBgImage_Dark[] = INCBIN_U32("graphics/battle_anims/backgrounds/dark.4bpp.lz");
const u16 gBattleAnimBgPalette_Dark[] = INCBIN_U16("graphics/battle_anims/backgrounds/dark.gbapal");
const u32 gBattleAnimBgTilemap_Dark[] = INCBIN_U32("graphics/battle_anims/backgrounds/dark.bin.lz");

const u32 gMetalShineGfx[] = INCBIN_U32("graphics/battle_anims/masks/metal_shine.4bpp.lz");
const u16 gMetalShinePalette[] = INCBIN_U16("graphics/battle_anims/masks/metal_shine.gbapal");
const u32 gMetalShineTilemap[] = INCBIN_U32("graphics/battle_anims/masks/metal_shine.bin.lz");

const u32 gUnusedGfx_Goosuto[] = INCBIN_U32("graphics/battle_anims/unused/goosuto.4bpp.lz"); // ghost
const u16 gUnusedPal_Goosuto[] = INCBIN_U16("graphics/battle_anims/unused/goosuto.gbapal");
const u32 gUnusedTilemap_Goosuto[] = INCBIN_U32("graphics/battle_anims/unused/goosuto.bin.lz");

const u32 gBattleAnimSpriteGfx_YellowStar[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_star.4bpp.lz");
const u16 gBattleAnimSpritePal_YellowStar[] = INCBIN_U16("graphics/battle_anims/sprites/yellow_star.gbapal");

const u32 gBattleAnimSpriteGfx_LargeFreshEgg[] = INCBIN_U32("graphics/battle_anims/sprites/large_fresh_egg.4bpp.lz");
const u16 gBattleAnimSpritePal_LargeFreshEgg[] = INCBIN_U16("graphics/battle_anims/sprites/large_fresh_egg.gbapal");

const u32 gBattleAnimSpriteGfx_ShadowBall[] = INCBIN_U32("graphics/battle_anims/sprites/shadow_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_ShadowBall[] = INCBIN_U16("graphics/battle_anims/sprites/shadow_ball.gbapal");

const u32 gBattleAnimSpriteGfx_Lick[] = INCBIN_U32("graphics/battle_anims/sprites/lick.4bpp.lz");
const u16 gBattleAnimSpritePal_Lick[] = INCBIN_U16("graphics/battle_anims/sprites/lick.gbapal");

const u32 gBattleAnimSpriteGfx_VoidLines[] = INCBIN_U32("graphics/battle_anims/sprites/void_lines.4bpp.lz");
const u16 gBattleAnimSpritePal_VoidLines[] = INCBIN_U16("graphics/battle_anims/sprites/void_lines.gbapal");

const u16 gBattleAnimSpritePal_String[] = INCBIN_U16("graphics/battle_anims/sprites/string.gbapal");
const u32 gBattleAnimSpriteGfx_String[] = INCBIN_U32("graphics/battle_anims/sprites/string.4bpp.lz");

const u32 gBattleAnimSpriteGfx_WebThread[] = INCBIN_U32("graphics/battle_anims/sprites/web_thread.4bpp.lz");
const u32 gBattleAnimSpriteGfx_SpiderWeb[] = INCBIN_U32("graphics/battle_anims/sprites/spider_web.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Lightbulb[] = INCBIN_U32("graphics/battle_anims/sprites/lightbulb.4bpp.lz");
const u16 gBattleAnimSpritePal_Lightbulb[] = INCBIN_U16("graphics/battle_anims/sprites/lightbulb.gbapal");

const u32 gBattleAnimSpriteGfx_Slash[] = INCBIN_U32("graphics/battle_anims/sprites/slash.4bpp.lz");
const u16 gBattleAnimSpritePal_Slash[] = INCBIN_U16("graphics/battle_anims/sprites/slash.gbapal");

const u32 gBattleAnimSpriteGfx_FocusEnergy[] = INCBIN_U32("graphics/battle_anims/sprites/focus_energy.4bpp.lz");
const u16 gBattleAnimSpritePal_FocusEnergy[] = INCBIN_U16("graphics/battle_anims/sprites/focus_energy.gbapal");

const u32 gBattleAnimSpriteGfx_SphereToCube[] = INCBIN_U32("graphics/battle_anims/sprites/sphere_to_cube.4bpp.lz");
const u16 gBattleAnimSpritePal_SphereToCube[] = INCBIN_U16("graphics/battle_anims/sprites/sphere_to_cube.gbapal");

const u32 gBattleAnimBgImage_Psychic[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic.4bpp.lz");
const u16 gBattleAnimBgPalette_Psychic[] = INCBIN_U16("graphics/battle_anims/backgrounds/psychic.gbapal");
const u32 gBattleAnimBgTilemap_Psychic[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic.bin.lz");

const u32 gBattleAnimSpriteGfx_Eye[] = INCBIN_U32("graphics/battle_anims/sprites/eye.4bpp.lz");
const u16 gBattleAnimSpritePal_Eye[] = INCBIN_U16("graphics/battle_anims/sprites/eye.gbapal");

const u32 gBattleAnimSpriteGfx_Tendrils[] = INCBIN_U32("graphics/battle_anims/sprites/tendrils.4bpp.lz");
const u16 gBattleAnimSpritePal_Tendrils[] = INCBIN_U16("graphics/battle_anims/sprites/tendrils.gbapal");

const u32 gHealthboxSinglesPlayerGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_singles_player.4bpp.lz");
const u32 gHealthboxSinglesOpponentGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_singles_opponent.4bpp.lz");
const u32 gHealthboxDoublesPlayerGfx[] = INCBIN_U32( "graphics/battle_interface/healthbox_doubles_player.4bpp.lz");
const u32 gHealthboxDoublesOpponentGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_doubles_opponent.4bpp.lz");
const u32 gHealthboxSafariGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_safari.4bpp.lz");

const u32 gUnusedGfx_Shadow[] = INCBIN_U32("graphics/unused/shadow.4bpp.lz");
const u16 gUnusedPal_Shadow[] = INCBIN_U16("graphics/unused/shadow.gbapal");

const u32 gBattleAnimSpriteGfx_LockOn[] = INCBIN_U32("graphics/battle_anims/sprites/lock_on.4bpp.lz");
const u16 gBattleAnimSpritePal_LockOn[] = INCBIN_U16("graphics/battle_anims/sprites/lock_on.gbapal");

const u32 gBattleAnimSpriteGfx_OpeningEye[] = INCBIN_U32("graphics/battle_anims/sprites/opening_eye.4bpp.lz");
const u16 gBattleAnimSpritePal_OpeningEye[] = INCBIN_U16("graphics/battle_anims/sprites/opening_eye.gbapal");

const u32 gBattleAnimSpriteGfx_RoundWhiteHalo[] = INCBIN_U32("graphics/battle_anims/sprites/round_white_halo.4bpp.lz");
const u16 gBattleAnimSpritePal_RoundWhiteHalo[] = INCBIN_U16("graphics/battle_anims/sprites/round_white_halo.gbapal");

const u32 gBattleAnimSpriteGfx_TealAlert[] = INCBIN_U32("graphics/battle_anims/sprites/teal_alert.4bpp.lz");
const u16 gBattleAnimSpritePal_TealAlert[] = INCBIN_U16("graphics/battle_anims/sprites/teal_alert.gbapal");

const u32 gBattleAnimSpriteGfx_FangAttack[] = INCBIN_U32("graphics/battle_anims/sprites/fang_attack.4bpp.lz");
const u16 gBattleAnimSpritePal_FangAttack[] = INCBIN_U16("graphics/battle_anims/sprites/fang_attack.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleHandOutline[] = INCBIN_U32("graphics/battle_anims/sprites/purple_hand_outline.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleHandOutline[] = INCBIN_U16("graphics/battle_anims/sprites/purple_hand_outline.gbapal");

const u32 gBattleAnimMaskImage_Curse[] = INCBIN_U32("graphics/battle_anims/masks/curse.4bpp.lz");
const u32 gBattleAnimMaskTilemap_Curse[] = INCBIN_U32("graphics/battle_anims/masks/curse.bin.lz");

const u32 gBattleAnimSpriteGfx_Pencil[] = INCBIN_U32("graphics/battle_anims/sprites/pencil.4bpp.lz");
const u16 gBattleAnimSpritePal_Pencil[] = INCBIN_U16("graphics/battle_anims/sprites/pencil.gbapal");

const u32 gBattleAnimSpriteGfx_Spiral[] = INCBIN_U32("graphics/battle_anims/sprites/spiral.4bpp.lz");
const u16 gBattleAnimSpritePal_Spiral[] = INCBIN_U16("graphics/battle_anims/sprites/spiral.gbapal");

const u32 gBattleAnimSpriteGfx_Moon[] = INCBIN_U32("graphics/battle_anims/sprites/moon.4bpp.lz");
const u16 gBattleAnimSpritePal_Moon[] = INCBIN_U16("graphics/battle_anims/sprites/moon.gbapal");

const u32 gBattleAnimSpriteGfx_GreenSparkle[] = INCBIN_U32("graphics/battle_anims/sprites/green_sparkle.4bpp.lz");
const u16 gBattleAnimSpritePal_GreenSparkle[] = INCBIN_U16("graphics/battle_anims/sprites/green_sparkle.gbapal");

const u32 gBattleAnimSpriteGfx_SnoreZ[] = INCBIN_U32("graphics/battle_anims/sprites/snore_z.4bpp.lz");
const u16 gBattleAnimSpritePal_SnoreZ[] = INCBIN_U16("graphics/battle_anims/sprites/snore_z.gbapal");

const u32 gBattleAnimSpriteGfx_Explosion[] = INCBIN_U32("graphics/battle_anims/sprites/explosion.4bpp.lz");
const u16 gBattleAnimSpritePal_Explosion[] = INCBIN_U16("graphics/battle_anims/sprites/explosion.gbapal");

const u32 gBattleAnimSpriteGfx_Nail[] = INCBIN_U32("graphics/battle_anims/sprites/nail.4bpp.lz");
const u16 gBattleAnimSpritePal_Nail[] = INCBIN_U16("graphics/battle_anims/sprites/nail.gbapal");

const u32 gBattleAnimSpriteGfx_GhostlySpirit[] = INCBIN_U32("graphics/battle_anims/sprites/ghostly_spirit.4bpp.lz");
const u16 gBattleAnimSpritePal_GhostlySpirit[] = INCBIN_U16("graphics/battle_anims/sprites/ghostly_spirit.gbapal");

const u32 gBattleAnimSpriteGfx_WarmRock[] = INCBIN_U32("graphics/battle_anims/sprites/warm_rock.4bpp.lz");
const u16 gBattleAnimSpritePal_WarmRock[] = INCBIN_U16("graphics/battle_anims/sprites/warm_rock.gbapal");

const u32 gBattleAnimSpriteGfx_PunchImpact[] = INCBIN_U32("graphics/battle_anims/sprites/punch_impact.4bpp.lz");
const u16 gBattleAnimSpritePal_PunchImpact[] = INCBIN_U16("graphics/battle_anims/sprites/punch_impact.gbapal");

const u32 gBattleAnimSpriteGfx_BreakingEgg[] = INCBIN_U32("graphics/battle_anims/sprites/breaking_egg.4bpp.lz");
const u16 gBattleAnimSpritePal_BreakingEgg[] = INCBIN_U16("graphics/battle_anims/sprites/breaking_egg.gbapal");

const u32 gBattleAnimSpriteGfx_ThinRing[] = INCBIN_U32("graphics/battle_anims/sprites/thin_ring.4bpp.lz");
const u16 gBattleAnimSpritePal_ThinRing[] = INCBIN_U16("graphics/battle_anims/sprites/thin_ring.gbapal");

const u32 gBattleAnimSpriteGfx_MusicNotes2[] = INCBIN_U32("graphics/battle_anims/sprites/music_notes_2.4bpp.lz");
const u16 gBattleAnimSpritePal_MusicNotes2[] = INCBIN_U16("graphics/battle_anims/sprites/music_notes_2.gbapal");

const u32 gBattleAnimSpriteGfx_Bell[] = INCBIN_U32("graphics/battle_anims/sprites/bell.4bpp.lz");
const u16 gBattleAnimSpritePal_Bell[] = INCBIN_U16("graphics/battle_anims/sprites/bell.gbapal");

const u32 gBattleAnimSpriteGfx_SpeedDust[] = INCBIN_U32("graphics/battle_anims/sprites/speed_dust.4bpp.lz");
const u16 gBattleAnimSpritePal_SpeedDust[] = INCBIN_U16("graphics/battle_anims/sprites/speed_dust.gbapal");

const u32 gBattleAnimSpriteGfx_TornMetal[] = INCBIN_U32("graphics/battle_anims/sprites/torn_metal.4bpp.lz");

const u32 gBattleAnimSpriteGfx_ThoughtBubble[] = INCBIN_U32("graphics/battle_anims/sprites/thought_bubble.4bpp.lz");
const u16 gBattleAnimSpritePal_ThoughtBubble[] = INCBIN_U16("graphics/battle_anims/sprites/thought_bubble.gbapal");

const u32 gBattleAnimSpriteGfx_Finger[] = INCBIN_U32("graphics/battle_anims/sprites/finger.4bpp.lz");
const u16 gBattleAnimSpritePal_Finger[] = INCBIN_U16("graphics/battle_anims/sprites/finger.gbapal");

const u32 gBattleAnimSpriteGfx_MagentaHeart[] = INCBIN_U32("graphics/battle_anims/sprites/magenta_heart.4bpp.lz");

const u16 gBattleAnimSpritePal_PinkHeart[] = INCBIN_U16("graphics/battle_anims/sprites/pink_heart.gbapal");
const u16 gBattleAnimSpritePal_MagentaHeart[] = INCBIN_U16("graphics/battle_anims/sprites/magenta_heart.gbapal");
const u16 gBattleAnimSpritePal_RedHeart[] = INCBIN_U16("graphics/battle_anims/sprites/red_heart.gbapal");

const u32 gBattleAnimBgImage_Attract[] = INCBIN_U32("graphics/battle_anims/backgrounds/attract.4bpp.lz");
const u16 gBattleAnimBgPalette_Attract[] = INCBIN_U16("graphics/battle_anims/backgrounds/attract.gbapal");
const u32 gBattleAnimBgTilemap_Attract[] = INCBIN_U32("graphics/battle_anims/backgrounds/attract.bin.lz");

const u32 gBattleAnimSpriteGfx_RedOrb[] = INCBIN_U32("graphics/battle_anims/sprites/red_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_RedOrb[] = INCBIN_U16("graphics/battle_anims/sprites/red_orb.gbapal");

const u32 gBattleAnimSpriteGfx_CircleOfLight[] = INCBIN_U32("graphics/battle_anims/sprites/circle_of_light.4bpp.lz");
const u32 gBattleAnimSpriteGfx_ElectricOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/electric_orbs.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Electricity[] = INCBIN_U32("graphics/battle_anims/sprites/electricity.4bpp.lz");

const u16 gBattleAnimSpritePal_ElectricOrbs[] = INCBIN_U16("graphics/battle_anims/sprites/electric_orbs.gbapal");

const u32 gBattleAnimSpriteGfx_Finger2[] = INCBIN_U32("graphics/battle_anims/sprites/finger_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_MovementWaves[] = INCBIN_U32("graphics/battle_anims/sprites/movement_waves.4bpp.lz");
const u16 gBattleAnimSpritePal_MovementWaves[] = INCBIN_U16("graphics/battle_anims/sprites/movement_waves.gbapal");

const u16 gBattleAnimBgPalette_ScaryFace[] = INCBIN_U16("graphics/battle_anims/backgrounds/scary_face.gbapal");
const u32 gBattleAnimBgImage_ScaryFace[] = INCBIN_U32("graphics/battle_anims/backgrounds/scary_face.4bpp.lz");

const u16 gBattleAnimSpritePal_EyeSparkle[] = INCBIN_U16("graphics/battle_anims/sprites/eye_sparkle.gbapal");
const u32 gBattleAnimSpriteGfx_EyeSparkle[] = INCBIN_U32("graphics/battle_anims/sprites/eye_sparkle.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Anger[] = INCBIN_U32("graphics/battle_anims/sprites/anger.4bpp.lz");
const u16 gBattleAnimSpritePal_Anger[] = INCBIN_U16("graphics/battle_anims/sprites/anger.gbapal");

const u32 gBattleAnimSpriteGfx_Conversion[] = INCBIN_U32("graphics/battle_anims/sprites/conversion.4bpp.lz");
const u16 gBattleAnimSpritePal_Conversion[] = INCBIN_U16("graphics/battle_anims/sprites/conversion.gbapal");

const u16 gBattleAnimSpritePal_Angel[] = INCBIN_U16("graphics/battle_anims/sprites/angel.gbapal");
const u32 gBattleAnimSpriteGfx_Angel[] = INCBIN_U32("graphics/battle_anims/sprites/angel.4bpp.lz");

const u16 gBattleAnimSpritePal_Devil[] = INCBIN_U16("graphics/battle_anims/sprites/devil.gbapal");
const u32 gBattleAnimSpriteGfx_Devil[] = INCBIN_U32("graphics/battle_anims/sprites/devil.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Swipe[] = INCBIN_U32("graphics/battle_anims/sprites/swipe.4bpp.lz");
const u16 gBattleAnimSpritePal_Swipe[] = INCBIN_U16("graphics/battle_anims/sprites/swipe.gbapal");

const u16 gBattleAnimSpritePal_Roots[] = INCBIN_U16("graphics/battle_anims/sprites/roots.gbapal");
const u32 gBattleAnimSpriteGfx_Roots[] = INCBIN_U32("graphics/battle_anims/sprites/roots.4bpp.lz");

const u16 gBattleAnimSpritePal_ItemBag[] = INCBIN_U16("graphics/battle_anims/sprites/item_bag.gbapal");
const u32 gBattleAnimSpriteGfx_ItemBag[] = INCBIN_U32("graphics/battle_anims/sprites/item_bag.4bpp.lz");

const u16 gBattleAnimSpritePal_TriAttackTriangle[] = INCBIN_U16("graphics/battle_anims/sprites/tri_attack_triangle.gbapal");
const u32 gBattleAnimSpriteGfx_TriAttackTriangle[] = INCBIN_U32("graphics/battle_anims/sprites/tri_attack_triangle.4bpp.lz");

const u16 gBattleAnimSpritePal_LetterZ[] = INCBIN_U16("graphics/battle_anims/sprites/letter_z.gbapal");
const u32 gBattleAnimSpriteGfx_LetterZ[] = INCBIN_U32("graphics/battle_anims/sprites/letter_z.4bpp.lz");

const u16 gBattleAnimBgPalette_Impact[] = INCBIN_U16("graphics/battle_anims/backgrounds/impact.gbapal");
const u32 gBattleAnimBgImage_Impact[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact.4bpp.lz");
const u32 gBattleAnimBgTilemap_ImpactOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact_opponent.bin.lz");

const u32 gBattleAnimBgTilemap_ImpactPlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact_player.bin.lz");
const u32 gBattleAnimBgTilemap_ImpactContests[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact_contests.bin.lz");

const u32 gBattleAnimSpriteGfx_JaggedMusicNote[] = INCBIN_U32("graphics/battle_anims/sprites/jagged_music_note.4bpp.lz");
const u16 gBattleAnimSpritePal_JaggedMusicNote[] = INCBIN_U16("graphics/battle_anims/sprites/jagged_music_note.gbapal");

const u32 gBattleAnimSpriteGfx_Spotlight[] = INCBIN_U32("graphics/battle_anims/sprites/spotlight.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Pokeball[] = INCBIN_U32("graphics/battle_anims/sprites/pokeball.4bpp.lz");
const u16 gBattleAnimSpritePal_Pokeball[] = INCBIN_U16("graphics/battle_anims/sprites/pokeball.gbapal");

const u32 gBattleAnimSpriteGfx_RapidSpin[] = INCBIN_U32("graphics/battle_anims/sprites/rapid_spin.4bpp.lz");
const u16 gBattleAnimSpritePal_RapidSpin[] = INCBIN_U16("graphics/battle_anims/sprites/rapid_spin.gbapal");

const u32 gBattleAnimSpriteGfx_MilkBottle[] = INCBIN_U32("graphics/battle_anims/sprites/milk_bottle.4bpp.lz");
const u16 gBattleAnimSpritePal_MilkBottle[] = INCBIN_U16("graphics/battle_anims/sprites/milk_bottle.gbapal");

const u32 gBattleAnimSpriteGfx_WispFire[] = INCBIN_U32("graphics/battle_anims/sprites/wisp_fire.4bpp.lz");

const u16 gBattleAnimSpritePal_WispOrb[] = INCBIN_U16("graphics/battle_anims/sprites/wisp_orb.gbapal");
const u32 gBattleAnimSpriteGfx_WispOrb[] = INCBIN_U32("graphics/battle_anims/sprites/wisp_orb.4bpp.lz");

const u32 gBattleAnimSpriteGfx_GoldStars[] = INCBIN_U32("graphics/battle_anims/sprites/gold_stars.4bpp.lz");
const u16 gBattleAnimSpritePal_GoldStars[] = INCBIN_U16("graphics/battle_anims/sprites/gold_stars.gbapal");

const u32 gBattleAnimSpriteGfx_EclipsingOrb[] = INCBIN_U32("graphics/battle_anims/sprites/eclipsing_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_EclipsingOrb[] = INCBIN_U16("graphics/battle_anims/sprites/eclipsing_orb.gbapal");

const u32 gBattleAnimSpriteGfx_PinkPetal[] = INCBIN_U32("graphics/battle_anims/sprites/pink_petal.4bpp.lz");
const u16 gBattleAnimSpritePal_PinkPetal[] = INCBIN_U16("graphics/battle_anims/sprites/pink_petal.gbapal");

const u32 gBattleAnimSpriteGfx_GrayOrb[] = INCBIN_U32("graphics/battle_anims/sprites/gray_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_GrayOrb[] = INCBIN_U16("graphics/battle_anims/sprites/gray_orb.gbapal");

const u16 gBattleAnimSpritePal_BlueOrb[] = INCBIN_U16("graphics/battle_anims/sprites/blue_orb.gbapal");
const u16 gBattleAnimSpritePal_RedOrb2[] = INCBIN_U16("graphics/battle_anims/sprites/red_orb_2.gbapal");

const u32 gBattleAnimBgImage_Drill[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill.4bpp.lz");
const u16 gBattleAnimBgPalette_Drill[] = INCBIN_U16("graphics/battle_anims/backgrounds/drill.gbapal");

const u16 gBattleAnimBgPalette_Sky[] = INCBIN_U16("graphics/battle_anims/backgrounds/sky.gbapal");

const u32 gBattleAnimBgTilemap_Drill[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill.bin.lz");
const u32 gBattleAnimBgTilemap_DrillContests[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill_contests.bin.lz");

const u32 gBattleAnimBgImage_Aurora[] = INCBIN_U32("graphics/battle_anims/backgrounds/aurora.4bpp.lz");
const u16 gBattleAnimBgPalette_Aurora[] = INCBIN_U16("graphics/battle_anims/backgrounds/aurora.gbapal");
const u32 gBattleAnimBgTilemap_Aurora[] = INCBIN_U32("graphics/battle_anims/backgrounds/aurora.bin.lz");

const u32 gBattleAnimBgTilemap_HighspeedOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed_opponent.bin.lz");
const u16 gBattleAnimBgPalette_Highspeed[] = INCBIN_U16("graphics/battle_anims/backgrounds/highspeed.gbapal");

const u16 gBattleAnimBgPalette_Bug[] = INCBIN_U16("graphics/battle_anims/backgrounds/bug.gbapal");

const u32 gBattleAnimBgImage_Highspeed[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed.4bpp.lz");
const u32 gBattleAnimBgTilemap_HighspeedPlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed_player.bin.lz");

const u32 gBattleAnimMaskImage_LightBeam[] = INCBIN_U32("graphics/battle_anims/masks/light_beam.4bpp.lz");
const u16 gBattleAnimMaskPalette_LightBeam[] = INCBIN_U16("graphics/battle_anims/masks/light_beam.gbapal");
const u32 gBattleAnimMaskTilemap_LightBeam[] = INCBIN_U32("graphics/battle_anims/masks/light_beam.bin.lz");

const u32 gBattleAnimBgTilemap_GuillotineOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine_opponent.bin.lz");
const u32 gBattleAnimBgTilemap_GuillotinePlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine_player.bin.lz");
const u32 gBattleAnimBgTilemap_GuillotineContests[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine_contests.bin.lz");

const u32 gBattleAnimBgImage_Guillotine[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine.4bpp.lz");
const u16 gBattleAnimBgPalette_Guillotine[] = INCBIN_U16("graphics/battle_anims/backgrounds/guillotine.gbapal");

const u32 gBattleAnimBgImage_Thunder[] = INCBIN_U32("graphics/battle_anims/backgrounds/thunder.4bpp.lz");
const u16 gBattleAnimBgPalette_Thunder[] = INCBIN_U16("graphics/battle_anims/backgrounds/thunder.gbapal");
const u32 gBattleAnimBgTilemap_Thunder[] = INCBIN_U32("graphics/battle_anims/backgrounds/thunder.bin.lz");

const u32 gBattleAnimSpriteGfx_PainSplit[] = INCBIN_U32("graphics/battle_anims/sprites/pain_split.4bpp.lz");
const u16 gBattleAnimSpritePal_PainSplit[] = INCBIN_U16("graphics/battle_anims/sprites/pain_split.gbapal");

const u32 gBattleAnimSpriteGfx_HandsAndFeet[] = INCBIN_U32("graphics/battle_anims/sprites/hands_and_feet.4bpp.lz");
const u16 gBattleAnimSpritePal_HandsAndFeet[] = INCBIN_U16("graphics/battle_anims/sprites/hands_and_feet.gbapal");

const u32 gBattleAnimSpriteGfx_Confetti[] = INCBIN_U32("graphics/battle_anims/sprites/confetti.4bpp.lz");
const u16 gBattleAnimSpritePal_Confetti[] = INCBIN_U16("graphics/battle_anims/sprites/confetti.gbapal");

const u32 gBattleAnimSpriteGfx_Substitute[] = INCBIN_U32("graphics/battle_anims/sprites/substitute.4bpp.lz");
const u32 gBattleAnimSpriteGfx_SubstituteBack[] = INCBIN_U32("graphics/battle_anims/sprites/substitute_back.4bpp.lz");
const u16 gBattleAnimSpritePal_Substitute[] = INCBIN_U16("graphics/battle_anims/sprites/substitute.gbapal");

const u32 gBattleAnimSpriteGfx_GreenStar[] = INCBIN_U32("graphics/battle_anims/sprites/green_star.4bpp.lz");
const u16 gBattleAnimSpritePal_GreenStar[] = INCBIN_U16("graphics/battle_anims/sprites/green_star.gbapal");

const u32 gConfetti_Gfx[] = INCBIN_U32("graphics/misc/confetti.4bpp.lz");
const u16 gConfetti_Pal[] = INCBIN_U16("graphics/misc/confetti.gbapal");

const u32 gBattleAnimSpriteGfx_PinkCloud[] = INCBIN_U32("graphics/battle_anims/sprites/pink_cloud.4bpp.lz");
const u16 gBattleAnimSpritePal_PinkCloud[] = INCBIN_U16("graphics/battle_anims/sprites/pink_cloud.gbapal");

const u32 gBattleAnimSpriteGfx_SweatDrop[] = INCBIN_U32("graphics/battle_anims/sprites/sweat_drop.4bpp.lz");
const u16 gBattleAnimSpritePal_SweatDrop[] = INCBIN_U16("graphics/battle_anims/sprites/sweat_drop.gbapal");

const u32 gStatAnim_Gfx[]              = INCBIN_U32("graphics/battle_anims/stat_change/tiles.4bpp.lz");
const u32 gStatAnim_Increase_Tilemap[] = INCBIN_U32("graphics/battle_anims/stat_change/increase.bin.lz");
const u32 gStatAnim_Decrease_Tilemap[] = INCBIN_U32("graphics/battle_anims/stat_change/decrease.bin.lz");
const u16 gStatAnim_Defense_Pal[]      = INCBIN_U16("graphics/battle_anims/stat_change/defense.gbapal");
const u16 gStatAnim_Attack_Pal[]       = INCBIN_U16("graphics/battle_anims/stat_change/attack.gbapal");
const u16 gStatAnim_Accuracy_Pal[]     = INCBIN_U16("graphics/battle_anims/stat_change/accuracy.gbapal");
const u16 gStatAnim_Speed_Pal[]        = INCBIN_U16("graphics/battle_anims/stat_change/speed.gbapal");
const u16 gStatAnim_Multiple_Pal[]     = INCBIN_U16("graphics/battle_anims/stat_change/multiple.gbapal");
const u16 gStatAnim_Evasion_Pal[]      = INCBIN_U16("graphics/battle_anims/stat_change/evasion.gbapal");
const u16 gStatAnim_SpAttack_Pal[]     = INCBIN_U16("graphics/battle_anims/stat_change/sp_attack.gbapal");
const u16 gStatAnim_SpDefense_Pal[]    = INCBIN_U16("graphics/battle_anims/stat_change/sp_defense.gbapal");

const u32 gCureBubblesGfx[] = INCBIN_U32("graphics/battle_anims/masks/cure_bubbles.4bpp.lz");
const u16 gCureBubblesPal[] = INCBIN_U16("graphics/battle_anims/masks/cure_bubbles.gbapal");
const u32 gCureBubblesTilemap[] = INCBIN_U32("graphics/battle_anims/masks/cure_bubbles.bin.lz");

const u16 gBattleAnimSpritePal_PurpleScratch[] = INCBIN_U16("graphics/battle_anims/sprites/purple_scratch.gbapal");
const u32 gBattleAnimSpriteGfx_PurpleScratch[] = INCBIN_U32("graphics/battle_anims/sprites/purple_scratch.4bpp.lz");

const u32 gBattleAnimSpriteGfx_PurpleSwipe[] = INCBIN_U32("graphics/battle_anims/sprites/purple_swipe.4bpp.lz");

const u32 gBattleAnimSpriteGfx_GuardRing[] = INCBIN_U32("graphics/battle_anims/sprites/guard_ring.4bpp.lz");
const u16 gBattleAnimSpritePal_GuardRing[] = INCBIN_U16("graphics/battle_anims/sprites/guard_ring.gbapal");

const u32 gBattleAnimSpriteGfx_TagHand[] = INCBIN_U32("graphics/battle_anims/sprites/tag_hand.4bpp.lz");

const u32 gBattleAnimSpriteGfx_NoiseLine[] = INCBIN_U32("graphics/battle_anims/sprites/noise_line.4bpp.lz");

const u32 UnusedLevelupAnimationGfx[] = INCBIN_U32("graphics/battle_anims/masks/unused_level_up.4bpp.lz");
const u32 UnusedLevelupAnimationTilemap[] = INCBIN_U32("graphics/battle_anims/masks/unused_level_up.bin.lz");

const u32 gBattleAnimSpriteGfx_SmallRedEye[] = INCBIN_U32("graphics/battle_anims/sprites/small_red_eye.4bpp.lz");
const u16 gBattleAnimSpritePal_SmallRedEye[] = INCBIN_U16("graphics/battle_anims/sprites/small_red_eye.gbapal");

const u32 gBattleAnimSpriteGfx_HollowOrb[] = INCBIN_U32("graphics/battle_anims/sprites/hollow_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_HollowOrb[] = INCBIN_U16("graphics/battle_anims/sprites/hollow_orb.gbapal");

const u32 gBattleAnimSpriteGfx_XSign[] = INCBIN_U32("graphics/battle_anims/sprites/x_sign.4bpp.lz");

const u32 gBattleAnimSpriteGfx_BluegreenOrb[] = INCBIN_U32("graphics/battle_anims/sprites/bluegreen_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_BluegreenOrb[] = INCBIN_U16("graphics/battle_anims/sprites/bluegreen_orb.gbapal");

const u32 gBattleAnimSpriteGfx_PinkVioletOrb[] = INCBIN_U32("graphics/battle_anims/sprites/pinkvio_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_PinkVioletOrb[] = INCBIN_U16("graphics/battle_anims/sprites/pinkvio_orb.gbapal");

const u32 gBattleAnimSpriteGfx_PawPrint[] = INCBIN_U32("graphics/battle_anims/sprites/paw_print.4bpp.lz");
const u16 gBattleAnimSpritePal_PawPrint[] = INCBIN_U16("graphics/battle_anims/sprites/paw_print.gbapal");

const u32 gBattleAnimSpriteGfx_PurpleFlame[] = INCBIN_U32("graphics/battle_anims/sprites/purple_flame.4bpp.lz");
const u16 gBattleAnimSpritePal_PurpleFlame[] = INCBIN_U16("graphics/battle_anims/sprites/purple_flame.gbapal");

const u32 gBattleAnimSpriteGfx_RedBall[] = INCBIN_U32("graphics/battle_anims/sprites/red_ball.4bpp.lz");
const u16 gBattleAnimSpritePal_RedBall[] = INCBIN_U16("graphics/battle_anims/sprites/red_ball.gbapal");

const u32 gBattleAnimSpriteGfx_SmellingsaltEffect[] = INCBIN_U32("graphics/battle_anims/sprites/smellingsalt_effect.4bpp.lz");
const u16 gBattleAnimSpritePal_SmellingsaltEffect[] = INCBIN_U16("graphics/battle_anims/sprites/smellingsalt_effect.gbapal");

const u32 gBattleAnimSpriteGfx_MagnifyingGlass[] = INCBIN_U32("graphics/battle_anims/sprites/magnifying_glass.4bpp.lz");
const u16 gBattleAnimSpritePal_MagnifyingGlass[] = INCBIN_U16("graphics/battle_anims/sprites/magnifying_glass.gbapal");

const u32 gBattleAnimSpriteGfx_Meteor[] = INCBIN_U32("graphics/battle_anims/sprites/meteor.4bpp.lz");
const u16 gBattleAnimSpritePal_Meteor[] = INCBIN_U16("graphics/battle_anims/sprites/meteor.gbapal");

const u32 gBattleAnimSpriteGfx_FlatRock[] = INCBIN_U32("graphics/battle_anims/sprites/flat_rock.4bpp.lz");
const u16 gBattleAnimSpritePal_FlatRock[] = INCBIN_U16("graphics/battle_anims/sprites/flat_rock.gbapal");

const u32 gBattleAnimSpriteGfx_TeraStarstormBeam[] = INCBIN_U32("graphics/battle_anims/sprites/starstorm_beam.4bpp.lz");
const u16 gBattleAnimSpritePal_TeraStarstormBeam[] = INCBIN_U16("graphics/battle_anims/sprites/starstorm_beam.gbapal");

const u32 gBattleAnimSpriteGfx_SaltParticle[] = INCBIN_U32("graphics/battle_anims/sprites/salt_particle.4bpp.lz");
const u16 gBattleAnimSpritePal_SaltParticle[] = INCBIN_U16("graphics/battle_anims/sprites/salt_particle.gbapal");

const u16 gBattleAnimUnusedPal_Unknown2[] = INCBIN_U16("graphics/battle_anims/unused/unknown_2.gbapal");

#include "data/graphics/trainers.h"

const u32 gBattleVSFrame_Gfx[] = INCBIN_U32("graphics/battle_transitions/vs_frame.4bpp.lz");
const u32 gBattleVSFrame_Tilemap[] = INCBIN_U32("graphics/battle_transitions/vs_frame.bin.lz");
const u16 gBattleVSFrame_Pal[] = INCBIN_U16("graphics/battle_transitions/vs_frame.gbapal");

const u32 gVsLettersGfx[] = INCBIN_U32("graphics/battle_transitions/vs.4bpp.lz");

#include "data/graphics/battle_environment.h"

// Battle Dome
const u32 gDomeTourneyTree_Gfx[] = INCBIN_U32("graphics/battle_frontier/tourney_tree.4bpp.lz");
const u32 gDomeTourneyLine_Gfx[] = INCBIN_U32("graphics/battle_frontier/tourney_line.4bpp.lz"); // the red glow mask for the tourney advancement lines
const u32 gDomeTourneyTree_Tilemap[] = INCBIN_U32("graphics/battle_frontier/tourney_tree.bin.lz");
const u32 gDomeTourneyLineDown_Tilemap[] = INCBIN_U32("graphics/battle_frontier/tourney_line_down_map.bin.lz");
const u32 gDomeTourneyLineUp_Tilemap[] = INCBIN_U32("graphics/battle_frontier/tourney_line_up_map.bin.lz");
const u32 gDomeTourneyInfoCard_Gfx[] = INCBIN_U32("graphics/battle_frontier/tourney_info_card.4bpp.lz");
const u32 gDomeTourneyInfoCard_Tilemap[] = INCBIN_U32("graphics/battle_frontier/tourney_info_card_tilemap.bin.lz");
const u32 gDomeTourneyInfoCardBg_Tilemap[] = INCBIN_U32("graphics/battle_frontier/tourney_info_card_bg.bin.lz");
const u32 gDomeTourneyTreeButtons_Gfx[] = INCBIN_U32("graphics/battle_frontier/tourney_buttons.4bpp.lz"); // exit/cancel and Poké Ball buttons
const u16 gDomeTourneyTree_Pal[] = INCBIN_U16("graphics/battle_frontier/tourney_tree.gbapal");
const u16 gDomeTourneyTreeButtons_Pal[] = INCBIN_U16("graphics/battle_frontier/tourney_buttons.gbapal");
const u16 gDomeTourneyMatchCardBg_Pal[] = INCBIN_U16("graphics/battle_frontier/tourney_match_card_bg.gbapal");

const u32 gBattleArenaJudgmentSymbolsGfx[] = INCBIN_U32("graphics/battle_frontier/arena_judgment_symbols.4bpp.lz");
const u16 gBattleArenaJudgmentSymbolsPalette[] = INCBIN_U16("graphics/battle_frontier/arena_judgment_symbols.gbapal");

const u16 gBattleWindowTextPalette[] = INCBIN_U16("graphics/battle_interface/text.gbapal");
const u16 gPPTextPalette[] = INCBIN_U16("graphics/battle_interface/text_pp.gbapal");

const u16 gTilesetAnims_BattleDomePals0_0[] = INCBIN_U16("graphics/battle_frontier/dome_anim1.gbapal");
const u16 gTilesetAnims_BattleDomePals0_1[] = INCBIN_U16("graphics/battle_frontier/dome_anim2.gbapal");
const u16 gTilesetAnims_BattleDomePals0_2[] = INCBIN_U16("graphics/battle_frontier/dome_anim3.gbapal");
const u16 gTilesetAnims_BattleDomePals0_3[] = INCBIN_U16("graphics/battle_frontier/dome_anim4.gbapal");

static const u16 sUnused0[] = {0x13F, 0x119, 0x113, 0x10E};

const u16 gBattlePyramidFloor_Pal[] = INCBIN_U16("graphics/battle_frontier/pyramid_floor.gbapal");

const u32 gMultiBattleIntroBg_Opponent_Tilemap[] = INCBIN_U32("graphics/battle_frontier/multi_battle_intro_bg_opponent.bin.lz");
const u32 gMultiBattleIntroBg_Player_Tilemap[] = INCBIN_U32("graphics/battle_frontier/multi_battle_intro_bg_player.bin.lz");

#include "data/graphics/intro_scene.h"

const u32 gBattleAnimSpriteGfx_FlyingDirt[] = INCBIN_U32("graphics/battle_anims/sprites/flying_dirt.4bpp.lz");
const u16 gBattleAnimSpritePal_FlyingDirt[] = INCBIN_U16("graphics/battle_anims/sprites/flying_dirt.gbapal");

const u32 gBattleAnimBgTilemap_Sandstorm[] = INCBIN_U32("graphics/battle_anims/backgrounds/sandstorm_brew.bin.lz");
const u32 gBattleAnimBgImage_Sandstorm[] = INCBIN_U32("graphics/battle_anims/backgrounds/sandstorm_brew.4bpp.lz");

const u16 gBattleAnimSpritePal_Windstorm[] = INCBIN_U16("graphics/battle_anims/backgrounds/windstorm_brew.gbapal");

const u32 gBattleAnimSpriteGfx_MetalSoundWaves[] = INCBIN_U32("graphics/battle_anims/sprites/metal_sound_waves.4bpp.lz");
const u16 gBattleAnimSpritePal_MetalSoundWaves[] = INCBIN_U16("graphics/battle_anims/sprites/metal_sound_waves.gbapal");

const u32 gBattleAnimBgImage_Ice[] = INCBIN_U32("graphics/battle_anims/backgrounds/ice.4bpp.lz");
const u16 gBattleAnimBgPalette_Ice[] = INCBIN_U16("graphics/battle_anims/backgrounds/ice.gbapal");
const u32 gBattleAnimBgTilemap_Ice[] = INCBIN_U32("graphics/battle_anims/backgrounds/ice.bin.lz");

const u32 gBattleAnimSpriteGfx_IcicleSpear[] = INCBIN_U32("graphics/battle_anims/sprites/icicle_spear.4bpp.lz");
const u16 gBattleAnimSpritePal_IcicleSpear[] = INCBIN_U16("graphics/battle_anims/sprites/icicle_spear.gbapal");

const u32 gContestNextTurnGfx[] = INCBIN_U32("graphics/contest/nextturn.4bpp.lz");
const u8 gContestNextTurnNumbersGfx[] = INCBIN_U8("graphics/contest/nextturn_numbers.4bpp");
const u8 gContestNextTurnRandomGfx[] = INCBIN_U8("graphics/contest/nextturn_random.4bpp");

const u32 gBattleAnimSpriteGfx_GlowyRedOrb[] = INCBIN_U32("graphics/battle_anims/sprites/glowy_red_orb.4bpp.lz");
const u16 gBattleAnimSpritePal_GlowyRedOrb[] = INCBIN_U16("graphics/battle_anims/sprites/glowy_red_orb.gbapal");
const u16 gBattleAnimSpritePal_GlowyGreenOrb[] = INCBIN_U16("graphics/battle_anims/sprites/glowy_green_orb.gbapal");
const u16 gBattleAnimSpritePal_SleepPowder[] = INCBIN_U16("graphics/battle_anims/sprites/sleep_powder.gbapal");
const u16 gBattleAnimSpritePal_StunSpore[] = INCBIN_U16("graphics/battle_anims/sprites/stun_spore.gbapal");

const u32 gContestApplauseGfx[] = INCBIN_U32("graphics/contest/applause.4bpp.lz");
const u8 gContestApplauseMeterGfx[] = INCBIN_U8("graphics/contest/applause_meter.4bpp");

const u16 gContestPal[] = INCBIN_U16("graphics/contest/nextturn.gbapal");

const u32 gBattleAnimSpriteGfx_Splash[] = INCBIN_U32("graphics/battle_anims/sprites/splash.4bpp.lz");
const u16 gBattleAnimSpritePal_Splash[] = INCBIN_U16("graphics/battle_anims/sprites/splash.gbapal");

const u32 gBattleAnimSpriteGfx_SweatBead[] = INCBIN_U32("graphics/battle_anims/sprites/sweat_bead.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Pokeblock[] = INCBIN_U32("graphics/battle_anims/sprites/pokeblock.4bpp.lz");
const u16 gBattleAnimSpritePal_Pokeblock[] = INCBIN_U16("graphics/battle_anims/sprites/pokeblock.gbapal");

const u32 gBattleAnimSpriteGfx_Gem1[] = INCBIN_U32("graphics/battle_anims/sprites/gem_1.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Gem2[] = INCBIN_U32("graphics/battle_anims/sprites/gem_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Gem3[] = INCBIN_U32("graphics/battle_anims/sprites/gem_3.4bpp.lz");

const u16 gBattleAnimSpritePal_Gem1[] = INCBIN_U16("graphics/battle_anims/sprites/gem_1.gbapal");

const u32 gBattleAnimBgImage_InAir[] = INCBIN_U32("graphics/battle_anims/backgrounds/in_air.4bpp.lz");
const u16 gBattleAnimBgPalette_InAir[] = INCBIN_U16("graphics/battle_anims/backgrounds/in_air.gbapal");
const u32 gBattleAnimBgTilemap_InAir[] = INCBIN_U32("graphics/battle_anims/backgrounds/in_air.bin.lz");

const u32 gBattleAnimSpriteGfx_Protect[] = INCBIN_U32("graphics/battle_anims/sprites/protect.4bpp.lz");
const u16 gBattleAnimSpritePal_Protect[] = INCBIN_U16("graphics/battle_anims/sprites/protect.gbapal");

const u16 gBattleAnimBackgroundImageMuddyWater_Pal[] = INCBIN_U16("graphics/battle_anims/backgrounds/water_muddy.gbapal");

const u32 gEnemyMonShadow_Gfx[] = INCBIN_U32("graphics/battle_interface/enemy_mon_shadow.4bpp.lz");
const u32 gEnemyMonShadowsSized_Gfx[] = INCBIN_U32("graphics/battle_interface/enemy_mon_shadows_sized.4bpp.lz");

const u32 gBattleInterface_BallStatusBarGfx[] = INCBIN_U32("graphics/battle_interface/ball_status_bar.4bpp.lz");

const u32 gBattleAnimBgImage_Ghost[] = INCBIN_U32("graphics/battle_anims/backgrounds/ghost.4bpp.lz");
const u16 gBattleAnimBgPalette_Ghost[] = INCBIN_U16("graphics/battle_anims/backgrounds/ghost.gbapal");
const u32 gBattleAnimBgTilemap_Ghost[] = INCBIN_U32("graphics/battle_anims/backgrounds/ghost.bin.lz");

const u16 gBattleAnimSpritePal_WhipHit[] = INCBIN_U16("graphics/battle_anims/sprites/whip_hit.gbapal");

const u16 gBattleAnimBgPalette_SolarBeam[] = INCBIN_U16("graphics/battle_anims/backgrounds/solarbeam.gbapal");
const u32 gBattleAnimBgTilemap_SolarBeam[] = INCBIN_U32("graphics/battle_anims/backgrounds/solarbeam.bin.lz"); // Unused

const u16 gBattleAnimBgPalette_MagmaStorm[] = INCBIN_U16("graphics/battle_anims/backgrounds/magma_storm.gbapal");

//new battle bgs

const u32 gBattleAnimBgImage_Hurricane[] = INCBIN_U32("graphics/battle_anims/backgrounds/hurricane.4bpp.lz");
const u16 gBattleAnimBgPalette_Hurricane[] = INCBIN_U16("graphics/battle_anims/backgrounds/hurricane.gbapal");
const u32 gBattleAnimBgTilemap_Hurricane[] = INCBIN_U32("graphics/battle_anims/backgrounds/hurricane.bin.lz");

const u16 gBattleAnimBgPalette_RockWrecker[] = INCBIN_U16("graphics/battle_anims/backgrounds/rock_wrecker.gbapal");

const u32 gBattleAnimBgTilemap_GigaImpactPlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/giga_impact_player.bin.lz");
const u32 gBattleAnimBgTilemap_GigaImpactOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/giga_impact_opponent.bin.lz");
const u32 gBattleAnimBgTilemap_GigaImpactContest[] = INCBIN_U32("graphics/battle_anims/backgrounds/giga_impact_contest.bin.lz");
const u32 gBattleAnimBgImage_GigaImpact[] = INCBIN_U32("graphics/battle_anims/backgrounds/giga_impact.4bpp.lz");
const u32 gBattleAnimBgImage_GigaImpactContest[] = INCBIN_U32("graphics/battle_anims/backgrounds/giga_impact_contest.4bpp.lz");
const u16 gBattleAnimBgPalette_GigaImpact[] = INCBIN_U16("graphics/battle_anims/backgrounds/giga_impact.gbapal");

const u32 gBattleAnimBgImage_SpacialRend[] = INCBIN_U32("graphics/battle_anims/backgrounds/spacial_rend.4bpp.lz");
const u16 gBattleAnimBgPalette_SpacialRend[] = INCBIN_U16("graphics/battle_anims/backgrounds/spacial_rend.gbapal");

const u16 gBattleAnimBgPalette_SludgeWave[] = INCBIN_U16("graphics/battle_anims/backgrounds/sludge_wave.gbapal");

const u32 gBattleAnimBgImage_Aeroblast[] = INCBIN_U32("graphics/battle_anims/backgrounds/aeroblast_tiles.4bpp.lz");
const u16 gBattleAnimBgPalette_Aeroblast[] = INCBIN_U16("graphics/battle_anims/backgrounds/aeroblast.gbapal");
const u32 gBattleAnimBgTilemap_Aeroblast[] = INCBIN_U32("graphics/battle_anims/backgrounds/aeroblast_map.bin.lz");

const u16 gBattleAnimBgPalette_AuraSphere[] = INCBIN_U16("graphics/battle_anims/backgrounds/aura_sphere.gbapal");

const u32 gBattleAnimBgImage_BlackholeEclipse[] = INCBIN_U32("graphics/battle_anims/backgrounds/blackhole_eclipse.4bpp.lz");
const u16 gBattleAnimBgPalette_BlackholeEclipse[] = INCBIN_U16("graphics/battle_anims/backgrounds/blackhole_eclipse.gbapal");
const u32 gBattleAnimBgTilemap_BlackholeEclipse[] = INCBIN_U32("graphics/battle_anims/backgrounds/blackhole_eclipse.bin.lz");

const u32 gBattleAnimBgImage_BloomDoom[] = INCBIN_U32("graphics/battle_anims/backgrounds/bloom_doom.4bpp.lz");
const u16 gBattleAnimBgPalette_BloomDoom[] = INCBIN_U16("graphics/battle_anims/backgrounds/bloom_doom.gbapal");
const u32 gBattleAnimBgTilemap_BloomDoom[] = INCBIN_U32("graphics/battle_anims/backgrounds/bloom_doom.bin.lz");

const u32 gBattleAnimBgImage_BoltStrike[] = INCBIN_U32("graphics/battle_anims/backgrounds/bolt_strike.4bpp.lz");
const u16 gBattleAnimBgPalette_BoltStrike[] = INCBIN_U16("graphics/battle_anims/backgrounds/bolt_strike.gbapal");
const u32 gBattleAnimBgTilemap_BoltStrike[] = INCBIN_U32("graphics/battle_anims/backgrounds/bolt_strike.bin.lz");

const u32 gBattleAnimBgImage_ClangorousSoulblaze[] = INCBIN_U32("graphics/battle_anims/backgrounds/clangorous_soulblaze.4bpp.lz");
const u16 gBattleAnimBgPalette_ClangorousSoulblaze[] = INCBIN_U16("graphics/battle_anims/backgrounds/clangorous_soulblaze.gbapal");
const u32 gBattleAnimBgTilemap_ClangorousSoulblaze[] = INCBIN_U32("graphics/battle_anims/backgrounds/clangorous_soulblaze.bin.lz");

const u16 gBattleAnimBgPalette_DynamaxCannon[] = INCBIN_U16("graphics/battle_anims/backgrounds/dynamax_cannon.gbapal");

const u32 gBattleAnimBgImage_Fire1[] = INCBIN_U32("graphics/battle_anims/backgrounds/fire1.4bpp.lz");
const u16 gBattleAnimBgPalette_Fire1[] = INCBIN_U16("graphics/battle_anims/backgrounds/fire1.gbapal");
const u32 gBattleAnimBgTilemap_Fire1[] = INCBIN_U32("graphics/battle_anims/backgrounds/fire1.bin.lz");

const u16 gBattleAnimBgPalette_Fire2[] = INCBIN_U16("graphics/battle_anims/backgrounds/fire2.gbapal");

const u32 gBattleAnimBgImage_FocusBlast[] = INCBIN_U32("graphics/battle_anims/backgrounds/focus_blast.4bpp.lz");
const u16 gBattleAnimBgPalette_FocusBlast[] = INCBIN_U16("graphics/battle_anims/backgrounds/focus_blast.gbapal");
const u32 gBattleAnimBgTilemap_FocusBlast[] = INCBIN_U32("graphics/battle_anims/backgrounds/focus_blast.bin.lz");

const u16 gBattleAnimBgPalette_GarbageFalls[] = INCBIN_U16("graphics/battle_anims/backgrounds/garbage_falls.gbapal");

const u16 gBattleAnimBgPalette_GunkShot[] = INCBIN_U16("graphics/battle_anims/backgrounds/gunk_shot.gbapal");

const u32 gBattleAnimBgImage_HydroCannon[] = INCBIN_U32("graphics/battle_anims/backgrounds/hydro_cannon.4bpp.lz");
const u16 gBattleAnimBgPalette_HydroCannon[] = INCBIN_U16("graphics/battle_anims/backgrounds/hydro_cannon.gbapal");
const u32 gBattleAnimBgTilemap_HydroCannon[] = INCBIN_U32("graphics/battle_anims/backgrounds/hydro_cannon.bin.lz");
const u16 gBattleAnimBgPalette_Chloroblast[] = INCBIN_U16("graphics/battle_anims/backgrounds/chloroblast.gbapal");

const u32 gBattleAnimBgImage_HydroPump[] = INCBIN_U32("graphics/battle_anims/backgrounds/hydro_pump.4bpp.lz");
const u16 gBattleAnimBgPalette_HydroPump[] = INCBIN_U16("graphics/battle_anims/backgrounds/hydro_pump.gbapal");
const u32 gBattleAnimBgTilemap_HydroPump[] = INCBIN_U32("graphics/battle_anims/backgrounds/hydro_pump.bin.lz");

const u16 gBattleAnimBgPalette_HyperBeam[] = INCBIN_U16("graphics/battle_anims/backgrounds/hyper_beam.gbapal");

const u16 gBattleAnimBgPalette_HyperspaceFury[] = INCBIN_U16("graphics/battle_anims/backgrounds/hyperspace_fury.gbapal");

const u32 gBattleAnimBgImage_InfernoOverdrive[] = INCBIN_U32("graphics/battle_anims/backgrounds/inferno_overdrive.4bpp.lz");
const u16 gBattleAnimBgPalette_InfernoOverdrive[] = INCBIN_U16("graphics/battle_anims/backgrounds/inferno_overdrive.gbapal");
const u32 gBattleAnimBgTilemap_InfernoOverdrive[] = INCBIN_U32("graphics/battle_anims/backgrounds/inferno_overdrive.bin.lz");

const u32 gBattleAnimBgImage_LeafStorm[] = INCBIN_U32("graphics/battle_anims/backgrounds/leaf_storm.4bpp.lz");
const u16 gBattleAnimBgPalette_LeafStorm[] = INCBIN_U16("graphics/battle_anims/backgrounds/leaf_storm.gbapal");
const u32 gBattleAnimBgTilemap_LeafStorm[] = INCBIN_U32("graphics/battle_anims/backgrounds/leaf_storm.bin.lz");

const u32 gBattleAnimBgImage_MaliciousMoonsault[] = INCBIN_U32("graphics/battle_anims/backgrounds/malicious_moonsault.4bpp.lz");
const u16 gBattleAnimBgPalette_MaliciousMoonsault[] = INCBIN_U16("graphics/battle_anims/backgrounds/malicious_moonsault.gbapal");
const u32 gBattleAnimBgTilemap_MaliciousMoonsault[] = INCBIN_U32("graphics/battle_anims/backgrounds/malicious_moonsault.bin.lz");

const u32 gBattleAnimBgImage_MaxLightning[] = INCBIN_U32("graphics/battle_anims/backgrounds/max_lightning.4bpp.lz");
const u16 gBattleAnimBgPalette_MaxLightning[] = INCBIN_U16("graphics/battle_anims/backgrounds/max_lightning.gbapal");
const u32 gBattleAnimBgTilemap_MaxLightning[] = INCBIN_U32("graphics/battle_anims/backgrounds/max_lightning.bin.lz");

const u32 gBattleAnimBgImage_NeverendingNightmare[] = INCBIN_U32("graphics/battle_anims/backgrounds/neverending_nightmare.4bpp.lz");
const u16 gBattleAnimBgPalette_NeverendingNightmare[] = INCBIN_U16("graphics/battle_anims/backgrounds/neverending_nightmare.gbapal");
const u32 gBattleAnimBgTilemap_NeverendingNightmare[] = INCBIN_U32("graphics/battle_anims/backgrounds/neverending_nightmare.bin.lz");

#if B_NEW_TERRAIN_BACKGROUNDS
const u32 gBattleAnimBgImage_ElectricTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_electric_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_ElectricTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/new_electric_terrain.gbapal");
const u32 gBattleAnimBgTilemap_ElectricTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_electric_terrain.bin.lz");

const u32 gBattleAnimBgImage_GrassyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_grassy_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_GrassyTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/new_grassy_terrain.gbapal");
const u32 gBattleAnimBgTilemap_GrassyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_grassy_terrain.bin.lz");

const u32 gBattleAnimBgImage_MistyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_misty_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_MistyTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/new_misty_terrain.gbapal");
const u32 gBattleAnimBgTilemap_MistyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_misty_terrain.bin.lz");

const u32 gBattleAnimBgImage_PsychicTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_psychic_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_PsychicTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/new_psychic_terrain.gbapal");
const u32 gBattleAnimBgTilemap_PsychicTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/new_psychic_terrain.bin.lz");
#else
const u32 gBattleAnimBgImage_PsychicTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_PsychicTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/psychic_terrain.gbapal");
const u32 gBattleAnimBgTilemap_PsychicTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic_terrain.bin.lz");

const u32 gBattleAnimBgImage_ElectricTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/electric_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_ElectricTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/electric_terrain.gbapal");
const u32 gBattleAnimBgTilemap_ElectricTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/electric_terrain.bin.lz");

const u32 gBattleAnimBgImage_GrassyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/grassy_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_GrassyTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/grassy_terrain.gbapal");
const u32 gBattleAnimBgTilemap_GrassyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/grassy_terrain.bin.lz");

const u32 gBattleAnimBgImage_MistyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/misty_terrain.4bpp.lz");
const u16 gBattleAnimBgPalette_MistyTerrain[] = INCBIN_U16("graphics/battle_anims/backgrounds/misty_terrain.gbapal");
const u32 gBattleAnimBgTilemap_MistyTerrain[] = INCBIN_U32("graphics/battle_anims/backgrounds/misty_terrain.bin.lz");
#endif

const u32 gBattleAnimBgImage_Nightmare[] = INCBIN_U32("graphics/battle_anims/backgrounds/nightmare.4bpp.lz");
const u16 gBattleAnimBgPalette_Nightmare[] = INCBIN_U16("graphics/battle_anims/backgrounds/nightmare.gbapal");
const u32 gBattleAnimBgTilemap_Nightmare[] = INCBIN_U32("graphics/battle_anims/backgrounds/nightmare.bin.lz");

const u16 gBattleAnimBgPalette_PoisonFalls[] = INCBIN_U16("graphics/battle_anims/backgrounds/poison_falls.gbapal");

const u16 gBattleAnimBgPalette_PsychicNew[] = INCBIN_U16("graphics/battle_anims/backgrounds/psychic_new.gbapal");

const u32 gBattleAnimBgImage_ShatteredPsyche[] = INCBIN_U32("graphics/battle_anims/backgrounds/shattered_psyche.4bpp.lz");
const u16 gBattleAnimBgPalette_ShatteredPsyche[] = INCBIN_U16("graphics/battle_anims/backgrounds/shattered_psyche.gbapal");
const u32 gBattleAnimBgTilemap_ShatteredPsyche[] = INCBIN_U32("graphics/battle_anims/backgrounds/shattered_psyche.bin.lz");

const u32 gBattleAnimBgImage_RockField[] = INCBIN_U32("graphics/battle_anims/backgrounds/rock_field.4bpp.lz");
const u16 gBattleAnimBgPalette_RockDay[] = INCBIN_U16("graphics/battle_anims/backgrounds/rock_day.gbapal");
const u32 gBattleAnimBgTilemap_RockField[] = INCBIN_U32("graphics/battle_anims/backgrounds/rock_field.bin.lz");

const u16 gBattleAnimBgPalette_RockAfternoon[] = INCBIN_U16("graphics/battle_anims/backgrounds/rock_afternoon.gbapal");

const u16 gBattleAnimBgPalette_RockNight[] = INCBIN_U16("graphics/battle_anims/backgrounds/rock_night.gbapal");

const u32 gBattleAnimBgImage_SnuggleForever[] = INCBIN_U32("graphics/battle_anims/backgrounds/snuggle_forever.4bpp.lz");
const u16 gBattleAnimBgPalette_SnuggleForever[] = INCBIN_U16("graphics/battle_anims/backgrounds/snuggle_forever.gbapal");
const u32 gBattleAnimBgTilemap_SnuggleForever[] = INCBIN_U32("graphics/battle_anims/backgrounds/snuggle_forever.bin.lz");

const u32 gBattleAnimBgImage_SoulStealing7StarStrike[] = INCBIN_U32("graphics/battle_anims/backgrounds/soulstealing_7star_strike.4bpp.lz");
const u16 gBattleAnimBgPalette_SoulStealing7StarStrike[] = INCBIN_U16("graphics/battle_anims/backgrounds/soulstealing_7star_strike.gbapal");
const u32 gBattleAnimBgTilemap_SoulStealing7StarStrike[] = INCBIN_U32("graphics/battle_anims/backgrounds/soulstealing_7star_strike.bin.lz");

const u16 gBattleAnimBgPalette_TectonicRage[] = INCBIN_U16("graphics/battle_anims/backgrounds/tectonic_rage.gbapal");

const u32 gBattleAnimBgImage_TrickRoom[] = INCBIN_U32("graphics/battle_anims/backgrounds/trick_room.4bpp.lz");
const u16 gBattleAnimBgPalette_TrickRoom[] = INCBIN_U16("graphics/battle_anims/backgrounds/trick_room.gbapal");
const u32 gBattleAnimBgTilemap_TrickRoom[] = INCBIN_U32("graphics/battle_anims/backgrounds/trick_room.bin.lz");

const u16 gBattleAnimBgPalette_MagicRoom[] = INCBIN_U16("graphics/battle_anims/backgrounds/magic_room.gbapal");

const u16 gBattleAnimBgPalette_WonderRoom[] = INCBIN_U16("graphics/battle_anims/backgrounds/wonder_room.gbapal");

const u32 gBattleAnimBgImage_TwinkleTackle[] = INCBIN_U32("graphics/battle_anims/backgrounds/twinkle_tackle.4bpp.lz");
const u16 gBattleAnimBgPalette_TwinkleTackle[] = INCBIN_U16("graphics/battle_anims/backgrounds/twinkle_tackle.gbapal");
const u32 gBattleAnimBgTilemap_TwinkleTackle[] = INCBIN_U32("graphics/battle_anims/backgrounds/twinkle_tackle.bin.lz");

const u32 gBattleAnimBgImage_WaterPulse[] = INCBIN_U32("graphics/battle_anims/backgrounds/water_pulse.4bpp.lz");
const u16 gBattleAnimBgPalette_WaterPulse[] = INCBIN_U16("graphics/battle_anims/backgrounds/water_pulse.gbapal");
const u32 gBattleAnimBgTilemap_WaterPulse[] = INCBIN_U32("graphics/battle_anims/backgrounds/water_pulse.bin.lz");

const u32 gBattleAnimBgImage_Waterfall[] = INCBIN_U32("graphics/battle_anims/backgrounds/waterfall.4bpp.lz");
const u16 gBattleAnimBgPalette_Waterfall[] = INCBIN_U16("graphics/battle_anims/backgrounds/waterfall.gbapal");
const u32 gBattleAnimBgTilemap_Waterfall[] = INCBIN_U32("graphics/battle_anims/backgrounds/waterfall.bin.lz");

const u16 gBattleAnimBgPalette_DarkVoid[] = INCBIN_U16("graphics/battle_anims/backgrounds/dark_void.gbapal");
const u32 gBattleAnimBgTilemap_DarkVoid[] = INCBIN_U32("graphics/battle_anims/backgrounds/dark_void.bin.lz");

const u32 gBattleAnimBgImage_ZMoveActivate[] = INCBIN_U32("graphics/battle_anims/backgrounds/zmove_activate.4bpp.lz");
const u16 gBattleAnimBgPalette_ZMoveActivate[] = INCBIN_U16("graphics/battle_anims/backgrounds/zmove_activate.gbapal");
const u32 gBattleAnimBgTilemap_ZMoveActivate[] = INCBIN_U32("graphics/battle_anims/backgrounds/zmove_activate.bin.lz");

const u32 gBattleAnimBgImage_ZMoveMountain[] = INCBIN_U32("graphics/battle_anims/backgrounds/zmove_mountain.4bpp.lz");
const u16 gBattleAnimBgPalette_ZMoveMountain[] = INCBIN_U16("graphics/battle_anims/backgrounds/zmove_mountain.gbapal");
const u32 gBattleAnimBgTilemap_ZMoveMountain[] = INCBIN_U32("graphics/battle_anims/backgrounds/zmove_mountain.bin.lz");

const u16 gBattleAnimBgPalette_SteelBeam[] = INCBIN_U16("graphics/battle_anims/backgrounds/steel_beam.gbapal");

// misc
const u32 gBerryBlenderCenter_Gfx[] = INCBIN_U32("graphics/berry_blender/center.8bpp.lz");
const u32 gBerryBlenderOuter_Gfx[] = INCBIN_U32("graphics/berry_blender/outer.4bpp.lz");
const u32 gBerryBlenderOuter_Tilemap[] = INCBIN_U32("graphics/berry_blender/outer_map.bin.lz");

const u16 gBattleAnimBgPalette_Cosmic[] = INCBIN_U16("graphics/battle_anims/backgrounds/cosmic.gbapal");
const u32 gBattleAnimBgImage_Cosmic[] = INCBIN_U32("graphics/battle_anims/backgrounds/cosmic.4bpp.lz");
const u32 gBattleAnimBgTilemap_Cosmic[] = INCBIN_U32("graphics/battle_anims/backgrounds/cosmic.bin.lz");

const u16 gBattleAnimSpritePal_SlamHit2[] = INCBIN_U16("graphics/battle_anims/sprites/slam_hit_2.gbapal");
const u32 gBattleAnimSpriteGfx_SlamHit2[] = INCBIN_U32("graphics/battle_anims/sprites/slam_hit_2.4bpp.lz");

const u32 gBattleAnimFogTilemap[] = INCBIN_U32("graphics/battle_anims/backgrounds/fog.bin.lz");

const u16 gBattleAnimSpritePal_WeatherBall[] = INCBIN_U16("graphics/battle_anims/sprites/weather_ball.gbapal");
const u32 gBattleAnimSpriteGfx_WeatherBall[] = INCBIN_U32("graphics/battle_anims/sprites/weather_ball.4bpp.lz");

const u32 gBattleAnimBgTilemap_ScaryFacePlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/scary_face_player.bin.lz");
const u32 gBattleAnimBgTilemap_ScaryFaceOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/scary_face_opponent.bin.lz");
const u32 gBattleAnimBgTilemap_ScaryFaceContest[] = INCBIN_U32("graphics/battle_anims/backgrounds/scary_face_contest.bin.lz");

const u32 gBattleAnimSpriteGfx_Hail[] = INCBIN_U32("graphics/battle_anims/sprites/hail.4bpp.lz");
const u16 gBattleAnimSpritePal_Hail[] = INCBIN_U16("graphics/battle_anims/sprites/hail.gbapal");

const u32 gBattleAnimSpriteGfx_GreenSpike[] = INCBIN_U32("graphics/battle_anims/sprites/green_spike.4bpp.lz");
const u16 gBattleAnimSpritePal_GreenSpike[] = INCBIN_U16("graphics/battle_anims/sprites/green_spike.gbapal");
const u16 gBattleAnimSpritePal_WhiteCircleOfLight[] = INCBIN_U16("graphics/battle_anims/sprites/white_circle_of_light.gbapal");
const u16 gBattleAnimSpritePal_GlowyBlueOrb[] = INCBIN_U16("graphics/battle_anims/sprites/glowy_blue_orb.gbapal");

const u32 gBattleAnimSpriteGfx_Recycle[] = INCBIN_U32("graphics/battle_anims/sprites/recycle.4bpp.lz");
const u16 gBattleAnimSpritePal_Recycle[] = INCBIN_U16("graphics/battle_anims/sprites/recycle.gbapal");

const u32 gBattleAnimSpriteGfx_RedParticles[] = INCBIN_U32("graphics/battle_anims/sprites/red_particles.4bpp.lz");
const u16 gBattleAnimSpritePal_RedParticles[] = INCBIN_U16("graphics/battle_anims/sprites/red_particles.gbapal");

const u32 gBattleAnimSpriteGfx_DirtMound[] = INCBIN_U32("graphics/battle_anims/sprites/dirt_mound.4bpp.lz");
const u16 gBattleAnimSpritePal_DirtMound[] = INCBIN_U16("graphics/battle_anims/sprites/dirt_mound.gbapal");

const u32 gBattleAnimBgImage_Fissure[] = INCBIN_U32("graphics/battle_anims/backgrounds/fissure.4bpp.lz");
const u16 gBattleAnimBgPalette_Fissure[] = INCBIN_U16("graphics/battle_anims/backgrounds/fissure.gbapal");
const u32 gBattleAnimBgTilemap_Fissure[] = INCBIN_U32("graphics/battle_anims/backgrounds/fissure.bin.lz");

const u32 gBattleAnimSpriteGfx_Bird[] = INCBIN_U32("graphics/battle_anims/sprites/bird.4bpp.lz");
const u16 gBattleAnimSpritePal_Bird[] = INCBIN_U16("graphics/battle_anims/sprites/bird.gbapal");

const u32 gBattleAnimSpriteGfx_CrossImpact[] = INCBIN_U32("graphics/battle_anims/sprites/cross_impact.4bpp.lz");
const u16 gBattleAnimSpritePal_CrossImpact[] = INCBIN_U16("graphics/battle_anims/sprites/cross_impact.gbapal");

const u32 gBattleAnimBgImage_Surf[] = INCBIN_U32("graphics/battle_anims/backgrounds/water.4bpp.lz");
const u16 gBattleAnimBgPalette_Surf[] = INCBIN_U16("graphics/battle_anims/backgrounds/water.gbapal");

const u32 gBattleAnimBgTilemap_SurfOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/water_opponent.bin.lz");
const u32 gBattleAnimBgTilemap_SurfPlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/water_player.bin.lz");
const u32 gBattleAnimBgTilemap_SurfContest[] = INCBIN_U32("graphics/battle_anims/backgrounds/water_contest.bin.lz");

const u16 gBattleAnimSpritePal_Slash2[] = INCBIN_U16("graphics/battle_anims/sprites/slash_2.gbapal");

const u32 gBattleAnimSpriteGfx_WhiteShadow[] = INCBIN_U32("graphics/battle_anims/sprites/white_shadow.4bpp.lz");
const u16 gBattleAnimSpritePal_WhiteShadow[] = INCBIN_U16("graphics/battle_anims/sprites/white_shadow.gbapal");

// Pledge Effect field status - Rainbow
const u32 gBattleAnimBgImage_Rainbow[] = INCBIN_U32("graphics/battle_anims/backgrounds/rainbow.4bpp.lz");
const u16 gBattleAnimBGPalette_Rainbow[] = INCBIN_U16("graphics/battle_anims/backgrounds/rainbow.gbapal");
const u32 gBattleAnimBgTilemap_Rainbow[] = INCBIN_U32("graphics/battle_anims/backgrounds/rainbow.bin.lz");

// Pledge Effect field status - Swamp
const u32 gBattleAnimBgImage_Swamp[] = INCBIN_U32("graphics/battle_anims/backgrounds/swampswizzle.4bpp.lz");
const u16 gBattleAnimBGPalette_Swamp[] = INCBIN_U16("graphics/battle_anims/backgrounds/swampswizzle.gbapal");
const u32 gBattleAnimBgTilemap_Swamp[] = INCBIN_U32("graphics/battle_anims/backgrounds/swampswizzle.bin.lz");

const u32 gPartyMenuBg_Gfx[] = INCBIN_U32("graphics/party_menu/bg.4bpp.lz");
const u16 gPartyMenuBg_Pal[] = INCBIN_U16("graphics/party_menu/bg.gbapal");
const u32 gPartyMenuBg_Tilemap[] = INCBIN_U32("graphics/party_menu/bg.bin.lz");

const u32 gPartyMenuPokeball_Gfx[] = INCBIN_U32("graphics/party_menu/pokeball.4bpp.lz");
const u32 gPartyMenuPokeballSmall_Gfx[] = INCBIN_U32("graphics/party_menu/pokeball_small.4bpp.lz"); //unused
const u16 gPartyMenuPokeball_Pal[] = INCBIN_U16("graphics/party_menu/pokeball.gbapal");

const u32 gStatusGfx_Icons[] = INCBIN_U32("graphics/interface/status_icons.4bpp.lz");
const u16 gStatusPal_Icons[] = INCBIN_U16("graphics/interface/status_icons.gbapal");

const u16 gCategoryIcons_Pal[] = INCBIN_U16("graphics/interface/category_icons.gbapal");
const u32 gCategoryIcons_Gfx[] = INCBIN_U32("graphics/interface/category_icons.4bpp.lz");

const u32 gMoveTypes_Gfx[] = INCBIN_U32("graphics/types/move_types.4bpp.lz");
const u16 gMoveTypes_Pal[] = INCBIN_U16("graphics/types/move_types.gbapal");

const u32 gSummaryMoveSelect_Gfx[] = INCBIN_U32("graphics/summary_screen/move_select.4bpp.lz");
const u16 gSummaryMoveSelect_Pal[] = INCBIN_U16("graphics/summary_screen/move_select.gbapal");

#if P_SUMMARY_SCREEN_IV_EV_TILESET
const u32 gSummaryScreen_Gfx[]                = INCBIN_U32("graphics/summary_screen/iv_ev_tiles.4bpp.lz");
#else
const u32 gSummaryScreen_Gfx[]                = INCBIN_U32("graphics/summary_screen/tiles.4bpp.lz");
#endif // P_SUMMARY_SCREEN_IV_EV_TILESET
const u16 gSummaryScreen_Pal[]                = INCBIN_U16("graphics/summary_screen/tiles.gbapal");
const u32 gSummaryPage_Info_Tilemap[]         = INCBIN_U32("graphics/summary_screen/page_info.bin.lz");
const u32 gSummaryPage_Skills_Tilemap[]       = INCBIN_U32("graphics/summary_screen/page_skills.bin.lz");
const u32 gSummaryPage_BattleMoves_Tilemap[]  = INCBIN_U32("graphics/summary_screen/page_battle_moves.bin.lz");
const u32 gSummaryPage_ContestMoves_Tilemap[] = INCBIN_U32("graphics/summary_screen/page_contest_moves.bin.lz");
const u32 gSummaryPage_InfoEgg_Tilemap[]      = INCBIN_U32("graphics/summary_screen/page_info_egg.bin.lz");

const u32 gBagMaleTiles[] = INCBIN_U32("graphics/bag/bag_male.4bpp.lz");
const u32 gBagFemaleTiles[] = INCBIN_U32("graphics/bag/bag_female.4bpp.lz");
const u16 gBagPalette[] = INCBIN_U16("graphics/bag/bag.gbapal");

const u16 gBagScreenMale_Pal[] = INCBIN_U16("graphics/bag/menu_male.gbapal");
const u16 gBagScreenFemale_Pal[] = INCBIN_U16("graphics/bag/menu_female.gbapal");

const u32 gBagScreen_Gfx[] = INCBIN_U32("graphics/bag/menu.4bpp.lz");
const u32 gBagScreen_GfxTileMap[] = INCBIN_U32("graphics/bag/menu.bin.lz");

const u32 gBattlePyramidBag_Gfx[]          = INCBIN_U32("graphics/bag/bag_pyramid.4bpp.lz");
const u16 gBattlePyramidBag_Pal[]          = INCBIN_U16("graphics/bag/bag_pyramid.gbapal"); // female palette is first and male is second.
const u32 gBattlePyramidBagTilemap[]       = INCBIN_U32("graphics/bag/menu_pyramid.bin.lz");
const u16 gBattlePyramidBagInterface_Pal[] = INCBIN_U16("graphics/bag/menu_pyramid.gbapal");

const u32 gSwapLineGfx[] = INCBIN_U32("graphics/interface/swap_line.4bpp.lz");
const u16 gSwapLinePal[] = INCBIN_U16("graphics/interface/swap_line.gbapal");

const u32 gShopMenu_Gfx[] = INCBIN_U32("graphics/shop/menu.4bpp.lz");
const u16 gShopMenu_Pal[] = INCBIN_U16("graphics/shop/menu.gbapal");
const u32 gShopMenu_Tilemap[] = INCBIN_U32("graphics/shop/menu.bin.lz");
const u32 gShopMenuMoney_Gfx[] = INCBIN_U32("graphics/shop/money.4bpp.lz");

// Pokeblock

const u32 gMenuPokeblock_Gfx[] = INCBIN_U32("graphics/pokeblock/menu.4bpp.lz");
const u16 gMenuPokeblock_Pal[] = INCBIN_U16("graphics/pokeblock/menu.gbapal");

const u32 gMenuPokeblockDevice_Gfx[] = INCBIN_U32("graphics/pokeblock/device.4bpp.lz");
const u16 gMenuPokeblockDevice_Pal[] = INCBIN_U16("graphics/pokeblock/device.gbapal");

const u32 gMenuPokeblock_Tilemap[] = INCBIN_U32("graphics/pokeblock/menu.bin.lz");

const u32 gPokeblock_Gfx[] = INCBIN_U32("graphics/pokeblock/pokeblock.4bpp.lz");
const u16 gPokeblockRed_Pal[] = INCBIN_U16("graphics/pokeblock/red.gbapal");
const u16 gPokeblockBlue_Pal[] = INCBIN_U16("graphics/pokeblock/blue.gbapal");
const u16 gPokeblockPink_Pal[] = INCBIN_U16("graphics/pokeblock/pink.gbapal");
const u16 gPokeblockGreen_Pal[] = INCBIN_U16("graphics/pokeblock/green.gbapal");
const u16 gPokeblockYellow_Pal[] = INCBIN_U16("graphics/pokeblock/yellow.gbapal");
const u16 gPokeblockPurple_Pal[] = INCBIN_U16("graphics/pokeblock/purple.gbapal");
const u16 gPokeblockIndigo_Pal[] = INCBIN_U16("graphics/pokeblock/indigo.gbapal");
const u16 gPokeblockBrown_Pal[] = INCBIN_U16("graphics/pokeblock/brown.gbapal");
const u16 gPokeblockLiteBlue_Pal[] = INCBIN_U16("graphics/pokeblock/liteblue.gbapal");
const u16 gPokeblockOlive_Pal[] = INCBIN_U16("graphics/pokeblock/olive.gbapal");
const u16 gPokeblockGray_Pal[] = INCBIN_U16("graphics/pokeblock/gray.gbapal");
const u16 gPokeblockBlack_Pal[] = INCBIN_U16("graphics/pokeblock/black.gbapal");
const u16 gPokeblockWhite_Pal[] = INCBIN_U16("graphics/pokeblock/white.gbapal");
const u16 gPokeblockGold_Pal[] = INCBIN_U16("graphics/pokeblock/gold.gbapal");

const u32 gPokeblockFeedBg_Tilemap[] = INCBIN_U32("graphics/pokeblock/feeding_bg.bin.lz");

#include "data/graphics/berries.h"
#include "data/graphics/rayquaza_scene.h"
#include "data/graphics/items.h"
#include "data/graphics/decorations.h"

const u16 gBattleAnimSpritePal_Shock3[] = INCBIN_U16("graphics/battle_anims/sprites/shock_3.gbapal");
const u32 gBattleAnimSpriteGfx_Shock3[] = INCBIN_U32("graphics/battle_anims/sprites/shock_3.4bpp.lz");

const u16 gBattleAnimSpritePal_WhiteFeather[] = INCBIN_U16("graphics/battle_anims/sprites/white_feather.gbapal");
const u32 gBattleAnimSpriteGfx_WhiteFeather[] = INCBIN_U32("graphics/battle_anims/sprites/white_feather.4bpp.lz");

const u16 gBattleAnimSpritePal_Sparkle6[] = INCBIN_U16("graphics/battle_anims/sprites/sparkle_6.gbapal");
const u32 gBattleAnimSpriteGfx_Sparkle6[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_6.4bpp.lz");

const u16 gCableCarBg_Pal[]    = INCBIN_U16("graphics/cable_car/bg.gbapal");
const u16 gCableCar_Pal[]      = INCBIN_U16("graphics/cable_car/cable_car.gbapal");
const u32 gCableCarBg_Gfx[]    = INCBIN_U32("graphics/cable_car/bg.4bpp.lz");
const u32 gCableCar_Gfx[]      = INCBIN_U32("graphics/cable_car/cable_car.4bpp.lz");
const u32 gCableCarDoor_Gfx[]  = INCBIN_U32("graphics/cable_car/door.4bpp.lz");
const u32 gCableCarCable_Gfx[] = INCBIN_U32("graphics/cable_car/cable.4bpp.lz");

// Roulette
const u32 gRouletteMenu_Gfx[] = INCBIN_U32("graphics/roulette/window.4bpp.lz");
const u32 gRouletteWheel_Gfx[] = INCBIN_U32("graphics/roulette/wheel.8bpp.lz");
const u32 gRouletteCenter_Gfx[] = INCBIN_U32("graphics/roulette/center.4bpp.lz");
const u32 gRouletteHeaders_Gfx[] = INCBIN_U32("graphics/roulette/headers.4bpp.lz");
const u32 gRouletteCredit_Gfx[] = INCBIN_U32("graphics/roulette/credit.4bpp.lz");
const u32 gRouletteNumbers_Gfx[] = INCBIN_U32("graphics/roulette/numbers.4bpp.lz");
const u32 gRouletteMultiplier_Gfx[] = INCBIN_U32("graphics/roulette/multiplier.4bpp.lz");

#include "data/graphics/mail.h"

const u16 gFrontierFactoryMenu_Pal[] = INCBIN_U16("graphics/battle_frontier/factory_screen/menu.gbapal");
const u16 gFrontierFactoryMenu_Gfx[] = INCBIN_U16("graphics/battle_frontier/factory_screen/menu.4bpp");
const u16 gFrontierFactoryMenu_Tilemap[] = INCBIN_U16("graphics/battle_frontier/factory_screen/menu.bin");

const u32 gFrontierPassMedals_Gfx[] = INCBIN_U32("graphics/frontier_pass/medals.4bpp.lz");

const u16 gFrontierPassCursor_Pal[] = INCBIN_U16("graphics/frontier_pass/cursor.gbapal");

const u16 gFrontierPassMapCursor_Pal[] = INCBIN_U16("graphics/frontier_pass/map_cursor.gbapal");

const u16 gFrontierPassMedalsSilver_Pal[] = INCBIN_U16("graphics/frontier_pass/silver.gbapal");
const u16 gFrontierPassMedalsGold_Pal[] = INCBIN_U16("graphics/frontier_pass/gold.gbapal");

// Pokédex
const u16 gPokedexBgHoenn_Pal[] = INCBIN_U16("graphics/pokedex/bg_hoenn.gbapal");
const u16 gPokedexSearchResults_Pal[] = INCBIN_U16("graphics/pokedex/search_results_bg.gbapal");
const u16 gPokedexBgNational_Pal[] = INCBIN_U16("graphics/pokedex/bg_national.gbapal");
const u32 gPokedexMenu_Gfx[] = INCBIN_U32("graphics/pokedex/menu.4bpp.lz");
const u32 gPokedexInterface_Gfx[] = INCBIN_U32("graphics/pokedex/interface.4bpp.lz");
const u32 gUnused_PokedexNoBall[] = INCBIN_U32("graphics/pokedex/noball_unused.4bpp.lz");
const u32 gPokedexStartMenuMain_Tilemap[] = INCBIN_U32("graphics/pokedex/start_menu_main.bin.lz");
const u32 gPokedexStartMenuSearchResults_Tilemap[] = INCBIN_U32("graphics/pokedex/start_menu_search_results.bin.lz");
const u32 gPokedexList_Tilemap[] = INCBIN_U32("graphics/pokedex/list.bin.lz");
const u32 gPokedexListUnderlay_Tilemap[] = INCBIN_U32("graphics/pokedex/list_underlay.bin.lz");
const u32 gPokedexSizeScreen_Tilemap[] = INCBIN_U32("graphics/pokedex/size_screen.bin.lz");
const u32 gPokedexScreenSelectBarMain_Tilemap[] = INCBIN_U32("graphics/pokedex/screen_select_bar_main.bin.lz");
const u32 gPokedexScreenSelectBarSubmenu_Tilemap[] = INCBIN_U32("graphics/pokedex/screen_select_bar_submenu.bin.lz");
const u32 gPokedexInfoScreen_Tilemap[] = INCBIN_U32("graphics/pokedex/info_screen.bin.lz");
const u32 gPokedexCryScreen_Tilemap[] = INCBIN_U32("graphics/pokedex/cry_screen.bin.lz");
const u16 gPokedexSearchMenu_Pal[] = INCBIN_U16("graphics/pokedex/search_menu.gbapal");
const u32 gPokedexSearchMenu_Gfx[] = INCBIN_U32("graphics/pokedex/search_menu.4bpp.lz");
const u32 gPokedexSearchMenuNational_Tilemap[] = INCBIN_U32("graphics/pokedex/search_menu_national.bin.lz");
const u32 gPokedexSearchMenuHoenn_Tilemap[] = INCBIN_U32("graphics/pokedex/search_menu_hoenn.bin.lz");

const u16 gSummaryScreen_MoveEffect_Battle_Tilemap[] = INCBIN_U16("graphics/summary_screen/effect_battle.bin");
const u16 gSummaryScreen_MoveEffect_Contest_Tilemap[] = INCBIN_U16("graphics/summary_screen/effect_contest.bin");
const u16 gSummaryScreen_MoveEffect_Cancel_Tilemap[] = INCBIN_U16("graphics/summary_screen/effect_cancel.bin");

const u16 gIntroCopyright_Pal[] = INCBIN_U16("graphics/intro/copyright.gbapal");
const u32 gIntroCopyright_Gfx[] = INCBIN_U32("graphics/intro/copyright.4bpp.lz");
const u32 gIntroCopyright_Tilemap[] = INCBIN_U32("graphics/intro/copyright.bin.lz");

const u16 gPokedexAreaScreenAreaUnknown_Pal[] = INCBIN_U16("graphics/pokedex/area_unknown.gbapal");
const u32 gPokedexAreaScreenAreaUnknown_Gfx[] = INCBIN_U32("graphics/pokedex/area_unknown.4bpp.lz");

const u16 gMenuInfoElements1_Pal[] = INCBIN_U16("graphics/interface/menu_info1.gbapal");
const u16 gMenuInfoElements2_Pal[] = INCBIN_U16("graphics/interface/menu_info2.gbapal");
const u16 gMenuInfoElements3_Pal[] = INCBIN_U16("graphics/interface/menu_info3.gbapal");
const u8 gMenuInfoElements_Gfx[] = INCBIN_U8("graphics/interface/menu_info.4bpp");

const u8 gBagMenuHMIcon_Gfx[] = INCBIN_U8("graphics/bag/hm.4bpp");

// contest results screen

const u16 gContestResultsTitle_Normal_Tilemap[] = INCBIN_U16("graphics/contest/results_screen/title_normal.bin");
const u16 gContestResultsTitle_Super_Tilemap[]  = INCBIN_U16("graphics/contest/results_screen/title_super.bin");
const u16 gContestResultsTitle_Hyper_Tilemap[]  = INCBIN_U16("graphics/contest/results_screen/title_hyper.bin");
const u16 gContestResultsTitle_Master_Tilemap[] = INCBIN_U16("graphics/contest/results_screen/title_master.bin");
const u16 gContestResultsTitle_Link_Tilemap[]   = INCBIN_U16("graphics/contest/results_screen/title_link.bin");
const u16 gContestResultsTitle_Cool_Tilemap[]   = INCBIN_U16("graphics/contest/results_screen/title_cool.bin");
const u16 gContestResultsTitle_Beauty_Tilemap[] = INCBIN_U16("graphics/contest/results_screen/title_beauty.bin");
const u16 gContestResultsTitle_Cute_Tilemap[]   = INCBIN_U16("graphics/contest/results_screen/title_cute.bin");
const u16 gContestResultsTitle_Smart_Tilemap[]  = INCBIN_U16("graphics/contest/results_screen/title_smart.bin");
const u16 gContestResultsTitle_Tough_Tilemap[]  = INCBIN_U16("graphics/contest/results_screen/title_tough.bin");
const u16 gContestResultsTitle_Tilemap[]        = INCBIN_U16("graphics/contest/results_screen/title.bin");

// PokéNav

const u16 gPokenavCondition_Pal[] = INCBIN_U16("graphics/pokenav/condition/graph.gbapal");
const u32 gPokenavCondition_Gfx[] = INCBIN_U32("graphics/pokenav/condition/graph.4bpp.lz");
const u32 gPokenavCondition_Tilemap[] = INCBIN_U32("graphics/pokenav/condition/graph.bin.lz");

const u16 gPokenavOptions_Tilemap[] = INCBIN_U16("graphics/pokenav/options/options.bin");
const u32 gPokenavOptions_Gfx[] = INCBIN_U32("graphics/pokenav/options/options.4bpp.lz");
const u16 gPokenavOptions_Pal[] = INCBIN_U16("graphics/pokenav/options/options.gbapal");

const u16 gPokenavHeader_Pal[] = INCBIN_U16("graphics/pokenav/header.gbapal");
const u32 gPokenavHeader_Gfx[] = INCBIN_U32("graphics/pokenav/header.4bpp.lz"); // TODO: use width 9 and makefile rule for cleanliness, make wasnt behaving, didnt want to apply num_tiles to this
const u32 gPokenavHeader_Tilemap[] = INCBIN_U32("graphics/pokenav/header.bin.lz");

const u16 gPokenavLeftHeader_Pal[] = INCBIN_U16("graphics/pokenav/left_headers/palette.gbapal");
const u32 gPokenavLeftHeaderBeauty_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/beauty.4bpp.lz");
const u32 gPokenavLeftHeaderSmart_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/smart.4bpp.lz");
const u32 gPokenavLeftHeaderCondition_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/condition.4bpp.lz");
const u32 gPokenavLeftHeaderCute_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/cute.4bpp.lz");
const u32 gPokenavLeftHeaderMatchCall_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/match_call.4bpp.lz");
const u32 gPokenavLeftHeaderMainMenu_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/main_menu.4bpp.lz");
const u32 gPokenavLeftHeaderHoennMap_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/hoenn_map.4bpp.lz");
const u32 gPokenavLeftHeaderRibbons_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/ribbons.4bpp.lz");
const u32 gPokenavLeftHeaderSearch_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/search.4bpp.lz");
const u32 gPokenavLeftHeaderTough_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/tough.4bpp.lz");
const u32 gPokenavLeftHeaderCool_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/cool.4bpp.lz");
const u32 gPokenavLeftHeaderParty_Gfx[] = INCBIN_U32("graphics/pokenav/left_headers/party.4bpp.lz");

const u16 gPokenavMessageBox_Pal[] = INCBIN_U16("graphics/pokenav/message.gbapal");
const u32 gPokenavMessageBox_Gfx[] = INCBIN_U32("graphics/pokenav/message.4bpp.lz");
const u32 gPokenavMessageBox_Tilemap[] = INCBIN_U32("graphics/pokenav/message.bin.lz");

const u16 gRegionMapCityZoomTiles_Pal[] = INCBIN_U16("graphics/pokenav/region_map/zoom_tiles.gbapal");
const u32 gRegionMapCityZoomText_Gfx[] = INCBIN_U32("graphics/pokenav/region_map/city_zoom_text.4bpp.lz");

const u16 gPokenavConditionCancel_Pal[] = INCBIN_U16("graphics/pokenav/condition/cancel.gbapal");
const u8 gPokenavConditionCancel_Gfx[] = INCBIN_U8("graphics/pokenav/condition/cancel.4bpp");

const u16 gMonMarkingsMenu_Pal[] = INCBIN_U16("graphics/interface/mon_markings_menu.gbapal");
const u8 gMonMarkingsMenu_Gfx[] = INCBIN_U8("graphics/interface/mon_markings_menu.4bpp");

const u16 gBerryBlenderMiscPalette[] = INCBIN_U16("graphics/berry_blender/misc.gbapal");
const u16 gBerryBlenderArrowPalette[] = INCBIN_U16("graphics/berry_blender/arrow.gbapal");
const u8 gBerryBlenderBetaArrow_Gfx[] = INCBIN_U8("graphics/berry_blender/arrow_old.4bpp"); //unused
const u8 gBerryBlenderScoreSymbols_Gfx[] = INCBIN_U8("graphics/berry_blender/score_symbols.4bpp");
const u8 gBerryBlenderParticles_Gfx[] = INCBIN_U8("graphics/berry_blender/particles.4bpp");
static const u8 sEmpty0[0x120] = {0};
const u8 gBerryBlenderCountdownNumbers_Gfx[] = INCBIN_U8("graphics/berry_blender/countdown_numbers.4bpp");
const u8 gBerryBlenderStart_Gfx[] = INCBIN_U8("graphics/berry_blender/start.4bpp");
static const u8 sEmpty1[0x200] = {0};
const u8 gBerryBlenderPlayerArrow_Gfx[] = INCBIN_U8("graphics/berry_blender/arrow.4bpp");
static const u8 sEmpty2[0x2C0] = {0};

const u16 gEasyChatRectangleCursor_Pal[] = INCBIN_U16("graphics/easy_chat/rectangle_cursor.gbapal");
const u32 gEasyChatRectangleCursor_Gfx[] = INCBIN_U32("graphics/easy_chat/rectangle_cursor.4bpp.lz");

const u16 gEasyChatButtonWindow_Pal[] = INCBIN_U16("graphics/easy_chat/button_window.gbapal");
const u32 gEasyChatButtonWindow_Gfx[] = INCBIN_U32("graphics/easy_chat/button_window.4bpp.lz");

const u32 gEasyChatMode_Gfx[] = INCBIN_U32("graphics/easy_chat/mode.4bpp.lz");
const u16 gEasyChatMode_Pal[] = INCBIN_U16("graphics/easy_chat/mode.gbapal");

const u32 gEasyChatWindow_Gfx[] = INCBIN_U32("graphics/easy_chat/window.4bpp.lz"); // uses mode pal
const u32 gEasyChatWindow_Tilemap[] = INCBIN_U32("graphics/easy_chat/window.bin.lz");

const u16 gWallClockMale_Pal[]      = INCBIN_U16("graphics/wallclock/male.gbapal");
const u16 gWallClockFemale_Pal[]    = INCBIN_U16("graphics/wallclock/female.gbapal");
const u32 gWallClock_Gfx[]          = INCBIN_U32("graphics/wallclock/clock.4bpp.lz");
const u32 gWallClockStart_Tilemap[] = INCBIN_U32("graphics/wallclock/clock_start.bin.lz");
const u32 gWallClockView_Tilemap[]  = INCBIN_U32("graphics/wallclock/clock_view.bin.lz");

const u16 gUsePokeblockCondition_Pal[] = INCBIN_U16("graphics/pokeblock/use_screen/condition.gbapal");
const u32 gUsePokeblockCondition_Gfx[] = INCBIN_U32("graphics/pokeblock/use_screen/condition.4bpp.lz");

const u16 gUsePokeblockUpDown_Pal[] = INCBIN_U16("graphics/pokeblock/use_screen/updown.gbapal");
const u8 gUsePokeblockUpDown_Gfx[] = INCBIN_U8("graphics/pokeblock/use_screen/updown.4bpp");

const u16 gUsePokeblockGraph_Pal[] = INCBIN_U16("graphics/pokeblock/use_screen/graph.gbapal");
const u32 gUsePokeblockGraph_Gfx[] = INCBIN_U32("graphics/pokeblock/use_screen/graph.4bpp.lz");

const u32 gUsePokeblockGraph_Tilemap[] = INCBIN_U32("graphics/pokeblock/use_screen/graph.bin.lz");
const u16 gUsePokeblockNatureWin_Pal[] = INCBIN_U16("graphics/pokeblock/use_screen/nature.gbapal");

#include "data/graphics/slot_machine.h"

// trainer card

const u16 gHoennTrainerCardGreen_Pal[] = INCBIN_U16("graphics/trainer_card/green.gbapal");
const u32 gHoennTrainerCard_Gfx[] = INCBIN_U32("graphics/trainer_card/tiles.4bpp.lz");
const u32 gHoennTrainerCardBg_Tilemap[] = INCBIN_U32("graphics/trainer_card/bg.bin.lz");
const u32 gHoennTrainerCardFront_Tilemap[] = INCBIN_U32("graphics/trainer_card/front.bin.lz");
const u32 gHoennTrainerCardBack_Tilemap[] = INCBIN_U32("graphics/trainer_card/back.bin.lz");
const u32 gHoennTrainerCardFrontLink_Tilemap[] = INCBIN_U32("graphics/trainer_card/front_link.bin.lz");

const u16 gKantoTrainerCardBlue_Pal[] = INCBIN_U16("graphics/trainer_card/frlg/blue.gbapal");
const u32 gKantoTrainerCard_Gfx[] = INCBIN_U32("graphics/trainer_card/frlg/tiles.4bpp.lz");
const u32 gKantoTrainerCardBg_Tilemap[] = INCBIN_U32("graphics/trainer_card/frlg/bg.bin.lz");
const u32 gKantoTrainerCardFront_Tilemap[] = INCBIN_U32("graphics/trainer_card/frlg/front.bin.lz");
const u32 gKantoTrainerCardBack_Tilemap[] = INCBIN_U32("graphics/trainer_card/frlg/back.bin.lz");
const u32 gKantoTrainerCardFrontLink_Tilemap[] = INCBIN_U32("graphics/trainer_card/frlg/front_link.bin.lz");

// Pokémon storage system

const u32 gStorageSystemMenu_Gfx[] = INCBIN_U32("graphics/pokemon_storage/menu.4bpp.lz");
const u16 gStorageSystemPartyMenu_Pal[] = INCBIN_U16("graphics/pokemon_storage/party_menu.gbapal");
const u32 gStorageSystemPartyMenu_Tilemap[] = INCBIN_U32("graphics/pokemon_storage/party_menu.bin.lz");

// naming screen

const u16 gNamingScreenMenu_Pal[6][16] =
{
    INCBIN_U16("graphics/naming_screen/menu.gbapal"),
    INCBIN_U16("graphics/naming_screen/page_swap_upper.gbapal"),
    INCBIN_U16("graphics/naming_screen/page_swap_lower.gbapal"),
    INCBIN_U16("graphics/naming_screen/page_swap_others.gbapal"),
    INCBIN_U16("graphics/naming_screen/buttons.gbapal"),
    INCBIN_U16("graphics/naming_screen/cursor.gbapal"),
};
const u32 gNamingScreenMenu_Gfx[]                = INCBIN_U32("graphics/naming_screen/menu.4bpp.lz");
const u32 gNamingScreenPageSwapFrame_Gfx[]       = INCBIN_U32("graphics/naming_screen/page_swap_frame.4bpp");
const u32 gNamingScreenBackButton_Gfx[]          = INCBIN_U32("graphics/naming_screen/back_button.4bpp");
const u32 gNamingScreenOKButton_Gfx[]            = INCBIN_U32("graphics/naming_screen/ok_button.4bpp");
const u32 gNamingScreenPageSwapUpper_Gfx[]       = INCBIN_U32("graphics/naming_screen/page_swap_upper.4bpp");
const u32 gNamingScreenPageSwapLower_Gfx[]       = INCBIN_U32("graphics/naming_screen/page_swap_lower.4bpp");
const u32 gNamingScreenPageSwapOthers_Gfx[]      = INCBIN_U32("graphics/naming_screen/page_swap_others.4bpp");
const u32 gNamingScreenCursor_Gfx[]              = INCBIN_U32("graphics/naming_screen/cursor.4bpp");
const u32 gNamingScreenCursorSquished_Gfx[]      = INCBIN_U32("graphics/naming_screen/cursor_squished.4bpp");
const u32 gNamingScreenCursorFilled_Gfx[]        = INCBIN_U32("graphics/naming_screen/cursor_filled.4bpp");
const u32 gNamingScreenPageSwapButton_Gfx[]      = INCBIN_U32("graphics/naming_screen/page_swap_button.4bpp");
const u32 gNamingScreenInputArrow_Gfx[]          = INCBIN_U32("graphics/naming_screen/input_arrow.4bpp");
const u32 gNamingScreenUnderscore_Gfx[]          = INCBIN_U32("graphics/naming_screen/underscore.4bpp");
const u32 gNamingScreenBackground_Tilemap[]      = INCBIN_U32("graphics/naming_screen/background.bin.lz");
const u32 gNamingScreenKeyboardUpper_Tilemap[]   = INCBIN_U32("graphics/naming_screen/keyboard_upper.bin.lz");
const u32 gNamingScreenKeyboardLower_Tilemap[]   = INCBIN_U32("graphics/naming_screen/keyboard_lower.bin.lz");
const u32 gNamingScreenKeyboardSymbols_Tilemap[] = INCBIN_U32("graphics/naming_screen/keyboard_symbols.bin.lz");

// union room chat
const u16 gUnionRoomChat_Background_Pal[] = INCBIN_U16("graphics/union_room_chat/background.gbapal");
const u32 gUnionRoomChat_Background_Gfx[] = INCBIN_U32("graphics/union_room_chat/background.4bpp.lz");
const u32 gUnionRoomChat_Background_Tilemap[] = INCBIN_U32("graphics/union_room_chat/background.bin.lz");
const u16 gUnionRoomChat_InputText_Pal[] = INCBIN_U16("graphics/union_room_chat/input_text.gbapal");
const u16 gUnionRoomChat_Keyboard_Pal[] = INCBIN_U16("graphics/union_room_chat/keyboard.gbapal");
const u32 gUnionRoomChat_Keyboard_Gfx[] = INCBIN_U32("graphics/union_room_chat/keyboard.4bpp.lz");
const u32 gUnionRoomChat_Keyboard_Tilemap[] = INCBIN_U32("graphics/union_room_chat/keyboard.bin.lz");
const u32 gUnionRoomChat_RButtonLabels[] = INCBIN_U32("graphics/union_room_chat/r_button_labels.4bpp.lz");

const u16 ALIGNED(4) gTilesetPalettes_General[][16] =
{
    INCBIN_U16("data/tilesets/primary/general/palettes/00.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/01.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/02.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/03.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/04.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/05.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/06.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/07.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/08.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/09.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/10.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/11.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/12.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/13.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/14.gbapal"),
    INCBIN_U16("data/tilesets/primary/general/palettes/15.gbapal"),
};

const u32 gTilesetTiles_General[] = INCBIN_U32("data/tilesets/primary/general/tiles.4bpp.lz");

// trade/egg hatch

const u16 gTradeGba_Pal[] = INCBIN_U16("graphics/trade/gba.gbapal");
const u16 gTradeGba2_Pal[] = INCBIN_U16("graphics/trade/gba_pal2.gbapal");
const u8 gTradeGba_Gfx[] = INCBIN_U8("graphics/trade/gba.4bpp");

static const u16 sEmptyPal[16] = {0};

#include "data/graphics/berry_fix.h"

// Trade
const u16 gTradeMenu_Pal[] = INCBIN_U16("graphics/trade/menu.gbapal");
const u16 gTradeCursor_Pal[] = INCBIN_U16("graphics/trade/cursor.gbapal");
const u8 gTradeMenu_Gfx[] = INCBIN_U8("graphics/trade/menu.4bpp");
const u8 gTradeCursor_Gfx[] = INCBIN_U8("graphics/trade/cursor.4bpp");
const u16 gTradeUnused_Tilemap[] = INCBIN_U16("graphics/trade/unused.bin");
const u16 gTradeMenu_Tilemap[] = INCBIN_U16("graphics/trade/menu.bin");
const u16 gTradeMenuMonBox_Tilemap[] = INCBIN_U16("graphics/trade/menu_mon_box.bin");

const u16 gMessageBox_Pal[] = INCBIN_U16("graphics/text_window/message_box.gbapal");
const u8 gMessageBox_Gfx[] = INCBIN_U8("graphics/text_window/message_box.4bpp");
const u8 gSignpostWindow_Gfx[] = INCBIN_U8("graphics/text_window/signpost.4bpp");

const u32 gWallpaperIcon_Cross[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/icons/cross.4bpp.lz");
const u32 gWallpaperIcon_Bolt[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/icons/bolt.4bpp.lz");
const u32 gWallpaperIcon_Plusle[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/icons/plusle.4bpp.lz");

const u16 gWallpaperPalettes_Horizontal[][16] =
{
    INCBIN_U16("graphics/pokemon_storage/wallpapers/friends_frame2.gbapal"),
    INCBIN_U16("graphics/pokemon_storage/wallpapers/horizontal/bg.gbapal"),
};

const u32 gWallpaperTiles_Horizontal[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/horizontal/tiles.4bpp.lz");
const u32 gWallpaperTilemap_Horizontal[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/horizontal/tilemap.bin.lz");

const u16 gWallpaperPalettes_Ribbon[][16] =
{
    INCBIN_U16("graphics/pokemon_storage/wallpapers/ribbon/frame.gbapal"),
    INCBIN_U16("graphics/pokemon_storage/wallpapers/ribbon/bg.gbapal"),
};

const u32 gWallpaperTiles_Ribbon[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/ribbon/tiles.4bpp.lz");
const u32 gWallpaperTilemap_Ribbon[] = INCBIN_U32("graphics/pokemon_storage/wallpapers/ribbon/tilemap.bin.lz");

const u16 gPokenavRibbonsSummaryBg_Pal[] = INCBIN_U16("graphics/pokenav/ribbons/summary_bg.gbapal");
const u32 gPokenavRibbonsSummaryBg_Gfx[] = INCBIN_U32("graphics/pokenav/ribbons/summary_bg.4bpp.lz");
const u32 gPokenavRibbonsSummaryBg_Tilemap[] = INCBIN_U32("graphics/pokenav/ribbons/summary_bg.bin.lz");

const u16 gMonIconPalettes[][16] =
{
    INCBIN_U16("graphics/pokemon/icon_palettes/pal0.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/pal1.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/pal2.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/pal3.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/pal4.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/pal5.gbapal"),
};

const u16 gTitleScreenBgPalettes[]         = INCBIN_U16("graphics/title_screen/pokemon_logo.gbapal",
                                                        "graphics/title_screen/wingsofchaos_bg_tiles.gbapal");
const u16 gTitleScreenEmeraldVersionPal[]  = INCBIN_U16("graphics/title_screen/wingsofchaos_version.gbapal");
const u32 gTitleScreenCloudsTilemap[]      = INCBIN_U32("graphics/title_screen/clouds.bin.lz");
const u32 gTitleScreenPokemonLogoGfx[]     = INCBIN_U32("graphics/title_screen/pokemon_logo.8bpp.lz");
const u32 gTitleScreenEmeraldVersionGfx[]  = INCBIN_U32("graphics/title_screen/wingsofchaos_version.8bpp.lz");
const u16 gTitleScreenPressStartPal[]      = INCBIN_U16("graphics/title_screen/press_start_islandgame.gbapal");
const u32 gTitleScreenPressStartGfx[]      = INCBIN_U32("graphics/title_screen/press_start_islandgame.4bpp.lz");
const u32 gTitleScreenPokemonLogoTilemap[] = INCBIN_U32("graphics/title_screen/pokemon_logo.bin.lz");

const u16 gFrontierPassBg_Pal[]                          = INCBIN_U16("graphics/frontier_pass/bg.gbapal"); // 8 x 16
const u32 gFrontierPassBg_Gfx[]                          = INCBIN_U32("graphics/frontier_pass/bg.4bpp.lz");
const u32 gFrontierPassMapAndCard_Gfx[]                  = INCBIN_U32("graphics/frontier_pass/map_and_card.8bpp.lz");
const u32 gFrontierPassBg_Tilemap[]                      = INCBIN_U32("graphics/frontier_pass/bg.bin.lz");
const u16 gFrontierPassCancelButton_Tilemap[]            = INCBIN_U16("graphics/frontier_pass/cancel.bin");
const u16 gFrontierPassCancelButtonHighlighted_Tilemap[] = INCBIN_U16("graphics/frontier_pass/cancel_highlighted.bin");

// Berry Crush
const u16 gBerryCrush_Crusher_Pal[] = INCBIN_U16("graphics/berry_crush/crusher.gbapal");
const u32 gBerryCrush_Crusher_Gfx[] = INCBIN_U32("graphics/berry_crush/crusher.4bpp.lz");
const u32 gBerryCrush_TextWindows_Tilemap[] = INCBIN_U32("graphics/berry_crush/text_windows.bin.lz");

// random garbage at the end.
static const u8 sEmpty3[0x54BAC] = {0};
static const u8 sUnused1[]       = {0x0D, 0x00, 0x58, 0x02};
static const u8 sEmpty4[0x1145]  = {0};
static const u8 sUnused2[]       = {0x02};
static const u8 sEmpty5[0x3242]  = {0};
static const u8 sUnused3[]       = {0x40};
static const u8 sEmpty6[0x13]    = {0};

// frlg_tm_case_port
const u32 gUnknown_8E845D8[] = INCBIN_U32("graphics/tm_case/unk_8E845D8.4bpp.lz");
const u32 gUnknown_8E84A24[] = INCBIN_U32("graphics/tm_case/unk_8E84A24.bin.lz");
const u32 gUnknown_8E84B70[] = INCBIN_U32("graphics/tm_case/unk_8E84B70.bin.lz");
const u32 gUnknown_8E84CB0[] = INCBIN_U32("graphics/tm_case/unk_8E84CB0.gbapal.lz");
const u32 gUnknown_8E84D20[] = INCBIN_U32("graphics/tm_case/unk_8E84D20.gbapal.lz");
const u32 gTMCase_TMSpriteGfx[] = INCBIN_U32("graphics/tm_case/unk_8E84D90.4bpp.lz");
const u32 gUnknown_8E84F20[] = INCBIN_U32("graphics/tm_case/unk_8E84F20.gbapal.lz");
const u32 gUnknown_8E85068[] = INCBIN_U32("graphics/tm_case/unk_8E85068.gbapal.lz");
const u8 gUnknown_8E99118[] = INCBIN_U8("graphics/tm_case/unk_8E99118.4bpp");
const u16 gTMCaseMainWindowPalette[] = INCBIN_U16("graphics/tm_case/unk_841F408.gbapal");

const u32 gBattleIcons_Gfx1[] = INCBIN_U32("graphics/types/battle_icons1.4bpp.lz");
const u32 gBattleIcons_Gfx2[] = INCBIN_U32("graphics/types/battle_icons2.4bpp.lz");
const u16 gBattleIcons_Pal1[] = INCBIN_U16("graphics/types/battle_icons1.gbapal");
const u16 gBattleIcons_Pal2[] = INCBIN_U16("graphics/types/battle_icons2.gbapal");

