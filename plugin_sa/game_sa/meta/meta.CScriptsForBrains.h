/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CScriptsForBrains::Init)
    static int address;
    static int global_address;
    static const int id = 0x46A8C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A8C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468DFE, GAME_10US_COMPACT, H_CALL, 0x468D50, 1,
        0x46B263, GAME_10US_COMPACT, H_CALL, 0x46B260, 1>;
    using def_t = void(CScriptsForBrains *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *>, 0>;
META_END

META_BEGIN(CScriptsForBrains::SwitchAllObjectBrainsWithThisID)
    static int address;
    static int global_address;
    static const int id = 0x46A900;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A900, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47A5C2, GAME_10US_COMPACT, H_CALL, 0x479DA0, 1,
        0x47A5D8, GAME_10US_COMPACT, H_CALL, 0x479DA0, 2>;
    using def_t = void(CScriptsForBrains *, signed char, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,signed char,bool>, 0,1,2>;
META_END

META_BEGIN(CScriptsForBrains::AddNewScriptBrain)
    static int address;
    static int global_address;
    static const int id = 0x46A930;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A930, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x476D86, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1,
        0x476DF6, GAME_10US_COMPACT, H_CALL, 0x4762D0, 2>;
    using def_t = void(CScriptsForBrains *, short, short, unsigned short, signed char, signed char, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,short,short,unsigned short,signed char,signed char,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CScriptsForBrains::AddNewStreamedScriptBrainForCodeUse)
    static int address;
    static int global_address;
    static const int id = 0x46A9C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A9C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x471CDD, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x4723BA, GAME_10US_COMPACT, H_CALL, 0x472310, 1>;
    using def_t = void(CScriptsForBrains *, short, char *, signed char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,short,char *,signed char>, 0,1,2,3>;
META_END

META_BEGIN(CScriptsForBrains::GetIndexOfScriptBrainWithThisName)
    static int address;
    static int global_address;
    static const int id = 0x46AA30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46AA30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46AA8A, GAME_10US_COMPACT, H_CALL, 0x46AA80, 1,
        0x46AAEA, GAME_10US_COMPACT, H_CALL, 0x46AAE0, 1,
        0x46AB2A, GAME_10US_COMPACT, H_CALL, 0x46AB20, 1,
        0x46B3AB, GAME_10US_COMPACT, H_CALL, 0x46B390, 1,
        0x46CEDE, GAME_10US_COMPACT, H_CALL, 0x46CED0, 1>;
    using def_t = signed short(CScriptsForBrains *, char const *, signed char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,char const *,signed char>, 0,1,2>;
META_END

META_BEGIN(CScriptsForBrains::RequestAttractorScriptBrainWithThisName)
    static int address;
    static int global_address;
    static const int id = 0x46AA80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46AA80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x533801, GAME_10US_COMPACT, H_CALL, 0x533790, 1>;
    using def_t = void(CScriptsForBrains *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,char const *>, 0,1>;
META_END

META_BEGIN(CScriptsForBrains::MarkAttractorScriptBrainWithThisNameAsNoLongerNeeded)
    static int address;
    static int global_address;
    static const int id = 0x46AAE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46AAE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x533C46, GAME_10US_COMPACT, H_CALL, 0x533BF0, 1>;
    using def_t = void(CScriptsForBrains *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,char const *>, 0,1>;
META_END

META_BEGIN(CScriptsForBrains::HasAttractorScriptBrainWithThisNameLoaded)
    static int address;
    static int global_address;
    static const int id = 0x46AB20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46AB20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x63876E, GAME_10US_COMPACT, H_CALL, 0x6385D0, 1>;
    using def_t = bool(CScriptsForBrains *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,char const *>, 0,1>;
META_END

CTOR_META_BEGIN(CScriptsForBrains)
    static int address;
    static int global_address;
    static const int id = 0x46B260;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46B260, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x84A745, GAME_10US_COMPACT, H_JUMP, 0x84A740, 1>;
    using def_t = void(CScriptsForBrains *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *>, 0>;
META_END

META_BEGIN(CScriptsForBrains::StartNewStreamedScriptBrain)
    static int address;
    static int global_address;
    static const int id = 0x46B270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46B270, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46B3BE, GAME_10US_COMPACT, H_CALL, 0x46B390, 1,
        0x46CE55, GAME_10US_COMPACT, H_CALL, 0x46CD80, 1,
        0x46CFCD, GAME_10US_COMPACT, H_CALL, 0x46CF00, 1>;
    using def_t = void(CScriptsForBrains *, unsigned char, CEntity *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,unsigned char,CEntity *,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN(CScriptsForBrains::StartAttractorScriptBrainWithThisName)
    static int address;
    static int global_address;
    static const int id = 0x46B390;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46B390, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6387B9, GAME_10US_COMPACT, H_CALL, 0x6385D0, 1>;
    using def_t = void(CScriptsForBrains *, char const *, CEntity *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,char const *,CEntity *,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN(CScriptsForBrains::IsObjectWithinBrainActivationRange)
    static int address;
    static int global_address;
    static const int id = 0x46B3D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46B3D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46D005, GAME_10US_COMPACT, H_CALL, 0x46CF00, 1,
        0x47873D, GAME_10US_COMPACT, H_CALL, 0x478000, 1>;
    using def_t = bool(CScriptsForBrains *, CObject *, CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,CObject *,CVector const *>, 0,1,2>;
META_END

META_BEGIN(CScriptsForBrains::StartOrRequestNewStreamedScriptBrain)
    static int address;
    static int global_address;
    static const int id = 0x46CD80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46CD80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46CEF3, GAME_10US_COMPACT, H_CALL, 0x46CED0, 1,
        0x46D024, GAME_10US_COMPACT, H_CALL, 0x46CF00, 1,
        0x46FFCB, GAME_10US_COMPACT, H_CALL, 0x46FF20, 1>;
    using def_t = void(CScriptsForBrains *, unsigned char, CEntity *, signed char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,unsigned char,CEntity *,signed char,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN(CScriptsForBrains::StartOrRequestNewStreamedScriptBrainWithThisName)
    static int address;
    static int global_address;
    static const int id = 0x46CED0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46CED0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x596793, GAME_10US_COMPACT, H_CALL, 0x5965E0, 1>;
    using def_t = void(CScriptsForBrains *, char const *, CEntity *, signed char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,char const *,CEntity *,signed char>, 0,1,2,3>;
META_END

META_BEGIN(CScriptsForBrains::CheckIfNewEntityNeedsScript)
    static int address;
    static int global_address;
    static const int id = 0x46FF20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46FF20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x59EAF7, GAME_10US_COMPACT, H_CALL, 0x59EAC0, 1,
        0x61590C, GAME_10US_COMPACT, H_CALL, 0x614720, 1,
        0x6F3D76, GAME_10US_COMPACT, H_CALL, 0x6F34D0, 1>;
    using def_t = void(CScriptsForBrains *, CEntity *, signed char, void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CScriptsForBrains *,CEntity *,signed char,void *>, 0,1,2,3>;
META_END

}
