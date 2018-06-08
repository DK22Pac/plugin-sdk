/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStreaming::RequestTxdModel)
    static int address;
    static int global_address;
    static const int id = 0x407100;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407100, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x408910, GAME_10US_COMPACT, H_CALL, 0x4087E0, 1,
        0x408952, GAME_10US_COMPACT, H_CALL, 0x4087E0, 2>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CStreaming::IsInitialised)
    static int address;
    static int global_address;
    static const int id = 0x407600;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407600, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::AddImageToList)
    static int address;
    static int global_address;
    static const int id = 0x407610;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407610, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5A8108, GAME_10US_COMPACT, H_CALL, 0x5A80D0, 1,
        0x5B915B, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = int(char const *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,bool>, 0,1>;
META_END

META_BEGIN(CStreaming::IsVeryBusy)
    static int address;
    static int global_address;
    static const int id = 0x4076A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4076A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E7D8, GAME_10US_COMPACT, H_CALL, 0x40E670, 1,
        0x4E4FCA, GAME_10US_COMPACT, H_CALL, 0x4E4F70, 1,
        0x4E61B5, GAME_10US_COMPACT, H_CALL, 0x4E60D0, 1,
        0x4E66D0, GAME_10US_COMPACT, H_CALL, 0x4E6550, 1,
        0x4E6D49, GAME_10US_COMPACT, H_CALL, 0x4E6CD0, 1,
        0x65E844, GAME_10US_COMPACT, H_CALL, 0x65E7F0, 1,
        0x66FE42, GAME_10US_COMPACT, H_CALL, 0x66FDA0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RetryLoadFile)
    static int address;
    static int global_address;
    static const int id = 0x4076C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4076C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E37B, GAME_10US_COMPACT, H_CALL, 0x40E170, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::IsObjectInCdImage)
    static int address;
    static int global_address;
    static const int id = 0x407800;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407800, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4727AA, GAME_10US_COMPACT, H_CALL, 0x472310, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::HasVehicleUpgradeLoaded)
    static int address;
    static int global_address;
    static const int id = 0x407820;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407820, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x447EBD, GAME_10US_COMPACT, H_CALL, 0x447E40, 1,
        0x498678, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::ForceLayerToRead)
    static int address;
    static int global_address;
    static const int id = 0x407A10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407A10, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B0114, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetLoadVehiclesInLoadScene)
    static int address;
    static int global_address;
    static const int id = 0x407A30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407A30, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44084B, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x44085C, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x5B0AC2, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1,
        0x5B0AF7, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 2>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CStreaming::ClearFlagForAll)
    static int address;
    static int global_address;
    static const int id = 0x407A40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407A40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44086B, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsInSectorList)
    static int address;
    static int global_address;
    static const int id = 0x407A70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407A70, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPtrList *, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPtrList *,int,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::RemoveUnusedModelsInLoadedList)
    static int address;
    static int global_address;
    static const int id = 0x407AC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407AC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x441487, GAME_10US_COMPACT, H_CALL, 0x441440, 1,
        0x5B142D, GAME_10US_COMPACT, H_CALL, 0x5B13F0, 1>;
    using def_t = unsigned int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::AreAnimsUsedByRequestedModels)
    static int address;
    static int global_address;
    static const int id = 0x407AD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407AD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40CA4D, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1,
        0x40CC26, GAME_10US_COMPACT, H_CALL, 0x40CBA0, 1,
        0x40D0D9, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::ImGonnaUseStreamingMemory)
    static int address;
    static int global_address;
    static const int id = 0x407BE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407BE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (10), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x572EE2, GAME_10US_COMPACT, H_CALL, 0x572EC0, 1,
        0x572F79, GAME_10US_COMPACT, H_CALL, 0x572EC0, 2,
        0x57300D, GAME_10US_COMPACT, H_CALL, 0x572EC0, 3,
        0x57310F, GAME_10US_COMPACT, H_CALL, 0x5730A0, 1,
        0x5731CE, GAME_10US_COMPACT, H_CALL, 0x5730A0, 2,
        0x5AFC38, GAME_10US_COMPACT, H_CALL, 0x5AFBC0, 1,
        0x5AFCD9, GAME_10US_COMPACT, H_CALL, 0x5AFBC0, 2,
        0x5B02B7, GAME_10US_COMPACT, H_CALL, 0x5B02A0, 1,
        0x5B03BA, GAME_10US_COMPACT, H_CALL, 0x5B0390, 1,
        0x5DD92B, GAME_10US_COMPACT, H_CALL, 0x5DD910, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::IHaveUsedStreamingMemory)
    static int address;
    static int global_address;
    static const int id = 0x407BF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407BF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (10), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x572F6A, GAME_10US_COMPACT, H_CALL, 0x572EC0, 1,
        0x572FFE, GAME_10US_COMPACT, H_CALL, 0x572EC0, 2,
        0x57308A, GAME_10US_COMPACT, H_CALL, 0x572EC0, 3,
        0x57318B, GAME_10US_COMPACT, H_CALL, 0x5730A0, 1,
        0x57324A, GAME_10US_COMPACT, H_CALL, 0x5730A0, 2,
        0x5AFC76, GAME_10US_COMPACT, H_CALL, 0x5AFBC0, 1,
        0x5AFCFC, GAME_10US_COMPACT, H_CALL, 0x5AFBC0, 2,
        0x5B0359, GAME_10US_COMPACT, H_CALL, 0x5B02A0, 1,
        0x5B03CC, GAME_10US_COMPACT, H_CALL, 0x5B0390, 1,
        0x5DDA55, GAME_10US_COMPACT, H_CALL, 0x5DD910, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::GetDefaultCopModel)
    static int address;
    static int global_address;
    static const int id = 0x407C00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407C00, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5DDCA8, GAME_10US_COMPACT, H_CALL, 0x5DDC60, 1,
        0x615BA9, GAME_10US_COMPACT, H_CALL, 0x615970, 1,
        0x615BBB, GAME_10US_COMPACT, H_CALL, 0x615970, 2>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::GetDefaultCopCarModel)
    static int address;
    static int global_address;
    static const int id = 0x407C50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407C50, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x421A33, GAME_10US_COMPACT, H_JUMP, 0x421980, 1,
        0x4613F8, GAME_10US_COMPACT, H_CALL, 0x461170, 1,
        0x461BEE, GAME_10US_COMPACT, H_CALL, 0x4619C0, 1,
        0x461C0B, GAME_10US_COMPACT, H_CALL, 0x4619C0, 2,
        0x4998BC, GAME_10US_COMPACT, H_CALL, 0x4998A0, 1,
        0x61349B, GAME_10US_COMPACT, H_CALL, 0x6133F0, 1,
        0x61456E, GAME_10US_COMPACT, H_CALL, 0x6144B0, 1>;
    using def_t = int(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CStreaming::DisableCopBikes)
    static int address;
    static int global_address;
    static const int id = 0x407D10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407D10, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x468643, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x46DBFD, GAME_10US_COMPACT, H_CALL, 0x46D050, 1,
        0x46DC0E, GAME_10US_COMPACT, H_CALL, 0x46D050, 2,
        0x53BE19, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CStreaming::GetDefaultMedicModel)
    static int address;
    static int global_address;
    static const int id = 0x407D20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407D20, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x613AD7, GAME_10US_COMPACT, H_CALL, 0x613A00, 1>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::GetDefaultFiremanModel)
    static int address;
    static int global_address;
    static const int id = 0x407D40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407D40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x613AE3, GAME_10US_COMPACT, H_CALL, 0x613A00, 1>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::GetDefaultCabDriverModel)
    static int address;
    static int global_address;
    static const int id = 0x407D50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407D50, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x61182F, GAME_10US_COMPACT, H_CALL, 0x6117F0, 1,
        0x611928, GAME_10US_COMPACT, H_JUMP, 0x611900, 1,
        0x611A1E, GAME_10US_COMPACT, H_CALL, 0x6119D0, 1>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::IsCarModelNeededInCurrentZone)
    static int address;
    static int global_address;
    static const int id = 0x407DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407DD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x408032, GAME_10US_COMPACT, H_CALL, 0x408000, 1,
        0x40AFFD, GAME_10US_COMPACT, H_CALL, 0x40AFA0, 1,
        0x40B043, GAME_10US_COMPACT, H_CALL, 0x40AFA0, 2,
        0x40B5CD, GAME_10US_COMPACT, H_CALL, 0x40B4F0, 1,
        0x40B5DE, GAME_10US_COMPACT, H_CALL, 0x40B4F0, 2,
        0x40B5F6, GAME_10US_COMPACT, H_CALL, 0x40B4F0, 3,
        0x40B60E, GAME_10US_COMPACT, H_CALL, 0x40B4F0, 4>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::HasSpecialCharLoaded)
    static int address;
    static int global_address;
    static const int id = 0x407F00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407F00, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47EE4A, GAME_10US_COMPACT, H_CALL, 0x47E090, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::LoadInitialVehicles)
    static int address;
    static int global_address;
    static const int id = 0x407F20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407F20, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5AFFE5, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5BA252, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::WeAreTryingToPhaseVehicleOut)
    static int address;
    static int global_address;
    static const int id = 0x407F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407F80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x611DBC, GAME_10US_COMPACT, H_CALL, 0x611C50, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::FindMIPedSlotForInterior)
    static int address;
    static int global_address;
    static const int id = 0x407FB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x407FB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x594CC7, GAME_10US_COMPACT, H_CALL, 0x594C10, 1,
        0x594FBB, GAME_10US_COMPACT, H_CALL, 0x594E90, 1,
        0x596751, GAME_10US_COMPACT, H_CALL, 0x5965E0, 1>;
    using def_t = int(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::AddToLoadedVehiclesList)
    static int address;
    static int global_address;
    static const int id = 0x408000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x408000, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x408D43, GAME_10US_COMPACT, H_CALL, 0x408CB0, 1,
        0x40C858, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveCarModel)
    static int address;
    static int global_address;
    static const int id = 0x4080F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4080F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x408A1B, GAME_10US_COMPACT, H_CALL, 0x4089A0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::InitImageList)
    static int address;
    static int global_address;
    static const int id = 0x4083C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4083C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BF991, GAME_10US_COMPACT, H_CALL, 0x5BF840, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x4084B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4084B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53CA0C, GAME_10US_COMPACT, H_CALL, 0x53C900, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::InstanceLoadedModels)
    static int address;
    static int global_address;
    static const int id = 0x4084F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4084F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40ED36, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::RequestModel)
    static int address;
    static int global_address;
    static const int id = 0x4087E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4087E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (215), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4044FE, GAME_10US_COMPACT, H_JUMP, 0x4044F0, 1,
        0x4050C3, GAME_10US_COMPACT, H_CALL, 0x404DE0, 1,
        0x405395, GAME_10US_COMPACT, H_CALL, 0x405170, 1,
        0x4054BE, GAME_10US_COMPACT, H_CALL, 0x4053F0, 1,
        0x4055CB, GAME_10US_COMPACT, H_CALL, 0x405520, 1,
        0x405810, GAME_10US_COMPACT, H_CALL, 0x405780, 1,
        0x405879, GAME_10US_COMPACT, H_CALL, 0x405850, 1,
        0x40710E, GAME_10US_COMPACT, H_JUMP, 0x407100, 1,
        0x40712E, GAME_10US_COMPACT, H_JUMP, 0x407120, 1,
        0x40892D, GAME_10US_COMPACT, H_CALL, 0x4087E0, 1,
        0x408C7C, GAME_10US_COMPACT, H_CALL, 0x408C70, 1,
        0x408C99, GAME_10US_COMPACT, H_CALL, 0x408C70, 2,
        0x408DFC, GAME_10US_COMPACT, H_CALL, 0x408CB0, 1,
        0x408EF4, GAME_10US_COMPACT, H_CALL, 0x408E20, 1,
        0x408F36, GAME_10US_COMPACT, H_CALL, 0x408E20, 2,
        0x408F96, GAME_10US_COMPACT, H_CALL, 0x408E20, 3,
        0x40908C, GAME_10US_COMPACT, H_CALL, 0x409050, 1,
        0x409492, GAME_10US_COMPACT, H_CALL, 0x409430, 1,
        0x4095FC, GAME_10US_COMPACT, H_CALL, 0x4095C0, 1,
        0x409632, GAME_10US_COMPACT, H_CALL, 0x4095C0, 2,
        0x409D6E, GAME_10US_COMPACT, H_CALL, 0x409D10, 1,
        0x409FD9, GAME_10US_COMPACT, H_CALL, 0x409D10, 2,
        0x40A071, GAME_10US_COMPACT, H_CALL, 0x409FF0, 1,
        0x40A0D1, GAME_10US_COMPACT, H_CALL, 0x40A080, 1,
        0x40A106, GAME_10US_COMPACT, H_CALL, 0x40A080, 2,
        0x40A127, GAME_10US_COMPACT, H_CALL, 0x40A120, 1,
        0x40A133, GAME_10US_COMPACT, H_CALL, 0x40A120, 2,
        0x40A13F, GAME_10US_COMPACT, H_CALL, 0x40A120, 3,
        0x40A285, GAME_10US_COMPACT, H_CALL, 0x40A150, 1,
        0x40A294, GAME_10US_COMPACT, H_CALL, 0x40A150, 2,
        0x40A3B8, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 1,
        0x40A3CE, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 2,
        0x40A518, GAME_10US_COMPACT, H_CALL, 0x40A400, 1,
        0x40A52E, GAME_10US_COMPACT, H_CALL, 0x40A400, 2,
        0x40A612, GAME_10US_COMPACT, H_CALL, 0x40A560, 1,
        0x40A702, GAME_10US_COMPACT, H_CALL, 0x40A560, 2,
        0x40A9C4, GAME_10US_COMPACT, H_CALL, 0x40A560, 3,
        0x40AB4A, GAME_10US_COMPACT, H_CALL, 0x40AA10, 1,
        0x40AB72, GAME_10US_COMPACT, H_CALL, 0x40AA10, 2,
        0x40ACFC, GAME_10US_COMPACT, H_CALL, 0x40AA10, 3,
        0x40B168, GAME_10US_COMPACT, H_CALL, 0x40B080, 1,
        0x40B4DA, GAME_10US_COMPACT, H_CALL, 0x40B4B0, 1,
        0x40B640, GAME_10US_COMPACT, H_CALL, 0x40B4F0, 1,
        0x40B727, GAME_10US_COMPACT, H_CALL, 0x40B700, 1,
        0x40B733, GAME_10US_COMPACT, H_CALL, 0x40B700, 2,
        0x40B77C, GAME_10US_COMPACT, H_CALL, 0x40B700, 3,
        0x40B788, GAME_10US_COMPACT, H_CALL, 0x40B700, 4,
        0x40B7D1, GAME_10US_COMPACT, H_CALL, 0x40B700, 5,
        0x40B7DD, GAME_10US_COMPACT, H_CALL, 0x40B700, 6,
        0x40B7E9, GAME_10US_COMPACT, H_CALL, 0x40B700, 7,
        0x40B845, GAME_10US_COMPACT, H_CALL, 0x40B700, 8,
        0x40B870, GAME_10US_COMPACT, H_CALL, 0x40B700, 9,
        0x40B914, GAME_10US_COMPACT, H_CALL, 0x40B700, 10,
        0x40B9DB, GAME_10US_COMPACT, H_CALL, 0x40B700, 11,
        0x40B9EA, GAME_10US_COMPACT, H_CALL, 0x40B700, 12,
        0x40B9F9, GAME_10US_COMPACT, H_CALL, 0x40B700, 13,
        0x40BA08, GAME_10US_COMPACT, H_CALL, 0x40B700, 14,
        0x40BC40, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 1,
        0x40BCA0, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 2,
        0x40BD5A, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 3,
        0x40BD75, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 4,
        0x40BDF5, GAME_10US_COMPACT, H_CALL, 0x40BDA0, 1,
        0x40C429, GAME_10US_COMPACT, H_CALL, 0x40C270, 1,
        0x40C506, GAME_10US_COMPACT, H_CALL, 0x40C450, 1,
        0x40C87F, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1,
        0x40C957, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 2,
        0x40C9A8, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 3,
        0x40C9F9, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 4,
        0x40D3D4, GAME_10US_COMPACT, H_CALL, 0x40D3D0, 1,
        0x40E262, GAME_10US_COMPACT, H_CALL, 0x40E170, 1,
        0x40ED16, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1,
        0x41034E, GAME_10US_COMPACT, H_JUMP, 0x410340, 1,
        0x410A94, GAME_10US_COMPACT, H_CALL, 0x410860, 1,
        0x410B93, GAME_10US_COMPACT, H_CALL, 0x410AD0, 1,
        0x410CAB, GAME_10US_COMPACT, H_CALL, 0x410C00, 1,
        0x410E8F, GAME_10US_COMPACT, H_CALL, 0x410E60, 1,
        0x430506, GAME_10US_COMPACT, H_CALL, 0x430050, 1,
        0x4385B7, GAME_10US_COMPACT, H_CALL, 0x4385B0, 1,
        0x4385C3, GAME_10US_COMPACT, H_CALL, 0x4385B0, 2,
        0x4385CF, GAME_10US_COMPACT, H_CALL, 0x4385B0, 3,
        0x4385DB, GAME_10US_COMPACT, H_CALL, 0x4385B0, 4,
        0x4385E7, GAME_10US_COMPACT, H_CALL, 0x4385B0, 5,
        0x4385F3, GAME_10US_COMPACT, H_CALL, 0x4385B0, 6,
        0x4385FF, GAME_10US_COMPACT, H_CALL, 0x4385B0, 7,
        0x43860B, GAME_10US_COMPACT, H_CALL, 0x4385B0, 8,
        0x43861A, GAME_10US_COMPACT, H_CALL, 0x4385B0, 9,
        0x438626, GAME_10US_COMPACT, H_CALL, 0x4385B0, 10,
        0x438897, GAME_10US_COMPACT, H_CALL, 0x438890, 1,
        0x4388A3, GAME_10US_COMPACT, H_CALL, 0x438890, 2,
        0x4388AF, GAME_10US_COMPACT, H_CALL, 0x438890, 3,
        0x4388BB, GAME_10US_COMPACT, H_CALL, 0x438890, 4,
        0x4388C7, GAME_10US_COMPACT, H_CALL, 0x438890, 5,
        0x4388D3, GAME_10US_COMPACT, H_CALL, 0x438890, 6,
        0x4388DF, GAME_10US_COMPACT, H_CALL, 0x438890, 7,
        0x4388EB, GAME_10US_COMPACT, H_CALL, 0x438890, 8,
        0x4388FA, GAME_10US_COMPACT, H_CALL, 0x438890, 9,
        0x438B37, GAME_10US_COMPACT, H_CALL, 0x438B30, 1,
        0x438B43, GAME_10US_COMPACT, H_CALL, 0x438B30, 2,
        0x438B4F, GAME_10US_COMPACT, H_CALL, 0x438B30, 3,
        0x438B5B, GAME_10US_COMPACT, H_CALL, 0x438B30, 4,
        0x438B67, GAME_10US_COMPACT, H_CALL, 0x438B30, 5,
        0x438B73, GAME_10US_COMPACT, H_CALL, 0x438B30, 6,
        0x438B7F, GAME_10US_COMPACT, H_CALL, 0x438B30, 7,
        0x438B8B, GAME_10US_COMPACT, H_CALL, 0x438B30, 8,
        0x4395B7, GAME_10US_COMPACT, H_CALL, 0x4395B0, 1,
        0x439F11, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x43A130, GAME_10US_COMPACT, H_CALL, 0x43A0B0, 1,
        0x43A5A5, GAME_10US_COMPACT, H_CALL, 0x43A570, 1,
        0x4448E2, GAME_10US_COMPACT, H_CALL, 0x444810, 1,
        0x44491A, GAME_10US_COMPACT, H_CALL, 0x444810, 2,
        0x445386, GAME_10US_COMPACT, H_CALL, 0x444810, 3,
        0x44538E, GAME_10US_COMPACT, H_CALL, 0x444810, 4,
        0x445416, GAME_10US_COMPACT, H_CALL, 0x4453D0, 1,
        0x447E63, GAME_10US_COMPACT, H_CALL, 0x447E40, 1,
        0x44B5B5, GAME_10US_COMPACT, H_CALL, 0x44AA50, 1,
        0x44D06E, GAME_10US_COMPACT, H_JUMP, 0x44D060, 1,
        0x44DE51, GAME_10US_COMPACT, H_CALL, 0x44DE00, 1,
        0x450D1F, GAME_10US_COMPACT, H_CALL, 0x450A60, 1,
        0x450D2C, GAME_10US_COMPACT, H_CALL, 0x450A60, 2,
        0x45A04C, GAME_10US_COMPACT, H_CALL, 0x45A020, 1,
        0x45CCA4, GAME_10US_COMPACT, H_CALL, 0x45CA70, 1,
        0x45CF03, GAME_10US_COMPACT, H_CALL, 0x45CEA0, 1,
        0x45D03D, GAME_10US_COMPACT, H_CALL, 0x45CEA0, 2,
        0x45D4FC, GAME_10US_COMPACT, H_CALL, 0x45D4B0, 1,
        0x45F5E2, GAME_10US_COMPACT, H_CALL, 0x45F380, 1,
        0x45F715, GAME_10US_COMPACT, H_CALL, 0x45F380, 2,
        0x45F853, GAME_10US_COMPACT, H_CALL, 0x45F380, 3,
        0x45F986, GAME_10US_COMPACT, H_CALL, 0x45F380, 4,
        0x45FAB9, GAME_10US_COMPACT, H_CALL, 0x45F380, 5,
        0x45FC00, GAME_10US_COMPACT, H_CALL, 0x45F380, 6,
        0x46A57E, GAME_10US_COMPACT, H_JUMP, 0x46A570, 1,
        0x46AAB9, GAME_10US_COMPACT, H_CALL, 0x46AA80, 1,
        0x46CE68, GAME_10US_COMPACT, H_CALL, 0x46CD80, 1,
        0x46CFDC, GAME_10US_COMPACT, H_CALL, 0x46CF00, 1,
        0x47503A, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x47EFB2, GAME_10US_COMPACT, H_CALL, 0x47E090, 1,
        0x48C374, GAME_10US_COMPACT, H_CALL, 0x48B590, 1,
        0x49BBA1, GAME_10US_COMPACT, H_CALL, 0x49B8D0, 1,
        0x4D5C62, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 1,
        0x4D5C9D, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 2,
        0x4D5E34, GAME_10US_COMPACT, H_CALL, 0x4D5E20, 1,
        0x4D5E94, GAME_10US_COMPACT, H_CALL, 0x4D5E80, 1,
        0x553824, GAME_10US_COMPACT, H_CALL, 0x553770, 1,
        0x5549C0, GAME_10US_COMPACT, H_CALL, 0x554840, 1,
        0x554C1C, GAME_10US_COMPACT, H_CALL, 0x554B10, 1,
        0x5556CA, GAME_10US_COMPACT, H_CALL, 0x555680, 1,
        0x56EC2A, GAME_10US_COMPACT, H_CALL, 0x56EB30, 1,
        0x584B9E, GAME_10US_COMPACT, H_JUMP, 0x584B50, 1,
        0x584CCB, GAME_10US_COMPACT, H_CALL, 0x584C50, 1,
        0x595134, GAME_10US_COMPACT, H_CALL, 0x5950D0, 1,
        0x5A8153, GAME_10US_COMPACT, H_CALL, 0x5A8120, 1,
        0x5A8179, GAME_10US_COMPACT, H_CALL, 0x5A8120, 2,
        0x5B0030, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5B006B, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 2,
        0x5B110A, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1,
        0x5D2A7F, GAME_10US_COMPACT, H_CALL, 0x5D2A20, 1,
        0x5D455C, GAME_10US_COMPACT, H_CALL, 0x5D44B0, 1,
        0x5D4583, GAME_10US_COMPACT, H_CALL, 0x5D44B0, 2,
        0x5E894B, GAME_10US_COMPACT, H_CALL, 0x5E8910, 1,
        0x5E895B, GAME_10US_COMPACT, H_CALL, 0x5E8910, 2,
        0x609B08, GAME_10US_COMPACT, H_CALL, 0x6098F0, 1,
        0x609BB3, GAME_10US_COMPACT, H_CALL, 0x6098F0, 2,
        0x611814, GAME_10US_COMPACT, H_CALL, 0x6117F0, 1,
        0x611824, GAME_10US_COMPACT, H_CALL, 0x6117F0, 2,
        0x611835, GAME_10US_COMPACT, H_CALL, 0x6117F0, 3,
        0x611845, GAME_10US_COMPACT, H_CALL, 0x6117F0, 4,
        0x611851, GAME_10US_COMPACT, H_CALL, 0x6117F0, 5,
        0x611861, GAME_10US_COMPACT, H_CALL, 0x6117F0, 6,
        0x611871, GAME_10US_COMPACT, H_CALL, 0x6117F0, 7,
        0x61187E, GAME_10US_COMPACT, H_CALL, 0x6117F0, 8,
        0x61B5B3, GAME_10US_COMPACT, H_CALL, 0x61B580, 1,
        0x61B609, GAME_10US_COMPACT, H_CALL, 0x61B580, 2,
        0x61B638, GAME_10US_COMPACT, H_CALL, 0x61B580, 3,
        0x61B695, GAME_10US_COMPACT, H_CALL, 0x61B580, 4,
        0x61C983, GAME_10US_COMPACT, H_CALL, 0x61C7F0, 1,
        0x623D7C, GAME_10US_COMPACT, H_CALL, 0x623B10, 1,
        0x627B61, GAME_10US_COMPACT, H_CALL, 0x627B20, 1,
        0x629B2B, GAME_10US_COMPACT, H_CALL, 0x629920, 1,
        0x631766, GAME_10US_COMPACT, H_CALL, 0x631730, 1,
        0x6381DF, GAME_10US_COMPACT, H_CALL, 0x6381A0, 1,
        0x638221, GAME_10US_COMPACT, H_CALL, 0x6381A0, 2,
        0x639D38, GAME_10US_COMPACT, H_CALL, 0x639CB0, 1,
        0x639D56, GAME_10US_COMPACT, H_CALL, 0x639CB0, 2,
        0x64D0E5, GAME_10US_COMPACT, H_CALL, 0x64CF40, 1,
        0x64F894, GAME_10US_COMPACT, H_CALL, 0x64F860, 1,
        0x64F8A2, GAME_10US_COMPACT, H_CALL, 0x64F860, 2,
        0x6600F9, GAME_10US_COMPACT, H_CALL, 0x65FFE0, 1,
        0x66064F, GAME_10US_COMPACT, H_CALL, 0x6605C0, 1,
        0x660DBB, GAME_10US_COMPACT, H_CALL, 0x660D80, 1,
        0x661A05, GAME_10US_COMPACT, H_CALL, 0x661950, 1,
        0x6623D4, GAME_10US_COMPACT, H_CALL, 0x662370, 1,
        0x662E65, GAME_10US_COMPACT, H_CALL, 0x662A10, 1,
        0x663853, GAME_10US_COMPACT, H_CALL, 0x6637C0, 1,
        0x66500A, GAME_10US_COMPACT, H_CALL, 0x664E60, 1,
        0x67B5D3, GAME_10US_COMPACT, H_CALL, 0x67B5C0, 1,
        0x682354, GAME_10US_COMPACT, H_CALL, 0x682310, 1,
        0x6823F7, GAME_10US_COMPACT, H_CALL, 0x6823C0, 1,
        0x6825E7, GAME_10US_COMPACT, H_CALL, 0x6825B0, 1,
        0x6873AA, GAME_10US_COMPACT, H_CALL, 0x6872C0, 1,
        0x689B95, GAME_10US_COMPACT, H_CALL, 0x6899F0, 1,
        0x691DB0, GAME_10US_COMPACT, H_CALL, 0x691D50, 1,
        0x6930D4, GAME_10US_COMPACT, H_CALL, 0x692FF0, 1,
        0x6CD35F, GAME_10US_COMPACT, H_CALL, 0x6CD2F0, 1,
        0x6D1726, GAME_10US_COMPACT, H_CALL, 0x6D16A0, 1,
        0x6D17BC, GAME_10US_COMPACT, H_CALL, 0x6D16A0, 2,
        0x6D65DA, GAME_10US_COMPACT, H_CALL, 0x6D64F0, 1,
        0x6E2997, GAME_10US_COMPACT, H_CALL, 0x6E2900, 1,
        0x6F360E, GAME_10US_COMPACT, H_CALL, 0x6F34D0, 1,
        0x6F362D, GAME_10US_COMPACT, H_CALL, 0x6F34D0, 2,
        0x6F7B33, GAME_10US_COMPACT, H_CALL, 0x6F7900, 1,
        0x72282C, GAME_10US_COMPACT, H_CALL, 0x722810, 1,
        0x724F37, GAME_10US_COMPACT, H_CALL, 0x724E40, 1,
        0x724F8D, GAME_10US_COMPACT, H_CALL, 0x724E40, 2,
        0x724FE3, GAME_10US_COMPACT, H_CALL, 0x724E40, 3,
        0x73830C, GAME_10US_COMPACT, H_CALL, 0x737C80, 1>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CStreaming::RemoveModel)
    static int address;
    static int global_address;
    static const int id = 0x4089A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4089A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (89), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x403EDB, GAME_10US_COMPACT, H_CALL, 0x403EC0, 1,
        0x40451D, GAME_10US_COMPACT, H_JUMP, 0x404510, 1,
        0x40514E, GAME_10US_COMPACT, H_CALL, 0x405110, 1,
        0x4053AE, GAME_10US_COMPACT, H_CALL, 0x405170, 1,
        0x40575F, GAME_10US_COMPACT, H_CALL, 0x405720, 1,
        0x40581D, GAME_10US_COMPACT, H_CALL, 0x405780, 1,
        0x4058B7, GAME_10US_COMPACT, H_CALL, 0x405890, 1,
        0x408DEE, GAME_10US_COMPACT, H_CALL, 0x408CB0, 1,
        0x409082, GAME_10US_COMPACT, H_CALL, 0x409050, 1,
        0x409410, GAME_10US_COMPACT, H_CALL, 0x4093B0, 1,
        0x409921, GAME_10US_COMPACT, H_CALL, 0x409760, 1,
        0x4099AD, GAME_10US_COMPACT, H_CALL, 0x409940, 1,
        0x409A5A, GAME_10US_COMPACT, H_CALL, 0x4099E0, 1,
        0x409C5A, GAME_10US_COMPACT, H_CALL, 0x409C10, 1,
        0x409CE5, GAME_10US_COMPACT, H_CALL, 0x409C90, 1,
        0x409F4C, GAME_10US_COMPACT, H_CALL, 0x409D10, 1,
        0x409F5D, GAME_10US_COMPACT, H_CALL, 0x409D10, 2,
        0x40A015, GAME_10US_COMPACT, H_CALL, 0x409FF0, 1,
        0x40A0DF, GAME_10US_COMPACT, H_CALL, 0x40A080, 1,
        0x40A8CE, GAME_10US_COMPACT, H_CALL, 0x40A560, 1,
        0x40A996, GAME_10US_COMPACT, H_CALL, 0x40A560, 2,
        0x40AC05, GAME_10US_COMPACT, H_CALL, 0x40AA10, 1,
        0x40AC74, GAME_10US_COMPACT, H_CALL, 0x40AA10, 2,
        0x40AE83, GAME_10US_COMPACT, H_CALL, 0x40AA10, 3,
        0x40AF2C, GAME_10US_COMPACT, H_CALL, 0x40AA10, 4,
        0x40B0DB, GAME_10US_COMPACT, H_CALL, 0x40B080, 1,
        0x40B13D, GAME_10US_COMPACT, H_CALL, 0x40B080, 2,
        0x40B22D, GAME_10US_COMPACT, H_CALL, 0x40B080, 3,
        0x40B2E9, GAME_10US_COMPACT, H_CALL, 0x40B080, 4,
        0x40B392, GAME_10US_COMPACT, H_CALL, 0x40B340, 1,
        0x40B96C, GAME_10US_COMPACT, H_CALL, 0x40B700, 1,
        0x40BA30, GAME_10US_COMPACT, H_CALL, 0x40B700, 2,
        0x40BA3D, GAME_10US_COMPACT, H_CALL, 0x40B700, 3,
        0x40BA4A, GAME_10US_COMPACT, H_CALL, 0x40B700, 4,
        0x40BA57, GAME_10US_COMPACT, H_CALL, 0x40B700, 5,
        0x40BB13, GAME_10US_COMPACT, H_CALL, 0x40BAA0, 1,
        0x40BB79, GAME_10US_COMPACT, H_CALL, 0x40BAA0, 2,
        0x40BED3, GAME_10US_COMPACT, H_CALL, 0x40BE60, 1,
        0x40BF35, GAME_10US_COMPACT, H_CALL, 0x40BE60, 2,
        0x40C166, GAME_10US_COMPACT, H_CALL, 0x40C020, 1,
        0x40C18D, GAME_10US_COMPACT, H_JUMP, 0x40C180, 1,
        0x40C1AD, GAME_10US_COMPACT, H_JUMP, 0x40C1A0, 1,
        0x40C1CD, GAME_10US_COMPACT, H_JUMP, 0x40C1C0, 1,
        0x40C24C, GAME_10US_COMPACT, H_CALL, 0x40C1E0, 1,
        0x40C871, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1,
        0x40C8FB, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 2,
        0x40C949, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 3,
        0x40C99A, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 4,
        0x40C9EB, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 5,
        0x40CA5A, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 6,
        0x40CC33, GAME_10US_COMPACT, H_CALL, 0x40CBA0, 1,
        0x40CFB1, GAME_10US_COMPACT, H_CALL, 0x40CF80, 1,
        0x40D0A7, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1,
        0x40D0EC, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 2,
        0x40D261, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 3,
        0x40D2B9, GAME_10US_COMPACT, H_CALL, 0x40D270, 1,
        0x40D398, GAME_10US_COMPACT, H_CALL, 0x40D2F0, 1,
        0x40E24B, GAME_10US_COMPACT, H_CALL, 0x40E170, 1,
        0x40E544, GAME_10US_COMPACT, H_CALL, 0x40E4E0, 1,
        0x40E5A8, GAME_10US_COMPACT, H_CALL, 0x40E560, 1,
        0x40E5E4, GAME_10US_COMPACT, H_CALL, 0x40E560, 2,
        0x40E611, GAME_10US_COMPACT, H_CALL, 0x40E560, 3,
        0x40E641, GAME_10US_COMPACT, H_CALL, 0x40E560, 4,
        0x40EC3D, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1,
        0x41036D, GAME_10US_COMPACT, H_JUMP, 0x410360, 1,
        0x410A7A, GAME_10US_COMPACT, H_CALL, 0x410860, 1,
        0x410E3F, GAME_10US_COMPACT, H_CALL, 0x410E00, 1,
        0x410E9C, GAME_10US_COMPACT, H_CALL, 0x410E60, 1,
        0x44E4CD, GAME_10US_COMPACT, H_JUMP, 0x44E4C0, 1,
        0x450975, GAME_10US_COMPACT, H_CALL, 0x450950, 1,
        0x450D3B, GAME_10US_COMPACT, H_CALL, 0x450A60, 1,
        0x459425, GAME_10US_COMPACT, H_CALL, 0x459400, 1,
        0x4594AE, GAME_10US_COMPACT, H_CALL, 0x459440, 1,
        0x45A0D5, GAME_10US_COMPACT, H_CALL, 0x45A0A0, 1,
        0x45A18C, GAME_10US_COMPACT, H_CALL, 0x45A160, 1,
        0x45A5FF, GAME_10US_COMPACT, H_CALL, 0x45A4A0, 1,
        0x4D413A, GAME_10US_COMPACT, H_CALL, 0x4D4130, 1,
        0x584C2A, GAME_10US_COMPACT, H_CALL, 0x584BF0, 1,
        0x584CFF, GAME_10US_COMPACT, H_CALL, 0x584C50, 1,
        0x5A567D, GAME_10US_COMPACT, H_CALL, 0x5A55A0, 1,
        0x5A5FFB, GAME_10US_COMPACT, H_CALL, 0x5A5F70, 1,
        0x5A618B, GAME_10US_COMPACT, H_CALL, 0x5A6040, 1,
        0x5A6264, GAME_10US_COMPACT, H_CALL, 0x5A6040, 2,
        0x5A6398, GAME_10US_COMPACT, H_CALL, 0x5A6040, 3,
        0x5A64F7, GAME_10US_COMPACT, H_CALL, 0x5A6040, 4,
        0x5B0623, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1,
        0x61BEC1, GAME_10US_COMPACT, H_CALL, 0x61BDF0, 1,
        0x731A63, GAME_10US_COMPACT, H_JUMP, 0x731A30, 1,
        0x731F07, GAME_10US_COMPACT, H_CALL, 0x731E90, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RequestVehicleUpgrade)
    static int address;
    static int global_address;
    static const int id = 0x408C70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x408C70, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x447E83, GAME_10US_COMPACT, H_CALL, 0x447E40, 1,
        0x498645, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x49B409, GAME_10US_COMPACT, H_CALL, 0x49B3C0, 1>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CStreaming::FinishLoadingLargeFile)
    static int address;
    static int global_address;
    static const int id = 0x408CB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x408CB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E1BE, GAME_10US_COMPACT, H_CALL, 0x40E170, 1>;
    using def_t = bool(char *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::GetNextFileOnCd)
    static int address;
    static int global_address;
    static const int id = 0x408E20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x408E20, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x409043, GAME_10US_COMPACT, H_JUMP, 0x408E20, 1,
        0x40CBBD, GAME_10US_COMPACT, H_CALL, 0x40CBA0, 1,
        0x40CC75, GAME_10US_COMPACT, H_CALL, 0x40CBA0, 2>;
    using def_t = int(int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,bool>, 0,1>;
META_END

META_BEGIN(CStreaming::RequestFilesInChannel)
    static int address;
    static int global_address;
    static const int id = 0x409050;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409050, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::DeleteAllRwObjects)
    static int address;
    static int global_address;
    static const int id = 0x4090A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4090A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E572, GAME_10US_COMPACT, H_CALL, 0x40E560, 1,
        0x40EC56, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1,
        0x5D13B1, GAME_10US_COMPACT, H_CALL, 0x5D1380, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsAfterDeath)
    static int address;
    static int global_address;
    static const int id = 0x409210;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409210, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x441482, GAME_10US_COMPACT, H_CALL, 0x441440, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::RemoveBigBuildings)
    static int address;
    static int global_address;
    static const int id = 0x4093B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4093B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C6D6, GAME_10US_COMPACT, H_CALL, 0x53C680, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RequestBigBuildings)
    static int address;
    static int global_address;
    static const int id = 0x409430;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409430, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40EC5C, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::RemoveBuildingsNotInArea)
    static int address;
    static int global_address;
    static const int id = 0x4094B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4094B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4422E2, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x48B9A1, GAME_10US_COMPACT, H_CALL, 0x48B590, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::AddEntity)
    static int address;
    static int global_address;
    static const int id = 0x409650;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409650, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x533E94, GAME_10US_COMPACT, H_CALL, 0x533D30, 1,
        0x533F93, GAME_10US_COMPACT, H_CALL, 0x533ED0, 1>;
    using def_t = void *(CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CStreaming::StartRenderEntities)
    static int address;
    static int global_address;
    static const int id = 0x4096C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4096C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5558EC, GAME_10US_COMPACT, H_JUMP, 0x5556E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RenderEntity)
    static int address;
    static int global_address;
    static const int id = 0x4096D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4096D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5343A8, GAME_10US_COMPACT, H_CALL, 0x534310, 1>;
    using def_t = void(CLink<CEntity*> *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CLink<CEntity*> *>, 0>;
META_END

META_BEGIN(CStreaming::RemoveEntity)
    static int address;
    static int global_address;
    static const int id = 0x409710;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409710, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x533FCF, GAME_10US_COMPACT, H_CALL, 0x533FB0, 1,
        0x5340B5, GAME_10US_COMPACT, H_CALL, 0x534030, 1>;
    using def_t = void(CLink<CEntity*> *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CLink<CEntity*> *>, 0>;
META_END

META_BEGIN(CStreaming::DeleteLeastUsedEntityRwObject)
    static int address;
    static int global_address;
    static const int id = 0x409760;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409760, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40D1B1, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1,
        0x40D208, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 2>;
    using def_t = bool(bool, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool,unsigned int>, 0,1>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsBehindCameraInSectorList)
    static int address;
    static int global_address;
    static const int id = 0x409940;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409940, 0, 0, 0, 0, 0>;
    // total references count: 10us (12), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40D994, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 1,
        0x40D9CE, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 2,
        0x40D9F9, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 3,
        0x40DC32, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 4,
        0x40DC6A, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 5,
        0x40DC95, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 6,
        0x40DDD6, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 7,
        0x40DE10, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 8,
        0x40DE3B, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 9,
        0x40E069, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 10,
        0x40E0A3, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 11,
        0x40E0CA, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 12>;
    using def_t = bool(CPtrList *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPtrList *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsNotInFrustumInSectorList)
    static int address;
    static int global_address;
    static const int id = 0x4099E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4099E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40DB16, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 1,
        0x40DB50, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 2,
        0x40DB7B, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 3,
        0x40DF66, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 4,
        0x40DFA0, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 5,
        0x40DFCB, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 6>;
    using def_t = char(CPtrList *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPtrList *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::AreTexturesUsedByRequestedModels)
    static int address;
    static int global_address;
    static const int id = 0x409A90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409A90, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40C8EE, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1,
        0x40CBFF, GAME_10US_COMPACT, H_CALL, 0x40CBA0, 1,
        0x40D094, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1,
        0x40D2A6, GAME_10US_COMPACT, H_CALL, 0x40D270, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetModelIsDeletable)
    static int address;
    static int global_address;
    static const int id = 0x409C10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409C10, 0, 0, 0, 0, 0>;
    // total references count: 10us (112), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x409C89, GAME_10US_COMPACT, H_JUMP, 0x409C70, 1,
        0x40A221, GAME_10US_COMPACT, H_CALL, 0x40A150, 1,
        0x40A23F, GAME_10US_COMPACT, H_CALL, 0x40A150, 2,
        0x40A24F, GAME_10US_COMPACT, H_CALL, 0x40A150, 3,
        0x40A26D, GAME_10US_COMPACT, H_CALL, 0x40A150, 4,
        0x40A2AD, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 1,
        0x40A2C9, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 2,
        0x40A2D5, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 3,
        0x40A2F2, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 4,
        0x40A2FE, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 5,
        0x40A31A, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 6,
        0x40A325, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 7,
        0x40A341, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 8,
        0x40A34D, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 9,
        0x40A36A, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 10,
        0x40A376, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 11,
        0x40A392, GAME_10US_COMPACT, H_CALL, 0x40A2A0, 12,
        0x40A40D, GAME_10US_COMPACT, H_CALL, 0x40A400, 1,
        0x40A429, GAME_10US_COMPACT, H_CALL, 0x40A400, 2,
        0x40A435, GAME_10US_COMPACT, H_CALL, 0x40A400, 3,
        0x40A452, GAME_10US_COMPACT, H_CALL, 0x40A400, 4,
        0x40A45E, GAME_10US_COMPACT, H_CALL, 0x40A400, 5,
        0x40A47A, GAME_10US_COMPACT, H_CALL, 0x40A400, 6,
        0x40A485, GAME_10US_COMPACT, H_CALL, 0x40A400, 7,
        0x40A4A1, GAME_10US_COMPACT, H_CALL, 0x40A400, 8,
        0x40A4AD, GAME_10US_COMPACT, H_CALL, 0x40A400, 9,
        0x40A4CA, GAME_10US_COMPACT, H_CALL, 0x40A400, 10,
        0x40A4D6, GAME_10US_COMPACT, H_CALL, 0x40A400, 11,
        0x40A4F2, GAME_10US_COMPACT, H_CALL, 0x40A400, 12,
        0x40A5AB, GAME_10US_COMPACT, H_CALL, 0x40A560, 1,
        0x40A5C3, GAME_10US_COMPACT, H_CALL, 0x40A560, 2,
        0x40A72C, GAME_10US_COMPACT, H_CALL, 0x40A560, 3,
        0x40A743, GAME_10US_COMPACT, H_CALL, 0x40A560, 4,
        0x40B3C6, GAME_10US_COMPACT, H_CALL, 0x40B3A0, 1,
        0x40B3DE, GAME_10US_COMPACT, H_CALL, 0x40B3A0, 2,
        0x40B40B, GAME_10US_COMPACT, H_CALL, 0x40B3A0, 3,
        0x40B423, GAME_10US_COMPACT, H_CALL, 0x40B3A0, 4,
        0x40B47D, GAME_10US_COMPACT, H_JUMP, 0x40B470, 1,
        0x40B742, GAME_10US_COMPACT, H_CALL, 0x40B700, 1,
        0x40B758, GAME_10US_COMPACT, H_CALL, 0x40B700, 2,
        0x40B797, GAME_10US_COMPACT, H_CALL, 0x40B700, 3,
        0x40B7AD, GAME_10US_COMPACT, H_CALL, 0x40B700, 4,
        0x40B7F8, GAME_10US_COMPACT, H_CALL, 0x40B700, 5,
        0x40B802, GAME_10US_COMPACT, H_CALL, 0x40B700, 6,
        0x40B821, GAME_10US_COMPACT, H_CALL, 0x40B700, 7,
        0x40B87C, GAME_10US_COMPACT, H_CALL, 0x40B700, 8,
        0x40B88B, GAME_10US_COMPACT, H_CALL, 0x40B700, 9,
        0x40B895, GAME_10US_COMPACT, H_CALL, 0x40B700, 10,
        0x40BA8C, GAME_10US_COMPACT, H_CALL, 0x40BA70, 1,
        0x40BDBD, GAME_10US_COMPACT, H_CALL, 0x40BDA0, 1,
        0x40BDD6, GAME_10US_COMPACT, H_CALL, 0x40BDA0, 2,
        0x40BE16, GAME_10US_COMPACT, H_CALL, 0x40BDA0, 3,
        0x40BE2F, GAME_10US_COMPACT, H_CALL, 0x40BDA0, 4,
        0x43882A, GAME_10US_COMPACT, H_CALL, 0x4385B0, 1,
        0x438834, GAME_10US_COMPACT, H_CALL, 0x4385B0, 2,
        0x43883E, GAME_10US_COMPACT, H_CALL, 0x4385B0, 3,
        0x438848, GAME_10US_COMPACT, H_CALL, 0x4385B0, 4,
        0x438852, GAME_10US_COMPACT, H_CALL, 0x4385B0, 5,
        0x43885C, GAME_10US_COMPACT, H_CALL, 0x4385B0, 6,
        0x438866, GAME_10US_COMPACT, H_CALL, 0x4385B0, 7,
        0x438870, GAME_10US_COMPACT, H_CALL, 0x4385B0, 8,
        0x43887A, GAME_10US_COMPACT, H_CALL, 0x4385B0, 9,
        0x438AD6, GAME_10US_COMPACT, H_CALL, 0x438890, 1,
        0x438AE0, GAME_10US_COMPACT, H_CALL, 0x438890, 2,
        0x438AEA, GAME_10US_COMPACT, H_CALL, 0x438890, 3,
        0x438AF4, GAME_10US_COMPACT, H_CALL, 0x438890, 4,
        0x438AFE, GAME_10US_COMPACT, H_CALL, 0x438890, 5,
        0x438B08, GAME_10US_COMPACT, H_CALL, 0x438890, 6,
        0x438B12, GAME_10US_COMPACT, H_CALL, 0x438890, 7,
        0x438B1C, GAME_10US_COMPACT, H_CALL, 0x438890, 8,
        0x438B26, GAME_10US_COMPACT, H_CALL, 0x438890, 9,
        0x438D02, GAME_10US_COMPACT, H_CALL, 0x438B30, 1,
        0x438D0C, GAME_10US_COMPACT, H_CALL, 0x438B30, 2,
        0x438D16, GAME_10US_COMPACT, H_CALL, 0x438B30, 3,
        0x438D20, GAME_10US_COMPACT, H_CALL, 0x438B30, 4,
        0x438D2A, GAME_10US_COMPACT, H_CALL, 0x438B30, 5,
        0x438D34, GAME_10US_COMPACT, H_CALL, 0x438B30, 6,
        0x438D3E, GAME_10US_COMPACT, H_CALL, 0x438B30, 7,
        0x438D48, GAME_10US_COMPACT, H_CALL, 0x438B30, 8,
        0x43A154, GAME_10US_COMPACT, H_CALL, 0x43A0B0, 1,
        0x49AA8D, GAME_10US_COMPACT, H_JUMP, 0x49AA80, 1,
        0x49ACB0, GAME_10US_COMPACT, H_CALL, 0x49AC90, 1,
        0x49AE57, GAME_10US_COMPACT, H_CALL, 0x49AE30, 1,
        0x49B442, GAME_10US_COMPACT, H_CALL, 0x49B3C0, 1,
        0x49B667, GAME_10US_COMPACT, H_CALL, 0x49B640, 1,
        0x49B90D, GAME_10US_COMPACT, H_CALL, 0x49B8D0, 1,
        0x4D5B4A, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 1,
        0x4D5B5B, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 2,
        0x4D5B6F, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 3,
        0x4D5B83, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 4,
        0x4D5CB2, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 1,
        0x56EB53, GAME_10US_COMPACT, H_CALL, 0x56EB30, 1,
        0x56F4BF, GAME_10US_COMPACT, H_CALL, 0x56F330, 1,
        0x5701CB, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x5A47C8, GAME_10US_COMPACT, H_CALL, 0x5A47B0, 1,
        0x5A815F, GAME_10US_COMPACT, H_CALL, 0x5A8120, 1,
        0x5A8185, GAME_10US_COMPACT, H_CALL, 0x5A8120, 2,
        0x5A8192, GAME_10US_COMPACT, H_CALL, 0x5A8120, 3,
        0x5A819E, GAME_10US_COMPACT, H_CALL, 0x5A8120, 4,
        0x5B0080, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x6119EE, GAME_10US_COMPACT, H_CALL, 0x6119D0, 1,
        0x611A08, GAME_10US_COMPACT, H_CALL, 0x6119D0, 2,
        0x611A26, GAME_10US_COMPACT, H_CALL, 0x6119D0, 3,
        0x611A3B, GAME_10US_COMPACT, H_CALL, 0x6119D0, 4,
        0x611A4F, GAME_10US_COMPACT, H_CALL, 0x6119D0, 5,
        0x611A69, GAME_10US_COMPACT, H_CALL, 0x6119D0, 6,
        0x611A83, GAME_10US_COMPACT, H_CALL, 0x6119D0, 7,
        0x611A9A, GAME_10US_COMPACT, H_CALL, 0x6119D0, 8,
        0x6874D0, GAME_10US_COMPACT, H_CALL, 0x6872C0, 1,
        0x6CD7E1, GAME_10US_COMPACT, H_CALL, 0x6CD2F0, 1,
        0x6D1A2E, GAME_10US_COMPACT, H_CALL, 0x6D1950, 1,
        0x6F7D41, GAME_10US_COMPACT, H_CALL, 0x6F7900, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetModelTxdIsDeletable)
    static int address;
    static int global_address;
    static const int id = 0x409C70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409C70, 0, 0, 0, 0, 0>;
    // total references count: 10us (15), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43A15A, GAME_10US_COMPACT, H_CALL, 0x43A0B0, 1,
        0x4D5B51, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 1,
        0x4D5B65, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 2,
        0x4D5B79, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 3,
        0x4D5B8D, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 4,
        0x6119FE, GAME_10US_COMPACT, H_JUMP, 0x6119D0, 1,
        0x611A18, GAME_10US_COMPACT, H_JUMP, 0x6119D0, 2,
        0x611A2C, GAME_10US_COMPACT, H_CALL, 0x6119D0, 3,
        0x611A45, GAME_10US_COMPACT, H_CALL, 0x6119D0, 4,
        0x611A5F, GAME_10US_COMPACT, H_JUMP, 0x6119D0, 5,
        0x611A79, GAME_10US_COMPACT, H_JUMP, 0x6119D0, 6,
        0x611A93, GAME_10US_COMPACT, H_JUMP, 0x6119D0, 7,
        0x611AAA, GAME_10US_COMPACT, H_JUMP, 0x6119D0, 8,
        0x6CD7EC, GAME_10US_COMPACT, H_CALL, 0x6CD2F0, 1,
        0x6F7D49, GAME_10US_COMPACT, H_CALL, 0x6F7900, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetMissionDoesntRequireModel)
    static int address;
    static int global_address;
    static const int id = 0x409C90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409C90, 0, 0, 0, 0, 0>;
    // total references count: 10us (14), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40B49D, GAME_10US_COMPACT, H_JUMP, 0x40B490, 1,
        0x40E58B, GAME_10US_COMPACT, H_CALL, 0x40E560, 1,
        0x4700ED, GAME_10US_COMPACT, H_JUMP, 0x4700E0, 1,
        0x4708C9, GAME_10US_COMPACT, H_CALL, 0x470890, 1,
        0x47F070, GAME_10US_COMPACT, H_CALL, 0x47E090, 1,
        0x48B57D, GAME_10US_COMPACT, H_JUMP, 0x48B570, 1,
        0x4986AD, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x4986CD, GAME_10US_COMPACT, H_CALL, 0x496E00, 2,
        0x4D5E52, GAME_10US_COMPACT, H_CALL, 0x4D5E50, 1,
        0x4D5ED7, GAME_10US_COMPACT, H_CALL, 0x4D5ED0, 1,
        0x59F6B2, GAME_10US_COMPACT, H_CALL, 0x59F660, 1,
        0x5B00E2, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5B00F6, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 2,
        0x5E867B, GAME_10US_COMPACT, H_CALL, 0x5E8620, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RequestSpecialModel)
    static int address;
    static int global_address;
    static const int id = 0x409D10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409D10, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40B45E, GAME_10US_COMPACT, H_JUMP, 0x40B450, 1,
        0x4668FF, GAME_10US_COMPACT, H_CALL, 0x465E60, 1,
        0x5B1123, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1,
        0x5E0116, GAME_10US_COMPACT, H_CALL, 0x5E00F0, 1>;
    using def_t = void(int, char *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,char *,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::RequestPlayerSection)
    static int address;
    static int global_address;
    static const int id = 0x409FF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x409FF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(int, char const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,char const *,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::RequestFile)
    static int address;
    static int global_address;
    static const int id = 0x40A080;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40A080, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5A420B, GAME_10US_COMPACT, H_CALL, 0x5A41C0, 1,
        0x5A429C, GAME_10US_COMPACT, H_CALL, 0x5A4220, 1,
        0x5A560A, GAME_10US_COMPACT, H_CALL, 0x5A55A0, 1>;
    using def_t = void(int, int, int, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int,int,int,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CStreaming::LoadInitialWeapons)
    static int address;
    static int global_address;
    static const int id = 0x40A120;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40A120, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D5C1E, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 1,
        0x5AFFE0, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5BA28A, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::StreamCopModels)
    static int address;
    static int global_address;
    static const int id = 0x40A150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40A150, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40B706, GAME_10US_COMPACT, H_CALL, 0x40B700, 1,
        0x40D3DB, GAME_10US_COMPACT, H_CALL, 0x40D3D0, 1,
        0x40ED26, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::StreamAmbulanceAndMedic)
    static int address;
    static int global_address;
    static const int id = 0x40A2A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40A2A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x42FA9A, GAME_10US_COMPACT, H_CALL, 0x42F9C0, 1,
        0x42FB00, GAME_10US_COMPACT, H_CALL, 0x42F9C0, 2>;
    using def_t = bool(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CStreaming::StreamFireEngineAndFireman)
    static int address;
    static int global_address;
    static const int id = 0x40A400;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40A400, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x42FB4B, GAME_10US_COMPACT, H_CALL, 0x42F9C0, 1,
        0x42FBA6, GAME_10US_COMPACT, H_CALL, 0x42F9C0, 2>;
    using def_t = bool(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CStreaming::StreamZoneModels)
    static int address;
    static int global_address;
    static const int id = 0x40A560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40A560, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E7F3, GAME_10US_COMPACT, H_CALL, 0x40E670, 1,
        0x44232E, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x5B0108, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::StreamZoneModels_Gangs)
    static int address;
    static int global_address;
    static const int id = 0x40AA10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40AA10, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40B6B9, GAME_10US_COMPACT, H_CALL, 0x40B650, 1,
        0x446F28, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::ReclassifyLoadedCars)
    static int address;
    static int global_address;
    static const int id = 0x40AFA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40AFA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40B6DB, GAME_10US_COMPACT, H_CALL, 0x40B650, 1,
        0x439356, GAME_10US_COMPACT, H_JUMP, 0x439230, 1,
        0x4394CE, GAME_10US_COMPACT, H_JUMP, 0x4394B0, 1,
        0x4394FE, GAME_10US_COMPACT, H_JUMP, 0x4394E0, 1,
        0x43985B, GAME_10US_COMPACT, H_CALL, 0x439720, 1,
        0x439EF0, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x43A09A, GAME_10US_COMPACT, H_JUMP, 0x439F60, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveCurrentZonesModels)
    static int address;
    static int global_address;
    static const int id = 0x40B080;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B080, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D5B33, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 1,
        0x5B140C, GAME_10US_COMPACT, H_CALL, 0x5B13F0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveLoadedZoneModel)
    static int address;
    static int global_address;
    static const int id = 0x40B340;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B340, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40D17D, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1,
        0x40D1C9, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 2,
        0x40D24B, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 3>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveInappropriatePedModels)
    static int address;
    static int global_address;
    static const int id = 0x40B3A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B3A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BE6C, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x618F21, GAME_10US_COMPACT, H_CALL, 0x618E90, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RequestSpecialChar)
    static int address;
    static int global_address;
    static const int id = 0x40B450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B450, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x47EDF5, GAME_10US_COMPACT, H_CALL, 0x47E090, 1>;
    using def_t = void(int, char const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,char const *,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::SetSpecialCharIsDeletable)
    static int address;
    static int global_address;
    static const int id = 0x40B470;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B470, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetMissionDoesntRequireSpecialChar)
    static int address;
    static int global_address;
    static const int id = 0x40B490;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B490, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x468749, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x47F443, GAME_10US_COMPACT, H_CALL, 0x47F370, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::LoadZoneVehicle)
    static int address;
    static int global_address;
    static const int id = 0x40B4B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B4B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::StreamOneNewCar)
    static int address;
    static int global_address;
    static const int id = 0x40B4F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B4F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40B6AF, GAME_10US_COMPACT, H_CALL, 0x40B650, 1,
        0x40B9B1, GAME_10US_COMPACT, H_CALL, 0x40B700, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::StreamVehiclesAndPeds_Always)
    static int address;
    static int global_address;
    static const int id = 0x40B650;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B650, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E7D0, GAME_10US_COMPACT, H_CALL, 0x40E670, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::StreamVehiclesAndPeds)
    static int address;
    static int global_address;
    static const int id = 0x40B700;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40B700, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E7E1, GAME_10US_COMPACT, H_CALL, 0x40E670, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::PossiblyStreamCarOutAfterCreation)
    static int address;
    static int global_address;
    static const int id = 0x40BA70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40BA70, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x431F05, GAME_10US_COMPACT, H_CALL, 0x430050, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::ClearSlots)
    static int address;
    static int global_address;
    static const int id = 0x40BAA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40BAA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40BBD1, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 1,
        0x40BC98, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 2,
        0x40BD52, GAME_10US_COMPACT, H_CALL, 0x40BBB0, 3>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::StreamPedsForInterior)
    static int address;
    static int global_address;
    static const int id = 0x40BBB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40BBB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x594BF5, GAME_10US_COMPACT, H_CALL, 0x594BF0, 1,
        0x594C2D, GAME_10US_COMPACT, H_CALL, 0x594C10, 1,
        0x596601, GAME_10US_COMPACT, H_CALL, 0x5965E0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::StreamPedsIntoRandomSlots)
    static int address;
    static int global_address;
    static const int id = 0x40BDA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40BDA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (13), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43921D, GAME_10US_COMPACT, H_CALL, 0x4391D0, 1,
        0x439289, GAME_10US_COMPACT, H_CALL, 0x439230, 1,
        0x4393BC, GAME_10US_COMPACT, H_CALL, 0x439360, 1,
        0x439450, GAME_10US_COMPACT, H_CALL, 0x4393F0, 1,
        0x439771, GAME_10US_COMPACT, H_CALL, 0x439720, 1,
        0x439E25, GAME_10US_COMPACT, H_CALL, 0x439DD0, 1,
        0x439EA4, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x439FC0, GAME_10US_COMPACT, H_CALL, 0x439F60, 1,
        0x43E73F, GAME_10US_COMPACT, H_CALL, 0x43E6D0, 1,
        0x43E78A, GAME_10US_COMPACT, H_CALL, 0x43E6D0, 2,
        0x43E7D5, GAME_10US_COMPACT, H_CALL, 0x43E6D0, 3,
        0x43E835, GAME_10US_COMPACT, H_CALL, 0x43E6D0, 4,
        0x43E894, GAME_10US_COMPACT, H_CALL, 0x43E6D0, 5>;
    using def_t = void(int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int *>, 0>;
META_END

META_BEGIN(CStreaming::RemoveDodgyPedsFromRandomSlots)
    static int address;
    static int global_address;
    static const int id = 0x40BE60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40BE60, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43E6E3, GAME_10US_COMPACT, H_JUMP, 0x43E6D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveLoadedVehicle)
    static int address;
    static int global_address;
    static const int id = 0x40C020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40C020, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40CF87, GAME_10US_COMPACT, H_CALL, 0x40CF80, 1,
        0x40D198, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1,
        0x40D1FC, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 2,
        0x40D23A, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 3,
        0x40E229, GAME_10US_COMPACT, H_CALL, 0x40E170, 1,
        0x4D5B38, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::PurgeRequestList)
    static int address;
    static int global_address;
    static const int id = 0x40C1E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40C1E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E948, GAME_10US_COMPACT, H_JUMP, 0x40E670, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, float, unsigned int))
    static int address;
    static int global_address;
    static const int id = 0x40C270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40C270, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40C672, GAME_10US_COMPACT, H_CALL, 0x40C520, 1,
        0x40D70C, GAME_10US_COMPACT, H_CALL, 0x40D3F0, 1,
        0x40D736, GAME_10US_COMPACT, H_CALL, 0x40D3F0, 2,
        0x40D763, GAME_10US_COMPACT, H_CALL, 0x40D3F0, 3>;
    using def_t = void(CPtrList *, float, float, float, float, float, float, float, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPtrList *,float,float,float,float,float,float,float,unsigned int>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN_OVERLOADED(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int))
    static int address;
    static int global_address;
    static const int id = 0x40C450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40C450, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40D6B5, GAME_10US_COMPACT, H_CALL, 0x40D3F0, 1,
        0x40D6BF, GAME_10US_COMPACT, H_CALL, 0x40D3F0, 2,
        0x40D6C9, GAME_10US_COMPACT, H_CALL, 0x40D3F0, 3>;
    using def_t = void(CPtrList *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPtrList *,unsigned int>, 0,1>;
META_END

META_BEGIN(CStreaming::AddLodsToRequestList)
    static int address;
    static int global_address;
    static const int id = 0x40C520;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40C520, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E71A, GAME_10US_COMPACT, H_CALL, 0x40E670, 1>;
    using def_t = void(CVector const *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *,unsigned int>, 0,1>;
META_END

META_BEGIN(CStreaming::ConvertBufferToObject)
    static int address;
    static int global_address;
    static const int id = 0x40C6B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40C6B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E2C5, GAME_10US_COMPACT, H_CALL, 0x40E170, 1>;
    using def_t = char(char *, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char *,int,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::RequestModelStream)
    static int address;
    static int global_address;
    static const int id = 0x40CBA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40CBA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E3FD, GAME_10US_COMPACT, H_CALL, 0x40E3A0, 1,
        0x40E427, GAME_10US_COMPACT, H_CALL, 0x40E3A0, 2,
        0x40EB0D, GAME_10US_COMPACT, H_CALL, 0x40EA10, 1,
        0x40EB29, GAME_10US_COMPACT, H_CALL, 0x40EA10, 2>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveAllUnusedModels)
    static int address;
    static int global_address;
    static const int id = 0x40CF80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40CF80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E577, GAME_10US_COMPACT, H_CALL, 0x40E560, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveLeastUsedModel)
    static int address;
    static int global_address;
    static const int id = 0x40CFD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40CFD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E103, GAME_10US_COMPACT, H_CALL, 0x40D7C0, 1,
        0x40E138, GAME_10US_COMPACT, H_CALL, 0x40E120, 1>;
    using def_t = bool(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CStreaming::LoadInitialPeds)
    static int address;
    static int global_address;
    static const int id = 0x40D3D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40D3D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D5C19, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 1,
        0x5AFFDB, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5BA257, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::AddModelsToRequestList)
    static int address;
    static int global_address;
    static const int id = 0x40D3F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40D3F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E6FB, GAME_10US_COMPACT, H_CALL, 0x40E670, 1,
        0x40E982, GAME_10US_COMPACT, H_CALL, 0x40E960, 1,
        0x40EC8C, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1,
        0x440544, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = void(CVector const *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *,unsigned int>, 0,1>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsBehindCamera)
    static int address;
    static int global_address;
    static const int id = 0x40D7C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40D7C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E164, GAME_10US_COMPACT, H_JUMP, 0x40E120, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::MakeSpaceFor)
    static int address;
    static int global_address;
    static const int id = 0x40E120;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E120, 0, 0, 0, 0, 0>;
    // total references count: 10us (8), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E2A7, GAME_10US_COMPACT, H_CALL, 0x40E170, 1,
        0x572EDD, GAME_10US_COMPACT, H_CALL, 0x572EC0, 1,
        0x572F74, GAME_10US_COMPACT, H_CALL, 0x572EC0, 2,
        0x573008, GAME_10US_COMPACT, H_CALL, 0x572EC0, 3,
        0x57310A, GAME_10US_COMPACT, H_CALL, 0x5730A0, 1,
        0x5731C9, GAME_10US_COMPACT, H_CALL, 0x5730A0, 2,
        0x5AFC33, GAME_10US_COMPACT, H_CALL, 0x5AFBC0, 1,
        0x5DD926, GAME_10US_COMPACT, H_CALL, 0x5DD910, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::ProcessLoadingChannel)
    static int address;
    static int global_address;
    static const int id = 0x40E170;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E170, 0, 0, 0, 0, 0>;
    // total references count: 10us (12), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x407785, GAME_10US_COMPACT, H_CALL, 0x4076C0, 1,
        0x40779D, GAME_10US_COMPACT, H_CALL, 0x4076C0, 2,
        0x40E3CA, GAME_10US_COMPACT, H_CALL, 0x40E3A0, 1,
        0x40E46B, GAME_10US_COMPACT, H_CALL, 0x40E460, 1,
        0x40E48F, GAME_10US_COMPACT, H_CALL, 0x40E460, 2,
        0x40E4A2, GAME_10US_COMPACT, H_CALL, 0x40E460, 3,
        0x40E4C6, GAME_10US_COMPACT, H_CALL, 0x40E460, 4,
        0x40E4D9, GAME_10US_COMPACT, H_CALL, 0x40E460, 5,
        0x40E9D0, GAME_10US_COMPACT, H_CALL, 0x40E9B0, 1,
        0x40E9E3, GAME_10US_COMPACT, H_CALL, 0x40E9B0, 2,
        0x40EAC3, GAME_10US_COMPACT, H_CALL, 0x40EA10, 1,
        0x40EAD7, GAME_10US_COMPACT, H_CALL, 0x40EA10, 2>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::LoadRequestedModels)
    static int address;
    static int global_address;
    static const int id = 0x40E3A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E3A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (10), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E7FB, GAME_10US_COMPACT, H_CALL, 0x40E670, 1,
        0x40E987, GAME_10US_COMPACT, H_CALL, 0x40E960, 1,
        0x573E40, GAME_10US_COMPACT, H_CALL, 0x573CF0, 1,
        0x5A5637, GAME_10US_COMPACT, H_CALL, 0x5A55A0, 1,
        0x5A5F9F, GAME_10US_COMPACT, H_CALL, 0x5A5F70, 1,
        0x5A601F, GAME_10US_COMPACT, H_CALL, 0x5A5F70, 2,
        0x5A605B, GAME_10US_COMPACT, H_CALL, 0x5A6040, 1,
        0x5A60E5, GAME_10US_COMPACT, H_CALL, 0x5A6040, 2,
        0x5A61E5, GAME_10US_COMPACT, H_CALL, 0x5A6040, 3,
        0x5A62ED, GAME_10US_COMPACT, H_CALL, 0x5A6040, 4>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::FlushChannels)
    static int address;
    static int global_address;
    static const int id = 0x40E460;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E460, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E558, GAME_10US_COMPACT, H_JUMP, 0x40E4E0, 1,
        0x40EA29, GAME_10US_COMPACT, H_CALL, 0x40EA10, 1,
        0x40EB52, GAME_10US_COMPACT, H_CALL, 0x40EA10, 2,
        0x5A43AC, GAME_10US_COMPACT, H_CALL, 0x5A43A0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::FlushRequestList)
    static int address;
    static int global_address;
    static const int id = 0x40E4E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E4E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40E56D, GAME_10US_COMPACT, H_CALL, 0x40E560, 1,
        0x44147C, GAME_10US_COMPACT, H_CALL, 0x441440, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::ReInit)
    static int address;
    static int global_address;
    static const int id = 0x40E560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E560, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C5DF, GAME_10US_COMPACT, H_CALL, 0x53C550, 1>;
    using def_t = unsigned int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Update)
    static int address;
    static int global_address;
    static const int id = 0x40E670;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E670, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BF0B, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::UpdateForAnimViewer)
    static int address;
    static int global_address;
    static const int id = 0x40E960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E960, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::GetDiscInDrive)
    static int address;
    static int global_address;
    static const int id = 0x40E9B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40E9B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = signed int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::LoadAllRequestedModels)
    static int address;
    static int global_address;
    static const int id = 0x40EA10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40EA10, 0, 0, 0, 0, 0>;
    // total references count: 10us (56), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4050DD, GAME_10US_COMPACT, H_CALL, 0x404DE0, 1,
        0x4054EC, GAME_10US_COMPACT, H_CALL, 0x4053F0, 1,
        0x405817, GAME_10US_COMPACT, H_CALL, 0x405780, 1,
        0x40EC84, GAME_10US_COMPACT, H_CALL, 0x40EB70, 1,
        0x40ED30, GAME_10US_COMPACT, H_CALL, 0x40EB70, 2,
        0x40EDCE, GAME_10US_COMPACT, H_JUMP, 0x40ED80, 1,
        0x410BC1, GAME_10US_COMPACT, H_CALL, 0x410AD0, 1,
        0x410E96, GAME_10US_COMPACT, H_CALL, 0x410E60, 1,
        0x411E58, GAME_10US_COMPACT, H_CALL, 0x411E30, 1,
        0x43862D, GAME_10US_COMPACT, H_CALL, 0x4385B0, 1,
        0x438901, GAME_10US_COMPACT, H_CALL, 0x438890, 1,
        0x438B95, GAME_10US_COMPACT, H_CALL, 0x438B30, 1,
        0x4395BE, GAME_10US_COMPACT, H_CALL, 0x4395B0, 1,
        0x439F17, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x43A137, GAME_10US_COMPACT, H_CALL, 0x43A0B0, 1,
        0x43A5AC, GAME_10US_COMPACT, H_CALL, 0x43A570, 1,
        0x4407C5, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440827, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x45CF0A, GAME_10US_COMPACT, H_CALL, 0x45CEA0, 1,
        0x45D52E, GAME_10US_COMPACT, H_CALL, 0x45D4B0, 1,
        0x466906, GAME_10US_COMPACT, H_CALL, 0x465E60, 1,
        0x483DE2, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1,
        0x49B421, GAME_10US_COMPACT, H_CALL, 0x49B3C0, 1,
        0x49BBA8, GAME_10US_COMPACT, H_CALL, 0x49B8D0, 1,
        0x4D5C69, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 1,
        0x4D5CA4, GAME_10US_COMPACT, H_CALL, 0x4D5C10, 2,
        0x4D5E3B, GAME_10US_COMPACT, H_CALL, 0x4D5E20, 1,
        0x4D5E9B, GAME_10US_COMPACT, H_CALL, 0x4D5E80, 1,
        0x570B6F, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x573E4E, GAME_10US_COMPACT, H_CALL, 0x573CF0, 1,
        0x594BFC, GAME_10US_COMPACT, H_CALL, 0x594BF0, 1,
        0x594C34, GAME_10US_COMPACT, H_CALL, 0x594C10, 1,
        0x596607, GAME_10US_COMPACT, H_CALL, 0x5965E0, 1,
        0x5A5611, GAME_10US_COMPACT, H_CALL, 0x5A55A0, 1,
        0x5A5F80, GAME_10US_COMPACT, H_CALL, 0x5A5F70, 1,
        0x5A60CD, GAME_10US_COMPACT, H_CALL, 0x5A6040, 1,
        0x5A61CC, GAME_10US_COMPACT, H_CALL, 0x5A6040, 2,
        0x5A62BB, GAME_10US_COMPACT, H_CALL, 0x5A6040, 3,
        0x5A64BD, GAME_10US_COMPACT, H_CALL, 0x5A6040, 4,
        0x5A8259, GAME_10US_COMPACT, H_CALL, 0x5A81E0, 1,
        0x5B0037, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5B0072, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 2,
        0x5B1175, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1,
        0x5BA25E, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1,
        0x5BA291, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 2,
        0x5D2A86, GAME_10US_COMPACT, H_CALL, 0x5D2A20, 1,
        0x5D4563, GAME_10US_COMPACT, H_CALL, 0x5D44B0, 1,
        0x5D458A, GAME_10US_COMPACT, H_CALL, 0x5D44B0, 2,
        0x6164B3, GAME_10US_COMPACT, H_CALL, 0x616470, 1,
        0x618ED8, GAME_10US_COMPACT, H_CALL, 0x618E90, 1,
        0x64F8A9, GAME_10US_COMPACT, H_CALL, 0x64F860, 1,
        0x6F73E6, GAME_10US_COMPACT, H_CALL, 0x6F72F0, 1,
        0x722833, GAME_10US_COMPACT, H_CALL, 0x722810, 1,
        0x724F3D, GAME_10US_COMPACT, H_CALL, 0x724E40, 1,
        0x724F93, GAME_10US_COMPACT, H_CALL, 0x724E40, 2,
        0x724FE9, GAME_10US_COMPACT, H_CALL, 0x724E40, 3>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CStreaming::LoadScene)
    static int address;
    static int global_address;
    static const int id = 0x40EB70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40EB70, 0, 0, 0, 0, 0>;
    // total references count: 10us (12), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440820, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440855, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x4414A7, GAME_10US_COMPACT, H_CALL, 0x441440, 1,
        0x4425F0, GAME_10US_COMPACT, H_CALL, 0x442480, 1,
        0x45F0AB, GAME_10US_COMPACT, H_CALL, 0x45F050, 1,
        0x4602CD, GAME_10US_COMPACT, H_CALL, 0x4600F0, 1,
        0x47B838, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x4850F3, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1,
        0x5B0AF0, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1,
        0x5BD804, GAME_10US_COMPACT, H_CALL, 0x5BD7B0, 1,
        0x618ED1, GAME_10US_COMPACT, H_CALL, 0x618E90, 1,
        0x6F73DF, GAME_10US_COMPACT, H_CALL, 0x6F72F0, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::LoadSceneCollision)
    static int address;
    static int global_address;
    static const int id = 0x40ED80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x40ED80, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x441494, GAME_10US_COMPACT, H_CALL, 0x441440, 1,
        0x4425E6, GAME_10US_COMPACT, H_CALL, 0x442480, 1,
        0x618EB5, GAME_10US_COMPACT, H_CALL, 0x618E90, 1>;
    using def_t = void(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::SetMissionDoesntRequireAnim)
    static int address;
    static int global_address;
    static const int id = 0x48B570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48B570, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x48C409, GAME_10US_COMPACT, H_CALL, 0x48B590, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN_OVERLOADED(CStreaming::LoadCdDirectory, void (*)(char const *, int))
    static int address;
    static int global_address;
    static const int id = 0x5B6170;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B6170, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8310, GAME_10US_COMPACT, H_CALL, 0x5B82C0, 1>;
    using def_t = void(char const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CStreaming::LoadCdDirectory, void (*)())
    static int address;
    static int global_address;
    static const int id = 0x5B82C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B82C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8E1B, GAME_10US_COMPACT, H_CALL, 0x5B8AD0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Init2)
    static int address;
    static int global_address;
    static const int id = 0x5B8AD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B8AD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B9020, GAME_10US_COMPACT, H_JUMP, 0x5B9020, 1,
        0x5B927D, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Init)
    static int address;
    static int global_address;
    static const int id = 0x5B9020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B9020, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::ReadIniFile)
    static int address;
    static int global_address;
    static const int id = 0x5BCCD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BCCD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BF996, GAME_10US_COMPACT, H_CALL, 0x5BF840, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Save)
    static int address;
    static int global_address;
    static const int id = 0x5D29A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D29A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D1567, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Load)
    static int address;
    static int global_address;
    static const int id = 0x5D29E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D29E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D198F, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
