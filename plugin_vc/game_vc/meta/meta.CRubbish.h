/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRubbish::SetVisibility)
    static int address;
    static int global_address;
    static const int id = 0x567AF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567AF0, 0x567B10, 0x5679E0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x459C83, GAME_10EN, H_CALL, 0x458EC0, 1,
        0x459C83, GAME_11EN, H_CALL, 0x458EC0, 1,
        0x459B63, GAME_STEAM, H_CALL, 0x458DA0, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CRubbish::StirUp)
    static int address;
    static int global_address;
    static const int id = 0x567B00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567B00, 0x567B20, 0x5679F0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x59348C, GAME_10EN, H_CALL, 0x593030, 1,
        0x60E494, GAME_10EN, H_CALL, 0x60E3E0, 1,
        0x5934AC, GAME_11EN, H_CALL, 0x593050, 1,
        0x60E474, GAME_11EN, H_CALL, 0x60E3C0, 1,
        0x5932BC, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x60E0B4, GAME_STEAM, H_CALL, 0x60E000, 1>;
    using def_t = void(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CRubbish::Render)
    static int address;
    static int global_address;
    static const int id = 0x567F20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567F20, 0x567F40, 0x567E10>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A6538, GAME_10EN, H_CALL, 0x4A6510, 1,
        0x4A6558, GAME_11EN, H_CALL, 0x4A6530, 1,
        0x4A6408, GAME_STEAM, H_CALL, 0x4A63E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRubbish::Update)
    static int address;
    static int global_address;
    static const int id = 0x568550;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x568550, 0x568570, 0x568440>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A45E6, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A4606, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A4460, GAME_STEAM, H_CALL, 0x4A42D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRubbish::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x568C00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x568C00, 0x568C20, 0x568AF0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4AC1, GAME_10EN, H_CALL, 0x4A49E0, 1,
        0x4A4AE1, GAME_11EN, H_CALL, 0x4A4A00, 1,
        0x4A4981, GAME_STEAM, H_CALL, 0x4A48A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
