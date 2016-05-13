#pragma once
#include <windows.h>

#define INJ_CALL 0
#define INJ_JUMP 1
#define INJ_VTBL 2
#define INJ_CB   3

#define CALLVOID(a) ((void (__cdecl *)())a)()
#define CALLVOIDRETCHAR(a) ((char (__cdecl *)())a)()
#define READPVOID(a) (*(void **)a)
#define READCHAR(a) (*(char *)a)

namespace plugin
{
    class patch
    {
        inline static void Patch(void* address, void* data, int size)
        {
            unsigned long protect[2];
            VirtualProtect(address, size, PAGE_EXECUTE_READWRITE, &protect[0]);
            memcpy(address, data, size);
            VirtualProtect(address, size, protect[0], &protect[1]);
        }
    public:
        inline static void Nop(int address, int size)
        {
            unsigned long protect[2];
            VirtualProtect((void *)address, size, PAGE_EXECUTE_READWRITE, &protect[0]);
            memset((void *)address, 0x90, size);
            VirtualProtect((void *)address, size, protect[0], &protect[1]);
        }
        inline static bool CheckChar(int address, unsigned char value)
        {
            unsigned long protect[2];
            unsigned char dummy = value;
            VirtualProtect((void *)address, 1, PAGE_EXECUTE_READ, &protect[0]);
            memcpy(&dummy, (void *)address, 1);
            VirtualProtect((void *)address, 1, protect[0], &protect[1]);
            return (dummy == value);
        }
        inline static void RedirectCall(int address, void *func)
        {
            int temp = 0xE8;
            Patch((void *)address, &temp, 1);
            temp = (int)func - ((int)address + 5);
            Patch((void *)((int)address + 1), &temp, 4);
        }
        inline static void RedirectJump(int address, void *func)
        {
            int temp = 0xE9;
            Patch((void *)address, &temp, 1);
            temp = (int)func - ((int)address + 5);
            Patch((void *)((int)address + 1), &temp, 4);
        }
        inline static void SetChar(int address, char value)
        {
            Patch((void *)address, &value, 1);
        }
        inline static void SetShort(int address, short value)
        {
            Patch((void *)address, &value, 2);
        }
        inline static void SetInt(int address, int value)
        {
            Patch((void *)address, &value, 4);
        }
        inline static void SetFloat(int address, float value)
        {
            Patch((void *)address, &value, 4);
        }
        inline static void SetPointer(int address, void *value)
        {
            Patch((void *)address, &value, 4);
        }
        inline static unsigned int TranslateCallAddr(unsigned int addr)
        {
            unsigned int offset = *(unsigned int *)(addr + 1);
            offset += (addr + 5);
            return offset;
        }
        inline static unsigned int MakeCallAddr(unsigned int calladdr, unsigned int funcaddr)
        {
            if (*(unsigned char *)calladdr == 0xE8)
                return TranslateCallAddr(calladdr);
            return funcaddr;
        }

        inline static unsigned int MakeJumpAddr(unsigned int jumpaddr, unsigned int funcaddr)
        {
            if (*(unsigned char *)jumpaddr == 0xE9)
                return TranslateCallAddr(jumpaddr);
            return funcaddr;
        }

        template<typename T>
        static T SafeRedirectCall(unsigned int calladdr, unsigned int defaultaddr, T func)
        {
            T retaddr = reinterpret_cast<T>(MakeCallAddr(calladdr, defaultaddr));
            RedirectCall(calladdr, func);
            return retaddr;
        }

        template<typename T>
        static void SafeRedirectCall(unsigned int calladdr, unsigned int defaultaddr, T func, T& retaddr)
        {
            retaddr = reinterpret_cast<T>(MakeCallAddr(calladdr, defaultaddr));
            RedirectCall(calladdr, func);
        }

        template<typename T>
        static T SafeRedirectJump(unsigned int jumpaddr, unsigned int defaultaddr, T func)
        {
            T retaddr = reinterpret_cast<T>(MakeJumpAddr(jumpaddr, defaultaddr));
            RedirectJump(jumpaddr, func);
            return retaddr;
        }

        template<typename T>
        static void SafeRedirectJump(unsigned int jumpaddr, unsigned int defaultaddr, T func, T& retaddr)
        {
            retaddr = reinterpret_cast<T>(MakeJumpAddr(jumpaddr, defaultaddr));
            RedirectJump(jumpaddr, func);
        }

        template<typename T>
        static T SafeRedirect_NoOffset(unsigned int addr, T func)
        {
            T retaddr = reinterpret_cast<T>(*reinterpret_cast<unsigned int *>(addr));
            SetPointer(addr, func);
            return retaddr;
        }

        template<typename T>
        static void SafeRedirect_NoOffset(unsigned int addr, T func, T& retaddr)
        {
            retaddr = reinterpret_cast<T>(*reinterpret_cast<unsigned int *>(addr));
            SetPointer(addr, func);
        }

		template<typename T>
		static void MakeInject(unsigned int type, unsigned int addr, T func, T& retaddr)
		{
			switch (type)
			{
			case INJ_CALL:
				SafeRedirectCall(addr, 0, func, retaddr);
				break;
			case INJ_JUMP:
				SafeRedirectJump(addr, 0, func, retaddr);
				break;
			case INJ_CB:
			case INJ_VTBL:
				SafeRedirect_NoOffset(addr, func, retaddr);
				break;
			}
		}
    };
};