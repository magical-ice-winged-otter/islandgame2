POKEMONGFXDIR := graphics/pokemon
OBJEVENTGFXDIR := graphics/object_events/pics
FLDEFFGFXDIR := graphics/field_effects/pics
MISCGFXDIR := graphics/misc

# island-game trainers
$(OBJEVENTGFXDIR)/people/little_boy_camper.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/people/boy_4.4bpp: graphics/object_events/pics/people/boy_4.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/boy_5.4bpp: graphics/object_events/pics/people/boy_5.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/girl_4.4bpp: graphics/object_events/pics/people/girl_4.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ground_swimmer_f.4bpp: graphics/object_events/pics/people/ground_swimmer_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ground_swimmer_m.4bpp: graphics/object_events/pics/people/ground_swimmer_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_6.4bpp: graphics/object_events/pics/people/man_6.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/police.4bpp: graphics/object_events/pics/people/police.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/psychic_f.4bpp: graphics/object_events/pics/people/psychic_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ranger_f.4bpp: graphics/object_events/pics/people/ranger_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ranger_m.4bpp: graphics/object_events/pics/people/ranger_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/roughneck.4bpp: graphics/object_events/pics/people/roughneck.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ruin_maniac.4bpp: graphics/object_events/pics/people/ruin_maniac.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/scientist_3.4bpp: graphics/object_events/pics/people/scientist_3.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/tuber_f_swimming.4bpp: graphics/object_events/pics/people/tuber_f_swimming.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/worker.4bpp: graphics/object_events/pics/people/worker.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ruka.4bpp: graphics/object_events/pics/people/ruka.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/walking.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/running.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/field_move.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/surfing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/mach_bike.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/fishing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/oliver/walking.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/oliver/running.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/oliver/field_move.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/oliver/mach_bike.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/oliver/fishing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/oliver/watering.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/olivia/watering.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/melissa.4bpp: graphics/object_events/pics/people/melissa.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ace_trainer_f.4bpp: graphics/object_events/pics/people/ace_trainer_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ace_trainer_m.4bpp: graphics/object_events/pics/people/ace_trainer_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/jonas.4bpp: graphics/object_events/pics/people/jonas.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/palm.4bpp: graphics/object_events/pics/people/palm.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/arthur.4bpp: graphics/object_events/pics/people/arthur.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/coco.4bpp: graphics/object_events/pics/people/coco.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/primrose.4bpp: graphics/object_events/pics/people/primrose.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/edea.4bpp: graphics/object_events/pics/people/edea.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/beauty_masters.4bpp: graphics/object_events/pics/people/beauty_masters.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/cowgirl.4bpp: graphics/object_events/pics/people/cowgirl.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/girl_5.4bpp: graphics/object_events/pics/people/girl_5.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/girl_6.4bpp: graphics/object_events/pics/people/girl_6.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/girl_7.4bpp: graphics/object_events/pics/people/girl_7.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/juggler.4bpp: graphics/object_events/pics/people/juggler.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_7.4bpp: graphics/object_events/pics/people/man_7.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/biker.4bpp: graphics/object_events/pics/people/biker.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/channeler.4bpp: graphics/object_events/pics/people/channeler.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/nerd.4bpp: graphics/object_events/pics/people/nerd.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/rancher.4bpp: graphics/object_events/pics/people/rancher.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/school_kid_m_2.4bpp: graphics/object_events/pics/people/channeler.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/scout_m.4bpp: graphics/object_events/pics/people/scout_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/scout_f.4bpp: graphics/object_events/pics/people/scout_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/silverwing_m.4bpp: graphics/object_events/pics/people/silverwing_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/silverwing_f.4bpp: graphics/object_events/pics/people/silverwing_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_6.4bpp: graphics/object_events/pics/people/woman_6.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_7.4bpp: graphics/object_events/pics/people/woman_7.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_8.4bpp: graphics/object_events/pics/people/woman_8.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/school_kid_f.4bpp: graphics/object_events/pics/people/school_kid_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/maryan/shiny_azurill.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4
	
$(OBJEVENTGFXDIR)/people/bug_catcher_f.4bpp: graphics/object_events/pics/people/bug_catcher_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/officer_m.4bpp: graphics/object_events/pics/people/officer_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/officer_f.4bpp: graphics/object_events/pics/people/officer_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/xtra_ace_trainer_m.4bpp: graphics/object_events/pics/people/xtra_ace_trainer_m.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/xtra_ace_trainer_f.4bpp: graphics/object_events/pics/people/xtra_ace_trainer_f.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/xtra_ace_trainer_snow.4bpp: graphics/object_events/pics/people/xtra_ace_trainer_snow.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ninja_boy2.4bpp: graphics/object_events/pics/people/ninja_boy2.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/little_girl2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/people/beauty2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/breeder_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/breeder_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/dragon_tamer.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/gamer.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/bird_keeper.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/poke_maniac.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/martial_artist.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/woman_9.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/pokekid.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2
	
$(OBJEVENTGFXDIR)/people/cue_ball.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/veteran.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4
	
$(OBJEVENTGFXDIR)/people/biker2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4
# end

# island-game overworld pokemon
$(POKEMONGFXDIR)/maryan_purrloin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_liepard/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_feebas/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_milotic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4
	
