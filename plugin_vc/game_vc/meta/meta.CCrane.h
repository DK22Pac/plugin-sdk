/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCrane::SetHookMatrix)
    static int address;
    static int global_address;
    static const int id = 0x5A7B00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A7B00, 0x5A7B20, 0x5A7930>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5A9164, GAME_10EN, H_CALL, 0x5A8460, 1,
        0x5A9184, GAME_11EN, H_CALL, 0x5A8480, 1,
        0x5A8F94, GAME_STEAM, H_CALL, 0x5A8290, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCrane::RotateCarriedCarProperly)
    static int address;
    static int global_address;
    static const int id = 0x5A8310;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A8310, 0x5A8330, 0x5A8140>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x5A8A04, GAME_10EN, H_CALL, 0x5A8460, 1,
        0x5A8AE4, GAME_10EN, H_CALL, 0x5A8460, 2,
        0x5A8B56, GAME_10EN, H_CALL, 0x5A8460, 3,
        0x5A8A24, GAME_11EN, H_CALL, 0x5A8480, 1,
        0x5A8B04, GAME_11EN, H_CALL, 0x5A8480, 2,
        0x5A8B76, GAME_11EN, H_CALL, 0x5A8480, 3,
        0x5A8834, GAME_STEAM, H_CALL, 0x5A8290, 1,
        0x5A8914, GAME_STEAM, H_CALL, 0x5A8290, 2,
        0x5A8986, GAME_STEAM, H_CALL, 0x5A8290, 3>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCrane::Update)
    static int address;
    static int global_address;
    static const int id = 0x5A8460;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A8460, 0x5A8480, 0x5A8290>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5A937F, GAME_10EN, H_CALL, 0x5A92E0, 1,
        0x5A939F, GAME_11EN, H_CALL, 0x5A9300, 1,
        0x5A91AF, GAME_STEAM, H_CALL, 0x5A9110, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
