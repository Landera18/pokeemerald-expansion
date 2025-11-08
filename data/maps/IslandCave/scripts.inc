# 1 "data/maps/IslandCave/scripts.pory"
IslandCave_MapScripts::
# 2 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_OnResume
# 3 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_OnLoad
# 4 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_OnTransition
# 5 "data/maps/IslandCave/scripts.pory"
	.byte 0
# 6 "data/maps/IslandCave/scripts.pory"

# 7 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume:
# 8 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_EventScript_TryRemoveRegice
# 9 "data/maps/IslandCave/scripts.pory"
	end
# 10 "data/maps/IslandCave/scripts.pory"

# 11 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice::
# 12 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/IslandCave/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/IslandCave/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/IslandCave/scripts.pory"
	return
# 16 "data/maps/IslandCave/scripts.pory"

# 17 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad:
# 18 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_HideRegiEntrance
# 19 "data/maps/IslandCave/scripts.pory"
	end
# 20 "data/maps/IslandCave/scripts.pory"

# 21 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_HideRegiEntrance::
# 22 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 23 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 24 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 25 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 26 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 27 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 28 "data/maps/IslandCave/scripts.pory"
	return
# 29 "data/maps/IslandCave/scripts.pory"

# 30 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition:
# 31 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 32 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 33 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGICE, IslandCave_EventScript_ShowRegice
# 34 "data/maps/IslandCave/scripts.pory"
	end
# 35 "data/maps/IslandCave/scripts.pory"

# 36 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ShowRegice::
# 37 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_HIDE_REGICE
# 38 "data/maps/IslandCave/scripts.pory"
	return
# 39 "data/maps/IslandCave/scripts.pory"

# 40 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_OpenRegiEntrance::
# 41 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 42 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 43 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 44 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 45 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 46 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 47 "data/maps/IslandCave/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/IslandCave/scripts.pory"
	playse SE_BANG
# 49 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 50 "data/maps/IslandCave/scripts.pory"
	end
# 51 "data/maps/IslandCave/scripts.pory"

# 52 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle::
# 53 "data/maps/IslandCave/scripts.pory"
	lockall
# 54 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 55 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_BigHoleInWall
# 56 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 57 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 58 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 59 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 60 "data/maps/IslandCave/scripts.pory"
	end
# 61 "data/maps/IslandCave/scripts.pory"

# 62 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_BigHoleInWall::
# 63 "data/maps/IslandCave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 64 "data/maps/IslandCave/scripts.pory"
	releaseall
# 65 "data/maps/IslandCave/scripts.pory"
	end
# 66 "data/maps/IslandCave/scripts.pory"

# 67 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide::
# 68 "data/maps/IslandCave/scripts.pory"
	lockall
# 69 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 70 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 71 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CloseBrailleMsg
# 72 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 73 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 74 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 75 "data/maps/IslandCave/scripts.pory"
	end
# 76 "data/maps/IslandCave/scripts.pory"

# 77 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CloseBrailleMsg::
# 78 "data/maps/IslandCave/scripts.pory"
	waitbuttonpress
# 79 "data/maps/IslandCave/scripts.pory"
	closebraillemessage
# 80 "data/maps/IslandCave/scripts.pory"
	releaseall
# 81 "data/maps/IslandCave/scripts.pory"
	end
# 82 "data/maps/IslandCave/scripts.pory"

# 83 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ClearSteps::
# 84 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_1, 0
# 85 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_2, 0
# 86 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_3, 0
# 87 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_TEMP_REGICE_PUZZLE_FAILED
# 88 "data/maps/IslandCave/scripts.pory"
	return
# 89 "data/maps/IslandCave/scripts.pory"

# 90 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice::
# 91 "data/maps/IslandCave/scripts.pory"
	lock
# 92 "data/maps/IslandCave/scripts.pory"
	faceplayer
# 93 "data/maps/IslandCave/scripts.pory"
	waitse
# 94 "data/maps/IslandCave/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 95 "data/maps/IslandCave/scripts.pory"
	delay 40
# 96 "data/maps/IslandCave/scripts.pory"
	waitmoncry
# 97 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_REGICE, 40
# 98 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 99 "data/maps/IslandCave/scripts.pory"
	special StartRegiBattle
# 100 "data/maps/IslandCave/scripts.pory"
	waitstate
# 101 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 102 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 103 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IslandCave_EventScript_DefeatedRegice
# 104 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IslandCave_EventScript_RanFromRegice
# 105 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IslandCave_EventScript_RanFromRegice
# 106 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 107 "data/maps/IslandCave/scripts.pory"
	release
# 108 "data/maps/IslandCave/scripts.pory"
	end
