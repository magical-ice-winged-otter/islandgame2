#ifndef GUARD_CONFIG_ITEM_H
#define GUARD_CONFIG_ITEM_H

// Item config
#define I_SHINY_CHARM_ADDITIONAL_ROLLS  2           // Amount of additional shiny rolls if the player has the Shiny Charm. Set it to 0 to disable Shiny Charm's effects.
#define I_KEY_FOSSILS                   GEN_LATEST  // In Gen4+, all Gen 3 fossils became regular items.
#define I_KEY_ESCAPE_ROPE               GEN_LATEST  // In Gen8, Escape Rope became a Key Item. Keep in mind, this will make it free to buy in marts.
#define I_HEALTH_RECOVERY               GEN_LATEST  // In Gen7+, certain healing items recover a different amount of HP than they used to.
#define I_SITRUS_BERRY_HEAL             GEN_LATEST  // In Gen4+, Sitrus Berry was changed from healing 30 HP to healing 25% of Max HP.
#define I_VITAMIN_EV_CAP                GEN_LATEST  // In Gen8+, the Vitamins no longer have a cap of 100 EV per stat.
#define I_BERRY_EV_JUMP                 GEN_LATEST  // In Gen4 only, EV-lowering Berries lower a stat's EV to 100 if it is above 100.
#define I_GRISEOUS_ORB_FORM_CHANGE      GEN_LATEST  // In Gen9+, the Griseous Orb no longer changes Giratina's form when held.
#define I_GEM_BOOST_POWER               GEN_LATEST  // In Gen6+, the Gem boost power was reduced from 50% to 30%.
#define I_USE_EVO_HELD_ITEMS_FROM_BAG   FALSE       // If TRUE, items such as Razor Claw or Electirizer will be usable from the bag to evolve a Pokémon just like in LA.
#define I_TYPE_BOOST_POWER              GEN_LATEST  // In Gen4+, all regular type boosting held items had their power increased from 10% to 20%. eg. Charcoal
#define I_SELL_VALUE_FRACTION           GEN_LATEST  // In Gen9+, items sell for 1/4 of their value instead of 1/2.
#define I_PRICE                         GEN_LATEST  // Some items have varied in value across generations.
#define I_BERRY_PRICE                   GEN_7       // Since Berries have become unplantable (Gen8+), their price has gone up.
#define I_POWER_ITEM_BOOST              GEN_LATEST  // In Gen7+, Power Items grant 8 EVs instead of 4 EVs.
#define I_PREMIER_BALL_BONUS            GEN_LATEST  // In LGPE onwards (Gen8+ here), you are given a Premier Ball for every 10 Poké Balls of any type and in the same purchase. Previously, it only applied to regular Poké Balls and only 1 could be obtained per purchase.
#define I_ROTOM_CATALOG_THUNDER_SHOCK   GEN_LATEST  // In Gen9+, reverting Rotom to its base form will teach it Thunder Shock even if it knows another move.
#define I_REPEL_INCLUDE_FAINTED         GEN_LATEST  // In Gen1 and Gen6+, Repels always use the level of the first member of the party to check which wild Pokémon to prevent encounters with, even if that member is fainted. In Gen2-5, it only uses the level of the first non-fainted Pokémon.

// TM config
#define I_REUSABLE_TMS          TRUE       // In Gen5-8, TMs are reusable. Setting this to TRUE will make all vanilla TMs reusable, though they can also be cherry-picked by setting their importance to 1.

// Exp. Share config
// To use this feature, replace the 0 with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define I_EXP_SHARE_FLAG        FLAG_EXP_SHARE   // If this flag is set, every Pokémon in the party will gain experience, regardless if they participated in the battle or not.
#define I_EXP_SHARE_ITEM        GEN_LATEST       // In Gen6+, the Exp. Share was changed from a held item to a Key item that toggles the effect described above.

// Repel/Lure config
// These two settings are both independent and complementary.
#define VAR_LAST_REPEL_LURE_USED    0       // If this var has been assigned, last Repel/Lure used will be saved and the player will get prompted with the vanilla repel YES/NO option, unless I_REPEL_LURE_MENU is set to TRUE.
#define I_REPEL_LURE_MENU           TRUE    // If TRUE, the player is able to choose which Repel/Lure to use once the previous one runs out. Cursor position is saved by VAR_LAST_REPEL_LURE_USED if not 0.

// Vs. Seeker
#define I_VS_SEEKER_CHARGING        0     // If this flag is assigned, the Vs Seeker functionality will be enabled. When the player has the Vs. Seeker, Match Call rematch functions will stop working.

// Fishing
#define I_FISHING_BITE_ODDS        GEN_LATEST // In Gen 1 and Gen 2, the Old Rod has a 100% chance for a bite, Good Rod has a 66% chance for a bite, and Super Rod has a 50% chance for a bite. In Gen 3, all rods have a base 50% chance for a bite. In Gen 4 onwards, the Old Rod has a base 25% chance for a bite, Good Rod has a 50% chance for a bite, and Super Rod has a 75% chance for a bite.
#define I_FISHING_MINIGAME         GEN_3      // Each generation uses a variation of reeling in Pokémon once they have been hooked. NOTE: Only the Gen 1/2 and Gen 3 minigames are implemented right now!
#define I_FISHING_STICKY_BOOST     GEN_LATEST // In Gen 3, a Pokemon with Suction Cups or Sticky Hold in the first slot of the party causes the chance for a bite to increase by about 35%. In Gen 4 onwards, it doubles the base bite chance.
#define I_FISHING_FOLLOWER_BOOST   FALSE      // In HGSS, fishing bite odds are increased depending on the friendship of the current following Pokémon.
#define I_FISHING_CHAIN            FALSE      // Introduced in XY, hooking the same Pokémon repeatedly will increase the odds of that mon being shiny. NOTE: This implementation is an approximation of the actual feature, as XY have not been throughoutly documented or datamined.
#define I_FISHING_PROXIMITY        FALSE      // Introduced in XY, fishing away from other people in enclosed areas will increase the chances of a Pokémon being hooked. NOTE: This implementation is an approximation of the actual feature, as XY have not been throughoutly documented or datamined.

#endif // GUARD_CONFIG_ITEM_H
