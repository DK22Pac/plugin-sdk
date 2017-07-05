/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "..\injector\hooking.hpp"
#include <vector>
#include <algorithm>
#include <tuple>

namespace plugin
{
    template<uintptr_t... Address>
    struct AddressList {};

    enum eHookType {
        H_CALL,
        H_JUMP
    };

    enum eEventPriority {
        PRIORITY_BEFORE,
        PRIORITY_AFTER
    };

    struct ArgPickNone
    {
        using CallbackType = std::function<void()>;

        template<typename Tuple>
        void operator()(CallbackType fun, Tuple& t) const
        {
            fun();
        }
    };

    template<class Type, size_t N>
    struct ArgPickN
    {
        using CallbackType = std::function<void(Type)>;

        template<typename Tuple>
        void operator()(CallbackType fun, Tuple& t) const
        {
            fun(std::get<N>(t));
        }
    };

    template<class Type, size_t N, class Type2, size_t N2>
    struct ArgPick2N
    {
        using CallbackType = std::function<void(Type, Type2)>;

        template<typename Tuple>
        void operator()(CallbackType fun, Tuple& t) const
        {
            fun(std::get<N>(t), std::get<N2>(t));
        }
    };

    template<template<uintptr_t, class> class Injector, class AddrList /* AddressList<...> */, class ArgPicker, class Prototype>
    class BaseEventI;

    template<template<uintptr_t, class> class Injector, class AddrList, class ArgPicker, class Ret, class... Args>
    class BaseEventI<Injector, AddrList, ArgPicker, Ret(Args...)>
    {
    public:
        using CallbackType = typename ArgPicker::CallbackType;

        void AddBefore(CallbackType cb)
        {
            Patch();
            vecBefore.emplace_back(std::move(cb));
        }

        void AddAfter(CallbackType cb)
        {
            Patch();
            vecAfter.emplace_back(std::move(cb));
        }

    private:
        bool bPatched = false;
        std::vector<CallbackType> vecBefore;
        std::vector<CallbackType> vecAfter;

        void Patch()
        {
            if (this->bPatched == false)
            {
                this->bPatched = true;
                PatchAll(AddrList());
            }
        }


        void PatchAll(AddressList<>)
        {
        }

        template<uintptr_t Addr, uintptr_t HookType, uintptr_t... MoreHooks>
        void PatchAll(AddressList<Addr, HookType, MoreHooks...>)
        {
            // Using void* instead of Ret as the return value because we need to capture the return value and return that,
            // and void* has the size of the x86/x64 (and most arches) register types, so let's use that.
            using hook_type = Injector<Addr, void*(Args...)>;
            injector::make_static_hook<hook_type>([this](typename hook_type::func_type func, Args... args) {
                auto arg_tie = std::forward_as_tuple(std::forward<Args>(args)...);
                std::for_each(vecBefore.begin(), vecBefore.end(), [&](CallbackType& fun) { ArgPicker()(fun, arg_tie); });
                void* ret = func(std::forward<Args>(args)...);
                std::for_each(vecAfter.begin(), vecAfter.end(), [&](CallbackType& fun) { ArgPicker()(fun, arg_tie); });
                return ret;
            });
            if (HookType == H_JUMP) injector::WriteMemory<uint8_t>(Addr, 0xE9, true);
            PatchAll(AddressList<MoreHooks...>());
        }
    };

    template<template<uintptr_t, class> class Injector, class AddrList /* AddressList<...> */, eEventPriority Priority, class ArgPicker, class Prototype>
    class BaseEvent;

    template<template<uintptr_t, class> class Injector, class AddrList, eEventPriority Priority, class ArgPicker, class Ret, class... Args>
    class BaseEvent<Injector, AddrList, Priority, ArgPicker, Ret(Args...)>
    {
    protected:
        BaseEventI<Injector, AddrList, ArgPicker, Ret(Args...)> &GetInstance() {
            static BaseEventI<Injector, AddrList, ArgPicker, Ret(Args...)> instance;
            return instance;
        }
    public:
        using CallbackType = typename ArgPicker::CallbackType;

        class EventBefore {
            BaseEvent &parent;
        public:
            EventBefore(BaseEvent &p) : parent(p) {}
            EventBefore& operator+=(CallbackType cb) {
                parent.GetInstance().AddBefore(cb);
                return *this;
            }
        } before;

        class EventAfter {
            BaseEvent &parent;
        public:
            EventAfter(BaseEvent &p) : parent(p) {}
            EventAfter& operator+=(CallbackType cb) {
                parent.GetInstance().AddAfter(cb);
                return *this;
            }
        } after;

        BaseEvent() : before(*this), after(*this) {}

        BaseEvent& operator+=(CallbackType cb) {
            if (Priority == PRIORITY_BEFORE)
                GetInstance().AddBefore(cb);
            else
                GetInstance().AddAfter(cb);
            return *this;
        }

        void Add(CallbackType cb, eEventPriority priority = Priority) {
            if (priority == PRIORITY_BEFORE)
                GetInstance().AddBefore(cb);
            else
                GetInstance().AddAfter(cb);
        }
    };

    template<class AddrList, eEventPriority Priority, class ArgPicker, class Prototype>
    using CdeclEvent = BaseEvent<injector::function_hooker, AddrList, Priority, ArgPicker, Prototype>;

    template<class AddrList, eEventPriority Priority, class ArgPicker, class Prototype>
    using StdcallEvent = BaseEvent<injector::function_hooker_stdcall, AddrList, Priority, ArgPicker, Prototype>;

    template<class AddrList, eEventPriority Priority, class ArgPicker, class Prototype>
    using ThiscallEvent = BaseEvent<injector::function_hooker_thiscall, AddrList, Priority, ArgPicker, Prototype>;
}