/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include <cstddef>
#include <cstdint>
#include "Base.h"
#include "VersionsMacro.h"
#include "GameVersion.h"
#include "EventList.h" // TODO: decide if we need it here
#include "DynAddress.h"

namespace plugin {

namespace Core {

// Gets the SDK version
PLUGIN_API unsigned int GetVersion();

}

struct dummy_func_t { }; // Dummy func tag type
static const dummy_func_t dummy; // Dummy func tag object

// meta<> template
#if (defined(__GNUC__) || defined(__GNUG__) || defined(__clang__))
template<auto F>
struct meta;
#elif (defined(_MSC_VER))
template<typename FT, FT>
struct meta;
#else

#endif

// vtable description
template<typename T>
struct VtableDesc;

// helpers for event creating

template<typename Meta>
using event_t = std::conditional_t<std::is_same<typename Meta::calling_convention_t, CallingConventions::Thiscall>::value,
    ThiscallEvent<typename Meta::refs_t, Meta::cb_priority, typename Meta::args_t, typename Meta::def_t>,
    CdeclEvent<typename Meta::refs_t, Meta::cb_priority, typename Meta::args_t, typename Meta::def_t>
>;

template<typename Meta, typename Refs, int Priority = Meta::cb_priority, typename Args = typename Meta::args_t, typename Def = typename Meta::def_t>
using custom_event_t = std::conditional_t<std::is_same<typename Meta::calling_convention_t, CallingConventions::Thiscall>::value,
    ThiscallEvent<Refs, Priority, Args, Def>,
    CdeclEvent<Refs, Priority, Args, Def>
>;

// multi-version address list
template<int...>
struct MvAddresses {};

// Gets the virtual method table from the object @self
inline void** GetVMT(const void* self) {
    return *(void***)(self);
}

// Gets the virtual method from @self in the table index @index 
inline void* GetVMT(const void* self, size_t index) {
    return GetVMT(self)[index];
}

template <unsigned int address, typename... Args>
void Call(Args... args) {
    reinterpret_cast<void(__cdecl *)(Args...)>(address)(args...);
}

template <typename Ret, unsigned int address, typename... Args>
Ret CallAndReturn(Args... args) {
    return reinterpret_cast<Ret(__cdecl *)(Args...)>(address)(args...);
}

template <unsigned int address, typename C, typename... Args>
void CallMethod(C _this, Args... args) {
    reinterpret_cast<void(__thiscall *)(C, Args...)>(address)(_this, args...);
}

template <typename Ret, unsigned int address, typename C, typename... Args>
Ret CallMethodAndReturn(C _this, Args... args) {
    return reinterpret_cast<Ret(__thiscall *)(C, Args...)>(address)(_this, args...);
}

template <unsigned int tableIndex, typename C, typename... Args>
void CallVirtualMethod(C _this, Args... args) {
    reinterpret_cast<void(__thiscall *)(C, Args...)>((*reinterpret_cast<void ***>(_this))[tableIndex])(_this, args...);
}

template <typename Ret, unsigned int tableIndex, typename C, typename... Args>
Ret CallVirtualMethodAndReturn(C _this, Args... args) {
    return reinterpret_cast<Ret(__thiscall *)(C, Args...)>((*reinterpret_cast<void ***>(_this))[tableIndex])(_this, args...);
}

template <typename... Args>
void CallDyn(unsigned int address, Args... args) {
    reinterpret_cast<void(__cdecl *)(Args...)>(GetGlobalAddress(address))(args...);
}

template <typename Ret, typename... Args>
Ret CallAndReturnDyn(unsigned int address, Args... args) {
    return reinterpret_cast<Ret(__cdecl *)(Args...)>(GetGlobalAddress(address))(args...);
}

template <typename C, typename... Args>
void CallMethodDyn(unsigned int address, C _this, Args... args) {
    reinterpret_cast<void(__thiscall *)(C, Args...)>(GetGlobalAddress(address))(_this, args...);
}

template <typename Ret, typename C, typename... Args>
Ret CallMethodAndReturnDyn(unsigned int address, C _this, Args... args) {
    return reinterpret_cast<Ret(__thiscall *)(C, Args...)>(GetGlobalAddress(address))(_this, args...);
}

template <typename... Args>
void CallDynGlobal(unsigned int address, Args... args) {
    reinterpret_cast<void(__cdecl *)(Args...)>(address)(args...);
}

template <typename Ret, typename... Args>
Ret CallAndReturnDynGlobal(unsigned int address, Args... args) {
    return reinterpret_cast<Ret(__cdecl *)(Args...)>(address)(args...);
}

template <typename C, typename... Args>
void CallMethodDynGlobal(unsigned int address, C _this, Args... args) {
    reinterpret_cast<void(__thiscall *)(C, Args...)>(address)(_this, args...);
}

template <typename Ret, typename C, typename... Args>
Ret CallMethodAndReturnDynGlobal(unsigned int address, C _this, Args... args) {
    return reinterpret_cast<Ret(__thiscall *)(C, Args...)>(address)(_this, args...);
}

}

// meta access
#if (defined(__GNUC__) || defined(__GNUG__) || defined(__clang__))
#define metaof(obj) plugin::meta<&obj>
#define metaof_o(obj, decl) plugin::meta<static_cast<decl>(&obj)>
#define META_BEGIN(obj) template<> struct meta<&obj> {
#define META_BEGIN_OVERLOADED(obj, decl) template<> struct meta<static_cast<decl>(&obj)> {
#elif (defined(_MSC_VER))
#define metaof(obj) plugin::meta<decltype(&obj), &obj>
#define metaof_o(obj, decl) plugin::meta<decl, &obj>
#define META_BEGIN(obj) template<> struct meta<decltype(&obj), &obj> {
#define META_BEGIN_OVERLOADED(obj, decl) template<> struct meta<decl, &obj> {
#else

#endif

#define META_END };

#define addrof(obj) metaof(obj)::address
#define gaddrof(obj) metaof(obj)::global_address
#define argsof(obj) metaof(obj)::args_t
#define refsof(obj) metaof(obj)::refs_t
#define idof(obj) metaof(obj)::id
#define addrof_o(obj, decl) metaof_o(obj, decl)::address
#define gaddrof_o(obj, decl) metaof_o(obj, decl)::global_address
#define argsof_o(obj, decl) metaof_o(obj, decl)::args_t
#define refsof_o(obj, decl) metaof_o(obj, decl)::refs_t
#define idof_o(obj, decl) metaof_o(obj, decl)::id

// vtable description - macro
#define VTABLE_DESC(className, vtAddr, vtSize)\
namespace plugin {\
template<> struct VtableDesc<className> {\
    static const unsigned int address = vtAddr;\
    static const unsigned int size = vtSize;\
};\
}

#define vtableid(className) plugin::VtableDesc<className>::address

// get global address for current exe version
#ifdef GTASA
#define GLOBAL_ADDRESS_BY_VERSION(a,b,c,d,e,f) (plugin::GetGlobalAddress(plugin::by_version_dyn(a,b,c,d,e,f)))
#define ADDRESS_BY_VERSION(a,b,c,d,e,f) (plugin::by_version_dyn(a,b,c,d,e,f))
#else
#define GLOBAL_ADDRESS_BY_VERSION(a,b,c) (plugin::GetGlobalAddress(plugin::by_version_dyn(a,b,c)))
#define ADDRESS_BY_VERSION(a,b,c) (plugin::by_version_dyn(a,b,c))
#endif
