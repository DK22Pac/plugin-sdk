/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 */
#pragma once

#include <vector>
#include <algorithm>
#include <plugin/plugin.h>
#include <plugin/injector/hooking.hpp>

// Callback typedefs
typedef plugin::tRegisteredFunction         CallbackItem;
typedef std::pair<uintptr_t, void*(*)()>    CallbackPair;
typedef std::vector<CallbackItem>           CallbackList;

// Functor that's responssible for calling an callback
struct FnCallback
{
    void operator()(const CallbackItem& cb)
    {
        return cb();
    }
};


/*
 *  BasicCallbackManager
 * 
 *      Callback management for addresses @addr0, @addr1, ..., @addrN
 *      Whenever something happens on those addresses (defined by @SuperManager) the callbacks will get called. 
 * 
 */
template<
    uintptr_t addr0, uintptr_t addr1, uintptr_t addr2, uintptr_t addr3, uintptr_t addr4,
    class SuperManager
>
class BasicCallbackManager : public SuperManager
{  
    public:
        
        // Registers a callback that will get called BEFORE the event
        void RegisterFuncBefore(CallbackItem func)
        {
            Patch();
            before.push_back(func);
        }
        
        // Registers a callback that will get called AFTER the event
        void RegisterFuncAfter(CallbackItem func)
        {
            Patch();
            after.push_back(func);
        }
        
        // Lazyly patches the game code if it hasn't been patched yet
        void Patch()
        {
            if(GetInstance() == nullptr)
            {
                GetInstance() = this;
                
                // Apply patch on all the addresse
                SuperManager::Patch(
                    CallbackPair(addr0, hf0),
                    CallbackPair(addr1, hf1),
                    CallbackPair(addr2, hf2),
                    CallbackPair(addr3, hf3),
                    CallbackPair(addr4, hf4)
                );
            }
        }
        
        // Called when the event happens
        template<int N> static void* hf()
        {
            auto& cbm = *GetInstance();
            
            // Call the before events, then call the original thing, then call the after events
            cbm.Before(cbm.before);
            void* result = cbm.CallOriginal(N);
            cbm.After(cbm.after);
            
            // Preserve the return value, returns a void* because it has the sizeof eax 
            return result;
        }
        
        // ----
        static void* hf0() { return hf<0>(); }
        static void* hf1() { return hf<1>(); }
        static void* hf2() { return hf<2>(); }
        static void* hf3() { return hf<3>(); }
        static void* hf4() { return hf<4>(); }
        
    private:
        // List of before and after callbacks
        CallbackList before;
        CallbackList after;
        
        // Manager instance
        static BasicCallbackManager*& GetInstance()
        {
            static BasicCallbackManager* ptr = 0;
            return ptr;
        }
};


/*
 *  SimpleSuperManager
 * 
 *      A simple super manager for BasicCallbackManager
 *      @MyBasePatcher is responssible for patching the game
 *  
 */
template<class MyBasePatcher>
struct SimpleSuperManager : MyBasePatcher
{
    // Helper to call all callbacks in a list
    void CallFuncs(const CallbackList& list)
    {
        std::for_each(list.begin(), list.end(), FnCallback());
    }
    
    // Called before the event happens
    void Before(const CallbackList& list)
    {
        return CallFuncs(list);
    }
    
    // Called after the event happens
    void After(const CallbackList& list)
    {
        return CallFuncs(list);
    }

    // Patches the five addresses with to work with the callback system
    void Patch(const CallbackPair& c0, const CallbackPair& c1, const CallbackPair& c2, const CallbackPair& c3, const CallbackPair& c4)
    {
        MyBasePatcher::Patch(0, c0);
        MyBasePatcher::Patch(1, c1);
        MyBasePatcher::Patch(2, c2);
        MyBasePatcher::Patch(3, c3);
        MyBasePatcher::Patch(4, c4);
    }

    // Calls the original function patched at Patch() if possible
    void* CallOriginal(int n)
    {
        auto fun = MyBasePatcher::hb[n].fun;
        if(fun) return fun();
        return 0;
    }
};



/*
 *  Basic Patches 
 */

// Normally a patcher will inherit from this object
struct BasePatcher
{
    injector::hook_back<void*(*)()> hb[5];
};

// Patcher that works with a CALL replacing
struct BasePatcherCALL : public BasePatcher
{
    void Patch(int n, const CallbackPair& c)
    {
        if(c.first) hb[n].fun = injector::MakeCALL(c.first, (void*) c.second).get();
    }
};

// Patcher that works with a JMP replacing
struct BasePatcherJMP : public BasePatcher
{
    void Patch(int n, const CallbackPair& c)
    {
        if(c.first) hb[n].fun = injector::MakeJMP(c.first, (void*) c.second).get();
    }
};




/*
 *  Callback Managers of all kinds and types
 */

// One address and CALL patching method
template<uintptr_t addr0>
struct CallbackManager1C : public BasicCallbackManager<addr0, 0, 0, 0, 0, SimpleSuperManager<BasePatcherCALL> >
{
};

// One address and JMP patching method
template<uintptr_t addr0>
struct CallbackManager1J : public BasicCallbackManager<addr0, 0, 0, 0, 0, SimpleSuperManager<BasePatcherJMP> >
{
};

// Two address and CALL patching method
template<uintptr_t addr0, uintptr_t addr1>
struct CallbackManager2C : public BasicCallbackManager<addr0, addr1, 0, 0, 0, SimpleSuperManager<BasePatcherCALL> >
{
};

// Five address and CALL patching method
template<uintptr_t addr0, uintptr_t addr1, uintptr_t addr2, uintptr_t addr3, uintptr_t addr4>
struct CallbackManager5C : public BasicCallbackManager<addr0, addr1, addr2, addr3, addr4, SimpleSuperManager<BasePatcherCALL> >
{
};
