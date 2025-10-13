# 1 "data/maps/AncientTomb/scripts.pory"
AncientTomb_MapScripts::
# 2 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
# 3 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
# 4 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
# 5 "data/maps/AncientTomb/scripts.pory"
	.byte 0
# 6 "data/maps/AncientTomb/scripts.pory"

# 7 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnResume:
# 8 "data/maps/AncientTomb/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_EventScript_TryRemoveRegisteel
# 9 "data/maps/AncientTomb/scripts.pory"
	end
# 10 "data/maps/AncientTomb/scripts.pory"

# 11 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_TryRemoveRegisteel::
# 12 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AncientTomb/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/AncientTomb/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/AncientTomb/scripts.pory"
	return
# 16 "data/maps/AncientTomb/scripts.pory"

# 17 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnTransition:
# 18 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_LANDMARK_ANCIENT_TOMB
# 19 "data/maps/AncientTomb/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_EventScript_ShowRegisteel
# 20 "data/maps/AncientTomb/scripts.pory"
	end
# 21 "data/maps/AncientTomb/scripts.pory"

# 22 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_ShowRegisteel::
# 23 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_HIDE_REGISTEEL
# 24 "data/maps/AncientTomb/scripts.pory"
	return
# 25 "data/maps/AncientTomb/scripts.pory"

# 26 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnLoad:
# 27 "data/maps/AncientTomb/scripts.pory"
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_HideRegiEntrance
# 28 "data/maps/AncientTomb/scripts.pory"
	end
# 29 "data/maps/AncientTomb/scripts.pory"

# 30 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_HideRegiEntrance::
# 31 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 32 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 33 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 34 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 35 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 36 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 37 "data/maps/AncientTomb/scripts.pory"
	return
# 38 "data/maps/AncientTomb/scripts.pory"

# 39 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceMiddle::
# 40 "data/maps/AncientTomb/scripts.pory"
	lockall
# 41 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_BigHoleInWall
# 42 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 43 "data/maps/AncientTomb/scripts.pory"
	releaseall
# 44 "data/maps/AncientTomb/scripts.pory"
	end
# 45 "data/maps/AncientTomb/scripts.pory"

# 46 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_BigHoleInWall::
# 47 "data/maps/AncientTomb/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 48 "data/maps/AncientTomb/scripts.pory"
	releaseall
# 49 "data/maps/AncientTomb/scripts.pory"
	end
# 50 "data/maps/AncientTomb/scripts.pory"

# 51 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceSide::
# 52 "data/maps/AncientTomb/scripts.pory"
	lockall
# 53 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 54 "data/maps/AncientTomb/scripts.pory"
	releaseall
# 55 "data/maps/AncientTomb/scripts.pory"
	end
# 56 "data/maps/AncientTomb/scripts.pory"

# 57 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel::
# 58 "data/maps/AncientTomb/scripts.pory"
	lock
# 59 "data/maps/AncientTomb/scripts.pory"
	faceplayer
# 60 "data/maps/AncientTomb/scripts.pory"
	waitse
# 61 "data/maps/AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 62 "data/maps/AncientTomb/scripts.pory"
	delay 40
# 63 "data/maps/AncientTomb/scripts.pory"
	waitmoncry
# 64 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 40
# 65 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/AncientTomb/scripts.pory"
	special StartRegiBattle
# 67 "data/maps/AncientTomb/scripts.pory"
	waitstate
# 68 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedRegisteel
# 71 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromRegisteel
# 72 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromRegisteel
# 73 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 74 "data/maps/AncientTomb/scripts.pory"
	release
# 75 "data/maps/AncientTomb/scripts.pory"
	end
# 76 "data/maps/AncientTomb/scripts.pory"

# 77 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_DefeatedRegisteel::
# 78 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 79 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 80 "data/maps/AncientTomb/scripts.pory"
	end
# 81 "data/maps/AncientTomb/scripts.pory"

# 82 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_RanFromRegisteel::
# 83 "data/maps/AncientTomb/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 84 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 85 "data/maps/AncientTomb/scripts.pory"
	end

AncientTomb_EventScript_LegendaryBattle::
# 90 "data/maps/AncientTomb/scripts.pory"
	lock
# 91 "data/maps/AncientTomb/scripts.pory"
	faceplayer
# 94 "data/maps/AncientTomb/scripts.pory"
	checkflag FLAG_SAGE1_DONE
# 95 "data/maps/AncientTomb/scripts.pory"
	goto_if TRUE, alreadyUsed
# 97 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_LegendaryBattle_Text_0, MSGBOX_YESNO
# 101 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, NO
# 102 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, NO, declined
# 104 "data/maps/AncientTomb/scripts.pory"
	random 15
# 105 "data/maps/AncientTomb/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 107 "data/maps/AncientTomb/scripts.pory"
	switch VAR_TEMP_0
# 108 "data/maps/AncientTomb/scripts.pory"
	case 0, AncientTomb_EventScript_LegendaryBattle_3
# 109 "data/maps/AncientTomb/scripts.pory"
	case 1, AncientTomb_EventScript_LegendaryBattle_4
# 110 "data/maps/AncientTomb/scripts.pory"
	case 2, AncientTomb_EventScript_LegendaryBattle_5
# 111 "data/maps/AncientTomb/scripts.pory"
	case 3, AncientTomb_EventScript_LegendaryBattle_6
# 112 "data/maps/AncientTomb/scripts.pory"
	case 4, AncientTomb_EventScript_LegendaryBattle_7
