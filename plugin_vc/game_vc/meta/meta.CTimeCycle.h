/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTimeCycle::StopExtraColour)
    static int address;
    static int global_address;
    static const int id = 0x4CE9E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE9E0, 0x4CEA00, 0x4CE8A0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4515D6, GAME_10EN, H_CALL, 0x451550, 1,
        0x631E82, GAME_10EN, H_CALL, 0x630650, 1,
        0x4515D6, GAME_11EN, H_CALL, 0x451550, 1,
        0x631ED2, GAME_11EN, H_CALL, 0x6306A0, 1,
        0x4514E6, GAME_STEAM, H_CALL, 0x451460, 1,
        0x631B42, GAME_STEAM, H_CALL, 0x630310, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CTimeCycle::Update)
    static int address;
    static int global_address;
    static const int id = 0x4CEA40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEA40, 0x4CEA60, 0x4CE900>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A45F5, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A4615, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A446F, GAME_STEAM, H_CALL, 0x4A42D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimeCycle::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x4D05E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D05E0, 0x4D0600, 0x4D04A0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A48A0, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A504E, GAME_10EN, H_CALL, 0x4A5020, 1,
        0x4A48C0, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A506E, GAME_11EN, H_CALL, 0x4A5040, 1,
        0x4A4760, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4F1E, GAME_STEAM, H_CALL, 0x4A4EF0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
