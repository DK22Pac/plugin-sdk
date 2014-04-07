/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Callback manager for IDirect3DDevice9::Reset
 * 
 */
#pragma once

#include "CallbackManager.hpp"

/*
 *  Callback Managers for notifying about D3D9 device reset
 */

// Patcher, patches an D3D9 device
struct ResetDevicePatcher
{
    typedef HRESULT (__stdcall *Reset_t)(void* pDevice, void* pPresentationParameters /* D3DPRESENT_PARAMETERS* */);
    Reset_t Reset;

    //
    void Patch(uintptr_t addr0, Reset_t hf0)
    {
        using namespace injector;
        if(addr0)
        {
            // Get the Direct3DDevice object and then the Reset function
            void*** p = memory_pointer(addr0).get();
            auto Direct3DDevice_VMT = raw_ptr(**p);
            auto pReset = raw_ptr(Direct3DDevice_VMT + 0x40).get();
            
            // Patches the Reset pointer
            this->Reset = ReadMemory<Reset_t>(pReset, true);
            WriteMemory<Reset_t>(pReset, hf0, true);
        }
    }
};

struct ResetDeviceManager : SimpleSuperManager<ResetDevicePatcher>
{
    // Patches the IDirect3DDevice at addr0
    void DoPatch(uintptr_t addr0, Reset_t hf0)
    {
        ResetDevicePatcher::Patch(addr0, hf0);
    }
    
    // Call the original IDirect3DDevice::Reset
    HRESULT CallOriginal(void* pDevice, void* pPresentationParameters)
    {
        return ResetDevicePatcher::Reset(pDevice, pPresentationParameters);
    }
};


template<uintptr_t addr0>
struct CallbackResetDevice : public BasicCallbackManager<addr0, 0, 0, 0, 0, ResetDeviceManager>
{
    public:
        typedef BasicCallbackManager<addr0, 0, 0, 0, 0, ResetDeviceManager> Base;

        virtual void Patch(uintptr_t xaddr0, uintptr_t, uintptr_t, uintptr_t, uintptr_t)
        {
            ResetDeviceManager::DoPatch(xaddr0, hf0);
        }
        
        // Called when the event happens
        static HRESULT __stdcall hf0(void* pDevice, void* pPresentationParameters)
        {
            auto& cbm = *Base::GetInstance();
            
            // Call the before events, then call the original thing, then call the after events
            cbm.Before(cbm.before);
            HRESULT result = cbm.CallOriginal(pDevice, pPresentationParameters);
            cbm.After(cbm.after);
            
            // Preserve the return value, returns a void* because it has the sizeof eax 
            return result;
        }
};
