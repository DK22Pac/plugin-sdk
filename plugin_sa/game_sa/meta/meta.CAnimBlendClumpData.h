/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendClumpData)
    static int address;
    static int global_address;
    static const int id = 0x4CF0E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF0E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D5F60, GAME_10US_COMPACT, H_CALL, 0x4D5F50, 1>;
    using def_t = CAnimBlendClumpData *(CAnimBlendClumpData *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *>, 0>;
META_END

DTOR_META_BEGIN(CAnimBlendClumpData)
    static int address;
    static int global_address;
    static const int id = 0x4CF100;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF100, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D5F23, GAME_10US_COMPACT, H_CALL, 0x4D5F20, 1,
        0x4D612D, GAME_10US_COMPACT, H_CALL, 0x4D6110, 1>;
    using def_t = void(CAnimBlendClumpData *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *>, 0>;
META_END

META_BEGIN(CAnimBlendClumpData::SetNumberOfBones)
    static int address;
    static int global_address;
    static const int id = 0x4CF140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF140, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D6210, GAME_10US_COMPACT, H_JUMP, 0x4D6210, 1,
        0x4D6552, GAME_10US_COMPACT, H_CALL, 0x4D6510, 1,
        0x4D66DA, GAME_10US_COMPACT, H_CALL, 0x4D66A0, 1>;
    using def_t = void(CAnimBlendClumpData *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendClumpData::ForAllFrames)
    static int address;
    static int global_address;
    static const int id = 0x4CF190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF190, 0, 0, 0, 0, 0>;
    // total references count: 10us (13), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D3664, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 1,
        0x4D367A, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 2,
        0x4D36D0, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 3,
        0x4D36EB, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 4,
        0x4D3706, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 5,
        0x4D62E6, GAME_10US_COMPACT, H_CALL, 0x4D62A0, 1,
        0x4D62FE, GAME_10US_COMPACT, H_CALL, 0x4D62A0, 2,
        0x4D63B6, GAME_10US_COMPACT, H_CALL, 0x4D6370, 1,
        0x4D63CE, GAME_10US_COMPACT, H_CALL, 0x4D6370, 2,
        0x4D6421, GAME_10US_COMPACT, H_CALL, 0x4D6400, 1,
        0x4D64EE, GAME_10US_COMPACT, H_CALL, 0x4D64A0, 1,
        0x4D65FE, GAME_10US_COMPACT, H_CALL, 0x4D6510, 1,
        0x4D6702, GAME_10US_COMPACT, H_CALL, 0x4D66A0, 1>;
    using def_t = void(CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *,void(*)(AnimBlendFrameData *, void *),void *>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendClumpData::LoadFramesIntoSPR)
    static int address;
    static int global_address;
    static const int id = 0x4CF1D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF1D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendClumpData *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *>, 0>;
META_END

META_BEGIN(CAnimBlendClumpData::ForAllFramesInSPR)
    static int address;
    static int global_address;
    static const int id = 0x4CF1E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF1E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *,void(*)(AnimBlendFrameData *, void *),void *,unsigned int>, 0,1,2,3>;
META_END

DEL_DTOR_META_BEGIN(CAnimBlendClumpData)
    static int address;
    static int global_address;
    static const int id = 0x4D5F20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D5F20, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendClumpData *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *,unsigned char>, 0,1>;
META_END

}
