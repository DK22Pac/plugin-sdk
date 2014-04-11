/*
 *  Injectors - Save Notification
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
    class save_manager
    {
        private:
            // Hooks
            typedef function_hooker<0x53E59B, char(void)> fnew_hook;
            typedef function_hooker<0x53C6EA, void(void)> ldng_hook;
            typedef function_hooker<0x53C70B, char(char*)> ldngb_hook;
            typedef function_hooker_fastcall<0x578DFA, int(void*, int, int)> onsav_hook;
            
            // Prototypes
            typedef std::function<void(int)> OnLoadType;
            typedef std::function<void(int)> OnSaveType;
        
            // Callbacks storage
            static OnLoadType& OnLoadCallback()
            { static OnLoadType cb; return cb; }
        
            static OnSaveType& OnSaveCallback()
            { static OnSaveType cb; return cb; }
        
            // Necessary game vars
            static bool IsLoad()
            { return ReadMemory<char>(0xBA6748+0x60) != 0; }
            static char GetSlot()
            { return ReadMemory<char>(0xBA6748+0x15F); }
            static bool SetDirMyDocuments()
            {
                return (memory_pointer(0x538860).get<int()>()  ()) != 0;
            }
            
            // Calls on load callback if possible
            static void CallOnLoad(int slot)
            { if(auto& cb = OnLoadCallback()) cb(slot); }
            
            // Calls on save callback if possible
            static void CallOnSave(int slot)
            { if(auto& cb = OnSaveCallback()) cb(slot); }

            // Patches the game to notify callbacks
            static void Patch()
            {
                static bool bPatched = false;
                if(bPatched == true) return;
                bPatched = true;
                
                // On the first time the user does a new-game/load-game...
                make_function_hook<fnew_hook>([](fnew_hook::func_type func)
                {
                    if(IsLoad() == false) CallOnLoad(-1);
                    return func();
                });
            
                // On the second time+ a new game happens or whenever a load game happens...
                make_function_hook<ldng_hook>([](ldng_hook::func_type func)
                {
                    if(IsLoad() == false)  CallOnLoad(-1);
                    return func();
                });
                
                // Whenever a load game happens
                make_function_hook<ldngb_hook>([](ldngb_hook::func_type GenericLoad, char*& e)
                {
                    auto result = GenericLoad(e);
                    if(result) CallOnLoad(GetSlot());
                    return result;
                });
                
                // Whenever a save game happens
                make_function_hook<onsav_hook>([](onsav_hook::func_type GenericSave, void*& self, int&, int& savenum)
                {
                    auto result = GenericSave(self, 0, savenum);
                    if(!result) CallOnSave(GetSlot());
                    return result;
                });
            }
            
        public:
            // RAII wrapper to SetDirMyDocuments, scoped change to user directory
            struct scoped_userdir
            {
                char buffer[MAX_PATH];
                
                scoped_userdir()
                {
                    GetCurrentDirectoryA(sizeof(buffer), buffer);
                    SetDirMyDocuments();
                }
                
                ~scoped_userdir()
                { SetCurrentDirectoryA(buffer); }
            };
            
            // Setup a callback to call whenever a new game or load game happens
            static void on_load(const OnLoadType& fn)
            { Patch(); OnLoadCallback() = fn; }
            
            // Setup a callback to call whenever a save game happens
            static void on_save(const OnSaveType& fn)
            { Patch(); OnSaveCallback() = fn; }
    };

} 
