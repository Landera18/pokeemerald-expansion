# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott::
# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_EVER_GRANDE_NURSE
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_EVER_GRANDE_SCOTT
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON LEAGUE is only a short\n"
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the VICTORY ROAD.\p"
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon:
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD…\p"
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your POKéMON and give it\n"
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, you've clawed your\n"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the POKéMON LEAGUE!\p"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON LEAGUE CHAMPION…\p"
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"

EverGrandeCity_PokemonCenter_1F_HyperTraining::
# 103 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 104 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 105 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_0
# 106 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 107 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EverGrandeCity_PokemonCenter_1F_HyperTraining_2
# 112 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 113 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EverGrandeCity_PokemonCenter_1F_HyperTraining_5
# 117 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_2
# 118 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_3, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_4, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_5, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_6, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_7, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_8, EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_9
# 120 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 121 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 0, EverGrandeCity_PokemonCenter_1F_HyperTraining_9
# 126 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 1, EverGrandeCity_PokemonCenter_1F_HyperTraining_10
# 130 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 2, EverGrandeCity_PokemonCenter_1F_HyperTraining_11
# 134 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 3, EverGrandeCity_PokemonCenter_1F_HyperTraining_12
# 138 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 4, EverGrandeCity_PokemonCenter_1F_HyperTraining_13
# 142 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 5, EverGrandeCity_PokemonCenter_1F_HyperTraining_14
# 146 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case 6, EverGrandeCity_PokemonCenter_1F_HyperTraining_15
EverGrandeCity_PokemonCenter_1F_HyperTraining_7:
# 153 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done12:
# 154 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 155 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_11
# 156 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonCenter_1F_HyperTraining_2:
# 108 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_1
# 109 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_HyperTraining_5:
# 114 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonCenter_1F_HyperTraining_9:
# 123 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 124 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done12
	goto EverGrandeCity_PokemonCenter_1F_HyperTraining_7

EverGrandeCity_PokemonCenter_1F_HyperTraining_10:
# 127 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 128 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done12
	goto EverGrandeCity_PokemonCenter_1F_HyperTraining_7

EverGrandeCity_PokemonCenter_1F_HyperTraining_11:
# 131 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 132 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done12
	goto EverGrandeCity_PokemonCenter_1F_HyperTraining_7

EverGrandeCity_PokemonCenter_1F_HyperTraining_12:
# 135 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 136 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done12
	goto EverGrandeCity_PokemonCenter_1F_HyperTraining_7

EverGrandeCity_PokemonCenter_1F_HyperTraining_13:
# 139 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 140 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done12
	goto EverGrandeCity_PokemonCenter_1F_HyperTraining_7

EverGrandeCity_PokemonCenter_1F_HyperTraining_14:
# 143 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 144 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done12
	goto EverGrandeCity_PokemonCenter_1F_HyperTraining_7

EverGrandeCity_PokemonCenter_1F_HyperTraining_15:
# 147 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_10
# 148 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_0:
# 105 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_1:
# 108 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_2:
# 117 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_3:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_4:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_5:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_6:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_7:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_8:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_9:
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_10:
# 147 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

EverGrandeCity_PokemonCenter_1F_HyperTraining_Text_11:
# 155 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
