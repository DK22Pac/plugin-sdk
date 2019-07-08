/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CColLine, void(CVector *, CVector *))
static int address;
static int global_address;
static const int id = 0x40B320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B320, 0x40B320, 0x40B320>;
// total references count: 10en (37), 11en (0), steam (0)
using refs_t = RefList<0x40F7AF,100,0,0x40F720,1, 0x40F9A2,100,0,0x40F910,1, 0x4AEC32,100,0,0x4AEAA0,1, 0x4AECDE,100,0,0x4AEAA0,2, 0x4AED83,100,0,0x4AEAA0,3, 0x4AEE4F,100,0,0x4AEAA0,4, 0x4AEEFD,100,0,0x4AEAA0,5, 0x4AF02D,100,0,0x4AEAA0,6, 0x4AF0CF,100,0,0x4AEAA0,7, 0x4AF1DE,100,0,0x4AEAA0,8, 0x4AF27D,100,0,0x4AEAA0,9, 0x4AF335,100,0,0x4AEAA0,10, 0x4AF3DD,100,0,0x4AEAA0,11, 0x4AF4FD,100,0,0x4AEAA0,12, 0x4AF59E,100,0,0x4AEAA0,13, 0x4AF6A3,100,0,0x4AEAA0,14, 0x4AF74D,100,0,0x4AEAA0,15, 0x4AF803,100,0,0x4AEAA0,16, 0x4AF8AD,100,0,0x4AEAA0,17, 0x4AFB10,100,0,0x4AF970,1, 0x4AFBD1,100,0,0x4AF970,2, 0x4AFC80,100,0,0x4AF970,3, 0x4AFD62,100,0,0x4AF970,4, 0x4AFE03,100,0,0x4AF970,5, 0x4B0027,100,0,0x4AF970,6, 0x4B00D0,100,0,0x4AF970,7, 0x4B01D8,100,0,0x4AF970,8, 0x4B0280,100,0,0x4AF970,9, 0x4B0340,100,0,0x4AF970,10, 0x4B03F0,100,0,0x4AF970,11, 0x4B05E0,100,0,0x4AF970,12, 0x4B0690,100,0,0x4AF970,13, 0x4B0798,100,0,0x4AF970,14, 0x4B0840,100,0,0x4AF970,15, 0x4B0900,100,0,0x4AF970,16, 0x4B09B0,100,0,0x4AF970,17, 0x4B0EC2,100,0,0x4B0DE0,1>;
using def_t = CColLine *(CColLine *, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColLine *,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CColLine::Set)
static int address;
static int global_address;
static const int id = 0x40B350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B350, 0x40B350, 0x40B350>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x478D33,100,0,0x478C20,1>;
using def_t = void(CColLine *, CVector &, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColLine *,CVector &,CVector &>, 0,1,2>;
META_END

CTOR_META_BEGIN(CColLine)
static int address;
static int global_address;
static const int id = 0x411510;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411510, 0x411510, 0x411510>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x410C3A,100,2,0,1>;
using def_t = CColLine *(CColLine *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColLine *>, 0>;
META_END

template<>
struct stack_object<CColLine> : stack_object_no_default<CColLine> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CColLine *>(ctor_gaddr(CColLine), reinterpret_cast<CColLine *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM stack_object(CVector *start, CVector *end) {
        plugin::CallMethodDynGlobal<CColLine *, CVector *, CVector *>(ctor_gaddr_o(CColLine, void(CVector *, CVector *)), reinterpret_cast<CColLine *>(objBuff), start, end);
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CColLine *operator_new<CColLine>() {
    void *objData = operator new(sizeof(CColLine)); 
    CColLine *obj = reinterpret_cast<CColLine *>(objData);
    plugin::CallMethodDynGlobal<CColLine *>(ctor_gaddr(CColLine), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CColLine *operator_new_array<CColLine>(unsigned int objCount) {
    void *objData = operator new(sizeof(CColLine) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CColLine *objArray = reinterpret_cast<CColLine *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CColLine *>(ctor_gaddr(CColLine), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CColLine *operator_new<CColLine>(CVector *start, CVector *end) {
    void *objData = operator new(sizeof(CColLine)); 
    CColLine *obj = reinterpret_cast<CColLine *>(objData);
    plugin::CallMethodDynGlobal<CColLine *, CVector *, CVector *>(ctor_gaddr_o(CColLine, void(CVector *, CVector *)), obj, start, end);
    return obj;
}

}
