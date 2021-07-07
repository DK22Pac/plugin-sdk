/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CDirectory, void(int))
static int address;
static int global_address;
static const int id = 0x4735C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4735C0, 0x4735C0, 0x4735C0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x404610,100,0,0x4045D0,1, 0x4069D7,100,0,0x406430,1, 0x592C9D,100,0,0x592C70,1, 0x404610,110,0,0x4045D0,1, 0x4069D7,110,0,0x406430,1, 0x592F4D,110,0,0x592F20,1, 0x404610,120,0,0x4045D0,1, 0x4069D7,120,0,0x406430,1, 0x592E3D,120,0,0x592E10,1>;
using def_t = CDirectory *(CDirectory *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,int>, 0,1>;
META_END

DTOR_META_BEGIN(CDirectory)
static int address;
static int global_address;
static const int id = 0x4735F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4735F0, 0x4735F0, 0x4735F0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x40463D,100,0,0x404630,1, 0x406CA3,100,0,0x406C80,1, 0x592D08,100,0,0x592C70,1, 0x592E62,100,0,0x592C70,2, 0x592F72,100,0,0x592C70,3, 0x592F9B,100,0,0x592C70,4, 0x40463D,110,0,0x404630,1, 0x406CA3,110,0,0x406C80,1, 0x592FB8,110,0,0x592F20,1, 0x593112,110,0,0x592F20,2, 0x593222,110,0,0x592F20,3, 0x59324B,110,0,0x592F20,4, 0x40463D,120,0,0x404630,1, 0x406CA3,120,0,0x406C80,1, 0x592EA8,120,0,0x592E10,1, 0x593002,120,0,0x592E10,2, 0x593112,120,0,0x592E10,3, 0x59313B,120,0,0x592E10,4>;
using def_t = void(CDirectory *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *>, 0>;
META_END

META_BEGIN(CDirectory::AddItem)
static int address;
static int global_address;
static const int id = 0x473600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473600, 0x473600, 0x473600>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x406F2B,100,0,0x406DA0,1, 0x473666,100,0,0x473630,1, 0x592F05,100,0,0x592C70,1, 0x406F2B,110,0,0x406DA0,1, 0x473666,110,0,0x473630,1, 0x5931B5,110,0,0x592F20,1, 0x406F2B,120,0,0x406DA0,1, 0x473666,120,0,0x473630,1, 0x5930A5,120,0,0x592E10,1>;
using def_t = void(CDirectory *, CDirectory::DirectoryInfo const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *, CDirectory::DirectoryInfo const &>, 0,1>;
META_END

META_BEGIN(CDirectory::ReadDirFile)
static int address;
static int global_address;
static const int id = 0x473630;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473630, 0x473630, 0x473630>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x404621,100,0,0x4045D0,1, 0x404696,100,0,0x404650,1, 0x404621,110,0,0x4045D0,1, 0x404696,110,0,0x404650,1, 0x404621,120,0,0x4045D0,1, 0x404696,120,0,0x404650,1>;
using def_t = void(CDirectory *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,char const *>, 0,1>;
META_END

META_BEGIN(CDirectory::WriteDirFile)
static int address;
static int global_address;
static const int id = 0x473690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473690, 0x473690, 0x473690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x592F4B,100,0,0x592C70,1, 0x5931FB,110,0,0x592F20,1, 0x5930EB,120,0,0x592E10,1>;
using def_t = bool(CDirectory *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,char const *>, 0,1>;
META_END

META_BEGIN(CDirectory::FindItem)
static int address;
static int global_address;
static const int id = 0x4736E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4736E0, 0x4736E0, 0x4736E0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4046F0,100,0,0x404650,1, 0x404771,100,0,0x404650,2, 0x40A997,100,0,0x40A890,1, 0x4BA6E4,100,0,0x4BA6A0,1, 0x4046F0,110,0,0x404650,1, 0x404771,110,0,0x404650,2, 0x40A997,110,0,0x40A890,1, 0x4BA7D4,110,0,0x4BA790,1, 0x4046F0,120,0,0x404650,1, 0x404771,120,0,0x404650,2, 0x40A997,120,0,0x40A890,1, 0x4BA764,120,0,0x4BA720,1>;
using def_t = bool(CDirectory *, char const *, unsigned int &, unsigned int &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,char const *,unsigned int &,unsigned int &>, 0,1,2,3>;
META_END

template<>
struct stack_object<CDirectory> : stack_object_no_default<CDirectory> {
    SUPPORTED_10EN_11EN_STEAM stack_object(int capacity) {
        plugin::CallMethodDynGlobal<CDirectory *, int>(ctor_gaddr_o(CDirectory, void(int)), reinterpret_cast<CDirectory *>(objBuff), capacity);
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CDirectory *>(dtor_gaddr(CDirectory), reinterpret_cast<CDirectory *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CDirectory *operator_new<CDirectory>(int capacity) {
    void *objData = operator new(sizeof(CDirectory)); 
    CDirectory *obj = reinterpret_cast<CDirectory *>(objData);
    plugin::CallMethodDynGlobal<CDirectory *, int>(ctor_gaddr_o(CDirectory, void(int)), obj, capacity);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CDirectory>(CDirectory *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CDirectory *>(dtor_gaddr(CDirectory), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CDirectory>(CDirectory *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CDirectory *>(dtor_gaddr(CDirectory), &objArray[i]);
    operator delete(objData);
}

}
