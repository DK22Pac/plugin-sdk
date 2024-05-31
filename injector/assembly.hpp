#pragma once
/*
// Original assembly.hpp functions moved to SafetyHook
*/
#include "injector.hpp"
#include "..\safetyhook\safetyhook.hpp"

namespace injector
{
    using reg_pack = SafetyHookContext;
    namespace injector_asm
    {
        // Wrapper functor, so the assembly can use some templating
        template<class T>
        struct wrapper
        {
            static void call(reg_pack* regs)
            {
                T fun; fun(*regs);
            }
        };

        // Constructs a reg_pack and calls the wrapper functor
        template<class W>   // where W is of type wrapper
        inline void make_reg_pack_and_call(memory_pointer_tr at)
        {
            static std::vector<SafetyHookMid> pack;
            auto m = safetyhook::create_mid(at.get<void>(), [](reg_pack& ctx)
            {
                W::call(&ctx);
            });
            pack.emplace_back(std::move(m));
        }
    };

    /*
     *  MakeInline
     *      Makes inline assembly (but not assembly, an actual functor of type FuncT) at address
     */
    template<class FuncT>
    void MakeInline(memory_pointer_tr at)
    {
        MakeNOP(at, 5);
        typedef injector_asm::wrapper<FuncT> functor;
        if(false) functor::call(nullptr);   // To instantiate the template, if not done _asm will fail
        injector_asm::make_reg_pack_and_call<functor>(at);
    }

    /*
     *  MakeInline
     *      Same as above, but it NOPs everything between at and end (exclusive), then performs MakeInline
     */
    template<class FuncT>
    void MakeInline(memory_pointer_tr at, memory_pointer_tr end)
    {
        MakeRangedNOP(at, end);
        MakeInline<FuncT>(at);
    }

    /*
     *  MakeInline
     *      Same as above, but (at,end) are template parameters.
     *      On this case the functor can be passed as argument since there will be one func instance for each at,end not just for each FuncT
     */
    template<uintptr_t at, uintptr_t end, class FuncT>
    void MakeInline(FuncT func)
    {
        static std::unique_ptr<FuncT> static_func;
        static_func.reset(new FuncT(std::move(func)));

        // Encapsulates the call to static_func
        struct Caps
        {
            void operator()(reg_pack& regs)
            { (*static_func)(regs); }
        };

        // Does the actual MakeInline
        return MakeInline<Caps>(lazy_pointer<at>::get(), lazy_pointer<end>::get());
    }

    template<class FuncT>
    void MakeInline(memory_pointer_tr at, memory_pointer_tr end, FuncT func) {
        static std::unique_ptr<FuncT> static_func;
        static_func.reset(new FuncT(std::move(func)));

        // Encapsulates the call to static_func
        struct Caps {
            void operator()(reg_pack& regs) {
                (*static_func)(regs);
            }
        };

        // Does the actual MakeInline
        return MakeInline<Caps>(at, end);
    }

    /*
     *  MakeInline
     *      Same as above, but (end) is calculated by the length of a call instruction
     */
    template<uintptr_t at, class FuncT>
    void MakeInline(FuncT func)
    {
        MakeNOP(at, 5);
        return MakeInline<at, at+5, FuncT>(func);
    }
};