# 109 "data/maps/IslandCave/scripts.pory"

# 110 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_DefeatedRegice::
# 111 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 112 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 113 "data/maps/IslandCave/scripts.pory"
	end
# 114 "data/maps/IslandCave/scripts.pory"

# 115 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_RanFromRegice::
# 116 "data/maps/IslandCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 117 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 118 "data/maps/IslandCave/scripts.pory"
	end

IslandCave_EventScript_LegendaryBattle::
# 123 "data/maps/IslandCave/scripts.pory"
	lock
# 124 "data/maps/IslandCave/scripts.pory"
	faceplayer
# 127 "data/maps/IslandCave/scripts.pory"
	checkflag FLAG_SAGE3_DONE
# 128 "data/maps/IslandCave/scripts.pory"
	goto_if TRUE, alreadyUsed2
# 130 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_LegendaryBattle_Text_0, MSGBOX_YESNO
# 134 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, NO
# 135 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, declined2
# 137 "data/maps/IslandCave/scripts.pory"
	random 33
# 138 "data/maps/IslandCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 140 "data/maps/IslandCave/scripts.pory"
	switch VAR_TEMP_0
# 141 "data/maps/IslandCave/scripts.pory"
	case 0, IslandCave_EventScript_LegendaryBattle_3
# 142 "data/maps/IslandCave/scripts.pory"
	case 1, IslandCave_EventScript_LegendaryBattle_4
# 143 "data/maps/IslandCave/scripts.pory"
	case 2, IslandCave_EventScript_LegendaryBattle_5
# 144 "data/maps/IslandCave/scripts.pory"
	case 3, IslandCave_EventScript_LegendaryBattle_6
# 145 "data/maps/IslandCave/scripts.pory"
	case 4, IslandCave_EventScript_LegendaryBattle_7
# 146 "data/maps/IslandCave/scripts.pory"
	case 5, IslandCave_EventScript_LegendaryBattle_8
# 147 "data/maps/IslandCave/scripts.pory"
	case 6, IslandCave_EventScript_LegendaryBattle_9
# 148 "data/maps/IslandCave/scripts.pory"
	case 7, IslandCave_EventScript_LegendaryBattle_10
# 149 "data/maps/IslandCave/scripts.pory"
	case 8, IslandCave_EventScript_LegendaryBattle_11
# 150 "data/maps/IslandCave/scripts.pory"
	case 9, IslandCave_EventScript_LegendaryBattle_12
# 151 "data/maps/IslandCave/scripts.pory"
	case 10, IslandCave_EventScript_LegendaryBattle_13
# 152 "data/maps/IslandCave/scripts.pory"
	case 11, IslandCave_EventScript_LegendaryBattle_14
# 153 "data/maps/IslandCave/scripts.pory"
	case 12, IslandCave_EventScript_LegendaryBattle_15
# 154 "data/maps/IslandCave/scripts.pory"
	case 13, IslandCave_EventScript_LegendaryBattle_16
# 155 "data/maps/IslandCave/scripts.pory"
	case 14, IslandCave_EventScript_LegendaryBattle_17
# 156 "data/maps/IslandCave/scripts.pory"
	case 15, IslandCave_EventScript_LegendaryBattle_18
# 157 "data/maps/IslandCave/scripts.pory"
	case 16, IslandCave_EventScript_LegendaryBattle_19
# 158 "data/maps/IslandCave/scripts.pory"
	case 17, IslandCave_EventScript_LegendaryBattle_20
# 159 "data/maps/IslandCave/scripts.pory"
	case 18, IslandCave_EventScript_LegendaryBattle_21
# 160 "data/maps/IslandCave/scripts.pory"
	case 19, IslandCave_EventScript_LegendaryBattle_22
# 161 "data/maps/IslandCave/scripts.pory"
	case 20, IslandCave_EventScript_LegendaryBattle_23
# 162 "data/maps/IslandCave/scripts.pory"
	case 21, IslandCave_EventScript_LegendaryBattle_24
# 163 "data/maps/IslandCave/scripts.pory"
	case 22, IslandCave_EventScript_LegendaryBattle_25
# 164 "data/maps/IslandCave/scripts.pory"
	case 23, IslandCave_EventScript_LegendaryBattle_26
# 165 "data/maps/IslandCave/scripts.pory"
	case 24, IslandCave_EventScript_LegendaryBattle_27
# 166 "data/maps/IslandCave/scripts.pory"
	case 25, IslandCave_EventScript_LegendaryBattle_28
# 167 "data/maps/IslandCave/scripts.pory"
	case 26, IslandCave_EventScript_LegendaryBattle_29
# 168 "data/maps/IslandCave/scripts.pory"
	case 27, IslandCave_EventScript_LegendaryBattle_30
