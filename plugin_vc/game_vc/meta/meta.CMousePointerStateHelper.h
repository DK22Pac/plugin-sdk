/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMousePointerStateHelper::GetMouseSetUp)
    static int address;
    static int global_address;
    static const int id = 0x4ADA20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ADA20, 0x4ADA40, 0x4AD8F0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x499866, GAME_10EN, H_CALL, 0x4990DD, 1,
        0x5FFD59, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x499887, GAME_11EN, H_CALL, 0x4990FE, 1,
        0x5FFD79, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x499787, GAME_STEAM, H_CALL, 0x498FFE, 1,
        0x5FF9B9, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = CMouseControllerState *(CMousePointerStateHelper *, CMouseControllerState *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CMousePointerStateHelper *,CMouseControllerState *>, 0,1>;
META_END

}
