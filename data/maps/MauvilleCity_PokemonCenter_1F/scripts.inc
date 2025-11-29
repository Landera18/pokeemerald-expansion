# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\n"
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "things!\p"
# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\n"
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in DEWFORD\l"
# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\n"
# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON CENTER.\p"
# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"

MauvilleCity_PokemonCenter_1F_HyperTraining::
# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_HyperTraining_Text_0
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP, 1
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_HyperTraining_2
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MauvilleCity_PokemonCenter_1F_HyperTraining_5
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_HyperTraining_Text_2
# 72 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_3, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_4, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_5, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_6, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_7, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_8, MauvilleCity_PokemonCenter_1F_HyperTraining_Text_9
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 75 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 0, MauvilleCity_PokemonCenter_1F_HyperTraining_9
# 80 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 1, MauvilleCity_PokemonCenter_1F_HyperTraining_10
# 84 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 2, MauvilleCity_PokemonCenter_1F_HyperTraining_11
# 88 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 3, MauvilleCity_PokemonCenter_1F_HyperTraining_12
# 92 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 4, MauvilleCity_PokemonCenter_1F_HyperTraining_13
# 96 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 5, MauvilleCity_PokemonCenter_1F_HyperTraining_14
# 100 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case 6, MauvilleCity_PokemonCenter_1F_HyperTraining_15
MauvilleCity_PokemonCenter_1F_HyperTraining_7:
# 107 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
HyperTrain_Done4:
# 108 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 109 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_HyperTraining_Text_11
# 110 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

MauvilleCity_PokemonCenter_1F_HyperTraining_2:
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_HyperTraining_Text_1
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end

MauvilleCity_PokemonCenter_1F_HyperTraining_5:
# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

MauvilleCity_PokemonCenter_1F_HyperTraining_9:
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done4
	goto MauvilleCity_PokemonCenter_1F_HyperTraining_7

MauvilleCity_PokemonCenter_1F_HyperTraining_10:
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 82 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done4
	goto MauvilleCity_PokemonCenter_1F_HyperTraining_7

MauvilleCity_PokemonCenter_1F_HyperTraining_11:
# 85 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 86 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done4
	goto MauvilleCity_PokemonCenter_1F_HyperTraining_7

MauvilleCity_PokemonCenter_1F_HyperTraining_12:
# 89 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 90 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done4
	goto MauvilleCity_PokemonCenter_1F_HyperTraining_7

MauvilleCity_PokemonCenter_1F_HyperTraining_13:
# 93 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 94 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done4
	goto MauvilleCity_PokemonCenter_1F_HyperTraining_7

MauvilleCity_PokemonCenter_1F_HyperTraining_14:
# 97 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 98 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto HyperTrain_Done4
	goto MauvilleCity_PokemonCenter_1F_HyperTraining_7

MauvilleCity_PokemonCenter_1F_HyperTraining_15:
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_HyperTraining_Text_10
# 102 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


MauvilleCity_PokemonCenter_1F_HyperTraining_Text_0:
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "For one BOTTLE CAP, I can hyper train\n"
	.string "one of your POKéMON. Would you like to\l"
	.string "hyper train a POKéMON?$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_1:
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "You don't have any Bottle Caps.$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_2:
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to hyper\n"
	.string "train?$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_3:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "HP$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_4:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "ATTACK$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_5:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "DEFENSE$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_6:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "SP. ATK$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_7:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "SP. DEF$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_8:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "SPEED$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_9:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_10:
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Maybe another time then.$"

MauvilleCity_PokemonCenter_1F_HyperTraining_Text_11:
# 109 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Your POKéMON has been hyper trained!\n"
	.string "Its base stat has been maximized.$"
