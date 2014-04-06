/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Ped Plugin Super Manager
 */
#pragma once

#include "EntityPluginManager.hpp"
#include "SharedData.hpp"
#include <plugin/plugin.h>
#include <game_sa/CPools.h>

using plugin::eFuncType;

class SuperPedPluginManager
{
    public:
        typedef EntityPluginData<CPed>     Mgr_t;

        // Necessary events
        eFuncType GetConstructorEvent() { return plugin::FUNC_PED_CONSTRUCTOR; }
        eFuncType GetDestructorEvent()  { return plugin::FUNC_PED_DESTRUCTOR; }
        eFuncType GetStartupEvent()     { return plugin::FUNC_AFTER_POOLS_INITIALISATION; }
        eFuncType GetShutdownEvent()    { return plugin::FUNC_SHUTDOWN_RW; }
        
        // Finds the entity element count
        static uint32_t FindElementCount()
        {
            return CPools::ms_pPedPool->m_Size;
        }
        
        // Gets the entity index
        static uint32_t GetIndex(CPed* entity)
        {
            return CPools::ms_pPedPool->GetIndex(entity);
        }
        
        // Gets the shared structure
        static Mgr_t& GetMgr()
        {
            return ControllerBlockManager::GetInterface(0)->pedPlugin;
        }
};

//
struct PedPluginManager : public EntityPluginManager<CPed, SuperPedPluginManager>
{
};
