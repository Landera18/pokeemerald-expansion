# 1 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 8 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx
# 9 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
@ SetLilycoveLadyGfx returns TRUE if its the Contest Lady
# 12 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx::
# 13 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	special SetLilycoveLadyGfx
# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon
# 15 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon
# 16 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon::
# 19 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 20 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon::
# 23 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 24 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
# 27 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LILYCOVE_NURSE
# 28 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 29 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 30 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 31 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 32 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Boy::
# 35 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
# 39 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 40 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 41 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone
# 42 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone::
# 47 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_DEFAULT
# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
# 52 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I wonder how many kinds of POKéMON\n"
# 53 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "there are in the world.\p"
# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "It'd be great to cross seas and\n"
# 55 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "trade POKéMON with people far away.$"
# 56 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels:
# 58 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I've been hearing about some rotten\n"
# 59 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "scoundrels who steal POKéMON and rip\l"
# 60 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "off METEORITES.$"
# 61 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels:
# 63 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Those rotten scoundrels who steal\n"
# 64 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON and rip off METEORITES…\p"
# 65 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I haven't seen them around recently.$"

LilycoveCity_PokemonCenter_1F_HyperTraining::
# 70 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 71 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 72 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_HyperTraining_Text_0
# 73 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 74 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_HyperTraining_2
# 79 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 80 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_PokemonCenter_1F_HyperTraining_5
# 84 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_HyperTraining_Text_2
# 85 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_3, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_4, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_5, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_6, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_7, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_8, LilycoveCity_PokemonCenter_1F_HyperTraining_Text_9
# 87 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 88 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 0, LilycoveCity_PokemonCenter_1F_HyperTraining_9
# 93 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 1, LilycoveCity_PokemonCenter_1F_HyperTraining_10
# 97 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 2, LilycoveCity_PokemonCenter_1F_HyperTraining_11
# 101 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 3, LilycoveCity_PokemonCenter_1F_HyperTraining_12
# 105 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 4, LilycoveCity_PokemonCenter_1F_HyperTraining_13
# 109 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 5, LilycoveCity_PokemonCenter_1F_HyperTraining_14
# 113 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	case 6, LilycoveCity_PokemonCenter_1F_HyperTraining_15
LilycoveCity_PokemonCenter_1F_HyperTraining_7:
# 120 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done8:
# 121 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 122 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_HyperTraining_Text_11
# 123 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

LilycoveCity_PokemonCenter_1F_HyperTraining_2:
# 75 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_HyperTraining_Text_1
# 76 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
	end

LilycoveCity_PokemonCenter_1F_HyperTraining_5:
# 81 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

LilycoveCity_PokemonCenter_1F_HyperTraining_9:
# 90 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 91 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done8
	goto LilycoveCity_PokemonCenter_1F_HyperTraining_7

LilycoveCity_PokemonCenter_1F_HyperTraining_10:
# 94 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 95 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done8
	goto LilycoveCity_PokemonCenter_1F_HyperTraining_7

LilycoveCity_PokemonCenter_1F_HyperTraining_11:
# 98 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 99 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done8
	goto LilycoveCity_PokemonCenter_1F_HyperTraining_7

LilycoveCity_PokemonCenter_1F_HyperTraining_12:
# 102 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 103 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done8
	goto LilycoveCity_PokemonCenter_1F_HyperTraining_7

LilycoveCity_PokemonCenter_1F_HyperTraining_13:
# 106 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 107 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done8
	goto LilycoveCity_PokemonCenter_1F_HyperTraining_7

LilycoveCity_PokemonCenter_1F_HyperTraining_14:
# 110 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 111 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done8
	goto LilycoveCity_PokemonCenter_1F_HyperTraining_7

LilycoveCity_PokemonCenter_1F_HyperTraining_15:
# 114 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_HyperTraining_Text_10
# 115 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


LilycoveCity_PokemonCenter_1F_HyperTraining_Text_0:
# 72 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_1:
# 75 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_2:
# 84 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_3:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_4:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_5:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_6:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_7:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_8:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_9:
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_10:
# 114 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

LilycoveCity_PokemonCenter_1F_HyperTraining_Text_11:
# 122 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
