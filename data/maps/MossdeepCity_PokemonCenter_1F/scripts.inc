# 1 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 8 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MOSSDEEP_NURSE
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 15 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	release
# 16 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Woman::
# 19 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
# 20 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Girl::
# 23 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
# 24 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable:
# 27 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "The GYM LEADERS in this town are\n"
# 28 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "a formidable duo.\p"
# 29 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Their combination attacks are, like,\n"
# 30 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "excellent and wow!$"
# 31 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves:
# 33 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the special abilities of\n"
# 34 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON, some moves might change\l"
# 35 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "or not work at all.$"

MossdeepCity_PokemonCenter_1F_HyperTraining::
# 40 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	lock
# 41 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 42 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_HyperTraining_Text_0
# 43 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 44 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_PokemonCenter_1F_HyperTraining_2
# 49 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 50 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MossdeepCity_PokemonCenter_1F_HyperTraining_5
# 54 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_HyperTraining_Text_2
# 55 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_3, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_4, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_5, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_6, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_7, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_8, MossdeepCity_PokemonCenter_1F_HyperTraining_Text_9
# 57 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 58 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 0, MossdeepCity_PokemonCenter_1F_HyperTraining_9
# 63 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 1, MossdeepCity_PokemonCenter_1F_HyperTraining_10
# 67 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 2, MossdeepCity_PokemonCenter_1F_HyperTraining_11
# 71 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 3, MossdeepCity_PokemonCenter_1F_HyperTraining_12
# 75 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 4, MossdeepCity_PokemonCenter_1F_HyperTraining_13
# 79 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 5, MossdeepCity_PokemonCenter_1F_HyperTraining_14
# 83 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case 6, MossdeepCity_PokemonCenter_1F_HyperTraining_15
MossdeepCity_PokemonCenter_1F_HyperTraining_7:
# 90 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done9:
# 91 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 92 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_HyperTraining_Text_11
# 93 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

MossdeepCity_PokemonCenter_1F_HyperTraining_2:
# 45 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_HyperTraining_Text_1
# 46 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	release
	end

MossdeepCity_PokemonCenter_1F_HyperTraining_5:
# 51 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

MossdeepCity_PokemonCenter_1F_HyperTraining_9:
# 60 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 61 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done9
	goto MossdeepCity_PokemonCenter_1F_HyperTraining_7

MossdeepCity_PokemonCenter_1F_HyperTraining_10:
# 64 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 65 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done9
	goto MossdeepCity_PokemonCenter_1F_HyperTraining_7

MossdeepCity_PokemonCenter_1F_HyperTraining_11:
# 68 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 69 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done9
	goto MossdeepCity_PokemonCenter_1F_HyperTraining_7

MossdeepCity_PokemonCenter_1F_HyperTraining_12:
# 72 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 73 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done9
	goto MossdeepCity_PokemonCenter_1F_HyperTraining_7

MossdeepCity_PokemonCenter_1F_HyperTraining_13:
# 76 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 77 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done9
	goto MossdeepCity_PokemonCenter_1F_HyperTraining_7

MossdeepCity_PokemonCenter_1F_HyperTraining_14:
# 80 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 81 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done9
	goto MossdeepCity_PokemonCenter_1F_HyperTraining_7

MossdeepCity_PokemonCenter_1F_HyperTraining_15:
# 84 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_HyperTraining_Text_10
# 85 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


MossdeepCity_PokemonCenter_1F_HyperTraining_Text_0:
# 42 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_1:
# 45 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_2:
# 54 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_3:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_4:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_5:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_6:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_7:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_8:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_9:
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_10:
# 84 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

MossdeepCity_PokemonCenter_1F_HyperTraining_Text_11:
# 92 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
