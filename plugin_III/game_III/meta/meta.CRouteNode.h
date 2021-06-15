/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRouteNode::Initialise)
static int address;
static int global_address;
static const int id = 0x4EE470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE470, 0x4EE520, 0x4EE4B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C1A6,100,0,0x48BED0,1, 0x48C296,110,0,0x48BFC0,1, 0x48C226,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRouteNode::RemoveRoute)
static int address;
static int global_address;
static const int id = 0x4EE5C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE5C0, 0x4EE670, 0x4EE600>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E21A,100,0,0x44CB80,1, 0x44E21A,110,0,0x44CB80,1, 0x44E21A,120,0,0x44CB80,1>;
using def_t = void(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CRouteNode::AddRoutePoint)
static int address;
static int global_address;
static const int id = 0x4EE710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE710, 0x4EE7C0, 0x4EE750>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x442389,100,0,0x440CB0,1, 0x442389,110,0,0x440CB0,1, 0x442389,120,0,0x440CB0,1>;
using def_t = void(short, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short,CVector>, 0,1>;
META_END

META_BEGIN(CRouteNode::GetRouteStart)
static int address;
static int global_address;
static const int id = 0x4EE760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE760, 0x4EE810, 0x4EE7A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4DD6A4,100,0,0x4DD690,1, 0x4DD754,110,0,0x4DD740,1, 0x4DD6E4,120,0,0x4DD6D0,1>;
using def_t = short(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CRouteNode::GetPointPosition)
static int address;
static int global_address;
static const int id = 0x4EE780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE780, 0x4EE830, 0x4EE7C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4D9AF0,100,0,0x4D94E0,1, 0x4DD6E5,100,0,0x4DD690,1, 0x4D9B90,110,0,0x4D9580,1, 0x4DD795,110,0,0x4DD740,1, 0x4D9B20,120,0,0x4D9510,1, 0x4DD725,120,0,0x4DD6D0,1>;
using def_t = CVector *(CVector *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,short>, 0,1>;
META_END

META_BEGIN(CRouteNode::GetRouteThisPointIsOn)
static int address;
static int global_address;
static const int id = 0x4EE7A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE7A0, 0x4EE850, 0x4EE7E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4DD748,100,0,0x4DD720,1, 0x4DD7F8,110,0,0x4DD7D0,1, 0x4DD788,120,0,0x4DD760,1>;
using def_t = short(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

CTOR_META_BEGIN(CRouteNode)
static int address;
static int global_address;
static const int id = 0x4EE7D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE7D0, 0x4EE880, 0x4EE810>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4EE7BA,100,2,0,1, 0x4EE86A,110,2,0,1, 0x4EE7FA,120,2,0,1>;
using def_t = CRouteNode *(CRouteNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRouteNode *>, 0>;
META_END

template<>
struct stack_object<CRouteNode> : stack_object_no_default<CRouteNode> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CRouteNode *>(ctor_gaddr(CRouteNode), reinterpret_cast<CRouteNode *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CRouteNode *operator_new<CRouteNode>() {
    void *objData = operator new(sizeof(CRouteNode)); 
    CRouteNode *obj = reinterpret_cast<CRouteNode *>(objData);
    plugin::CallMethodDynGlobal<CRouteNode *>(ctor_gaddr(CRouteNode), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CRouteNode *operator_new_array<CRouteNode>(unsigned int objCount) {
    void *objData = operator new(sizeof(CRouteNode) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CRouteNode *objArray = reinterpret_cast<CRouteNode *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CRouteNode *>(ctor_gaddr(CRouteNode), &objArray[i]);
    return objArray;
}

}
