/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarGenerator::Get)
    static int address;
    static int global_address;
    static const int id = 0x479D60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x479D60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = CCarGenerator *(unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned short>, 0>;
META_END

META_BEGIN(CCarGenerator::SwitchOff)
    static int address;
    static int global_address;
    static const int id = 0x6F2E30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2E30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47C251, GAME_10US_COMPACT, H_CALL, 0x47C100, 1>;
    using def_t = void(CCarGenerator *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::CalcNextGen)
    static int address;
    static int global_address;
    static const int id = 0x6F2E40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2E40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = unsigned int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarGenerator::Setup)
    static int address;
    static int global_address;
    static const int id = 0x6F2E50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2E50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6F3227, GAME_10US_COMPACT, H_CALL, 0x6F31A0, 1>;
    using def_t = void(CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *,float,float,float,float,int,short,short,unsigned char,unsigned char,unsigned char,unsigned short,unsigned short,unsigned char,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>;
META_END

META_BEGIN(CCarGenerator::CheckIfWithinRangeOfAnyPlayers)
    static int address;
    static int global_address;
    static const int id = 0x6F2F40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2F40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6F3EB6, GAME_10US_COMPACT, H_CALL, 0x6F3E90, 1>;
    using def_t = bool(CCarGenerator *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::SwitchOn)
    static int address;
    static int global_address;
    static const int id = 0x6F32C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F32C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47C0E3, GAME_10US_COMPACT, H_CALL, 0x47C0E0, 1,
        0x47C265, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x537A0A, GAME_10US_COMPACT, H_JUMP, 0x537990, 1>;
    using def_t = void(CCarGenerator *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::CheckForBlockage)
    static int address;
    static int global_address;
    static const int id = 0x6F32E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F32E0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6F35D6, GAME_10US_COMPACT, H_CALL, 0x6F34D0, 1,
        0x6F35FF, GAME_10US_COMPACT, H_CALL, 0x6F34D0, 2>;
    using def_t = bool(CCarGenerator *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *,int>, 0,1>;
META_END

META_BEGIN(CCarGenerator::DoInternalProcessing)
    static int address;
    static int global_address;
    static const int id = 0x6F34D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F34D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6F3EC1, GAME_10US_COMPACT, H_CALL, 0x6F3E90, 1>;
    using def_t = void(CCarGenerator *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::Process)
    static int address;
    static int global_address;
    static const int id = 0x6F3E90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F3E90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6F3F99, GAME_10US_COMPACT, H_CALL, 0x6F3F40, 1>;
    using def_t = void(CCarGenerator *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

}
