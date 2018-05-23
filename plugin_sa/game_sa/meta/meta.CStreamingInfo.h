/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStreamingInfo::Init)
    static int address;
    static int global_address;
    static const int id = 0x407460;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407460, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8AF2, GAME_10US_COMPACT, H_CALL, 0x5B8AD0, 1>;
    using def_t = void(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::AddToList)
    static int address;
    static int global_address;
    static const int id = 0x407480;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407480, 0, 0, 0, 0, 0>;
    // total references count: 10us (14), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4088D1, GAME_10US_COMPACT, H_CALL, 0x4087E0, 1,
        0x408962, GAME_10US_COMPACT, H_CALL, 0x4087E0, 2,
        0x409C4D, GAME_10US_COMPACT, H_CALL, 0x409C10, 1,
        0x409CD8, GAME_10US_COMPACT, H_CALL, 0x409C90, 1,
        0x40ABF8, GAME_10US_COMPACT, H_CALL, 0x40AA10, 1,
        0x40AC67, GAME_10US_COMPACT, H_CALL, 0x40AA10, 2,
        0x40B0CE, GAME_10US_COMPACT, H_CALL, 0x40B080, 1,
        0x40B130, GAME_10US_COMPACT, H_CALL, 0x40B080, 2,
        0x40B95F, GAME_10US_COMPACT, H_CALL, 0x40B700, 1,
        0x40BB06, GAME_10US_COMPACT, H_CALL, 0x40BAA0, 1,
        0x40BB6C, GAME_10US_COMPACT, H_CALL, 0x40BAA0, 2,
        0x40BEC6, GAME_10US_COMPACT, H_CALL, 0x40BE60, 1,
        0x40BF28, GAME_10US_COMPACT, H_CALL, 0x40BE60, 2,
        0x40CB5E, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1>;
    using def_t = void(CStreamingInfo *, CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *,CStreamingInfo *>, 0,1>;
META_END

META_BEGIN(CStreamingInfo::RemoveFromList)
    static int address;
    static int global_address;
    static const int id = 0x4074E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4074E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40CEA7, GAME_10US_COMPACT, H_CALL, 0x40CBA0, 1>;
    using def_t = void(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::GetNext)
    static int address;
    static int global_address;
    static const int id = 0x407520;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407520, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CStreamingInfo *(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::GetPrev)
    static int address;
    static int global_address;
    static const int id = 0x407540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407540, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CStreamingInfo *(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::InList)
    static int address;
    static int global_address;
    static const int id = 0x407560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407560, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::GetCdPosn)
    static int address;
    static int global_address;
    static const int id = 0x407570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407570, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = unsigned int(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::GetCdSize)
    static int address;
    static int global_address;
    static const int id = 0x407590;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407590, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = unsigned int(CStreamingInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *>, 0>;
META_END

META_BEGIN(CStreamingInfo::GetCdPosnAndSize)
    static int address;
    static int global_address;
    static const int id = 0x4075A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4075A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B6449, GAME_10US_COMPACT, H_CALL, 0x5B6170, 1>;
    using def_t = bool(CStreamingInfo *, unsigned int *, unsigned int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *,unsigned int *,unsigned int *>, 0,1,2>;
META_END

META_BEGIN(CStreamingInfo::SetCdPosnAndSize)
    static int address;
    static int global_address;
    static const int id = 0x4075E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4075E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B6486, GAME_10US_COMPACT, H_CALL, 0x5B6170, 1>;
    using def_t = void(CStreamingInfo *, unsigned int, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamingInfo *,unsigned int,unsigned int>, 0,1,2>;
META_END

}
