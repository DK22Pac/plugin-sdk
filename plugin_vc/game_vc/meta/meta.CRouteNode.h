/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRouteNode::GetRouteThisPointIsOn)
static int address;
static int global_address;
static const int id = 0x52FC50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FC50, 0x52FC70, 0x52FB40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51CA08,100,0,0x51C9E0,1, 0x521E81,100,0,0x521D10,1, 0x51CA28,110,0,0x51CA00,1, 0x521EA1,110,0,0x521D30,1, 0x51C8F8,120,0,0x51C8D0,1, 0x521D71,120,0,0x521C00,1>;
using def_t = short(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CRouteNode::GetPointPosition)
static int address;
static int global_address;
static const int id = 0x52FC60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FC60, 0x52FC80, 0x52FB50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51D7A0,100,0,0x51CA70,1, 0x521EDE,100,0,0x521D10,1, 0x51D7C0,110,0,0x51CA90,1, 0x521EFE,110,0,0x521D30,1, 0x51D690,120,0,0x51C960,1, 0x521DCE,120,0,0x521C00,1>;
using def_t = CVector *(CVector *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,short>, 0,1>;
META_END

META_BEGIN(CRouteNode::GetRouteStart)
static int address;
static int global_address;
static const int id = 0x52FC80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FC80, 0x52FCA0, 0x52FB70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x521E2D,100,0,0x521D10,1, 0x521E4D,110,0,0x521D30,1, 0x521D1D,120,0,0x521C00,1>;
using def_t = short(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CRouteNode::AddRoutePoint)
static int address;
static int global_address;
static const int id = 0x52FCA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FCA0, 0x52FCC0, 0x52FB90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4531AD,100,0,0x451F90,1, 0x4531AD,110,0,0x451F90,1, 0x45308D,120,0,0x451E70,1>;
using def_t = void(short, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short,CVector>, 0,1>;
META_END

META_BEGIN(CRouteNode::RemoveRoute)
static int address;
static int global_address;
static const int id = 0x52FCF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FCF0, 0x52FD10, 0x52FBE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x459C52,100,0,0x458EC0,1, 0x459C52,110,0,0x458EC0,1, 0x459B32,120,0,0x458DA0,1>;
using def_t = void(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CRouteNode::Initialise)
static int address;
static int global_address;
static const int id = 0x52FE40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FE40, 0x52FE60, 0x52FD30>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x451599,100,0,0x451550,1, 0x4A4DD1,100,0,0x4A4B10,1, 0x451599,110,0,0x451550,1, 0x4A4DF1,110,0,0x4A4B30,1, 0x4514A9,120,0,0x451460,1, 0x4A4C9E,120,0,0x4A49D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

CTOR_META_BEGIN(CRouteNode)
static int address;
static int global_address;
static const int id = 0x52FFB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52FFB0, 0x52FFD0, 0x52FEA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52FF9A,100,2,0,1, 0x52FFBA,110,2,0,1, 0x52FE8A,120,2,0,1>;
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
