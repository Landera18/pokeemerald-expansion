# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"

# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"

# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 6
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"

# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"

# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"

# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"

# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"

# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"

# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"

# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"

# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"

# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"

# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"

# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"

# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"

# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"

# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"

# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"

# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"

# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"

# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"

# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"

# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"

# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"

# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"

# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"

# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"

# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"

# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"

# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"

# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Gift_Encounter, MSGBOX_NPC
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	giveegg SPECIES_MAGIKARP
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"

# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"

# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"

# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_CHARCOAL
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HARD_STONE
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_POISON_BARB
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAGNET
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_METAL_COAT
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"

# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"

# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"

# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"

# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"

# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"

# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"

# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"

# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"

# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"

# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"

# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"

# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"

# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"

# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"

# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"

# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"

# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"

# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"

# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"

# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"

# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"

# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"

# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"

# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"

# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and POKéMON combos are ahead?\p"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"

# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"

# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Gift_Encounter:
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh wow is that the Dynamo Badge?\p"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wattson is no joke with that fucking\n"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Raikou. Hey you might be better off with\n"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this EGG than me. I got no clue what's\n"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in it but hopefully its good.$"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"

# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hey don't speak to me if you\n"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "got no Dynamo Badge\p"
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "dumbass broke loser you can get some\n"
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of this when you have it$"
# 458 "data/maps/TrainerHill_Entrance/scripts.pory"

# 459 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 460 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"

TrainerHill_EventScript_SupriseGiftMan::
# 466 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 467 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
	checkflag FLAG_TRAINER_HILL_GIFT
# 471 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if TRUE, already
# 474 "data/maps/TrainerHill_Entrance/scripts.pory"
	checkflag FLAG_BADGE03_GET
# 475 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if FALSE, notYet
# 477 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_EventScript_SupriseGiftMan_Text_0
# 481 "data/maps/TrainerHill_Entrance/scripts.pory"
	random 69
# 482 "data/maps/TrainerHill_Entrance/scripts.pory"
	copyvar VAR_THILL_EGG, VAR_RESULT
