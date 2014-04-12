/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Callback manager for IDirect3DDevice9::Reset
 * 
 */
#pragma once

#include "CallbackManager.hpp"
#include <d3d9.h>

extern "C" HRESULT CallRyosukeLikeReset(void* pFunc, void* pDevice, void* pPresentationParams);

/*
 *  Callback Managers for notifying about D3D9 device reset
 */

typedef HRESULT (__stdcall *Reset_t)(void* pDevice, void* pPresentationParameters /* D3DPRESENT_PARAMETERS* */);

// Patcher, patches an D3D9 device
struct ResetDevicePatcher : public BasePatcher<Reset_t, 16>
{
    //
    void Patch(int n, uintptr_t addr, HRESULT(*hf)(), size_t nopsize)
    {
        using namespace injector;
        if(addr)
        {
            // Makes the hook and get the previous call pointer there (if any)
            this->hb[n].fun = injector::MakeCALL(addr, raw_ptr(hf)).get();
            
            // Make the desired amount of NOPs after the hook
            injector::MakeNOP(addr + 5, nopsize);
        }
    }
};

struct cbResetDeviceManager : SimpleSuperManager<ResetDevicePatcher>
{
    // Calls the original function patched at Patch() if possible
    HRESULT CallOriginal(int n)
    {
        using namespace injector;
        auto* pDevice = ReadMemory<IDirect3DDevice9*>(0xC97C28);                 // Get the device pointer
        auto* pPresent = memory_pointer(0xC9C040).get<D3DPRESENT_PARAMETERS>();  // Get the present pointer
        
        auto fun = ResetDevicePatcher::hb[n].fun;
        if(fun) return CallRyosukeLikeReset((void*)fun, pDevice, pPresent);
        
        // Okay, we have no previous call pointer there, call the really original Reset
        return pDevice->Reset(pPresent);
    }
};

struct CallbackResetDevice : public BasicCallbackManager<0, 0, 0, 0, 0, cbResetDeviceManager>
{
    public:
        typedef BasicCallbackManager<0, 0, 0, 0, 0, cbResetDeviceManager> Base;

        virtual void Patch(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t)
        {
            // Manually patches
            ResetDevicePatcher::Patch(0, 0x7F9788, hf0, 6);
            ResetDevicePatcher::Patch(1, 0x7F9710, hf1, 6);
            ResetDevicePatcher::Patch(2, 0x7F935C, hf2, 6);
            ResetDevicePatcher::Patch(3, 0x7F9248, hf3, 6);
            ResetDevicePatcher::Patch(4, 0x7F9A16, hf4, 6);
            ResetDevicePatcher::Patch(5, 0x7F839F, hf5, 6);
            ResetDevicePatcher::Patch(6, 0x7F8327, hf6, 6);
            ResetDevicePatcher::Patch(7, 0x7F81FF, hf7, 6);
            ResetDevicePatcher::Patch(8, 0x7F8187, hf8, 6);
            ResetDevicePatcher::Patch(9, 0x7F7AA4, hf9, 6);
            ResetDevicePatcher::Patch(10, 0x7F8B7B, hf10, 4);
            ResetDevicePatcher::Patch(11, 0x7F7990, hf11, 6);
            ResetDevicePatcher::Patch(12, 0x7F9B43, hf12, 6);
            ResetDevicePatcher::Patch(13, 0x7F8C88, hf13, 4);
            ResetDevicePatcher::Patch(14, 0x7F87C6, hf14, 4);
            ResetDevicePatcher::Patch(15, 0x7F86C4, hf15, 4);
        }
        
        // Called when the event happens
        template<int N>
        static HRESULT hf()
        {
            auto& cbm = *Base::GetInstance();
            
            // Call the before events, then call the original thing, then call the after events
            cbm.Before(cbm.before);
            HRESULT result = cbm.CallOriginal(N);
            cbm.After(cbm.after);
            
            // Preserve the return value
            return result;
        }
   
        // ----
        static HRESULT hf0() { return hf<0>(); }
        static HRESULT hf1() { return hf<1>(); }
        static HRESULT hf2() { return hf<2>(); }
        static HRESULT hf3() { return hf<3>(); }
        static HRESULT hf4() { return hf<4>(); }
        static HRESULT hf5() { return hf<5>(); }
        static HRESULT hf6() { return hf<6>(); }
        static HRESULT hf7() { return hf<7>(); }
        static HRESULT hf8() { return hf<8>(); }
        static HRESULT hf9() { return hf<9>(); }
        static HRESULT hf10() { return hf<10>(); }
        static HRESULT hf11() { return hf<11>(); }
        static HRESULT hf12() { return hf<12>(); }
        static HRESULT hf13() { return hf<13>(); }
        static HRESULT hf14() { return hf<14>(); }
        static HRESULT hf15() { return hf<15>(); }
};



#if defined(_MSC_VER)

void __declspec(naked) HRESULT CallRyosukeLikeReset(void* pFunc, void* pDevice, void* pPresentationParams)
{
    __asm
    {
        mov eax, [esp+0x8]
        mov ecx, [eax]
        mov edx, [esp+0x4]
        call edx
        ret
  
        /* Due to a GCC compiler/linker bug or something like that */
        jmp _CallRyosukeLikeReset
	}
}


#else

__asm__(R"(
    .intel_syntax noprefix
    .globl _CallRyosukeLikeReset

    _CallRyosukeLikeReset:
        mov eax, [esp+0x8]
        mov ecx, [eax]
        mov edx, [esp+0x4]
        call edx
        ret
  
    /* Due to a GCC compiler/linker bug or something like that */
    jmp _CallRyosukeLikeReset
    
    .att_syntax prefix
)");

#endif
