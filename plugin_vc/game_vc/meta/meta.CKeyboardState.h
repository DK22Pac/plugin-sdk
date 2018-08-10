/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CKeyboardState::Clear)
    static int address;
    static int global_address;
    static const int id = 0x4AE1C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AE1C0, 0x4AE1E0, 0x4AE090>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4ADFF1, GAME_10EN, H_CALL, 0x4ADBE0, 1,
        0x4ADFFB, GAME_10EN, H_CALL, 0x4ADBE0, 2,
        0x4AE005, GAME_10EN, H_CALL, 0x4ADBE0, 3,
        0x4AE011, GAME_11EN, H_CALL, 0x4ADC00, 1,
        0x4AE01B, GAME_11EN, H_CALL, 0x4ADC00, 2,
        0x4AE025, GAME_11EN, H_CALL, 0x4ADC00, 3,
        0x4ADEC1, GAME_STEAM, H_CALL, 0x4ADAB0, 1,
        0x4ADECB, GAME_STEAM, H_CALL, 0x4ADAB0, 2,
        0x4ADED5, GAME_STEAM, H_CALL, 0x4ADAB0, 3>;
    using def_t = void(CKeyboardState *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CKeyboardState *>, 0>;
META_END

}
