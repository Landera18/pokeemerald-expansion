# 1 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_OnTransition:
# 7 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 8 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 20 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Man::
# 24 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
# 25 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_StoneCavern:
# 28 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "There's a stone cavern at the edge\n"
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "of town.\p"
# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I've heard you can find rare stones\n"
# 31 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "there.$"
# 32 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
# 34 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Even if a POKéMON faints and can't\n"
# 35 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "battle, it can still use a move learned\l"
# 36 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "from a HIDDEN MACHINE (HM).$"

DewfordTown_PokemonCenter_1F_HyperTraining::
# 40 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lock
# 41 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 42 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_HyperTraining_Text_0
# 43 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 44 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_PokemonCenter_1F_HyperTraining_2
# 49 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 50 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq DewfordTown_PokemonCenter_1F_HyperTraining_5
# 54 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_HyperTraining_Text_2
# 55 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DewfordTown_PokemonCenter_1F_HyperTraining_Text_3, DewfordTown_PokemonCenter_1F_HyperTraining_Text_4, DewfordTown_PokemonCenter_1F_HyperTraining_Text_5, DewfordTown_PokemonCenter_1F_HyperTraining_Text_6, DewfordTown_PokemonCenter_1F_HyperTraining_Text_7, DewfordTown_PokemonCenter_1F_HyperTraining_Text_8, DewfordTown_PokemonCenter_1F_HyperTraining_Text_9
# 57 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 58 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 0, DewfordTown_PokemonCenter_1F_HyperTraining_9
# 63 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 1, DewfordTown_PokemonCenter_1F_HyperTraining_10
# 67 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 2, DewfordTown_PokemonCenter_1F_HyperTraining_11
# 71 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 3, DewfordTown_PokemonCenter_1F_HyperTraining_12
# 75 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 4, DewfordTown_PokemonCenter_1F_HyperTraining_13
# 79 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 5, DewfordTown_PokemonCenter_1F_HyperTraining_14
# 83 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 6, DewfordTown_PokemonCenter_1F_HyperTraining_15
DewfordTown_PokemonCenter_1F_HyperTraining_7:
# 90 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
HyperTrain_Done3:
# 91 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 92 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_HyperTraining_Text_11
# 93 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_HyperTraining_2:
# 45 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_HyperTraining_Text_1
# 46 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
	end

DewfordTown_PokemonCenter_1F_HyperTraining_5:
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_HyperTraining_9:
# 60 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 61 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done3
	goto DewfordTown_PokemonCenter_1F_HyperTraining_7

DewfordTown_PokemonCenter_1F_HyperTraining_10:
# 64 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done3
	goto DewfordTown_PokemonCenter_1F_HyperTraining_7

DewfordTown_PokemonCenter_1F_HyperTraining_11:
# 68 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 69 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done3
	goto DewfordTown_PokemonCenter_1F_HyperTraining_7

DewfordTown_PokemonCenter_1F_HyperTraining_12:
# 72 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 73 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done3
	goto DewfordTown_PokemonCenter_1F_HyperTraining_7

DewfordTown_PokemonCenter_1F_HyperTraining_13:
# 76 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 77 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done3
	goto DewfordTown_PokemonCenter_1F_HyperTraining_7

DewfordTown_PokemonCenter_1F_HyperTraining_14:
# 80 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done3
	goto DewfordTown_PokemonCenter_1F_HyperTraining_7

DewfordTown_PokemonCenter_1F_HyperTraining_15:
# 84 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_HyperTraining_Text_10
# 85 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DewfordTown_PokemonCenter_1F_HyperTraining_Text_0:
# 42 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_1:
# 45 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_2:
# 54 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_3:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "HP$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_4:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_5:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_6:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_7:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_8:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_9:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_10:
# 84 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

DewfordTown_PokemonCenter_1F_HyperTraining_Text_11:
# 92 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
