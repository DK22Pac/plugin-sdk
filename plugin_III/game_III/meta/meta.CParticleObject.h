/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CParticleObject)
static int address;
static int global_address;
static const int id = 0x4BC3E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC3E0, 0x4BC4D0, 0x4BC460>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4BFDBD,100,2,0,1, 0x4BFEAD,110,2,0,1, 0x4BFE3D,120,2,0,1>;
using def_t = CParticleObject *(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

DTOR_META_BEGIN(CParticleObject)
static int address;
static int global_address;
static const int id = 0x4BC420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC420, 0x4BC510, 0x4BC4A0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4BFD93,100,0,0x4BFD70,1, 0x4BFD84,100,2,0,1, 0x4BFDB8,100,2,0,1, 0x4BFE18,100,2,0,1, 0x4BFE83,110,0,0x4BFE60,1, 0x4BFE74,110,2,0,1, 0x4BFEA8,110,2,0,1, 0x4BFF08,110,2,0,1, 0x4BFE13,120,0,0x4BFDF0,1, 0x4BFE04,120,2,0,1, 0x4BFE38,120,2,0,1, 0x4BFE98,120,2,0,1>;
using def_t = void(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

META_BEGIN(CParticleObject::Initialise)
static int address;
static int global_address;
static const int id = 0x4BC440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC440, 0x4BC530, 0x4BC4C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50C57A,100,0,0x50C570,1, 0x50C66A,110,0,0x50C660,1, 0x50C5FA,120,0,0x50C5F0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, unsigned char))
static int address;
static int global_address;
static const int id = 0x4BC4D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC4D0, 0x4BC5C0, 0x4BC550>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x445238,100,0,0x444B20,1, 0x497CBD,100,0,0x4973A0,1, 0x4B1595,100,0,0x4B1340,1, 0x445238,110,0,0x444B20,1, 0x497D7D,110,0,0x497460,1, 0x4B1685,110,0,0x4B1430,1, 0x445238,120,0,0x444B20,1, 0x497D0D,120,0,0x4973F0,1, 0x4B1615,120,0,0x4B13C0,1>;
using def_t = CParticleObject *(unsigned short, CVector const &, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned short,CVector const &,unsigned char>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, float, unsigned char))
static int address;
static int global_address;
static const int id = 0x4BC520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC520, 0x4BC610, 0x4BC5A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50CEFE,100,0,0x50CE40,1, 0x50CFEE,110,0,0x50CF30,1, 0x50CF7E,120,0,0x50CEC0,1>;
using def_t = CParticleObject *(unsigned short, CVector const &, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned short,CVector const &,float,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN_OVERLOADED(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned char))
static int address;
static int global_address;
static const int id = 0x4BC570;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC570, 0x4BC660, 0x4BC5F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50CF19,100,0,0x50CE40,1, 0x50D009,110,0,0x50CF30,1, 0x50CF99,120,0,0x50CEC0,1>;
using def_t = CParticleObject *(unsigned short, CVector const &, CVector const &, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned short,CVector const &,CVector const &,float,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN_OVERLOADED(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned int, RwRGBA const &, unsigned char))
static int address;
static int global_address;
static const int id = 0x4BC5B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC5B0, 0x4BC6A0, 0x4BC630>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x44DCAD,100,0,0x44CB80,1, 0x4BC513,100,0,0x4BC4D0,1, 0x4BC561,100,0,0x4BC520,1, 0x4BC59B,100,0,0x4BC570,1, 0x4C8387,100,0,0x4C7FF0,1, 0x4C8633,100,0,0x4C7FF0,2, 0x4C88DC,100,0,0x4C7FF0,3, 0x530D16,100,0,0x5308D0,1, 0x531000,100,0,0x5308D0,2, 0x44DCAD,110,0,0x44CB80,1, 0x4BC603,110,0,0x4BC5C0,1, 0x4BC651,110,0,0x4BC610,1, 0x4BC68B,110,0,0x4BC660,1, 0x4C8427,110,0,0x4C8090,1, 0x4C86D3,110,0,0x4C8090,2, 0x4C897C,110,0,0x4C8090,3, 0x530F56,110,0,0x530B10,1, 0x531240,110,0,0x530B10,2, 0x44DCAD,120,0,0x44CB80,1, 0x4BC593,120,0,0x4BC550,1, 0x4BC5E1,120,0,0x4BC5A0,1, 0x4BC61B,120,0,0x4BC5F0,1, 0x4C83B7,120,0,0x4C8020,1, 0x4C8663,120,0,0x4C8020,2, 0x4C890C,120,0,0x4C8020,3, 0x530EE6,120,0,0x530AA0,1, 0x5311D0,120,0,0x530AA0,2>;
using def_t = CParticleObject *(unsigned short, CVector const &, CVector const &, float, unsigned int, RwRGBA const &, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned short,CVector const &,CVector const &,float,unsigned int,RwRGBA const &,unsigned char>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CParticleObject::RemoveObject)
static int address;
static int global_address;
static const int id = 0x4BC9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC9F0, 0x4BCAE0, 0x4BCA70>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x44E2E8,100,0,0x44CB80,1, 0x44E328,100,0,0x44CB80,2, 0x44E2E8,110,0,0x44CB80,1, 0x44E328,110,0,0x44CB80,2, 0x44E2E8,120,0,0x44CB80,1, 0x44E328,120,0,0x44CB80,2>;
using def_t = void(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

META_BEGIN(CParticleObject::UpdateAll)
static int address;
static int global_address;
static const int id = 0x4BCA30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BCA30, 0x4BCB20, 0x4BCAB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50DEB7,100,0,0x50DCF0,1, 0x50E0A7,110,0,0x50DEE0,1, 0x50E037,120,0,0x50DE70,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CParticleObject::UpdateClose)
static int address;
static int global_address;
static const int id = 0x4BCA80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BCA80, 0x4BCB70, 0x4BCB00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4BCA43,100,0,0x4BCA30,1, 0x4BCB33,110,0,0x4BCB20,1, 0x4BCAC3,120,0,0x4BCAB0,1>;
using def_t = void(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

META_BEGIN(CParticleObject::UpdateFar)
static int address;
static int global_address;
static const int id = 0x4BF9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BF9F0, 0x4BFAE0, 0x4BFA70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4BCA6A,100,0,0x4BCA30,1, 0x4BCB5A,110,0,0x4BCB20,1, 0x4BCAEA,120,0,0x4BCAB0,1>;
using def_t = void(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

META_BEGIN(CParticleObject::SaveParticle)
static int address;
static int global_address;
static const int id = 0x4BFA80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFA80, 0x4BFB70, 0x4BFB00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590518,100,0,0x58F8D0,1, 0x590808,110,0,0x58FBC0,1, 0x5906F8,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CParticleObject::LoadParticle)
static int address;
static int global_address;
static const int id = 0x4BFB30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFB30, 0x4BFC20, 0x4BFBB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5915A7,100,0,0x590A00,1, 0x591867,110,0,0x590CC0,1, 0x591757,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CParticleObject::RemoveAllParticleObjects)
static int address;
static int global_address;
static const int id = 0x4BFC80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFC80, 0x4BFD70, 0x4BFD00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C722,100,0,0x48C6B0,1, 0x4BFB3B,100,0,0x4BFB30,1, 0x48C822,110,0,0x48C7B0,1, 0x4BFC2B,110,0,0x4BFC20,1, 0x48C7B2,120,0,0x48C740,1, 0x4BFBBB,120,0,0x4BFBB0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CParticleObject::MoveToList)
static int address;
static int global_address;
static const int id = 0x4BFD10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFD10, 0x4BFE00, 0x4BFD90>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x4BC5ED,100,0,0x4BC5B0,1, 0x4BCA1C,100,0,0x4BC9F0,1, 0x4BCAEB,100,0,0x4BCA80,1, 0x4BCB0D,100,0,0x4BCA80,2, 0x4BF962,100,0,0x4BCA80,3, 0x4BFA0D,100,0,0x4BF9F0,1, 0x4BFA63,100,0,0x4BF9F0,2, 0x4BFBAB,100,0,0x4BFB30,1, 0x4BC6DD,110,0,0x4BC6A0,1, 0x4BCB0C,110,0,0x4BCAE0,1, 0x4BCBDB,110,0,0x4BCB70,1, 0x4BCBFD,110,0,0x4BCB70,2, 0x4BFA52,110,0,0x4BCB70,3, 0x4BFAFD,110,0,0x4BFAE0,1, 0x4BFB53,110,0,0x4BFAE0,2, 0x4BFC9B,110,0,0x4BFC20,1, 0x4BC66D,120,0,0x4BC630,1, 0x4BCA9C,120,0,0x4BCA70,1, 0x4BCB6B,120,0,0x4BCB00,1, 0x4BCB8D,120,0,0x4BCB00,2, 0x4BF9E2,120,0,0x4BCB00,3, 0x4BFA8D,120,0,0x4BFA70,1, 0x4BFAE3,120,0,0x4BFA70,2, 0x4BFC2B,120,0,0x4BFBB0,1>;
using def_t = void(CParticleObject **, CParticleObject **, CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CParticleObject **,CParticleObject **,CParticleObject *>, 0,1,2>;
META_END

DEL_DTOR_META_BEGIN(CParticleObject)
static int address;
static int global_address;
static const int id = 0x4BFD70;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4BFD70, 0x4BFE60, 0x4BFDF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F8030,100,2,0x5F8030,1, 0x5F7E18,110,2,0x5F7E18,1, 0x604E10,120,2,0x604E10,1>;
using def_t = void(CParticleObject *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CParticleObject *,char>, 0,1>;
META_END

template<>
struct stack_object<CParticleObject> : stack_object_no_default<CParticleObject> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CParticleObject *>(ctor_gaddr(CParticleObject), reinterpret_cast<CParticleObject *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CParticleObject *>(dtor_gaddr(CParticleObject), reinterpret_cast<CParticleObject *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CParticleObject *operator_new<CParticleObject>() {
    void *objData = operator new(sizeof(CParticleObject)); 
    CParticleObject *obj = reinterpret_cast<CParticleObject *>(objData);
    plugin::CallMethodDynGlobal<CParticleObject *>(ctor_gaddr(CParticleObject), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CParticleObject *operator_new_array<CParticleObject>(unsigned int objCount) {
    void *objData = operator new(sizeof(CParticleObject) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CParticleObject *objArray = reinterpret_cast<CParticleObject *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CParticleObject *>(ctor_gaddr(CParticleObject), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CParticleObject>(CParticleObject *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CParticleObject *, char>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CParticleObject>(CParticleObject *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CParticleObject *, char>(&objArray[i], 1);
    operator delete(objData);
}

}
