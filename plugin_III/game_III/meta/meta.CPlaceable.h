/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPlaceable)
static int address;
static int global_address;
static const int id = 0x49F9A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49F9A0, 0x49FA90, 0x49FA20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x472F4F,100,0,0x472F40,1, 0x473C37,100,0,0x473C30,1, 0x4BC3E3,100,0,0x4BC3E0,1, 0x50BEB3,100,0,0x50BEB0,1, 0x472F2F,110,0,0x472F20,1, 0x473C37,110,0,0x473C30,1, 0x4BC4D3,110,0,0x4BC4D0,1, 0x50BFA3,110,0,0x50BFA0,1, 0x472F2F,120,0,0x472F20,1, 0x473C37,120,0,0x473C30,1, 0x4BC463,120,0,0x4BC460,1, 0x50BF33,120,0,0x50BF30,1>;
using def_t = CPlaceable *(CPlaceable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *>, 0>;
META_END

DTOR_META_BEGIN(CPlaceable)
static int address;
static int global_address;
static const int id = 0x49F9E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49F9E0, 0x49FAD0, 0x49FA60>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x473235,100,0,0x4731C0,1, 0x4732A7,100,0,0x473250,1, 0x473E58,100,0,0x473E40,1, 0x49FBF3,100,0,0x49FBD0,1, 0x4BC429,100,0,0x4BC420,1, 0x50BE99,100,0,0x50BE90,1, 0x50C3E9,100,0,0x50C3C0,1, 0x49FBE4,100,2,0,1, 0x473235,110,0,0x4731C0,1, 0x4732A7,110,0,0x473250,1, 0x473E58,110,0,0x473E40,1, 0x49FCE3,110,0,0x49FCC0,1, 0x4BC519,110,0,0x4BC510,1, 0x50BF89,110,0,0x50BF80,1, 0x50C4D9,110,0,0x50C4B0,1, 0x49FCD4,110,2,0,1, 0x473235,120,0,0x4731C0,1, 0x4732A7,120,0,0x473250,1, 0x473E58,120,0,0x473E40,1, 0x49FC73,120,0,0x49FC50,1, 0x4BC4A9,120,0,0x4BC4A0,1, 0x50BF19,120,0,0x50BF10,1, 0x50C469,120,0,0x50C440,1, 0x49FC64,120,2,0,1>;
using def_t = void(CPlaceable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *>, 0>;
META_END

META_BEGIN(CPlaceable::SetHeading)
static int address;
static int global_address;
static const int id = 0x49FA00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49FA00, 0x49FAF0, 0x49FA80>;
// total references count: 10en (24), 11en (24), steam (24)
using refs_t = RefList<0x421B9C,100,0,0x421A60,1, 0x42FB22,100,0,0x42F7A0,1, 0x44006C,100,0,0x43ED30,1, 0x4401E5,100,0,0x43ED30,2, 0x4402F5,100,0,0x43ED30,3, 0x44040E,100,0,0x43ED30,4, 0x4415BA,100,0,0x440CB0,1, 0x4416BC,100,0,0x440CB0,2, 0x442FB3,100,0,0x4429C0,1, 0x4430CA,100,0,0x4429C0,2, 0x4431E4,100,0,0x4429C0,3, 0x44A031,100,0,0x448240,1, 0x44DDDE,100,0,0x44CB80,1, 0x44EEB6,100,0,0x44CB80,2, 0x45B334,100,0,0x45AB30,1, 0x45DBF1,100,0,0x45DA20,1, 0x460D59,100,0,0x45FF70,1, 0x4CEE5F,100,0,0x4CE8F0,1, 0x534B8C,100,0,0x531470,1, 0x534BFE,100,0,0x531470,2, 0x534C88,100,0,0x531470,3, 0x534CCE,100,0,0x531470,4, 0x534D48,100,0,0x531470,5, 0x534D78,100,0,0x531470,6, 0x421B9C,110,0,0x421A60,1, 0x42FB22,110,0,0x42F7A0,1, 0x44006C,110,0,0x43ED30,1, 0x4401E5,110,0,0x43ED30,2, 0x4402F5,110,0,0x43ED30,3, 0x44040E,110,0,0x43ED30,4, 0x4415BA,110,0,0x440CB0,1, 0x4416BC,110,0,0x440CB0,2, 0x442FB3,110,0,0x4429C0,1, 0x4430CA,110,0,0x4429C0,2, 0x4431E4,110,0,0x4429C0,3, 0x44A031,110,0,0x448240,1, 0x44DDDE,110,0,0x44CB80,1, 0x44EEB6,110,0,0x44CB80,2, 0x45B334,110,0,0x45AB30,1, 0x45DBF1,110,0,0x45DA20,1, 0x460D59,110,0,0x45FF70,1, 0x4CEEFF,110,0,0x4CE990,1, 0x534DCC,110,0,0x5316B0,1, 0x534E3E,110,0,0x5316B0,2, 0x534EC8,110,0,0x5316B0,3, 0x534F0E,110,0,0x5316B0,4, 0x534F88,110,0,0x5316B0,5, 0x534FB8,110,0,0x5316B0,6, 0x421B9C,120,0,0x421A60,1, 0x42FB22,120,0,0x42F7A0,1, 0x44006C,120,0,0x43ED30,1, 0x4401E5,120,0,0x43ED30,2, 0x4402F5,120,0,0x43ED30,3, 0x44040E,120,0,0x43ED30,4, 0x4415BA,120,0,0x440CB0,1, 0x4416BC,120,0,0x440CB0,2, 0x442FB3,120,0,0x4429C0,1, 0x4430CA,120,0,0x4429C0,2, 0x4431E4,120,0,0x4429C0,3, 0x44A031,120,0,0x448240,1, 0x44DDDE,120,0,0x44CB80,1, 0x44EEB6,120,0,0x44CB80,2, 0x45B334,120,0,0x45AB30,1, 0x45DBF1,120,0,0x45DA20,1, 0x460D59,120,0,0x45FF70,1, 0x4CEE8F,120,0,0x4CE920,1, 0x534D5C,120,0,0x531640,1, 0x534DCE,120,0,0x531640,2, 0x534E58,120,0,0x531640,3, 0x534E9E,120,0,0x531640,4, 0x534F18,120,0,0x531640,5, 0x534F48,120,0,0x531640,6>;
using def_t = void(CPlaceable *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *,float>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float))
static int address;
static int global_address;
static const int id = 0x49FA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49FA50, 0x49FB40, 0x49FAD0>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x43AA92,100,0,0x439650,1, 0x43AAC6,100,0,0x439650,2, 0x43C296,100,0,0x43AEA0,1, 0x43C2BF,100,0,0x43AEA0,2, 0x43CE9E,100,0,0x43AEA0,3, 0x43EEA3,100,0,0x43ED30,1, 0x4462F4,100,0,0x4458A0,1, 0x4463BC,100,0,0x4458A0,2, 0x446761,100,0,0x4458A0,3, 0x448748,100,0,0x448240,1, 0x58ADEB,100,0,0x589D00,1, 0x43AA92,110,0,0x439650,1, 0x43AAC6,110,0,0x439650,2, 0x43C296,110,0,0x43AEA0,1, 0x43C2BF,110,0,0x43AEA0,2, 0x43CE9E,110,0,0x43AEA0,3, 0x43EEA3,110,0,0x43ED30,1, 0x4462F4,110,0,0x4458A0,1, 0x4463BC,110,0,0x4458A0,2, 0x446761,110,0,0x4458A0,3, 0x448748,110,0,0x448240,1, 0x58B12B,110,0,0x58A040,1, 0x43AA92,120,0,0x439650,1, 0x43AAC6,120,0,0x439650,2, 0x43C296,120,0,0x43AEA0,1, 0x43C2BF,120,0,0x43AEA0,2, 0x43CE9E,120,0,0x43AEA0,3, 0x43EEA3,120,0,0x43ED30,1, 0x4462F4,120,0,0x4458A0,1, 0x4463BC,120,0,0x4458A0,2, 0x446761,120,0,0x4458A0,3, 0x448748,120,0,0x448240,1, 0x58B01B,120,0,0x589F30,1>;
using def_t = bool(CPlaceable *, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *,float,float,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN_OVERLOADED(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float, float, float))
static int address;
static int global_address;
static const int id = 0x49FAF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49FAF0, 0x49FBE0, 0x49FB70>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x43AB8E,100,0,0x439650,1, 0x43ABCE,100,0,0x439650,2, 0x43C3A0,100,0,0x43AEA0,1, 0x43C3D6,100,0,0x43AEA0,2, 0x43CF6E,100,0,0x43AEA0,3, 0x43EF7C,100,0,0x43ED30,1, 0x44E2DD,100,0,0x44CB80,1, 0x44E31D,100,0,0x44CB80,2, 0x46F6F2,100,0,0x46F600,1, 0x43AB8E,110,0,0x439650,1, 0x43ABCE,110,0,0x439650,2, 0x43C3A0,110,0,0x43AEA0,1, 0x43C3D6,110,0,0x43AEA0,2, 0x43CF6E,110,0,0x43AEA0,3, 0x43EF7C,110,0,0x43ED30,1, 0x44E2DD,110,0,0x44CB80,1, 0x44E31D,110,0,0x44CB80,2, 0x46F6D2,110,0,0x46F5E0,1, 0x43AB8E,120,0,0x439650,1, 0x43ABCE,120,0,0x439650,2, 0x43C3A0,120,0,0x43AEA0,1, 0x43C3D6,120,0,0x43AEA0,2, 0x43CF6E,120,0,0x43AEA0,3, 0x43EF7C,120,0,0x43ED30,1, 0x44E2DD,120,0,0x44CB80,1, 0x44E31D,120,0,0x44CB80,2, 0x46F6D2,120,0,0x46F5E0,1>;
using def_t = bool(CPlaceable *, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *,float,float,float,float,float,float>, 0,1,2,3,4,5,6>;
META_END

DEL_DTOR_META_BEGIN(CPlaceable)
static int address;
static int global_address;
static const int id = 0x49FBD0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x49FBD0, 0x49FCC0, 0x49FC50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F6A28,100,2,0x5F6A28,1, 0x5F6810,110,2,0x5F6810,1, 0x603808,120,2,0x603808,1>;
using def_t = void(CPlaceable *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *,unsigned char>, 0,1>;
META_END

META_BEGIN(CPlaceable::SetPosition)
static int address;
static int global_address;
static const int id = 0x4CBA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4CBA50, 0x4CBAF0, 0x4CBA80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4CAC6E,100,0,0x4C8910,1, 0x4D9CE1,100,0,0x4D94E0,1, 0x4CAD0E,110,0,0x4C89B0,1, 0x4D9D81,110,0,0x4D9580,1, 0x4CAC9E,120,0,0x4C8940,1, 0x4D9D11,120,0,0x4D9510,1>;
using def_t = void(CPlaceable *, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CPlaceable::GetPosition)
static int address;
static int global_address;
static const int id = 0x4CBAC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4CBAC0, 0x4CBB60, 0x4CBAF0>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x4CA6BF,100,0,0x4C8910,1, 0x4CA874,100,0,0x4C8910,2, 0x4CACC5,100,0,0x4C8910,3, 0x4DB010,100,0,0x4D94E0,1, 0x549BB8,100,0,0x5499F0,1, 0x549CA4,100,0,0x5499F0,2, 0x549CB9,100,0,0x5499F0,3, 0x549CCE,100,0,0x5499F0,4, 0x549E66,100,0,0x5499F0,5, 0x54A0FB,100,0,0x5499F0,6, 0x54A2B1,100,0,0x5499F0,7, 0x54A2C6,100,0,0x5499F0,8, 0x54A2DB,100,0,0x5499F0,9, 0x54A32D,100,0,0x5499F0,10, 0x4CA75F,110,0,0x4C89B0,1, 0x4CA914,110,0,0x4C89B0,2, 0x4CAD65,110,0,0x4C89B0,3, 0x4DB0B0,110,0,0x4D9580,1, 0x549DB8,110,0,0x549BF0,1, 0x549EA4,110,0,0x549BF0,2, 0x549EB9,110,0,0x549BF0,3, 0x549ECE,110,0,0x549BF0,4, 0x54A066,110,0,0x549BF0,5, 0x54A2FB,110,0,0x549BF0,6, 0x54A4B1,110,0,0x549BF0,7, 0x54A4C6,110,0,0x549BF0,8, 0x54A4DB,110,0,0x549BF0,9, 0x54A52D,110,0,0x549BF0,10, 0x4CA6EF,120,0,0x4C8940,1, 0x4CA8A4,120,0,0x4C8940,2, 0x4CACF5,120,0,0x4C8940,3, 0x4DB040,120,0,0x4D9510,1, 0x549D68,120,0,0x549BA0,1, 0x549E54,120,0,0x549BA0,2, 0x549E69,120,0,0x549BA0,3, 0x549E7E,120,0,0x549BA0,4, 0x54A016,120,0,0x549BA0,5, 0x54A2AB,120,0,0x549BA0,6, 0x54A461,120,0,0x549BA0,7, 0x54A476,120,0,0x549BA0,8, 0x54A48B,120,0,0x549BA0,9, 0x54A4DD,120,0,0x549BA0,10>;
using def_t = CVector &(CPlaceable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceable *>, 0>;
META_END

template<>
struct stack_object<CPlaceable> : stack_object_no_default<CPlaceable> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPlaceable *>(ctor_gaddr(CPlaceable), reinterpret_cast<CPlaceable *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CPlaceable *>(dtor_gaddr(CPlaceable), reinterpret_cast<CPlaceable *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPlaceable *operator_new<CPlaceable>() {
    void *objData = operator new(sizeof(CPlaceable)); 
    CPlaceable *obj = reinterpret_cast<CPlaceable *>(objData);
    plugin::CallMethodDynGlobal<CPlaceable *>(ctor_gaddr(CPlaceable), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPlaceable *operator_new_array<CPlaceable>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPlaceable) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPlaceable *objArray = reinterpret_cast<CPlaceable *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPlaceable *>(ctor_gaddr(CPlaceable), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CPlaceable>(CPlaceable *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CPlaceable *, unsigned char>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CPlaceable>(CPlaceable *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CPlaceable *, unsigned char>(&objArray[i], 1);
    operator delete(objData);
}

}
