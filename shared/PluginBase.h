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

}

// meta access
#if (defined(__GNUC__) || defined(__GNUG__) || defined(__clang__))
#define metaof(obj) plugin::meta<&obj>
#define metaof_o(obj, decl) plugin::meta<static_cast<decl>(&obj)>
#define META_BEGIN template<> struct meta<&obj> {
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
#define argsof(obj) metaof(obj)::args_t
#define refsof(obj) metaof(obj)::refs_t
#define idof(obj) metaof(obj)::id
#define addrof_o(obj, decl) metaof_o(obj, decl)::address
#define argsof_o(obj, decl) metaof_o(obj, decl)::args_t
#define refsof_o(obj, decl) metaof_o(obj, decl)::refs_t
#define idof_o(obj, decl) metaof_o(obj, decl)::id

// get global address for current exe version
#ifdef GTASA
#define GLOBAL_ADDRESS_BY_VERSION(a,b,c,d,e,f) (plugin::GetGlobalAddress(plugin::by_version_dyn(a,b,c,d,e,f)))
#else
#define GLOBAL_ADDRESS_BY_VERSION(a,b,c) (plugin::GetGlobalAddress(plugin::by_version_dyn(a,b,c)))
#endif
