# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of POKéMON,\n"
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a GRASS type.\p"
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the WATER and\n"
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "GROUND types.\p"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a FIRE type.\p"
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "BUG types.\p"
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a WATER type.\p"
# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and ELECTRIC-type POKéMON.$"

PetalburgCity_PokemonCenter_1F_HyperTraining::
# 97 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 98 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_HyperTraining_Text_0
# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCity_PokemonCenter_1F_HyperTraining_2
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PetalburgCity_PokemonCenter_1F_HyperTraining_5
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_HyperTraining_Text_2
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_3, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_4, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_5, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_6, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_7, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_8, PetalburgCity_PokemonCenter_1F_HyperTraining_Text_9
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 0, PetalburgCity_PokemonCenter_1F_HyperTraining_9
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 1, PetalburgCity_PokemonCenter_1F_HyperTraining_10
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 2, PetalburgCity_PokemonCenter_1F_HyperTraining_11
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 3, PetalburgCity_PokemonCenter_1F_HyperTraining_12
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 4, PetalburgCity_PokemonCenter_1F_HyperTraining_13
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 5, PetalburgCity_PokemonCenter_1F_HyperTraining_14
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 6, PetalburgCity_PokemonCenter_1F_HyperTraining_15
PetalburgCity_PokemonCenter_1F_HyperTraining_7:
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done1:
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_HyperTraining_Text_11
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PetalburgCity_PokemonCenter_1F_HyperTraining_2:
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_HyperTraining_Text_1
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	end

PetalburgCity_PokemonCenter_1F_HyperTraining_5:
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PetalburgCity_PokemonCenter_1F_HyperTraining_9:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done1
	goto PetalburgCity_PokemonCenter_1F_HyperTraining_7

PetalburgCity_PokemonCenter_1F_HyperTraining_10:
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done1
	goto PetalburgCity_PokemonCenter_1F_HyperTraining_7

PetalburgCity_PokemonCenter_1F_HyperTraining_11:
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done1
	goto PetalburgCity_PokemonCenter_1F_HyperTraining_7

PetalburgCity_PokemonCenter_1F_HyperTraining_12:
# 129 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done1
	goto PetalburgCity_PokemonCenter_1F_HyperTraining_7

PetalburgCity_PokemonCenter_1F_HyperTraining_13:
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done1
	goto PetalburgCity_PokemonCenter_1F_HyperTraining_7

PetalburgCity_PokemonCenter_1F_HyperTraining_14:
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done1
	goto PetalburgCity_PokemonCenter_1F_HyperTraining_7

PetalburgCity_PokemonCenter_1F_HyperTraining_15:
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_HyperTraining_Text_10
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


PetalburgCity_PokemonCenter_1F_HyperTraining_Text_0:
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_1:
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_2:
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_3:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_4:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_5:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_6:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_7:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_8:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_9:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_10:
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

PetalburgCity_PokemonCenter_1F_HyperTraining_Text_11:
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
