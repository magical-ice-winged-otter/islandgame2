#ifndef GUARD_CONFIG_DEBUG_H
#define GUARD_CONFIG_DEBUG_H


#define DEBUG_OVERWORLD_MENU            (ISLANDGAME_DEBUG)    // Enables an overworld debug menu to change flags, variables, giving pokemon and more, accessed by holding R and pressing START while in the overworld by default.
#define DEBUG_OVERWORLD_HELD_KEYS       (R_BUTTON)            // The keys required to be held to open the debug menu.
#define DEBUG_OVERWORLD_TRIGGER_EVENT   pressedStartButton    // The event that opens the menu when holding the key(s) defined in DEBUG_OVERWORLD_HELD_KEYS.
#define DEBUG_OVERWORLD_IN_MENU         FALSE                 // Replaces the overworld debug menu button combination with a start menu entry (above Pokédex). It is FALSE for islandgame
#define DEBUG_BATTLE_MENU               (ISLANDGAME_DEBUG)    // If set to TRUE, enables a debug menu to use in battles by pressing the Select button.
#define DEBUG_AI_DELAY_TIMER            (ISLANDGAME_DEBUG)    // If set to TRUE, displays the number of frames it takes for the AI to choose a move. Replaces the "What will PKMN do" text. Useful for devs or anyone who modifies the AI code and wants to see if it doesn't take too long to run.
#define DEBUG_POKEMON_MENU              (ISLANDGAME_DEBUG)    // Enables a debug menu for pokemon sprites and icons, accessed by pressing SELECT in the summary screen.

// Pokémon Debug
#define DEBUG_POKEMON_SPRITE_VISUALIZER (ISLANDGAME_DEBUG)    // Enables a debug menu for Pokémon sprites and icons, accessed by pressing Select in the summary screen.

#endif // GUARD_CONFIG_DEBUG_H
