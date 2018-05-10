/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTheScripts::PrintListSizes)
    static int address;
    static int global_address;
    static const int id = 0x4646D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4646D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::DrawScriptSpritesAndRectangles)
    static int address;
    static int global_address;
    static const int id = 0x464980;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464980, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x58C092, GAME_10US_COMPACT, H_CALL, 0x58C080, 1>;
    using def_t = void(char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char>, 0>;
META_END

META_BEGIN(CTheScripts::WipeLocalVariableMemoryForMissionScript)
    static int address;
    static int global_address;
    static const int id = 0x464BB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464BB0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4899F0, GAME_10US_COMPACT, H_CALL, 0x489500, 1,
        0x489A70, GAME_10US_COMPACT, H_CALL, 0x489500, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CTheScripts::StartNewScript, CRunningScript *(*)(unsigned char *))
    static int address;
    static int global_address;
    static const int id = 0x464C20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464C20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x464D45, GAME_10US_COMPACT, H_CALL, 0x464D40, 1,
        0x46683B, GAME_10US_COMPACT, H_CALL, 0x465E60, 1,
        0x46944F, GAME_10US_COMPACT, H_CALL, 0x469390, 1,
        0x4708A9, GAME_10US_COMPACT, H_CALL, 0x470890, 1,
        0x4899FA, GAME_10US_COMPACT, H_CALL, 0x489500, 1,
        0x489A7A, GAME_10US_COMPACT, H_CALL, 0x489500, 2>;
    using def_t = CRunningScript *(unsigned char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *>, 0>;
META_END

META_BEGIN_OVERLOADED(CTheScripts::StartNewScript, int (*)(unsigned char *, unsigned short))
    static int address;
    static int global_address;
    static const int id = 0x464C90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464C90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D5323, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 1>;
    using def_t = int(unsigned char *, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned short>, 0,1>;
META_END

META_BEGIN(CTheScripts::GetScriptIndexFromPointer)
    static int address;
    static int global_address;
    static const int id = 0x464D20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464D20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D4F43, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 1>;
    using def_t = int(CRunningScript *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CRunningScript *>, 0>;
META_END

META_BEGIN(CTheScripts::StartTestScript)
    static int address;
    static int global_address;
    static const int id = 0x464D40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464D40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53BCC4, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1,
        0x53BE88, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::IsPlayerOnAMission)
    static int address;
    static int global_address;
    static const int id = 0x464D50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464D50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x44310A, GAME_10US_COMPACT, H_CALL, 0x442AD0, 1,
        0x44395B, GAME_10US_COMPACT, H_CALL, 0x443950, 1,
        0x446614, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x446639, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x446AB2, GAME_10US_COMPACT, H_CALL, 0x446610, 3,
        0x446D7A, GAME_10US_COMPACT, H_CALL, 0x446610, 4,
        0x454D40, GAME_10US_COMPACT, H_CALL, 0x454D20, 1,
        0x457CF7, GAME_10US_COMPACT, H_CALL, 0x457410, 1,
        0x457D68, GAME_10US_COMPACT, H_CALL, 0x457410, 2,
        0x45818E, GAME_10US_COMPACT, H_CALL, 0x457410, 3,
        0x4AF7BB, GAME_10US_COMPACT, H_CALL, 0x4AF760, 1,
        0x4C1762, GAME_10US_COMPACT, H_CALL, 0x4C1590, 1,
        0x4C313F, GAME_10US_COMPACT, H_CALL, 0x4C2FC0, 1,
        0x571582, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x585C4E, GAME_10US_COMPACT, H_CALL, 0x585BF0, 1,
        0x586D81, GAME_10US_COMPACT, H_CALL, 0x586D60, 1,
        0x5FC888, GAME_10US_COMPACT, H_CALL, 0x5FC800, 1,
        0x5FC8A1, GAME_10US_COMPACT, H_CALL, 0x5FC800, 2,
        0x5FC8BF, GAME_10US_COMPACT, H_CALL, 0x5FC800, 3,
        0x5FC8D6, GAME_10US_COMPACT, H_CALL, 0x5FC800, 4,
        0x5FC98D, GAME_10US_COMPACT, H_CALL, 0x5FC800, 5,
        0x61034D, GAME_10US_COMPACT, H_CALL, 0x610310, 1,
        0x6425C9, GAME_10US_COMPACT, H_CALL, 0x642510, 1,
        0x644323, GAME_10US_COMPACT, H_CALL, 0x644320, 1,
        0x661D0E, GAME_10US_COMPACT, H_CALL, 0x661BB0, 1,
        0x6CDA8D, GAME_10US_COMPACT, H_CALL, 0x6CD2F0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::CheckStreamedScriptVersion)
    static int address;
    static int global_address;
    static const int id = 0x464FF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x464FF0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47084E, GAME_10US_COMPACT, H_CALL, 0x470840, 1>;
    using def_t = char(RwStream *, char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwStream *,char *>, 0,1>;
META_END

META_BEGIN(CTheScripts::RemoveScriptTextureDictionary)
    static int address;
    static int global_address;
    static const int id = 0x465A40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x465A40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468C91, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x4841BB, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1,
        0x53BB00, GAME_10US_COMPACT, H_JUMP, 0x53BB00, 1,
        0x53CADD, GAME_10US_COMPACT, H_CALL, 0x53C900, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::Init)
    static int address;
    static int global_address;
    static const int id = 0x468D50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x468D50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53BDD7, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x5BA340, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1,
        0x5D4FD7, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::Process)
    static int address;
    static int global_address;
    static const int id = 0x46A000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A000, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x440A0D, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x53BCC9, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1,
        0x53BE8D, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x53BFC7, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1,
        0x618F05, GAME_10US_COMPACT, H_CALL, 0x618E90, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::ClearAllSuppressedCarModels)
    static int address;
    static int global_address;
    static const int id = 0x46A7C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A7C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468755, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x469290, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::ClearAllVehicleModelsBlockedByScript)
    static int address;
    static int global_address;
    static const int id = 0x46A840;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A840, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x469295, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::RemoveFromVehicleModelsBlockedByScript)
    static int address;
    static int global_address;
    static const int id = 0x46A860;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A860, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::HasVehicleModelBeenBlockedByScript)
    static int address;
    static int global_address;
    static const int id = 0x46A890;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46A890, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x611DAF, GAME_10US_COMPACT, H_CALL, 0x611C50, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::AddToWaitingForScriptBrainArray)
    static int address;
    static int global_address;
    static const int id = 0x46AB60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46AB60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46CE16, GAME_10US_COMPACT, H_CALL, 0x46CD80, 1,
        0x46CEA7, GAME_10US_COMPACT, H_CALL, 0x46CD80, 2>;
    using def_t = void(CEntity *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *,short>, 0,1>;
META_END

META_BEGIN(CTheScripts::RemoveFromWaitingForScriptBrainArray)
    static int address;
    static int global_address;
    static const int id = 0x46ABC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46ABC0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46B313, GAME_10US_COMPACT, H_CALL, 0x46B270, 1,
        0x59F6D4, GAME_10US_COMPACT, H_CALL, 0x59F660, 1,
        0x5E869D, GAME_10US_COMPACT, H_CALL, 0x5E8620, 1>;
    using def_t = int(CEntity *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *,short>, 0,1>;
META_END

META_BEGIN(CTheScripts::AddToVehicleModelsBlockedByScript)
    static int address;
    static int global_address;
    static const int id = 0x46B200;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46B200, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::ProcessWaitingForScriptBrainArray)
    static int address;
    static int global_address;
    static const int id = 0x46CF00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x46CF00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46A067, GAME_10US_COMPACT, H_CALL, 0x46A000, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::ReinitialiseSwitchStatementData)
    static int address;
    static int global_address;
    static const int id = 0x470370;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470370, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x469F9D, GAME_10US_COMPACT, H_CALL, 0x469F00, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::AddToSwitchJumpTable)
    static int address;
    static int global_address;
    static const int id = 0x470390;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470390, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x471800, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x471870, GAME_10US_COMPACT, H_CALL, 0x470A90, 2>;
    using def_t = double(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CTheScripts::UseSwitchJumpTable)
    static int address;
    static int global_address;
    static const int id = 0x4703C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4703C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47182E, GAME_10US_COMPACT, H_CALL, 0x470A90, 1>;
    using def_t = void(int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int *>, 0>;
META_END

META_BEGIN(CTheScripts::InitialiseConnectLodObjects)
    static int address;
    static int global_address;
    static const int id = 0x470940;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470940, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned short>, 0>;
META_END

META_BEGIN(CTheScripts::InitialiseAllConnectLodObjects)
    static int address;
    static int global_address;
    static const int id = 0x470960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470960, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46929A, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::AddToListOfConnectedLodObjects)
    static int address;
    static int global_address;
    static const int id = 0x470980;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470980, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x474180, GAME_10US_COMPACT, H_CALL, 0x472310, 1>;
    using def_t = void(CObject *, CObject *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CObject *,CObject *>, 0,1>;
META_END

META_BEGIN(CTheScripts::ScriptConnectLodsFunction)
    static int address;
    static int global_address;
    static const int id = 0x470A20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x470A20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x474179, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x5D33AB, GAME_10US_COMPACT, H_CALL, 0x5D3390, 1>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CTheScripts::InitialiseSpecialAnimGroup)
    static int address;
    static int global_address;
    static const int id = 0x474710;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x474710, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned short>, 0>;
