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

// Try not to include plugin.h or anything else here to make it independent!
class CPed;
class CVehicle;
struct RwRaster;
struct CMenuItem;
namespace plugin { struct CPlugin; }


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

// Menu Extender Data Structure
struct MenuExtenderData
{
    CMenuItem* pItems;      // New menu items array (128 pages)
    short nUsedItems;       // Number of consumed menu pages
    short nUsedActions;     // Number of consumed entry actions
    short nUsedTypes;       // Number of consumed entry types
    short _rsv1;            // Padding / Reserved
    int   _rsv2[2];         // Reserved
};


/*
 *  This structure stores the important data shared between plugins
 *  It's basically the data block from the controller block (shared.hpp)
 *  This structure should be backward compatible. Also it's a POD structure, no construction, no destruction!
 */
struct SharedData
{
    SharedList<plugin::CPlugin*>    plugins;                    // Registered Plugins Using this SDK
    RwRaster*                       gameScreenRaster;           // Game screen is captured to this raster
    uint32_t                        lastPostFxFrame;            // Last time gameScreenRaster was captured
    EntityPluginData<CPed>          pedPlugin;                  // Ped Structure Plugin Data
    EntityPluginData<CVehicle>      vehPlugin;                  // Vehicle Structure Plugin Data
    MenuExtenderData                menuExtender;               // Menu Extender Shared Data
};



// Make sure SharedData is within the bounds
static_assert(sizeof(SharedData) < CBM_DATA_SIZE, "SharedData is too big for the current CBM_DATA_SIZE");


#pragma pack(pop)
