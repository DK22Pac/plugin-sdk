/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CColLine, void(CVector const &, CVector const &))
static int address;
static int global_address;
static const int id = 0x40B320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B320, 0x40B320, 0x40B320>;
// total references count: 10en (37), 11en (37), steam (37)
using refs_t = RefList<0x40F7AF,100,0,0x40F720,1, 0x40F9A2,100,0,0x40F910,1, 0x4AEC32,100,0,0x4AEAA0,1, 0x4AECDE,100,0,0x4AEAA0,2, 0x4AED83,100,0,0x4AEAA0,3, 0x4AEE4F,100,0,0x4AEAA0,4, 0x4AEEFD,100,0,0x4AEAA0,5, 0x4AF02D,100,0,0x4AEAA0,6, 0x4AF0CF,100,0,0x4AEAA0,7, 0x4AF1DE,100,0,0x4AEAA0,8, 0x4AF27D,100,0,0x4AEAA0,9, 0x4AF335,100,0,0x4AEAA0,10, 0x4AF3DD,100,0,0x4AEAA0,11, 0x4AF4FD,100,0,0x4AEAA0,12, 0x4AF59E,100,0,0x4AEAA0,13, 0x4AF6A3,100,0,0x4AEAA0,14, 0x4AF74D,100,0,0x4AEAA0,15, 0x4AF803,100,0,0x4AEAA0,16, 0x4AF8AD,100,0,0x4AEAA0,17, 0x4AFB10,100,0,0x4AF970,1, 0x4AFBD1,100,0,0x4AF970,2, 0x4AFC80,100,0,0x4AF970,3, 0x4AFD62,100,0,0x4AF970,4, 0x4AFE03,100,0,0x4AF970,5, 0x4B0027,100,0,0x4AF970,6, 0x4B00D0,100,0,0x4AF970,7, 0x4B01D8,100,0,0x4AF970,8, 0x4B0280,100,0,0x4AF970,9, 0x4B0340,100,0,0x4AF970,10, 0x4B03F0,100,0,0x4AF970,11, 0x4B05E0,100,0,0x4AF970,12, 0x4B0690,100,0,0x4AF970,13, 0x4B0798,100,0,0x4AF970,14, 0x4B0840,100,0,0x4AF970,15, 0x4B0900,100,0,0x4AF970,16, 0x4B09B0,100,0,0x4AF970,17, 0x4B0EC2,100,0,0x4B0DE0,1, 0x40F7AF,110,0,0x40F720,1, 0x40F9A2,110,0,0x40F910,1, 0x4AED22,110,0,0x4AEB90,1, 0x4AEDCE,110,0,0x4AEB90,2, 0x4AEE73,110,0,0x4AEB90,3, 0x4AEF3F,110,0,0x4AEB90,4, 0x4AEFED,110,0,0x4AEB90,5, 0x4AF11D,110,0,0x4AEB90,6, 0x4AF1BF,110,0,0x4AEB90,7, 0x4AF2CE,110,0,0x4AEB90,8, 0x4AF36D,110,0,0x4AEB90,9, 0x4AF425,110,0,0x4AEB90,10, 0x4AF4CD,110,0,0x4AEB90,11, 0x4AF5ED,110,0,0x4AEB90,12, 0x4AF68E,110,0,0x4AEB90,13, 0x4AF793,110,0,0x4AEB90,14, 0x4AF83D,110,0,0x4AEB90,15, 0x4AF8F3,110,0,0x4AEB90,16, 0x4AF99D,110,0,0x4AEB90,17, 0x4AFC00,110,0,0x4AFA60,1, 0x4AFCC1,110,0,0x4AFA60,2, 0x4AFD70,110,0,0x4AFA60,3, 0x4AFE52,110,0,0x4AFA60,4, 0x4AFEF3,110,0,0x4AFA60,5, 0x4B0117,110,0,0x4AFA60,6, 0x4B01C0,110,0,0x4AFA60,7, 0x4B02C8,110,0,0x4AFA60,8, 0x4B0370,110,0,0x4AFA60,9, 0x4B0430,110,0,0x4AFA60,10, 0x4B04E0,110,0,0x4AFA60,11, 0x4B06D0,110,0,0x4AFA60,12, 0x4B0780,110,0,0x4AFA60,13, 0x4B0888,110,0,0x4AFA60,14, 0x4B0930,110,0,0x4AFA60,15, 0x4B09F0,110,0,0x4AFA60,16, 0x4B0AA0,110,0,0x4AFA60,17, 0x4B0FB2,110,0,0x4B0ED0,1, 0x40F7AF,120,0,0x40F720,1, 0x40F9A2,120,0,0x40F910,1, 0x4AECB2,120,0,0x4AEB20,1, 0x4AED5E,120,0,0x4AEB20,2, 0x4AEE03,120,0,0x4AEB20,3, 0x4AEECF,120,0,0x4AEB20,4, 0x4AEF7D,120,0,0x4AEB20,5, 0x4AF0AD,120,0,0x4AEB20,6, 0x4AF14F,120,0,0x4AEB20,7, 0x4AF25E,120,0,0x4AEB20,8, 0x4AF2FD,120,0,0x4AEB20,9, 0x4AF3B5,120,0,0x4AEB20,10, 0x4AF45D,120,0,0x4AEB20,11, 0x4AF57D,120,0,0x4AEB20,12, 0x4AF61E,120,0,0x4AEB20,13, 0x4AF723,120,0,0x4AEB20,14, 0x4AF7CD,120,0,0x4AEB20,15, 0x4AF883,120,0,0x4AEB20,16, 0x4AF92D,120,0,0x4AEB20,17, 0x4AFB90,120,0,0x4AF9F0,1, 0x4AFC51,120,0,0x4AF9F0,2, 0x4AFD00,120,0,0x4AF9F0,3, 0x4AFDE2,120,0,0x4AF9F0,4, 0x4AFE83,120,0,0x4AF9F0,5, 0x4B00A7,120,0,0x4AF9F0,6, 0x4B0150,120,0,0x4AF9F0,7, 0x4B0258,120,0,0x4AF9F0,8, 0x4B0300,120,0,0x4AF9F0,9, 0x4B03C0,120,0,0x4AF9F0,10, 0x4B0470,120,0,0x4AF9F0,11, 0x4B0660,120,0,0x4AF9F0,12, 0x4B0710,120,0,0x4AF9F0,13, 0x4B0818,120,0,0x4AF9F0,14, 0x4B08C0,120,0,0x4AF9F0,15, 0x4B0980,120,0,0x4AF9F0,16, 0x4B0A30,120,0,0x4AF9F0,17, 0x4B0F42,120,0,0x4B0E60,1>;
using def_t = CColLine *(CColLine *, CVector const &, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColLine *,CVector const &,CVector const &>, 0,1,2>;
META_END

META_BEGIN(CColLine::Set)
static int address;
static int global_address;
static const int id = 0x40B350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B350, 0x40B350, 0x40B350>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x478D33,100,0,0x478C20,1, 0x478D33,110,0,0x478C20,1, 0x478D33,120,0,0x478C20,1>;
using def_t = void(CColLine *, CVector const &, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColLine *,CVector const &,CVector const &>, 0,1,2>;
META_END

CTOR_META_BEGIN(CColLine)
static int address;
static int global_address;
static const int id = 0x411510;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411510, 0x411510, 0x411510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x410C3A,100,2,0,1, 0x410C3A,110,2,0,1, 0x410C3A,120,2,0,1>;
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
    SUPPORTED_10EN_11EN_STEAM stack_object(CVector const &start, CVector const &end) {
        plugin::CallMethodDynGlobal<CColLine *, CVector const &, CVector const &>(ctor_gaddr_o(CColLine, void(CVector const &, CVector const &)), reinterpret_cast<CColLine *>(objBuff), start, end);
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
SUPPORTED_10EN_11EN_STEAM inline CColLine *operator_new<CColLine>(CVector const &start, CVector const &end) {
    void *objData = operator new(sizeof(CColLine)); 
    CColLine *obj = reinterpret_cast<CColLine *>(objData);
    plugin::CallMethodDynGlobal<CColLine *, CVector const &, CVector const &>(ctor_gaddr_o(CColLine, void(CVector const &, CVector const &)), obj, start, end);
    return obj;
}

}
