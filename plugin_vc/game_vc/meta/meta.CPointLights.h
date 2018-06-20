/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPointLights::RenderFogEffect)
    static int address;
    static int global_address;
    static const int id = 0x566640;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x566640, 0x566660, 0x566530>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A6551, GAME_10EN, H_CALL, 0x4A6510, 1,
        0x4A6571, GAME_11EN, H_CALL, 0x4A6530, 1,
        0x4A6421, GAME_STEAM, H_CALL, 0x4A63E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPointLights::GenerateLightsAffectingObject)
    static int address;
    static int global_address;
    static const int id = 0x567440;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567440, 0x567460, 0x567330>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4C9B62, GAME_10EN, H_CALL, 0x4C9B20, 1,
        0x4C9C12, GAME_10EN, H_CALL, 0x4C9BD0, 1,
        0x4C9CC2, GAME_10EN, H_CALL, 0x4C9C80, 1,
        0x4C9B82, GAME_11EN, H_CALL, 0x4C9B40, 1,
        0x4C9C32, GAME_11EN, H_CALL, 0x4C9BF0, 1,
        0x4C9CE2, GAME_11EN, H_CALL, 0x4C9CA0, 1,
        0x4C9A22, GAME_STEAM, H_CALL, 0x4C99E0, 1,
        0x4C9AD2, GAME_STEAM, H_CALL, 0x4C9A90, 1,
        0x4C9B82, GAME_STEAM, H_CALL, 0x4C9B40, 1>;
    using def_t = float(CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CPointLights::AddLight)
    static int address;
    static int global_address;
    static const int id = 0x567700;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567700, 0x567720, 0x5675F0>;
    // total references count: 10en (24), 11en (24), steam (24)
    using refs_t = RefList<
        0x43F61B, GAME_10EN, H_CALL, 0x43F050, 1,
        0x46471F, GAME_10EN, H_CALL, 0x463F90, 1,
        0x464E85, GAME_10EN, H_CALL, 0x463F90, 2,
        0x465801, GAME_10EN, H_CALL, 0x463F90, 3,
        0x488BD6, GAME_10EN, H_CALL, 0x488810, 1,
        0x48EBAB, GAME_10EN, H_CALL, 0x48E690, 1,
        0x541ADA, GAME_10EN, H_CALL, 0x541590, 1,
        0x541B50, GAME_10EN, H_CALL, 0x541590, 2,
        0x541CD7, GAME_10EN, H_CALL, 0x541590, 3,
        0x58C53F, GAME_10EN, H_CALL, 0x589AD0, 1,
        0x58C8E2, GAME_10EN, H_CALL, 0x589AD0, 2,
        0x58E49D, GAME_10EN, H_CALL, 0x589AD0, 3,
        0x58E59B, GAME_10EN, H_CALL, 0x589AD0, 4,
        0x58E611, GAME_10EN, H_CALL, 0x589AD0, 5,
        0x5C4F90, GAME_10EN, H_CALL, 0x5C4BA0, 1,
        0x5C50CF, GAME_10EN, H_CALL, 0x5C4BA0, 2,
        0x5C9C6B, GAME_10EN, H_CALL, 0x5C9BB0, 1,
        0x5CBAE8, GAME_10EN, H_CALL, 0x5CB0A0, 1,
        0x5CD816, GAME_10EN, H_CALL, 0x5CD340, 1,
        0x5D07B1, GAME_10EN, H_CALL, 0x5D0740, 1,
        0x5D2252, GAME_10EN, H_CALL, 0x5D1140, 1,
        0x5D2848, GAME_10EN, H_CALL, 0x5D1140, 2,
        0x60BE6E, GAME_10EN, H_CALL, 0x60AD90, 1,
        0x60BF7D, GAME_10EN, H_CALL, 0x60AD90, 2,
        0x43F61B, GAME_11EN, H_CALL, 0x43F28E, 1,
        0x46471F, GAME_11EN, H_CALL, 0x463F90, 1,
        0x464E85, GAME_11EN, H_CALL, 0x463F90, 2,
        0x465801, GAME_11EN, H_CALL, 0x463F90, 3,
        0x488BD6, GAME_11EN, H_CALL, 0x488810, 1,
        0x48EBBB, GAME_11EN, H_CALL, 0x48E6A0, 1,
        0x541AFA, GAME_11EN, H_CALL, 0x5415B0, 1,
        0x541B70, GAME_11EN, H_CALL, 0x5415B0, 2,
        0x541CF7, GAME_11EN, H_CALL, 0x5415B0, 3,
        0x58C55F, GAME_11EN, H_CALL, 0x589AF0, 1,
        0x58C902, GAME_11EN, H_CALL, 0x589AF0, 2,
        0x58E4BD, GAME_11EN, H_CALL, 0x589AF0, 3,
        0x58E5BB, GAME_11EN, H_CALL, 0x589AF0, 4,
        0x58E631, GAME_11EN, H_CALL, 0x589AF0, 5,
        0x5C4FB0, GAME_11EN, H_CALL, 0x5C4BC0, 1,
        0x5C50EF, GAME_11EN, H_CALL, 0x5C4BC0, 2,
        0x5C9C8B, GAME_11EN, H_CALL, 0x5C9BD0, 1,
        0x5CBB08, GAME_11EN, H_CALL, 0x5CB0C0, 1,
        0x5CD836, GAME_11EN, H_CALL, 0x5CD360, 1,
        0x5D07D1, GAME_11EN, H_CALL, 0x5D0760, 1,
        0x5D2272, GAME_11EN, H_CALL, 0x5D1160, 1,
        0x5D2868, GAME_11EN, H_CALL, 0x5D1160, 2,
        0x60BE4E, GAME_11EN, H_CALL, 0x60AD70, 1,
        0x60BF5D, GAME_11EN, H_CALL, 0x60AD70, 2,
        0x43F58B, GAME_STEAM, H_CALL, 0x43F1FE, 1,
        0x4645FF, GAME_STEAM, H_CALL, 0x463E70, 1,
        0x464D65, GAME_STEAM, H_CALL, 0x463E70, 2,
        0x4656E1, GAME_STEAM, H_CALL, 0x463E70, 3,
        0x488AB6, GAME_STEAM, H_CALL, 0x4886F0, 1,
        0x48EABB, GAME_STEAM, H_CALL, 0x48E580, 1,
        0x5419CA, GAME_STEAM, H_CALL, 0x541480, 1,
        0x541A40, GAME_STEAM, H_CALL, 0x541480, 2,
        0x541BC7, GAME_STEAM, H_CALL, 0x541480, 3,
        0x58C36F, GAME_STEAM, H_CALL, 0x589900, 1,
        0x58C712, GAME_STEAM, H_CALL, 0x589900, 2,
        0x58E2CD, GAME_STEAM, H_CALL, 0x589900, 3,
        0x58E3CB, GAME_STEAM, H_CALL, 0x589900, 4,
        0x58E441, GAME_STEAM, H_CALL, 0x589900, 5,
        0x5C4DC0, GAME_STEAM, H_CALL, 0x5C49D0, 1,
        0x5C4EFF, GAME_STEAM, H_CALL, 0x5C49D0, 2,
        0x5C9A9B, GAME_STEAM, H_CALL, 0x5C99E0, 1,
        0x5CB918, GAME_STEAM, H_CALL, 0x5CAED0, 1,
        0x5CD5E6, GAME_STEAM, H_CALL, 0x5CD110, 1,
        0x5D0581, GAME_STEAM, H_CALL, 0x5D0510, 1,
        0x5D2022, GAME_STEAM, H_CALL, 0x5D0F10, 1,
        0x5D2618, GAME_STEAM, H_CALL, 0x5D0F10, 2,
        0x60BA8E, GAME_STEAM, H_CALL, 0x60A9B0, 1,
        0x60BB9D, GAME_STEAM, H_CALL, 0x60A9B0, 2>;
    using def_t = void(unsigned char, CVector, CVector, float, float, float, float, unsigned char, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,CVector,CVector,float,float,float,float,unsigned char,bool>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CPointLights::Init)
    static int address;
    static int global_address;
    static const int id = 0x5678D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5678D0, 0x5678F0, 0x5677C0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x54FA82, GAME_10EN, H_CALL, 0x54F880, 1,
        0x54FAA2, GAME_11EN, H_CALL, 0x54F8A0, 1,
        0x54F972, GAME_STEAM, H_CALL, 0x54F770, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
