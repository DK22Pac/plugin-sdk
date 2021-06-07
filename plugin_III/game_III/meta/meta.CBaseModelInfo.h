/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CBaseModelInfo, void(ModelInfoType))
static int address;
static int global_address;
static const int id = 0x4F6A50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6A50, 0x4F6B00, 0x4F6A90>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x50BF15,100,0,0x50BF10,1, 0x50BFA5,100,0,0x50BFA0,1, 0x50C045,100,0,0x50C040,1, 0x50C0A5,100,0,0x50C0A0,1, 0x50C105,100,0,0x50C100,1, 0x50C155,100,0,0x50C150,1, 0x51FB1C,100,0,0x51FB10,1, 0x50C005,110,0,0x50C000,1, 0x50C095,110,0,0x50C090,1, 0x50C135,110,0,0x50C130,1, 0x50C195,110,0,0x50C190,1, 0x50C1F5,110,0,0x50C1F0,1, 0x50C245,110,0,0x50C240,1, 0x51FD4C,110,0,0x51FD40,1, 0x50BF95,120,0,0x50BF90,1, 0x50C025,120,0,0x50C020,1, 0x50C0C5,120,0,0x50C0C0,1, 0x50C125,120,0,0x50C120,1, 0x50C185,120,0,0x50C180,1, 0x50C1D5,120,0,0x50C1D0,1, 0x51FCDC,120,0,0x51FCD0,1>;
using def_t = CBaseModelInfo *(CBaseModelInfo *, ModelInfoType);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *,ModelInfoType>, 0,1>;
META_END

