## Day/Night system FAQ

### Q: How do I disable DNS?
A: Set `OW_ENABLE_DNS` to `FALSE` in `include/config/overworld.h`.

### Q: What map changes should be made for DNS?
A: By default, the only Hoenn map changes that need to be made are to edit the Lavaridge Town map to change the metatiles the two old ladies are on in the hot springs to be the normal hot spring water tile. This is to avoid a visual bug from when `OW_OBJECT_VANILLA_SHADOWS` is FALSE.

However, by default no maps have lighting effects of any kind. The rest of this tutorial is to aid in adding lighting effects.

If you intend to use vanilla maps and have not already edited them, revert commit [a5b079d833f18f66ebd53ac77f00227ae4a1f389](https://github.com/rh-hideout/pokeemerald-expansion/pull/6562/commits/a5b079d833f18f66ebd53ac77f00227ae4a1f389). This commit includes a lot of tileset, metatile, and palette changes to accommodate light-blending, and applies `OBJ_EVENT_GFX_LIGHT_SPRITE` where they make sense.

If you _have_ edited vanilla maps, the merge conflicts from reverting that commit will cause problems. If you are using vanilla maps, manually copy some of the tileset changes, `.pal`, and `.pla` files in your branch, and begin rebuilding your metatiles to have windows use the palettes that have a `.pla` for light blending the correct color slots. [Triple-layer metatiles](https://github.com/pret/pokeemerald/wiki/Triple-layer-metatiles) are highly recommended.

You will also want to add the lighting object events from that commit.

If you are not using Hoenn maps, the primary concern is that you do not use the exact same palette indices for colors you want to be darkened during night time and colors you want to light up. Err towards not light blending a color if you aren't sure how to avoid conflicts.

When writing map scripts, `fadescreenswapbuffers` should be preferred over `fadescreen`. This is to avoid odd behavior from the GBA's limitations in alpha blending.

### Q: How do I make lightbulbs glow?

![Rustboro before adding lamp object events](/docs/tutorials/img/dns/without_lamp.png)
![Rustboro after adding lamp object events](/docs/tutorials/img/dns/with_lamp.png)

A: Making lamps glow is not part of the tileset itself.  Instead, place certain object events on top of where you desire a glowing effect.

These object events should use `OBJ_EVENT_GFX_LIGHT_SPRITE` and then as their `trainer_sight_or_berry_tree_id` (called Sight Radius/Berry Tree ID in porymap), use `LIGHT_TYPE_BALL` for round lights (such as candles or gas lamps), `LIGHT_TYPE_PKMN_CENTER_SIGN` over a Pok&eacute;mon Center sign, or `LIGHT_TYPE_POKE_MART_SIGN` over a Pok&eacute;mart sign.

### Q: How do I mark certain colors in a palette as light-blended?
A: Create a `.pla` file in the same folder as the `.pal` with the same name. This can be done on any kind of palette; the commit to revert listed up above only applies it to tilesets, but you could easily do it for object events as well. Of note, there is a [commit reverted for being out of scope](https://github.com/rh-hideout/pokeemerald-expansion/pull/6562/commits/348f5967ac8d383c827b415e1040234a3f28626f) to make a follower Ampharos's tail glow.

In this file you can enter color indices [0,15]
on separate lines to mark those colors as being light-blended, i.e:

`06.pla:`
```
# A comment
0 # if color 0 is listed, uses it to blend with instead of the default!
1
9
10
```

During the day time, these color indices appear as normal, but will be blended with either yellow or the 0 index at night. These indices should only be used for things you expect to light up. If you are using [porytiles](https://github.com/grunt-lucas/porytiles/wiki), palette overrides and using slight alterations to a color will aid you in avoiding color conflicts where the wrong index is assigned.

![Rustboro gym after light-blending the windows](/docs/tutorials/img/dns/window_lights.png)

The windows appear as normal during the day time (blue) and light up in the night. These use the default color.

### Q: How do I return to using regular shadows?
A: Set `OW_OBJECT_VANILLA_SHADOWS` to `TRUE` in `include/config/overworld.h`.

### Q: What graphical errors are likely to occur while using DNS?
A: If you have `OW_POPUP_GENERATION` set to `GEN_5` and `OW_POPUP_BW_ALPHA_BLEND` set to `TRUE`, you may have color errors during map popups. This is due to the GBA being severely limited in use of color blending and having both the overworld blended and the popup blended is difficult.

If you have `OW_OBJECT_VANILLA_SHADOWS` set to `TRUE`, this will also cause visual errors.

Any other graphical error should be reported.

### Q: How do I disable shadows for certain locations?
A: Shadows can be disabled for certain locations by modifying the `CurrentMapHasShadows` function in `src/overworld.c`.
