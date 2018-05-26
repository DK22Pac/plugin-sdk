/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTheScripts::IsPlayerOnAMission)
    static int address;
    static int global_address;
    static const int id = 0x44FE30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44FE30, 0x44FE30, 0x44FD40>;
    // total references count: 10en (21), 11en (21), steam (21)
    using refs_t = RefList<
        0x42BED4, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x43F0B4, GAME_10EN, H_CALL, 0x43F050, 1,
        0x440C4D, GAME_10EN, H_CALL, 0x440030, 1,
        0x441523, GAME_10EN, H_CALL, 0x440030, 2,
        0x4BE4E7, GAME_10EN, H_CALL, 0x4BCA90, 1,
        0x4C3F5C, GAME_10EN, H_CALL, 0x4C3F20, 1,
        0x4C5697, GAME_10EN, H_CALL, 0x4C5680, 1,
        0x501126, GAME_10EN, H_CALL, 0x500C60, 1,
        0x514EBE, GAME_10EN, H_CALL, 0x514B50, 1,
        0x514F8F, GAME_10EN, H_CALL, 0x514B50, 2,
        0x514FF6, GAME_10EN, H_CALL, 0x514B50, 3,
        0x5153AF, GAME_10EN, H_CALL, 0x5150E0, 1,
        0x51546D, GAME_10EN, H_CALL, 0x5150E0, 2,
        0x5154D6, GAME_10EN, H_CALL, 0x5150E0, 3,
        0x51DF09, GAME_10EN, H_CALL, 0x51CA70, 1,
        0x531006, GAME_10EN, H_CALL, 0x530FB0, 1,
        0x53BDFB, GAME_10EN, H_CALL, 0x53BA80, 1,
        0x55923D, GAME_10EN, H_CALL, 0x557320, 1,
        0x6139CD, GAME_10EN, H_CALL, 0x613920, 1,
        0x613A18, GAME_10EN, H_CALL, 0x613920, 2,
        0x613A5B, GAME_10EN, H_CALL, 0x613920, 3,
        0x42BED4, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x43F0B4, GAME_11EN, H_CALL, 0x43F050, 1,
        0x440C4D, GAME_11EN, H_CALL, 0x440030, 1,
        0x441523, GAME_11EN, H_CALL, 0x440030, 2,
        0x4BE507, GAME_11EN, H_CALL, 0x4BCAB0, 1,
        0x4C3F7C, GAME_11EN, H_CALL, 0x4C3F40, 1,
        0x4C56B7, GAME_11EN, H_CALL, 0x4C56A0, 1,
        0x501146, GAME_11EN, H_CALL, 0x500C80, 1,
        0x514EDE, GAME_11EN, H_CALL, 0x514B70, 1,
        0x514FAF, GAME_11EN, H_CALL, 0x514B70, 2,
        0x515016, GAME_11EN, H_CALL, 0x514B70, 3,
        0x5153CF, GAME_11EN, H_CALL, 0x515100, 1,
        0x51548D, GAME_11EN, H_CALL, 0x515100, 2,
        0x5154F6, GAME_11EN, H_CALL, 0x515100, 3,
        0x51DF29, GAME_11EN, H_CALL, 0x51CA90, 1,
        0x531026, GAME_11EN, H_CALL, 0x530FD0, 1,
        0x53BE1B, GAME_11EN, H_CALL, 0x53BAA0, 1,
        0x55925D, GAME_11EN, H_CALL, 0x557340, 1,
        0x6139AD, GAME_11EN, H_CALL, 0x613900, 1,
        0x6139F8, GAME_11EN, H_CALL, 0x613900, 2,
        0x613A3B, GAME_11EN, H_CALL, 0x613900, 3,
        0x42BEA4, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x43F024, GAME_STEAM, H_CALL, 0x43EFC0, 1,
        0x440BBD, GAME_STEAM, H_CALL, 0x43FFA0, 1,
        0x441493, GAME_STEAM, H_CALL, 0x43FFA0, 2,
        0x4BE3B7, GAME_STEAM, H_CALL, 0x4BC960, 1,
        0x4C3E2C, GAME_STEAM, H_CALL, 0x4C3DF0, 1,
        0x4C5557, GAME_STEAM, H_CALL, 0x4C5540, 1,
        0x500FE6, GAME_STEAM, H_CALL, 0x500B20, 1,
        0x514D7E, GAME_STEAM, H_CALL, 0x514A10, 1,
        0x514E4F, GAME_STEAM, H_CALL, 0x514A10, 2,
        0x514EB6, GAME_STEAM, H_CALL, 0x514A10, 3,
        0x51526F, GAME_STEAM, H_CALL, 0x514FA0, 1,
        0x51532D, GAME_STEAM, H_CALL, 0x514FA0, 2,
        0x515396, GAME_STEAM, H_CALL, 0x514FA0, 3,
        0x51DDF9, GAME_STEAM, H_CALL, 0x51C960, 1,
        0x530EF6, GAME_STEAM, H_CALL, 0x530EA0, 1,
        0x53BCEB, GAME_STEAM, H_CALL, 0x53B970, 1,
        0x55912D, GAME_STEAM, H_CALL, 0x557210, 1,
        0x6135ED, GAME_STEAM, H_CALL, 0x613540, 1,
        0x613638, GAME_STEAM, H_CALL, 0x613540, 2,
        0x61367B, GAME_STEAM, H_CALL, 0x613540, 3>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::StartTestScript)
    static int address;
    static int global_address;
    static const int id = 0x44FE60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44FE60, 0x44FE60, 0x44FD70>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A4998, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A4F57, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A49B8, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A4F77, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4858, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4E24, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = CRunningScript *();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::Process)
    static int address;
    static int global_address;
    static const int id = 0x44FED0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44FED0, 0x44FED0, 0x44FDE0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4A4501, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A499D, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A4F5C, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x61C404, GAME_10EN, H_CALL, 0x61A700, 1,
        0x4A4521, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A49BD, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A4F7C, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x61C3E4, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x4A4374, GAME_STEAM, H_CALL, 0x4A42D0, 1,
        0x4A485D, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4E29, GAME_STEAM, H_CALL, 0x4A49D0, 1,
        0x61C022, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::StartNewScript)
    static int address;
    static int global_address;
    static const int id = 0x450270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x450270, 0x450270, 0x450180>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x45F735, GAME_10EN, H_CALL, 0x45F450, 1,
        0x608CBA, GAME_10EN, H_CALL, 0x6084C0, 1,
        0x45F735, GAME_11EN, H_CALL, 0x45F450, 1,
        0x608C9A, GAME_11EN, H_CALL, 0x6084A0, 1,
        0x45F615, GAME_STEAM, H_CALL, 0x45F330, 1,
        0x6088DA, GAME_STEAM, H_CALL, 0x6080E0, 1>;
    using def_t = CRunningScript *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CTheScripts::Init)
    static int address;
    static int global_address;
    static const int id = 0x450330;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x450330, 0x450330, 0x450240>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x45F463, GAME_10EN, H_CALL, 0x45F450, 1,
        0x4A492F, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A4E96, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x45F463, GAME_11EN, H_CALL, 0x45F450, 1,
        0x4A494F, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A4EB6, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x45F343, GAME_STEAM, H_CALL, 0x45F330, 1,
        0x4A47EF, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4D63, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::RemoveScriptTextureDictionary)
    static int address;
    static int global_address;
    static const int id = 0x450C80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x450C80, 0x450C80, 0x450B90>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x45946A, GAME_10EN, H_CALL, 0x458EC0, 1,
        0x45946A, GAME_11EN, H_CALL, 0x458EC0, 1,
        0x45934A, GAME_STEAM, H_CALL, 0x458DA0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::UndoEntityInvisibilitySettings)
    static int address;
    static int global_address;
    static const int id = 0x458C90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x458C90, 0x458C90, 0x458B70>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A47FE, GAME_10EN, H_CALL, 0x4A47B0, 1,
        0x4A481E, GAME_11EN, H_CALL, 0x4A47D0, 1,
        0x4A46BE, GAME_STEAM, H_CALL, 0x4A4670, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::UndoBuildingSwaps)
    static int address;
    static int global_address;
    static const int id = 0x458CC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x458CC0, 0x458CC0, 0x458BA0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A47F9, GAME_10EN, H_CALL, 0x4A47B0, 1,
        0x4A4819, GAME_11EN, H_CALL, 0x4A47D0, 1,
        0x4A46B9, GAME_STEAM, H_CALL, 0x4A4670, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::DrawScriptSpheres)
    static int address;
    static int global_address;
    static const int id = 0x458E50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x458E50, 0x458E50, 0x458D30>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x44FF4B, GAME_10EN, H_CALL, 0x44FED0, 1,
        0x44FF4B, GAME_11EN, H_CALL, 0x44FED0, 1,
        0x44FE5B, GAME_STEAM, H_CALL, 0x44FDE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::ReadMultiScriptFileOffsetsFromScript)
    static int address;
    static int global_address;
    static const int id = 0x45E530;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45E530, 0x45E530, 0x45E410>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x450878, GAME_10EN, H_CALL, 0x450330, 1,
        0x450878, GAME_11EN, H_CALL, 0x450330, 1,
        0x450788, GAME_STEAM, H_CALL, 0x450240, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::UpdateObjectIndices)
    static int address;
    static int global_address;
    static const int id = 0x45E820;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45E820, 0x45E820, 0x45E700>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x450798, GAME_10EN, H_CALL, 0x450330, 1,
        0x450798, GAME_11EN, H_CALL, 0x450330, 1,
        0x4506A8, GAME_STEAM, H_CALL, 0x450240, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::ReadObjectNamesFromScript)
    static int address;
    static int global_address;
    static const int id = 0x45E910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45E910, 0x45E910, 0x45E7F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x450793, GAME_10EN, H_CALL, 0x450330, 1,
        0x450793, GAME_11EN, H_CALL, 0x450330, 1,
        0x4506A3, GAME_STEAM, H_CALL, 0x450240, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheScripts::CleanUpThisObject)
    static int address;
    static int global_address;
    static const int id = 0x45EA80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45EA80, 0x45EA80, 0x45E960>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x451881, GAME_10EN, H_CALL, 0x451550, 1,
        0x4527E5, GAME_10EN, H_CALL, 0x451F90, 1,
        0x451881, GAME_11EN, H_CALL, 0x451550, 1,
        0x4527E5, GAME_11EN, H_CALL, 0x451F90, 1,
        0x451791, GAME_STEAM, H_CALL, 0x451460, 1,
        0x4526C5, GAME_STEAM, H_CALL, 0x451E70, 1>;
    using def_t = void(CObject *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CTheScripts::CleanUpThisVehicle)
    static int address;
    static int global_address;
    static const int id = 0x45EAD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45EAD0, 0x45EAD0, 0x45E9B0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x45184B, GAME_10EN, H_CALL, 0x451550, 1,
        0x452799, GAME_10EN, H_CALL, 0x451F90, 1,
        0x45184B, GAME_11EN, H_CALL, 0x451550, 1,
        0x452799, GAME_11EN, H_CALL, 0x451F90, 1,
        0x45175B, GAME_STEAM, H_CALL, 0x451460, 1,
        0x452679, GAME_STEAM, H_CALL, 0x451E70, 1>;
    using def_t = void(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CTheScripts::CleanUpThisPed)
    static int address;
    static int global_address;
    static const int id = 0x45EB10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45EB10, 0x45EB10, 0x45E9F0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x451866, GAME_10EN, H_CALL, 0x451550, 1,
        0x45274D, GAME_10EN, H_CALL, 0x451F90, 1,
        0x451866, GAME_11EN, H_CALL, 0x451550, 1,
        0x45274D, GAME_11EN, H_CALL, 0x451F90, 1,
        0x451776, GAME_STEAM, H_CALL, 0x451460, 1,
        0x45262D, GAME_STEAM, H_CALL, 0x451E70, 1>;
    using def_t = void(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CTheScripts::RemoveThisPed)
    static int address;
    static int global_address;
    static const int id = 0x45EC70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45EC70, 0x45EC70, 0x45EB50>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x40AB89, GAME_10EN, H_CALL, 0x40AA60, 1,
        0x449953, GAME_10EN, H_CALL, 0x446390, 1,
        0x45D1ED, GAME_10EN, H_CALL, 0x45B220, 1,
        0x40AB89, GAME_11EN, H_CALL, 0x40AA60, 1,
        0x449953, GAME_11EN, H_CALL, 0x446390, 1,
        0x45D1ED, GAME_11EN, H_CALL, 0x45B220, 1,
        0x40AB89, GAME_STEAM, H_CALL, 0x40AA60, 1,
        0x449863, GAME_STEAM, H_CALL, 0x4462A0, 1,
        0x45D0CD, GAME_STEAM, H_CALL, 0x45B100, 1>;
    using def_t = void(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CTheScripts::IsVehicleStopped)
    static int address;
    static int global_address;
    static const int id = 0x45ED20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45ED20, 0x45ED20, 0x45EC00>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x45270B, GAME_10EN, H_CALL, 0x451F90, 1,
        0x45270B, GAME_11EN, H_CALL, 0x451F90, 1,
        0x4525EB, GAME_STEAM, H_CALL, 0x451E70, 1>;
    using def_t = bool(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CTheScripts::IsPlayerStopped)
    static int address;
    static int global_address;
    static const int id = 0x45ED50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x45ED50, 0x45ED50, 0x45EC30>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x457143, GAME_10EN, H_CALL, 0x456E20, 1,
        0x4617C8, GAME_10EN, H_CALL, 0x461750, 1,
        0x461D7B, GAME_10EN, H_CALL, 0x461CF0, 1,
        0x463BA1, GAME_10EN, H_CALL, 0x463B30, 1,
        0x457143, GAME_11EN, H_CALL, 0x456E20, 1,
        0x4617C8, GAME_11EN, H_CALL, 0x461750, 1,
        0x461D7B, GAME_11EN, H_CALL, 0x461CF0, 1,
        0x463BA1, GAME_11EN, H_CALL, 0x463B30, 1,
        0x457023, GAME_STEAM, H_CALL, 0x456D00, 1,
        0x4616A8, GAME_STEAM, H_CALL, 0x461630, 1,
        0x461C5B, GAME_STEAM, H_CALL, 0x461BD0, 1,
        0x463A81, GAME_STEAM, H_CALL, 0x463A10, 1>;
    using def_t = bool(CPlayerInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPlayerInfo *>, 0>;
META_END

}