META_BEGIN(CBaseModelInfo::Shutdown)
static int address;
static int global_address;
static const int id = 0x4F6A90;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x4F6A90, 0x4F6B40, 0x4F6AD0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x5FAB5C,100,2,0x5FAB58,1, 0x5FDF78,100,2,0x5FDF74,1, 0x5FDF9C,100,2,0x5FDF98,1, 0x5FDFBC,100,2,0x5FDFB8,1, 0x5FDFDC,100,2,0x5FDFD8,1, 0x5FE000,100,2,0x5FDFFC,1, 0x5FE024,100,2,0x5FE020,1, 0x5FA940,110,2,0x5FA940,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x5FDD80,110,2,0x5FDD80,1, 0x5FDDA0,110,2,0x5FDDA0,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x5FDE08,110,2,0x5FDE08,1, 0x607938,120,2,0x607938,1, 0x60AD54,120,2,0x60AD54,1, 0x60AD78,120,2,0x60AD78,1, 0x60AD98,120,2,0x60AD98,1, 0x60ADB8,120,2,0x60ADB8,1, 0x60ADDC,120,2,0x60ADDC,1, 0x60AE00,120,2,0x60AE00,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::DeleteCollisionModel)
static int address;
static int global_address;
static const int id = 0x4F6AC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6AC0, 0x4F6B70, 0x4F6B00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F6A94,100,0,0x4F6A90,1, 0x4F6B44,110,0,0x4F6B40,1, 0x4F6AD4,120,0,0x4F6AD0,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::Init2dEffects)
static int address;
static int global_address;
static const int id = 0x4F6AF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6AF0, 0x4F6BA0, 0x4F6B30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50B59B,100,0,0x50B580,1, 0x50B67B,110,0,0x50B660,1, 0x50B60B,120,0,0x50B5F0,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::Get2dEffect)
static int address;
static int global_address;
static const int id = 0x4F6B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6B00, 0x4F6BB0, 0x4F6B40>;
// total references count: 10en (17), 11en (17), steam (17)
using refs_t = RefList<0x455870,100,0,0x455800,1, 0x45587F,100,0,0x455800,2, 0x455897,100,0,0x455800,3, 0x4558B3,100,0,0x455800,4, 0x4558D6,100,0,0x455800,5, 0x4558ED,100,0,0x455800,6, 0x455913,100,0,0x455800,7, 0x45592A,100,0,0x455800,8, 0x455953,100,0,0x455800,9, 0x45596A,100,0,0x455800,10, 0x45598A,100,0,0x455800,11, 0x4D5265,100,0,0x4D5040,1, 0x4D535A,100,0,0x4D5040,2, 0x4D545A,100,0,0x4D5040,3, 0x4D5559,100,0,0x4D5040,4, 0x4FA5A7,100,0,0x4FA530,1, 0x50CE6B,100,0,0x50CE40,1, 0x455870,110,0,0x455800,1, 0x45587F,110,0,0x455800,2, 0x455897,110,0,0x455800,3, 0x4558B3,110,0,0x455800,4, 0x4558D6,110,0,0x455800,5, 0x4558ED,110,0,0x455800,6, 0x455913,110,0,0x455800,7, 0x45592A,110,0,0x455800,8, 0x455953,110,0,0x455800,9, 0x45596A,110,0,0x455800,10, 0x45598A,110,0,0x455800,11, 0x4D5305,110,0,0x4D50E0,1, 0x4D53FA,110,0,0x4D50E0,2, 0x4D54FA,110,0,0x4D50E0,3, 0x4D55F9,110,0,0x4D50E0,4, 0x4FA687,110,0,0x4FA610,1, 0x50CF5B,110,0,0x50CF30,1, 0x455870,120,0,0x455800,1, 0x45587F,120,0,0x455800,2, 0x455897,120,0,0x455800,3, 0x4558B3,120,0,0x455800,4, 0x4558D6,120,0,0x455800,5, 0x4558ED,120,0,0x455800,6, 0x455913,120,0,0x455800,7, 0x45592A,120,0,0x455800,8, 0x455953,120,0,0x455800,9, 0x45596A,120,0,0x455800,10, 0x45598A,120,0,0x455800,11, 0x4D5295,120,0,0x4D5070,1, 0x4D538A,120,0,0x4D5070,2, 0x4D548A,120,0,0x4D5070,3, 0x4D5589,120,0,0x4D5070,4, 0x4FA617,120,0,0x4FA5A0,1, 0x50CEEB,120,0,0x50CEC0,1>;
using def_t = C2dEffect *(CBaseModelInfo *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *,int>, 0,1>;
META_END

META_BEGIN(CBaseModelInfo::Add2dEffect)
static int address;
static int global_address;
static const int id = 0x4F6B20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6B20, 0x4F6BD0, 0x4F6B60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47817A,100,0,0x4780E0,1, 0x47817A,110,0,0x4780E0,1, 0x47817A,120,0,0x4780E0,1>;
using def_t = void(CBaseModelInfo *, C2dEffect *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *,C2dEffect *>, 0,1>;
META_END

META_BEGIN(CBaseModelInfo::SetTexDictionary)
static int address;
static int global_address;
static const int id = 0x4F6B40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6B40, 0x4F6BF0, 0x4F6B80>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x40A9BB,100,0,0x40A890,1, 0x47563B,100,0,0x4755E0,1, 0x47727A,100,0,0x477040,1, 0x477708,100,0,0x4774B0,1, 0x4777B2,100,0,0x477750,1, 0x477974,100,0,0x477920,1, 0x477A1A,100,0,0x477990,1, 0x477E53,100,0,0x477DE0,1, 0x50B41A,100,0,0x50B310,1, 0x50B449,100,0,0x50B310,2, 0x50B478,100,0,0x50B310,3, 0x50B4A7,100,0,0x50B310,4, 0x50B4D6,100,0,0x50B310,5, 0x50B505,100,0,0x50B310,6, 0x50B534,100,0,0x50B310,7, 0x50B563,100,0,0x50B310,8, 0x40A9BB,110,0,0x40A890,1, 0x47563B,110,0,0x4755E0,1, 0x47727A,110,0,0x477040,1, 0x477708,110,0,0x4774B0,1, 0x4777B2,110,0,0x477750,1, 0x477974,110,0,0x477920,1, 0x477A1A,110,0,0x477990,1, 0x477E53,110,0,0x477DE0,1, 0x50B4FA,110,0,0x50B3F0,1, 0x50B529,110,0,0x50B3F0,2, 0x50B558,110,0,0x50B3F0,3, 0x50B587,110,0,0x50B3F0,4, 0x50B5B6,110,0,0x50B3F0,5, 0x50B5E5,110,0,0x50B3F0,6, 0x50B614,110,0,0x50B3F0,7, 0x50B643,110,0,0x50B3F0,8, 0x40A9BB,120,0,0x40A890,1, 0x47563B,120,0,0x4755E0,1, 0x47727A,120,0,0x477040,1, 0x477708,120,0,0x4774B0,1, 0x4777B2,120,0,0x477750,1, 0x477974,120,0,0x477920,1, 0x477A1A,120,0,0x477990,1, 0x477E53,120,0,0x477DE0,1, 0x50B48A,120,0,0x50B380,1, 0x50B4B9,120,0,0x50B380,2, 0x50B4E8,120,0,0x50B380,3, 0x50B517,120,0,0x50B380,4, 0x50B546,120,0,0x50B380,5, 0x50B575,120,0,0x50B380,6, 0x50B5A4,120,0,0x50B380,7, 0x50B5D3,120,0,0x50B380,8>;
using def_t = void(CBaseModelInfo *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *,char const *>, 0,1>;
META_END

META_BEGIN(CBaseModelInfo::ClearTexDictionary)
static int address;
static int global_address;
static const int id = 0x4F6B70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6B70, 0x4F6C20, 0x4F6BB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40A99E,100,0,0x40A890,1, 0x40A99E,110,0,0x40A890,1, 0x40A99E,120,0,0x40A890,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::AddTexDictionaryRef)
static int address;
static int global_address;
static const int id = 0x4F6B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6B80, 0x4F6C30, 0x4F6BC0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F6BA4,100,0,0x4F6BA0,1, 0x4F884A,100,0,0x4F8830,1, 0x51795D,100,0,0x517950,1, 0x4F6C54,110,0,0x4F6C50,1, 0x4F892A,110,0,0x4F8910,1, 0x517B6D,110,0,0x517B60,1, 0x4F6BE4,120,0,0x4F6BE0,1, 0x4F88BA,120,0,0x4F88A0,1, 0x517AFD,120,0,0x517AF0,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::RemoveTexDictionaryRef)
static int address;
static int global_address;
static const int id = 0x4F6B90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6B90, 0x4F6C40, 0x4F6BD0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F6BB4,100,0,0x4F6BB0,1, 0x4F881A,100,0,0x4F8800,1, 0x5179E3,100,0,0x5179B0,1, 0x4F6C64,110,0,0x4F6C60,1, 0x4F88FA,110,0,0x4F88E0,1, 0x517BF3,110,0,0x517BC0,1, 0x4F6BF4,120,0,0x4F6BF0,1, 0x4F888A,120,0,0x4F8870,1, 0x517B83,120,0,0x517B50,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::AddRef)
static int address;
static int global_address;
static const int id = 0x4F6BA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6BA0, 0x4F6C50, 0x4F6BE0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x40984B,100,0,0x409740,1, 0x473F07,100,0,0x473EA0,1, 0x473F4B,100,0,0x473F10,1, 0x4BBD92,100,0,0x4BBD80,1, 0x40984B,110,0,0x409740,1, 0x473F07,110,0,0x473EA0,1, 0x473F4B,110,0,0x473F10,1, 0x4BBE82,110,0,0x4BBE70,1, 0x40984B,120,0,0x409740,1, 0x473F07,120,0,0x473EA0,1, 0x473F4B,120,0,0x473F10,1, 0x4BBE12,120,0,0x4BBE00,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

