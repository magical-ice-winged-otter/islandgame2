EventScript_UseSurf::
    checkitem ITEM_ISLANDGAME_RAFT
    compare VAR_RESULT, FALSE
	goto_if_eq EventScript_EndUseSurf
	setfieldeffectargument 0, ITEM_ISLANDGAME_RAFT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
