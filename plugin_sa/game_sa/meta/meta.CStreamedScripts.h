/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStreamedScripts::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x470660;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470660, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B8E16, GAME_10US_COMPACT, H_CALL, 0x5B8AD0, 1>;
    using def_t = void(CStreamedScripts *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *>, 0>;
META_END

META_BEGIN(CStreamedScripts::ReInitialise)
    static int address;
    static int global_address;
    static const int id = 0x4706A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4706A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x40E568, GAME_10US_COMPACT, H_CALL, 0x40E560, 1>;
    using def_t = void(CStreamedScripts *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *>, 0>;
META_END

META_BEGIN(CStreamedScripts::RegisterScript)
    static int address;
    static int global_address;
    static const int id = 0x4706C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4706C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B6419, GAME_10US_COMPACT, H_CALL, 0x5B6170, 1>;
    using def_t = int(CStreamedScripts *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,char const *>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::FindStreamedScriptQuiet)
    static int address;
    static int global_address;
    static const int id = 0x4706F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4706F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x470740, GAME_10US_COMPACT, H_JUMP, 0x470740, 1>;
    using def_t = signed int(CStreamedScripts *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,char const *>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::FindStreamedScript)
    static int address;
    static int global_address;
    static const int id = 0x470740;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470740, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = signed int(CStreamedScripts *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,char const *>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::ReadStreamedScriptData)
    static int address;
    static int global_address;
    static const int id = 0x470750;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470750, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468F97, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void(CStreamedScripts *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *>, 0>;
META_END

META_BEGIN(CStreamedScripts::GetProperIndexFromIndexUsedByScript)
    static int address;
    static int global_address;
    static const int id = 0x470810;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470810, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x471CA7, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x472382, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x475025, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x475061, GAME_10US_COMPACT, H_CALL, 0x474900, 2,
        0x4766A1, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1,
        0x4766DD, GAME_10US_COMPACT, H_CALL, 0x4762D0, 2,
        0x47675A, GAME_10US_COMPACT, H_CALL, 0x4762D0, 3,
        0x476D28, GAME_10US_COMPACT, H_CALL, 0x4762D0, 4,
        0x476D56, GAME_10US_COMPACT, H_CALL, 0x4762D0, 5,
        0x476DB0, GAME_10US_COMPACT, H_CALL, 0x4762D0, 6>;
    using def_t = signed short(CStreamedScripts *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,short>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::LoadStreamedScript)
    static int address;
    static int global_address;
    static const int id = 0x470840;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470840, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x40CAB3, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1>;
    using def_t = void(CStreamedScripts *, RwStream *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,RwStream *,int>, 0,1,2>;
META_END

META_BEGIN(CStreamedScripts::StartNewStreamedScript)
    static int address;
    static int global_address;
    static const int id = 0x470890;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470890, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46B286, GAME_10US_COMPACT, H_CALL, 0x46B270, 1,
        0x47676D, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = CRunningScript *(CStreamedScripts *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,int>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::RemoveStreamedScriptFromMemory)
    static int address;
    static int global_address;
    static const int id = 0x4708E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4708E0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x408ABE, GAME_10US_COMPACT, H_CALL, 0x4089A0, 1,
        0x408C55, GAME_10US_COMPACT, H_CALL, 0x4089A0, 2>;
    using def_t = void(CStreamedScripts *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,int>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::GetStreamedScriptFilename)
    static int address;
    static int global_address;
    static const int id = 0x470900;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470900, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = char const *(CStreamedScripts *, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,unsigned short>, 0,1>;
META_END

META_BEGIN(CStreamedScripts::GetStreamedScriptWithThisStartAddress)
    static int address;
    static int global_address;
    static const int id = 0x470910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470910, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x465AD4, GAME_10US_COMPACT, H_CALL, 0x465AA0, 1>;
    using def_t = unsigned short(CStreamedScripts *, unsigned char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CStreamedScripts *,unsigned char *>, 0,1>;
META_END

}
