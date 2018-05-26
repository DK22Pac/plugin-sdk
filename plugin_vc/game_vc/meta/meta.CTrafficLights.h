/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTrafficLights::ShouldCarStopForBridge)
    static int address;
    static int global_address;
    static const int id = 0x463F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463F80, 0x463F80, 0x463E60>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x41BB51, GAME_10EN, H_CALL, 0x419E80, 1,
        0x41F817, GAME_10EN, H_CALL, 0x41EEE0, 1,
        0x4254D7, GAME_10EN, H_CALL, 0x4254C0, 1,
        0x426355, GAME_10EN, H_CALL, 0x426030, 1,
        0x41BB51, GAME_11EN, H_CALL, 0x419E80, 1,
        0x41F817, GAME_11EN, H_CALL, 0x41EEE0, 1,
        0x4254D7, GAME_11EN, H_CALL, 0x4254C0, 1,
        0x426355, GAME_11EN, H_CALL, 0x426030, 1,
        0x41BB51, GAME_STEAM, H_CALL, 0x419E80, 1,
        0x41F7E7, GAME_STEAM, H_CALL, 0x41EEB0, 1,
        0x4254A7, GAME_STEAM, H_CALL, 0x425490, 1,
        0x426325, GAME_STEAM, H_CALL, 0x426000, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrafficLights::DisplayActualLight)
    static int address;
    static int global_address;
    static const int id = 0x463F90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463F90, 0x463F90, 0x463E70>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x488F94, GAME_10EN, H_CALL, 0x488810, 1,
        0x488FCC, GAME_10EN, H_CALL, 0x488810, 2,
        0x488FE3, GAME_10EN, H_CALL, 0x488810, 3,
        0x48901C, GAME_10EN, H_CALL, 0x488810, 4,
        0x488F94, GAME_11EN, H_CALL, 0x488810, 1,
        0x488FCC, GAME_11EN, H_CALL, 0x488810, 2,
        0x488FE3, GAME_11EN, H_CALL, 0x488810, 3,
        0x48901C, GAME_11EN, H_CALL, 0x488810, 4,
        0x488E74, GAME_STEAM, H_CALL, 0x4886F0, 1,
        0x488EAC, GAME_STEAM, H_CALL, 0x4886F0, 2,
        0x488EC3, GAME_STEAM, H_CALL, 0x4886F0, 3,
        0x488EFC, GAME_STEAM, H_CALL, 0x4886F0, 4>;
    using def_t = void(CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CTrafficLights::LightForPeds)
    static int address;
    static int global_address;
    static const int id = 0x465BE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x465BE0, 0x465BE0, 0x465AC0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4F190F, GAME_10EN, H_CALL, 0x4F18A0, 1,
        0x4F192F, GAME_11EN, H_CALL, 0x4F18C0, 1,
        0x4F17CF, GAME_STEAM, H_CALL, 0x4F1760, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrafficLights::ShouldCarStopForLight)
    static int address;
    static int global_address;
    static const int id = 0x465C10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x465C10, 0x465C10, 0x465AF0>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x41F7FA, GAME_10EN, H_CALL, 0x41EEE0, 1,
        0x4254CB, GAME_10EN, H_CALL, 0x4254C0, 1,
        0x426349, GAME_10EN, H_CALL, 0x426030, 1,
        0x41F7FA, GAME_11EN, H_CALL, 0x41EEE0, 1,
        0x4254CB, GAME_11EN, H_CALL, 0x4254C0, 1,
        0x426349, GAME_11EN, H_CALL, 0x426030, 1,
        0x41F7CA, GAME_STEAM, H_CALL, 0x41EEB0, 1,
        0x42549B, GAME_STEAM, H_CALL, 0x425490, 1,
        0x426319, GAME_STEAM, H_CALL, 0x426000, 1>;
    using def_t = void(CVehicle *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *,bool>, 0,1>;
META_END

META_BEGIN(CTrafficLights::ScanForLightsOnMap)
    static int address;
    static int global_address;
    static const int id = 0x4661C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4661C0, 0x4661C0, 0x4660A0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4E2B, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4E4B, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4CF8, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
