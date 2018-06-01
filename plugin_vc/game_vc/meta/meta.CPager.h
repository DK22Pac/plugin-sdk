/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPager::ClearMessages)
    static int address;
    static int global_address;
    static const int id = 0x584B40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x584B40, 0x584B60, 0x584970>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x582CE3, GAME_10EN, H_CALL, 0x582C70, 1,
        0x582D03, GAME_11EN, H_CALL, 0x582C90, 1,
        0x582B13, GAME_STEAM, H_CALL, 0x582AA0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPager::Display)
    static int address;
    static int global_address;
    static const int id = 0x584B90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x584B90, 0x584BB0, 0x5849C0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x584D35, GAME_10EN, H_CALL, 0x584C40, 1,
        0x584D55, GAME_11EN, H_CALL, 0x584C60, 1,
        0x584B65, GAME_STEAM, H_CALL, 0x584A70, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPager::Process)
    static int address;
    static int global_address;
    static const int id = 0x584C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x584C40, 0x584C60, 0x584A70>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4D1419, GAME_10EN, H_CALL, 0x4D1400, 1,
        0x4D1439, GAME_11EN, H_CALL, 0x4D1420, 1,
        0x4D12D9, GAME_STEAM, H_CALL, 0x4D12C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPager::Init)
    static int address;
    static int global_address;
    static const int id = 0x584DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x584DB0, 0x584DD0, 0x584BE0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4D14BC, GAME_10EN, H_CALL, 0x4D1490, 1,
        0x4D14DC, GAME_11EN, H_CALL, 0x4D14B0, 1,
        0x4D137C, GAME_STEAM, H_CALL, 0x4D1350, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