$(POKEMONGFXDIR)/maryan_vespiquen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_nincada/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_ninjask/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_shedinja/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_golett/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_golurk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4
	
$(POKEMONGFXDIR)/maryan_shellos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maryan_gastrodon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4
# end









$(OBJEVENTGFXDIR)/people/brendan/walking.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/running.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/field_move.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/surfing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/mach_bike.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/acro_bike.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/fishing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/watering.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/brendan/underwater.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4


$(OBJEVENTGFXDIR)/people/elite_four/drake.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/elite_four/glacia.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/elite_four/phoebe.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/elite_four/sidney.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/frontier_brains/anabel.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/frontier_brains/brandon.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/frontier_brains/greta.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/frontier_brains/lucy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/frontier_brains/noland.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/frontier_brains/spenser.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/frontier_brains/tucker.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/gym_leaders/brawly.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/flannery.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/juan.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/liza.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/norman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/roxanne.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/tate.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/wattson.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gym_leaders/winona.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/may/walking.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/may/running.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/may/field_move.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/may/surfing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/may/mach_bike.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/may/acro_bike.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/may/fishing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/may/watering.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/may/underwater.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4


$(OBJEVENTGFXDIR)/people/ruby_sapphire_brendan/walking.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ruby_sapphire_brendan/running.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/ruby_sapphire_may/walking.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ruby_sapphire_may/running.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/team_aqua/aqua_member_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/team_aqua/aqua_member_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/team_aqua/archie.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/team_magma/magma_member_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/team_magma/magma_member_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/team_magma/maxie.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/people/artist.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/beauty.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/black_belt.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/boy_1.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/boy_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/boy_3.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/rich_boy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gameboy_kid.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/bug_catcher.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/cameraman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/camper.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/contest_judge.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/cook.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/cycling_triathlete_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/cycling_triathlete_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/fat_man.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/fisherman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/gentleman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/girl_1.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/girl_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/girl_3.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/hex_maniac.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/hiker.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/hot_springs_old_woman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/lass.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/leaf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/ninja_boy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/people/little_boy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/twin.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/little_girl.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_1.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/pokefan_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_3.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_4.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/man_5.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/devon_employee.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/maniac.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/mart_employee.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/mauville_old_man_1.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/mauville_old_man_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/mom.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/mystery_event_deliveryman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/nurse.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/expert_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/old_man.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/expert_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/old_woman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/picnicker.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/prof_birch.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/psychic_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/quinty_plump.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/people/red.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/reporter_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/reporter_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/rooftop_sale_woman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/rs_little_boy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/people/running_triathlete_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/running_triathlete_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/sailor.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/school_kid_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/scientist_1.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/scientist_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/scott.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/steven.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/swimmer_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/swimmer_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/teala.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/tuber_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/tuber_m.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/tuber_m_swimming.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/union_room_attendant.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/unused_woman.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/wallace.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/wally.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_1.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/pokefan_f.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_3.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_4.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/link_receptionist.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/woman_5.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/people/youngster.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4



$(OBJEVENTGFXDIR)/pokemon_old/azumarill.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/pokemon_old/azurill.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/pokemon_old/deoxys.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/dusclops.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/enemy_zigzagoon.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/groudon.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/ho_oh.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/kecleon.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/pokemon_old/kirlia.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/kyogre.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/latias_latios.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/lugia.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/mew.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/pikachu.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/pokemon_old/poochyena.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/rayquaza_cutscene.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(OBJEVENTGFXDIR)/pokemon_old/skitty.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/pokemon_old/sudowoodo_tree.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/vigoroth_mover.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon_old/wingull.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/pokemon_old/zigzagoon.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/misc/ball_poke.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/aguav.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/aspear.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/cheri.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/chesto.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/cornn.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/durin.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/figy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/grepa.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/hondew.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/iapapa.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/kelpsy.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/lansat.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/leppa.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/liechi.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/lum.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/mago.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/nomel.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/oran.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/pamtre.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/pecha.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/persim.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/pomeg.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/rabuta.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/rawst.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/razz.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/sitrus.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/spelon.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/sprout.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/berry_trees/tamato.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/wepear.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/wiki.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/occa.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/yache.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/chople.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/kebia.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/shuca.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/payapa.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/tanga.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/kasib.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/haban.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/colbur.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/roseli.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/custap.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/jaboca.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/rowap.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/berry_trees/micle.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4


$(OBJEVENTGFXDIR)/misc/breakable_rock.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/misc/cuttable_tree.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(OBJEVENTGFXDIR)/misc/mr_brineys_boat.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4



$(FLDEFFGFXDIR)/arrow.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/ash.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/sparkle.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/jump_big_splash.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/jump_small_splash.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 1

$(FLDEFFGFXDIR)/jump_tall_grass.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 1

$(FLDEFFGFXDIR)/bike_tire_tracks.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2


$(FLDEFFGFXDIR)/slither_tracks.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/bug_tracks.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/spot_tracks.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/bubbles.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(FLDEFFGFXDIR)/deep_sand_footprints.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/ground_impact_dust.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 1

