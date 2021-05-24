/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CMissionCleanup)
static int address;
static int global_address;
static const int id = 0x437AD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437AD0, 0x437AD0, 0x437AD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43EBA5,100,0,0x43EBA0,1, 0x43EBA5,110,0,0x43EBA0,1, 0x43EBA5,120,0,0x43EBA0,1>;
using def_t = CMissionCleanup *(CMissionCleanup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMissionCleanup *>, 0>;
META_END

META_BEGIN(CMissionCleanup::Init)
static int address;
static int global_address;
static const int id = 0x437AE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437AE0, 0x437AE0, 0x437AE0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x437AD3,100,0,0x437AD0,1, 0x43883B,100,0,0x438790,1, 0x437AD3,110,0,0x437AD0,1, 0x43883B,110,0,0x438790,1, 0x437AD3,120,0,0x437AD0,1, 0x43883B,120,0,0x438790,1>;
using def_t = void(CMissionCleanup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMissionCleanup *>, 0>;
META_END

META_BEGIN(CMissionCleanup::FindFree)
static int address;
static int global_address;
static const int id = 0x437B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437B80, 0x437B80, 0x437B80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x437BA3,100,0,0x437BA0,1, 0x437BA3,110,0,0x437BA0,1, 0x437BA3,120,0,0x437BA0,1>;
using def_t = tCleanupEntity *(CMissionCleanup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMissionCleanup *>, 0>;
META_END

META_BEGIN(CMissionCleanup::AddEntityToList)
static int address;
static int global_address;
static const int id = 0x437BA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437BA0, 0x437BA0, 0x437BA0>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x43BCA9,100,0,0x43AEA0,1, 0x43C7C1,100,0,0x43AEA0,2, 0x43D72C,100,0,0x43D530,1, 0x43D75A,100,0,0x43D530,2, 0x43D885,100,0,0x43D530,3, 0x43D8B3,100,0,0x43D530,4, 0x43DEA1,100,0,0x43D530,5, 0x43E84C,100,0,0x43D530,6, 0x441BE4,100,0,0x440CB0,1, 0x444F39,100,0,0x444B20,1, 0x4467F5,100,0,0x4458A0,1, 0x446A56,100,0,0x4458A0,2, 0x448789,100,0,0x448240,1, 0x448904,100,0,0x448240,2, 0x44C287,100,0,0x448240,3, 0x58982D,100,0,0x588490,1, 0x58AE83,100,0,0x589D00,1, 0x58B0C6,100,0,0x589D00,2, 0x43BCA9,110,0,0x43AEA0,1, 0x43C7C1,110,0,0x43AEA0,2, 0x43D72C,110,0,0x43D530,1, 0x43D75A,110,0,0x43D530,2, 0x43D885,110,0,0x43D530,3, 0x43D8B3,110,0,0x43D530,4, 0x43DEA1,110,0,0x43D530,5, 0x43E84C,110,0,0x43D530,6, 0x441BE4,110,0,0x440CB0,1, 0x444F39,110,0,0x444B20,1, 0x4467F5,110,0,0x4458A0,1, 0x446A56,110,0,0x4458A0,2, 0x448789,110,0,0x448240,1, 0x448904,110,0,0x448240,2, 0x44C287,110,0,0x448240,3, 0x589B6D,110,0,0x5887D0,1, 0x58B1C3,110,0,0x58A040,1, 0x58B406,110,0,0x58A040,2, 0x43BCA9,120,0,0x43AEA0,1, 0x43C7C1,120,0,0x43AEA0,2, 0x43D72C,120,0,0x43D530,1, 0x43D75A,120,0,0x43D530,2, 0x43D885,120,0,0x43D530,3, 0x43D8B3,120,0,0x43D530,4, 0x43DEA1,120,0,0x43D530,5, 0x43E84C,120,0,0x43D530,6, 0x441BE4,120,0,0x440CB0,1, 0x444F39,120,0,0x444B20,1, 0x4467F5,120,0,0x4458A0,1, 0x446A56,120,0,0x4458A0,2, 0x448789,120,0,0x448240,1, 0x448904,120,0,0x448240,2, 0x44C287,120,0,0x448240,3, 0x589A5D,120,0,0x5886C0,1, 0x58B0B3,120,0,0x589F30,1, 0x58B2F6,120,0,0x589F30,2>;
using def_t = void(CMissionCleanup *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMissionCleanup *,int,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CMissionCleanup::RemoveEntityFromList)
static int address;
static int global_address;
static const int id = 0x437BD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437BD0, 0x437BD0, 0x437BD0>;
// total references count: 10en (12), 11en (12), steam (12)
using refs_t = RefList<0x43BD87,100,0,0x43AEA0,1, 0x43C826,100,0,0x43AEA0,2, 0x43D6E6,100,0,0x43D530,1, 0x43D83F,100,0,0x43D530,2, 0x43DF06,100,0,0x43D530,3, 0x441794,100,0,0x440CB0,1, 0x4417E0,100,0,0x440CB0,2, 0x44182C,100,0,0x440CB0,3, 0x44186B,100,0,0x440CB0,4, 0x4418AA,100,0,0x440CB0,5, 0x4418E9,100,0,0x440CB0,6, 0x44AA39,100,0,0x448240,1, 0x43BD87,110,0,0x43AEA0,1, 0x43C826,110,0,0x43AEA0,2, 0x43D6E6,110,0,0x43D530,1, 0x43D83F,110,0,0x43D530,2, 0x43DF06,110,0,0x43D530,3, 0x441794,110,0,0x440CB0,1, 0x4417E0,110,0,0x440CB0,2, 0x44182C,110,0,0x440CB0,3, 0x44186B,110,0,0x440CB0,4, 0x4418AA,110,0,0x440CB0,5, 0x4418E9,110,0,0x440CB0,6, 0x44AA39,110,0,0x448240,1, 0x43BD87,120,0,0x43AEA0,1, 0x43C826,120,0,0x43AEA0,2, 0x43D6E6,120,0,0x43D530,1, 0x43D83F,120,0,0x43D530,2, 0x43DF06,120,0,0x43D530,3, 0x441794,120,0,0x440CB0,1, 0x4417E0,120,0,0x440CB0,2, 0x44182C,120,0,0x440CB0,3, 0x44186B,120,0,0x440CB0,4, 0x4418AA,120,0,0x440CB0,5, 0x4418E9,120,0,0x440CB0,6, 0x44AA39,120,0,0x448240,1>;
using def_t = void(CMissionCleanup *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMissionCleanup *,int,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CMissionCleanup::Process)
static int address;
static int global_address;
static const int id = 0x437C10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437C10, 0x437C10, 0x437C10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43D61F,100,0,0x43D530,1, 0x43D61F,110,0,0x43D530,1, 0x43D61F,120,0,0x43D530,1>;
using def_t = void(CMissionCleanup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMissionCleanup *>, 0>;
META_END

template<>
struct stack_object<CMissionCleanup> : stack_object_no_default<CMissionCleanup> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CMissionCleanup *>(ctor_gaddr(CMissionCleanup), reinterpret_cast<CMissionCleanup *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CMissionCleanup *operator_new<CMissionCleanup>() {
    void *objData = operator new(sizeof(CMissionCleanup)); 
    CMissionCleanup *obj = reinterpret_cast<CMissionCleanup *>(objData);
    plugin::CallMethodDynGlobal<CMissionCleanup *>(ctor_gaddr(CMissionCleanup), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CMissionCleanup *operator_new_array<CMissionCleanup>(unsigned int objCount) {
    void *objData = operator new(sizeof(CMissionCleanup) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CMissionCleanup *objArray = reinterpret_cast<CMissionCleanup *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CMissionCleanup *>(ctor_gaddr(CMissionCleanup), &objArray[i]);
    return objArray;
}

}
