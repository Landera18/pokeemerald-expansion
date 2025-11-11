# 1 "data/maps/DesertRuins/scripts.pory"
DesertRuins_MapScripts::
# 2 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
# 3 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
# 4 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
# 5 "data/maps/DesertRuins/scripts.pory"
	.byte 0
# 6 "data/maps/DesertRuins/scripts.pory"

# 7 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnResume:
# 8 "data/maps/DesertRuins/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_EventScript_TryRemoveRegirock
# 9 "data/maps/DesertRuins/scripts.pory"
	end
# 10 "data/maps/DesertRuins/scripts.pory"

# 11 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_TryRemoveRegirock::
# 12 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/DesertRuins/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/DesertRuins/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/DesertRuins/scripts.pory"
	return
# 16 "data/maps/DesertRuins/scripts.pory"

# 17 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnLoad:
# 18 "data/maps/DesertRuins/scripts.pory"
	call_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_HideRegiEntrance
# 19 "data/maps/DesertRuins/scripts.pory"
	end
# 20 "data/maps/DesertRuins/scripts.pory"

# 21 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_HideRegiEntrance::
# 22 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 23 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 24 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 25 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 26 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 27 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 28 "data/maps/DesertRuins/scripts.pory"
	return
# 29 "data/maps/DesertRuins/scripts.pory"

# 30 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnTransition:
# 31 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
# 32 "data/maps/DesertRuins/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_EventScript_ShowRegirock
# 33 "data/maps/DesertRuins/scripts.pory"
	end
# 34 "data/maps/DesertRuins/scripts.pory"

# 35 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_ShowRegirock::
# 36 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_HIDE_REGIROCK
# 37 "data/maps/DesertRuins/scripts.pory"
	return
# 38 "data/maps/DesertRuins/scripts.pory"

# 39 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_CaveEntranceMiddle::
# 40 "data/maps/DesertRuins/scripts.pory"
	lockall
# 41 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_BigHoleInWall
# 42 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 43 "data/maps/DesertRuins/scripts.pory"
	releaseall
# 44 "data/maps/DesertRuins/scripts.pory"
	end
# 45 "data/maps/DesertRuins/scripts.pory"

# 46 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_BigHoleInWall::
# 47 "data/maps/DesertRuins/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 48 "data/maps/DesertRuins/scripts.pory"
	releaseall
# 49 "data/maps/DesertRuins/scripts.pory"
	end
# 50 "data/maps/DesertRuins/scripts.pory"

# 51 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_CaveEntranceSide::
# 52 "data/maps/DesertRuins/scripts.pory"
	lockall
# 53 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 54 "data/maps/DesertRuins/scripts.pory"
	releaseall
# 55 "data/maps/DesertRuins/scripts.pory"
	end
# 56 "data/maps/DesertRuins/scripts.pory"

# 57 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock::
# 58 "data/maps/DesertRuins/scripts.pory"
	lock
# 59 "data/maps/DesertRuins/scripts.pory"
	faceplayer
# 60 "data/maps/DesertRuins/scripts.pory"
	waitse
# 61 "data/maps/DesertRuins/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 62 "data/maps/DesertRuins/scripts.pory"
	delay 40
# 63 "data/maps/DesertRuins/scripts.pory"
	waitmoncry
# 64 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 40
# 65 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/DesertRuins/scripts.pory"
	special StartRegiBattle
# 67 "data/maps/DesertRuins/scripts.pory"
	waitstate
# 68 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedRegirock
# 71 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromRegirock
# 72 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromRegirock
# 73 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 74 "data/maps/DesertRuins/scripts.pory"
	release
# 75 "data/maps/DesertRuins/scripts.pory"
	end
# 76 "data/maps/DesertRuins/scripts.pory"

# 77 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_DefeatedRegirock::
# 78 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 79 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 80 "data/maps/DesertRuins/scripts.pory"
	end
# 81 "data/maps/DesertRuins/scripts.pory"

# 82 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_RanFromRegirock::
# 83 "data/maps/DesertRuins/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIROCK
# 84 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 85 "data/maps/DesertRuins/scripts.pory"
	end

DesertRuins_EventScript_LegendaryBattle::
# 90 "data/maps/DesertRuins/scripts.pory"
	lock
