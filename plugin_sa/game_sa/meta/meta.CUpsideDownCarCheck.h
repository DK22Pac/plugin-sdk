/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CUpsideDownCarCheck::Init)
    static int address;
    static int global_address;
    static const int id = 0x463810;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463810, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CUpsideDownCarCheck *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *>, 0>;
META_END

META_BEGIN_OVERLOADED(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(CVehicle *))
    static int address;
    static int global_address;
    static const int id = 0x463830;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463830, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4655C9, GAME_10US_COMPACT, H_JUMP, 0x4655A0, 1,
        0x4655D6, GAME_10US_COMPACT, H_JUMP, 0x4655A0, 2,
        0x46564D, GAME_10US_COMPACT, H_CALL, 0x4655E0, 1,
        0x46577C, GAME_10US_COMPACT, H_CALL, 0x465680, 1,
        0x64450F, GAME_10US_COMPACT, H_CALL, 0x644470, 1,
        0x6451F8, GAME_10US_COMPACT, H_CALL, 0x645100, 1,
        0x647348, GAME_10US_COMPACT, H_CALL, 0x647330, 1,
        0x651127, GAME_10US_COMPACT, H_CALL, 0x6510D0, 1>;
    using def_t = bool(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CUpsideDownCarCheck::AreAnyCarsUpsideDown)
    static int address;
    static int global_address;
    static const int id = 0x4638A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4638A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = bool(CUpsideDownCarCheck *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *>, 0>;
META_END

META_BEGIN(CUpsideDownCarCheck::AddCarToCheck)
    static int address;
    static int global_address;
    static const int id = 0x4638D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4638D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47D263, GAME_10US_COMPACT, H_CALL, 0x47D210, 1>;
    using def_t = void(CUpsideDownCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CUpsideDownCarCheck::RemoveCarFromCheck)
    static int address;
    static int global_address;
    static const int id = 0x463910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463910, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47D292, GAME_10US_COMPACT, H_CALL, 0x47D210, 1>;
    using def_t = void(CUpsideDownCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile)
    static int address;
    static int global_address;
    static const int id = 0x463940;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463940, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47D0C6, GAME_10US_COMPACT, H_CALL, 0x47C100, 1>;
    using def_t = char(CUpsideDownCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(int))
    static int address;
    static int global_address;
    static const int id = 0x4655A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4655A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CUpsideDownCarCheck::UpdateTimers)
    static int address;
    static int global_address;
    static const int id = 0x4655E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4655E0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46A044, GAME_10US_COMPACT, H_CALL, 0x46A000, 1>;
    using def_t = void(CUpsideDownCarCheck *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *>, 0>;
META_END

}
