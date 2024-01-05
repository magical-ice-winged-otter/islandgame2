# Creating new door animations

The main file you need to edit will be `src/field_door.c`.

You also need to create a animation image in `graphics/door_anims/YOUR_DOOR_ANIM.png`.

It really helps to have porymap open, so you can reference what pallete is being used by the door.

You want to make sure the pallete of each door tile matches in `src/field_door.c`, and in the animation image.

If you're using aseprite, set the sprite type to INDEXED not RGB.

If the image uses multiple palettes, you will be annoyed. The input image will look weird, since 
you can only preview with one palette at a time. The best way I found to create multi-palette animations
is to create a new image for each palette, and merge them together in the end. It should look weird.

For an example of multi-palette door animations, looks at `islandgame_maplegrove_01` and `islandgame_maplegrove_02`.

