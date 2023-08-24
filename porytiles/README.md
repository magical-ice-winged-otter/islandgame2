# How to use porytiles
#TODO: integrate into the Makefile, make scripts, automate the process, etc
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

#To add a new tileset
1. Make a new folder in this folder, and make new folders titled `primary` and `secondary` in it.
2. Add your `top.png`, `middle.png`, `bottom.png` layers. `top` layers will display over the player, while `bottom` layers will display under the player.
3. Open porymap, and make a new primary/secondary tileset.
4. Run the commands above.
5. If you need to change your graphics, change the images, then run the commands again.

# For animations
- You must go to tileset_anims.{c,h} and add them in. View the files for details.