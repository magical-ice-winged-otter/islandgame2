# Adding new animations to a tileset

_Note: a tile is an 8x8 square of pixels that can be flipped
horizontally and vertically._

_Note: a metatile is a 16x16 square of tiles that is actually
rendered into the overworld. This is the building bock of
tilesets_

## Writing the code

The main file you need to edit is `src/tileset_anims.c`.
Note: the changes to make in this file differ for primary
vs. secondary tilesets! Make sure you look at the correct
one for reference.

You also need to visit `src/data/tilesets/headers.h` and
register the init callback for your tileset (which is
defined in `src/tileset_anims.c` and `include/tileset_anims.h`).

The most complicated part is the `QueueAnimTiles` function you write. 

The tile size is the number of tiles in a single animation frame.

The tile offset is the previous tile offset + previous tile size.

## Picking your key

`porytiles/MY_TILESET/anim/MY_ANIM/[00-XX].png`

`porytiles/MY_TILESET/anim/MY_ANIM/key.png`

Picking your key is the hardest step with the actual image files.

Each tile in the key must match the animated tile in the tileset metatile image.

Each tile in the key must be unique.

_Note: to be unique, we really just care about tiles. Color doesnt matter for uniqueness._

_Note: In other areas, color DOES matter. Each tile in the key must imply the correct
palette for porytiles. If the palette differs between the animation tiles and
the key tiles, stuff will break. TL;DR each tile in the key should contain 
enough colors to guess the palette._

_Note: debugging this is way easier with Porymap - just look at the compiled
tile view and check the first couple tiles in the tileset.

The key never actually gets rendered in the game - it is simply shown as
a preview in Porymap. The animation frames is the only thing the player
actually sees.
