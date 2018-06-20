/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCover::Init)
    static int address;
    static int global_address;
    static const int id = 0x698710;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698710, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BD30, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x5BF914, GAME_10US_COMPACT, H_CALL, 0x5BF840, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCover::RemoveCoverPointsForThisEntity)
    static int address;
    static int global_address;
    static const int id = 0x698740;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698740, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x699A9A, GAME_10US_COMPACT, H_CALL, 0x6997E0, 1>;
    using def_t = void(CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CCover::FindVectorFromFirstToMissingVertex)
    static int address;
    static int global_address;
    static const int id = 0x698790;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698790, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CVector *(CVector *, CColTriangle *, int *, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector *,CColTriangle *,int *,CVector *>, 0,1,2,3>;
META_END

META_BEGIN(CCover::CalculateHorizontalSize)
    static int address;
    static int global_address;
    static const int id = 0x6987F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6987F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = float(CColTriangle *, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CColTriangle *,CVector *>, 0,1>;
META_END

META_BEGIN(CCover::Find2HighestPoints)
    static int address;
    static int global_address;
    static const int id = 0x6988E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6988E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CColTriangle *, CVector *, int &, int &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CColTriangle *,CVector *,int &,int &>, 0,1,2,3>;
META_END

META_BEGIN(CCover::DoLineCheckWithinObject)
    static int address;
    static int global_address;
    static const int id = 0x698990;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698990, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = char(CColTriangle *, int, CVector *, CVector *, CVector, CVector);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CColTriangle *,int,CVector *,CVector *,CVector,CVector>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CCover::FindDirFromVector)
    static int address;
    static int global_address;
    static const int id = 0x698D40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698D40, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = unsigned char(float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float>, 0,1>;
META_END

META_BEGIN(CCover::FindVectorFromDir)
    static int address;
    static int global_address;
    static const int id = 0x698D60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698D60, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x698E2C, GAME_10US_COMPACT, H_CALL, 0x698DD0, 1>;
    using def_t = CVector *(CVector *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector *,unsigned char>, 0,1>;
META_END

META_BEGIN(CCover::RemoveCoverPointIfEntityLost)
    static int address;
    static int global_address;
    static const int id = 0x698DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698DB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CCoverPoint *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CCoverPoint *>, 0>;
META_END

META_BEGIN(CCover::DoesCoverPointStillProvideCover)
    static int address;
    static int global_address;
    static const int id = 0x698DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698DD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x62C636, GAME_10US_COMPACT, H_CALL, 0x62C190, 1>;
    using def_t = bool(CCoverPoint *, CVector);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CCoverPoint *,CVector>, 0,1>;
META_END

META_BEGIN(CCover::AddCoverPoint)
    static int address;
    static int global_address;
    static const int id = 0x698F30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698F30, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69920D, GAME_10US_COMPACT, H_CALL, 0x699120, 1,
        0x69998F, GAME_10US_COMPACT, H_CALL, 0x6997E0, 1,
        0x699A59, GAME_10US_COMPACT, H_CALL, 0x6997E0, 2>;
    using def_t = void(int, CEntity *, CVector *, char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,CEntity *,CVector *,char,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN(CCover::FindCoverPointsForThisBuilding)
    static int address;
    static int global_address;
    static const int id = 0x699120;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699120, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x699D64, GAME_10US_COMPACT, H_CALL, 0x6997E0, 1>;
    using def_t = void(CBuilding *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CBuilding *>, 0>;
META_END

META_BEGIN(CCover::ShouldThisBuildingHaveItsCoverPointsCreated)
    static int address;
    static int global_address;
    static const int id = 0x699230;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699230, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x699A8D, GAME_10US_COMPACT, H_CALL, 0x6997E0, 1,
        0x699D14, GAME_10US_COMPACT, H_CALL, 0x6997E0, 2>;
    using def_t = bool(CBuilding *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CBuilding *>, 0>;
META_END

META_BEGIN(CCover::FindAndReserveCoverPoint)
    static int address;
    static int global_address;
    static const int id = 0x6992B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6992B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x62C03A, GAME_10US_COMPACT, H_CALL, 0x62BF00, 1,
        0x62C8A1, GAME_10US_COMPACT, H_CALL, 0x62C190, 1>;
    using def_t = CCoverPoint *(CPed *, CVector &, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *,CVector &,bool>, 0,1,2>;
META_END

META_BEGIN(CCover::FindCoordinatesCoverPoint)
    static int address;
    static int global_address;
    static const int id = 0x699570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699570, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x62C06A, GAME_10US_COMPACT, H_CALL, 0x62BF00, 1,
        0x62C666, GAME_10US_COMPACT, H_CALL, 0x62C190, 1,
        0x62C8D1, GAME_10US_COMPACT, H_CALL, 0x62C190, 2>;
    using def_t = bool(CCoverPoint *, CPed *, CVector &, CVector &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CCoverPoint *,CPed *,CVector &,CVector &>, 0,1,2,3>;
META_END

META_BEGIN(CCover::Update)
    static int address;
    static int global_address;
    static const int id = 0x6997E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6997E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BF4E, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
