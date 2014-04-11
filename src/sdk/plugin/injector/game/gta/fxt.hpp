/*
 *  Injectors - Fake GTA Text Implementation
 *
 *  Copyright (C) 2012-2014 LINK/2012 <dma_2012@hotmail.com>
 *
 *  This software is provided 'as-is', without any express or implied
 *  warranty. In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 * 
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, subject to the following restrictions:
 * 
 *     1. The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 * 
 *     2. Altered source versions must be plainly marked as such, and must not be
 *     misrepresented as being the original software.
 * 
 *     3. This notice may not be removed or altered from any source
 *     distribution.
 *
 */
#pragma once
#include "../hooking.hpp"

namespace injector
{
    //
    //  for a .fxt parser check out fxt_parser.hpp
    //
    
    /*
     *  Text hooking managing
     * 
     *      @TextMap: A map to store the key-value pair (normally a std::map), key should be a hash and value should be a std::string
     *      @UpperHashFunctor: Functor that returns the hash from a key
     *      @CText_Get: The address to the CText::Get function to hook into
     * 
     *      Usage example:
     *          basic_fxt_manager<std::map<uint32_t, std::string>, CUpperCaseHashingFunctor> manager;
     *          manager.patch();                // (OPTIONAL) Inject it into the game code
     *          manager.add("KEY", "VALUE");    // Add a new key-value pair into the game
     *                                          // The '.add' call already calls '.patch', so .patch is optional
     * 
     */
    template<class TextMap, class UpperHashFunctor, uintptr_t CText_Get = 0x6A0050>
    class basic_fxt_manager
    {
        private:
            typedef const char* (__fastcall *GetType)(void*, int, const char*);
            typedef typename TextMap::key_type hash_type;  
            
            // Marks if this fxt manager is enabled or disabled
            // We need this because we can't just unhook the game anymore or we'd cause problems
            static bool& IsEnabled()
            { static bool b = false; return b; }
            
            // Store the raw pointer that CText::Get is located at
            static memory_pointer_raw& GetPtr()
            { static memory_pointer_raw x; return x; }
            
            // Store the text map
            static TextMap& GetTextMap()
            { static TextMap map; return map; }
            
            // Store the jmp hooker
            static scoped_jmp& JmpHook()
            { static scoped_jmp x; return x; }
            
            
        public:
            
            /*
             *  Adds a GXT @key - @value pair to the text map for use in our GxtHook 
             */
            static void add(const char* key, const char* value)
            {
                patch();
                GetTextMap()[GetHash(key)] = value;
            }
            
            /*
             *  Returns the value from @key in the CText object @ctext
             */
            static const char* get(void* ctext, const char* key)
            {
                auto f = (GetType) GetPtr().get();
                return f(ctext, 0, key);
            }

            /*
             *  Patches the game to work with our fxt stuff
             */
            static void patch()
            {
                static bool bPatched = false;
                if(bPatched == true) return;
                bPatched = true;
                
                //
                DWORD old;
                GetPtr() = memory_pointer(CText_Get).get<void>();   // Save the CText::Get pointer in raw form for fast access
                UnprotectMemory(GetPtr(), 5, old);                  // Unprotect the memory forever
                MakeHook();                                         // Make our hook
                enable();                                           // Enable this
            }
            
            /*
             *  Enable this
             */
            static void enable()
            {
                patch();
                IsEnabled() = true;
            }
            
            /*
             *  Disables this 
             */
            static void disable()
            {
                IsEnabled() = false;
            }

            
        private:    // Internal stuff
            
            // Make the hook
            static void MakeHook()
            {
                JmpHook().make_jmp(GetPtr(), raw_ptr(GxtHook), false);
            }
            
            // Restore the hook
            static void RestoreHook()
            {
                JmpHook().restore();
            }
            
            // Hooked CText::Get
            static const char* __fastcall GxtHook(void* self, int, const char* key)
            {
                if(IsEnabled())
                {
                    // Try to find @key in our text map
                    if(const char* value = FindFromKey(key))
                        return value;
                }

                // Nothing found, try with original call
                return ForwardGet(self, key);
            }
            
            // Forwards the CText::Get call to the next level
            static const char* ForwardGet(void* ctext, const char* key)
            {
                RestoreHook();                      // Remove what we did for a while
                auto f = (GetType) GetPtr().get();  // Call the func that was there before our hooking
                auto result = f(ctext, 0, key);     // ^
                MakeHook();                         // Put our hook back there
                return result;                      //
            }

            // Get hash from key
            static hash_type GetHash(const char* key)
            {
                UpperHashFunctor fun;
                return fun(key);
            }

            // Finds value from key
            static const char* FindFromKey(const char* key)
            {
                auto& text = GetTextMap();
                
                // Do the search and return the result
                auto it = text.find(GetHash(key));
                if(it != text.end()) return it->second.c_str();
                return nullptr;
            }
            
    };

}
