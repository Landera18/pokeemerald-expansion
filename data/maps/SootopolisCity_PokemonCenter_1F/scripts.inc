# 1 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SOOTOPOLIS_NURSE
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "WALLACE is rumored to be the toughest\n"
# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "TRAINER in the whole HOENN region.\p"
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "This town's GYM is led by the TRAINER\n"
# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "who taught WALLACE.\p"
# 51 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "But the ELITE FOUR… They're said to be\n"
# 52 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "even stronger than WALLACE's mentor.\p"
# 53 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "How strong could they be?$"
# 54 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Everyone in town has taken refuge\n"
# 57 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "and won't come out of their homes.\p"
# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Even I would rather not venture\n"
# 59 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "outside.$"
# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
# 62 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Whenever, wherever, and whatever\n"
# 63 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "happens, I will always be friends with\l"
# 64 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.\p"
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Because it's fun to be with POKéMON!$"
# 66 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
# 68 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Aren't POKéMON our friends?\p"
# 69 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Why are they going wild this way?$"

SootopolisCity_PokemonCenter_1F_HyperTraining::
# 74 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 75 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 76 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_HyperTraining_Text_0
# 77 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 78 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_PokemonCenter_1F_HyperTraining_2
# 83 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 84 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SootopolisCity_PokemonCenter_1F_HyperTraining_5
# 88 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_HyperTraining_Text_2
# 89 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_3, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_4, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_5, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_6, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_7, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_8, SootopolisCity_PokemonCenter_1F_HyperTraining_Text_9
# 91 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 92 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 0, SootopolisCity_PokemonCenter_1F_HyperTraining_9
# 97 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 1, SootopolisCity_PokemonCenter_1F_HyperTraining_10
# 101 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 2, SootopolisCity_PokemonCenter_1F_HyperTraining_11
# 105 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 3, SootopolisCity_PokemonCenter_1F_HyperTraining_12
# 109 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 4, SootopolisCity_PokemonCenter_1F_HyperTraining_13
# 113 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 5, SootopolisCity_PokemonCenter_1F_HyperTraining_14
# 117 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case 6, SootopolisCity_PokemonCenter_1F_HyperTraining_15
SootopolisCity_PokemonCenter_1F_HyperTraining_7:
# 124 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done11:
# 125 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 126 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_HyperTraining_Text_11
# 127 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

SootopolisCity_PokemonCenter_1F_HyperTraining_2:
# 79 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_HyperTraining_Text_1
# 80 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
	end

SootopolisCity_PokemonCenter_1F_HyperTraining_5:
# 85 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

SootopolisCity_PokemonCenter_1F_HyperTraining_9:
# 94 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 95 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done11
	goto SootopolisCity_PokemonCenter_1F_HyperTraining_7

SootopolisCity_PokemonCenter_1F_HyperTraining_10:
# 98 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 99 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done11
	goto SootopolisCity_PokemonCenter_1F_HyperTraining_7

SootopolisCity_PokemonCenter_1F_HyperTraining_11:
# 102 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 103 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done11
	goto SootopolisCity_PokemonCenter_1F_HyperTraining_7

SootopolisCity_PokemonCenter_1F_HyperTraining_12:
# 106 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 107 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done11
	goto SootopolisCity_PokemonCenter_1F_HyperTraining_7

SootopolisCity_PokemonCenter_1F_HyperTraining_13:
# 110 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 111 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done11
	goto SootopolisCity_PokemonCenter_1F_HyperTraining_7

SootopolisCity_PokemonCenter_1F_HyperTraining_14:
# 114 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 115 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done11
	goto SootopolisCity_PokemonCenter_1F_HyperTraining_7

SootopolisCity_PokemonCenter_1F_HyperTraining_15:
# 118 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_HyperTraining_Text_10
# 119 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


SootopolisCity_PokemonCenter_1F_HyperTraining_Text_0:
# 76 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_1:
# 79 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_2:
# 88 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_3:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_4:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_5:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_6:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_7:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_8:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_9:
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_10:
# 118 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

SootopolisCity_PokemonCenter_1F_HyperTraining_Text_11:
# 126 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
