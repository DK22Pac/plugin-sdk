/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDraw::CalculateAspectRatio)
    static int address;
    static int global_address;
    static const int id = 0x54A270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x54A270, 0x54A290, 0x54A160>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x4A5C63, GAME_10EN, H_CALL, 0x4A5C60, 1,
        0x4A5E95, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A5F95, GAME_10EN, H_CALL, 0x4A5D80, 2,
        0x4A6098, GAME_10EN, H_CALL, 0x4A5D80, 3,
        0x4A72C8, GAME_10EN, H_CALL, 0x4A72C0, 1,
        0x4A5C83, GAME_11EN, H_CALL, 0x4A5C80, 1,
        0x4A5EB5, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A5FB5, GAME_11EN, H_CALL, 0x4A5DA0, 2,
        0x4A60B8, GAME_11EN, H_CALL, 0x4A5DA0, 3,
        0x4A72E8, GAME_11EN, H_CALL, 0x4A72E0, 1,
        0x4A5B33, GAME_STEAM, H_CALL, 0x4A5B30, 1,
        0x4A5D65, GAME_STEAM, H_CALL, 0x4A5C50, 1,
        0x4A5E65, GAME_STEAM, H_CALL, 0x4A5C50, 2,
        0x4A5F68, GAME_STEAM, H_CALL, 0x4A5C50, 3,
        0x4A7198, GAME_STEAM, H_CALL, 0x4A7190, 1>;
    using def_t = float();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDraw::SetFOV)
    static int address;
    static int global_address;
    static const int id = 0x54A2E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x54A2E0, 0x54A300, 0x54A1D0>;
    // total references count: 10en (6), 11en (6), steam (6)
    using refs_t = RefList<
        0x46DCC8, GAME_10EN, H_CALL, 0x46C58C, 1,
        0x4A48AB, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A4D3A, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x620BC6, GAME_10EN, H_CALL, 0x6209E0, 1,
        0x627CFC, GAME_10EN, H_CALL, 0x627CE0, 1,
        0x627D49, GAME_10EN, H_CALL, 0x627D10, 1,
        0x46DCC8, GAME_11EN, H_CALL, 0x46C58C, 1,
        0x4A48CB, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A4D5A, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x620BA6, GAME_11EN, H_CALL, 0x6209C0, 1,
        0x627D4C, GAME_11EN, H_CALL, 0x627D30, 1,
        0x627D99, GAME_11EN, H_CALL, 0x627D60, 1,
        0x46DBA8, GAME_STEAM, H_CALL, 0x46C46C, 1,
        0x4A476B, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4C07, GAME_STEAM, H_CALL, 0x4A49D0, 1,
        0x620806, GAME_STEAM, H_CALL, 0x620620, 1,
        0x6279BC, GAME_STEAM, H_CALL, 0x6279A0, 1,
        0x627A09, GAME_STEAM, H_CALL, 0x6279D0, 1>;
    using def_t = void(float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

}
