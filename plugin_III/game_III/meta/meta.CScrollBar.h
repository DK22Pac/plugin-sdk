/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CScrollBar::GetTunnelString)
static int address;
static int global_address;
static const int id = 0x4FF360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF360, 0x4FF440, 0x4FF3D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4FF81D,100,0,0x4FF6E0,1, 0x4FF8F9,100,0,0x4FF6E0,2, 0x4FF993,100,0,0x4FF6E0,3, 0x4FF8FD,110,0,0x4FF7C0,1, 0x4FF9D9,110,0,0x4FF7C0,2, 0x4FFA73,110,0,0x4FF7C0,3, 0x4FF88D,120,0,0x4FF750,1, 0x4FF969,120,0,0x4FF750,2, 0x4FFA03,120,0,0x4FF750,3>;
using def_t = char const *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CScrollBar::GetBridgeString)
static int address;
static int global_address;
static const int id = 0x4FF390;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF390, 0x4FF470, 0x4FF400>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4FF827,100,0,0x4FF6E0,1, 0x4FF900,100,0,0x4FF6E0,2, 0x4FF99D,100,0,0x4FF6E0,3, 0x4FF907,110,0,0x4FF7C0,1, 0x4FF9E0,110,0,0x4FF7C0,2, 0x4FFA7D,110,0,0x4FF7C0,3, 0x4FF897,120,0,0x4FF750,1, 0x4FF970,120,0,0x4FF750,2, 0x4FFA0D,120,0,0x4FF750,3>;
using def_t = char const *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CScrollBar::Init)
static int address;
static int global_address;
static const int id = 0x4FF610;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF610, 0x4FF6F0, 0x4FF680>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x4FE940,100,0,0x4FE7C0,1, 0x4FE994,100,0,0x4FE7C0,2, 0x4FE9E5,100,0,0x4FE7C0,3, 0x4FEA36,100,0,0x4FE7C0,4, 0x4FEA8A,100,0,0x4FE7C0,5, 0x4FEAE4,100,0,0x4FE7C0,6, 0x4FEB3E,100,0,0x4FE7C0,7, 0x4FEB9B,100,0,0x4FE7C0,8, 0x4FEC04,100,0,0x4FE7C0,9, 0x4FEC6A,100,0,0x4FE7C0,10, 0x4FECD0,100,0,0x4FE7C0,11, 0x4FEA20,110,0,0x4FE8A0,1, 0x4FEA74,110,0,0x4FE8A0,2, 0x4FEAC5,110,0,0x4FE8A0,3, 0x4FEB16,110,0,0x4FE8A0,4, 0x4FEB6A,110,0,0x4FE8A0,5, 0x4FEBC4,110,0,0x4FE8A0,6, 0x4FEC1E,110,0,0x4FE8A0,7, 0x4FEC7B,110,0,0x4FE8A0,8, 0x4FECE4,110,0,0x4FE8A0,9, 0x4FED4A,110,0,0x4FE8A0,10, 0x4FEDB0,110,0,0x4FE8A0,11, 0x4FE9B0,120,0,0x4FE830,1, 0x4FEA04,120,0,0x4FE830,2, 0x4FEA55,120,0,0x4FE830,3, 0x4FEAA6,120,0,0x4FE830,4, 0x4FEAFA,120,0,0x4FE830,5, 0x4FEB54,120,0,0x4FE830,6, 0x4FEBAE,120,0,0x4FE830,7, 0x4FEC0B,120,0,0x4FE830,8, 0x4FEC74,120,0,0x4FE830,9, 0x4FECDA,120,0,0x4FE830,10, 0x4FED40,120,0,0x4FE830,11>;
using def_t = void(CScrollBar *, CVector, unsigned char, float, float, float, unsigned char, unsigned char, unsigned char, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CScrollBar *,CVector,unsigned char,float,float,float,unsigned char,unsigned char,unsigned char,float>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN(CScrollBar::Update)
static int address;
static int global_address;
static const int id = 0x4FF6E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF6E0, 0x4FF7C0, 0x4FF750>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF188,100,0,0x4FF0D0,1, 0x4FF268,110,0,0x4FF1B0,1, 0x4FF1F8,120,0,0x4FF140,1>;
using def_t = void(CScrollBar *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CScrollBar *>, 0>;
META_END

META_BEGIN(CScrollBar::Render)
static int address;
static int global_address;
static const int id = 0x4FFCE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FFCE0, 0x4FFDC0, 0x4FFD50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF22B,100,0,0x4FF210,1, 0x4FF30B,110,0,0x4FF2F0,1, 0x4FF29B,120,0,0x4FF280,1>;
using def_t = void(CScrollBar *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CScrollBar *>, 0>;
META_END

CTOR_META_BEGIN(CScrollBar)
static int address;
static int global_address;
static const int id = 0x5009A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5009A0, 0x500A80, 0x500A10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x500932,100,2,0,1, 0x500A12,110,2,0,1, 0x5009A2,120,2,0,1>;
using def_t = CScrollBar *(CScrollBar *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CScrollBar *>, 0>;
META_END

template<>
struct stack_object<CScrollBar> : stack_object_no_default<CScrollBar> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CScrollBar *>(ctor_gaddr(CScrollBar), reinterpret_cast<CScrollBar *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CScrollBar *operator_new<CScrollBar>() {
    void *objData = operator new(sizeof(CScrollBar)); 
    CScrollBar *obj = reinterpret_cast<CScrollBar *>(objData);
    plugin::CallMethodDynGlobal<CScrollBar *>(ctor_gaddr(CScrollBar), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CScrollBar *operator_new_array<CScrollBar>(unsigned int objCount) {
    void *objData = operator new(sizeof(CScrollBar) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CScrollBar *objArray = reinterpret_cast<CScrollBar *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CScrollBar *>(ctor_gaddr(CScrollBar), &objArray[i]);
    return objArray;
}

}
