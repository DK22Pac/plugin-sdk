/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarEnterExit::ComputeDoorFlag)
    static int address;
    static int global_address;
    static const int id = 0x64E550;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64E550, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63AB9F, GAME_10US_COMPACT, H_CALL, 0x63AB90, 1,
        0x63ABD0, GAME_10US_COMPACT, H_CALL, 0x63AB90, 2,
        0x63BA0F, GAME_10US_COMPACT, H_CALL, 0x63BA00, 1,
        0x64C266, GAME_10US_COMPACT, H_CALL, 0x64C220, 1>;
    using def_t = int(CVehicle const *, int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int,bool>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::ComputeOppositeDoorFlag)
    static int address;
    static int global_address;
    static const int id = 0x64E610;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64E610, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x647830, GAME_10US_COMPACT, H_CALL, 0x6477F0, 1>;
    using def_t = int(CVehicle const *, int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int,bool>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::GetPositionToOpenCarDoor)
    static int address;
    static int global_address;
    static const int id = 0x64E740;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64E740, 0, 0, 0, 0, 0>;
    // total references count: 10us (26), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5E0987, GAME_10US_COMPACT, H_CALL, 0x5E0820, 1,
        0x5E0A0B, GAME_10US_COMPACT, H_CALL, 0x5E0820, 2,
        0x63ACFA, GAME_10US_COMPACT, H_CALL, 0x63ACC0, 1,
        0x63D684, GAME_10US_COMPACT, H_CALL, 0x63D610, 1,
        0x645C83, GAME_10US_COMPACT, H_CALL, 0x645C70, 1,
        0x646F56, GAME_10US_COMPACT, H_CALL, 0x646F40, 1,
        0x64A8C2, GAME_10US_COMPACT, H_CALL, 0x64A820, 1,
        0x64A90D, GAME_10US_COMPACT, H_CALL, 0x64A820, 2,
        0x64AA11, GAME_10US_COMPACT, H_CALL, 0x64A820, 3,
        0x64AB8E, GAME_10US_COMPACT, H_CALL, 0x64A820, 4,
        0x64AC15, GAME_10US_COMPACT, H_CALL, 0x64AC00, 1,
        0x64D3B1, GAME_10US_COMPACT, H_CALL, 0x64D2B0, 1,
        0x64D4A7, GAME_10US_COMPACT, H_CALL, 0x64D440, 1,
        0x64D64F, GAME_10US_COMPACT, H_CALL, 0x64D440, 2,
        0x650662, GAME_10US_COMPACT, H_CALL, 0x6504C0, 1,
        0x650C80, GAME_10US_COMPACT, H_CALL, 0x650BB0, 1,
        0x650D25, GAME_10US_COMPACT, H_CALL, 0x650BB0, 2,
        0x650DB9, GAME_10US_COMPACT, H_CALL, 0x650BB0, 3,
        0x650E8A, GAME_10US_COMPACT, H_CALL, 0x650BB0, 4,
        0x650F46, GAME_10US_COMPACT, H_CALL, 0x650BB0, 5,
        0x651091, GAME_10US_COMPACT, H_CALL, 0x650BB0, 6,
        0x652923, GAME_10US_COMPACT, H_CALL, 0x6528F0, 1,
        0x652930, GAME_10US_COMPACT, H_CALL, 0x6528F0, 2,
        0x652AA2, GAME_10US_COMPACT, H_CALL, 0x6528F0, 3,
        0x666539, GAME_10US_COMPACT, H_CALL, 0x666360, 1,
        0x66654F, GAME_10US_COMPACT, H_CALL, 0x666360, 2>;
    using def_t = CVector *(CVector *, CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector *,CVehicle const *,int>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::IsCarDoorInUse)
    static int address;
    static int global_address;
    static const int id = 0x64EC90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EC90, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63EC24, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x646CA5, GAME_10US_COMPACT, H_CALL, 0x646C90, 1>;
    using def_t = bool(CVehicle const *, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int,int>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::IsCarDoorReady)
    static int address;
    static int global_address;
    static const int id = 0x64ED90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64ED90, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63ECBC, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F22B, GAME_10US_COMPACT, H_CALL, 0x63E990, 2>;
    using def_t = bool(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::CarHasDoorToOpen)
    static int address;
    static int global_address;
    static const int id = 0x64EDD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EDD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63AC47, GAME_10US_COMPACT, H_CALL, 0x63AC10, 1,
        0x63FA3A, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FAC5, GAME_10US_COMPACT, H_CALL, 0x63F970, 2,
        0x64DCEB, GAME_10US_COMPACT, H_CALL, 0x64DC70, 1>;
    using def_t = bool(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::CarHasDoorToClose)
    static int address;
    static int global_address;
    static const int id = 0x64EE10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EE10, 0, 0, 0, 0, 0>;
    // total references count: 10us (8), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63A7EA, GAME_10US_COMPACT, H_CALL, 0x63A730, 1,
        0x63EF2F, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F475, GAME_10US_COMPACT, H_CALL, 0x63E990, 2,
        0x63F4B1, GAME_10US_COMPACT, H_CALL, 0x63E990, 3,
        0x63FCBD, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x641D93, GAME_10US_COMPACT, H_CALL, 0x6419F0, 1,
        0x641DC9, GAME_10US_COMPACT, H_CALL, 0x6419F0, 2,
        0x642C1F, GAME_10US_COMPACT, H_CALL, 0x642AE0, 1>;
    using def_t = bool(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::CarHasOpenableDoor)
    static int address;
    static int global_address;
    static const int id = 0x64EE50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EE50, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63AC5C, GAME_10US_COMPACT, H_CALL, 0x63AC10, 1,
        0x63FA4F, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FADA, GAME_10US_COMPACT, H_CALL, 0x63F970, 2>;
    using def_t = bool(CVehicle const *, int, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int,CPed const *>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::CarHasPartiallyOpenDoor)
    static int address;
    static int global_address;
    static const int id = 0x64EE70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EE70, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63ECD0, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F23F, GAME_10US_COMPACT, H_CALL, 0x63E990, 2>;
    using def_t = bool(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::IsVehicleHealthy)
    static int address;
    static int global_address;
    static const int id = 0x64EEC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EEC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6268C3, GAME_10US_COMPACT, H_CALL, 0x626260, 1,
        0x63A9E2, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63D5DB, GAME_10US_COMPACT, H_CALL, 0x63D5C0, 1,
        0x63EA82, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F69A, GAME_10US_COMPACT, H_CALL, 0x63E990, 2,
        0x643710, GAME_10US_COMPACT, H_CALL, 0x643700, 1,
        0x643AA4, GAME_10US_COMPACT, H_CALL, 0x643A60, 1>;
    using def_t = bool(CVehicle const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *>, 0>;
META_END

META_BEGIN(CCarEnterExit::IsPedHealthy)
    static int address;
    static int global_address;
    static const int id = 0x64EEE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EEE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63A9F3, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63D5E8, GAME_10US_COMPACT, H_CALL, 0x63D5C0, 1,
        0x63F6AB, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x64371D, GAME_10US_COMPACT, H_CALL, 0x643700, 1,
        0x643AB5, GAME_10US_COMPACT, H_CALL, 0x643A60, 1>;
    using def_t = bool(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CCarEnterExit::IsCarQuickJackPossible)
    static int address;
    static int global_address;
    static const int id = 0x64EF00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EF00, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63FA8D, GAME_10US_COMPACT, H_CALL, 0x63F970, 1>;
    using def_t = bool(CVehicle const *, int, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int,CPed const *>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::IsCarSlowJackRequired)
    static int address;
    static int global_address;
    static const int id = 0x64EF70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64EF70, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63EE6A, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63FB36, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FE3C, GAME_10US_COMPACT, H_CALL, 0x63F970, 2>;
    using def_t = bool(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::ComputeSlowJackedPed)
    static int address;
    static int global_address;
    static const int id = 0x64F070;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F070, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63A9AF, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63EE82, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63FB4E, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FE54, GAME_10US_COMPACT, H_CALL, 0x63F970, 2>;
    using def_t = int(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::ComputeTargetDoorToExit)
    static int address;
    static int global_address;
    static const int id = 0x64F110;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F110, 0, 0, 0, 0, 0>;
    // total references count: 10us (20), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47A8D5, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x5F7B86, GAME_10US_COMPACT, H_CALL, 0x5F7AD0, 1,
        0x6265AA, GAME_10US_COMPACT, H_CALL, 0x626260, 1,
        0x62668C, GAME_10US_COMPACT, H_CALL, 0x626260, 2,
        0x626834, GAME_10US_COMPACT, H_CALL, 0x626260, 3,
        0x62698C, GAME_10US_COMPACT, H_CALL, 0x626260, 4,
        0x62B6E7, GAME_10US_COMPACT, H_CALL, 0x62B490, 1,
        0x630650, GAME_10US_COMPACT, H_CALL, 0x630600, 1,
        0x63BAC3, GAME_10US_COMPACT, H_CALL, 0x63BAB0, 1,
        0x63C6B4, GAME_10US_COMPACT, H_CALL, 0x63C670, 1,
        0x63D3BD, GAME_10US_COMPACT, H_CALL, 0x63D240, 1,
        0x63F59C, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F5DA, GAME_10US_COMPACT, H_CALL, 0x63E990, 2,
        0x63F76D, GAME_10US_COMPACT, H_CALL, 0x63E990, 3,
        0x63F7A9, GAME_10US_COMPACT, H_CALL, 0x63E990, 4,
        0x642BFD, GAME_10US_COMPACT, H_CALL, 0x642AE0, 1,
        0x643DC7, GAME_10US_COMPACT, H_CALL, 0x643D00, 1,
        0x64B774, GAME_10US_COMPACT, H_CALL, 0x64B5D0, 1,
        0x64BA34, GAME_10US_COMPACT, H_CALL, 0x64B950, 1,
        0x64F58D, GAME_10US_COMPACT, H_CALL, 0x64F540, 1>;
    using def_t = int(CVehicle const *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,CPed const *>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::ComputeTargetDoorToEnterAsPassenger)
    static int address;
    static int global_address;
    static const int id = 0x64F190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F190, 0, 0, 0, 0, 0>;
    // total references count: 10us (8), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x46DB8C, GAME_10US_COMPACT, H_CALL, 0x46D050, 1,
        0x47D96C, GAME_10US_COMPACT, H_CALL, 0x47D210, 1,
        0x489E17, GAME_10US_COMPACT, H_CALL, 0x489500, 1,
        0x4903AB, GAME_10US_COMPACT, H_CALL, 0x48EAA0, 1,
        0x5F70F5, GAME_10US_COMPACT, H_CALL, 0x5F6FC0, 1,
        0x613B97, GAME_10US_COMPACT, H_CALL, 0x613A00, 1,
        0x640956, GAME_10US_COMPACT, H_CALL, 0x6408D0, 1,
        0x6E29F8, GAME_10US_COMPACT, H_CALL, 0x6E2900, 1>;
    using def_t = signed int(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::ComputePassengerIndexFromCarDoor)
    static int address;
    static int global_address;
    static const int id = 0x64F1E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F1E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (9), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63B254, GAME_10US_COMPACT, H_CALL, 0x63B1A0, 1,
        0x63D54A, GAME_10US_COMPACT, H_CALL, 0x63D420, 1,
        0x63EF10, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63FC9E, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x647854, GAME_10US_COMPACT, H_CALL, 0x6477F0, 1,
        0x64B6B7, GAME_10US_COMPACT, H_CALL, 0x64B5D0, 1,
        0x64D609, GAME_10US_COMPACT, H_CALL, 0x64D440, 1,
        0x64E0D4, GAME_10US_COMPACT, H_CALL, 0x64E060, 1,
        0x650356, GAME_10US_COMPACT, H_CALL, 0x650280, 1>;
    using def_t = signed int(CVehicle const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::IsPlayerToQuitCarEnter)
    static int address;
    static int global_address;
    static const int id = 0x64F240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F240, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63A8E6, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63AA63, GAME_10US_COMPACT, H_CALL, 0x63A890, 2,
        0x64E3D4, GAME_10US_COMPACT, H_CALL, 0x64E3B0, 1,
        0x6543BE, GAME_10US_COMPACT, H_CALL, 0x654370, 1>;
    using def_t = bool(CPed const *, CVehicle const *, int, CTask *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *,CVehicle const *,int,CTask *>, 0,1,2,3>;
META_END

META_BEGIN(CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar)
    static int address;
    static int global_address;
    static const int id = 0x64F540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F540, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63F2ED, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F3AF, GAME_10US_COMPACT, H_CALL, 0x63E990, 2>;
    using def_t = void(CVehicle const *, CPed const *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,CPed const *,CPed const *>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::MakeUndraggedDriverPedLeaveCar)
    static int address;
    static int global_address;
    static const int id = 0x64F600;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F600, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CVehicle const *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,CPed const *>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::RemoveCarSitAnim)
    static int address;
    static int global_address;
    static const int id = 0x64F680;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F680, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4AFFF0, GAME_10US_COMPACT, H_CALL, 0x4AFF60, 1,
        0x647D6E, GAME_10US_COMPACT, H_CALL, 0x647D10, 1,
        0x64BDEA, GAME_10US_COMPACT, H_CALL, 0x64BDE0, 1,
        0x64C19A, GAME_10US_COMPACT, H_CALL, 0x64C190, 1,
        0x64CCEA, GAME_10US_COMPACT, H_CALL, 0x64CCE0, 1,
        0x64DEE6, GAME_10US_COMPACT, H_CALL, 0x64DD60, 1>;
    using def_t = void(CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *>, 0>;
META_END

META_BEGIN(CCarEnterExit::RemoveGetInAnims)
    static int address;
    static int global_address;
    static const int id = 0x64F6E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F6E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x64B89F, GAME_10US_COMPACT, H_CALL, 0x64B5D0, 1,
        0x64BC8B, GAME_10US_COMPACT, H_CALL, 0x64B950, 1,
        0x650137, GAME_10US_COMPACT, H_CALL, 0x650130, 1>;
    using def_t = void(CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *>, 0>;
META_END

META_BEGIN(CCarEnterExit::AddInCarAnim)
    static int address;
    static int global_address;
    static const int id = 0x64F720;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F720, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x64B8AB, GAME_10US_COMPACT, H_CALL, 0x64B5D0, 1,
        0x64BC97, GAME_10US_COMPACT, H_CALL, 0x64B950, 1>;
    using def_t = void(CVehicle const *, CPed *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,CPed *,bool>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle)
    static int address;
    static int global_address;
    static const int id = 0x64F860;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x64F860, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5DEBB5, GAME_10US_COMPACT, H_JUMP, 0x5DEBB0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarEnterExit::QuitEnteringCar)
    static int address;
    static int global_address;
    static const int id = 0x650130;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x650130, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPed *, CVehicle *, int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *,CVehicle *,int,bool>, 0,1,2,3>;
META_END

META_BEGIN(CCarEnterExit::SetPedInCarDirect)
    static int address;
    static int global_address;
    static const int id = 0x650280;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x650280, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x613BA7, GAME_10US_COMPACT, H_CALL, 0x613A00, 1,
        0x6E29DB, GAME_10US_COMPACT, H_CALL, 0x6E2900, 1,
        0x6E2A02, GAME_10US_COMPACT, H_CALL, 0x6E2900, 2>;
    using def_t = void(CPed *, CVehicle *, int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *,CVehicle *,int,bool>, 0,1,2,3>;
META_END

META_BEGIN(CCarEnterExit::IsRoomForPedToLeaveCar)
    static int address;
    static int global_address;
    static const int id = 0x6504C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6504C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (27), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x62669F, GAME_10US_COMPACT, H_CALL, 0x626260, 1,
        0x626847, GAME_10US_COMPACT, H_CALL, 0x626260, 2,
        0x62699F, GAME_10US_COMPACT, H_CALL, 0x626260, 3,
        0x62B6FA, GAME_10US_COMPACT, H_CALL, 0x62B490, 1,
        0x641B85, GAME_10US_COMPACT, H_CALL, 0x6419F0, 1,
        0x641C8F, GAME_10US_COMPACT, H_CALL, 0x6419F0, 2,
        0x64C52B, GAME_10US_COMPACT, H_CALL, 0x64C220, 1,
        0x650C68, GAME_10US_COMPACT, H_CALL, 0x650BB0, 1,
        0x650D11, GAME_10US_COMPACT, H_CALL, 0x650BB0, 2,
        0x650DA5, GAME_10US_COMPACT, H_CALL, 0x650BB0, 3,
        0x650E76, GAME_10US_COMPACT, H_CALL, 0x650BB0, 4,
        0x650F32, GAME_10US_COMPACT, H_CALL, 0x650BB0, 5,
        0x65107D, GAME_10US_COMPACT, H_CALL, 0x650BB0, 6,
        0x652A84, GAME_10US_COMPACT, H_CALL, 0x6528F0, 1,
        0x652BED, GAME_10US_COMPACT, H_CALL, 0x6528F0, 2,
        0x652C37, GAME_10US_COMPACT, H_CALL, 0x6528F0, 3,
        0x652C80, GAME_10US_COMPACT, H_CALL, 0x6528F0, 4,
        0x652D58, GAME_10US_COMPACT, H_CALL, 0x6528F0, 5,
        0x652DBC, GAME_10US_COMPACT, H_CALL, 0x6528F0, 6,
        0x652DD5, GAME_10US_COMPACT, H_CALL, 0x6528F0, 7,
        0x652E3D, GAME_10US_COMPACT, H_CALL, 0x6528F0, 8,
        0x652E79, GAME_10US_COMPACT, H_CALL, 0x6528F0, 9,
        0x652E8D, GAME_10US_COMPACT, H_CALL, 0x6528F0, 10,
        0x68D4C4, GAME_10US_COMPACT, H_CALL, 0x68D350, 1,
        0x68D4E2, GAME_10US_COMPACT, H_CALL, 0x68D350, 2,
        0x68D599, GAME_10US_COMPACT, H_CALL, 0x68D350, 3,
        0x68D5B7, GAME_10US_COMPACT, H_CALL, 0x68D350, 4>;
    using def_t = bool(CVehicle const *, int, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,int,CVector *>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::IsClearToDriveAway)
    static int address;
    static int global_address;
    static const int id = 0x6509B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6509B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6511ED, GAME_10US_COMPACT, H_CALL, 0x6510D0, 1>;
    using def_t = bool(CVehicle const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *>, 0>;
META_END

META_BEGIN(CCarEnterExit::GetNearestCarPassengerDoor)
    static int address;
    static int global_address;
    static const int id = 0x650BB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x650BB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x64AA99, GAME_10US_COMPACT, H_CALL, 0x64A820, 1,
        0x64AB22, GAME_10US_COMPACT, H_CALL, 0x64A820, 2,
        0x64D572, GAME_10US_COMPACT, H_CALL, 0x64D440, 1,
        0x64D5CB, GAME_10US_COMPACT, H_CALL, 0x64D440, 2>;
    using def_t = bool(CPed const *, CVehicle const *, CVector *, int *, bool, bool, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *,CVehicle const *,CVector *,int *,bool,bool,bool>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CCarEnterExit::IsVehicleStealable)
    static int address;
    static int global_address;
    static const int id = 0x6510D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6510D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x643548, GAME_10US_COMPACT, H_CALL, 0x643510, 1,
        0x643612, GAME_10US_COMPACT, H_CALL, 0x643510, 2,
        0x65D8E4, GAME_10US_COMPACT, H_CALL, 0x65D780, 1,
        0x66B53E, GAME_10US_COMPACT, H_CALL, 0x66B4F0, 1,
        0x672B64, GAME_10US_COMPACT, H_CALL, 0x672A50, 1>;
    using def_t = bool(CVehicle const *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle const *,CPed const *>, 0,1>;
META_END

META_BEGIN(CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel)
    static int address;
    static int global_address;
    static const int id = 0x651210;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x651210, 0, 0, 0, 0, 0>;
    // total references count: 10us (8), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x64A965, GAME_10US_COMPACT, H_CALL, 0x64A820, 1,
        0x64D4C7, GAME_10US_COMPACT, H_CALL, 0x64D440, 1,
        0x64D52C, GAME_10US_COMPACT, H_CALL, 0x64D440, 2,
        0x64D597, GAME_10US_COMPACT, H_CALL, 0x64D440, 3,
        0x64D5DD, GAME_10US_COMPACT, H_CALL, 0x64D440, 4,
        0x64D682, GAME_10US_COMPACT, H_CALL, 0x64D440, 5,
        0x652B6A, GAME_10US_COMPACT, H_CALL, 0x6528F0, 1,
        0x652B8F, GAME_10US_COMPACT, H_CALL, 0x6528F0, 2>;
    using def_t = bool(CPed const *, CVehicle *, CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *,CVehicle *,CVector const *>, 0,1,2>;
META_END

META_BEGIN(CCarEnterExit::GetNearestCarDoor)
    static int address;
    static int global_address;
    static const int id = 0x6528F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6528F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x56F639, GAME_10US_COMPACT, H_CALL, 0x56F4E0, 1,
        0x56F6FB, GAME_10US_COMPACT, H_CALL, 0x56F4E0, 2,
        0x57082F, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x643C0F, GAME_10US_COMPACT, H_CALL, 0x643A60, 1,
        0x64AA85, GAME_10US_COMPACT, H_CALL, 0x64A820, 1,
        0x64D503, GAME_10US_COMPACT, H_CALL, 0x64D440, 1,
        0x6F849A, GAME_10US_COMPACT, H_CALL, 0x6F8170, 1>;
    using def_t = bool(CPed const *, CVehicle const *, CVector *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *,CVehicle const *,CVector *,int>, 0,1,2,3>;
META_END

}
