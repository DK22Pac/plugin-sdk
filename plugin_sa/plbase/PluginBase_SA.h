/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include <cstddef>
#include <cstdint>
#include "..\shared\Base.h"

#define PLUGIN_API 
#define _PLUGIN_VERSION 0x00000010

// Forward some structures
struct RwRaster;

// Main Library
namespace plugin
{
    // Core functionalities
	namespace Core
	{
		PLUGIN_API unsigned int GetVersion();
    };
    
    // Post processing effects
	namespace PostProcess
	{
		//PLUGIN_API void PostProcessCreate();
		//PLUGIN_API void PostProcessDestroy();           
		//PLUGIN_API RwRaster*& GetGameScreenRaster();
	};
};

// Tricks library -- Used internally for some dirty tricks
namespace plugin
{
    struct dummy_func_t { };                // Dummy func tag type
    static const dummy_func_t dummy;        // Dummy func tag object

    // Gets the virtual method table from the object @self
    inline void** GetVMT(const void* self)
    {
        return *(void***)(self);
    }

    // Gets the virtual method from @self in the table index @index 
    inline void* GetVMT(const void* self, size_t index)
    {
        return GetVMT(self)[index];
    }
}

using plugin::GetVMT;