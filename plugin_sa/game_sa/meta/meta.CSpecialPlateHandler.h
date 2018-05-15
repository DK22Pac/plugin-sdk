/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSpecialPlateHandler::Init)
    static int address;
    static int global_address;
    static const int id = 0x6F2D10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2D10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CSpecialPlateHandler *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CSpecialPlateHandler *>, 0>;
META_END

META_BEGIN(CSpecialPlateHandler::Find)
    static int address;
    static int global_address;
    static const int id = 0x6F2D30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2D30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6F3746, GAME_10US_COMPACT, H_CALL, 0x6F34D0, 1>;
    using def_t = signed int(CSpecialPlateHandler *, int, char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CSpecialPlateHandler *,int,char *>, 0,1,2>;
META_END

META_BEGIN(CSpecialPlateHandler::Add)
    static int address;
    static int global_address;
    static const int id = 0x6F2D90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2D90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x479D7F, GAME_10US_COMPACT, H_CALL, 0x479D70, 1,
        0x47AFB7, GAME_10US_COMPACT, H_CALL, 0x47A760, 1>;
    using def_t = void(CSpecialPlateHandler *, int, char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CSpecialPlateHandler *,int,char *>, 0,1,2>;
META_END

META_BEGIN(CSpecialPlateHandler::Remove)
    static int address;
    static int global_address;
    static const int id = 0x6F2DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6F2DD0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CSpecialPlateHandler *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CSpecialPlateHandler *,int>, 0,1>;
META_END

}
