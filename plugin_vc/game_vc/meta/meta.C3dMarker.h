/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(C3dMarker::Render)
    static int address;
    static int global_address;
    static const int id = 0x570DA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x570DA0, 0x570DC0, 0x570C90>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x570BDF, GAME_10EN, H_CALL, 0x570BA0, 1,
        0x570BFF, GAME_11EN, H_CALL, 0x570BC0, 1,
        0x570ACF, GAME_STEAM, H_CALL, 0x570A90, 1>;
    using def_t = void(C3dMarker *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<C3dMarker *>, 0>;
META_END

META_BEGIN(C3dMarker::AddMarker)
    static int address;
    static int global_address;
    static const int id = 0x570E90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x570E90, 0x570EB0, 0x570D80>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5708EB, GAME_10EN, H_CALL, 0x570340, 1,
        0x57090B, GAME_11EN, H_CALL, 0x570360, 1,
        0x5707DB, GAME_STEAM, H_CALL, 0x570230, 1>;
    using def_t = void(C3dMarker *, unsigned int, unsigned short, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned int, float, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<C3dMarker *,unsigned int,unsigned short,float,unsigned char,unsigned char,unsigned char,unsigned char,unsigned int,float,unsigned short>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

}
