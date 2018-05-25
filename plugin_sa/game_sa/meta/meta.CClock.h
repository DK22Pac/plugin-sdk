/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CClock::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x52CD90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52CD90, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BDF0, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x5BA363, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CClock::NormaliseGameClock)
    static int address;
    static int global_address;
    static const int id = 0x52CDE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52CDE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x52D18A, GAME_10US_COMPACT, H_JUMP, 0x52D150, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::GetGameClockMinutesUntil)
    static int address;
    static int global_address;
    static const int id = 0x52CEB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52CEB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x46828C, GAME_10US_COMPACT, H_CALL, 0x466DE0, 1>;
    using def_t = unsigned short(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::GetIsTimeInRange)
    static int address;
    static int global_address;
    static const int id = 0x52CEE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52CEE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (11), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40C31D, GAME_10US_COMPACT, H_CALL, 0x40C270, 1,
        0x40C4DF, GAME_10US_COMPACT, H_CALL, 0x40C450, 1,
        0x44000C, GAME_10US_COMPACT, H_CALL, 0x43FFD0, 1,
        0x440ED1, GAME_10US_COMPACT, H_CALL, 0x440D10, 1,
        0x554452, GAME_10US_COMPACT, H_CALL, 0x554230, 1,
        0x5546A8, GAME_10US_COMPACT, H_CALL, 0x554650, 1,
        0x554EF5, GAME_10US_COMPACT, H_CALL, 0x554EB0, 1,
        0x594F31, GAME_10US_COMPACT, H_CALL, 0x594E90, 1,
        0x594F4C, GAME_10US_COMPACT, H_CALL, 0x594E90, 2,
        0x594F5C, GAME_10US_COMPACT, H_CALL, 0x594E90, 3,
        0x6C5489, GAME_10US_COMPACT, H_CALL, 0x6C5420, 1>;
    using def_t = bool(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::Update)
    static int address;
    static int global_address;
    static const int id = 0x52CF10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52CF10, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BFBD, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::StoreClock)
    static int address;
    static int global_address;
    static const int id = 0x52D020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52D020, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47F1AC, GAME_10US_COMPACT, H_CALL, 0x47E090, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::RestoreClock)
    static int address;
    static int global_address;
    static const int id = 0x52D070;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52D070, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47F1C7, GAME_10US_COMPACT, H_CALL, 0x47E090, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::OffsetClockByADay)
    static int address;
    static int global_address;
    static const int id = 0x52D0B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52D0B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47207F, GAME_10US_COMPACT, H_CALL, 0x470A90, 1>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CClock::SetGameClock)
    static int address;
    static int global_address;
    static const int id = 0x52D150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52D150, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x441534, GAME_10US_COMPACT, H_CALL, 0x4414C0, 1,
        0x45EE76, GAME_10US_COMPACT, H_CALL, 0x45ECD0, 1,
        0x45FE40, GAME_10US_COMPACT, H_CALL, 0x45F380, 1,
        0x468255, GAME_10US_COMPACT, H_CALL, 0x466DE0, 1>;
    using def_t = void(unsigned char, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char,unsigned char>, 0,1,2>;
META_END

}
