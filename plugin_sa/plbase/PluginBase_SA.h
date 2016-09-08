/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

/*
 GTASA C++ SDK
 See README.md for more details
 DK22Pac, LINK/2012, 2014-2015
 */

#pragma once
#include <cstddef>
#include <cstdint>

#define PLUGIN_API 
#define _PLUGIN_VERSION 0x00000010

// Forward some structures
struct RwRaster;

// Structure validation macros
#if 1
#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")
#endif

VALIDATE_SIZE(bool, 1);
VALIDATE_SIZE(char, 1);
VALIDATE_SIZE(short, 2);
VALIDATE_SIZE(int, 4);
VALIDATE_SIZE(float, 4);

// Basic types for structures describing
typedef unsigned __int8 Bool;

#define __parent_class_vtable__ private:\
                                 virtual void __dummy_virtual_func(){}\
                             public:\

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