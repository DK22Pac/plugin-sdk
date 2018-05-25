/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN_OVERLOADED(CFileLoader::LoadLine, char *(*)(FILESTREAM))
    static int address;
    static int global_address;
    static const int id = 0x536F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x536F80, 0, 0, 0, 0, 0>;
    // total references count: 10us (74), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x49AE7B, GAME_10US_COMPACT, H_CALL, 0x49AE70, 1,
        0x49AEF7, GAME_10US_COMPACT, H_CALL, 0x49AE70, 2,
        0x49AF17, GAME_10US_COMPACT, H_CALL, 0x49AF10, 1,
        0x49AF55, GAME_10US_COMPACT, H_CALL, 0x49AF10, 2,
        0x49B70E, GAME_10US_COMPACT, H_CALL, 0x49B6A0, 1,
        0x49B896, GAME_10US_COMPACT, H_CALL, 0x49B6A0, 2,
        0x49B963, GAME_10US_COMPACT, H_CALL, 0x49B8D0, 1,
        0x49BB68, GAME_10US_COMPACT, H_CALL, 0x49B8D0, 2,
        0x49BCBC, GAME_10US_COMPACT, H_CALL, 0x49BBE0, 1,
        0x49BDAC, GAME_10US_COMPACT, H_CALL, 0x49BBE0, 2,
        0x5598A5, GAME_10US_COMPACT, H_CALL, 0x559860, 1,
        0x55997B, GAME_10US_COMPACT, H_CALL, 0x559860, 2,
        0x5599E0, GAME_10US_COMPACT, H_CALL, 0x5599B0, 1,
        0x559A28, GAME_10US_COMPACT, H_CALL, 0x5599B0, 2,
        0x55D112, GAME_10US_COMPACT, H_CALL, 0x55D0E0, 1,
        0x55D1F7, GAME_10US_COMPACT, H_CALL, 0x55D0E0, 2,
        0x55EBB0, GAME_10US_COMPACT, H_CALL, 0x55EB90, 1,
        0x55F282, GAME_10US_COMPACT, H_CALL, 0x55EB90, 2,
        0x55F2C9, GAME_10US_COMPACT, H_CALL, 0x55F2B0, 1,
        0x55F3F9, GAME_10US_COMPACT, H_CALL, 0x55F2B0, 2,
        0x5A315C, GAME_10US_COMPACT, H_CALL, 0x5A3140, 1,
        0x5A3236, GAME_10US_COMPACT, H_CALL, 0x5A3140, 2,
        0x5A7B60, GAME_10US_COMPACT, H_CALL, 0x5A7B30, 1,
        0x5A7E58, GAME_10US_COMPACT, H_CALL, 0x5A7B30, 2,
        0x5B24ED, GAME_10US_COMPACT, H_CALL, 0x5B24D0, 1,
        0x5B25D6, GAME_10US_COMPACT, H_CALL, 0x5B24D0, 2,
        0x5B5454, GAME_10US_COMPACT, H_CALL, 0x5B5360, 1,
        0x5B5798, GAME_10US_COMPACT, H_CALL, 0x5B5360, 2,
        0x5B65D6, GAME_10US_COMPACT, H_CALL, 0x5B65A0, 1,
        0x5B6864, GAME_10US_COMPACT, H_CALL, 0x5B65A0, 2,
        0x5B6E2D, GAME_10US_COMPACT, H_CALL, 0x5B6E10, 1,
        0x5B6F0F, GAME_10US_COMPACT, H_CALL, 0x5B6E10, 2,
        0x5B844B, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1,
        0x5B8603, GAME_10US_COMPACT, H_CALL, 0x5B8400, 2,
        0x5B8722, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1,
        0x5B8A0F, GAME_10US_COMPACT, H_CALL, 0x5B8700, 2,
        0x5B906A, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1,
        0x5B92E6, GAME_10US_COMPACT, H_CALL, 0x5B9030, 2,
        0x5BB8A9, GAME_10US_COMPACT, H_CALL, 0x5BB890, 1,
        0x5BB9CA, GAME_10US_COMPACT, H_CALL, 0x5BB890, 2,
        0x5BBB21, GAME_10US_COMPACT, H_CALL, 0x5BBAC0, 1,
        0x5BBB3C, GAME_10US_COMPACT, H_CALL, 0x5BBAC0, 2,
        0x5BC115, GAME_10US_COMPACT, H_CALL, 0x5BC090, 1,
        0x5BC12D, GAME_10US_COMPACT, H_CALL, 0x5BC090, 2,
        0x5BC937, GAME_10US_COMPACT, H_CALL, 0x5BC910, 1,
        0x5BC9ED, GAME_10US_COMPACT, H_CALL, 0x5BC910, 2,
        0x5BCCE6, GAME_10US_COMPACT, H_CALL, 0x5BCCD0, 1,
        0x5BCEF7, GAME_10US_COMPACT, H_CALL, 0x5BCCD0, 2,
        0x5BD7CD, GAME_10US_COMPACT, H_CALL, 0x5BD7B0, 1,
        0x5BD874, GAME_10US_COMPACT, H_CALL, 0x5BD830, 1,
        0x5BE456, GAME_10US_COMPACT, H_CALL, 0x5BD830, 2,
        0x5BE699, GAME_10US_COMPACT, H_CALL, 0x5BE670, 1,
        0x5BEC55, GAME_10US_COMPACT, H_CALL, 0x5BE670, 2,
        0x5BEF63, GAME_10US_COMPACT, H_CALL, 0x5BEDC0, 1,
        0x5BF2C8, GAME_10US_COMPACT, H_CALL, 0x5BEDC0, 2,
        0x5C02AA, GAME_10US_COMPACT, H_CALL, 0x5C0280, 1,
        0x5C0477, GAME_10US_COMPACT, H_CALL, 0x5C0280, 2,
        0x5DD3EF, GAME_10US_COMPACT, H_CALL, 0x5DD3B0, 1,
        0x5DD4E8, GAME_10US_COMPACT, H_CALL, 0x5DD3B0, 2,
        0x608B51, GAME_10US_COMPACT, H_CALL, 0x608B30, 1,
        0x608D79, GAME_10US_COMPACT, H_CALL, 0x608B30, 2,
        0x6EAF6E, GAME_10US_COMPACT, H_CALL, 0x6EAE80, 1,
        0x6EB5D7, GAME_10US_COMPACT, H_CALL, 0x6EAE80, 2,
        0x6FDC31, GAME_10US_COMPACT, H_CALL, 0x6FDC00, 1,
        0x6FDD30, GAME_10US_COMPACT, H_CALL, 0x6FDC00, 2,
        0x7187E3, GAME_10US_COMPACT, H_CALL, 0x7187C0, 1,
        0x718830, GAME_10US_COMPACT, H_CALL, 0x7187C0, 2,
        0x718862, GAME_10US_COMPACT, H_CALL, 0x7187C0, 3,
        0x718898, GAME_10US_COMPACT, H_CALL, 0x7187C0, 4,
        0x7188F1, GAME_10US_COMPACT, H_CALL, 0x7187C0, 5,
        0x71895E, GAME_10US_COMPACT, H_CALL, 0x7187C0, 6,
        0x71898A, GAME_10US_COMPACT, H_CALL, 0x7187C0, 7,
        0x71D50D, GAME_10US_COMPACT, H_CALL, 0x71D4E0, 1,
        0x71D57B, GAME_10US_COMPACT, H_CALL, 0x71D4E0, 2>;
    using def_t = char *(FILESTREAM);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<FILESTREAM>, 0>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadLine, char *(*)(char **, int &))
    static int address;
    static int global_address;
    static const int id = 0x536FE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x536FE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x405D90, GAME_10US_COMPACT, H_CALL, 0x405C00, 1,
        0x405E9E, GAME_10US_COMPACT, H_CALL, 0x405C00, 2,
        0x406296, GAME_10US_COMPACT, H_CALL, 0x406080, 1,
        0x406338, GAME_10US_COMPACT, H_CALL, 0x406080, 2>;
    using def_t = char *(char **, int &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char **,int &>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadAtomicFile2Return)
    static int address;
    static int global_address;
    static const int id = 0x537060;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537060, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = RpClump *(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::SetRelatedModelInfoCB)
    static int address;
    static int global_address;
    static const int id = 0x537150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537150, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x537241, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = RpAtomic *(RpAtomic *, void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadAtomicFile, void (*)(RwStream *, unsigned int))
    static int address;
    static int global_address;
    static const int id = 0x5371F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5371F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40C7E6, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1>;
    using def_t = void(RwStream *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwStream *,unsigned int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadClumpFile, bool (*)(RwStream *, unsigned int))
    static int address;
    static int global_address;
    static const int id = 0x5372D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5372D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40C80F, GAME_10US_COMPACT, H_CALL, 0x40C6B0, 1>;
    using def_t = bool(RwStream *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwStream *,unsigned int>, 0,1>;
META_END

META_BEGIN(CFileLoader::StartLoadClumpFile)
    static int address;
    static int global_address;
    static const int id = 0x5373F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5373F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool(RwStream *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwStream *,unsigned int>, 0,1>;
META_END

META_BEGIN(CFileLoader::FinishLoadClumpFile)
    static int address;
    static int global_address;
    static const int id = 0x537450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537450, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x408D34, GAME_10US_COMPACT, H_CALL, 0x408CB0, 1>;
    using def_t = bool(RwStream *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwStream *,unsigned int>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadBoundingBox)
    static int address;
    static int global_address;
    static const int id = 0x5374B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5374B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(unsigned char *, CBoundingBox &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,CBoundingBox &>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadCollisionModel)
    static int address;
    static int global_address;
    static const int id = 0x537580;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537580, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x41B2A5, GAME_10US_COMPACT, H_CALL, 0x41B1D0, 1,
        0x5385D3, GAME_10US_COMPACT, H_CALL, 0x538440, 1,
        0x5B4FB5, GAME_10US_COMPACT, H_CALL, 0x5B4E60, 1,
        0x5B5181, GAME_10US_COMPACT, H_CALL, 0x5B5000, 1>;
    using def_t = void(unsigned char *, CColModel &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,CColModel &>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadCarGenerator, void (*)(CFileCarGenerator *, int))
    static int address;
    static int global_address;
    static const int id = 0x537990;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537990, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x406267, GAME_10US_COMPACT, H_CALL, 0x406080, 1,
        0x5B47A0, GAME_10US_COMPACT, H_CALL, 0x5B4740, 1>;
    using def_t = void(CFileCarGenerator *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CFileCarGenerator *,int>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadCollisionModelVer4)
    static int address;
    static int global_address;
    static const int id = 0x537AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537AE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x538618, GAME_10US_COMPACT, H_CALL, 0x538440, 1>;
    using def_t = void(void *, unsigned int, CColModel &, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<void *,unsigned int,CColModel &,char const *>, 0,1,2,3>;
META_END

META_BEGIN(CFileLoader::LoadCollisionModelVer3)
    static int address;
    static int global_address;
    static const int id = 0x537CE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537CE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x41B27E, GAME_10US_COMPACT, H_CALL, 0x41B1D0, 1,
        0x538602, GAME_10US_COMPACT, H_CALL, 0x538440, 1,
        0x5B4F83, GAME_10US_COMPACT, H_CALL, 0x5B4E60, 1,
        0x5B5157, GAME_10US_COMPACT, H_CALL, 0x5B5000, 1>;
    using def_t = void(unsigned char *, unsigned int, CColModel &, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int,CColModel &,char const *>, 0,1,2,3>;
META_END

META_BEGIN(CFileLoader::LoadCollisionModelVer2)
    static int address;
    static int global_address;
    static const int id = 0x537EE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537EE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x41B296, GAME_10US_COMPACT, H_CALL, 0x41B1D0, 1,
        0x5385EC, GAME_10US_COMPACT, H_CALL, 0x538440, 1,
        0x5B4FA0, GAME_10US_COMPACT, H_CALL, 0x5B4E60, 1,
        0x5B5170, GAME_10US_COMPACT, H_CALL, 0x5B5000, 1>;
    using def_t = void(unsigned char *, unsigned int, CColModel &, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int,CColModel &,char const *>, 0,1,2,3>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadObjectInstance, CEntity *(*)(CFileObjectInstance *, char const *))
    static int address;
    static int global_address;
    static const int id = 0x538090;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x538090, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x405C99, GAME_10US_COMPACT, H_CALL, 0x405C00, 1,
        0x4061E8, GAME_10US_COMPACT, H_CALL, 0x406080, 1,
        0x5386E3, GAME_10US_COMPACT, H_CALL, 0x538690, 1>;
    using def_t = CEntity *(CFileObjectInstance *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CFileObjectInstance *,char const *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadCollisionFile, bool (*)(unsigned char *, unsigned int, unsigned char))
    static int address;
    static int global_address;
    static const int id = 0x538440;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x538440, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x410717, GAME_10US_COMPACT, H_CALL, 0x4106D0, 1>;
    using def_t = bool(unsigned char *, unsigned int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int,unsigned char>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadObjectInstance, CEntity *(*)(char const *))
    static int address;
    static int global_address;
    static const int id = 0x538690;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x538690, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x405E0A, GAME_10US_COMPACT, H_CALL, 0x405C00, 1,
        0x4062F2, GAME_10US_COMPACT, H_CALL, 0x406080, 1,
        0x5B892A, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = CEntity *(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadTexDictionary)
    static int address;
    static int global_address;
    static const int id = 0x5B3860;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3860, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B910A, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = RwTexDictionary *(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::SaveTexDictionary)
    static int address;
    static int global_address;
    static const int id = 0x5B38C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B38C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(RwTexDictionary *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwTexDictionary *,char const *>, 0,1>;
META_END

META_BEGIN(CFileLoader::AddTexDictionaries)
    static int address;
    static int global_address;
    static const int id = 0x5B3910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3910, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(RwTexDictionary *, RwTexDictionary *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwTexDictionary *,RwTexDictionary *>, 0,1>;
META_END

META_BEGIN(CFileLoader::FindRelatedModelInfoCB)
    static int address;
    static int global_address;
    static const int id = 0x5B3930;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3930, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B3A06, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = RpAtomic *(RpAtomic *, void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadAtomicFile, void (*)(char const *))
    static int address;
    static int global_address;
    static const int id = 0x5B39D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B39D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B91B0, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadClumpFile, void (*)(char const *))
    static int address;
    static int global_address;
    static const int id = 0x5B3A30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3A30, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B91DB, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::ReloadObjectTypes)
    static int address;
    static int global_address;
    static const int id = 0x5B3AC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3AC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadObject)
    static int address;
    static int global_address;
    static const int id = 0x5B3C60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3C60, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B85DD, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = int(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadTimeObject)
    static int address;
    static int global_address;
    static const int id = 0x5B3DE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3DE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B862C, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = int(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadWeaponObject)
    static int address;
    static int global_address;
    static const int id = 0x5B3FB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3FB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8634, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = int(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadClumpObject)
    static int address;
    static int global_address;
    static const int id = 0x5B4040;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4040, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B863C, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = int(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadAnimatedClumpObject)
    static int address;
    static int global_address;
    static const int id = 0x5B40C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B40C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8644, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadPathHeader)
    static int address;
    static int global_address;
    static const int id = 0x5B41C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B41C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8666, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1,
        0x5B899A, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = int(char const *, int &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,int &>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadPedPathNode)
    static int address;
    static int global_address;
    static const int id = 0x5B41F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B41F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B6EE0, GAME_10US_COMPACT, H_CALL, 0x5B6E10, 1,
        0x5B867F, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1,
        0x5B89B2, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,int,int>, 0,1,2>;
META_END

META_BEGIN(CFileLoader::LoadCarPathNode)
    static int address;
    static int global_address;
    static const int id = 0x5B4380;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4380, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B6EFD, GAME_10US_COMPACT, H_CALL, 0x5B6E10, 1,
        0x5B869C, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1,
        0x5B89D0, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *, int, int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,int,int,bool>, 0,1,2,3>;
META_END

META_BEGIN(CFileLoader::LoadGarage)
    static int address;
    static int global_address;
    static const int id = 0x5B4530;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4530, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8988, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadStuntJump)
    static int address;
    static int global_address;
    static const int id = 0x5B45D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B45D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B89F9, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadCarGenerator, void (*)(char const *, int))
    static int address;
    static int global_address;
    static const int id = 0x5B4740;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4740, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B89EE, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,int>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadPickup)
    static int address;
    static int global_address;
    static const int id = 0x5B47B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B47B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B89E4, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadZone)
    static int address;
    static int global_address;
    static const int id = 0x5B4AB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4AB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B894C, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadCullZone)
    static int address;
    static int global_address;
    static const int id = 0x5B4B40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4B40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8957, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadOcclusionVolume)
    static int address;
    static int global_address;
    static const int id = 0x5B4C80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4C80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8967, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,char const *>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadAudioZone)
    static int address;
    static int global_address;
    static const int id = 0x5B4D70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4D70, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8975, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN_OVERLOADED(CFileLoader::LoadCollisionFile, void (*)(char const *, unsigned char))
    static int address;
    static int global_address;
    static const int id = 0x5B4E60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B4E60, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4106B7, GAME_10US_COMPACT, H_CALL, 0x410690, 1,
        0x5B9188, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = void(char const *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,unsigned char>, 0,1>;
META_END

META_BEGIN(CFileLoader::LoadCollisionFileFirstTime)
    static int address;
    static int global_address;
    static const int id = 0x5B5000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B5000, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x410706, GAME_10US_COMPACT, H_CALL, 0x4106D0, 1>;
    using def_t = bool(unsigned char *, unsigned int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CFileLoader::ReloadPaths)
    static int address;
    static int global_address;
    static const int id = 0x5B6E10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B6E10, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadVehicleObject)
    static int address;
    static int global_address;
    static const int id = 0x5B6F30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B6F30, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B864C, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = int(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadPedObject)
    static int address;
    static int global_address;
    static const int id = 0x5B7420;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B7420, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8654, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = int(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadTXDParent)
    static int address;
    static int global_address;
    static const int id = 0x5B75E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B75E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B86C5, GAME_10US_COMPACT, H_CALL, 0x5B8400, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x5B8030;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B8030, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8980, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadTimeCyclesModifier)
    static int address;
    static int global_address;
    static const int id = 0x5B81D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B81D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B8A01, GAME_10US_COMPACT, H_CALL, 0x5B8700, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadObjectTypes)
    static int address;
    static int global_address;
    static const int id = 0x5B8400;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B8400, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B9206, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadScene)
    static int address;
    static int global_address;
    static const int id = 0x5B8700;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B8700, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B92C7, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CFileLoader::LoadLevel)
    static int address;
    static int global_address;
    static const int id = 0x5B9030;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B9030, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BC95, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1,
        0x53BC9B, GAME_10US_COMPACT, H_CALL, 0x53BC80, 2>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(GetNameAndDamage)
    static int address;
    static int global_address;
    static const int id = 0x5370A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5370A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x537183, GAME_10US_COMPACT, H_CALL, 0x537150, 1,
        0x5B394F, GAME_10US_COMPACT, H_CALL, 0x5B3930, 1>;
    using def_t = void(char const *, char *, bool &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,char *,bool &>, 0,1,2>;
META_END

META_BEGIN(CloneAtomicToClumpCB)
    static int address;
    static int global_address;
    static const int id = 0x537290;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x537290, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x537346, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = RpAtomic *(RpAtomic *, void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(GetFilename)
    static int address;
    static int global_address;
    static const int id = 0x5B3660;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3660, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = char const *(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(LoadingScreenLoadingFile)
    static int address;
    static int global_address;
    static const int id = 0x5B3680;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B3680, 0, 0, 0, 0, 0>;
    // total references count: 10us (9), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B9180, GAME_10US_COMPACT, H_CALL, 0x5B9030, 1,
        0x5B91AA, GAME_10US_COMPACT, H_CALL, 0x5B9030, 2,
        0x5B91D5, GAME_10US_COMPACT, H_CALL, 0x5B9030, 3,
        0x5B9200, GAME_10US_COMPACT, H_CALL, 0x5B9030, 4,
        0x5B9253, GAME_10US_COMPACT, H_CALL, 0x5B9030, 5,
        0x5B9269, GAME_10US_COMPACT, H_CALL, 0x5B9030, 6,
        0x5B9278, GAME_10US_COMPACT, H_CALL, 0x5B9030, 7,
        0x5B928C, GAME_10US_COMPACT, H_CALL, 0x5B9030, 8,
        0x5B92BD, GAME_10US_COMPACT, H_CALL, 0x5B9030, 9>;
    using def_t = void(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(AddTextureCB)
    static int address;
    static int global_address;
    static const int id = 0x5B38F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B38F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5B391A, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x5B9113, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = RwTexture *(RwTexture *, void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RwTexture *,void *>, 0,1>;
META_END

}
