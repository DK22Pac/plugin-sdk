/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CControllerState::CheckForInput)
    static int address;
    static int global_address;
    static const int id = 0x4AE470;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AE470, 0x4AE490, 0x4AE340>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4AB5BD, GAME_10EN, H_CALL, 0x4AB0C0, 1,
        0x600007, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x6001BD, GAME_10EN, H_CALL, 0x5FFAB0, 2,
        0x4AB5DD, GAME_11EN, H_CALL, 0x4AB0E0, 1,
        0x600027, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x6001DD, GAME_11EN, H_CALL, 0x5FFAD0, 2,
        0x4AB48D, GAME_STEAM, H_CALL, 0x4AAF90, 1,
        0x5FFC67, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x5FFE1D, GAME_STEAM, H_CALL, 0x5FF710, 2>;
    using def_t = bool(CControllerState *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CControllerState *>, 0>;
META_END

}