$(FLDEFFGFXDIR)/ash_puff.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/long_grass.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/mountain_disguise.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(FLDEFFGFXDIR)/ripple.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/sand_disguise_placeholder.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(FLDEFFGFXDIR)/sand_footprints.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/short_grass.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/surf_blob.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(FLDEFFGFXDIR)/tall_grass.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/tree_disguise.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(FLDEFFGFXDIR)/jump_long_grass.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/unknown_17.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/unused_grass_2.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/unused_sand.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/water_surfacing.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/sand_pile.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 1

$(FLDEFFGFXDIR)/ash_launch.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/small_sparkle.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/unused_grass_3.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/secret_power_cave.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/secret_power_shrub.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/secret_power_tree.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

$(FLDEFFGFXDIR)/record_mix_lights.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 1

$(POKEMONGFXDIR)/question_mark/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bulbasaur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ivysaur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/venusaur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/venusaur/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/venusaur/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charmander/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charmeleon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charizard/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charizard/mega_x/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charizard/mega_y/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/squirtle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wartortle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blastoise/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blastoise/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/caterpie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/metapod/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/butterfree/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/butterfree/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/weedle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kakuna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beedrill/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beedrill/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pidgey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pidgeotto/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pidgeot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pidgeot/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rattata/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rattata/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raticate/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raticate/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spearow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fearow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ekans/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arbok/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pikachu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pikachu/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raichu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raichu/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandshrew/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandslash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nidoran_f/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nidorina/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nidoqueen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nidoran_m/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nidorino/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nidoking/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clefairy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clefable/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vulpix/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ninetales/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jigglypuff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wigglytuff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zubat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zubat/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golbat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golbat/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oddish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gloom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gloom/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vileplume/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vileplume/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/paras/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/parasect/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/venonat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/venomoth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/diglett/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dugtrio/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meowth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/persian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/psyduck/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golduck/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mankey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/primeape/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/growlithe/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arcanine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/poliwag/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/poliwhirl/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/poliwrath/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/abra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kadabra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kadabra/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/alakazam/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/alakazam/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/alakazam/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/machop/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/machoke/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/machamp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bellsprout/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/weepinbell/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/victreebel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tentacool/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tentacruel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/geodude/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/graveler/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ponyta/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rapidash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowpoke/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowbro/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowbro/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magnemite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magneton/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/farfetchd/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/doduo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/doduo/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dodrio/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dodrio/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dewgong/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grimer/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/muk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shellder/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cloyster/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gastly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/haunter/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gengar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gengar/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/onix/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drowzee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hypno/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hypno/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/krabby/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kingler/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/voltorb/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/electrode/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/exeggcute/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/exeggutor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cubone/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/marowak/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hitmonlee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hitmonchan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lickitung/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/koffing/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/weezing/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rhyhorn/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rhyhorn/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rhydon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rhydon/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chansey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tangela/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kangaskhan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kangaskhan/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/horsea/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seadra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/goldeen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/goldeen/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seaking/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seaking/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/staryu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/starmie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mr_mime/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scyther/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scyther/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jynx/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/electabuzz/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magmar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pinsir/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pinsir/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tauros/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magikarp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magikarp/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gyarados/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gyarados/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gyarados/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lapras/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ditto/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eevee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eevee/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vaporeon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jolteon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flareon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/porygon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/omanyte/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/omastar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kabuto/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kabutops/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aerodactyl/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aerodactyl/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/snorlax/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/articuno/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zapdos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/moltres/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dratini/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dragonair/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dragonite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mewtwo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mewtwo/mega_x/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mewtwo/mega_y/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mew/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chikorita/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bayleef/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meganium/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meganium/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cyndaquil/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quilava/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/typhlosion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/totodile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/croconaw/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/feraligatr/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sentret/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furret/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hoothoot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/noctowl/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ledyba/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ledyba/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ledian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ledian/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spinarak/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ariados/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/crobat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chinchou/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lanturn/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pichu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cleffa/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/igglybuff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/togepi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/togetic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/natu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/xatu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/xatu/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mareep/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flaaffy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ampharos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ampharos/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bellossom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/marill/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/azumarill/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sudowoodo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sudowoodo/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/politoed/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/politoed/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hoppip/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skiploom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jumpluff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aipom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aipom/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sunkern/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sunflora/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/yanma/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wooper/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wooper/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quagsire/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quagsire/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/espeon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/umbreon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/murkrow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/murkrow/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowking/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/misdreavus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/b/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/c/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/d/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/e/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/f/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/g/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/h/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/i/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/j/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/k/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/l/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/m/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/n/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/o/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/p/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/q/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/r/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/s/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/t/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/u/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/v/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/w/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/x/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/y/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/z/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/exclamation/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unown/question/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wobbuffet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wobbuffet/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/girafarig/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/girafarig/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pineco/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/forretress/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dunsparce/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gligar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gligar/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/steelix/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/steelix/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/steelix/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/snubbull/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/granbull/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/qwilfish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scizor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scizor/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scizor/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shuckle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/heracross/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/heracross/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/heracross/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sneasel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sneasel/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/teddiursa/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ursaring/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ursaring/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slugma/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magcargo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swinub/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/piloswine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/piloswine/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/corsola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/remoraid/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/octillery/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/octillery/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/delibird/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mantine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skarmory/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/houndour/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/houndoom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/houndoom/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/houndoom/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kingdra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/phanpy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/donphan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/donphan/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/porygon2/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stantler/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/smeargle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tyrogue/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hitmontop/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/smoochum/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/elekid/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magby/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/miltank/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blissey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raikou/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/entei/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/suicune/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/larvitar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pupitar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tyranitar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tyranitar/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lugia/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/ho_oh/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/celebi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/treecko/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grovyle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sceptile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sceptile/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/torchic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/torchic/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/combusken/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/combusken/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blaziken/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blaziken/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blaziken/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mudkip/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/marshtomp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swampert/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swampert/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/poochyena/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mightyena/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zigzagoon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/linoone/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wurmple/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/silcoon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beautifly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beautifly/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cascoon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dustox/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dustox/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lotad/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lombre/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ludicolo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ludicolo/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seedot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nuzleaf/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nuzleaf/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shiftry/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shiftry/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/taillow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swellow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wingull/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pelipper/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ralts/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kirlia/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gardevoir/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gardevoir/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/surskit/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/masquerain/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shroomish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/breloom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slakoth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vigoroth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slaking/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nincada/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ninjask/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shedinja/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/whismur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/loudred/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/exploud/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/makuhita/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hariyama/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/azurill/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nosepass/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skitty/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/delcatty/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sableye/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sableye/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mawile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mawile/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aron/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lairon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aggron/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aggron/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meditite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meditite/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/medicham/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/medicham/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/medicham/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/electrike/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/manectric/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/manectric/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/plusle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/minun/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/volbeat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/illumise/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/roselia/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/roselia/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gulpin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gulpin/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swalot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swalot/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/carvanha/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sharpedo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sharpedo/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wailmer/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wailord/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/numel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/numel/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/camerupt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/camerupt/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/camerupt/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/torkoal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spoink/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grumpig/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spinda/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/trapinch/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vibrava/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flygon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cacnea/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cacturne/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cacturne/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swablu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/altaria/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/altaria/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zangoose/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seviper/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lunatone/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/solrock/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/barboach/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/whiscash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/corphish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/crawdaunt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/baltoy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/claydol/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lileep/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cradily/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/anorith/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/armaldo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/feebas/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/milotic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/milotic/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/castform/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/castform/sunny/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/castform/rainy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/castform/snowy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kecleon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shuppet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/banette/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/banette/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/duskull/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dusclops/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tropius/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chimecho/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/absol/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/absol/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wynaut/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/snorunt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glalie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glalie/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spheal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sealeo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/walrein/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clamperl/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/huntail/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gorebyss/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/relicanth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/relicanth/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/luvdisc/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bagon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shelgon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/salamence/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/salamence/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beldum/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/metang/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/metagross/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/metagross/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/regirock/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/regice/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/registeel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/latias/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/latias/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/latios/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/latios/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/kyogre/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/kyogre/primal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/groudon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/groudon/primal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/rayquaza/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/rayquaza/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/jirachi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deoxys/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/turtwig/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grotle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/torterra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chimchar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/monferno/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/infernape/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/piplup/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/prinplup/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/empoleon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/starly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/starly/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/staravia/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/staravia/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/staraptor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/staraptor/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bidoof/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bidoof/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bibarel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bibarel/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kricketot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kricketot/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kricketune/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kricketune/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shinx/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shinx/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/luxio/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/luxio/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/luxray/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/luxray/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/budew/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/roserade/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/roserade/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cranidos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rampardos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shieldon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bastiodon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/burmy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wormadam/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mothim/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/combee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/combee/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vespiquen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pachirisu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pachirisu/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/buizel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/buizel/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floatzel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floatzel/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cherubi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cherrim/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shellos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gastrodon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ambipom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ambipom/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drifloon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drifblim/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/buneary/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lopunny/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lopunny/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mismagius/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/honchkrow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glameow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/purugly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chingling/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stunky/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skuntank/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bronzor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bronzong/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bonsly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mime_jr/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/happiny/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chatot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spiritomb/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gible/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gible/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gabite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gabite/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/garchomp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/garchomp/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/garchomp/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/munchlax/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/riolu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lucario/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lucario/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hippopotas/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hippopotas/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hippowdon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hippowdon/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skorupi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drapion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/croagunk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/croagunk/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toxicroak/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toxicroak/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/carnivine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/finneon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/finneon/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lumineon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lumineon/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mantyke/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/snover/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/snover/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/abomasnow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/abomasnow/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/abomasnow/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/weavile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/weavile/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magnezone/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lickilicky/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rhyperior/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rhyperior/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tangrowth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tangrowth/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/electivire/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magmortar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/togekiss/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/yanmega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/leafeon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glaceon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gliscor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mamoswine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mamoswine/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/porygon_z/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gallade/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gallade/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/probopass/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dusknoir/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/froslass/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rotom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/uxie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mesprit/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/azelf/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dialga/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/palkia/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/heatran/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/regigigas/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/giratina/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/cresselia/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/phione/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/manaphy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/darkrai/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shaymin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arceus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/victini/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/snivy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/servine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/serperior/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tepig/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pignite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/emboar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oshawott/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dewott/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/samurott/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/patrat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/watchog/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lillipup/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/herdier/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stoutland/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/purrloin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/liepard/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pansage/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/simisage/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pansear/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/simisear/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/panpour/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/simipour/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/munna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/musharna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pidove/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tranquill/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unfezant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/unfezant/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blitzle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zebstrika/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/roggenrola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/boldore/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gigalith/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/woobat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swoobat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drilbur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/excadrill/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/audino/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/audino/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/timburr/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gurdurr/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/conkeldurr/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tympole/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/palpitoad/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/seismitoad/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/throh/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sawk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sewaddle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swadloon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/leavanny/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/venipede/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/whirlipede/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scolipede/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cottonee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/whimsicott/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/petilil/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lilligant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/basculin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/krokorok/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/krookodile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/darumaka/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/darmanitan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maractus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dwebble/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/crustle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scraggy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scrafty/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sigilyph/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/yamask/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cofagrigus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tirtouga/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/carracosta/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/archen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/archeops/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/trubbish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/garbodor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zorua/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zoroark/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/minccino/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cinccino/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gothita/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gothorita/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gothitelle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/solosis/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/duosion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/reuniclus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ducklett/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swanna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vanillite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vanillish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vanilluxe/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deerling/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sawsbuck/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/emolga/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/karrablast/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/escavalier/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/foongus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/amoonguss/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/frillish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/frillish/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jellicent/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jellicent/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/alomomola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/joltik/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/galvantula/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ferroseed/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ferrothorn/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/klink/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/klang/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/klinklang/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tynamo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eelektrik/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eelektross/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/elgyem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beheeyem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/litwick/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lampent/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chandelure/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/axew/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fraxure/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/haxorus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cubchoo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/beartic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cryogonal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shelmet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/accelgor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stunfisk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mienfoo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mienshao/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/druddigon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golett/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golurk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pawniard/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bisharp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bouffalant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rufflet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/braviary/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vullaby/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mandibuzz/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/heatmor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/durant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deino/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zweilous/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hydreigon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/larvesta/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/volcarona/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cobalion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/terrakion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/virizion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tornadus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/thundurus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/reshiram/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/zekrom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/landorus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kyurem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/keldeo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meloetta/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/genesect/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chespin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quilladin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chesnaught/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fennekin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/braixen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/delphox/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/froakie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/frogadier/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/greninja/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bunnelby/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/diggersby/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fletchling/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fletchinder/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/talonflame/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scatterbug/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spewpa/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/litleo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pyroar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pyroar/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flabebe/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floette/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/florges/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skiddo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gogoat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pancham/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pangoro/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/espurr/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meowstic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meowstic/f/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/honedge/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/doublade/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aegislash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spritzee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aromatisse/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/swirlix/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slurpuff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/inkay/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/malamar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/binacle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/barbaracle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skrelp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dragalge/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clauncher/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clawitzer/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/helioptile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/heliolisk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tyrunt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tyrantrum/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/amaura/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/aurorus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sylveon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hawlucha/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dedenne/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/carbink/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/goomy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sliggoo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/goodra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/klefki/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/phantump/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/trevenant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pumpkaboo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gourgeist/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bergmite/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/avalugg/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/noibat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/noivern/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/xerneas/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/xerneas/active/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/yveltal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/zygarde/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/diancie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/diancie/mega/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hoopa/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/volcanion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rowlet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dartrix/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/decidueye/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/litten/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/torracat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/incineroar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/popplio/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/brionne/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/primarina/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pikipek/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/trumbeak/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toucannon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/yungoos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gumshoos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grubbin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charjabug/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vikavolt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/crabrawler/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/crabominable/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oricorio/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cutiefly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ribombee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rockruff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lycanroc/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lycanroc/dusk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lycanroc/midnight/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wishiwashi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mareanie/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toxapex/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mudbray/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mudsdale/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dewpider/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/araquanid/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fomantis/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lurantis/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/morelull/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shiinotic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/salandit/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/salazzle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stufful/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bewear/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bounsweet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/steenee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tsareena/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/comfey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oranguru/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/passimian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wimpod/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golisopod/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandygast/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/palossand/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pyukumuku/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/type_null/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/silvally/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/minior/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/komala/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/turtonator/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/togedemaru/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mimikyu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bruxish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drampa/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dhelmise/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/jangmo_o/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hakamo_o/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kommo_o/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tapu_koko/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tapu_lele/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tapu_bulu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tapu_fini/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cosmog/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cosmoem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/solgaleo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lunala/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nihilego/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/buzzwole/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pheromosa/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/xurkitree/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/celesteela/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kartana/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/guzzlord/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/necrozma/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/necrozma/dawn_wings/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/necrozma/dusk_mane/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/necrozma/ultra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magearna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/marshadow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/poipole/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/naganadel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stakataka/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blacephalon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zeraora/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meltan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/melmetal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grookey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/thwackey/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rillaboom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scorbunny/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raboot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cinderace/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sobble/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drizzile/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/inteleon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skwovet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/greedent/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rookidee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/corvisquire/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/corviknight/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/blipbug/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dottler/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/orbeetle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nickit/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/thievul/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gossifleur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eldegoss/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wooloo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dubwool/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chewtle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drednaw/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/yamper/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/boltund/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rolycoly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/carkol/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/coalossal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/applin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flapple/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/appletun/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/silicobra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandaconda/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cramorant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arrokuda/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/barraskewda/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toxel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toxtricity/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toxtricity/low_key/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sizzlipede/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/centiskorch/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clobbopus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grapploct/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sinistea/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/polteageist/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hatenna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hattrem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hatterene/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/impidimp/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/morgrem/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grimmsnarl/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/obstagoon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/perrserker/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cursola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sirfetchd/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mr_rime/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/runerigus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/milcery/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/alcremie/strawberry/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/falinks/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pincurchin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/snom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/frosmoth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stonjourner/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eiscue/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/indeedee/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/indeedee/f/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/morpeko/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cufant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/copperajah/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dracozolt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arctozolt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dracovish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arctovish/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/duraludon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dreepy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/drakloak/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dragapult/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zacian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zacian/crowned_sword/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zamazenta/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zamazenta/crowned_shield/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/eternatus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kubfu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/urshifu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zarude/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/regieleki/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/regidrago/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glastrier/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spectrier/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/calyrex/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/calyrex/shadow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/calyrex/ice/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zapdos/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meowth/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ponyta/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rapidash/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowpoke/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowbro/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/farfetchd/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/weezing/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mr_mime/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/articuno/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/moltres/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slowking/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/corsola/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zigzagoon/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/linoone/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/darumaka/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/darmanitan/galar_standard/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/yamask/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/stunfisk/galar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/growlithe/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arcanine/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/voltorb/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/electrode/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/braviary/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/qwilfish/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sneasel/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sneasel/hisui/overworldf.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zorua/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zoroark/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/samurott/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lilligant/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sliggoo/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/goodra/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/avalugg/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/decidueye/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/typhlosion/hisui/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dialga/origin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/palkia/origin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/wyrdeer/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kleavor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/basculin/white_striped/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/basculegion/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/basculegion/f/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ursaluna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sneasler/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/overqwil/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/enamorus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/enamorus/therian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/pichu/spiky_eared/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deoxys/attack/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deoxys/defense/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deoxys/speed/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/burmy/sandy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/burmy/trash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wormadam/sandy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wormadam/trash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shellos/east/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gastrodon/east/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rotom/heat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rotom/wash/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rotom/frost/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rotom/fan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rotom/mow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/giratina/origin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/fighting/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/flying/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/poison/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/ground/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/rock/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/bug/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/ghost/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/steel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/fire/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/water/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/grass/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/electric/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/psychic/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/ice/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/dragon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/dark/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/arceus/fairy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/basculin/blue_striped/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deerling/autumn/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deerling/summer/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/deerling/winter/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sawsbuck/autumn/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sawsbuck/summer/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sawsbuck/winter/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meloetta/pirouette/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/polar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/tundra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/continental/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/garden/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/elegant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/modern/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/marine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/archipelago/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/high_plains/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/sandstorm/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/river/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/monsoon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/savanna/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/sun/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/ocean/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/jungle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/fancy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/poke_ball/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vivillon/meadow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flabebe/yellow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flabebe/blue/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flabebe/orange/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flabebe/white/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floette/yellow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floette/blue/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floette/orange/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floette/white/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floette/eternal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/florges/yellow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/florges/blue/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/florges/orange/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/florges/white/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/heart/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/star/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/diamond/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/debutante/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/matron/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/dandy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/la_reine/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/kabuki/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/furfrou/pharaoh/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hoopa/unbound/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/rattata/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raticate/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raichu/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandshrew/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandslash/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/vulpix/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ninetales/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/diglett/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dugtrio/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meowth/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/persian/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/geodude/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/graveler/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/golem/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grimer/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/muk/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/exeggutor/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/marowak/alola/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wooper/paldea/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/clodsire/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sprigatito/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/floragato/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/meowscarada/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fuecoco/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/crocalor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/skeledirge/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quaxly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quaxwell/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/quaquaval/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lechonk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oinkologne/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oinkologne/f/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tarountula/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/spidops/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nymble/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/lokix/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pawmi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pawmo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pawmot/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tandemaus/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maushold/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maushold/four/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fidough/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dachsbun/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/smoliv/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dolliv/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arboliva/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/squawkabilly/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/squawkabilly/blue/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/squawkabilly/white/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/squawkabilly/yellow/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/nacli/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/naclstack/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/garganacl/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/charcadet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/armarouge/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ceruledge/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tadbulb/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bellibolt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wattrel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kilowattrel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/maschiff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/mabosstiff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shroodle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/grafaiai/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bramblin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/brambleghast/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toedscool/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/toedscruel/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/klawf/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/capsakid/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scovillain/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rellor/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/rabsca/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flittle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/espathra/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tinkatink/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tinkatuff/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tinkaton/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wiglett/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wugtrio/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/bombirdier/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/finizen/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/palafin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/palafin/hero/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/varoom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/revavroom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cyclizar/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/orthworm/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glimmet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/glimmora/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/greavard/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/houndstone/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flamigo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cetoddle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/cetitan/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kingambit/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/veluza/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dondozo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/tatsugiri/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tatsugiri/droopy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tatsugiri/stretchy/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/annihilape/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/farigiraf/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dudunsparce/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dudunsparce/three_segment/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/great_tusk/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/scream_tail/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/brute_bonnet/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/slither_wing/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/flutter_mane/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sandy_shocks/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_treads/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_bundle/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_hands/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_jugulis/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_moth/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_thorns/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/frigibax/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/arctibax/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/baxcalibur/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gimmighoul/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gholdengo/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/wo_chien/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chien_pao/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ting_lu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/chi_yu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/roaring_moon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_valiant/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/koraidon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/miraidon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/iron_leaves/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/walking_wake/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/dipplin/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/poltchageist/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/sinistcha/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/okidogi/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/munkidori/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/fezandipiti/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ogerpon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ogerpon/cornerstone/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ogerpon/hearthflame/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ogerpon/wellspring/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/hydrapple/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/archaludon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gouging_fire/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/raging_bolt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/iron_boulder/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/iron_crown/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/terapagos/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/terapagos/terastal/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pecharunt/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tauros/paldea_aqua/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tauros/paldea_blaze/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tauros/paldea_combat/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/ursaluna/bloodmoon/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/shaymin/sky/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oricorio/pom_pom/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oricorio/pau/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/oricorio/sensu/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zygarde/10_percent/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/zygarde/complete/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/magearna/original_color/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kyurem/white/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/kyurem/black/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/tornadus/therian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/thundurus/therian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 8 -mheight 8

