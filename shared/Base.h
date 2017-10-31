#pragma once

#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")

VALIDATE_SIZE(bool, 1);
VALIDATE_SIZE(char, 1);
VALIDATE_SIZE(short, 2);
VALIDATE_SIZE(int, 4);
VALIDATE_SIZE(float, 4);

// Basic types for structures describing
typedef unsigned __int8 Bool;
typedef __int32 Bool32;
typedef __int8 Int8;
typedef unsigned __int8 UInt8, UByte;
typedef signed __int8 SInt8;
typedef __int16 Int16;
typedef unsigned __int16 UInt16;
typedef signed __int16 SInt16;
typedef __int32 Int32;
typedef unsigned __int32 UInt32;
typedef signed __int32 SInt32;
typedef __int64 Int64;
typedef unsigned __int64 UInt64;
typedef signed __int64 SInt64;
typedef float Float;
typedef float Float32;
typedef double Float64;
typedef double Double;

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