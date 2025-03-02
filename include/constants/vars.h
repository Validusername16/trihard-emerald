#ifndef GUARD_CONSTANTS_VARS_H
#define GUARD_CONSTANTS_VARS_H

#define VARS_START 0x4000

// temporary vars
// The first 0x10 vars are are temporary--they are cleared every time a map is loaded.
#define VAR_TEMP_0                 0x4000
#define VAR_TEMP_1                 0x4001
#define VAR_TEMP_2                 0x4002
#define VAR_TEMP_3                 0x4003
#define VAR_TEMP_4                 0x4004
#define VAR_TEMP_5                 0x4005
#define VAR_TEMP_6                 0x4006
#define VAR_TEMP_7                 0x4007
#define VAR_TEMP_8                 0x4008
#define VAR_TEMP_9                 0x4009
#define VAR_TEMP_A                 0x400A
#define VAR_TEMP_B                 0x400B
#define VAR_TEMP_C                 0x400C
#define VAR_TEMP_D                 0x400D
#define VAR_TEMP_E                 0x400E
#define VAR_TEMP_F                 0x400F

// object gfx id vars
// These 0x10 vars are used to dynamically control a map object's sprite.
// For example, the rival's sprite id is dynamically set based on the player's gender.
// See VarGetEventObjectGraphicsId().
#define VAR_OBJ_GFX_ID_0           0x4010
#define VAR_OBJ_GFX_ID_1           0x4011
#define VAR_OBJ_GFX_ID_2           0x4012
#define VAR_OBJ_GFX_ID_3           0x4013
#define VAR_OBJ_GFX_ID_4           0x4014
#define VAR_OBJ_GFX_ID_5           0x4015
#define VAR_OBJ_GFX_ID_6           0x4016
#define VAR_OBJ_GFX_ID_7           0x4017
#define VAR_OBJ_GFX_ID_8           0x4018
#define VAR_OBJ_GFX_ID_9           0x4019
#define VAR_OBJ_GFX_ID_A           0x401A
#define VAR_OBJ_GFX_ID_B           0x401B
#define VAR_OBJ_GFX_ID_C           0x401C
#define VAR_OBJ_GFX_ID_D           0x401D
#define VAR_OBJ_GFX_ID_E           0x401E
#define VAR_OBJ_GFX_ID_F           0x401F

// general purpose vars
#define VAR_RECYCLE_GOODS                    0x4020
#define VAR_REPEL_STEP_COUNT                 0x4021
#define VAR_ICE_STEP_COUNT                   0x4022
#define VAR_STARTER_MON                      0x4023 // 0=Treecko, 1=Torchic, 2=Mudkip
#define VAR_MIRAGE_RND_H                     0x4024
#define VAR_MIRAGE_RND_L                     0x4025
#define VAR_SECRET_BASE_MAP                  0x4026
#define VAR_CYCLING_ROAD_RECORD_COLLISIONS   0x4027
#define VAR_CYCLING_ROAD_RECORD_TIME_L       0x4028
#define VAR_CYCLING_ROAD_RECORD_TIME_H       0x4029
#define VAR_HAPPINESS_STEP_COUNTER           0x402A
#define VAR_RED_BAR_HEALTH_STEP_COUNTER      0x402B
#define VAR_RESET_RTC_ENABLE                 0x402C
#define VAR_ENIGMA_BERRY_AVAILABLE           0x402D
#define VAR_0x402E                           0x402E // Unused Var

#define VAR_FRONTIER_MANIAC_FACILITY         0x402F
#define VAR_FRONTIER_GAMBLER_FACILITY        0x4030
#define VAR_FRONTIER_GAMBLER_SET_FACILITY_F  0x4031
#define VAR_FRONTIER_GAMBLER_AMOUNT_BET      0x4032
#define VAR_FRONTIER_GAMBLER_PLACED_BET_F    0x4033