# 113 "data/maps/AncientTomb/scripts.pory"
	case 5, AncientTomb_EventScript_LegendaryBattle_8
# 114 "data/maps/AncientTomb/scripts.pory"
	case 6, AncientTomb_EventScript_LegendaryBattle_9
# 115 "data/maps/AncientTomb/scripts.pory"
	case 7, AncientTomb_EventScript_LegendaryBattle_10
# 116 "data/maps/AncientTomb/scripts.pory"
	case 8, AncientTomb_EventScript_LegendaryBattle_11
# 117 "data/maps/AncientTomb/scripts.pory"
	case 9, AncientTomb_EventScript_LegendaryBattle_12
# 118 "data/maps/AncientTomb/scripts.pory"
	case 10, AncientTomb_EventScript_LegendaryBattle_13
# 119 "data/maps/AncientTomb/scripts.pory"
	case 11, AncientTomb_EventScript_LegendaryBattle_14
# 120 "data/maps/AncientTomb/scripts.pory"
	case 12, AncientTomb_EventScript_LegendaryBattle_15
# 121 "data/maps/AncientTomb/scripts.pory"
	case 13, AncientTomb_EventScript_LegendaryBattle_16
# 122 "data/maps/AncientTomb/scripts.pory"
	case 14, AncientTomb_EventScript_LegendaryBattle_17
# 123 "data/maps/AncientTomb/scripts.pory"
	case 15, AncientTomb_EventScript_LegendaryBattle_18
# 124 "data/maps/AncientTomb/scripts.pory"
	case 16, AncientTomb_EventScript_LegendaryBattle_19
# 125 "data/maps/AncientTomb/scripts.pory"
	case 17, AncientTomb_EventScript_LegendaryBattle_20
# 126 "data/maps/AncientTomb/scripts.pory"
	case 18, AncientTomb_EventScript_LegendaryBattle_21
# 127 "data/maps/AncientTomb/scripts.pory"
	case 19, AncientTomb_EventScript_LegendaryBattle_22
# 128 "data/maps/AncientTomb/scripts.pory"
	case 20, AncientTomb_EventScript_LegendaryBattle_23
AncientTomb_EventScript_LegendaryBattle_1:
# 131 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_LegendaryBattle_Text_1
# 132 "data/maps/AncientTomb/scripts.pory"
	closemessage
# 133 "data/maps/AncientTomb/scripts.pory"
	dowildbattle
# 136 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SAGE1_DONE
# 138 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_LegendaryBattle_Text_2
# 139 "data/maps/AncientTomb/scripts.pory"
	release
# 140 "data/maps/AncientTomb/scripts.pory"
	end
# 142 "data/maps/AncientTomb/scripts.pory"
declined:
# 143 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_LegendaryBattle_Text_3
# 144 "data/maps/AncientTomb/scripts.pory"
	release
# 145 "data/maps/AncientTomb/scripts.pory"
	end
# 147 "data/maps/AncientTomb/scripts.pory"
alreadyUsed:
# 148 "data/maps/AncientTomb/scripts.pory"
	msgbox AncientTomb_EventScript_LegendaryBattle_Text_4
# 150 "data/maps/AncientTomb/scripts.pory"
	release
	end

AncientTomb_EventScript_LegendaryBattle_3:
# 108 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_4:
# 109 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_5:
# 110 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_6:
# 111 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_ZAPDOS_GALAR, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_7:
# 112 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_MOLTRES_GALAR, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_8:
# 113 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_ENTEI, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_9:
# 114 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_10:
# 115 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_RAIKOU, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_11:
# 116 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_ARTICUNO_GALAR, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_12:
# 117 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_OKIDOGI, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_13:
# 118 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_MUNKIDORI, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_14:
# 119 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_FEZANDIPITI, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_15:
# 120 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_UXIE, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_16:
# 121 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_17:
# 122 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_AZELF, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_18:
# 123 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_COBALION, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_19:
# 124 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_TERRAKION, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_20:
# 125 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_VIRIZION, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_21:
# 126 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_IRON_CROWN, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_22:
# 127 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_IRON_LEAVES, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1

AncientTomb_EventScript_LegendaryBattle_23:
# 128 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_IRON_BOULDER, 58, ITEM_NONE
	goto AncientTomb_EventScript_LegendaryBattle_1


AncientTomb_EventScript_LegendaryBattle_Text_0:
# 97 "data/maps/AncientTomb/scripts.pory"
	.string "…I sense a hero before me.\p"
	.string "Shall I open the path to a mighty \n"
	.string "legendary Pokémon?\n"
	.string "This rite can only be performed once.$"

AncientTomb_EventScript_LegendaryBattle_Text_1:
# 131 "data/maps/AncientTomb/scripts.pory"
	.string "The veil parts… Brace yourself!$"

AncientTomb_EventScript_LegendaryBattle_Text_2:
# 138 "data/maps/AncientTomb/scripts.pory"
	.string "The path closes. Such meetings are rare and precious…$"

AncientTomb_EventScript_LegendaryBattle_Text_3:
# 143 "data/maps/AncientTomb/scripts.pory"
	.string "Very well. Return when your spirit is ready.$"

AncientTomb_EventScript_LegendaryBattle_Text_4:
# 148 "data/maps/AncientTomb/scripts.pory"
	.string "The rite is spent.\n"
	.string "Fate seldom grants second chances.$"
