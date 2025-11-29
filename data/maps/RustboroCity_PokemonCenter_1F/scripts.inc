# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female POKéMON.\p"
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.$"
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"

RustboroCity_PokemonCenter_1F_HyperTraining::
# 51 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lock
# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_HyperTraining_Text_0
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_PokemonCenter_1F_HyperTraining_2
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq RustboroCity_PokemonCenter_1F_HyperTraining_5
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_HyperTraining_Text_2
# 66 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonCenter_1F_HyperTraining_Text_3, RustboroCity_PokemonCenter_1F_HyperTraining_Text_4, RustboroCity_PokemonCenter_1F_HyperTraining_Text_5, RustboroCity_PokemonCenter_1F_HyperTraining_Text_6, RustboroCity_PokemonCenter_1F_HyperTraining_Text_7, RustboroCity_PokemonCenter_1F_HyperTraining_Text_8, RustboroCity_PokemonCenter_1F_HyperTraining_Text_9
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 69 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 0, RustboroCity_PokemonCenter_1F_HyperTraining_9
# 74 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 1, RustboroCity_PokemonCenter_1F_HyperTraining_10
# 78 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 2, RustboroCity_PokemonCenter_1F_HyperTraining_11
# 82 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 3, RustboroCity_PokemonCenter_1F_HyperTraining_12
# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 4, RustboroCity_PokemonCenter_1F_HyperTraining_13
# 90 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 5, RustboroCity_PokemonCenter_1F_HyperTraining_14
# 94 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 6, RustboroCity_PokemonCenter_1F_HyperTraining_15
RustboroCity_PokemonCenter_1F_HyperTraining_7:
# 101 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done2:
# 102 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 103 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_HyperTraining_Text_11
# 104 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_HyperTraining_2:
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_HyperTraining_Text_1
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

RustboroCity_PokemonCenter_1F_HyperTraining_5:
# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_HyperTraining_9:
# 71 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 72 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done2
	goto RustboroCity_PokemonCenter_1F_HyperTraining_7

RustboroCity_PokemonCenter_1F_HyperTraining_10:
# 75 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 76 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done2
	goto RustboroCity_PokemonCenter_1F_HyperTraining_7

RustboroCity_PokemonCenter_1F_HyperTraining_11:
# 79 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 80 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done2
	goto RustboroCity_PokemonCenter_1F_HyperTraining_7

RustboroCity_PokemonCenter_1F_HyperTraining_12:
# 83 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 84 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done2
	goto RustboroCity_PokemonCenter_1F_HyperTraining_7

RustboroCity_PokemonCenter_1F_HyperTraining_13:
# 87 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 88 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done2
	goto RustboroCity_PokemonCenter_1F_HyperTraining_7

RustboroCity_PokemonCenter_1F_HyperTraining_14:
# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 92 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done2
	goto RustboroCity_PokemonCenter_1F_HyperTraining_7

RustboroCity_PokemonCenter_1F_HyperTraining_15:
# 95 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_HyperTraining_Text_10
# 96 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


RustboroCity_PokemonCenter_1F_HyperTraining_Text_0:
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_1:
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_2:
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_3:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_4:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_5:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_6:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_7:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_8:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_9:
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_10:
# 95 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

RustboroCity_PokemonCenter_1F_HyperTraining_Text_11:
# 103 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
