/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CFormation::ReturnTargetPedForPed)
    static int address;
    static int global_address;
    static const int id = 0x699F50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699F50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69C60F, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = int(CPed *, CPed **);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *,CPed **>, 0,1>;
META_END

META_BEGIN(CFormation::ReturnDestinationForPed)
    static int address;
    static int global_address;
    static const int id = 0x699FA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699FA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FAC0E, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1>;
    using def_t = bool(CPed *, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *,CVector *>, 0,1>;
META_END

META_BEGIN(CFormation::FindCoverPointsBehindBox)
    static int address;
    static int global_address;
    static const int id = 0x699FF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699FF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x699629, GAME_10US_COMPACT, H_CALL, 0x699570, 1,
        0x69B97B, GAME_10US_COMPACT, H_CALL, 0x69B860, 1>;
    using def_t = void(CPointList *, CVector, CMatrix *, CVector const *, CVector const *, CVector const *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPointList *,CVector,CMatrix *,CVector const *,CVector const *,CVector const *,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CFormation::GenerateGatherDestinations)
    static int address;
    static int global_address;
    static const int id = 0x69A620;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A620, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FABCC, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1>;
    using def_t = void(CPedList *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPedList *,CPed *>, 0,1>;
META_END

META_BEGIN(CFormation::GenerateGatherDestinations_AroundCar)
    static int address;
    static int global_address;
    static const int id = 0x69A770;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A770, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FABBF, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1>;
    using def_t = void(CPedList *, CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPedList *,CVehicle *>, 0,1>;
META_END

META_BEGIN(CFormation::FindNearestAvailableDestination)
    static int address;
    static int global_address;
    static const int id = 0x69B1B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69B1B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69B553, GAME_10US_COMPACT, H_CALL, 0x69B240, 1>;
    using def_t = signed int(CVector, float *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector,float *>, 0,1>;
META_END

META_BEGIN(CFormation::DistributeDestinations)
    static int address;
    static int global_address;
    static const int id = 0x69B240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69B240, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FABD9, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1>;
    using def_t = void(CPedList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPedList *>, 0>;
META_END

META_BEGIN(CFormation::DistributeDestinations_CoverPoints)
    static int address;
    static int global_address;
    static const int id = 0x69B5B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69B5B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69BDDC, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1>;
    using def_t = void(CPedList *, CVector);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPedList *,CVector>, 0,1>;
META_END

META_BEGIN(CFormation::DistributeDestinations_PedsToAttack)
    static int address;
    static int global_address;
    static const int id = 0x69B700;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69B700, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69C57F, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPedList *>, 0>;
META_END

META_BEGIN(CFormation::FindCoverPoints)
    static int address;
    static int global_address;
    static const int id = 0x69B860;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69B860, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69BDA5, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1>;
    using def_t = void(CVector, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector,float>, 0,1>;
META_END

}
