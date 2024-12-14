# Adding new battle backgrounds tutorial
## Setup
1. Download tilemap studio
2. Download Aseprite / Png Software

## How to: Image
1. Download/Make your battle background image. They have to be of size 256x112.
2. Read https://www.pokecommunity.com/threads/fully-editing-an-existing-battle-background.455366/ . The rest of steps can be used as reminder but the steps below will be summarization of the notes.
3. When converting the image from its default 256x112 to the 256x512 sheet, you want to strip the top 2 rows of tiles to put in the bottom.
4. Import the image into tilemap studio.
5. Color the corresponding your battle scene's palettes (select on the left) with palette index #2. Tip: you can hold right click + drag to extend your range of coloring. 
6. Save onto a `graphics/battle_terrain/<your new battle scene>` directory.

## How to: Palette + Animation
You need to save the palette as a standalone because we use 1 palette for both animations and the battle background.
The palette is 3x16, where the first 32 slots are reserved for the animations, and last 16 is reserved for the battle image itself (note: I may be wrong / this may be the opposite).
- Look at the generated `tiles.png` and get the palette, then on aseprite, make the palette manually.
- Put your anim tiles through tilemap studio, and you have to do the same coloring palette. (I don't remember which index, but it is not #2, it's probably #3).
- Get the `anim_tiles.png` and get the palette, then manually complete the palette that you have been making.
- Save your new palette as `graphics/battle_terrain/<your new battle scene>/palette.pal`

## Inserting
- See: https://github.com/magical-ice-winged-otter/islandgame2/commit/b9dec3b90615a680b20803d28c5cd0f985a144f9
- I made macros to make it easier to import.
- For convenience:
  - `src/battle_bg.c`: To slot them into the various battle terrain call defn / time of day
  - `‎src/data/graphics/battle_terrain.h`: Import the actual image data themselves
  - `include/graphics.h`: header extern bot
