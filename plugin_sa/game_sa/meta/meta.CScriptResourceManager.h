/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CScriptResourceManager::AddToResourceManager)
    static int address;
    static int global_address;
    static const int id = 0x4704B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4704B0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4787F0, GAME_10US_COMPACT, H_CALL, 0x478000, 1,
        0x47EE12, GAME_10US_COMPACT, H_CALL, 0x47E090, 1,
        0x47EFC3, GAME_10US_COMPACT, H_CALL, 0x47E090, 2,
        0x48C385, GAME_10US_COMPACT, H_CALL, 0x48B590, 1>;
    using def_t = void(CScriptResourceManager *, int, unsigned int, CRunningScript *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptResourceManager *,int,unsigned int,CRunningScript *>, 0,1,2,3>;
META_END

META_BEGIN(CScriptResourceManager::RemoveFromResourceManager)
    static int address;
    static int global_address;
    static const int id = 0x470510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470510, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47F066, GAME_10US_COMPACT, H_CALL, 0x47E090, 1,
        0x47F42F, GAME_10US_COMPACT, H_CALL, 0x47F370, 1,
        0x48C3FB, GAME_10US_COMPACT, H_CALL, 0x48B590, 1,
        0x494795, GAME_10US_COMPACT, H_CALL, 0x493FE0, 1>;
    using def_t = bool(CScriptResourceManager *, int, unsigned int, CRunningScript *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptResourceManager *,int,unsigned int,CRunningScript *>, 0,1,2,3>;
META_END

META_BEGIN(CScriptResourceManager::HasResourceBeenRequested)
    static int address;
    static int global_address;
    static const int id = 0x470620;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470620, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B00D1, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1>;
    using def_t = bool(CScriptResourceManager *, int, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptResourceManager *,int,unsigned int>, 0,1,2>;
META_END

}
