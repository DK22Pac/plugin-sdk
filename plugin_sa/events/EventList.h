#pragma once
#include "injector/hooking.hpp"
#include <vector>
#include <algorithm>
#include <tuple>

class CPed;
class CVehicle;
class CObject;

namespace plugin
{
    template<uintptr_t... Address>
    struct AddressList {};

    enum eHookType {
        H_CALL,
        H_JUMP
    };

    enum eDefaultPriority {
        PR_BEF,
        PR_AFT
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
            injector::make_static_hook<hook_type>([this](hook_type::func_type func, Args... args) {
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

    template<template<uintptr_t, class> class Injector, class AddrList /* AddressList<...> */, eDefaultPriority Priority, class ArgPicker, class Prototype>
    class BaseEvent;

    template<template<uintptr_t, class> class Injector, class AddrList, eDefaultPriority Priority, class ArgPicker, class Ret, class... Args>
    class BaseEvent<Injector, AddrList, Priority, ArgPicker, Ret(Args...)>
    {
    public:
        BaseEventI<Injector, AddrList, ArgPicker, Ret(Args...)> &GetInstance() {
            static BaseEventI<Injector, AddrList, ArgPicker, Ret(Args...)> instance;
            return instance;
        }

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
            if (Priority == PR_BEF)
                GetInstance().AddBefore(cb);
            else
                GetInstance().AddAfter(cb);
            return *this;
        }
    };

    template<class AddrList, eDefaultPriority Priority, class ArgPicker, class Prototype>
    using CdeclEvent = BaseEvent<injector::function_hooker, AddrList, Priority, ArgPicker, Prototype>;

    template<class AddrList, eDefaultPriority Priority, class ArgPicker, class Prototype>
    using StdcallEvent = BaseEvent<injector::function_hooker_stdcall, AddrList, Priority, ArgPicker, Prototype>;

    template<class AddrList, eDefaultPriority Priority, class ArgPicker, class Prototype>
    using ThiscallEvent = BaseEvent<injector::function_hooker_thiscall, AddrList, Priority, ArgPicker, Prototype>;

    namespace Events
    {
        extern CdeclEvent    <AddressList<0x53E293, H_CALL>, PR_AFT, ArgPickNone,            void()>          drawingEvent;
        extern CdeclEvent    <AddressList<0x53E4FF, H_CALL>, PR_AFT, ArgPickNone,            void()>          drawHudEvent;
        extern CdeclEvent    <AddressList<0x58FC53, H_CALL>, PR_AFT, ArgPickNone,            void()>          drawRadarEvent;
        extern CdeclEvent    <AddressList<0x58AA2D, H_JUMP,
                                          0x575B44, H_CALL>, PR_AFT, ArgPickNone,            void()>          drawBlipsEvent;
        extern CdeclEvent    <AddressList<0x5759E4, H_CALL,
                                          0x5869BF, H_CALL>, PR_AFT, ArgPickNone,            void(bool)>      drawRadarOverlayEvent;
        extern CdeclEvent    <AddressList<0x5BF3A1, H_CALL>, PR_AFT, ArgPickNone,            void()>          initRwEvent;
        extern CdeclEvent    <AddressList<0x53D910, H_CALL>, PR_BEF, ArgPickNone,            void()>          shutdownRwEvent;
        extern ThiscallEvent <AddressList<0x6D5F2F, H_CALL>, PR_AFT, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleCtorEvent;
        extern ThiscallEvent <AddressList<0x6E2D35, H_CALL>, PR_BEF, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleDtorEvent;
        extern ThiscallEvent <AddressList<0x5E8052, H_CALL>, PR_AFT, ArgPickN<CPed*, 0>,     void(CPed*)>     pedCtorEvent;
        extern ThiscallEvent <AddressList<0x5E880C, H_CALL>, PR_BEF, ArgPickN<CPed*, 0>,     void(CPed*)>     pedDtorEvent;
        extern ThiscallEvent <AddressList<0x5A1D2D, H_CALL,
                                          0x5A1D8D, H_CALL, 0x5A1E0E, H_CALL,
                                          0x5A1FA3, H_CALL,
                                          0x5A2018, H_CALL>, PR_AFT, ArgPickN<CObject*, 0>,  void(CObject*)>  objectCtorEvent;
        extern ThiscallEvent <AddressList<0x59F82A, H_CALL>, PR_BEF, ArgPickN<CObject*, 0>,  void(CObject*)>  objectDtorEvent;
        extern CdeclEvent    <AddressList<0x5BF85B, H_CALL>, PR_AFT, ArgPickNone,            void()>          initPoolsEvent;
        extern CdeclEvent    <AddressList<0x53CA5C, H_CALL>, PR_AFT, ArgPickNone,            void()>          shutdownPoolsEvent;
        extern ThiscallEvent <AddressList<0x6C4523, H_CALL,
                                          0x6D0E89, H_JUMP>, PR_BEF, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleRenderEvent;
        extern ThiscallEvent <AddressList<0x5E77FC, H_CALL,
                                          0x5E780A, H_CALL>, PR_BEF, ArgPickN<CPed*, 0>,     void(CPed*) >    pedRenderEvent;
        extern ThiscallEvent <AddressList<0x59F1ED, H_JUMP>, PR_BEF, ArgPickN<CObject*, 0>,  void(CObject*)>  objectRenderEvent;
        extern CdeclEvent    <AddressList<0x7F79E1, H_CALL,
                                          0x7F7BAB, H_CALL, 0x7F8253, H_CALL, 0x7F83F3, H_CALL,
                                          0x7F8714, H_CALL, 0x7F881B, H_CALL, 0x7F8BCA, H_CALL,
                                          0x7F8CDD, H_CALL, 0x7F9299, H_CALL, 0x7F9463, H_CALL,
                                          0x7F97DB, H_CALL,
                                          0x7F9A5F, H_CALL,
                                          0x7F9B8C, H_CALL>, PR_AFT, ArgPickNone,            void()>          d3dResetEvent;
        extern CdeclEvent    <AddressList<0x7F795B, H_CALL,
                                          0x7F7A77, H_CALL, 0x7F817D, H_CALL, 0x7F831D, H_CALL,
                                          0x7F8688, H_CALL, 0x7F87AA, H_CALL, 0x7F8B4A, H_CALL,
                                          0x7F8C60, H_CALL, 0x7F9213, H_CALL, 0x7F932F, H_CALL,
                                          0x7F9706, H_CALL,
                                          0x7F9A0C, H_CALL,
                                          0x7F9B39, H_CALL>, PR_AFT, ArgPickNone,            void()>          d3dLostEvent;
        extern CdeclEvent    <AddressList<0x53E981, H_CALL>, PR_AFT, ArgPickNone,            void()>          gameProcessEvent;
        extern CdeclEvent    <AddressList<0x748CFB, H_CALL>, PR_AFT, ArgPickNone,            void()>          initGameEvent;
        extern CdeclEvent    <AddressList<0x748E09, H_CALL,
                                          0x748E48, H_CALL>, PR_AFT, ArgPickNone,            void()>          reInitGameEvent;
    }
}