# 91 "data/maps/DesertRuins/scripts.pory"
	faceplayer
# 94 "data/maps/DesertRuins/scripts.pory"
	checkflag FLAG_SAGE2_DONE
# 95 "data/maps/DesertRuins/scripts.pory"
	goto_if TRUE, alreadyUsed1
# 97 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_LegendaryBattle_Text_0, MSGBOX_YESNO
# 101 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, NO
# 102 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq VAR_RESULT, NO, declined1
# 104 "data/maps/DesertRuins/scripts.pory"
	random 30
# 105 "data/maps/DesertRuins/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 107 "data/maps/DesertRuins/scripts.pory"
	switch VAR_TEMP_0
# 108 "data/maps/DesertRuins/scripts.pory"
	case 0, DesertRuins_EventScript_LegendaryBattle_3
# 109 "data/maps/DesertRuins/scripts.pory"
	case 1, DesertRuins_EventScript_LegendaryBattle_4
# 110 "data/maps/DesertRuins/scripts.pory"
	case 2, DesertRuins_EventScript_LegendaryBattle_5
# 111 "data/maps/DesertRuins/scripts.pory"
	case 3, DesertRuins_EventScript_LegendaryBattle_6
# 112 "data/maps/DesertRuins/scripts.pory"
	case 4, DesertRuins_EventScript_LegendaryBattle_7
# 113 "data/maps/DesertRuins/scripts.pory"
	case 5, DesertRuins_EventScript_LegendaryBattle_8
# 114 "data/maps/DesertRuins/scripts.pory"
	case 6, DesertRuins_EventScript_LegendaryBattle_9
# 115 "data/maps/DesertRuins/scripts.pory"
	case 7, DesertRuins_EventScript_LegendaryBattle_10
# 116 "data/maps/DesertRuins/scripts.pory"
	case 8, DesertRuins_EventScript_LegendaryBattle_11
# 117 "data/maps/DesertRuins/scripts.pory"
	case 9, DesertRuins_EventScript_LegendaryBattle_12
# 118 "data/maps/DesertRuins/scripts.pory"
	case 10, DesertRuins_EventScript_LegendaryBattle_13
# 119 "data/maps/DesertRuins/scripts.pory"
	case 11, DesertRuins_EventScript_LegendaryBattle_14
# 120 "data/maps/DesertRuins/scripts.pory"
	case 12, DesertRuins_EventScript_LegendaryBattle_15
# 121 "data/maps/DesertRuins/scripts.pory"
	case 13, DesertRuins_EventScript_LegendaryBattle_16
# 122 "data/maps/DesertRuins/scripts.pory"
	case 14, DesertRuins_EventScript_LegendaryBattle_17
# 123 "data/maps/DesertRuins/scripts.pory"
	case 15, DesertRuins_EventScript_LegendaryBattle_18
# 124 "data/maps/DesertRuins/scripts.pory"
	case 16, DesertRuins_EventScript_LegendaryBattle_19
# 125 "data/maps/DesertRuins/scripts.pory"
	case 17, DesertRuins_EventScript_LegendaryBattle_20
# 126 "data/maps/DesertRuins/scripts.pory"
	case 18, DesertRuins_EventScript_LegendaryBattle_21
# 127 "data/maps/DesertRuins/scripts.pory"
	case 19, DesertRuins_EventScript_LegendaryBattle_22
# 128 "data/maps/DesertRuins/scripts.pory"
	case 20, DesertRuins_EventScript_LegendaryBattle_23
# 129 "data/maps/DesertRuins/scripts.pory"
	case 21, DesertRuins_EventScript_LegendaryBattle_24
# 130 "data/maps/DesertRuins/scripts.pory"
	case 22, DesertRuins_EventScript_LegendaryBattle_25
# 131 "data/maps/DesertRuins/scripts.pory"
	case 23, DesertRuins_EventScript_LegendaryBattle_26
# 132 "data/maps/DesertRuins/scripts.pory"
	case 24, DesertRuins_EventScript_LegendaryBattle_27
# 133 "data/maps/DesertRuins/scripts.pory"
	case 25, DesertRuins_EventScript_LegendaryBattle_28
