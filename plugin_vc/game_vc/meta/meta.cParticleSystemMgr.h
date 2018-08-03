/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cParticleSystemMgr::LoadParticleData)
    static int address;
    static int global_address;
    static const int id = 0x565B00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x565B00, 0x565B20, 0x5659F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x565F63, GAME_10EN, H_CALL, 0x565F60, 1,
        0x565F83, GAME_11EN, H_CALL, 0x565F80, 1,
        0x565E53, GAME_STEAM, H_CALL, 0x565E50, 1>;
    using def_t = void(cParticleSystemMgr *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<cParticleSystemMgr *>, 0>;
META_END

META_BEGIN(cParticleSystemMgr::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x565F60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x565F60, 0x565F80, 0x565E50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x565950, GAME_10EN, H_CALL, 0x565940, 1,
        0x565970, GAME_11EN, H_CALL, 0x565960, 1,
        0x565840, GAME_STEAM, H_CALL, 0x565830, 1>;
    using def_t = void(cParticleSystemMgr *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<cParticleSystemMgr *>, 0>;
META_END

}
