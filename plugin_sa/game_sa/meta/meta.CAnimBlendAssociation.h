/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4CE9B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE9B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN(CAnimBlendAssociation::AllocateAnimBlendNodeArray)
    static int address;
    static int global_address;
    static const int id = 0x4CE9F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE9F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CED70, GAME_10US_COMPACT, H_CALL, 0x4CED50, 1,
        0x4CEE75, GAME_10US_COMPACT, H_CALL, 0x4CEE40, 1,
        0x4CEEF5, GAME_10US_COMPACT, H_CALL, 0x4CEEC0, 1>;
    using def_t = void(CAnimBlendAssociation *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::FreeAnimBlendNodeArray)
    static int address;
    static int global_address;
    static const int id = 0x4CEA40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEA40, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN(CAnimBlendAssociation::ReferenceAnimBlock)
    static int address;
    static int global_address;
    static const int id = 0x4CEA50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEA50, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D438D, GAME_10US_COMPACT, H_CALL, 0x4D4330, 1,
        0x4D4568, GAME_10US_COMPACT, H_CALL, 0x4D4410, 1>;
    using def_t = void(CAnimBlendAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN(CAnimBlendAssociation::SetCurrentTime)
    static int address;
    static int global_address;
    static const int id = 0x4CEA80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEA80, 0, 0, 0, 0, 0>;
    // total references count: 10us (59), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x45B55C, GAME_10US_COMPACT, H_CALL, 0x45B4D0, 1,
        0x45B636, GAME_10US_COMPACT, H_CALL, 0x45B4D0, 2,
        0x45B703, GAME_10US_COMPACT, H_CALL, 0x45B4D0, 3,
        0x470CE8, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x491863, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x4C0517, GAME_10US_COMPACT, H_CALL, 0x4C0170, 1,
        0x4C054C, GAME_10US_COMPACT, H_CALL, 0x4C0170, 2,
        0x4CEB57, GAME_10US_COMPACT, H_CALL, 0x4CEB40, 1,
        0x4CEB74, GAME_10US_COMPACT, H_JUMP, 0x4CEB70, 1,
        0x533E86, GAME_10US_COMPACT, H_CALL, 0x533D30, 1,
        0x5B03D5, GAME_10US_COMPACT, H_CALL, 0x5B0390, 1,
        0x60AA7B, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 1,
        0x60AA88, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 2,
        0x60AA99, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 3,
        0x60AEF4, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 4,
        0x60AF01, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 5,
        0x61BD21, GAME_10US_COMPACT, H_CALL, 0x61BCB0, 1,
        0x61E5B5, GAME_10US_COMPACT, H_CALL, 0x61E3F0, 1,
        0x61E5C1, GAME_10US_COMPACT, H_CALL, 0x61E3F0, 2,
        0x61E5CD, GAME_10US_COMPACT, H_CALL, 0x61E3F0, 3,
        0x61E5D9, GAME_10US_COMPACT, H_CALL, 0x61E3F0, 4,
        0x61E920, GAME_10US_COMPACT, H_CALL, 0x61E8E0, 1,
        0x61FD72, GAME_10US_COMPACT, H_CALL, 0x61FD20, 1,
        0x62005A, GAME_10US_COMPACT, H_CALL, 0x61FF40, 1,
        0x62025C, GAME_10US_COMPACT, H_CALL, 0x61FF40, 2,
        0x6209E4, GAME_10US_COMPACT, H_CALL, 0x620910, 1,
        0x623BD4, GAME_10US_COMPACT, H_CALL, 0x623B10, 1,
        0x6250B8, GAME_10US_COMPACT, H_CALL, 0x624F30, 1,
        0x627C52, GAME_10US_COMPACT, H_CALL, 0x627B20, 1,
        0x629D68, GAME_10US_COMPACT, H_CALL, 0x629920, 1,
        0x629F8C, GAME_10US_COMPACT, H_CALL, 0x629920, 2,
        0x62A8CB, GAME_10US_COMPACT, H_CALL, 0x62A380, 1,
        0x62AB00, GAME_10US_COMPACT, H_CALL, 0x62A380, 2,
        0x62AB7B, GAME_10US_COMPACT, H_CALL, 0x62A380, 3,
        0x62ABCF, GAME_10US_COMPACT, H_CALL, 0x62A380, 4,
        0x62ABE6, GAME_10US_COMPACT, H_CALL, 0x62A380, 5,
        0x62D6FE, GAME_10US_COMPACT, H_CALL, 0x62D3B0, 1,
        0x62D789, GAME_10US_COMPACT, H_CALL, 0x62D3B0, 2,
        0x62D7BE, GAME_10US_COMPACT, H_CALL, 0x62D3B0, 3,
        0x65F05E, GAME_10US_COMPACT, H_CALL, 0x65EF80, 1,
        0x65F06B, GAME_10US_COMPACT, H_CALL, 0x65EF80, 2,
        0x65F078, GAME_10US_COMPACT, H_CALL, 0x65EF80, 3,
        0x65F107, GAME_10US_COMPACT, H_CALL, 0x65EF80, 4,
        0x65F114, GAME_10US_COMPACT, H_CALL, 0x65EF80, 5,
        0x678609, GAME_10US_COMPACT, H_CALL, 0x6784C0, 1,
        0x67CABE, GAME_10US_COMPACT, H_CALL, 0x67CA40, 1,
        0x67CB3D, GAME_10US_COMPACT, H_CALL, 0x67CA40, 2,
        0x67D3DC, GAME_10US_COMPACT, H_CALL, 0x67D380, 1,
        0x6B7DD0, GAME_10US_COMPACT, H_CALL, 0x6B7280, 1,
        0x6B7DFA, GAME_10US_COMPACT, H_CALL, 0x6B7280, 2,
        0x6B7E6C, GAME_10US_COMPACT, H_CALL, 0x6B7280, 3,
        0x6B7E96, GAME_10US_COMPACT, H_CALL, 0x6B7280, 4,
        0x6BFFEC, GAME_10US_COMPACT, H_CALL, 0x6BFB50, 1,
        0x6C064B, GAME_10US_COMPACT, H_CALL, 0x6C0590, 1,
        0x6C0787, GAME_10US_COMPACT, H_CALL, 0x6C0590, 2,
        0x6C07D2, GAME_10US_COMPACT, H_CALL, 0x6C0590, 3,
        0x7363BD, GAME_10US_COMPACT, H_CALL, 0x7360D0, 1,
        0x73A657, GAME_10US_COMPACT, H_CALL, 0x73A530, 1,
        0x73A7A4, GAME_10US_COMPACT, H_CALL, 0x73A530, 2>;
    using def_t = void(CAnimBlendAssociation *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::SyncAnimation)
    static int address;
    static int global_address;
    static const int id = 0x4CEB40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEB40, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D3B1E, GAME_10US_COMPACT, H_CALL, 0x4D3AA0, 1,
        0x4D3B71, GAME_10US_COMPACT, H_CALL, 0x4D3B30, 1,
        0x4D4402, GAME_10US_COMPACT, H_CALL, 0x4D4330, 1>;
    using def_t = void(CAnimBlendAssociation *, CAnimBlendAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendAssociation *>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::GetNode)
    static int address;
    static int global_address;
    static const int id = 0x4CEB60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEB60, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D3561, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 1,
        0x61AAAA, GAME_10US_COMPACT, H_CALL, 0x61AAA0, 1>;
    using def_t = CAnimBlendNode *(CAnimBlendAssociation *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::Start)
    static int address;
    static int global_address;
    static const int id = 0x4CEB70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEB70, 0, 0, 0, 0, 0>;
    // total references count: 10us (9), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D3AF8, GAME_10US_COMPACT, H_CALL, 0x4D3AA0, 1,
        0x4D3B80, GAME_10US_COMPACT, H_CALL, 0x4D3B30, 1,
        0x4D43CD, GAME_10US_COMPACT, H_CALL, 0x4D4330, 1,
        0x4D4595, GAME_10US_COMPACT, H_CALL, 0x4D4410, 1,
        0x4D45E3, GAME_10US_COMPACT, H_CALL, 0x4D4410, 2,
        0x4D47D5, GAME_10US_COMPACT, H_CALL, 0x4D4610, 1,
        0x4D67BE, GAME_10US_COMPACT, H_CALL, 0x4D6790, 1,
        0x62516E, GAME_10US_COMPACT, H_CALL, 0x624F30, 1,
        0x689EF6, GAME_10US_COMPACT, H_CALL, 0x6899F0, 1>;
    using def_t = void(CAnimBlendAssociation *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::SetBlendTo)
    static int address;
    static int global_address;
    static const int id = 0x4CEB80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEB80, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendAssociation *, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::SetBlend)
    static int address;
    static int global_address;
    static const int id = 0x4CEBA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEBA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x45B582, GAME_10US_COMPACT, H_CALL, 0x45B4D0, 1,
        0x45B64E, GAME_10US_COMPACT, H_CALL, 0x45B4D0, 2>;
    using def_t = void(CAnimBlendAssociation *, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::SetDeleteCallback)
    static int address;
    static int global_address;
    static const int id = 0x4CEBC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEBC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (67), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D1512, GAME_10US_COMPACT, H_CALL, 0x4D1490, 1,
        0x60B13E, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 1,
        0x60B164, GAME_10US_COMPACT, H_CALL, 0x60A9C0, 2,
        0x61AAE1, GAME_10US_COMPACT, H_CALL, 0x61AAA0, 1,
        0x61AC7A, GAME_10US_COMPACT, H_CALL, 0x61AC50, 1,
        0x61BB89, GAME_10US_COMPACT, H_CALL, 0x61BB10, 1,
        0x61C579, GAME_10US_COMPACT, H_CALL, 0x61C530, 1,
        0x61C58C, GAME_10US_COMPACT, H_CALL, 0x61C530, 2,
        0x61DF79, GAME_10US_COMPACT, H_CALL, 0x61DF30, 1,
        0x61E1CF, GAME_10US_COMPACT, H_CALL, 0x61E190, 1,
        0x621920, GAME_10US_COMPACT, H_CALL, 0x6218C0, 1,
        0x6226C9, GAME_10US_COMPACT, H_CALL, 0x622680, 1,
        0x622714, GAME_10US_COMPACT, H_CALL, 0x6226F0, 1,
        0x622770, GAME_10US_COMPACT, H_CALL, 0x6226F0, 2,
        0x623A53, GAME_10US_COMPACT, H_CALL, 0x6239F0, 1,
        0x623A71, GAME_10US_COMPACT, H_CALL, 0x6239F0, 2,
        0x623B2D, GAME_10US_COMPACT, H_CALL, 0x623B10, 1,
        0x623D6C, GAME_10US_COMPACT, H_CALL, 0x623B10, 2,
        0x623EAC, GAME_10US_COMPACT, H_CALL, 0x623B10, 3,
        0x624E9B, GAME_10US_COMPACT, H_CALL, 0x624E30, 1,
        0x624F9C, GAME_10US_COMPACT, H_CALL, 0x624F30, 1,
        0x627BE8, GAME_10US_COMPACT, H_CALL, 0x627B20, 1,
        0x627C1E, GAME_10US_COMPACT, H_CALL, 0x627B20, 2,
        0x62993D, GAME_10US_COMPACT, H_CALL, 0x629920, 1,
        0x629B7B, GAME_10US_COMPACT, H_CALL, 0x629920, 2,
        0x629DB2, GAME_10US_COMPACT, H_CALL, 0x629920, 3,
        0x62A5F1, GAME_10US_COMPACT, H_CALL, 0x62A380, 1,
        0x62D389, GAME_10US_COMPACT, H_CALL, 0x62D290, 1,
        0x661079, GAME_10US_COMPACT, H_CALL, 0x661030, 1,
        0x661132, GAME_10US_COMPACT, H_CALL, 0x661110, 1,
        0x664953, GAME_10US_COMPACT, H_CALL, 0x6648C0, 1,
        0x6649F6, GAME_10US_COMPACT, H_CALL, 0x6648C0, 2,
        0x675CC9, GAME_10US_COMPACT, H_CALL, 0x675C90, 1,
        0x675DA7, GAME_10US_COMPACT, H_CALL, 0x675D60, 1,
        0x675EC9, GAME_10US_COMPACT, H_CALL, 0x675E90, 1,
        0x675F82, GAME_10US_COMPACT, H_CALL, 0x675F60, 1,
        0x6760B9, GAME_10US_COMPACT, H_CALL, 0x676080, 1,
        0x676172, GAME_10US_COMPACT, H_CALL, 0x676150, 1,
        0x676DC8, GAME_10US_COMPACT, H_CALL, 0x676D30, 1,
        0x67701C, GAME_10US_COMPACT, H_CALL, 0x676D30, 2,
        0x677384, GAME_10US_COMPACT, H_CALL, 0x6772E0, 1,
        0x6775C3, GAME_10US_COMPACT, H_CALL, 0x6772E0, 2,
        0x677794, GAME_10US_COMPACT, H_CALL, 0x677780, 1,
        0x677892, GAME_10US_COMPACT, H_CALL, 0x677880, 1,
        0x677A10, GAME_10US_COMPACT, H_CALL, 0x677920, 1,
        0x677C17, GAME_10US_COMPACT, H_CALL, 0x677920, 2,
        0x678D89, GAME_10US_COMPACT, H_CALL, 0x678D50, 1,
        0x678F78, GAME_10US_COMPACT, H_CALL, 0x678F40, 1,
        0x67A219, GAME_10US_COMPACT, H_CALL, 0x67A1D0, 1,
        0x67A2D2, GAME_10US_COMPACT, H_CALL, 0x67A280, 1,
        0x67DC0D, GAME_10US_COMPACT, H_CALL, 0x67DBE0, 1,
        0x67DC92, GAME_10US_COMPACT, H_CALL, 0x67DBE0, 2,
        0x67DCCA, GAME_10US_COMPACT, H_CALL, 0x67DBE0, 3,
        0x67DCF0, GAME_10US_COMPACT, H_CALL, 0x67DBE0, 4,
        0x67DD65, GAME_10US_COMPACT, H_CALL, 0x67DBE0, 5,
        0x67DDAA, GAME_10US_COMPACT, H_CALL, 0x67DBE0, 6,
        0x680780, GAME_10US_COMPACT, H_CALL, 0x680600, 1,
        0x680802, GAME_10US_COMPACT, H_CALL, 0x680600, 2,
        0x680BB9, GAME_10US_COMPACT, H_CALL, 0x680600, 3,
        0x680BDE, GAME_10US_COMPACT, H_CALL, 0x680600, 4,
        0x68B810, GAME_10US_COMPACT, H_CALL, 0x68B7E0, 1,
        0x692E26, GAME_10US_COMPACT, H_CALL, 0x692DF0, 1,
        0x6930E1, GAME_10US_COMPACT, H_CALL, 0x692FF0, 1,
        0x693ACB, GAME_10US_COMPACT, H_CALL, 0x6939F0, 1,
        0x693B46, GAME_10US_COMPACT, H_CALL, 0x6939F0, 2,
        0x694545, GAME_10US_COMPACT, H_CALL, 0x694390, 1,
        0x694672, GAME_10US_COMPACT, H_CALL, 0x694640, 1>;
    using def_t = void(CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,void(*)(CAnimBlendAssociation *, void *),void *>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::SetFinishCallback)
    static int address;
    static int global_address;
    static const int id = 0x4CEBE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEBE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (150), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4543F8, GAME_10US_COMPACT, H_CALL, 0x454340, 1,
        0x45473A, GAME_10US_COMPACT, H_CALL, 0x454340, 2,
        0x4D1475, GAME_10US_COMPACT, H_CALL, 0x4D13D0, 1,
        0x4D1525, GAME_10US_COMPACT, H_CALL, 0x4D1490, 1,
        0x61A729, GAME_10US_COMPACT, H_CALL, 0x61A6F0, 1,
        0x61A87C, GAME_10US_COMPACT, H_CALL, 0x61A790, 1,
        0x61A97A, GAME_10US_COMPACT, H_CALL, 0x61A950, 1,
        0x61AE39, GAME_10US_COMPACT, H_CALL, 0x61ADF0, 1,
        0x61B003, GAME_10US_COMPACT, H_CALL, 0x61AF60, 1,
        0x61B1B4, GAME_10US_COMPACT, H_CALL, 0x61AF60, 2,
        0x61BB65, GAME_10US_COMPACT, H_CALL, 0x61BB10, 1,
        0x61BBA3, GAME_10US_COMPACT, H_CALL, 0x61BB10, 2,
        0x61C0AC, GAME_10US_COMPACT, H_CALL, 0x61BF20, 1,
        0x61F739, GAME_10US_COMPACT, H_CALL, 0x61F700, 1,
        0x61F798, GAME_10US_COMPACT, H_CALL, 0x61F780, 1,
        0x61F7EB, GAME_10US_COMPACT, H_CALL, 0x61F780, 2,
        0x61FC93, GAME_10US_COMPACT, H_CALL, 0x61FC50, 1,
        0x61FCFA, GAME_10US_COMPACT, H_CALL, 0x61FCC0, 1,
        0x61FDEE, GAME_10US_COMPACT, H_CALL, 0x61FD20, 1,
        0x61FEB3, GAME_10US_COMPACT, H_CALL, 0x61FE70, 1,
        0x61FF1A, GAME_10US_COMPACT, H_CALL, 0x61FEE0, 1,
        0x620278, GAME_10US_COMPACT, H_CALL, 0x61FF40, 1,
        0x6203B3, GAME_10US_COMPACT, H_CALL, 0x620370, 1,
        0x620420, GAME_10US_COMPACT, H_CALL, 0x6203F0, 1,
        0x620462, GAME_10US_COMPACT, H_CALL, 0x6203F0, 2,
        0x620572, GAME_10US_COMPACT, H_CALL, 0x620490, 1,
        0x6205BA, GAME_10US_COMPACT, H_CALL, 0x620490, 2,
        0x6205DF, GAME_10US_COMPACT, H_CALL, 0x620490, 3,
        0x6206BA, GAME_10US_COMPACT, H_CALL, 0x620660, 1,
        0x6206E3, GAME_10US_COMPACT, H_CALL, 0x620660, 2,
        0x620853, GAME_10US_COMPACT, H_CALL, 0x620810, 1,
        0x6208E2, GAME_10US_COMPACT, H_CALL, 0x620890, 1,
        0x6209F6, GAME_10US_COMPACT, H_CALL, 0x620910, 1,
        0x623BA2, GAME_10US_COMPACT, H_CALL, 0x623B10, 1,
        0x623EE1, GAME_10US_COMPACT, H_CALL, 0x623B10, 2,
        0x623F52, GAME_10US_COMPACT, H_CALL, 0x623B10, 3,
        0x6250CD, GAME_10US_COMPACT, H_CALL, 0x624F30, 1,
        0x62517C, GAME_10US_COMPACT, H_CALL, 0x624F30, 2,
        0x6251EF, GAME_10US_COMPACT, H_CALL, 0x624F30, 3,
        0x625B4F, GAME_10US_COMPACT, H_CALL, 0x6259E0, 1,
        0x62987D, GAME_10US_COMPACT, H_CALL, 0x6296D0, 1,
        0x62FB79, GAME_10US_COMPACT, H_CALL, 0x62FB40, 1,
        0x6310A9, GAME_10US_COMPACT, H_CALL, 0x631070, 1,
        0x6310F4, GAME_10US_COMPACT, H_CALL, 0x6310D0, 1,
        0x631119, GAME_10US_COMPACT, H_CALL, 0x6310D0, 2,
        0x631202, GAME_10US_COMPACT, H_CALL, 0x6311E0, 1,
        0x631359, GAME_10US_COMPACT, H_CALL, 0x631320, 1,
        0x6313A4, GAME_10US_COMPACT, H_CALL, 0x631380, 1,
        0x6313C9, GAME_10US_COMPACT, H_CALL, 0x631380, 2,
        0x631452, GAME_10US_COMPACT, H_CALL, 0x631410, 1,
        0x631D39, GAME_10US_COMPACT, H_CALL, 0x631D00, 1,
        0x637562, GAME_10US_COMPACT, H_CALL, 0x637520, 1,
        0x637A32, GAME_10US_COMPACT, H_CALL, 0x6379F0, 1,
        0x63800A, GAME_10US_COMPACT, H_CALL, 0x637FE0, 1,
        0x6399E1, GAME_10US_COMPACT, H_CALL, 0x639990, 1,
        0x63C4CC, GAME_10US_COMPACT, H_CALL, 0x63C460, 1,
        0x64274E, GAME_10US_COMPACT, H_CALL, 0x642700, 1,
        0x645C29, GAME_10US_COMPACT, H_CALL, 0x645BE0, 1,
        0x645F29, GAME_10US_COMPACT, H_CALL, 0x645EE0, 1,
        0x646139, GAME_10US_COMPACT, H_CALL, 0x6460F0, 1,
        0x646279, GAME_10US_COMPACT, H_CALL, 0x646230, 1,
        0x6463C9, GAME_10US_COMPACT, H_CALL, 0x646380, 1,
        0x6465B9, GAME_10US_COMPACT, H_CALL, 0x646570, 1,
        0x646759, GAME_10US_COMPACT, H_CALL, 0x646710, 1,
        0x6468D9, GAME_10US_COMPACT, H_CALL, 0x646890, 1,
        0x6472A9, GAME_10US_COMPACT, H_CALL, 0x647260, 1,
        0x6474D9, GAME_10US_COMPACT, H_CALL, 0x647490, 1,
        0x6480B9, GAME_10US_COMPACT, H_CALL, 0x648070, 1,
        0x648309, GAME_10US_COMPACT, H_CALL, 0x6482C0, 1,
        0x648CB2, GAME_10US_COMPACT, H_CALL, 0x648C40, 1,
        0x64ACCB, GAME_10US_COMPACT, H_CALL, 0x64AC00, 1,
        0x64ADD1, GAME_10US_COMPACT, H_CALL, 0x64AD90, 1,
        0x64AE5F, GAME_10US_COMPACT, H_CALL, 0x64AE00, 1,
        0x64AF26, GAME_10US_COMPACT, H_CALL, 0x64AE90, 1,
        0x64AFF1, GAME_10US_COMPACT, H_CALL, 0x64AFB0, 1,
        0x64B2A0, GAME_10US_COMPACT, H_CALL, 0x64B080, 1,
        0x64B38F, GAME_10US_COMPACT, H_CALL, 0x64B2D0, 1,
        0x64B42F, GAME_10US_COMPACT, H_CALL, 0x64B3E0, 1,
        0x64BE29, GAME_10US_COMPACT, H_CALL, 0x64BDE0, 1,
        0x64BF41, GAME_10US_COMPACT, H_CALL, 0x64BF00, 1,
        0x64C051, GAME_10US_COMPACT, H_CALL, 0x64C010, 1,
        0x64C1D9, GAME_10US_COMPACT, H_CALL, 0x64C190, 1,
        0x64CBAE, GAME_10US_COMPACT, H_CALL, 0x64C970, 1,
        0x64CC83, GAME_10US_COMPACT, H_CALL, 0x64CC60, 1,
        0x64CD49, GAME_10US_COMPACT, H_CALL, 0x64CCE0, 1,
        0x6530C9, GAME_10US_COMPACT, H_CALL, 0x653090, 1,
        0x65312D, GAME_10US_COMPACT, H_CALL, 0x6530F0, 1,
        0x653209, GAME_10US_COMPACT, H_CALL, 0x6531D0, 1,
        0x65326F, GAME_10US_COMPACT, H_CALL, 0x653240, 1,
        0x653619, GAME_10US_COMPACT, H_CALL, 0x6535D0, 1,
        0x655E77, GAME_10US_COMPACT, H_CALL, 0x655E50, 1,
        0x655ECC, GAME_10US_COMPACT, H_CALL, 0x655EA0, 1,
        0x655F5E, GAME_10US_COMPACT, H_CALL, 0x655F20, 1,
        0x657A4B, GAME_10US_COMPACT, H_CALL, 0x657A10, 1,
        0x6588D9, GAME_10US_COMPACT, H_CALL, 0x6588A0, 1,
        0x658A7E, GAME_10US_COMPACT, H_CALL, 0x6589B0, 1,
        0x659E5A, GAME_10US_COMPACT, H_CALL, 0x659E30, 1,
        0x65A81A, GAME_10US_COMPACT, H_CALL, 0x65A7C0, 1,
        0x664A1E, GAME_10US_COMPACT, H_CALL, 0x6648C0, 1,
        0x676DF0, GAME_10US_COMPACT, H_CALL, 0x676D30, 1,
        0x676E7D, GAME_10US_COMPACT, H_CALL, 0x676D30, 2,
        0x676EAD, GAME_10US_COMPACT, H_CALL, 0x676D30, 3,
        0x676EFB, GAME_10US_COMPACT, H_CALL, 0x676D30, 4,
        0x677044, GAME_10US_COMPACT, H_CALL, 0x676D30, 5,
        0x6773AE, GAME_10US_COMPACT, H_CALL, 0x6772E0, 1,
        0x67745F, GAME_10US_COMPACT, H_CALL, 0x6772E0, 2,
        0x6775ED, GAME_10US_COMPACT, H_CALL, 0x6772E0, 3,
        0x677860, GAME_10US_COMPACT, H_CALL, 0x677780, 1,
        0x677909, GAME_10US_COMPACT, H_CALL, 0x677880, 1,
        0x677A38, GAME_10US_COMPACT, H_CALL, 0x677920, 1,
        0x677AC1, GAME_10US_COMPACT, H_CALL, 0x677920, 2,
        0x677C3F, GAME_10US_COMPACT, H_CALL, 0x677920, 3,
        0x677FB9, GAME_10US_COMPACT, H_CALL, 0x677F80, 1,
        0x6780BE, GAME_10US_COMPACT, H_CALL, 0x677FE0, 1,
        0x678349, GAME_10US_COMPACT, H_CALL, 0x678310, 1,
        0x67847D, GAME_10US_COMPACT, H_CALL, 0x678370, 1,
        0x678E29, GAME_10US_COMPACT, H_CALL, 0x678DC0, 1,
        0x678F19, GAME_10US_COMPACT, H_CALL, 0x678EE0, 1,
        0x678F69, GAME_10US_COMPACT, H_CALL, 0x678F40, 1,
        0x679B29, GAME_10US_COMPACT, H_CALL, 0x679AF0, 1,
        0x67C9D5, GAME_10US_COMPACT, H_CALL, 0x67C770, 1,
        0x67CA9A, GAME_10US_COMPACT, H_CALL, 0x67CA40, 1,
        0x67CAEE, GAME_10US_COMPACT, H_CALL, 0x67CA40, 2,
        0x67CB2A, GAME_10US_COMPACT, H_CALL, 0x67CA40, 3,
        0x67CD1A, GAME_10US_COMPACT, H_CALL, 0x67CCB0, 1,
        0x67D42A, GAME_10US_COMPACT, H_CALL, 0x67D380, 1,
        0x67D947, GAME_10US_COMPACT, H_CALL, 0x67D7A0, 1,
        0x680C30, GAME_10US_COMPACT, H_CALL, 0x680600, 1,
        0x68B6CA, GAME_10US_COMPACT, H_CALL, 0x68B690, 1,
        0x68B762, GAME_10US_COMPACT, H_CALL, 0x68B740, 1,
        0x690BE9, GAME_10US_COMPACT, H_CALL, 0x690BB0, 1,
        0x690C4D, GAME_10US_COMPACT, H_CALL, 0x690C10, 1,
        0x69169A, GAME_10US_COMPACT, H_CALL, 0x691630, 1,
        0x692069, GAME_10US_COMPACT, H_CALL, 0x692030, 1,
        0x6920B0, GAME_10US_COMPACT, H_CALL, 0x692030, 2,
        0x692156, GAME_10US_COMPACT, H_CALL, 0x692100, 1,
        0x692176, GAME_10US_COMPACT, H_CALL, 0x692100, 2,
        0x69228E, GAME_10US_COMPACT, H_CALL, 0x692100, 3,
        0x6922F3, GAME_10US_COMPACT, H_CALL, 0x692100, 4,
        0x692351, GAME_10US_COMPACT, H_CALL, 0x692340, 1,
        0x692375, GAME_10US_COMPACT, H_CALL, 0x692340, 2,
        0x692747, GAME_10US_COMPACT, H_CALL, 0x692700, 1,
        0x692761, GAME_10US_COMPACT, H_CALL, 0x692700, 2,
        0x6930C2, GAME_10US_COMPACT, H_CALL, 0x692FF0, 1,
        0x693A29, GAME_10US_COMPACT, H_CALL, 0x6939F0, 1,
        0x693A70, GAME_10US_COMPACT, H_CALL, 0x6939F0, 2,
        0x693AA2, GAME_10US_COMPACT, H_CALL, 0x6939F0, 3,
        0x693B1D, GAME_10US_COMPACT, H_CALL, 0x6939F0, 4,
        0x693C0D, GAME_10US_COMPACT, H_CALL, 0x693BD0, 1,
        0x6C07EB, GAME_10US_COMPACT, H_CALL, 0x6C0590, 1>;
    using def_t = void(CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,void(*)(CAnimBlendAssociation *, void *),void *>, 0,1,2>;
META_END

DTOR_META_BEGIN(CAnimBlendAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4CECF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CECF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CEFA3, GAME_10US_COMPACT, H_CALL, 0x4CEFA0, 1>;
    using def_t = void(CAnimBlendAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *))
    static int address;
    static int global_address;
    static const int id = 0x4CED50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CED50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CF006, GAME_10US_COMPACT, H_CALL, 0x4CEFC0, 1>;
    using def_t = void(CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,RpClump *,CAnimBlendHierarchy *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &))
    static int address;
    static int global_address;
    static const int id = 0x4CEE40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEE40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CF052, GAME_10US_COMPACT, H_CALL, 0x4CF020, 1>;
    using def_t = void(CAnimBlendAssociation *, CAnimBlendAssociation &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendAssociation &>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendStaticAssociation &))
    static int address;
    static int global_address;
    static const int id = 0x4CEEC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEEC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CF0B2, GAME_10US_COMPACT, H_CALL, 0x4CF080, 1>;
    using def_t = void(CAnimBlendAssociation *, CAnimBlendStaticAssociation &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendStaticAssociation &>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CAnimBlendAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4CEFA0;
    static const bool is_virtual = true;
    static const int vtable_index = 0;
    using mv_addresses_t = MvAddresses<0x4CEFA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x85C6D0, GAME_10US_COMPACT, H_CALLBACK, 0x85C6D0, 1>;
    using def_t = void(CAnimBlendAssociation *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,unsigned char>, 0,1>;
META_END

CTOR_META_BEGIN_OVERLOADED(CAnimBlendAssociation, void(RpClump *, CAnimBlendHierarchy *))
    static int address;
    static int global_address;
    static const int id = 0x4CEFC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEFC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D436F, GAME_10US_COMPACT, H_CALL, 0x4D4330, 1,
        0x4D4546, GAME_10US_COMPACT, H_CALL, 0x4D4410, 1>;
    using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,RpClump *,CAnimBlendHierarchy *>, 0,1,2>;
META_END

CTOR_META_BEGIN_OVERLOADED(CAnimBlendAssociation, void(CAnimBlendAssociation &))
    static int address;
    static int global_address;
    static const int id = 0x4CF020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF020, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *, CAnimBlendAssociation &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendAssociation &>, 0,1>;
META_END

CTOR_META_BEGIN_OVERLOADED(CAnimBlendAssociation, void(CAnimBlendHierarchy &))
    static int address;
    static int global_address;
    static const int id = 0x4CF080;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CF080, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CE0FC, GAME_10US_COMPACT, H_CALL, 0x4CE0B0, 1,
        0x4CE182, GAME_10US_COMPACT, H_CALL, 0x4CE130, 1>;
    using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *, CAnimBlendHierarchy &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendHierarchy &>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::UpdateTimeStep)
    static int address;
    static int global_address;
    static const int id = 0x4D13A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D13A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendAssociation *, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::UpdateTime)
    static int address;
    static int global_address;
    static const int id = 0x4D13D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D13D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D3751, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 1>;
    using def_t = bool(CAnimBlendAssociation *, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::UpdateBlend)
    static int address;
    static int global_address;
    static const int id = 0x4D1490;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D1490, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4D353C, GAME_10US_COMPACT, H_CALL, 0x4D34F0, 1>;
    using def_t = bool(CAnimBlendAssociation *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float>, 0,1>;
META_END

template<>
struct stack_object<CAnimBlendAssociation> : stack_object_no_default<CAnimBlendAssociation> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(ctor_gaddr(CAnimBlendAssociation), reinterpret_cast<CAnimBlendAssociation *>(objBuff));
    }
    SUPPORTED_10US stack_object(CAnimBlendHierarchy &rhs) {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendHierarchy &>(ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendHierarchy &)), reinterpret_cast<CAnimBlendAssociation *>(objBuff), rhs);
    }
    SUPPORTED_10US stack_object(RpClump *clump, CAnimBlendHierarchy *hier) {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *>(ctor_gaddr_o(CAnimBlendAssociation, void(RpClump *, CAnimBlendHierarchy *)), reinterpret_cast<CAnimBlendAssociation *>(objBuff), clump, hier);
    }
    SUPPORTED_10US stack_object(CAnimBlendAssociation &rhs) {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation &>(ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)), reinterpret_cast<CAnimBlendAssociation *>(objBuff), rhs);
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(dtor_gaddr(CAnimBlendAssociation), reinterpret_cast<CAnimBlendAssociation *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CAnimBlendAssociation *operator_new<CAnimBlendAssociation>() {
    void *objData = operator new(sizeof(CAnimBlendAssociation)); 
    CAnimBlendAssociation *obj = reinterpret_cast<CAnimBlendAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(ctor_gaddr(CAnimBlendAssociation), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CAnimBlendAssociation *operator_new_array<CAnimBlendAssociation>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendAssociation) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendAssociation *objArray = reinterpret_cast<CAnimBlendAssociation *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(ctor_gaddr(CAnimBlendAssociation), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline CAnimBlendAssociation *operator_new<CAnimBlendAssociation>(CAnimBlendHierarchy &rhs) {
    void *objData = operator new(sizeof(CAnimBlendAssociation)); 
    CAnimBlendAssociation *obj = reinterpret_cast<CAnimBlendAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendHierarchy &>(ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendHierarchy &)), obj, rhs);
    return obj;
}
template <>
SUPPORTED_10US inline CAnimBlendAssociation *operator_new<CAnimBlendAssociation>(RpClump *clump, CAnimBlendHierarchy *hier) {
    void *objData = operator new(sizeof(CAnimBlendAssociation)); 
    CAnimBlendAssociation *obj = reinterpret_cast<CAnimBlendAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *>(ctor_gaddr_o(CAnimBlendAssociation, void(RpClump *, CAnimBlendHierarchy *)), obj, clump, hier);
    return obj;
}
template <>
SUPPORTED_10US inline CAnimBlendAssociation *operator_new<CAnimBlendAssociation>(CAnimBlendAssociation &rhs) {
    void *objData = operator new(sizeof(CAnimBlendAssociation)); 
    CAnimBlendAssociation *obj = reinterpret_cast<CAnimBlendAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation &>(ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)), obj, rhs);
    return obj;
}
template <>
SUPPORTED_10US inline void operator_delete<CAnimBlendAssociation>(CAnimBlendAssociation *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CAnimBlendAssociation *, unsigned char>(obj, 1);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CAnimBlendAssociation>(CAnimBlendAssociation *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CAnimBlendAssociation *, unsigned char>(&objArray[i], 1);
    operator delete(objData);
}

}
