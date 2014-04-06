/*
 *  Injectors - Function Calls Using Variadic Templates
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
#include "injector.hpp"
#include <utility>

#if __cplusplus < 201103L
#error "This feature is not supported on this compiler"
#endif

namespace injector
{
    // Call function at @p returning @Ret with args @Args
    template<class Ret, class ...Args>
    inline Ret Call(memory_pointer_tr p, Args&&... a)
    {
        Ret(*fn)(Args...) = p.get();
        return fn(std::forward<Args>(a)...);
    }
    
    template<class Ret, class ...Args>
    inline Ret StdCall(memory_pointer_tr p, Args&&... a)
    {
        Ret(__stdcall *fn)(Args...) = p.get();
        return fn(std::forward<Args>(a)...);
    }
    
    template<class Ret, class ...Args>
    inline Ret ThisCall(memory_pointer_tr p, Args&&... a)
    {
        Ret(__thiscall *fn)(Args...) = p.get();
        return fn(std::forward<Args>(a)...);
    }

    template<class Ret, class ...Args>
    inline Ret FastCall(memory_pointer_tr p, Args&&... a)
    {
        Ret(__fastcall *fn)(Args...) = p.get();
        return fn(std::forward<Args>(a)...);
    }
    
} 

