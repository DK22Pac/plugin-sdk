/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *      Generic Callback Manager
 * 
 */
#pragma once

#include <vector>
#include <algorithm>
#include <plugin/plugin.h>
#include <plugin/injector/hooking.hpp>

// Callback typedefs
typedef plugin::tRegisteredFunction         CallbackItem;
typedef std::pair<uintptr_t, void*>         CallbackPair;
typedef std::vector<CallbackItem>           CallbackList;

typedef void*(*BHP1)();
typedef void*(__fastcall *BHP1_THIS)(void*);


// Functor that's responssible for calling an callback
struct FnCallback
{
    void operator()(const CallbackItem& cb)
    {
        if(cb) return cb();
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
        //
        virtual ~BasicCallbackManager() {}
        
        // Patches the game code
        virtual void Patch(uintptr_t xaddr0, uintptr_t xaddr1, uintptr_t xaddr2, uintptr_t xaddr3, uintptr_t xaddr4)=0;
        
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
                this->Patch(addr0, addr1, addr2, addr3, addr4);
            }
        }
        
    public:
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
 *  Cdecl Callback Manager 
 */
template<class CallbackManager>
class BasicCallbackManagerCdecl : public CallbackManager
{
    public:

        virtual void Patch(uintptr_t addr0, uintptr_t addr1, uintptr_t addr2, uintptr_t addr3, uintptr_t addr4)
        {
            // Apply patch on all the addresse
            this->DoPatch(
                CallbackPair(addr0, (void*)  hf0),
                CallbackPair(addr1, (void*)  hf1),
                CallbackPair(addr2, (void*)  hf2),
                CallbackPair(addr3, (void*)  hf3),
                CallbackPair(addr4, (void*)  hf4)
            );
        }
                
        // Called when the event happens
        template<int N> static void* hf()
        {
            auto& cbm = *CallbackManager::GetInstance();
            
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
};

/*
 *  Thiscall Callback Manager 
 */
template<class CallbackManager>
class BasicCallbackManagerThis : public CallbackManager
{
    public:

        virtual void Patch(uintptr_t addr0, uintptr_t addr1, uintptr_t addr2, uintptr_t addr3, uintptr_t addr4)
        {
            // Apply patch on all the addresse
            this->DoPatch(
                CallbackPair(addr0, (void*)  hf0),
                CallbackPair(addr1, (void*)  hf1),
                CallbackPair(addr2, (void*)  hf2),
                CallbackPair(addr3, (void*)  hf3),
                CallbackPair(addr4, (void*)  hf4)
            );
        }
        
        // Called when the event happens
        template<int N> static void* __fastcall hf(void* this_ptr)
        {
            auto& cbm = *CallbackManager::GetInstance();

            // Call the before events, then call the original thing, then call the after events
            cbm.Before(cbm.before);
            void* result = cbm.CallOriginal(N, this_ptr);
            cbm.After(cbm.after);
            
            // Preserve the return value, returns a void* because it has the sizeof eax 
            return result;
        }
        
        // ----
        static void* __fastcall hf0(void* self) { return hf<0>(self); }
        static void* __fastcall hf1(void* self) { return hf<1>(self); }
        static void* __fastcall hf2(void* self) { return hf<2>(self); }
        static void* __fastcall hf3(void* self) { return hf<3>(self); }
        static void* __fastcall hf4(void* self) { return hf<4>(self); }
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
    void DoPatch(const CallbackPair& c0, const CallbackPair& c1, const CallbackPair& c2, const CallbackPair& c3, const CallbackPair& c4)
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

// One void* parameter...
template<class MyBasePatcher>
struct SimpleSuperManagerThiscall : SimpleSuperManager<MyBasePatcher>
{
    // Calls the original function patched at Patch() if possible
    void* CallOriginal(int n, void* p)
    {
        auto fun = MyBasePatcher::hb[n].fun;
        if(fun) return fun(p);
        return 0;
    }
};



/*
 *  Basic Patches 
 */

// Normally a patcher will inherit from this object
template<class FuncT>
struct BasePatcher
{
    injector::hook_back<FuncT> hb[5];
};

// Patcher that works with a CALL replacing
template<class FuncT>
struct BasePatcherCALL : public BasePatcher<FuncT>
{
    void Patch(int n, const CallbackPair& c)
    {
        if(c.first) this->hb[n].fun = injector::MakeCALL(c.first, c.second).get();
    }
};

// Patcher that works with a JMP replacing
template<class FuncT>
struct BasePatcherJMP : public BasePatcher<FuncT>
{
    void Patch(int n, const CallbackPair& c)
    {
        if(c.first) this->hb[n].fun = injector::MakeJMP(c.first, c.second).get();
    }
};

struct PatcherCALL1 : public BasePatcherCALL<BHP1> {};
struct PatcherJMP1 : public BasePatcherJMP<BHP1> {};
struct PatcherCALL1_THIS : public BasePatcherCALL<BHP1_THIS> {};
struct PatcherJMP1_THIS : public BasePatcherJMP<BHP1_THIS> {};



/*
 *  Callback Managers of all kinds and types
 */

// One address and CALL patching method
template<uintptr_t addr0>
struct CallbackManager1C : public BasicCallbackManagerCdecl< BasicCallbackManager<addr0, 0, 0, 0, 0, SimpleSuperManager<PatcherCALL1> > >
{
};

// One address and JMP patching method
template<uintptr_t addr0>
struct CallbackManager1J : public BasicCallbackManagerCdecl< BasicCallbackManager<addr0, 0, 0, 0, 0, SimpleSuperManager<PatcherJMP1> > >
{
};

// Two address and CALL patching method
template<uintptr_t addr0, uintptr_t addr1>
struct CallbackManager2C : public BasicCallbackManagerCdecl< BasicCallbackManager<addr0, addr1, 0, 0, 0, SimpleSuperManager<PatcherCALL1> > >
{
};

// Five address and CALL patching method
template<uintptr_t addr0, uintptr_t addr1, uintptr_t addr2, uintptr_t addr3, uintptr_t addr4>
struct CallbackManager5C : public BasicCallbackManagerCdecl< BasicCallbackManager<addr0, addr1, addr2, addr3, addr4, SimpleSuperManager<PatcherCALL1> > >
{
};

// One address and CALL patching method, + Thiscall calling convenition
template<uintptr_t addr0>
struct CallbackManagerThis1C : public BasicCallbackManagerThis< BasicCallbackManager<addr0, 0, 0, 0, 0, SimpleSuperManagerThiscall<PatcherCALL1_THIS> > >
{
};

// One address and CALL patching method, + Thiscall calling convenition
template<uintptr_t addr0, uintptr_t addr1>
struct CallbackManagerThis2C : public BasicCallbackManagerThis< BasicCallbackManager<addr0, addr1, 0, 0, 0, SimpleSuperManagerThiscall<PatcherCALL1_THIS> > >
{
};

// One address and JMP patching method, + Thiscall calling convenition
template<uintptr_t addr0>
struct CallbackManagerThis1J : public BasicCallbackManagerThis< BasicCallbackManager<addr0, 0, 0, 0, 0, SimpleSuperManagerThiscall<PatcherJMP1_THIS> > >
{
};
