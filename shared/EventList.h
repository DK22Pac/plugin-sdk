/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "../injector/hooking.hpp"
#include "ArgPicker.h"
#include "RefList.h"
#include "GameVersion.h"
#include <vector>
#include <algorithm>
#include <tuple>

namespace plugin {

enum eHookType {
    H_CALL = 0,
    H_JUMP = 1,
    H_CALLBACK = 2
};

enum eEventPriority {
    PRIORITY_BEFORE = 0,
    PRIORITY_AFTER = 1
};

// calling conventions
struct CallingConventions {
    struct Cdecl {};
    struct Thiscall {};
};

template<template<class, uintptr_t, class> class Injector, class RList /* RefList<...> */, class ArgPicker, class Prototype>
class BaseEventI;

template<template<class, uintptr_t, class> class Injector, class RList, class ArgPicker, class Ret, class... Args>
class BaseEventI<Injector, RList, ArgPicker, Ret(Args...)> {
public:
    using SelectedArgPicker = std::conditional_t<std::is_same<ArgPicker, DefaultArgs>::value,
        DefaultArgPicker<Args...>, ArgPicker>;

    using CallbackType = typename SelectedArgPicker::CallbackType;
    using FnPtrType = typename SelectedArgPicker::FnPtrType;
    using HookInfo = std::pair<CallbackType, unsigned int>;
    using HookList = std::list<HookInfo>;

    void Add(HookList &hooks, CallbackType const &cb, unsigned int id) {
        bool can_add = true;
        if (id == 0) {
            FnPtrType const *target = cb. template target<FnPtrType>();
            if (target)
                can_add = !HasFunctionPtr(hooks, *target);
        }
        else
            can_add = !HasFunctionId(hooks, id);
        if (can_add) {
            Patch();
            hooks.emplace_back(cb, id);
        }
    }

    void AddBefore(CallbackType const &cb, unsigned int id) { Add(hooksBefore, cb, id); }
    void AddAfter(CallbackType const &cb, unsigned int id) { Add(hooksAfter, cb, id); }

    void Remove(HookList &hooks, FnPtrType fn) {
        auto end = std::remove_if(hooks.begin(), hooks.end(), [&fn](HookInfo &hook) {
            FnPtrType *ptr = hook.first. template target<FnPtrType>();
            return ptr && *ptr == fn;
        });
        hooks.erase(end, hooks.end());
    }

    void RemoveBefore(FnPtrType fn) { Remove(hooksBefore, fn); }
    void RemoveAfter(FnPtrType fn) { Remove(hooksAfter, fn); }

    void RemoveById(HookList &hooks, unsigned int id) {
        if (id == 0)
            return;
        auto end = std::remove_if(hooks.begin(), hooks.end(), [&id](HookInfo &hook) {
            return hook.second == id;
        });
        hooks.erase(end, hooks.end());
    }

    void RemoveBeforeById(unsigned int id) { RemoveById(hooksBefore, id); }
    void RemoveAfterById(unsigned int id) { RemoveById(hooksAfter, id); }

private:
    bool bPatched = false;
    HookList hooksBefore;
    HookList hooksAfter;

    bool HasFunctionPtr(HookList &hooks, FnPtrType fn) {
        for (auto &hook : hooks) {
            FnPtrType const *ptr = hook.first. template target<FnPtrType>();
            if (ptr && *ptr == fn)
                return true;
        }
        return false;
    }

    bool HasFunctionId(HookList &hooks, unsigned int id) {
        for (auto &hook : hooks) {
            if (hook.second == id)
                return true;
        }
        return false;
    }

    void Patch() {
        if (bPatched == false) {
            bPatched = true;
            PatchAll(RList());
        }
    }

    void PatchAll(RefList<>) {}

    template<int RefAddr, int GameVersion, int RefType, int RefObjectId, int RefIndexInObject, int... MoreHooks>
    void PatchAll(RefList<RefAddr, GameVersion, RefType, RefObjectId, RefIndexInObject, MoreHooks...>) {
        if (GameVersion == GetGameVersion()) {
            // Using void* instead of Ret as the return value because we need to capture the return value and return that,
            // and void* has the size of the x86/x64 (and most arches) register types, so let's use that.
            using hook_type = Injector<std::conditional_t<RefType == H_CALL, injector::scoped_call,
                std::conditional_t<RefType == H_JUMP, injector::scoped_jmp, injector::scoped_callback>>,
                RefAddr, void*(Args...)>;
            injector::make_static_hook<hook_type>([this](typename hook_type::func_type func, Args... args) {
                auto arg_tie = std::forward_as_tuple(std::forward<Args>(args)...);
                std::for_each(hooksBefore.begin(), hooksBefore.end(), [&](HookInfo& hook) {
                    SelectedArgPicker()(hook.first, arg_tie);
                });
                void* ret = func(std::forward<Args>(args)...);
                std::for_each(hooksAfter.begin(), hooksAfter.end(), [&](HookInfo& hook) {
                    SelectedArgPicker()(hook.first, arg_tie);
                });
                return ret;
            });
        }
        PatchAll(RefList<MoreHooks...>());
    }
};

template<template<class, uintptr_t, class> class Injector, class RList /* RefList<...> */, int Priority, class ArgPicker, class Prototype>
class BaseEvent;

template<template<class, uintptr_t, class> class Injector, class RList, int Priority, class ArgPicker, class Ret, class... Args>
class BaseEvent<Injector, RList, Priority, ArgPicker, Ret(Args...)> {
protected:
    BaseEventI<Injector, RList, ArgPicker, Ret(Args...)> &GetInstance() {
        static BaseEventI<Injector, RList, ArgPicker, Ret(Args...)> instance;
        return instance;
    }
public:
    using SelectedArgPicker = std::conditional_t<std::is_same<ArgPicker, DefaultArgs>::value,
        DefaultArgPicker<Args...>, ArgPicker>;