#define VAR_DEOXYS_ROCK_STEP_COUNT           0x4034
#define VAR_DEOXYS_ROCK_LEVEL                0x4035
#define VAR_STORAGE_UNKNOWN                  0x4036
#define VAR_UNUSUAL_WEATHER_LOCATION         0x4037
#define VAR_UNUSUAL_WEATHER_STEP_COUNTER     0x4038
#define VAR_SHOULD_END_UNUSUAL_WEATHER       0x4039
#define VAR_FARAWAY_ISLAND_STEP_COUNTER      0x403A
#define VAR_REGICE_STEPS_1                   0x403B
#define VAR_REGICE_STEPS_2                   0x403C
#define VAR_REGICE_STEPS_3                   0x403D
#define VAR_ALTERING_CAVE_WILD_SET           0x403E
#define VAR_ALWAYS_ZERO_0x403F               0x403F // This var is read and written, but is always zero.
#define VAR_DAYS                             0x4040
#define VAR_FANCLUB_UNKNOWN_1                0x4041
#define VAR_FANCLUB_UNKNOWN_2                0x4042
#define VAR_DEPT_STORE_FLOOR                 0x4043
#define VAR_TRICK_HOUSE_LEVEL                0x4044
#define VAR_POKELOT_PRIZE_ITEM               0x4045
#define VAR_NATIONAL_DEX                     0x4046
#define VAR_SEEDOT_SIZE_RECORD               0x4047
#define VAR_ASH_GATHER_COUNT                 0x4048
#define VAR_BIRCH_STATE                      0x4049
#define VAR_CRUISE_STEP_COUNT                0x404A
#define VAR_POKELOT_RND1                     0x404B
#define VAR_POKELOT_RND2                     0x404C
#define VAR_POKELOT_PRIZE_PLACE              0x404D
#define VAR_UNUSED_0x404E                    0x404E // Unused Var
#define VAR_LOTAD_SIZE_RECORD                0x404F
#define VAR_0x4050                           0x4050
#define VAR_ROUTE102_ACCESSIBLE              0x4051
#define VAR_LOGAN_STATE                      0x4052 // Trihard Emerald
#define VAR_LAVARIDGE_RIVAL_STATE            0x4053
#define VAR_CURRENT_SECRET_BASE              0x4054
#define VAR_AQUA_GIRL_FRIENDSHIP             0x4055 // Trihard Emerald
#define VAR_AQUA_BOY_FRIENDSHIP              0x4056 // Trihard Emerald
#define VAR_PETALBURG_STATE                  0x4057
#define VAR_SLATEPORT_STATE                  0x4058
#define VAR_UNUSED_0x4059                    0x4059 // Unused Var
#define VAR_RUSTBORO_STATE                   0x405A
#define VAR_UNUSED_0x405B                    0x405B // Unused Var
#define VAR_UNUSED_0x405C                    0x405C // Unused Var
#define VAR_MOSSDEEP_STATE                   0x405D
#define VAR_RAYQUAZA_STATE                   0x405E
#define VAR_UNUSED_0x405F                    0x405F // Unused Var
#define VAR_ROUTE101_STATE                   0x4060
#define VAR_UNUSED_0x4061                    0x4061 // Unused Var
#define VAR_UNUSED_0x4062                    0x4062 // Unused Var
#define VAR_UNUSED_0x4063                    0x4063 // TE: Unused
#define VAR_UNUSED_0x4064                    0x4064 // Unused Var
#define VAR_UNUSED_0x4065                    0x4065 // Unused Var
#define VAR_UNUSED_0x4066                    0x4066 // Unused Var
#define VAR_UNUSED_0x4067                    0x4067 // Unused Var
#define VAR_UNUSED_0x4068                    0x4068 // Unused Var
#define VAR_ROUTE110_STATE                   0x4069
#define VAR_UNUSED_0x406A                    0x406A // Unused Var
#define VAR_UNUSED_0x406B                    0x406B // Unused Var
#define VAR_UNUSED_0x406C                    0x406C // Unused Var
#define VAR_UNUSED_0x406D                    0x406D // Unused Var
#define VAR_UNUSED_0x406E                    0x406E // Unused Var
#define VAR_ROUTE116_STATE                   0x406F
#define VAR_UNUSED_0x4070                    0x4070 // Unused Var
#define VAR_ROUTE118_STATE                   0x4071
#define VAR_ROUTE119_STATE                   0x4072
#define VAR_UNUSED_0x4073                    0x4073 // Unused Var
#define VAR_ROUTE121_STATE                   0x4074
#define VAR_UNUSED_0x4075                    0x4075 // Unused Var
#define VAR_UNUSED_0x4076                    0x4076 // Unused Var
#define VAR_UNUSED_0x4077                    0x4077 // Unused Var
#define VAR_UNUSED_0x4078                    0x4078 // Unused Var
#define VAR_UNUSED_0x4079                    0x4079 // Unused Var
#define VAR_UNUSED_0x407A                    0x407A // Unused Var
#define VAR_ROUTE128_STATE                   0x407B
#define VAR_UNUSED_0x407C                    0x407C // Unused Var
#define VAR_UNUSED_0x407D                    0x407D // Unused Var
#define VAR_UNUSED_0x407E                    0x407E // Unused Var
#define VAR_UNUSED_0x407F                    0x407F // Unused Var
#define VAR_SLEPT_DURING_WI_HEIST            0x4080 // TriHard
#define VAR_AQUA_HIDEOUT_STATE               0x4081 // TriHard Emerald
#define VAR_LITTLEROOT_HOUSES_STATE          0x4082
#define VAR_UNUSED_0x4083                    0x4083 // Unused Var
#define VAR_BIRCH_LAB_STATE                  0x4084
#define VAR_NUM_BADGES                       0x4085
#define VAR_LINK_CONTEST_ROOM_STATE          0x4086
#define VAR_CABLE_CLUB_STATE                 0x4087
#define VAR_CONTEST_LOCATION                 0x4088
#define VAR_SECRET_BASE_INITIALIZED          0x4089
#define VAR_CONTEST_PRIZE_PICKUP             0x408A
#define VAR_UNUSED_0x408B                    0x408B // Unused Var
#define VAR_LITTLEROOT_HOUSES_STATE_2        0x408C
#define VAR_LITTLEROOT_RIVAL_STATE           0x408D
#define VAR_BOARD_BRINEY_BOAT_ROUTE104_STATE 0x408E
#define VAR_LETTER_INTERNETMUSIC_LOVERS      0x408F // TriHard Emerald
#define VAR_BRINEY_HOUSE_STATE               0x4090
#define VAR_UNUSED_0x4091                    0x4091 // Unused Var
#define VAR_LITTLEROOT_INTRO_STATE           0x4092
#define VAR_MAUVILLE_GYM_STATE               0x4093
#define VAR_LILYCOVE_MUSEUM_2F_STATE         0x4094
#define VAR_LILYCOVE_FAN_CLUB_STATE          0x4095
#define VAR_BRINEY_LOCATION                  0x4096
#define VAR_INIT_SECRET_BASE       0x4097
#define VAR_PETALBURG_WOODS_STATE            0x4098
#define VAR_LILYCOVE_CONTEST_LOBBY_STATE     0x4099
#define VAR_RUSTURF_TUNNEL_STATE             0x409A
#define VAR_UNUSED_0x409B                    0x409B // Unused Var
#define VAR_ELITE_4_STATE                    0x409C
#define VAR_UNUSED_0x409D                    0x409D // Unused Var
#define VAR_MOSSDEEP_SPACE_CENTER_STATE_1    0x409E
#define VAR_MOSSDEEP_SPACE_CENTER_STATE_2    0x409F
#define VAR_SLATEPORT_HARBOR_STATE           0x40A0
#define VAR_UNUSED_0x40A1                    0x40A1 // Unused var
#define VAR_SEAFLOOR_CAVERN_STATE            0x40A2
#define VAR_CABLE_CAR_STATION_STATE          0x40A3
#define VAR_SAFARI_ZONE_STATE                0x40A4
#define VAR_TRICK_HOUSE_ENTRANCE_STATE_1     0x40A5
#define VAR_TRICK_HOUSE_ENTRANCE_STATE_2     0x40A6
#define VAR_TRICK_HOUSE_ENTRANCE_STATE_3     0x40A7
#define VAR_UNUSED_0x40A8                    0x40A8 // Unused Var
#define VAR_CYCLING_CHALLENGE_STATE          0x40A9
#define VAR_SLATEPORT_MUSEUM_1F_STATE        0x40AA
#define VAR_TRICK_HOUSE_PUZZLE_1_STATE       0x40AB
#define VAR_TRICK_HOUSE_PUZZLE_2_STATE       0x40AC
#define VAR_TRICK_HOUSE_PUZZLE_3_STATE       0x40AD
#define VAR_TRICK_HOUSE_PUZZLE_4_STATE       0x40AE
#define VAR_TRICK_HOUSE_PUZZLE_5_STATE       0x40AF
#define VAR_TRICK_HOUSE_PUZZLE_6_STATE       0x40B0
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE       0x40B1
#define VAR_TRICK_HOUSE_PUZZLE_8_STATE       0x40B2
#define VAR_WEATHER_INSTITUTE_STATE          0x40B3
#define VAR_PORTHOLE_STATE                   0x40B4
#define VAR_TRICK_HOUSE_STATE                0x40B5 // TODO: needs some further investigation
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE_2     0x40B6
#define VAR_SLATEPORT_FAN_CLUB_STATE         0x40B7
#define VAR_UNUSED_0x40B8                    0x40B8 // Unused Var
#define VAR_MT_PYRE_STATE                    0x40B9
#define VAR_NEW_MAUVILLE_STATE               0x40BA
#define VAR_UNUSED_0x40BB                    0x40BB // Unused Var
#define VAR_BRAVO_TRAINER_BATTLE_TOWER_ON    0x40BC
#define VAR_JAGGED_PASS_ASH_WEATHER          0x40BD
#define VAR_GLASS_WORKSHOP_STATE             0x40BE
#define VAR_METEOR_FALLS_STATE               0x40BF
#define VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE  0x40C0
#define VAR_TRICK_HOUSE_PRIZE_PICKUP         0x40C1
#define VAR_PACIFIDLOG_TM_RECEIVED_DAY       0x40C2
#define VAR_VICTORY_ROAD_1F_STATE            0x40C3
#define VAR_FOSSIL_RESURRECTION_STATE        0x40C4
#define VAR_WHICH_FOSSIL_REVIVED             0x40C5
#define VAR_STEVENS_HOUSE_STATE              0x40C6
#define VAR_OLDALE_STATE                     0x40C7
#define VAR_JAGGED_PASS_STATE                0x40C8
#define VAR_SCOTT_PETALBURG_ENCOUNTER        0x40C9
#define VAR_SKY_PILLAR_STATE                 0x40CA
#define VAR_ROUTE_111_STATE                  0x40CB
#define VAR_FOSSIL_MANIAC_STATE              0x40CC
#define VAR_FREE_POKEBALL_STATE              0x40CD // State of the free pokeball ladies
#define VAR_FRONTIER_BATTLE_MODE             0x40CE
#define VAR_FRONTIER_FACILITY                0x40CF
#define VAR_HAS_ENTERED_BATTLE_FRONTIER      0x40D0 // Var is used like a flag.
#define VAR_SCOTT_STATE                      0x40D1
#define VAR_SLATEPORT_MUSEUM_HEIST_STATE     0x40D2
#define VAR_0x40D3                           0x40D3
#define VAR_SS_TIDAL_SCOTT_STATE             0x40D4 // Always equal to FLAG_MET_SCOTT_ON_SS_TIDAL
#define VAR_ROAMER_POKEMON                   0x40D5 // 0 = Latias, 1 = Latios
#define VAR_TRAINER_HILL_IS_ACTIVE           0x40D6
#define VAR_SKY_PILLAR_RAQUAZA_CRY_DONE      0x40D7
#define VAR_SOOTOPOLIS_STATE                 0x40D8
#define VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT 0x40D9
#define VAR_0x40DA                           0x40DA
#define VAR_UNUSED_0x40DB                    0x40DB // Unused Var
#define VAR_UNUSED_0x40DC                    0x40DC // Unused Var
#define VAR_EVENT_PICHU_SLOT                 0x40DD
#define VAR_NEVER_READ_0x40DE                0x40DE // Var is written to, but never read
#define VAR_NEVER_READ_0x40DF                0x40DF // Var is written to, but never read
#define VAR_NEVER_READ_0x40E0                0x40E0 // Var is written to, but never read
#define VAR_NEVER_READ_0x40E1                0x40E1 // Var is written to, but never read
#define VAR_NEVER_READ_0x40E2                0x40E2 // Var is written to, but never read
#define VAR_NEVER_READ_0x40E3                0x40E3 // Var is written to, but never read
#define VAR_NEVER_READ_0x40E4                0x40E4 // var is written to, but never read
#define VAR_EGGMAN_BROTHER_COUNTER           0x40E5 // Unused Var
#define VAR_DAILY_SLOTS                      0x40E6
#define VAR_DAILY_WILDS                      0x40E7
#define VAR_DAILY_BLENDER                    0x40E8
#define VAR_DAILY_PLANTED_BERRIES            0x40E9
#define VAR_DAILY_PICKED_BERRIES             0x40EA
#define VAR_DAILY_ROULETTE                   0x40EB
#define VAR_SECRET_BASE_STEP_COUNTER         0x40EC // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LAST_ITEM_USED       0x40ED // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LOW_TV_FLAGS         0x40EE // Used by Secret Base TV programs
#define VAR_SECRET_BASE_HIGH_TV_FLAGS        0x40EF // Used by Secret Base TV programs
#define VAR_SECRET_BASE_IS_NOT_LOCAL         0x40F0 // Set to TRUE while in another player's secret base.
#define VAR_DAILY_BP                         0x40F1
#define VAR_WALLY_CALL_STEP_COUNTER          0x40F2
#define VAR_WINONA_CALL_STEP_COUNTER         0x40F3
#define VAR_ROXANNE_CALL_STEP_COUNTER        0x40F4
#define VAR_SCOTT_CALL_STEP_COUNTER          0x40F5
#define VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER 0x40F6
#define VAR_UNUSED_0x40F7                    0x40F7 // Unused Var
#define VAR_UNUSED_0x40F8                    0x40F8 // Unused Var
#define VAR_UNUSED_0x40F9                    0x40F9 // Unused Var
#define VAR_UNUSED_0x40FA                    0x40FA // Unused Var
#define VAR_UNUSED_0x40FB                    0x40FB // Unused Var
#define VAR_UNUSED_0x40FC                    0x40FC // Unused Var
#define VAR_UNUSED_0x40FD                    0x40FD // Unused Var
#define VAR_UNUSED_0x40FE                    0x40FE // Unused Var
#define VAR_UNUSED_0x40FF                    0x40FF // Unused Var

