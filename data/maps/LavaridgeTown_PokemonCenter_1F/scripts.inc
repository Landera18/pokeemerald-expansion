# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\n"
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINERS if they spend time together.\p"
# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my POKéMON\n"
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If POKéMON are getting rest, so too\n"
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their TRAINERS.$"

LavaridgeTown_PokemonCenter_1F_HyperTraining::
# 52 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	lock
# 53 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_0
# 55 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 56 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LavaridgeTown_PokemonCenter_1F_HyperTraining_2
# 61 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LavaridgeTown_PokemonCenter_1F_HyperTraining_5
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_2
# 67 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_3, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_4, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_5, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_6, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_7, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_8, LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_9
# 69 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 70 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 0, LavaridgeTown_PokemonCenter_1F_HyperTraining_9
# 75 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 1, LavaridgeTown_PokemonCenter_1F_HyperTraining_10
# 79 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 2, LavaridgeTown_PokemonCenter_1F_HyperTraining_11
# 83 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 3, LavaridgeTown_PokemonCenter_1F_HyperTraining_12
# 87 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 4, LavaridgeTown_PokemonCenter_1F_HyperTraining_13
# 91 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 5, LavaridgeTown_PokemonCenter_1F_HyperTraining_14
# 95 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case 6, LavaridgeTown_PokemonCenter_1F_HyperTraining_15
LavaridgeTown_PokemonCenter_1F_HyperTraining_7:
# 102 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
HyperTrain_Done6:
# 103 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 104 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_11
# 105 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

LavaridgeTown_PokemonCenter_1F_HyperTraining_2:
# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_1
# 58 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
	end

LavaridgeTown_PokemonCenter_1F_HyperTraining_5:
# 63 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

LavaridgeTown_PokemonCenter_1F_HyperTraining_9:
# 72 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 73 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done6
	goto LavaridgeTown_PokemonCenter_1F_HyperTraining_7

LavaridgeTown_PokemonCenter_1F_HyperTraining_10:
# 76 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 77 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done6
	goto LavaridgeTown_PokemonCenter_1F_HyperTraining_7

LavaridgeTown_PokemonCenter_1F_HyperTraining_11:
# 80 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 81 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done6
	goto LavaridgeTown_PokemonCenter_1F_HyperTraining_7

LavaridgeTown_PokemonCenter_1F_HyperTraining_12:
# 84 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 85 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done6
	goto LavaridgeTown_PokemonCenter_1F_HyperTraining_7

LavaridgeTown_PokemonCenter_1F_HyperTraining_13:
# 88 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 89 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done6
	goto LavaridgeTown_PokemonCenter_1F_HyperTraining_7

LavaridgeTown_PokemonCenter_1F_HyperTraining_14:
# 92 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 93 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done6
	goto LavaridgeTown_PokemonCenter_1F_HyperTraining_7

LavaridgeTown_PokemonCenter_1F_HyperTraining_15:
# 96 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_10
# 97 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_0:
# 54 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_1:
# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_2:
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_3:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "HP$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_4:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_5:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_6:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_7:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_8:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_9:
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_10:
# 96 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

LavaridgeTown_PokemonCenter_1F_HyperTraining_Text_11:
# 104 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
