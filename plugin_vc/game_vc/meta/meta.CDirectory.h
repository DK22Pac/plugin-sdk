/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDirectory::FindItem)
static int address;
static int global_address;
static const int id = 0x487220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x487220, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x406DCF,100,0,0x406D30,1, 0x406E76,100,0,0x406D30,2, 0x40ACEE,100,0,0x40AA60,1>;
using def_t = bool(CDirectory *, char const *, unsigned int *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,char const *,unsigned int *,unsigned int *>, 0,1,2,3>;
META_END

META_BEGIN(CDirectory::WriteDirFile)
static int address;
static int global_address;
static const int id = 0x487320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x487320, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x61DD23,100,0,0x61D960,1>;
using def_t = bool(CDirectory *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,char const *>, 0,1>;
META_END

META_BEGIN(CDirectory::ReadDirFile)
static int address;
static int global_address;
static const int id = 0x487370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x487370, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x406D6F,100,0,0x406D30,1, 0x407498,100,0,0x407440,1>;
using def_t = void(CDirectory *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,char const *>, 0,1>;
META_END

META_BEGIN(CDirectory::AddItem)
static int address;
static int global_address;
static const int id = 0x4873F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4873F0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40FC9D,100,0,0x40FBC0,1, 0x61DCDD,100,0,0x61D960,1>;
using def_t = void(CDirectory *, CDirectory::DirectoryInfo const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *, const CDirectory::DirectoryInfo *>, 0,1>;
META_END

DTOR_META_BEGIN(CDirectory)
static int address;
static int global_address;
static const int id = 0x487420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x487420, 0, 0>;
// total references count: 10en (7), 11en (0), steam (0)
using refs_t = RefList<0x40742D,100,0,0x407420,1, 0x410083,100,0,0x410060,1, 0x410865,100,0,0x410800,1, 0x61DA66,100,0,0x61D960,1, 0x61DC30,100,0,0x61D960,2, 0x61DDAC,100,0,0x61D960,3, 0x61DDD3,100,0,0x61D960,4>;
using def_t = void(CDirectory *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *>, 0>;
META_END

CTOR_META_BEGIN_OVERLOADED(CDirectory, void(int))
static int address;
static int global_address;
static const int id = 0x487430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x487430, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x407487,100,0,0x407440,1, 0x4106EE,100,0,0x4100A0,1, 0x61D990,100,0,0x61D960,1>;
using def_t = void(CDirectory *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDirectory *,int>, 0,1>;
META_END

template<>
struct stack_object<CDirectory> : stack_object_no_default<CDirectory> {
    SUPPORTED_10EN stack_object(int entriesNum) {
        plugin::CallMethodDynGlobal<CDirectory *, int>(ctor_gaddr_o(CDirectory, void(int)), reinterpret_cast<CDirectory *>(objBuff), entriesNum);
    }
    SUPPORTED_10EN ~stack_object() {
        plugin::CallMethodDynGlobal<CDirectory *>(dtor_gaddr(CDirectory), reinterpret_cast<CDirectory *>(objBuff));
    }
};

template <>
SUPPORTED_10EN inline CDirectory *operator_new<CDirectory>(int entriesNum) {
    void *objData = operator new(sizeof(CDirectory)); 
    CDirectory *obj = reinterpret_cast<CDirectory *>(objData);
    plugin::CallMethodDynGlobal<CDirectory *, int>(ctor_gaddr_o(CDirectory, void(int)), obj, entriesNum);
    return obj;
}
template <>
SUPPORTED_10EN inline void operator_delete<CDirectory>(CDirectory *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CDirectory *>(dtor_gaddr(CDirectory), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN inline void operator_delete_array<CDirectory>(CDirectory *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CDirectory *>(dtor_gaddr(CDirectory), &objArray[i]);
    operator delete(objData);
}

}