# 485 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_THILL_EGG
# 488 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_EventScript_SupriseGiftMan_3
# 489 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_EventScript_SupriseGiftMan_4
# 490 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_EventScript_SupriseGiftMan_5
# 491 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 3, TrainerHill_EventScript_SupriseGiftMan_6
# 492 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_EventScript_SupriseGiftMan_7
# 493 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 5, TrainerHill_EventScript_SupriseGiftMan_8
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 6, TrainerHill_EventScript_SupriseGiftMan_9
# 495 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 7, TrainerHill_EventScript_SupriseGiftMan_10
# 496 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 8, TrainerHill_EventScript_SupriseGiftMan_11
# 497 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 9, TrainerHill_EventScript_SupriseGiftMan_12
# 498 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 10, TrainerHill_EventScript_SupriseGiftMan_13
# 499 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 11, TrainerHill_EventScript_SupriseGiftMan_14
# 500 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 12, TrainerHill_EventScript_SupriseGiftMan_15
# 501 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 13, TrainerHill_EventScript_SupriseGiftMan_16
# 502 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 14, TrainerHill_EventScript_SupriseGiftMan_17
# 503 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 15, TrainerHill_EventScript_SupriseGiftMan_18
# 504 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 16, TrainerHill_EventScript_SupriseGiftMan_19
# 505 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 17, TrainerHill_EventScript_SupriseGiftMan_20
# 506 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 18, TrainerHill_EventScript_SupriseGiftMan_21
# 507 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 19, TrainerHill_EventScript_SupriseGiftMan_22
# 508 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 20, TrainerHill_EventScript_SupriseGiftMan_23
# 509 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 21, TrainerHill_EventScript_SupriseGiftMan_24
# 510 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 22, TrainerHill_EventScript_SupriseGiftMan_25
# 511 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 23, TrainerHill_EventScript_SupriseGiftMan_26
# 512 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 24, TrainerHill_EventScript_SupriseGiftMan_27
# 513 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 25, TrainerHill_EventScript_SupriseGiftMan_28
# 514 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 26, TrainerHill_EventScript_SupriseGiftMan_29
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 27, TrainerHill_EventScript_SupriseGiftMan_30
# 516 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 28, TrainerHill_EventScript_SupriseGiftMan_31
# 517 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 29, TrainerHill_EventScript_SupriseGiftMan_32
# 518 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 30, TrainerHill_EventScript_SupriseGiftMan_33
# 519 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 31, TrainerHill_EventScript_SupriseGiftMan_34
# 520 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 32, TrainerHill_EventScript_SupriseGiftMan_35
# 521 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 33, TrainerHill_EventScript_SupriseGiftMan_36
# 522 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 34, TrainerHill_EventScript_SupriseGiftMan_37
# 523 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 35, TrainerHill_EventScript_SupriseGiftMan_38
# 524 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 36, TrainerHill_EventScript_SupriseGiftMan_39
# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 37, TrainerHill_EventScript_SupriseGiftMan_40
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 38, TrainerHill_EventScript_SupriseGiftMan_41
# 527 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 39, TrainerHill_EventScript_SupriseGiftMan_42
# 528 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 40, TrainerHill_EventScript_SupriseGiftMan_43
# 529 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 41, TrainerHill_EventScript_SupriseGiftMan_44
# 530 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 42, TrainerHill_EventScript_SupriseGiftMan_45
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 43, TrainerHill_EventScript_SupriseGiftMan_46
# 532 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 44, TrainerHill_EventScript_SupriseGiftMan_47
# 533 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 45, TrainerHill_EventScript_SupriseGiftMan_48
# 534 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 46, TrainerHill_EventScript_SupriseGiftMan_49
# 535 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 47, TrainerHill_EventScript_SupriseGiftMan_50
# 536 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 48, TrainerHill_EventScript_SupriseGiftMan_51
# 537 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 49, TrainerHill_EventScript_SupriseGiftMan_52
# 538 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 50, TrainerHill_EventScript_SupriseGiftMan_53
# 539 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 51, TrainerHill_EventScript_SupriseGiftMan_54
# 540 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 52, TrainerHill_EventScript_SupriseGiftMan_55
# 541 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 53, TrainerHill_EventScript_SupriseGiftMan_56
# 542 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 54, TrainerHill_EventScript_SupriseGiftMan_57
# 543 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 55, TrainerHill_EventScript_SupriseGiftMan_58
# 544 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 56, TrainerHill_EventScript_SupriseGiftMan_59
# 545 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 57, TrainerHill_EventScript_SupriseGiftMan_60
# 546 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 58, TrainerHill_EventScript_SupriseGiftMan_61
# 547 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 59, TrainerHill_EventScript_SupriseGiftMan_62
# 548 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 60, TrainerHill_EventScript_SupriseGiftMan_63
# 549 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 61, TrainerHill_EventScript_SupriseGiftMan_64
# 550 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 62, TrainerHill_EventScript_SupriseGiftMan_65
# 551 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 63, TrainerHill_EventScript_SupriseGiftMan_66
# 552 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 64, TrainerHill_EventScript_SupriseGiftMan_67
# 553 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 65, TrainerHill_EventScript_SupriseGiftMan_68
# 554 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 66, TrainerHill_EventScript_SupriseGiftMan_69
# 555 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 67, TrainerHill_EventScript_SupriseGiftMan_70
# 556 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 68, TrainerHill_EventScript_SupriseGiftMan_71
TrainerHill_EventScript_SupriseGiftMan_1:
# 559 "data/maps/TrainerHill_Entrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 560 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_EventScript_SupriseGiftMan_Text_1
# 561 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitfanfare
# 562 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_EventScript_SupriseGiftMan_Text_2, MSGBOX_YESNO
# 563 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrainerHill_EventScript_SupriseGiftMan_73
TrainerHill_EventScript_SupriseGiftMan_72:
# 567 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_TRAINER_HILL_GIFT
# 568 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_EventScript_SupriseGiftMan_Text_3
# 569 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 570 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 572 "data/maps/TrainerHill_Entrance/scripts.pory"
notYet:
# 573 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_EventScript_SupriseGiftMan_Text_4
# 574 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 575 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 577 "data/maps/TrainerHill_Entrance/scripts.pory"
already:
# 578 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_EventScript_SupriseGiftMan_Text_5
# 579 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
	end

