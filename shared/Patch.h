/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <windows.h>
#include "..\injector\injector.hpp"

namespace plugin
{
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
        static T Get(unsigned int address, bool vp = true) {
            return injector::ReadMemory<T>(address, vp);
        }

        template <typename T>
        static T TranslateCallOffset(unsigned int address) {
            if (GetUChar(address) == 0xE8) {
                int offset = GetUInt(address + 1);
                offset += (address + 5);
                return reinterpret_cast<T>(offset);
            }
            return nullptr;
        }

        template <typename T>
        static T TranslateJumpOffset(unsigned int address) {
            if (GetUChar(address) == 0xE9) {
                int offset = GetUInt(address + 1);
                offset += (address + 5);
                return reinterpret_cast<T>(offset);
            }
            return nullptr;
        }
    };
};