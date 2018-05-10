/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStuckCarCheck::ResetArrayElement)
    static int address;
    static int global_address;
    static const int id = 0x463970;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463970, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x465944, GAME_10US_COMPACT, H_CALL, 0x465680, 1>;
    using def_t = void(CStuckCarCheck *, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,unsigned short>, 0,1>;
META_END

META_BEGIN(CStuckCarCheck::Init)
    static int address;
    static int global_address;
    static const int id = 0x4639E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4639E0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4689F0, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x468DF4, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void(CStuckCarCheck *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *>, 0>;
META_END

META_BEGIN(CStuckCarCheck::AttemptToWarpVehicle)
    static int address;
    static int global_address;
    static const int id = 0x463A60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463A60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x465832, GAME_10US_COMPACT, H_CALL, 0x465680, 1,
        0x4658F5, GAME_10US_COMPACT, H_CALL, 0x465680, 2>;
    using def_t = bool(CStuckCarCheck *, CVehicle *, CVector *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,CVehicle *,CVector *,float>, 0,1,2,3>;
META_END

META_BEGIN(CStuckCarCheck::RemoveCarFromCheck)
    static int address;
    static int global_address;
    static const int id = 0x463B80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463B80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x485154, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = void(CStuckCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CStuckCarCheck::HasCarBeenStuckForAWhile)
    static int address;
    static int global_address;
    static const int id = 0x463C00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463C00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x48517A, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = bool(CStuckCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CStuckCarCheck::ClearStuckFlagForCar)
    static int address;
    static int global_address;
    static const int id = 0x463C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463C40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x43431F, GAME_10US_COMPACT, H_CALL, 0x4342A0, 1>;
    using def_t = void(CStuckCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CStuckCarCheck::IsCarInStuckCarArray)
    static int address;
    static int global_address;
    static const int id = 0x463C70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x463C70, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x498A65, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = bool(CStuckCarCheck *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CStuckCarCheck::Process)
    static int address;
    static int global_address;
    static const int id = 0x465680;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x465680, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46A04E, GAME_10US_COMPACT, H_CALL, 0x46A000, 1>;
    using def_t = void(CStuckCarCheck *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *>, 0>;
META_END

META_BEGIN(CStuckCarCheck::AddCarToCheck)
    static int address;
    static int global_address;
    static const int id = 0x465970;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x465970, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46DCA1, GAME_10US_COMPACT, H_CALL, 0x46D050, 1,
        0x485133, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = void(CStuckCarCheck *, int, float, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, signed char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int,float,unsigned int,unsigned char,unsigned char,unsigned char,unsigned char,signed char>, 0,1,2,3,4,5,6,7,8>;
META_END

}
