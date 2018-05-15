/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTheCarGenerators::Save)
    static int address;
    static int global_address;
    static const int id = 0x5D38C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D38C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D1538, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheCarGenerators::Load)
    static int address;
    static int global_address;
    static const int id = 0x5D39B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D39B0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D1960, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheCarGenerators::CreateCarGenerator)
    static int address;
    static int global_address;
    static const int id = 0x6F31A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F31A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47AF74, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x47C20F, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x5379F2, GAME_10US_COMPACT, H_CALL, 0x537990, 1>;
    using def_t = signed int(float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,float,int,short,short,unsigned char,unsigned char,unsigned char,unsigned short,unsigned short,unsigned char,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13>;
META_END

META_BEGIN(CTheCarGenerators::RemoveCarGenerators)
    static int address;
    static int global_address;
    static const int id = 0x6F3240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F3240, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x404C61, GAME_10US_COMPACT, H_JUMP, 0x404B20, 1>;
    using def_t = void(unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

META_BEGIN(CTheCarGenerators::Init)
    static int address;
    static int global_address;
    static const int id = 0x6F3270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F3270, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53BDF5, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x5BF982, GAME_10US_COMPACT, H_CALL, 0x5BF840, 1,
        0x5D39B3, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheCarGenerators::Process)
    static int address;
    static int global_address;
    static const int id = 0x6F3F40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F3F40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53C06A, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