$(POKEMONGFXDIR)/landorus/therian/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pumpkaboo/small/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pumpkaboo/large/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/pumpkaboo/super/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gourgeist/small/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gourgeist/large/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(POKEMONGFXDIR)/gourgeist/super/overworld.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(MISCGFXDIR)/emotes.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 2

# All pokeballs are 16x32
$(OBJEVENTGFXDIR)/misc/ball_%.4bpp: $(OBJEVENTGFXDIR)/misc/ball_%.png ; $(GFX) $< $@ -mwidth 2 -mheight 4

graphics/door_anims/battle_tower_multi_corridor.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 2 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/001.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/002.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/003.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/004.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/005.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/006.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/007.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/008.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/009.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/010.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/011.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/012.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/013.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/014.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/015.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/016.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/017.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/018.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/019.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/020.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/021.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/022.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/023.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/024.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/025.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/026.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/027.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/028.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/029.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/030.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/031.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/032.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/033.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/034.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/035.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/036.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/037.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/038.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/039.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/040.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/041.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/042.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/043.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/044.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/045.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/046.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/047.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/048.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/049.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/050.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/051.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/052.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/053.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/054.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/055.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/056.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/057.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/058.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/059.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/060.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/061.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/062.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/063.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/064.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/065.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/066.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/067.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/068.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/069.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/070.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/071.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/072.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/073.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/074.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/075.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/076.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/077.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/078.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/079.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/080.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/081.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/082.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/083.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/084.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/085.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/086.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/087.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/088.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/089.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/090.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/091.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/092.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/093.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/094.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/095.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/096.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/097.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/098.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/099.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/100.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/101.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/102.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/103.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/104.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/105.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/106.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/107.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/108.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/109.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/110.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/111.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/112.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/113.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/114.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/115.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/116.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/117.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/118.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/119.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/120.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/121.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/122.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/123.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/124.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/125.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/126.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/127.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/128.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/129.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/130.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/131.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/132.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/133.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/134.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/135.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/136.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/137.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/138.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/139.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/140.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/141.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/142.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/143.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/144.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/145.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/146.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/147.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/148.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/149.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/150.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/151.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/152.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/153.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/154.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/155.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/156.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/157.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/158.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/159.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/160.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/161.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/162.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/163.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/164.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/165.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/166.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/167.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/168.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/169.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/170.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/171.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/172.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/173.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/174.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/175.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/176.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/177.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/178.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/179.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/180.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/181.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/182.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/183.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/184.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/185.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/186.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/187.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/188.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/189.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/190.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/191.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/192.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/193.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/194.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/195.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/196.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/197.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/198.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/199.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/200.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/201.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/202.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/203.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/204.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/205.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/206.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/207.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/208.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/209.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/210.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/211.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/212.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/213.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/214.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/215.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/216.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/217.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/218.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/219.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/220.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/221.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/222.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/223.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/224.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/225.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/226.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/227.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/228.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/229.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/230.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/231.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/232.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/233.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/234.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/235.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/236.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/237.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/238.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/239.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/240.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/241.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/242.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/243.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/244.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/245.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/246.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/247.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/248.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/249.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/250.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/251.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/252.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/253.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/254.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/255.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/256.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/257.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/258.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/259.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/260.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/261.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/262.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/263.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/264.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/265.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/266.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/267.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/268.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/269.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/270.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/271.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/272.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/273.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/274.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/275.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/276.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/277.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/278.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/279.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/280.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/281.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/282.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/283.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/284.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/285.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/286.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/287.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/288.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/289.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/290.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/291.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/292.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/293.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/294.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/295.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/296.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/297.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/298.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/299.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/300.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/301.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/302.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/303.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/304.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/305.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/306.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/307.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/308.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/309.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/310.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/311.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/312.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/313.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/314.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/315.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/316.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/317.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/318.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/319.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/320.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/321.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/322.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/323.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/324.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/325.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/326.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/327.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/328.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/329.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/330.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/331.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/332.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/333.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/334.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/335.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/336.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/337.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/338.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/339.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/340.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/341.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/342.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/343.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/344.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/345.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/346.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/347.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/348.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/349.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/350.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/351.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/352.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/353.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/354.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/355.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/356.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/357.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/358.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/359.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/360.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/361.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/362.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/363.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/364.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/365.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/366.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/367.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/368.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/369.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/370.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/371.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/372.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/373.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/374.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/375.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/376.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/377.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/378.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/379.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/380.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/381.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/382.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/383.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/384.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/385.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/386.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/387.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/388.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/389.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/390.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/391.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/392.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/393.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/394.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/395.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/396.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/397.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/398.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/399.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/400.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/401.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/402.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/403.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/404.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/405.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/406.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/407.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/408.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/409.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/410.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/411.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/412.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/413.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/414.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/415.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/416.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/417.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/418.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/419.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/420.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/421.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/422.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/423.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/424.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/425.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/426.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/427.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/428.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/429.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/430.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/431.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/432.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/433.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/434.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/435.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/436.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/437.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/438.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/439.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/440.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/441.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/442.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/443.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/444.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/445.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/446.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/447.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/448.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/449.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/450.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/451.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/452.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/453.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/454.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/455.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/456.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/457.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/458.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/459.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/460.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/461.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/462.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/463.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/464.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/465.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/466.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/467.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/468.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/469.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/470.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/471.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/472.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/473.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/474.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/475.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/476.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/477.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/478.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/479.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/480.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/481.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/482.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/483.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/484.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/485.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/486.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/487.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/488.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/489.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/490.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/491.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/492.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/493.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/494.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/495.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/496.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/497.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/498.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/499.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/500.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/501.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/502.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/503.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/504.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/505.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/506.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/507.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/508.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/509.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/510.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/511.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/512.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/513.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/514.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/515.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/516.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/517.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/518.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/519.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/520.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/521.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/522.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/523.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/524.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/525.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/526.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/527.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/528.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/529.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/530.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/531.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/532.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/533.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/534.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/535.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/536.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/537.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/538.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/539.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/540.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/541.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/542.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/543.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/544.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/545.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/546.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/547.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/548.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/549.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/550.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/551.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/552.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/553.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/554.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/555.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/556.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/557.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/558.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/559.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/560.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/561.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/562.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/563.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/564.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/565.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/566.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/567.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/568.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/569.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/570.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/571.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/572.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/573.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/574.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/575.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/576.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/577.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/578.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/579.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/580.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/581.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/582.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/583.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/584.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/585.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/586.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/587.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/588.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/589.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/590.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/591.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/592.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/593.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/594.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/595.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/596.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/597.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/598.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/599.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/600.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/601.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/602.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/603.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/604.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/605.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/606.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/607.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/608.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/609.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/610.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/611.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/612.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/613.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/614.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/615.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/616.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/617.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/618.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/619.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/620.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/621.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/622.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/623.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/624.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/625.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/626.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/627.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/628.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/629.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/630.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/631.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/632.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/633.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/634.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/635.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/636.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/637.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/638.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/639.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/640.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/641.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/642.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/643.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/644.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/645.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/646.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/647.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/648.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/649.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/650.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/651.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/652.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/653.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/654.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/655.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/656.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/657.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/658.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/659.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/660.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/661.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/662.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/663.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/664.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/665.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/666.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/667.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/668.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/669.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/670.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/671.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/672.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/673.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/674.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/675.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/676.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/677.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/678.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/679.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/680.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/681.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/682.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/683.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/684.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/685.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/686.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/687.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/688.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/689.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/690.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/691.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/692.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/693.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/694.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/695.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/696.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/697.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/698.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/699.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/700.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/701.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/702.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/703.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/704.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/705.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/706.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/707.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/708.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/709.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/710.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/711.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/712.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/713.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/714.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/715.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/716.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/717.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/718.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/719.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/720.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/721.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/722.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/723.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/724.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/725.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/726.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/727.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/728.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/729.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/730.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/731.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/732.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/733.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/734.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/735.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/736.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/737.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/738.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/739.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/740.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/741.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/742.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/743.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/744.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/745.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/746.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/747.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/748.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/749.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/750.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/751.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/752.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/753.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/754.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/755.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/756.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/757.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/758.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/759.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/760.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/761.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/762.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/763.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/764.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/765.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/766.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/767.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/768.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/769.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/770.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/771.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/772.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/773.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/774.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/775.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/776.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/777.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/778.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/779.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/780.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/781.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/782.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/783.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/784.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/785.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/786.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/787.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/788.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/789.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/790.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/791.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/792.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/793.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/794.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/795.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/796.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/797.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/798.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/799.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/800.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/801.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/802.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/803.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/804.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/805.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/806.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/807.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/808.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/809.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/849.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/858.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/859.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/860.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/861.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/862.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/863.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/864.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/865.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/866.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/869.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/870.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/871.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/872.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/873.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/874.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/875.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/876.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/877.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/878.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/879.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/880.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/881.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/882.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/883.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/884.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/885.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/887.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/896.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/897.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/898.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/899.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/900.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/901.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/902.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/903.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

$(OBJEVENTGFXDIR)/pokemon/species/904.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth 4 -mheight 4

