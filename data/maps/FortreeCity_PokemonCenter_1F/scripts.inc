# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FORTREE_NURSE
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\n"
# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "on a POKéDEX?\p"
# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Go to the SAFARI ZONE.\n"
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "That's my suggestion.$"
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at\n"
# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the RECORD CORNER?\p"
# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's pretty neat. It mixes and matches\n"
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the records of TRAINERS.\p"
# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know quite how it works,\n"
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "but it's cool. It's exciting, even!$"
# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, wow, you have a POKéNAV!\n"
# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "And it's just like mine!\p"
# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Do you know about POKéNAV's\n"
# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "MATCH CALL system?\p"
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Access it, and you can chat with\n"
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "registered TRAINERS anytime.\p"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It also shows you which TRAINERS\n"
# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "want a rematch with you.\p"
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's really nifty! Those DEVON guys\n"
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "sure know what they're doing!$"

FortreeCity_PokemonCenter_1F_HyperTraining::
# 59 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 60 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 61 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_HyperTraining_Text_0
# 62 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 63 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_PokemonCenter_1F_HyperTraining_2
# 68 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 69 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FortreeCity_PokemonCenter_1F_HyperTraining_5
# 73 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_HyperTraining_Text_2
# 74 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FortreeCity_PokemonCenter_1F_HyperTraining_Text_3, FortreeCity_PokemonCenter_1F_HyperTraining_Text_4, FortreeCity_PokemonCenter_1F_HyperTraining_Text_5, FortreeCity_PokemonCenter_1F_HyperTraining_Text_6, FortreeCity_PokemonCenter_1F_HyperTraining_Text_7, FortreeCity_PokemonCenter_1F_HyperTraining_Text_8, FortreeCity_PokemonCenter_1F_HyperTraining_Text_9
# 76 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 77 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 0, FortreeCity_PokemonCenter_1F_HyperTraining_9
# 82 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 1, FortreeCity_PokemonCenter_1F_HyperTraining_10
# 86 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 2, FortreeCity_PokemonCenter_1F_HyperTraining_11
# 90 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 3, FortreeCity_PokemonCenter_1F_HyperTraining_12
# 94 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 4, FortreeCity_PokemonCenter_1F_HyperTraining_13
# 98 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 5, FortreeCity_PokemonCenter_1F_HyperTraining_14
# 102 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 6, FortreeCity_PokemonCenter_1F_HyperTraining_15
FortreeCity_PokemonCenter_1F_HyperTraining_7:
# 109 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done7:
# 110 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 111 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_HyperTraining_Text_11
# 112 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

FortreeCity_PokemonCenter_1F_HyperTraining_2:
# 64 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_HyperTraining_Text_1
# 65 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end

FortreeCity_PokemonCenter_1F_HyperTraining_5:
# 70 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

FortreeCity_PokemonCenter_1F_HyperTraining_9:
# 79 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 80 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done7
	goto FortreeCity_PokemonCenter_1F_HyperTraining_7

FortreeCity_PokemonCenter_1F_HyperTraining_10:
# 83 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 84 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done7
	goto FortreeCity_PokemonCenter_1F_HyperTraining_7

FortreeCity_PokemonCenter_1F_HyperTraining_11:
# 87 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 88 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done7
	goto FortreeCity_PokemonCenter_1F_HyperTraining_7

FortreeCity_PokemonCenter_1F_HyperTraining_12:
# 91 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 92 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done7
	goto FortreeCity_PokemonCenter_1F_HyperTraining_7

FortreeCity_PokemonCenter_1F_HyperTraining_13:
# 95 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 96 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done7
	goto FortreeCity_PokemonCenter_1F_HyperTraining_7

FortreeCity_PokemonCenter_1F_HyperTraining_14:
# 99 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 100 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done7
	goto FortreeCity_PokemonCenter_1F_HyperTraining_7

FortreeCity_PokemonCenter_1F_HyperTraining_15:
# 103 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_HyperTraining_Text_10
# 104 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


FortreeCity_PokemonCenter_1F_HyperTraining_Text_0:
# 61 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_1:
# 64 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_2:
# 73 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_3:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_4:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_5:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_6:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_7:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_8:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_9:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_10:
# 103 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

FortreeCity_PokemonCenter_1F_HyperTraining_Text_11:
# 111 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