META_BEGIN(CBaseModelInfo::RemoveRef)
static int address;
static int global_address;
static const int id = 0x4F6BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6BB0, 0x4F6C60, 0x4F6BF0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4095CD,100,0,0x409580,1, 0x409649,100,0,0x409580,2, 0x473F74,100,0,0x473F60,1, 0x473FDE,100,0,0x473F90,1, 0x4BAE36,100,0,0x4BAE00,1, 0x4095CD,110,0,0x409580,1, 0x409649,110,0,0x409580,2, 0x473F74,110,0,0x473F60,1, 0x473FDE,110,0,0x473F90,1, 0x4BAF26,110,0,0x4BAEF0,1, 0x4095CD,120,0,0x409580,1, 0x409649,120,0,0x409580,2, 0x473F74,120,0,0x473F60,1, 0x473FDE,120,0,0x473F90,1, 0x4BAEB6,120,0,0x4BAE80,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CBaseModelInfo)
static int address;
static int global_address;
static const int id = 0x4F6BC0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4F6BC0, 0x4F6C70, 0x4F6C00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FAB58,100,2,0x5FAB58,1, 0x5FA940,110,2,0x5FA940,1, 0x607938,120,2,0x607938,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

DTOR_META_BEGIN(CBaseModelInfo)
static int address;
static int global_address;
static const int id = 0x4F6C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6C00, 0x4F6CB0, 0x4F6C40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F6BD3,100,2,0,1, 0x4F6C83,110,2,0,1, 0x4F6C13,120,2,0,1>;
using def_t = void(CBaseModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBaseModelInfo *>, 0>;
META_END

template<>
struct stack_object<CBaseModelInfo> : stack_object_no_default<CBaseModelInfo> {
    SUPPORTED_10EN_11EN_STEAM stack_object(ModelInfoType type) {
        plugin::CallMethodDynGlobal<CBaseModelInfo *, ModelInfoType>(ctor_gaddr_o(CBaseModelInfo, void(ModelInfoType)), reinterpret_cast<CBaseModelInfo *>(objBuff), type);
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CBaseModelInfo *>(dtor_gaddr(CBaseModelInfo), reinterpret_cast<CBaseModelInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CBaseModelInfo *operator_new<CBaseModelInfo>(ModelInfoType type) {
    void *objData = operator new(sizeof(CBaseModelInfo)); 
    CBaseModelInfo *obj = reinterpret_cast<CBaseModelInfo *>(objData);
    plugin::CallMethodDynGlobal<CBaseModelInfo *, ModelInfoType>(ctor_gaddr_o(CBaseModelInfo, void(ModelInfoType)), obj, type);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CBaseModelInfo>(CBaseModelInfo *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CBaseModelInfo *>(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CBaseModelInfo>(CBaseModelInfo *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CBaseModelInfo *>(&objArray[i]);
    operator delete(objData);
}

}