# 134 "data/maps/DesertRuins/scripts.pory"
	case 26, DesertRuins_EventScript_LegendaryBattle_29
# 135 "data/maps/DesertRuins/scripts.pory"
	case 27, DesertRuins_EventScript_LegendaryBattle_30
# 136 "data/maps/DesertRuins/scripts.pory"
	case 28, DesertRuins_EventScript_LegendaryBattle_31
# 137 "data/maps/DesertRuins/scripts.pory"
	case 29, DesertRuins_EventScript_LegendaryBattle_32
DesertRuins_EventScript_LegendaryBattle_1:
# 140 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_LegendaryBattle_Text_1
# 141 "data/maps/DesertRuins/scripts.pory"
	closemessage
# 142 "data/maps/DesertRuins/scripts.pory"
	dowildbattle
# 145 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_SAGE2_DONE
# 147 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_LegendaryBattle_Text_2
# 148 "data/maps/DesertRuins/scripts.pory"
	release
# 149 "data/maps/DesertRuins/scripts.pory"
	end
# 151 "data/maps/DesertRuins/scripts.pory"
declined1:
# 152 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_LegendaryBattle_Text_3
# 153 "data/maps/DesertRuins/scripts.pory"
	release
# 154 "data/maps/DesertRuins/scripts.pory"
	end
# 156 "data/maps/DesertRuins/scripts.pory"
alreadyUsed1:
# 157 "data/maps/DesertRuins/scripts.pory"
	msgbox DesertRuins_EventScript_LegendaryBattle_Text_4
# 159 "data/maps/DesertRuins/scripts.pory"
	release
	end

DesertRuins_EventScript_LegendaryBattle_3:
# 108 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_4:
# 109 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGICE, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_5:
# 110 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_6:
# 111 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIDRAGO, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_7:
# 112 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIELEKI, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_8:
# 113 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_LATIOS, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_9:
# 114 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_LATIAS, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_10:
# 115 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_CRESSELIA, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_11:
# 116 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 80, ITEM_REVEAL_GLASS
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_12:
# 117 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 80, ITEM_REVEAL_GLASS
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_13:
# 118 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 80, ITEM_REVEAL_GLASS
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_14:
# 119 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 80, ITEM_REVEAL_GLASS
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_15:
# 120 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_16:
# 121 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_17:
# 122 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_TING_LU, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_18:
# 123 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_19:
# 124 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_KYUREM, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_20:
# 125 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_NIHILEGO, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_21:
# 126 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_22:
# 127 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_23:
# 128 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_XURKITREE, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_24:
# 129 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_CELESTEELA, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_25:
# 130 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_KARTANA, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_26:
# 131 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_GUZZLORD, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_27:
# 132 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_NAGANADEL, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_28:
# 133 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_STAKATAKA, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_29:
# 134 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_30:
# 135 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_RAGING_BOLT, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_31:
# 136 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_WALKING_WAKE, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1

DesertRuins_EventScript_LegendaryBattle_32:
# 137 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_GOUGING_FIRE, 80, ITEM_NONE
	goto DesertRuins_EventScript_LegendaryBattle_1


DesertRuins_EventScript_LegendaryBattle_Text_0:
# 97 "data/maps/DesertRuins/scripts.pory"
	.string "…I sense a hero before me.\p"
	.string "Shall I open the path to a mighty \n"
	.string "legendary Pokémon?\n"
	.string "This rite can only be performed once.$"

DesertRuins_EventScript_LegendaryBattle_Text_1:
# 140 "data/maps/DesertRuins/scripts.pory"
	.string "The veil parts… Brace yourself!$"

DesertRuins_EventScript_LegendaryBattle_Text_2:
# 147 "data/maps/DesertRuins/scripts.pory"
	.string "The path closes. Such meetings are rare and precious…$"

DesertRuins_EventScript_LegendaryBattle_Text_3:
# 152 "data/maps/DesertRuins/scripts.pory"
	.string "Very well. Return when your spirit is ready.$"

DesertRuins_EventScript_LegendaryBattle_Text_4:
# 157 "data/maps/DesertRuins/scripts.pory"
	.string "The rite is spent.\n"
	.string "Fate seldom grants second chances.$"
