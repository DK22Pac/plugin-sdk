/*
 * Copyright (c) 2013-2014 Dmitry K. <>
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Callback manager for Post Processing Effects
 * 
 */
#pragma once
#include "CallbackManager.hpp"
#include <plugin/shared/SharedData.hpp>
#include <game_sa/CTimer.h>
#include <game_sa/RenderWare.h>
#include <game_sa\CScene.h>

/*
 *  PostFX Super Callback Manager
 */
struct cbPostFXManager : SimpleSuperManager<PatcherCALL1>
{
    // Helper to call all callbacks in a list
    void CallFuncs(const CallbackList& list)
    {
        std::for_each(list.begin(), list.end(), [](CallbackItem cb)
        {
            ((void (__cdecl *)())0x700D70)();       // RenderStatesSetHSL
            cb();
        });
    }
    
    // Called after the event happens.. That's, after RenderEffects (0x53E170) gets called
    void After(const CallbackList& list)
    {
        auto& lastPostFxFrame = ControllerBlockManager::GetInterface(0)->lastPostFxFrame;
        
        // Check if the last time we created/captured the screen raster wasn't in the current frame
        // If it was on the current frame there's no need to do this twice
        if(lastPostFxFrame != CTimer::m_FrameCounter)
        {
            // Set the current frame number, for reference
            lastPostFxFrame = CTimer::m_FrameCounter;
            
            // Create and capture the game screen raster
            this->CreateScreenRaster();
            this->CaptureScreenToRaster();
        }
        
        // Call the Post FX events
        return CallFuncs(list);
    }
    
    // Captures the game screen raster to our raster
    void CaptureScreenToRaster()
    {
        RwCameraEndUpdate(Scene.m_pRwCamera);
        RwRasterPushContext(plugin::PostProcess::GetGameScreenRaster());
		RwRasterRenderFast(Scene.m_pRwCamera->frameBuffer, 0, 0);
        RwRasterPopContext();
        RwCameraBeginUpdate(Scene.m_pRwCamera);
    }
    
    // Creates a raster to store the game screen
    // Creates only if game screen resolution changed or we didn't create one before
    void CreateScreenRaster()
    {
        auto& raster = plugin::PostProcess::GetGameScreenRaster();
        auto width   = Scene.m_pRwCamera->frameBuffer->width;
        auto height  = Scene.m_pRwCamera->frameBuffer->height;
        auto depth   = Scene.m_pRwCamera->frameBuffer->depth;
        
        // Check if the game screen resolution changed
        if(raster && (raster->width != width || raster->height != height || raster->depth != depth))
        {
            // ...it did, let's destroy the current raster
            RwRasterDestroy(raster);
            raster = nullptr;
        }
        
        // Do we have any raster created?
        if(raster == nullptr)
        {
            // We don't, create one now!
            raster = RwRasterCreate(width, height, depth, 5);
        }
    }
};

template<uintptr_t addr0>
struct CallbackPostFX : public BasicCallbackManagerCdecl< BasicCallbackManager<addr0, 0, 0, 0, 0, cbPostFXManager> >
{
};
