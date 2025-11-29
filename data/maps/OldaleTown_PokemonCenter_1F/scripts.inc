# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

OldaleTown_PokemonCenter_1F_HyperTraining::
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_HyperTraining_Text_0
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_HyperTraining_2
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldaleTown_PokemonCenter_1F_HyperTraining_5
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_HyperTraining_Text_2
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_HyperTraining_Text_3, OldaleTown_PokemonCenter_1F_HyperTraining_Text_4, OldaleTown_PokemonCenter_1F_HyperTraining_Text_5, OldaleTown_PokemonCenter_1F_HyperTraining_Text_6, OldaleTown_PokemonCenter_1F_HyperTraining_Text_7, OldaleTown_PokemonCenter_1F_HyperTraining_Text_8, OldaleTown_PokemonCenter_1F_HyperTraining_Text_9
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_HyperTraining_9
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_HyperTraining_10
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_HyperTraining_11
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_HyperTraining_12
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_HyperTraining_13
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_HyperTraining_14
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_HyperTraining_15
OldaleTown_PokemonCenter_1F_HyperTraining_7:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
HyperTrain_Done:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_HyperTraining_Text_11
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

OldaleTown_PokemonCenter_1F_HyperTraining_2:
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_HyperTraining_Text_1
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_HyperTraining_5:
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

OldaleTown_PokemonCenter_1F_HyperTraining_9:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done
	goto OldaleTown_PokemonCenter_1F_HyperTraining_7

OldaleTown_PokemonCenter_1F_HyperTraining_10:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done
	goto OldaleTown_PokemonCenter_1F_HyperTraining_7

OldaleTown_PokemonCenter_1F_HyperTraining_11:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done
	goto OldaleTown_PokemonCenter_1F_HyperTraining_7

OldaleTown_PokemonCenter_1F_HyperTraining_12:
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done
	goto OldaleTown_PokemonCenter_1F_HyperTraining_7

OldaleTown_PokemonCenter_1F_HyperTraining_13:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done
	goto OldaleTown_PokemonCenter_1F_HyperTraining_7

OldaleTown_PokemonCenter_1F_HyperTraining_14:
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done
	goto OldaleTown_PokemonCenter_1F_HyperTraining_7

OldaleTown_PokemonCenter_1F_HyperTraining_15:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_HyperTraining_Text_10
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


OldaleTown_PokemonCenter_1F_HyperTraining_Text_0:
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_1:
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_2:
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_3:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "HP$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_4:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_5:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_6:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_7:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_8:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_9:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_10:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

OldaleTown_PokemonCenter_1F_HyperTraining_Text_11:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