META_END

META_BEGIN(CTheScripts::InitialiseSpecialAnimGroupsAttachedToCharModels)
    static int address;
    static int global_address;
    static const int id = 0x474730;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x474730, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46929F, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::AddToListOfSpecialAnimGroupsAttachedToCharModels)
    static int address;
    static int global_address;
    static const int id = 0x474750;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x474750, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x475C31, GAME_10US_COMPACT, H_CALL, 0x474900, 1>;
    using def_t = void(int, char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,char *>, 0,1>;
META_END

META_BEGIN(CTheScripts::ScriptAttachAnimGroupToCharModel)
    static int address;
    static int global_address;
    static const int id = 0x474800;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x474800, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x475C26, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x5D5267, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 1>;
    using def_t = bool(int, char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,char *>, 0,1>;
META_END

META_BEGIN(CTheScripts::GetUniqueScriptThingIndex)
    static int address;
    static int global_address;
    static const int id = 0x4810C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4810C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46C35A, GAME_10US_COMPACT, H_CALL, 0x46B460, 1>;
    using def_t = unsigned int(int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,unsigned char>, 0,1>;
META_END

META_BEGIN(CTheScripts::DrawScriptSpheres)
    static int address;
    static int global_address;
    static const int id = 0x4810E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4810E0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46A05D, GAME_10US_COMPACT, H_CALL, 0x46A000, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::AddToBuildingSwapArray)
    static int address;
    static int global_address;
    static const int id = 0x481140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x481140, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4849BD, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = void(CBuilding *, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CBuilding *,int,int>, 0,1,2>;
META_END

META_BEGIN(CTheScripts::AddToInvisibilitySwapArray)
    static int address;
    static int global_address;
    static const int id = 0x481200;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x481200, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x483195, GAME_10US_COMPACT, H_CALL, 0x481300, 1>;
    using def_t = void(CEntity *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *,bool>, 0,1>;
META_END

META_BEGIN(CTheScripts::UndoBuildingSwaps)
    static int address;
    static int global_address;
    static const int id = 0x481290;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x481290, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53C59E, GAME_10US_COMPACT, H_CALL, 0x53C550, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::UndoEntityInvisibilitySettings)
    static int address;
    static int global_address;
    static const int id = 0x4812D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4812D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53C5A3, GAME_10US_COMPACT, H_CALL, 0x53C550, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::GetNewUniqueScriptThingIndex)
    static int address;
    static int global_address;
    static const int id = 0x483720;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x483720, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4729F4, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x472A82, GAME_10US_COMPACT, H_CALL, 0x472310, 2,
        0x4787BE, GAME_10US_COMPACT, H_CALL, 0x478000, 1,
        0x483B95, GAME_10US_COMPACT, H_CALL, 0x483B30, 1,
        0x4914EF, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x4918BA, GAME_10US_COMPACT, H_CALL, 0x490DB0, 2,
        0x491BFB, GAME_10US_COMPACT, H_CALL, 0x490DB0, 3,
        0x49229E, GAME_10US_COMPACT, H_CALL, 0x490DB0, 4,
        0x492FC6, GAME_10US_COMPACT, H_CALL, 0x492F90, 1,
        0x493153, GAME_10US_COMPACT, H_CALL, 0x493000, 1,
        0x4935CF, GAME_10US_COMPACT, H_CALL, 0x4935A0, 1,
        0x49732C, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x53A433, GAME_10US_COMPACT, H_CALL, 0x53A270, 1>;
    using def_t = unsigned int(unsigned int, char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int,char>, 0,1>;
META_END

META_BEGIN(CTheScripts::GetActualScriptThingIndex)
    static int address;
    static int global_address;
    static const int id = 0x4839A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4839A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468B6F, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x468BAA, GAME_10US_COMPACT, H_CALL, 0x468560, 2,
        0x468BCD, GAME_10US_COMPACT, H_CALL, 0x468560, 3,
        0x468BF0, GAME_10US_COMPACT, H_CALL, 0x468560, 4,
        0x468C41, GAME_10US_COMPACT, H_CALL, 0x468560, 5,
        0x468C5A, GAME_10US_COMPACT, H_CALL, 0x468560, 6,
        0x468C78, GAME_10US_COMPACT, H_CALL, 0x468560, 7,
        0x46BEB8, GAME_10US_COMPACT, H_CALL, 0x46B460, 1,
        0x46C4C9, GAME_10US_COMPACT, H_CALL, 0x46B460, 2,
        0x46C5A0, GAME_10US_COMPACT, H_CALL, 0x46B460, 3,
        0x46D09F, GAME_10US_COMPACT, H_CALL, 0x46D050, 1,
        0x46D0E5, GAME_10US_COMPACT, H_CALL, 0x46D050, 2,
        0x46E4DD, GAME_10US_COMPACT, H_CALL, 0x46D050, 3,
        0x46E68D, GAME_10US_COMPACT, H_CALL, 0x46D050, 4,
        0x471B0F, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x471B34, GAME_10US_COMPACT, H_CALL, 0x470A90, 2,
        0x471C62, GAME_10US_COMPACT, H_CALL, 0x470A90, 3,
        0x4729BD, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x4729D1, GAME_10US_COMPACT, H_CALL, 0x472310, 2,
        0x472A4B, GAME_10US_COMPACT, H_CALL, 0x472310, 3,
        0x472A5F, GAME_10US_COMPACT, H_CALL, 0x472310, 4,
        0x472E85, GAME_10US_COMPACT, H_CALL, 0x472310, 5,
        0x472F68, GAME_10US_COMPACT, H_CALL, 0x472310, 6,
        0x4731E4, GAME_10US_COMPACT, H_CALL, 0x472310, 7,
        0x476E1A, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1,
        0x477334, GAME_10US_COMPACT, H_CALL, 0x4762D0, 2,
        0x477384, GAME_10US_COMPACT, H_CALL, 0x4762D0, 3,
        0x4785D7, GAME_10US_COMPACT, H_CALL, 0x478000, 1,
        0x478681, GAME_10US_COMPACT, H_CALL, 0x478000, 2,
        0x478777, GAME_10US_COMPACT, H_CALL, 0x478000, 3,
        0x47878D, GAME_10US_COMPACT, H_CALL, 0x478000, 4,
        0x478E6D, GAME_10US_COMPACT, H_CALL, 0x478000, 5,
        0x47B390, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x47B64C, GAME_10US_COMPACT, H_CALL, 0x47A760, 2,
        0x47FF95, GAME_10US_COMPACT, H_CALL, 0x47FA30, 1,
        0x47FFD5, GAME_10US_COMPACT, H_CALL, 0x47FA30, 2,
        0x483BA7, GAME_10US_COMPACT, H_CALL, 0x483BA0, 1,
        0x484B2E, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1,
        0x4914CF, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x49155A, GAME_10US_COMPACT, H_CALL, 0x490DB0, 2,
        0x491879, GAME_10US_COMPACT, H_CALL, 0x490DB0, 3,
        0x49191A, GAME_10US_COMPACT, H_CALL, 0x490DB0, 4,
        0x491963, GAME_10US_COMPACT, H_CALL, 0x490DB0, 5,
        0x491A5C, GAME_10US_COMPACT, H_CALL, 0x490DB0, 6,
        0x491ACF, GAME_10US_COMPACT, H_CALL, 0x490DB0, 7,
        0x491AE9, GAME_10US_COMPACT, H_CALL, 0x490DB0, 8,
        0x491C45, GAME_10US_COMPACT, H_CALL, 0x490DB0, 9,
        0x491C90, GAME_10US_COMPACT, H_CALL, 0x490DB0, 10,
        0x492271, GAME_10US_COMPACT, H_CALL, 0x490DB0, 11,
        0x4922EA, GAME_10US_COMPACT, H_CALL, 0x490DB0, 12,
        0x4923CC, GAME_10US_COMPACT, H_CALL, 0x490DB0, 13,
        0x4926FB, GAME_10US_COMPACT, H_CALL, 0x490DB0, 14,
        0x492FD7, GAME_10US_COMPACT, H_CALL, 0x492FD0, 1,
        0x493167, GAME_10US_COMPACT, H_CALL, 0x493160, 1,
        0x493367, GAME_10US_COMPACT, H_CALL, 0x493360, 1,
        0x493427, GAME_10US_COMPACT, H_CALL, 0x493420, 1,
        0x493487, GAME_10US_COMPACT, H_CALL, 0x493480, 1,
        0x4934F7, GAME_10US_COMPACT, H_CALL, 0x4934F0, 1,
        0x4936C7, GAME_10US_COMPACT, H_CALL, 0x4936C0, 1,
        0x49390A, GAME_10US_COMPACT, H_CALL, 0x493900, 1,
        0x494035, GAME_10US_COMPACT, H_CALL, 0x493FE0, 1,
        0x4940BF, GAME_10US_COMPACT, H_CALL, 0x493FE0, 2,
        0x494249, GAME_10US_COMPACT, H_CALL, 0x493FE0, 3,
        0x494334, GAME_10US_COMPACT, H_CALL, 0x493FE0, 4,
        0x494372, GAME_10US_COMPACT, H_CALL, 0x493FE0, 5,
        0x4943B1, GAME_10US_COMPACT, H_CALL, 0x493FE0, 6,
        0x494414, GAME_10US_COMPACT, H_CALL, 0x493FE0, 7,
        0x494779, GAME_10US_COMPACT, H_CALL, 0x493FE0, 8,
        0x494A1A, GAME_10US_COMPACT, H_CALL, 0x493FE0, 9,
        0x494A8F, GAME_10US_COMPACT, H_CALL, 0x493FE0, 10,
        0x494B91, GAME_10US_COMPACT, H_CALL, 0x493FE0, 11,
        0x494BCD, GAME_10US_COMPACT, H_CALL, 0x493FE0, 12,
        0x494C0D, GAME_10US_COMPACT, H_CALL, 0x493FE0, 13,
        0x494CD9, GAME_10US_COMPACT, H_CALL, 0x493FE0, 14,
        0x4953EF, GAME_10US_COMPACT, H_CALL, 0x493FE0, 15,
        0x497293, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x4972BF, GAME_10US_COMPACT, H_CALL, 0x496E00, 2,
        0x49730C, GAME_10US_COMPACT, H_CALL, 0x496E00, 3,
        0x497457, GAME_10US_COMPACT, H_CALL, 0x496E00, 4,
        0x497517, GAME_10US_COMPACT, H_CALL, 0x496E00, 5,
        0x497574, GAME_10US_COMPACT, H_CALL, 0x496E00, 6,
        0x4979C7, GAME_10US_COMPACT, H_CALL, 0x496E00, 7,
        0x497BD8, GAME_10US_COMPACT, H_CALL, 0x496E00, 8,
        0x497E67, GAME_10US_COMPACT, H_CALL, 0x496E00, 9,
        0x497F0A, GAME_10US_COMPACT, H_CALL, 0x496E00, 10,
        0x498760, GAME_10US_COMPACT, H_CALL, 0x496E00, 11,
        0x4987BB, GAME_10US_COMPACT, H_CALL, 0x496E00, 12,
        0x498813, GAME_10US_COMPACT, H_CALL, 0x496E00, 13,
        0x49889F, GAME_10US_COMPACT, H_CALL, 0x496E00, 14,
        0x5870B9, GAME_10US_COMPACT, H_CALL, 0x587000, 1>;
    using def_t = signed int(int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,unsigned char>, 0,1>;
META_END

META_BEGIN(CTheScripts::AddScriptSphere)
    static int address;
    static int global_address;
    static const int id = 0x483B30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x483B30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x484B5A, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = unsigned int(unsigned int, CVector, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int,CVector,float>, 0,1,2>;
META_END

META_BEGIN(CTheScripts::RemoveScriptSphere)
    static int address;
    static int global_address;
    static const int id = 0x483BA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x483BA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x484B86, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::ScriptDebugCircle2D)
    static int address;
    static int global_address;
    static const int id = 0x485C20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x485C20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(float, float, float, float, CRGBA);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,float,CRGBA>, 0,1,2,3,4>;
META_END

META_BEGIN(CTheScripts::HighlightImportantArea)
    static int address;
    static int global_address;
    static const int id = 0x485E00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x485E00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x467989, GAME_10US_COMPACT, H_CALL, 0x466DE0, 1,
        0x467A96, GAME_10US_COMPACT, H_CALL, 0x466DE0, 2,
        0x467FA0, GAME_10US_COMPACT, H_CALL, 0x466DE0, 3,
        0x46805E, GAME_10US_COMPACT, H_CALL, 0x466DE0, 4,
        0x4801D7, GAME_10US_COMPACT, H_CALL, 0x47FA30, 1,
        0x48704F, GAME_10US_COMPACT, H_CALL, 0x486D80, 1,
        0x4873A4, GAME_10US_COMPACT, H_CALL, 0x4870F0, 1,
        0x4876B2, GAME_10US_COMPACT, H_CALL, 0x487420, 1,
        0x4879B2, GAME_10US_COMPACT, H_CALL, 0x487720, 1,
        0x487CA9, GAME_10US_COMPACT, H_CALL, 0x487A20, 1,
        0x487F13, GAME_10US_COMPACT, H_CALL, 0x487D10, 1,
        0x488E6A, GAME_10US_COMPACT, H_CALL, 0x488B50, 1,
        0x489111, GAME_10US_COMPACT, H_CALL, 0x488EC0, 1,
        0x489378, GAME_10US_COMPACT, H_CALL, 0x489150, 1>;
    using def_t = void(int, float, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,float,float,float,float,float>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CTheScripts::HighlightImportantAngledArea)
    static int address;
    static int global_address;
    static const int id = 0x485EF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x485EF0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x488374, GAME_10US_COMPACT, H_CALL, 0x487F60, 1,
        0x488735, GAME_10US_COMPACT, H_CALL, 0x4883F0, 1,
        0x488AFA, GAME_10US_COMPACT, H_CALL, 0x488780, 1>;
    using def_t = void(unsigned int, float, float, float, float, float, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int,float,float,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN(CTheScripts::IsPedStopped)
    static int address;
    static int global_address;
    static const int id = 0x486110;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486110, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47F65B, GAME_10US_COMPACT, H_CALL, 0x47F370, 1,
        0x486E42, GAME_10US_COMPACT, H_CALL, 0x486D80, 1,
        0x487FDC, GAME_10US_COMPACT, H_CALL, 0x487F60, 1,
        0x488C1A, GAME_10US_COMPACT, H_CALL, 0x488B50, 1>;
    using def_t = bool(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CTheScripts::IsVehicleStopped)
    static int address;
    static int global_address;
    static const int id = 0x4861F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4861F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47D6EE, GAME_10US_COMPACT, H_CALL, 0x47D210, 1,
        0x488F2F, GAME_10US_COMPACT, H_CALL, 0x488EC0, 1>;
    using def_t = bool(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CTheScripts::RemoveThisPed)
    static int address;
    static int global_address;
    static const int id = 0x486240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486240, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x409DE2, GAME_10US_COMPACT, H_CALL, 0x409D10, 1,
        0x4677A5, GAME_10US_COMPACT, H_CALL, 0x466DE0, 1,
        0x482AD5, GAME_10US_COMPACT, H_CALL, 0x481300, 1>;
    using def_t = void(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CTheScripts::CleanUpThisPed)
    static int address;
    static int global_address;
    static const int id = 0x486300;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486300, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468B24, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x47D73D, GAME_10US_COMPACT, H_CALL, 0x47D210, 1>;
    using def_t = void(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CTheScripts::CleanUpThisVehicle)
    static int address;
    static int global_address;
    static const int id = 0x486670;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486670, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468AEB, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x47D775, GAME_10US_COMPACT, H_CALL, 0x47D210, 1,
        0x64CED4, GAME_10US_COMPACT, H_CALL, 0x64CEA0, 1,
        0x64D186, GAME_10US_COMPACT, H_CALL, 0x64CF40, 1>;
    using def_t = void(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CTheScripts::CleanUpThisObject)
    static int address;
    static int global_address;
    static const int id = 0x4866C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4866C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468B5D, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x479124, GAME_10US_COMPACT, H_CALL, 0x478000, 1,
        0x47D7A7, GAME_10US_COMPACT, H_CALL, 0x47D210, 1>;
    using def_t = void(CObject *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CTheScripts::ReadObjectNamesFromScript)
    static int address;
    static int global_address;
    static const int id = 0x486720;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486720, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468F40, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::UpdateObjectIndices)
    static int address;
    static int global_address;
    static const int id = 0x486780;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486780, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468F45, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::ReadMultiScriptFileOffsetsFromScript)
    static int address;
    static int global_address;
    static const int id = 0x4867C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4867C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468F85, GAME_10US_COMPACT, H_CALL, 0x468D50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::DrawDebugCube)
    static int address;
    static int global_address;
    static const int id = 0x486840;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486840, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x480206, GAME_10US_COMPACT, H_CALL, 0x47FA30, 1,
        0x48709A, GAME_10US_COMPACT, H_CALL, 0x486D80, 1,
        0x4873E4, GAME_10US_COMPACT, H_CALL, 0x4870F0, 1,
        0x4876F2, GAME_10US_COMPACT, H_CALL, 0x487420, 1,
        0x4879F2, GAME_10US_COMPACT, H_CALL, 0x487720, 1,
        0x487CF7, GAME_10US_COMPACT, H_CALL, 0x487A20, 1,
        0x487F4F, GAME_10US_COMPACT, H_CALL, 0x487D10, 1,
        0x488E87, GAME_10US_COMPACT, H_CALL, 0x488B50, 1,
        0x489132, GAME_10US_COMPACT, H_CALL, 0x488EC0, 1,
        0x489399, GAME_10US_COMPACT, H_CALL, 0x489150, 1>;
    using def_t = void(float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CTheScripts::DrawDebugAngledSquare)
    static int address;
    static int global_address;
    static const int id = 0x486990;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486990, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x477F77, GAME_10US_COMPACT, H_CALL, 0x477DA0, 1,
        0x4883A5, GAME_10US_COMPACT, H_CALL, 0x487F60, 1,
        0x48876A, GAME_10US_COMPACT, H_CALL, 0x4883F0, 1,
        0x488B2F, GAME_10US_COMPACT, H_CALL, 0x488780, 1>;
    using def_t = void(float, float, float, float, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CTheScripts::ClearSpaceForMissionEntity)
    static int address;
    static int global_address;
    static const int id = 0x486B00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486B00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x432048, GAME_10US_COMPACT, H_CALL, 0x431F80, 1,
        0x4321B4, GAME_10US_COMPACT, H_CALL, 0x431F80, 2,
        0x434388, GAME_10US_COMPACT, H_CALL, 0x4342A0, 1,
        0x4343DA, GAME_10US_COMPACT, H_CALL, 0x4342A0, 2,
        0x43A421, GAME_10US_COMPACT, H_CALL, 0x43A0B0, 1,
        0x4409D3, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x4422A6, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x442649, GAME_10US_COMPACT, H_CALL, 0x442480, 1,
        0x44276E, GAME_10US_COMPACT, H_CALL, 0x442480, 2,
        0x464E70, GAME_10US_COMPACT, H_CALL, 0x464DC0, 1,
        0x464EB5, GAME_10US_COMPACT, H_CALL, 0x464DC0, 2,
        0x4669B9, GAME_10US_COMPACT, H_CALL, 0x465E60, 1,
        0x46770C, GAME_10US_COMPACT, H_CALL, 0x466DE0, 1,
        0x469872, GAME_10US_COMPACT, H_CALL, 0x469390, 1,
        0x473BE6, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x47D680, GAME_10US_COMPACT, H_CALL, 0x47D210, 1,
        0x47F5E5, GAME_10US_COMPACT, H_CALL, 0x47F370, 1,
        0x482F77, GAME_10US_COMPACT, H_CALL, 0x481300, 1,
        0x4834BC, GAME_10US_COMPACT, H_CALL, 0x481300, 2,
        0x484F6B, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1,
        0x48C98D, GAME_10US_COMPACT, H_CALL, 0x48B590, 1,
        0x491DE3, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1>;
    using def_t = void(CVector const *, CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *,CEntity *>, 0,1>;
META_END

META_BEGIN(CTheScripts::AddScriptEffectSystem)
    static int address;
    static int global_address;
    static const int id = 0x492F90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x492F90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4942D1, GAME_10US_COMPACT, H_CALL, 0x493FE0, 1,
        0x494D8E, GAME_10US_COMPACT, H_CALL, 0x493FE0, 2>;
    using def_t = int(FxSystem_c *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<FxSystem_c *>, 0>;
META_END

META_BEGIN(CTheScripts::RemoveScriptEffectSystem)
    static int address;
    static int global_address;
    static const int id = 0x492FD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x492FD0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468B98, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x4786AC, GAME_10US_COMPACT, H_CALL, 0x478000, 1,
        0x4943D8, GAME_10US_COMPACT, H_CALL, 0x493FE0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::AddScriptSearchLight)
    static int address;
    static int global_address;
    static const int id = 0x493000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493000, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4974CD, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x497A58, GAME_10US_COMPACT, H_CALL, 0x496E00, 2>;
    using def_t = int(float, float, float, CEntity *, float, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,CEntity *,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CTheScripts::RemoveScriptSearchLight)
    static int address;
    static int global_address;
    static const int id = 0x493160;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493160, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468C69, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x49752E, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CTheScripts::IsPointWithinSearchLight)
    static int address;
    static int global_address;
    static const int id = 0x493280;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493280, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x493942, GAME_10US_COMPACT, H_CALL, 0x493900, 1,
        0x4939AB, GAME_10US_COMPACT, H_CALL, 0x493960, 1>;
    using def_t = bool(CVector *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector *,int>, 0,1>;
META_END

META_BEGIN(CTheScripts::MoveSearchLightBetweenTwoPoints)
    static int address;
    static int global_address;
    static const int id = 0x493360;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493360, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4975D6, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = void(int, float, float, float, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CTheScripts::MoveSearchLightToEntity)
    static int address;
    static int global_address;
    static const int id = 0x493420;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493420, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x497647, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x497969, GAME_10US_COMPACT, H_CALL, 0x496E00, 2>;
    using def_t = void(int, CEntity *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,CEntity *,float>, 0,1,2>;
META_END

META_BEGIN(CTheScripts::MoveSearchLightToPointAndStop)
    static int address;
    static int global_address;
    static const int id = 0x493480;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493480, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x49760F, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = void(int, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,float,float,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CTheScripts::AttachSearchlightToSearchlightObject)
    static int address;
    static int global_address;
    static const int id = 0x4934F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4934F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x497DA9, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = void(int, CObject *, CObject *, CObject *, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,CObject *,CObject *,CObject *,float,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CTheScripts::AddScriptCheckpoint)
    static int address;
    static int global_address;
    static const int id = 0x4935A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4935A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x497ED7, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = int(float, float, float, float, float, float, float, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,float,int>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CTheScripts::RemoveScriptCheckpoint)
    static int address;
    static int global_address;
    static const int id = 0x4936C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4936C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x468C87, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x497F21, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::IsEntityWithinSearchLight)
    static int address;
    static int global_address;
    static const int id = 0x493900;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493900, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x49767E, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x49799F, GAME_10US_COMPACT, H_CALL, 0x496E00, 2>;
    using def_t = bool(unsigned int, CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int,CEntity *>, 0,1>;
META_END

META_BEGIN(CTheScripts::IsEntityWithinAnySearchLight)
    static int address;
    static int global_address;
    static const int id = 0x493960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493960, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46C1F7, GAME_10US_COMPACT, H_CALL, 0x46B460, 1>;
    using def_t = bool(CEntity *, int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *,int *>, 0,1>;
META_END

META_BEGIN(CTheScripts::ProcessAllSearchLights)
    static int address;
    static int global_address;
    static const int id = 0x4939F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4939F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x46A062, GAME_10US_COMPACT, H_CALL, 0x46A000, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::RenderAllSearchLights)
    static int address;
    static int global_address;
    static const int id = 0x493E30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x493E30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53DE57, GAME_10US_COMPACT, H_CALL, 0x53D950, 1,
        0x53E1D6, GAME_10US_COMPACT, H_CALL, 0x53E170, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::DoScriptSetupAfterPoolsHaveLoaded)
    static int address;
    static int global_address;
    static const int id = 0x5D3390;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D3390, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D1907, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::Save)
    static int address;
    static int global_address;
    static const int id = 0x5D4C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D4C40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D14D5, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::Load)
    static int address;
    static int global_address;
    static const int id = 0x5D4FD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D4FD0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5D18F0, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
