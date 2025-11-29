# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"

SlateportCity_PokemonCenter_1F_HyperTraining::
# 44 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lock
# 45 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_HyperTraining_Text_0
# 47 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 48 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonCenter_1F_HyperTraining_2
# 53 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SlateportCity_PokemonCenter_1F_HyperTraining_5
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_HyperTraining_Text_2
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, SlateportCity_PokemonCenter_1F_HyperTraining_Text_3, SlateportCity_PokemonCenter_1F_HyperTraining_Text_4, SlateportCity_PokemonCenter_1F_HyperTraining_Text_5, SlateportCity_PokemonCenter_1F_HyperTraining_Text_6, SlateportCity_PokemonCenter_1F_HyperTraining_Text_7, SlateportCity_PokemonCenter_1F_HyperTraining_Text_8, SlateportCity_PokemonCenter_1F_HyperTraining_Text_9
# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 62 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 0, SlateportCity_PokemonCenter_1F_HyperTraining_9
# 67 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 1, SlateportCity_PokemonCenter_1F_HyperTraining_10
# 71 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 2, SlateportCity_PokemonCenter_1F_HyperTraining_11
# 75 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 3, SlateportCity_PokemonCenter_1F_HyperTraining_12
# 79 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 4, SlateportCity_PokemonCenter_1F_HyperTraining_13
# 83 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 5, SlateportCity_PokemonCenter_1F_HyperTraining_14
# 87 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 6, SlateportCity_PokemonCenter_1F_HyperTraining_15
SlateportCity_PokemonCenter_1F_HyperTraining_7:
# 94 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done10:
# 95 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 96 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_HyperTraining_Text_11
# 97 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

SlateportCity_PokemonCenter_1F_HyperTraining_2:
# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_HyperTraining_Text_1
# 50 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_1F_HyperTraining_5:
# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

SlateportCity_PokemonCenter_1F_HyperTraining_9:
# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 65 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done10
	goto SlateportCity_PokemonCenter_1F_HyperTraining_7

SlateportCity_PokemonCenter_1F_HyperTraining_10:
# 68 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 69 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done10
	goto SlateportCity_PokemonCenter_1F_HyperTraining_7

SlateportCity_PokemonCenter_1F_HyperTraining_11:
# 72 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 73 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done10
	goto SlateportCity_PokemonCenter_1F_HyperTraining_7

SlateportCity_PokemonCenter_1F_HyperTraining_12:
# 76 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 77 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done10
	goto SlateportCity_PokemonCenter_1F_HyperTraining_7

SlateportCity_PokemonCenter_1F_HyperTraining_13:
# 80 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 81 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done10
	goto SlateportCity_PokemonCenter_1F_HyperTraining_7

SlateportCity_PokemonCenter_1F_HyperTraining_14:
# 84 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 85 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done10
	goto SlateportCity_PokemonCenter_1F_HyperTraining_7

SlateportCity_PokemonCenter_1F_HyperTraining_15:
# 88 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_HyperTraining_Text_10
# 89 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


SlateportCity_PokemonCenter_1F_HyperTraining_Text_0:
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_1:
# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_2:
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_3:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_4:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_5:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_6:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_7:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_8:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_9:
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_10:
# 88 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

SlateportCity_PokemonCenter_1F_HyperTraining_Text_11:
# 96 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
