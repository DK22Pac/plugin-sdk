/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPedGroupIntelligence)
    static int address;
    static int global_address;
    static const int id = 0x5F7250;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7250, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC16D, GAME_10US_COMPACT, H_CALL, 0x5FC150, 1>;
    using def_t = CPedGroupIntelligence *(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::SetGroupDecisionMakerType)
    static int address;
    static int global_address;
    static const int id = 0x5F7340;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7340, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x468825, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x4972D6, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x604457, GAME_10US_COMPACT, H_CALL, 0x6043A0, 1>;
    using def_t = int(CPedGroupIntelligence *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,int>, 0,1>;
META_END

DTOR_META_BEGIN(CPedGroupIntelligence)
    static int address;
    static int global_address;
    static const int id = 0x5F7350;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7350, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F8500, GAME_10US_COMPACT, H_JUMP, 0x5F8500, 1,
        0x5FB7B9, GAME_10US_COMPACT, H_CALL, 0x5FB790, 1,
        0x5FB850, GAME_10US_COMPACT, H_CALL, 0x5FB800, 1,
        0x5FB900, GAME_10US_COMPACT, H_CALL, 0x5FB8C0, 1,
        0x5FB960, GAME_10US_COMPACT, H_CALL, 0x5FB930, 1,
        0x5FC1BA, GAME_10US_COMPACT, H_CALL, 0x5FC190, 1>;
    using def_t = void(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::SetPrimaryTaskAllocator)
    static int address;
    static int global_address;
    static const int id = 0x5F7410;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7410, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPedGroupIntelligence *, CTaskAllocator *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CTaskAllocator *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::SetEventResponseTaskAllocator)
    static int address;
    static int global_address;
    static const int id = 0x5F7440;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7440, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = int(CPedGroupIntelligence *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,int>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::AddEvent)
    static int address;
    static int global_address;
    static const int id = 0x5F7470;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7470, 0, 0, 0, 0, 0>;
    // total references count: 10us (29), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440661, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440B3E, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x4925A9, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x4AB8CE, GAME_10US_COMPACT, H_CALL, 0x4AB8A0, 1,
        0x4B2A72, GAME_10US_COMPACT, H_CALL, 0x4B29E0, 1,
        0x4BA6D6, GAME_10US_COMPACT, H_CALL, 0x4B9FF0, 1,
        0x5F7D38, GAME_10US_COMPACT, H_CALL, 0x5F7CC0, 1,
        0x5FC7CB, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 1,
        0x606D3E, GAME_10US_COMPACT, H_CALL, 0x606BA0, 1,
        0x60A1A4, GAME_10US_COMPACT, H_CALL, 0x60A110, 1,
        0x60A325, GAME_10US_COMPACT, H_CALL, 0x60A1D0, 1,
        0x60B9E4, GAME_10US_COMPACT, H_CALL, 0x60B650, 1,
        0x60CAE9, GAME_10US_COMPACT, H_CALL, 0x60C840, 1,
        0x60CFAA, GAME_10US_COMPACT, H_CALL, 0x60CD20, 1,
        0x60E9E9, GAME_10US_COMPACT, H_CALL, 0x60E530, 1,
        0x63A98D, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63AAF7, GAME_10US_COMPACT, H_CALL, 0x63A890, 2,
        0x63E78C, GAME_10US_COMPACT, H_CALL, 0x63E040, 1,
        0x63F00B, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F13F, GAME_10US_COMPACT, H_CALL, 0x63E990, 2,
        0x63FC13, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FDF0, GAME_10US_COMPACT, H_CALL, 0x63F970, 2,
        0x63FF0E, GAME_10US_COMPACT, H_CALL, 0x63F970, 3,
        0x6420D8, GAME_10US_COMPACT, H_CALL, 0x641FC0, 1,
        0x643B69, GAME_10US_COMPACT, H_CALL, 0x643A60, 1,
        0x64BB39, GAME_10US_COMPACT, H_CALL, 0x64B950, 1,
        0x65E3C7, GAME_10US_COMPACT, H_CALL, 0x65E200, 1,
        0x686BCD, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1,
        0x6CD577, GAME_10US_COMPACT, H_CALL, 0x6CD2F0, 1>;
    using def_t = bool(CPedGroupIntelligence *, CEvent *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CEvent *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::SetTask)
    static int address;
    static int global_address;
    static const int id = 0x5F7540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7540, 0, 0, 0, 0, 0>;
    // total references count: 10us (31), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F8530, GAME_10US_COMPACT, H_CALL, 0x5F8510, 1,
        0x5F8553, GAME_10US_COMPACT, H_CALL, 0x5F8510, 2,
        0x5F8575, GAME_10US_COMPACT, H_CALL, 0x5F8560, 1,
        0x5F8595, GAME_10US_COMPACT, H_CALL, 0x5F8580, 1,
        0x5F8B8B, GAME_10US_COMPACT, H_CALL, 0x5F8900, 1,
        0x5F9066, GAME_10US_COMPACT, H_CALL, 0x5F8900, 2,
        0x5F9273, GAME_10US_COMPACT, H_CALL, 0x5F90A0, 1,
        0x5F9324, GAME_10US_COMPACT, H_CALL, 0x5F90A0, 2,
        0x5F944B, GAME_10US_COMPACT, H_CALL, 0x5F90A0, 3,
        0x5F94BD, GAME_10US_COMPACT, H_CALL, 0x5F90A0, 4,
        0x5F95C7, GAME_10US_COMPACT, H_CALL, 0x5F9530, 1,
        0x5F969C, GAME_10US_COMPACT, H_CALL, 0x5F9530, 2,
        0x5F97D0, GAME_10US_COMPACT, H_CALL, 0x5F9710, 1,
        0x5F99A5, GAME_10US_COMPACT, H_CALL, 0x5F9840, 1,
        0x5F9A90, GAME_10US_COMPACT, H_CALL, 0x5F99F0, 1,
        0x5F9B8B, GAME_10US_COMPACT, H_CALL, 0x5F9B20, 1,
        0x5F9CF8, GAME_10US_COMPACT, H_CALL, 0x5F9BD0, 1,
        0x5F9EA2, GAME_10US_COMPACT, H_CALL, 0x5F9D50, 1,
        0x5F9F5E, GAME_10US_COMPACT, H_CALL, 0x5F9D50, 2,
        0x5F9FBA, GAME_10US_COMPACT, H_CALL, 0x5F9D50, 3,
        0x5FA0D5, GAME_10US_COMPACT, H_CALL, 0x5FA020, 1,
        0x5FA238, GAME_10US_COMPACT, H_CALL, 0x5FA130, 1,
        0x5FA459, GAME_10US_COMPACT, H_CALL, 0x5FA290, 1,
        0x5FA71D, GAME_10US_COMPACT, H_CALL, 0x5FA550, 1,
        0x5FA8B2, GAME_10US_COMPACT, H_CALL, 0x5FA820, 1,
        0x5FAA01, GAME_10US_COMPACT, H_CALL, 0x5FA910, 1,
        0x5FAAF5, GAME_10US_COMPACT, H_CALL, 0x5FAA50, 1,
        0x5FAC6D, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1,
        0x5FB729, GAME_10US_COMPACT, H_CALL, 0x5FB670, 1,
        0x69C1DA, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69C6A8, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedGroupIntelligence *, CPed *, CTask const *, CPedTaskPair *, int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *,CTask const *,CPedTaskPair *,int,bool>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPedGroupIntelligence::GetTask)
    static int address;
    static int global_address;
    static const int id = 0x5F7660;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7660, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69BE14, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69C090, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 2>;
    using def_t = CTask *(CPedGroupIntelligence *, CPed *, CPedTaskPair const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *,CPedTaskPair const *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *, CPedTaskPair *))
    static int address;
    static int global_address;
    static const int id = 0x5F76C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F76C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F8707, GAME_10US_COMPACT, H_CALL, 0x5F86F0, 1,
        0x5F8718, GAME_10US_COMPACT, H_CALL, 0x5F86F0, 2,
        0x5F872E, GAME_10US_COMPACT, H_CALL, 0x5F86F0, 3,
        0x5F873E, GAME_10US_COMPACT, H_CALL, 0x5F86F0, 4>;
    using def_t = bool(CPedGroupIntelligence *, CPed const *, CTask const *, CPedTaskPair *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed const *,CTask const *,CPedTaskPair *>, 0,1,2,3>;
META_END

META_BEGIN_OVERLOADED(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)(CPedTaskPair *))
    static int address;
    static int global_address;
    static const int id = 0x5F7730;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7730, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F8757, GAME_10US_COMPACT, H_CALL, 0x5F8750, 1,
        0x5F8765, GAME_10US_COMPACT, H_CALL, 0x5F8750, 2,
        0x5F8773, GAME_10US_COMPACT, H_CALL, 0x5F8750, 3,
        0x5F8787, GAME_10US_COMPACT, H_CALL, 0x5F8780, 1,
        0x5F8795, GAME_10US_COMPACT, H_CALL, 0x5F8780, 2>;
    using def_t = void(CPedGroupIntelligence *, CPedTaskPair *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPedTaskPair *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::IsGroupResponding)
    static int address;
    static int global_address;
    static const int id = 0x5F7760;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7760, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC4C4, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 1>;
    using def_t = bool(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::IsCurrentEventValid)
    static int address;
    static int global_address;
    static const int id = 0x5F77A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F77A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC4CF, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 1>;
    using def_t = bool(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::ComputeScriptCommandTasks)
    static int address;
    static int global_address;
    static const int id = 0x5F7800;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7800, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC654, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 1>;
    using def_t = void(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::FlushTasks)
    static int address;
    static int global_address;
    static const int id = 0x5F79C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F79C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F88E0, GAME_10US_COMPACT, H_CALL, 0x5F88D0, 1,
        0x69CC65, GAME_10US_COMPACT, H_CALL, 0x69CC30, 1,
        0x69CC75, GAME_10US_COMPACT, H_CALL, 0x69CC30, 2,
        0x69D1A5, GAME_10US_COMPACT, H_CALL, 0x69D170, 1,
        0x69D1B5, GAME_10US_COMPACT, H_CALL, 0x69D170, 2,
        0x69D495, GAME_10US_COMPACT, H_CALL, 0x69D460, 1,
        0x69D4A5, GAME_10US_COMPACT, H_CALL, 0x69D460, 2>;
    using def_t = void(CPedGroupIntelligence *, CPedTaskPair *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPedTaskPair *,CPed *>, 0,1,2>;
META_END

META_BEGIN(CPedGroupIntelligence::SetEventResponseTask)
    static int address;
    static int global_address;
    static const int id = 0x5F8510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8510, 0, 0, 0, 0, 0>;
    // total references count: 10us (11), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69C01E, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69CD96, GAME_10US_COMPACT, H_CALL, 0x69CC30, 1,
        0x69CE10, GAME_10US_COMPACT, H_CALL, 0x69CC30, 2,
        0x69CF08, GAME_10US_COMPACT, H_CALL, 0x69CC30, 3,
        0x69D01D, GAME_10US_COMPACT, H_CALL, 0x69CC30, 4,
        0x69D29E, GAME_10US_COMPACT, H_CALL, 0x69D170, 1,
        0x69D3EA, GAME_10US_COMPACT, H_CALL, 0x69D170, 2,
        0x69D5D7, GAME_10US_COMPACT, H_CALL, 0x69D460, 1,
        0x69D658, GAME_10US_COMPACT, H_CALL, 0x69D460, 2,
        0x69D75B, GAME_10US_COMPACT, H_CALL, 0x69D460, 3,
        0x69D864, GAME_10US_COMPACT, H_CALL, 0x69D460, 4>;
    using def_t = void(CPedGroupIntelligence *, CPed *, bool, CTask const *, bool, CTask const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *,bool,CTask const *,bool,CTask const *,int>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPedGroupIntelligence::SetScriptCommandTask)
    static int address;
    static int global_address;
    static const int id = 0x5F8560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8560, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x465D66, GAME_10US_COMPACT, H_CALL, 0x465C20, 1,
        0x4925F1, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x600E64, GAME_10US_COMPACT, H_CALL, 0x600E20, 1>;
    using def_t = void(CPedGroupIntelligence *, CPed *, CTask const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *,CTask const *>, 0,1,2>;
META_END

META_BEGIN(CPedGroupIntelligence::SetDefaultTask)
    static int address;
    static int global_address;
    static const int id = 0x5F8580;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8580, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x492690, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1>;
    using def_t = void(CPedGroupIntelligence *, CPed *, CTask const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *,CTask const *>, 0,1,2>;
META_END

META_BEGIN(CPedGroupIntelligence::GetTaskSecondary)
    static int address;
    static int global_address;
    static const int id = 0x5F8620;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8620, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6330CD, GAME_10US_COMPACT, H_CALL, 0x6330B0, 1>;
    using def_t = CTask *(CPedGroupIntelligence *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::GetTaskSecondarySlot)
    static int address;
    static int global_address;
    static const int id = 0x5F8650;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8650, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6330D7, GAME_10US_COMPACT, H_CALL, 0x6330B0, 1>;
    using def_t = signed int(CPedGroupIntelligence *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::GetTaskScriptCommand)
    static int address;
    static int global_address;
    static const int id = 0x5F8690;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8690, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x465D6E, GAME_10US_COMPACT, H_CALL, 0x465C20, 1,
        0x608698, GAME_10US_COMPACT, H_CALL, 0x6085E0, 1>;
    using def_t = CTask *(CPedGroupIntelligence *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::GetTaskDefault)
    static int address;
    static int global_address;
    static const int id = 0x5F86C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F86C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x492668, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1>;
    using def_t = CTask *(CPedGroupIntelligence *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *))
    static int address;
    static int global_address;
    static const int id = 0x5F86F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F86F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x632EEA, GAME_10US_COMPACT, H_CALL, 0x632EB0, 1,
        0x632F11, GAME_10US_COMPACT, H_CALL, 0x632EB0, 2,
        0x632F5F, GAME_10US_COMPACT, H_CALL, 0x632F40, 1,
        0x633108, GAME_10US_COMPACT, H_CALL, 0x6330B0, 1>;
    using def_t = bool(CPedGroupIntelligence *, CPed const *, CTask const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed const *,CTask const *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)())
    static int address;
    static int global_address;
    static const int id = 0x5F8750;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8750, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::ReportAllBarScriptTasksFinished)
    static int address;
    static int global_address;
    static const int id = 0x5F8780;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8780, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x60CC9A, GAME_10US_COMPACT, H_CALL, 0x60CC50, 1>;
    using def_t = void(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::ProcessIgnorePlayerGroup)
    static int address;
    static int global_address;
    static const int id = 0x5F87A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F87A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC4A7, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 1>;
    using def_t = void(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::ComputeDefaultTasks)
    static int address;
    static int global_address;
    static const int id = 0x5F88D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F88D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x601796, GAME_10US_COMPACT, H_CALL, 0x601640, 1>;
    using def_t = void(CPedGroupIntelligence *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::SetDefaultTaskAllocator)
    static int address;
    static int global_address;
    static const int id = 0x5FB280;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB280, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FBB85, GAME_10US_COMPACT, H_JUMP, 0x5FBB70, 1,
        0x5FCB4B, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FD223, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD6D7, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1>;
    using def_t = void(CPedGroupIntelligence *, CPedGroupDefaultTaskAllocator const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,CPedGroupDefaultTaskAllocator const *>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::SetDefaultTaskAllocatorType)
    static int address;
    static int global_address;
    static const int id = 0x5FBB70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FBB70, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x46881D, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x46C4F7, GAME_10US_COMPACT, H_CALL, 0x46B460, 1,
        0x49228F, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x60A267, GAME_10US_COMPACT, H_CALL, 0x60A1D0, 1,
        0x60CEF4, GAME_10US_COMPACT, H_CALL, 0x60CD20, 1,
        0x60D678, GAME_10US_COMPACT, H_CALL, 0x60D5B0, 1,
        0x662481, GAME_10US_COMPACT, H_CALL, 0x662370, 1>;
    using def_t = void(CPedGroupIntelligence *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *,int>, 0,1>;
META_END

META_BEGIN(CPedGroupIntelligence::ComputeEventResponseTasks)
    static int address;
    static int global_address;
    static const int id = 0x5FC440;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC440, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC694, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 1,
        0x5FC75D, GAME_10US_COMPACT, H_CALL, 0x5FC4A0, 2>;
    using def_t = void *(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

META_BEGIN(CPedGroupIntelligence::Process)
    static int address;
    static int global_address;
    static const int id = 0x5FC4A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC4A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC7EF, GAME_10US_COMPACT, H_JUMP, 0x5FC7E0, 1,
        0x5FC822, GAME_10US_COMPACT, H_CALL, 0x5FC800, 1,
        0x5FCB68, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FCDFB, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 2,
        0x5FD240, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD2B5, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 2,
        0x5FD717, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1>;
    using def_t = void(CPedGroupIntelligence *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupIntelligence *>, 0>;
META_END

template<>
struct stack_object<CPedGroupIntelligence> : stack_object_no_default<CPedGroupIntelligence> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(ctor_gaddr(CPedGroupIntelligence), reinterpret_cast<CPedGroupIntelligence *>(objBuff));
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(dtor_gaddr(CPedGroupIntelligence), reinterpret_cast<CPedGroupIntelligence *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CPedGroupIntelligence *operator_new<CPedGroupIntelligence>() {
    void *objData = operator new(sizeof(CPedGroupIntelligence)); 
    CPedGroupIntelligence *obj = reinterpret_cast<CPedGroupIntelligence *>(objData);
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(ctor_gaddr(CPedGroupIntelligence), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CPedGroupIntelligence *operator_new_array<CPedGroupIntelligence>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPedGroupIntelligence) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPedGroupIntelligence *objArray = reinterpret_cast<CPedGroupIntelligence *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(ctor_gaddr(CPedGroupIntelligence), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline void operator_delete<CPedGroupIntelligence>(CPedGroupIntelligence *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(dtor_gaddr(CPedGroupIntelligence), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CPedGroupIntelligence>(CPedGroupIntelligence *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(dtor_gaddr(CPedGroupIntelligence), &objArray[i]);
    operator delete(objData);
}

}
