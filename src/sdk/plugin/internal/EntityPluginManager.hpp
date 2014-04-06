/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 */
#pragma once

#include "SharedData.hpp"

/*
 *  EntityPluginManager
 *      Manages an user-data plugin for the entity type @T
 * 
 *      The @SuperManager object should handle the entity-specific data interation
 *      That means SuperManager should implement the following methods:
 *          GetMgr()                    = Returns the manager object at SharedData (i.e. EntityPluginData)
 *          GetDataForEntity(T*)        = Should return the reference to the plugin data pointer for the specified entity
 *          GetConstructorEvent, GetDestructorEvent = eFuncType for the construction and destruction events of the entity
 *          GetStartupEvent, GetShutdownEvent       = eFuncType for the startup and shutdown events of the shared pool
 * 
 * 
 */
template<class T, class SuperManager>
class EntityPluginManager : public SuperManager
{
    public:
        typedef void (*ConstructorType)(T*, void*);
        typedef void (*DestructorType)(T*, void*);
        
        // Registers an plugin for entity @T. Size of the data is @size with magic id @userid
        // When the entity gets constructed, @ctor is caleed. On destruction, @dtor is called. Both receives the entity and user data as arguments.
        // Returns the offset for the user plugin data.
        uint32_t RegisterPlugin(uint32_t size, uint32_t userid, ConstructorType ctor, DestructorType dtor)
        {
            auto& mgr = SuperManager::GetMgr();
            
            // If necessary, lazy-initialise ourselves
            this->Initialise();
            
            // Push a new plugin to the end of the entity-plugins list
            mgr.plugins.emplace_back();
            auto& plugin = mgr.plugins.back();
            
            // Setup offset and size field, advancing the manager total size
            plugin.offset = mgr.size;
            plugin.size = size;
            mgr.size += size;
            
            // Setup the other fields
            plugin.userid = userid;
            plugin.constructor = ctor;
            plugin.destructor = dtor;
            
            return plugin.offset;
        }
        
        // Gets (base + offset)
        static void* GetPlugin(void* base, uint32_t offset)
        {
            auto* data = (uint8_t*)(base);
            return &data[offset];
        }
        
        // Gets the user plugin data from @entity that is at @offset
        static void* GetPlugin(T* entity, uint32_t offset)
        {
            return GetPlugin(GetDataForEntity(entity), offset);
        }
        
        // Gets the user plugin data with user id @userid from @entity
        static void* GetPluginFromUserId(T* entity, uint32_t userid)
        {
            auto& mgr = SuperManager::GetMgr();
            for(auto it = mgr.plugins.begin(); it != mgr.plugins.end(); ++it)
            {
                it->userid;
                (*it).userid;
                if(it->userid == userid) return GetPlugin(entity, it->offset);
            }
            return nullptr;
        }
        
        
        
    private:
        
        // Called after the pools initialization to startup the user data array
        static void OnStartup()
        {
            auto& mgr = SuperManager::GetMgr();
            
            // If the buffer hasn't been allocated by anyone else yet, let's allocate it
            if(mgr.buffer == nullptr)
            {
                uint32_t elem_count = SuperManager::FindElementCount();
                uint32_t array_size = elem_count * 4;               // Size of array of pointers
                uint32_t user_size  = elem_count * mgr.size;        // Size of user data
                
                // Allocate the big buffer and setup the 'data' array pointer that is right after the user data big buffer
                mgr.buffer = ControllerBlockManager::GetInstance().Alloc(user_size + array_size);
                mgr.data   = (void**)((uintptr_t)(mgr.buffer) + user_size);
            }
        }
        
        // Called to shutdown our allocations
        static void OnShutdown()
        {
            auto& mgr = SuperManager::GetMgr();
            
            // If the buffer hasn't been freed by anyone else yet, let's free it
            if(mgr.buffer != nullptr)
            {
                ControllerBlockManager::GetInstance().Free(mgr.buffer);
                mgr.buffer = mgr.data = nullptr;
            }
        }
        
        // Called when each entity of type @T gets constructed
        static void OnConstructor(T* entity)
        {
            auto& data = GetDataForEntity(entity);
            
            // Check if data hasn't been attached by anyone else yet
            if(data == nullptr)
            {
                auto& mgr = SuperManager::GetMgr();
                
                // Attach user data to the entity
                data = AttachData(entity);
                
                // Constructs each piece of data
                for(auto it = mgr.plugins.begin(); it != mgr.plugins.end(); ++it)
                    it->constructor(entity, GetPlugin(data, it->offset));
            }
        }
        
        // Called when each entity of type @T gets destructed
        static void OnDestructor(T* entity)
        {
            auto& data = GetDataForEntity(entity);
            
            // Check if data has been detacched by anyone else yet
            if(data != nullptr)
            {
                auto& mgr = SuperManager::GetMgr();
                
                // Destructs each piece of data
                for(auto it = mgr.plugins.begin(); it != mgr.plugins.end(); ++it)
                    it->destructor(entity, GetPlugin(data, it->offset));
                
                // Detach the data and mark it as detached
                data = DetachData(entity, data);
            }
        }
        
    private:
        // Attach data to the entity and return it's buffer
        static void* AttachData(T* entity)
        {
            auto& mgr = SuperManager::GetMgr();
            return (void*)( (uintptr_t)(mgr.buffer) + (mgr.size * SuperManager::GetIndex(entity)) );
        }
        
        // Detach data from the entity
        static void* DetachData(T*, void*)
        {
            return nullptr;
        }
        
        // Gets the reference to the user data buffer for the specified entity
        static void*& GetDataForEntity(T* entity)
        {
            auto& mgr = SuperManager::GetMgr();
            return mgr.data[ SuperManager::GetIndex(entity) ];
        }
        
        
    private:
        // This object instance
        static EntityPluginManager*& GetInstance()
        {
            static EntityPluginManager* s = 0;
            return s;
        }
        
        // Patches the game to work with this plugin manager
        void Initialise()
        {
            if(GetInstance() == nullptr)
            {
                using plugin::tRegisteredFunction;
                GetInstance() = this;
                plugin::Core::RegisterFunc(SuperManager::GetConstructorEvent(), (tRegisteredFunction) OnConstructor);
                plugin::Core::RegisterFunc(SuperManager::GetDestructorEvent(),  (tRegisteredFunction) OnDestructor);
                plugin::Core::RegisterFunc(SuperManager::GetStartupEvent(),     (tRegisteredFunction) OnStartup);
                plugin::Core::RegisterFunc(SuperManager::GetShutdownEvent(),    (tRegisteredFunction) OnShutdown);
            }
        }
};