# 169 "data/maps/IslandCave/scripts.pory"
	case 28, IslandCave_EventScript_LegendaryBattle_31
# 170 "data/maps/IslandCave/scripts.pory"
	case 29, IslandCave_EventScript_LegendaryBattle_32
# 171 "data/maps/IslandCave/scripts.pory"
	case 30, IslandCave_EventScript_LegendaryBattle_33
# 172 "data/maps/IslandCave/scripts.pory"
	case 31, IslandCave_EventScript_LegendaryBattle_34
# 173 "data/maps/IslandCave/scripts.pory"
	case 32, IslandCave_EventScript_LegendaryBattle_35
IslandCave_EventScript_LegendaryBattle_1:
# 176 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_LegendaryBattle_Text_1
# 177 "data/maps/IslandCave/scripts.pory"
	closemessage
# 178 "data/maps/IslandCave/scripts.pory"
	dowildbattle
# 181 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SAGE3_DONE
# 183 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_LegendaryBattle_Text_2
# 184 "data/maps/IslandCave/scripts.pory"
	release
# 185 "data/maps/IslandCave/scripts.pory"
	end
# 187 "data/maps/IslandCave/scripts.pory"
declined2:
# 188 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_LegendaryBattle_Text_3
# 189 "data/maps/IslandCave/scripts.pory"
	release
# 190 "data/maps/IslandCave/scripts.pory"
	end
# 192 "data/maps/IslandCave/scripts.pory"
alreadyUsed2:
# 193 "data/maps/IslandCave/scripts.pory"
	msgbox IslandCave_EventScript_LegendaryBattle_Text_4
# 195 "data/maps/IslandCave/scripts.pory"
	release
	end

IslandCave_EventScript_LegendaryBattle_3:
# 141 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_MEW, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_4:
# 142 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_CELEBI, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_5:
# 143 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_6:
# 144 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_MANAPHY, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_7:
# 145 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_SHAYMIN, 90, ITEM_GRACIDEA
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_8:
# 146 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_MELOETTA, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_9:
# 147 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_DARKRAI, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_10:
# 148 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_GENESECT, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_11:
# 149 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_VICTINI, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_12:
# 150 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_KELDEO, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_13:
# 151 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_MELTAN, 5, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_14:
# 152 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_ZARUDE_DADA, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_15:
# 153 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_COSMOG, 5, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_16:
# 154 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_KUBFU, 5, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_17:
# 155 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_OGERPON, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_18:
# 156 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_HOOPA, 90, ITEM_PRISON_BOTTLE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_19:
# 157 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_CALYREX, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_20:
# 158 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_VOLCANION, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_21:
# 159 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_22:
# 160 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_MARSHADOW, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_23:
# 161 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_MAGEARNA, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_24:
# 162 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_ZERAORA, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_25:
# 163 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_DEOXYS, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_26:
# 164 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_VICTINI, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_27:
# 165 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 90, ITEM_DIANCITE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_28:
# 166 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_ZYGARDE, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_29:
# 167 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_30:
# 168 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_HEATRAN, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_31:
# 169 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_OGERPON, 90, ITEM_CORNERSTONE_MASK
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_32:
# 170 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_OGERPON, 90, ITEM_HEARTHFLAME_MASK
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_33:
# 171 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_OGERPON, 90, ITEM_WELLSPRING_MASK
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_34:
# 172 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_GLASTRIER, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1

IslandCave_EventScript_LegendaryBattle_35:
# 173 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_SPECTRIER, 90, ITEM_NONE
	goto IslandCave_EventScript_LegendaryBattle_1


IslandCave_EventScript_LegendaryBattle_Text_0:
# 130 "data/maps/IslandCave/scripts.pory"
	.string "…I sense a hero before me.\p"
	.string "Shall I open the path to a mighty \n"
	.string "legendary Pokémon?\n"
	.string "This rite can only be performed once.$"

IslandCave_EventScript_LegendaryBattle_Text_1:
# 176 "data/maps/IslandCave/scripts.pory"
	.string "The veil parts… Brace yourself!$"

IslandCave_EventScript_LegendaryBattle_Text_2:
# 183 "data/maps/IslandCave/scripts.pory"
	.string "The path closes. Such meetings are rare and precious…$"

IslandCave_EventScript_LegendaryBattle_Text_3:
# 188 "data/maps/IslandCave/scripts.pory"
	.string "Very well. Return when your spirit is ready.$"

IslandCave_EventScript_LegendaryBattle_Text_4:
# 193 "data/maps/IslandCave/scripts.pory"
	.string "The rite is spent.\n"
	.string "Fate seldom grants second chances.$"
