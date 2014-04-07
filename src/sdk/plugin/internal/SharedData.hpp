/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Shared Data Between Plugins
 * 
 */
#pragma once
#include <cstdint>
#include "SharedList.hpp"
#include <plugin/plugin.h>

#pragma pack(push, 1)

// Entity Plugin User Data Structure
template<class T>
struct EntityPluginUserData
{
    uint32_t offset;                    // User Data Offset
	uint32_t size;                      // User Data Size
	uint32_t userid;                    // User ID
	void (*constructor)(T*, void*);     // Constructor call
	void (*destructor)(T*, void*);      // Destructor call
};

// Entity Plugin Shared Data Structure
template<class T>
struct EntityPluginData
{
    void*                               buffer;         // Big buffer that's used to store every allocated resource
    uint32_t                            size;           // Size of additional data for plugins for each element
    void**                              data;           // Additional data array
    void*                               _rsv1;          // Reserved
    SharedList<EntityPluginUserData<T>> plugins;        // Entity plugins
};


/*
 *  This structure stores the important data shared between plugins
 *  It's basically the data block from the controller block (shared.hpp)
 *  This structure should be backward compatible. Also it's a POD structure, no construction, no destruction!
 */
struct SharedData
{
    SharedList<plugin::CPlugin*>    plugins;
    EntityPluginData<CPed>          pedPlugin;
    EntityPluginData<CVehicle>      vehPlugin;
};



// Make sure SharedData is within the bounds
static_assert(sizeof(SharedData) < CBM_DATA_SIZE, "SharedData is too big for the current CBM_DATA_SIZE");


#pragma pack(pop)
