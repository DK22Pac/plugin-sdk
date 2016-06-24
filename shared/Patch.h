#pragma once
#include <windows.h>
#include "..\injector\injector.hpp"

namespace plugin
{
    template <typename Ret, unsigned int address, typename... Args>
    void Call(Args... args) {
        ((Ret(__cdecl *)(Args...))address)(args...);
    }

    template <typename Ret, unsigned int address, typename C, typename... Args>
    void CallMethod(C _this, Args... args) {
        ((Ret(__thiscall *)(C, Args...))address)(_this, args...);
    }

    class patch {
    public:
        inline static void Nop(unsigned int address, unsigned int size){
            injector::MakeNOP(address, size, true);
        }

        inline static void RedirectCall(unsigned int address, void *func) {
            injector::MakeCALL(address, func, true);
        }

        inline static void RedirectJump(int address, void *func) {
            injector::MakeJMP(address, func, true);
        }

        inline static void SetChar(unsigned int address, char value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetUChar(unsigned int address, unsigned char value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetShort(unsigned int address, short value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetUShort(unsigned int address, unsigned short value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetInt(unsigned int address, int value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetUInt(unsigned int address, unsigned int value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetFloat(unsigned int address, float value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static void SetPointer(unsigned int address, void *value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        inline static char GetChar(unsigned int address, bool vp = true) {
            return injector::ReadMemory<char>(address, vp);
        }

        inline static unsigned char GetUChar(unsigned int address, bool vp = true) {
            return injector::ReadMemory<unsigned char>(address, vp);
        }

        inline static short GetShort(unsigned int address, bool vp = true) {
            return injector::ReadMemory<short>(address, vp);
        }

        inline static unsigned short GetUShort(unsigned int address, bool vp = true) {
            return injector::ReadMemory<unsigned short>(address, vp);
        }

        inline static int GetInt(unsigned int address, bool vp = true) {
            return injector::ReadMemory<int>(address, vp);
        }

        inline static unsigned int GetUInt(unsigned int address, bool vp = true) {
            return injector::ReadMemory<unsigned int>(address, vp);
        }

        inline static float GetFloat(unsigned int address, bool vp = true) {
            return injector::ReadMemory<float>(address, vp);
        }

        inline static void *GetPointer(unsigned int address, bool vp = true) {
            return injector::ReadMemory<void *>(address, vp);
        }

        template <typename T>
        static void Set(unsigned int address, T value, bool vp = true) {
            injector::WriteMemory(address, value, vp);
        }

        template <typename T>
        static void Get(unsigned int address, bool vp = true) {
            return injector::ReadMemory<T>(address, vp);
        }
    };
};