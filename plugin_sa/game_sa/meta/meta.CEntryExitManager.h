/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CEntryExitManager::WeAreInInteriorTransition)
    static int address;
    static int global_address;
    static const int id = 0x43E400;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E400, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x60F879, GAME_10US_COMPACT, H_CALL, 0x60EA90, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::AddEntryExitToStack)
    static int address;
    static int global_address;
    static const int id = 0x43E410;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E410, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4406E4, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x47513C, GAME_10US_COMPACT, H_CALL, 0x474900, 1>;
    using def_t = void(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExitManager::SetAreaCodeForVisibleObjects)
    static int address;
    static int global_address;
    static const int id = 0x43ECF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43ECF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4405E8, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::ResetAreaCodeForVisibleObjects)
    static int address;
    static int global_address;
    static const int id = 0x43ED80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43ED80, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4407A7, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440CEC, GAME_10US_COMPACT, H_CALL, 0x440C40, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::GetEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43EF00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43EF00, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x471568, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x4750F5, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x47587B, GAME_10US_COMPACT, H_CALL, 0x474900, 2>;
    using def_t = CEntryExit *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CEntryExitManager::SetEntryExitFlag)
    static int address;
    static int global_address;
    static const int id = 0x43EF20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43EF20, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43F9BF, GAME_10US_COMPACT, H_CALL, 0x43F9B0, 1,
        0x478D96, GAME_10US_COMPACT, H_CALL, 0x478000, 1>;
    using def_t = void(char const *, unsigned int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,unsigned int,bool>, 0,1,2>;
META_END

META_BEGIN(CEntryExitManager::SetEntryExitFlagWithIndex)
    static int address;
    static int global_address;
    static const int id = 0x43EF90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43EF90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47957D, GAME_10US_COMPACT, H_CALL, 0x478000, 1>;
    using def_t = void(int, unsigned int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,unsigned int,bool>, 0,1,2>;
META_END

META_BEGIN(CEntryExitManager::GetEntryExitIndex)
    static int address;
    static int global_address;
    static const int id = 0x43EFD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43EFD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43F05A, GAME_10US_COMPACT, H_CALL, 0x43F050, 1,
        0x43F0E7, GAME_10US_COMPACT, H_CALL, 0x43F0A0, 1,
        0x43FCC2, GAME_10US_COMPACT, H_CALL, 0x43FA00, 1,
        0x43FEA9, GAME_10US_COMPACT, H_CALL, 0x43FEA0, 1>;
    using def_t = int(char const *, unsigned short, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,unsigned short,unsigned short>, 0,1,2>;
META_END

META_BEGIN(CEntryExitManager::LinkEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43F050;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F050, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExitManager::PostEntryExitsCreation)
    static int address;
    static int global_address;
    static const int id = 0x43F0A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F0A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BA1B7, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::GetPositionRelativeToOutsideWorld)
    static int address;
    static int global_address;
    static const int id = 0x43F150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F150, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x56E426, GAME_10US_COMPACT, H_CALL, 0x56E400, 1,
        0x571E04, GAME_10US_COMPACT, H_CALL, 0x571D90, 1,
        0x571F97, GAME_10US_COMPACT, H_CALL, 0x571F20, 1>;
    using def_t = void(CVector &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector &>, 0>;
META_END

META_BEGIN(CEntryExitManager::EnableBurglaryHouses)
    static int address;
    static int global_address;
    static const int id = 0x43F180;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F180, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440CDB, GAME_10US_COMPACT, H_CALL, 0x440C40, 1,
        0x47B0FA, GAME_10US_COMPACT, H_CALL, 0x47A760, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CEntryExitManager::FindNearestEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43F4B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F4B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x471562, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x4750EF, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x475875, GAME_10US_COMPACT, H_CALL, 0x474900, 2,
        0x479564, GAME_10US_COMPACT, H_CALL, 0x478000, 1,
        0x533CCB, GAME_10US_COMPACT, H_CALL, 0x533BF0, 1>;
    using def_t = int(CVector2D const &, float, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector2D const &,float,int>, 0,1,2>;
META_END

META_BEGIN(CEntryExitManager::FindNearestDoor)
    static int address;
    static int global_address;
    static const int id = 0x43F630;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F630, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440179, GAME_10US_COMPACT, H_CALL, 0x43FFD0, 1,
        0x67124D, GAME_10US_COMPACT, H_CALL, 0x671210, 1>;
    using def_t = CEntity *(CEntryExit const &, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntryExit const &,float>, 0,1>;
META_END

META_BEGIN(CEntryExitManager::Init)
    static int address;
    static int global_address;
    static const int id = 0x43F880;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F880, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BF92D, GAME_10US_COMPACT, H_CALL, 0x5BF840, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::SetEnabledByName)
    static int address;
    static int global_address;
    static const int id = 0x43F9B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F9B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4730CF, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x4730E5, GAME_10US_COMPACT, H_CALL, 0x472310, 2>;
    using def_t = void(char const *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,bool>, 0,1>;
META_END

META_BEGIN(CEntryExitManager::SetEnabled)
    static int address;
    static int global_address;
    static const int id = 0x43F9D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F9D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,bool>, 0,1>;
META_END

META_BEGIN(CEntryExitManager::AddOne)
    static int address;
    static int global_address;
    static const int id = 0x43FA00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FA00, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x533A8D, GAME_10US_COMPACT, H_CALL, 0x533790, 1,
        0x5B812D, GAME_10US_COMPACT, H_CALL, 0x5B8030, 1>;
    using def_t = int(float, float, float, float, float, float, int, float, float, float, float, int, int, int, int, int, int, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,int,float,float,float,float,int,int,int,int,int,int,char const *>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17>;
META_END

META_BEGIN(CEntryExitManager::DeleteOne)
    static int address;
    static int global_address;
    static const int id = 0x43FD50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FD50, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440A60, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x533D0C, GAME_10US_COMPACT, H_CALL, 0x533BF0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CEntryExitManager::GotoEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43FDB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FDB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43FECB, GAME_10US_COMPACT, H_JUMP, 0x43FEA0, 1,
        0x43FEDB, GAME_10US_COMPACT, H_JUMP, 0x43FEA0, 2,
        0x43FF4B, GAME_10US_COMPACT, H_CALL, 0x43FEF0, 1,
        0x43FFBC, GAME_10US_COMPACT, H_CALL, 0x43FF60, 1>;
    using def_t = void(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExitManager::GotoEntryExitVC)
    static int address;
    static int global_address;
    static const int id = 0x43FEA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FEA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CEntryExitManager::GotoNextEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43FEF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FEF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::GotoPreviousEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43FF60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FF60, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x440B90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x440B90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C9C1, GAME_10US_COMPACT, H_CALL, 0x53C900, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::ShutdownForRestart)
    static int address;
    static int global_address;
    static const int id = 0x440C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x440C40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C64D, GAME_10US_COMPACT, H_CALL, 0x53C550, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::Update)
    static int address;
    static int global_address;
    static const int id = 0x440D10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x440D10, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C0BC, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::Load)
    static int address;
    static int global_address;
    static const int id = 0x5D55C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D55C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D19C0, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEntryExitManager::Save)
    static int address;
    static int global_address;
    static const int id = 0x5D5970;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D5970, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D1598, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