    using CallbackType = typename SelectedArgPicker::CallbackType;
    using FnPtrType = typename SelectedArgPicker::FnPtrType;

    class EventBefore {
        BaseEvent &parent;
    public:
        EventBefore(BaseEvent &p) : parent(p) {}

        EventBefore& AddAtId(unsigned int id, CallbackType const &cb) {
            parent.GetInstance().AddBefore(cb, id);
            return *this;
        }

        EventBefore& Add(CallbackType const &cb) {
            return AddAtId(0, cb);
        }

        EventBefore& Remove(FnPtrType fn) {
            parent.GetInstance().RemoveBefore(fn);
            return *this;
        }

        EventBefore& RemoveById(unsigned int id) {
            parent.GetInstance().RemoveBeforeById(id);
            return *this;
        }

        EventBefore& operator+=(CallbackType const &cb) { return Add(cb); }
        EventBefore& operator-=(FnPtrType fn) { return Remove(fn); }
    } before;

    class EventAfter {
        BaseEvent &parent;
    public:
        EventAfter(BaseEvent &p) : parent(p) {}

        EventAfter& AddAtId(unsigned int id, CallbackType const &cb) {
            parent.GetInstance().AddAfter(cb, id);
            return *this;
        }

        EventAfter& Add(CallbackType const &cb) {
            return AddAtId(0, cb);
        }

        EventAfter& Remove(FnPtrType fn) {
            parent.GetInstance().RemoveAfter(fn);
            return *this;
        }

        EventAfter& RemoveById(unsigned int id) {
            parent.GetInstance().RemoveAfterById(id);
            return *this;
        }

        EventAfter& operator+=(CallbackType const &cb) { return Add(cb); }
        EventAfter& operator-=(FnPtrType fn) { return Remove(fn); }
    } after;

    BaseEvent() : before(*this), after(*this) {}
    BaseEvent(CallbackType const &cb) : before(*this), after(*this) { Add(cb); }
    BaseEvent(CallbackType const &cb, unsigned int id) : before(*this), after(*this) { AddAtId(cb, id); }

    BaseEvent(CallbackType const &cb_before, CallbackType const &cb_after) : before(*this), after(*this) {
        Add(cb_before, PRIORITY_BEFORE);
        Add(cb_after, PRIORITY_AFTER);
    }

    BaseEvent(CallbackType const &cb_before, unsigned int id_before,
        CallbackType const &cb_after, unsigned int id_after) : before(*this), after(*this)
    {
        AddAtId(id_before, cb_before, PRIORITY_BEFORE);
        AddAtId(id_after, cb_after, PRIORITY_AFTER);
    }

    BaseEvent& AddAtId(unsigned int id, CallbackType const &cb, int priority = Priority) {
        if (priority == PRIORITY_BEFORE)
            GetInstance().AddBefore(cb, id);
        else
            GetInstance().AddAfter(cb, id);
        return *this;
    }

    BaseEvent& Add(CallbackType const &cb, int priority = Priority) {
        return AddAtId(0, cb, priority);
    }

    BaseEvent& Remove(FnPtrType fn, int priority = Priority) {
        if (priority == PRIORITY_BEFORE)
            GetInstance().RemoveBefore(fn);
        else
            GetInstance().RemoveAfter(fn);
        return *this;
    }

    BaseEvent& RemoveById(unsigned int id, int priority = Priority) {
        if (priority == PRIORITY_BEFORE)
            GetInstance().RemoveBeforeById(id);
        else
            GetInstance().RemoveAfterById(id);
        return *this;
    }

    BaseEvent& AddBeforeAtId(unsigned int id, CallbackType const &cb) {
        GetInstance().AddBefore(cb, id);
        return *this;
    }

    BaseEvent& AddBefore(CallbackType const &cb) {
        return AddBeforeAtId(0, cb);
    }

    BaseEvent& RemoveBefore(FnPtrType fn) {
        GetInstance().RemoveBefore(fn);
        return *this;
    }

    BaseEvent& RemoveBeforeById(unsigned int id) {
        GetInstance().RemoveBeforeById(id);
        return *this;
    }

    BaseEvent& AddAfterAtId(unsigned int id, CallbackType const &cb) {
        GetInstance().AddAfter(cb, id);
        return *this;
    }

    BaseEvent& AddAfter(CallbackType const &cb) {
        return AddAfterAtId(0, cb);
    }

    BaseEvent& RemoveAfter(FnPtrType fn) {
        GetInstance().RemoveAfter(fn);
        return *this;
    }

    BaseEvent& RemoveAfterById(unsigned int id) {
        GetInstance().RemoveAfterById(id);
        return *this;
    }

    BaseEvent& operator+=(CallbackType const &cb) { return Add(cb); }
    BaseEvent& operator-=(FnPtrType fn) { return Remove(fn); }
};

template<class RList, int Priority, class ArgPicker, class Prototype>
using CdeclEvent = BaseEvent<injector::function_hooker, RList, Priority, ArgPicker, Prototype>;

template<class RList, int Priority, class ArgPicker, class Prototype>
using StdcallEvent = BaseEvent<injector::function_hooker_stdcall, RList, Priority, ArgPicker, Prototype>;

template<class RList, int Priority, class ArgPicker, class Prototype>
using ThiscallEvent = BaseEvent<injector::function_hooker_thiscall, RList, Priority, ArgPicker, Prototype>;

}
