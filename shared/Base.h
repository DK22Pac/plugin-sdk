/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")

VALIDATE_SIZE(bool, 1);
VALIDATE_SIZE(char, 1);
VALIDATE_SIZE(short, 2);
VALIDATE_SIZE(int, 4);
VALIDATE_SIZE(float, 4);
VALIDATE_SIZE(long long, 8);

// Basic types for structures describing
typedef unsigned char bool8;
typedef int bool32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;

#define _IGNORED_
#define _CAN_BE_NULL_

// III/VC char > wchar_t string conversion
#define _SWSTRING_INIT(str, id) std::wstring my_ws##id; for (size_t i = 0; i < strlen(str); i++) my_ws##id += str[i]
#define _SWSTRING(id) const_cast<wchar_t *>(my_ws##id.c_str())
#define _SWSTRING_STATIC_INIT(id) static wchar_t my_ws##id[512] ; my_ws##id[0] = 0
#define _SWSTRING_STATIC(id) my_ws##id
#define _SWSTRING_STATIC_FROM(id, src) for (size_t i = 0; i < strlen(src); i++) my_ws##id[i] = src[i]
#define _SWSTRING_STATIC_TO(id, dst) for (size_t i = 0; i < wcslen(my_ws##id); i++) dst[i] = static_cast<char>(my_ws##id[i])

namespace plugin {
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