TrainerHill_EventScript_SupriseGiftMan_3:
# 488 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_4:
# 489 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_5:
# 490 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_6:
# 491 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_7:
# 492 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_8:
# 493 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TOTODILE, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_9:
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TREECKO, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_10:
# 495 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TORCHIC, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_11:
# 496 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_MUDKIP, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_12:
# 497 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TURTWIG, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_13:
# 498 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_14:
# 499 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_PIPLUP, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_15:
# 500 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SNIVY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_16:
# 501 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TEPIG, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_17:
# 502 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_18:
# 503 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CHESPIN, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_19:
# 504 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_20:
# 505 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_FROAKIE, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_21:
# 506 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_ROWLET, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_22:
# 507 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_LITTEN, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_23:
# 508 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_POPPLIO, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_24:
# 509 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_GROOKEY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_25:
# 510 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_26:
# 511 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SOBBLE, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_27:
# 512 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_28:
# 513 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_FUECOCO, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_29:
# 514 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_QUAXLY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_30:
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_DRATINI, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_31:
# 516 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_LARVITAR, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_32:
# 517 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_BAGON, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_33:
# 518 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_BELDUM, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_34:
# 519 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_GIBLE, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_35:
# 520 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_DEINO, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_36:
# 521 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_GOOMY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_37:
# 522 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_JANGMO_O, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_38:
# 523 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_DREEPY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_39:
# 524 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_FRIGIBAX, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_40:
# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TOGEPI, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_41:
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SMOOCHUM, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_42:
# 527 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_ELEKID, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_43:
# 528 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_MAGBY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_44:
# 529 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_AZURILL, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_45:
# 530 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_WYNAUT, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_46:
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_MUNCHLAX, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_47:
# 532 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_RIOLU, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_48:
# 533 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_LARVESTA, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_49:
# 534 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SNOM, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_50:
# 535 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_DARUMAKA, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_51:
# 536 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_DARUMAKA_GALAR, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_52:
# 537 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SCYTHER, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_53:
# 538 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_KLEFKI, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_54:
# 539 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TAUROS, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_55:
# 540 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_PORYGON, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_56:
# 541 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_DURALUDON, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_57:
# 542 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CHARCADET, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_58:
# 543 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_COSMOG, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_59:
# 544 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_60:
# 545 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_HERACROSS, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_61:
# 546 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_TYRUNT, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_62:
# 547 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_AMAURA, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_63:
# 548 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_KANGASKHAN, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_64:
# 549 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_BUNEARY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_65:
# 550 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_LAPRAS, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_66:
# 551 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_WOOPER, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_67:
# 552 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_CHARCADET, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_68:
# 553 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_GASTLY, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_69:
# 554 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_MAREEP, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_70:
# 555 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SNORUNT, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_71:
# 556 "data/maps/TrainerHill_Entrance/scripts.pory"
	givemon SPECIES_SWABLU, 5
	goto TrainerHill_EventScript_SupriseGiftMan_1

TrainerHill_EventScript_SupriseGiftMan_73:
# 564 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 565 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto TrainerHill_EventScript_SupriseGiftMan_72


TrainerHill_EventScript_SupriseGiftMan_Text_0:
# 477 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You've got spark, kid!\n"
	.string "As a reward, take this Pokemon.\p$"

TrainerHill_EventScript_SupriseGiftMan_Text_1:
# 560 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Received a Pokemon!\p$"

TrainerHill_EventScript_SupriseGiftMan_Text_2:
# 562 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Give it a nickname?$"

TrainerHill_EventScript_SupriseGiftMan_Text_3:
# 568 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Raise it well!$"

TrainerHill_EventScript_SupriseGiftMan_Text_4:
# 573 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Come back after you've earned the Dynamo Badge.$"

TrainerHill_EventScript_SupriseGiftMan_Text_5:
# 578 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I've already given you a Pokemon. Train hard!$"