#define SPECIAL_VARS_START 0x8000
// special vars
// They are commonly used as parameters to commands, or return values from commands.
#define VAR_0x8000                    0x8000
#define VAR_0x8001                    0x8001
#define VAR_0x8002                    0x8002
#define VAR_0x8003                    0x8003
#define VAR_0x8004                    0x8004
#define VAR_0x8005                    0x8005
#define VAR_0x8006                    0x8006
#define VAR_0x8007                    0x8007
#define VAR_0x8008                    0x8008
#define VAR_0x8009                    0x8009
#define VAR_0x800A                    0x800A
#define VAR_0x800B                    0x800B
#define VAR_FACING                    0x800C
#define VAR_RESULT                    0x800D
#define VAR_ITEM_ID                   0x800E
#define VAR_LAST_TALKED               0x800F
#define VAR_CONTEST_RANK              0x8010
#define VAR_CONTEST_CATEGORY          0x8011
#define VAR_MON_BOX_ID                0x8012
#define VAR_MON_BOX_POS               0x8013
#define VAR_TEXTBOX_TYPE              0x8014
#define VAR_TRAINER_BATTLE_OPPONENT_A 0x8015 // Alias of gTrainerBattleOpponent_A
#define VAR_INTERACT_X                0x8016
#define VAR_INTERACT_Y                0x8017
#define VAR_LAST_WARP_ID              0x8018
#define VAR_DIALOG_TAIL_OFFSET        0x8019

#define THIS_EVENT                    0x800F //alias to VAR_LAST_TALKED

#endif // GUARD_CONSTANTS_VARS_H
