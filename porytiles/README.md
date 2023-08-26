# How to use porytiles
#TODO: integrate into the Makefile etc

# General Compile
```bash
./porytiles/compile.sh
```

#### To compile primary tileset, do:
```bash
./tools/porytiles/porytiles compile-primary -o ./data/tilesets/primary/<your primary tilset> ./porytiles/<your custom tileset>/primary
```

#### To compile secondary tileset, do:
```bash
./tools/porytiles/porytiles compile-secondary -o ./data/tilesets/secondary/<your secondary> ./porytiles/<your custom secondary>/secondary ./porytiles/<your custom secondary>/primary
```

Example:
```bash
./tools/porytiles/porytiles compile-primary -o ./data/tilesets/primary/fire_red_general_test/ ./porytiles/firered_ss_anne/primary/
```
# To add a new tileset
1. Make a new folder in this folder, and make new folders titled `primary` and `secondary` in it.
2. Add your `top.png`, `middle.png`, `bottom.png` layers. `top` layers will display over the player, while `bottom` layers will display under the player.
3. Open porymap, and make a new primary/secondary tileset.
4. Go to `porytiles/CONFIGURATION` and add like as in the example.
5. If you want to tag attributes, make sure to create a attributes.csv file, and tag them. The number is the position in the metatile set (you can see this on porymap).
6. Make sure to also copy the `metatile_behaviors.h` in the folder.
7. `./compile.sh`

# For animations
- Add a anims folder, and inside that folder, add some identifier, and put in your frames.
- You must go to tileset_anims.{c,h} and add them in. View the files for details.
- The numbers mean the tileset position, you can go on porymap, look at the specific tiles (not metatiles, which show up on the left)
- When you add a "key" file in your anims/<tag>, make sure it's the same tile, it will reorganize the tileset in porymap to be in order.
- `...+ TILE_OFFSET_4BPP(1)), 4 * TILE_SIZE_4BPP);`, the 1 is the tile position, 4 is the number of tiles in a row starting from that tile position. View this in porymap to confirm
- Make sure you go to `data/tilesets/headers` and fill out the proper callback (this took me a long time to find).
