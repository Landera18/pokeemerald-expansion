# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition:
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FALLARBOR_NURSE
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 41 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
# 44 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
# 45 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
# 50 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 51 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_FALLARBOR_LANETTE
# 52 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
# 57 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_right
# 58 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 59 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 81 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 82 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, hello.\n"
# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You are?\p"
# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I can see that you're a TRAINER.\p"
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "So that means you use the POKéMON\n"
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Storage System I developed.\p"
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "How I arrived at that conclusion is\n"
# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "a simple deductive process.\p"
# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You spoke to me because you wanted\n"
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "to access something on this PC.\p"
# 95 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
# 96 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Honestly, I'm glad to meet you--it's\n"
# 97 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "great you're using the Storage System.\p"
# 98 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "If you could, please visit me at home.\n"
# 99 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "My house is on ROUTE 114.$"
# 100 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 102 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 103 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 104 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
# 105 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 106 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 107 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 108 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\n"
# 109 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "seedlings of hardy trees that thrive\l"
# 110 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "even in volcanic ash.$"

FallarborTown_PokemonCenter_1F_HyperTraining::
# 115 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 116 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 117 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_HyperTraining_Text_0
# 118 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 119 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_PokemonCenter_1F_HyperTraining_2
# 124 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 125 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FallarborTown_PokemonCenter_1F_HyperTraining_5
# 129 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_HyperTraining_Text_2
# 130 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FallarborTown_PokemonCenter_1F_HyperTraining_Text_3, FallarborTown_PokemonCenter_1F_HyperTraining_Text_4, FallarborTown_PokemonCenter_1F_HyperTraining_Text_5, FallarborTown_PokemonCenter_1F_HyperTraining_Text_6, FallarborTown_PokemonCenter_1F_HyperTraining_Text_7, FallarborTown_PokemonCenter_1F_HyperTraining_Text_8, FallarborTown_PokemonCenter_1F_HyperTraining_Text_9
# 132 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 133 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 0, FallarborTown_PokemonCenter_1F_HyperTraining_9
# 138 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 1, FallarborTown_PokemonCenter_1F_HyperTraining_10
# 142 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 2, FallarborTown_PokemonCenter_1F_HyperTraining_11
# 146 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 3, FallarborTown_PokemonCenter_1F_HyperTraining_12
# 150 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 4, FallarborTown_PokemonCenter_1F_HyperTraining_13
# 154 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 5, FallarborTown_PokemonCenter_1F_HyperTraining_14
# 158 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case 6, FallarborTown_PokemonCenter_1F_HyperTraining_15
FallarborTown_PokemonCenter_1F_HyperTraining_7:
# 165 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
HyperTrain_Done5:
# 166 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 167 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_HyperTraining_Text_11
# 168 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

FallarborTown_PokemonCenter_1F_HyperTraining_2:
# 120 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_HyperTraining_Text_1
# 121 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
	end

FallarborTown_PokemonCenter_1F_HyperTraining_5:
# 126 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

FallarborTown_PokemonCenter_1F_HyperTraining_9:
# 135 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 136 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done5
	goto FallarborTown_PokemonCenter_1F_HyperTraining_7

FallarborTown_PokemonCenter_1F_HyperTraining_10:
# 139 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 140 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done5
	goto FallarborTown_PokemonCenter_1F_HyperTraining_7

FallarborTown_PokemonCenter_1F_HyperTraining_11:
# 143 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 144 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done5
	goto FallarborTown_PokemonCenter_1F_HyperTraining_7

FallarborTown_PokemonCenter_1F_HyperTraining_12:
# 147 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 148 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done5
	goto FallarborTown_PokemonCenter_1F_HyperTraining_7

FallarborTown_PokemonCenter_1F_HyperTraining_13:
# 151 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 152 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done5
	goto FallarborTown_PokemonCenter_1F_HyperTraining_7

FallarborTown_PokemonCenter_1F_HyperTraining_14:
# 155 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 156 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done5
	goto FallarborTown_PokemonCenter_1F_HyperTraining_7

FallarborTown_PokemonCenter_1F_HyperTraining_15:
# 159 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_HyperTraining_Text_10
# 160 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


FallarborTown_PokemonCenter_1F_HyperTraining_Text_0:
# 117 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_1:
# 120 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_2:
# 129 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_3:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "HP$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_4:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_5:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_6:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_7:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_8:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_9:
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_10:
# 159 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

FallarborTown_PokemonCenter_1F_HyperTraining_Text_11:
# 167 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
